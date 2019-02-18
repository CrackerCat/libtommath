#include "tommath_private.h"
#ifdef BN_MP_SET_LONG_DOUBLE_C
/* LibTomMath, multiple-precision integer library -- Tom St Denis
 *
 * LibTomMath is a library that provides multiple-precision
 * integer arithmetic as well as number theoretic functionality.
 *
 * The library was designed directly after the MPI library by
 * Michael Fromberger but has been written from scratch with
 * additional optimizations in place.
 *
 * SPDX-License-Identifier: Unlicense
 */
#include <float.h>
#if ( (defined LDBL_MAX_EXP) && (FLT_RADIX == 2) )

/*  
    We can work bare-metal with x86's 80 bit doubles because we can test for it
    and that architecture (used by Intel and AMD) is the only one using that
    type of extended precision and is always little endian.

    Well, that is not completely true. Wikipedia says:

    "The Motorola 6888x math coprocessors and the Motorola 68040 and 68060 processors
     support this same 64-bit significand extended precision type (similar to the Intel
     format although padded to a 96-bit format with 16 unused bits inserted between the
     exponent and significand fields[15]). The follow-on Coldfire processors do not
     support this 96-bit extended precision format.[16]

     The x87 and Motorola 68881 80-bit formats meet the requirements of the IEEE 754
     double extended format,[17] as does the IEEE 754 128-bit format."

    There is also the use of implementation defined types in the bit field. That
    restricts the range of compilers, too. Currently only GCC and CLANG (generic)
    are allowed. It is unknown from which version on (tested with gcc 4.8 and clang
    4.2.1 which are both quite old).

    If there are any other problems: please use the second function here and contact
    the authors.
 */
#if (     (LDBL_MANT_DIG == 64) && (LDBL_MAX_EXP == 16384) && (defined UINT64_MAX) \
      &&  ((defined __STDC_IEC_559__) || (defined __GCC_IEC_559)) \
      && !( (defined __m68k__) || (defined __MC68K__) || (defined M68000)) \
      &&  ( (defined __GNUCC__) || (defined __clang__) )
    )

/* To avoid "magic numbers". Some people don't like them, even if their meaning is obvious */
/* Bits in mantissa without the integer bit  */
#define SIGNIFICANT (LDBL_MANT_DIG - 1)
/* bias */
#define BIAS (LDBL_MAX_EXP - 1)
/* Maximal unbiased exponent (all ones) */
#define MAX_UNBIASED_EXPONENT ((2*LDBL_MAX_EXP) - 1)
/* Bitlength of actual exponent */
#define EXPONENT_BITS 15
int mp_set_long_double(mp_int * a, long double b)
{
  uint64_t frac;
  int exp, res;

  /*
       padding + 10-byte double (80 bits):
       unused 2 byte on i386, 6 byte on x86_84/ia64
       sign    1 bit  79
       exp    15 bits 78-64     bias 16383
       intbit  1 bit  63        set if normalized
       man    63 bits 62-0

   */
  /*
     TODO:
     This is not standard C, support of the types
     uint64_t and uint16_t are implementation defined
     if they do not translate to one of the allowed
     types "int", "unsigned int", or "signed int"
     (additionally "_Bool" in C11).
   */
  union {
    long double ldbl;
    struct {
      uint64_t fraction;
      uint16_t exponent:EXPONENT_BITS;
      /* A bit large, admitted */
      uint16_t sign:1;
      /* fill up (i368: to 12 bytes, x86_64: to 16 bytes */
      uint16_t padding;
    } ldbl_guts;
  } cast;

  cast.ldbl = b;

  exp = (int)cast.ldbl_guts.exponent;
  frac = cast.ldbl_guts.fraction;

  /*
      Table from  https://en.wikipedia.org/wiki/Extended_precision

      exp     ind    fract      diagnosis
        0       0    zero       zero
        0       0    non-zero   denormal
        0       1    anything   ? (legacy from before the 386)

       ~0      00    zero       invalid (legacy from before the 386)
       ~0      00    non-zero   invalid (legacy from before the 386)
       ~0      01    anything   invalid (legacy from before the 386)

       ~0      10    zero       infinity
       ~0      10    non-zero   sNaN
       ~0      11    zero       qNaN
       ~0      11    non-zero   qNaN

      any      0x    anything
   */

  /* +-inf, xNaN and "invalid" */
  if (exp == MAX_UNBIASED_EXPONENT) {
     return MP_VAL;
  }

  mp_zero(a);

  /* zero and denormals*/
  if (exp == 0 ) {
     return MP_OKAY;
  }

  /* The format of a "long double" is a bit different */

  /* normalize exponent */
  exp -= BIAS + SIGNIFICANT;

  res = mp_set_long_long(a, frac);
  if (res != MP_OKAY) {  puts("CCC");
    return res;
  }

  res = (exp < 0) ? mp_div_2d(a, -exp, a, NULL) : mp_mul_2d(a, exp, a);
  if (res != MP_OKAY) {
    return res;
  }

  if (cast.ldbl_guts.sign == 1) {
    SIGN(a) = MP_NEG;
  }

  return MP_OKAY;
}
#else
static long double s_math_h_less_frexp(long double x, int *exp)
{
   int exponent = 0, i;
   long double high = 2.0;
   long double low = 0.5;

   if (x >= 1.0L) {
      for (i = 0; x >= high; i++) {
         exponent += (1 << i);
         x *= low;
         low *= low;
         high *= high;
      }
      if (x < 0.5L) {
        while (x < 0.5L) {
          x *= 2.0L;
          exponent--;
        }
      }
      else {
         while (x >= 1.0L) {
            x /= 2.0L;
            exponent++;
         }
      }
   }
   *exp = exponent;
   return x;
}

int mp_set_long_double(mp_int *a, long double b)
{
   int exp = 0, res, sign = MP_ZPOS;
   /* Check for NaN */
   if (b != b) {
      return MP_VAL;
   }

   if (b < 0.0L) {
      b = b * (-1.0L);
      sign = MP_NEG;
   }

   /* Check for infinity */
   if ( b > LDBL_MAX) {
      return MP_VAL;
   }

   mp_zero(a);
   /* Numbers smaller than 1 truncate to zero */
   if (b < 1.0L) {
      a->sign = sign;
      return MP_OKAY;
   }

   b = s_math_h_less_frexp(b, &exp);

   while (exp-- >= 0) {
      b *= 2.0L;
      if (b >= 1.0L) {
         if ((res = mp_add_d(a, 1, a)) != MP_OKAY) {
            return res;
         }
         b -= 1.0L;
      }

      if (exp >= 0) {
         if ((res = mp_mul_2d(a, 1, a)) != MP_OKAY) {
            return res;
         }
      }
      if (b == 0.0L) {
         exp--;
         break;
      }
   }

   if (res != MP_OKAY) {
      return res;
   }

   res = (exp < 0) ? mp_div_2d(a, -exp, a, NULL) : mp_mul_2d(a, exp, a);
   if (res != MP_OKAY) {
      return res;
   }

   SIGN(a) = sign;

   return MP_OKAY;
}
#endif
#else
/* pragma message() not supported by several compilers (in mostly older but still used versions) */
#  ifdef _MSC_VER
#    pragma message("The type 'long double' does not seem to be supported on your system.")
#    pragma message("If that is wrong please contact the team at https://github.com/libtommath/")
#  else
#    warning "The type 'long double' does not seem to be supported on your system."
#    warning "If that is wrong please contact the team at https://github.com/libtommath/"
#  endif
#if (FLT_RADIX == 16)
#  ifdef _MSC_VER
#    pragma message("No radices other than two are supported. IBM's z/OS uses IEEE-754 compliant floats")
#    pragma message("with the compiler option FLOAT(IEEE)")
#  else
#    warning "No radices other than two are supported. IBM's z/OS uses IEEE-754 compliant floats"
#    warning "with the compiler option FLOAT(IEEE)"
#  endif
#endif
#endif
#endif

/* ref:         $Format:%D$ */
/* git commit:  $Format:%H$ */
/* commit time: $Format:%ai$ */
