/* LibTomMath, multiple-precision integer library -- Tom St Denis */
/* SPDX-License-Identifier: Unlicense */

#if !(defined(LTM1) && defined(LTM2) && defined(LTM3))
#if defined(LTM2)
#   define LTM3
#endif
#if defined(LTM1)
#   define LTM2
#endif
#define LTM1
#if defined(LTM_ALL)
#   define MP_2EXPT_C
#   define MP_ABS_C
#   define MP_ADD_C
#   define MP_ADD_D_C
#   define MP_ADDMOD_C
#   define MP_AND_C
#   define MP_CLAMP_C
#   define MP_CLEAR_C
#   define MP_CLEAR_MULTI_C
#   define MP_CMP_C
#   define MP_CMP_D_C
#   define MP_CMP_MAG_C
#   define MP_CNT_LSB_C
#   define MP_COMPLEMENT_C
#   define MP_CONVERSION_C
#   define MP_COPY_C
#   define MP_COUNT_BITS_C
#   define MP_CUTOFFS_C
#   define MP_DECR_C
#   define MP_DEPRECATED_C
#   define MP_DIV_C
#   define MP_DIV_2_C
#   define MP_DIV_2D_C
#   define MP_DIV_3_C
#   define MP_DIV_D_C
#   define MP_DR_IS_MODULUS_C
#   define MP_DR_REDUCE_C
#   define MP_DR_SETUP_C
#   define MP_ERROR_TO_STRING_C
#   define MP_EXCH_C
#   define MP_EXPORT_C
#   define MP_EXPT_D_C
#   define MP_EXPT_D_EX_C
#   define MP_EXPTMOD_C
#   define MP_EXTEUCLID_C
#   define MP_FREAD_C
#   define MP_FWRITE_C
#   define MP_GCD_C
#   define MP_GET_DOUBLE_C
#   define MP_GROW_C
#   define MP_ILOGB_C
#   define MP_IMPORT_C
#   define MP_INCR_C
#   define MP_INIT_C
#   define MP_INIT_COPY_C
#   define MP_INIT_MULTI_C
#   define MP_INIT_SET_C
#   define MP_INIT_SIZE_C
#   define MP_INVMOD_C
#   define MP_IS_SQUARE_C
#   define MP_ISEVEN_C
#   define MP_ISODD_C
#   define MP_KRONECKER_C
#   define MP_LCM_C
#   define MP_LSHD_C
#   define MP_MOD_C
#   define MP_MOD_2D_C
#   define MP_MOD_D_C
#   define MP_MONTGOMERY_CALC_NORMALIZATION_C
#   define MP_MONTGOMERY_REDUCE_C
#   define MP_MONTGOMERY_SETUP_C
#   define MP_MUL_C
#   define MP_MUL_2_C
#   define MP_MUL_2D_C
#   define MP_MUL_D_C
#   define MP_MULMOD_C
#   define MP_N_ROOT_C
#   define MP_N_ROOT_EX_C
#   define MP_NEG_C
#   define MP_OR_C
#   define MP_PRIME_FERMAT_C
#   define MP_PRIME_FROBENIUS_UNDERWOOD_C
#   define MP_PRIME_IS_PRIME_C
#   define MP_PRIME_MILLER_RABIN_C
#   define MP_PRIME_NEXT_PRIME_C
#   define MP_PRIME_RABIN_MILLER_TRIALS_C
#   define MP_PRIME_RAND_C
#   define MP_PRIME_STRONG_LUCAS_SELFRIDGE_C
#   define MP_PRIME_TAB_C
#   define MP_RADIX_SIZE_C
#   define MP_RADIX_SMAP_C
#   define MP_RAND_C
#   define MP_READ_RADIX_C
#   define MP_READ_SIGNED_BIN_C
#   define MP_READ_UNSIGNED_BIN_C
#   define MP_REDUCE_C
#   define MP_REDUCE_2K_C
#   define MP_REDUCE_2K_L_C
#   define MP_REDUCE_2K_SETUP_C
#   define MP_REDUCE_2K_SETUP_L_C
#   define MP_REDUCE_IS_2K_C
#   define MP_REDUCE_IS_2K_L_C
#   define MP_REDUCE_SETUP_C
#   define MP_RSHD_C
#   define MP_SET_C
#   define MP_SET_DOUBLE_C
#   define MP_SHRINK_C
#   define MP_SIGNED_BIN_SIZE_C
#   define MP_SIGNED_RSH_C
#   define MP_SQR_C
#   define MP_SQRMOD_C
#   define MP_SQRT_C
#   define MP_SQRTMOD_PRIME_C
#   define MP_SUB_C
#   define MP_SUB_D_C
#   define MP_SUBMOD_C
#   define MP_TO_SIGNED_BIN_C
#   define MP_TO_SIGNED_BIN_N_C
#   define MP_TO_UNSIGNED_BIN_C
#   define MP_TO_UNSIGNED_BIN_N_C
#   define MP_TORADIX_C
#   define MP_TORADIX_N_C
#   define MP_UNSIGNED_BIN_SIZE_C
#   define MP_XOR_C
#   define MP_ZERO_C
#   define S_MP_ADD_C
#   define S_MP_BALANCE_MUL_C
#   define S_MP_EXPTMOD_C
#   define S_MP_EXPTMOD_FAST_C
#   define S_MP_GET_BIT_C
#   define S_MP_INVMOD_FAST_C
#   define S_MP_INVMOD_SLOW_C
#   define S_MP_KARATSUBA_MUL_C
#   define S_MP_KARATSUBA_SQR_C
#   define S_MP_MONTGOMERY_REDUCE_FAST_C
#   define S_MP_MUL_DIGS_C
#   define S_MP_MUL_DIGS_FAST_C
#   define S_MP_MUL_HIGH_DIGS_C
#   define S_MP_MUL_HIGH_DIGS_FAST_C
#   define S_MP_PRIME_IS_DIVISIBLE_C
#   define S_MP_RAND_JENKINS_C
#   define S_MP_RAND_PLATFORM_C
#   define S_MP_REVERSE_C
#   define S_MP_SQR_C
#   define S_MP_SQR_FAST_C
#   define S_MP_SUB_C
#   define S_MP_TOOM_MUL_C
#   define S_MP_TOOM_SQR_C
#endif
#if defined(MP_2EXPT_C)
#   define MP_ZERO_C
#   define MP_GROW_C
#endif

#if defined(MP_ABS_C)
#   define MP_COPY_C
#endif

#if defined(MP_ADD_C)
#   define S_MP_ADD_C
#   define MP_CMP_MAG_C
#   define S_MP_SUB_C
#endif

#if defined(MP_ADD_D_C)
#   define MP_GROW_C
#   define MP_SUB_D_C
#   define MP_CLAMP_C
#endif

#if defined(MP_ADDMOD_C)
#   define MP_INIT_C
#   define MP_ADD_C
#   define MP_CLEAR_C
#   define MP_MOD_C
#endif

#if defined(MP_AND_C)
#   define MP_GROW_C
#   define MP_CLAMP_C
#endif

#if defined(MP_CLAMP_C)
#endif

#if defined(MP_CLEAR_C)
#endif

#if defined(MP_CLEAR_MULTI_C)
#   define MP_CLEAR_C
#endif

#if defined(MP_CMP_C)
#   define MP_CMP_MAG_C
#endif

#if defined(MP_CMP_D_C)
#endif

#if defined(MP_CMP_MAG_C)
#endif

#if defined(MP_CNT_LSB_C)
#endif

#if defined(MP_COMPLEMENT_C)
#   define MP_NEG_C
#   define MP_SUB_D_C
#endif

#if defined(MP_CONVERSION_C)
#   define MP_INIT_C
#   define MP_SET_U32_C
#   define MP_SET_U64_C
#   define MP_SET_I32_C
#   define MP_SET_I64_C
#   define MP_GET_I32_C
#   define MP_GET_I64_C
#   define MP_GET_MAG32_C
#   define MP_GET_MAG64_C
#   define MP_INIT_U32_C
#   define MP_INIT_I32_C
#   define MP_INIT_U64_C
#   define MP_INIT_I64_C
#endif

#if defined(MP_COPY_C)
#   define MP_GROW_C
#endif

#if defined(MP_COUNT_BITS_C)
#endif

#if defined(MP_CUTOFFS_C)
#endif

#if defined(MP_DECR_C)
#   define MP_SET_C
#   define MP_INCR_C
#   define MP_ZERO_C
#   define MP_SUB_D_C
#endif

#if defined(MP_DEPRECATED_C)
#   define MP_GET_BIT_C
#   define S_MP_GET_BIT_C
#   define MP_JACOBI_C
#   define MP_CMP_D_C
#   define MP_KRONECKER_C
#   define MP_PRIME_RANDOM_EX_C
#   define S_MP_PRIME_RANDOM_EX_C
#   define MP_RAND_DIGIT_C
#   define S_MP_RAND_SOURCE_C
#   define FAST_MP_INVMOD_C
#   define S_MP_INVMOD_FAST_C
#   define FAST_MP_MONTGOMERY_REDUCE_C
#   define S_MP_MONTGOMERY_REDUCE_FAST_C
#   define FAST_S_MP_MUL_DIGS_C
#   define S_MP_MUL_DIGS_FAST_C
#   define FAST_S_MP_MUL_HIGH_DIGS_C
#   define S_MP_MUL_HIGH_DIGS_FAST_C
#   define FAST_S_MP_SQR_C
#   define S_MP_SQR_FAST_C
#   define MP_BALANCE_MUL_C
#   define S_MP_BALANCE_MUL_C
#   define MP_EXPTMOD_FAST_C
#   define S_MP_EXPTMOD_FAST_C
#   define MP_INVMOD_SLOW_C
#   define S_MP_INVMOD_SLOW_C
#   define MP_KARATSUBA_MUL_C
#   define S_MP_KARATSUBA_MUL_C
#   define MP_KARATSUBA_SQR_C
#   define S_MP_KARATSUBA_SQR_C
#   define MP_TOOM_MUL_C
#   define S_MP_TOOM_MUL_C
#   define MP_TOOM_SQR_C
#   define S_MP_TOOM_SQR_C
#   define S_MP_REVERSE_C
#   define MP_TC_AND_C
#   define MP_AND_C
#   define MP_TC_OR_C
#   define MP_OR_C
#   define MP_TC_XOR_C
#   define MP_XOR_C
#   define MP_TC_DIV_2D_C
#   define MP_SIGNED_RSH_C
#   define MP_INIT_SET_INT_C
#   define MP_INIT_U32_C
#   define MP_SET_INT_C
#   define MP_SET_U32_C
#   define MP_SET_LONG_C
#   define MP_SET_U64_C
#   define MP_SET_LONG_LONG_C
#   define MP_GET_INT_C
#   define MP_GET_MAG32_C
#   define MP_GET_LONG_C
#   define MP_GET_MAG64_C
#   define MP_GET_LONG_LONG_C
#   define MP_PRIME_IS_DIVISIBLE_C
#   define S_MP_PRIME_IS_DIVISIBLE_C
#endif

#if defined(MP_DIV_C)
#   define MP_CMP_MAG_C
#   define MP_COPY_C
#   define MP_ZERO_C
#   define MP_INIT_MULTI_C
#   define MP_SET_C
#   define MP_COUNT_BITS_C
#   define MP_ABS_C
#   define MP_MUL_2D_C
#   define MP_CMP_C
#   define MP_SUB_C
#   define MP_ADD_C
#   define MP_DIV_2D_C
#   define MP_EXCH_C
#   define MP_CLEAR_MULTI_C
#   define MP_INIT_SIZE_C
#   define MP_INIT_C
#   define MP_INIT_COPY_C
#   define MP_LSHD_C
#   define MP_RSHD_C
#   define MP_MUL_D_C
#   define MP_CLAMP_C
#   define MP_CLEAR_C
#endif

#if defined(MP_DIV_2_C)
#   define MP_GROW_C
#   define MP_CLAMP_C
#endif

#if defined(MP_DIV_2D_C)
#   define MP_COPY_C
#   define MP_ZERO_C
#   define MP_MOD_2D_C
#   define MP_RSHD_C
#   define MP_CLAMP_C
#endif

#if defined(MP_DIV_3_C)
#   define MP_INIT_SIZE_C
#   define MP_CLAMP_C
#   define MP_EXCH_C
#   define MP_CLEAR_C
#endif

#if defined(MP_DIV_D_C)
#   define MP_COPY_C
#   define MP_DIV_2D_C
#   define MP_DIV_3_C
#   define MP_INIT_SIZE_C
#   define MP_CLAMP_C
#   define MP_EXCH_C
#   define MP_CLEAR_C
#endif

#if defined(MP_DR_IS_MODULUS_C)
#endif

#if defined(MP_DR_REDUCE_C)
#   define MP_GROW_C
#   define MP_CLAMP_C
#   define MP_CMP_MAG_C
#   define S_MP_SUB_C
#endif

#if defined(MP_DR_SETUP_C)
#endif

#if defined(MP_ERROR_TO_STRING_C)
#endif

#if defined(MP_EXCH_C)
#endif

#if defined(MP_EXPORT_C)
#   define MP_INIT_COPY_C
#   define MP_COUNT_BITS_C
#   define MP_DIV_2D_C
#   define MP_CLEAR_C
#endif

#if defined(MP_EXPT_D_C)
#   define MP_EXPT_D_EX_C
#endif

#if defined(MP_EXPT_D_EX_C)
#   define MP_INIT_COPY_C
#   define MP_SET_C
#   define MP_MUL_C
#   define MP_CLEAR_C
#   define MP_SQR_C
#endif

#if defined(MP_EXPTMOD_C)
#   define MP_INIT_C
#   define MP_INVMOD_C
#   define MP_CLEAR_C
#   define MP_ABS_C
#   define MP_CLEAR_MULTI_C
#   define MP_REDUCE_IS_2K_L_C
#   define S_MP_EXPTMOD_C
#   define MP_DR_IS_MODULUS_C
#   define MP_REDUCE_IS_2K_C
#   define S_MP_EXPTMOD_FAST_C
#endif

#if defined(MP_EXTEUCLID_C)
#   define MP_INIT_MULTI_C
#   define MP_SET_C
#   define MP_COPY_C
#   define MP_DIV_C
#   define MP_MUL_C
#   define MP_SUB_C
#   define MP_NEG_C
#   define MP_EXCH_C
#   define MP_CLEAR_MULTI_C
#endif

#if defined(MP_FREAD_C)
#   define MP_ZERO_C
#   define MP_MUL_D_C
#   define MP_ADD_D_C
#endif

#if defined(MP_FWRITE_C)
#   define MP_RADIX_SIZE_C
#   define MP_TORADIX_C
#endif

#if defined(MP_GCD_C)
#   define MP_ABS_C
#   define MP_INIT_COPY_C
#   define MP_CNT_LSB_C
#   define MP_DIV_2D_C
#   define MP_CMP_MAG_C
#   define MP_EXCH_C
#   define S_MP_SUB_C
#   define MP_MUL_2D_C
#   define MP_CLEAR_C
#endif

#if defined(MP_GET_DOUBLE_C)
#endif

#if defined(MP_GROW_C)
#endif

#if defined(MP_ILOGB_C)
#   define MP_SET_U32_C
#   define MP_COUNT_BITS_C
#   define MP_SET_C
#   define MP_CMP_D_C
#   define MP_ZERO_C
#   define MP_INIT_MULTI_C
#   define MP_CMP_C
#   define MP_COPY_C
#   define MP_SQR_C
#   define MP_EXPT_D_C
#   define MP_MUL_C
#   define MP_EXCH_C
#   define MP_CLEAR_MULTI_C
#endif

#if defined(MP_IMPORT_C)
#   define MP_ZERO_C
#   define MP_MUL_2D_C
#   define MP_CLAMP_C
#endif

#if defined(MP_INCR_C)
#   define MP_SET_C
#   define MP_DECR_C
#   define MP_ADD_D_C
#endif

#if defined(MP_INIT_C)
#endif

#if defined(MP_INIT_COPY_C)
#   define MP_INIT_SIZE_C
#   define MP_COPY_C
#   define MP_CLEAR_C
#endif

#if defined(MP_INIT_MULTI_C)
#   define MP_INIT_C
#   define MP_CLEAR_C
#endif

#if defined(MP_INIT_SET_C)
#   define MP_INIT_C
#   define MP_SET_C
#endif

#if defined(MP_INIT_SIZE_C)
#endif

#if defined(MP_INVMOD_C)
#   define MP_CMP_D_C
#   define S_MP_INVMOD_FAST_C
#   define S_MP_INVMOD_SLOW_C
#endif

#if defined(MP_IS_SQUARE_C)
#   define MP_MOD_D_C
#   define MP_INIT_U32_C
#   define MP_MOD_C
#   define MP_GET_U32_C
#   define MP_SQRT_C
#   define MP_SQR_C
#   define MP_CMP_MAG_C
#   define MP_CLEAR_C
#endif

#if defined(MP_ISEVEN_C)
#endif

#if defined(MP_ISODD_C)
#endif

#if defined(MP_KRONECKER_C)
#   define MP_INIT_COPY_C
#   define MP_CNT_LSB_C
#   define MP_DIV_2D_C
#   define MP_CMP_D_C
#   define MP_COPY_C
#   define MP_MOD_C
#   define MP_CLEAR_C
#endif

#if defined(MP_LCM_C)
#   define MP_INIT_MULTI_C
#   define MP_GCD_C
#   define MP_CMP_MAG_C
#   define MP_DIV_C
#   define MP_MUL_C
#   define MP_CLEAR_MULTI_C
#endif

#if defined(MP_LSHD_C)
#   define MP_GROW_C
#endif

#if defined(MP_MOD_C)
#   define MP_INIT_SIZE_C
#   define MP_DIV_C
#   define MP_CLEAR_C
#   define MP_EXCH_C
#   define MP_ADD_C
#endif

#if defined(MP_MOD_2D_C)
#   define MP_ZERO_C
#   define MP_COPY_C
#   define MP_CLAMP_C
#endif

#if defined(MP_MOD_D_C)
#   define MP_DIV_D_C
#endif

#if defined(MP_MONTGOMERY_CALC_NORMALIZATION_C)
#   define MP_COUNT_BITS_C
#   define MP_2EXPT_C
#   define MP_SET_C
#   define MP_MUL_2_C
#   define MP_CMP_MAG_C
#   define S_MP_SUB_C
#endif

#if defined(MP_MONTGOMERY_REDUCE_C)
#   define S_MP_MONTGOMERY_REDUCE_FAST_C
#   define MP_GROW_C
#   define MP_CLAMP_C
#   define MP_RSHD_C
#   define MP_CMP_MAG_C
#   define S_MP_SUB_C
#endif

#if defined(MP_MONTGOMERY_SETUP_C)
#endif

#if defined(MP_MUL_C)
#   define S_MP_BALANCE_MUL_C
#   define S_MP_TOOM_MUL_C
#   define S_MP_KARATSUBA_MUL_C
#   define S_MP_MUL_DIGS_FAST_C
#   define S_MP_MUL_DIGS_C
#endif

#if defined(MP_MUL_2_C)
#   define MP_GROW_C
#endif

#if defined(MP_MUL_2D_C)
#   define MP_COPY_C
#   define MP_GROW_C
#   define MP_LSHD_C
#   define MP_CLAMP_C
#endif

#if defined(MP_MUL_D_C)
#   define MP_GROW_C
#   define MP_CLAMP_C
#endif

#if defined(MP_MULMOD_C)
#   define MP_INIT_SIZE_C
#   define MP_MUL_C
#   define MP_CLEAR_C
#   define MP_MOD_C
#endif

#if defined(MP_N_ROOT_C)
#   define MP_N_ROOT_EX_C
#endif

#if defined(MP_N_ROOT_EX_C)
#   define MP_INIT_MULTI_C
#   define MP_COUNT_BITS_C
#   define MP_SET_C
#   define MP_2EXPT_C
#   define MP_COPY_C
#   define MP_EXPT_D_EX_C
#   define MP_MUL_C
#   define MP_SUB_C
#   define MP_MUL_D_C
#   define MP_DIV_C
#   define MP_CMP_C
#   define MP_ADD_D_C
#   define MP_SUB_D_C
#   define MP_EXCH_C
#   define MP_CLEAR_MULTI_C
#endif

#if defined(MP_NEG_C)
#   define MP_COPY_C
#endif

#if defined(MP_OR_C)
#   define MP_GROW_C
#   define MP_CLAMP_C
#endif

#if defined(MP_PRIME_FERMAT_C)
#   define MP_CMP_D_C
#   define MP_INIT_C
#   define MP_EXPTMOD_C
#   define MP_CMP_C
#   define MP_CLEAR_C
#endif

#if defined(MP_PRIME_FROBENIUS_UNDERWOOD_C)
#   define MP_INIT_MULTI_C
#   define MP_SET_U32_C
#   define MP_SQR_C
#   define MP_SUB_D_C
#   define MP_KRONECKER_C
#   define MP_GCD_C
#   define MP_ADD_D_C
#   define MP_SET_C
#   define MP_COUNT_BITS_C
#   define MP_MUL_2_C
#   define MP_MUL_D_C
#   define MP_ADD_C
#   define MP_MUL_C
#   define MP_SUB_C
#   define MP_MOD_C
#   define S_MP_GET_BIT_C
#   define MP_EXCH_C
#   define MP_CMP_C
#   define MP_CLEAR_MULTI_C
#endif

#if defined(MP_PRIME_IS_PRIME_C)
#   define MP_IS_SQUARE_C
#   define MP_CMP_D_C
#   define S_MP_PRIME_IS_DIVISIBLE_C
#   define MP_INIT_SET_C
#   define MP_PRIME_MILLER_RABIN_C
#   define MP_PRIME_FROBENIUS_UNDERWOOD_C
#   define MP_PRIME_STRONG_LUCAS_SELFRIDGE_C
#   define MP_READ_RADIX_C
#   define MP_CMP_C
#   define MP_SET_C
#   define MP_COUNT_BITS_C
#   define MP_RAND_C
#   define MP_DIV_2D_C
#   define MP_CLEAR_C
#endif

#if defined(MP_PRIME_MILLER_RABIN_C)
#   define MP_CMP_D_C
#   define MP_INIT_COPY_C
#   define MP_SUB_D_C
#   define MP_CNT_LSB_C
#   define MP_DIV_2D_C
#   define MP_EXPTMOD_C
#   define MP_CMP_C
#   define MP_SQRMOD_C
#   define MP_CLEAR_C
#endif

#if defined(MP_PRIME_NEXT_PRIME_C)
#   define MP_CMP_D_C
#   define MP_SET_C
#   define MP_SUB_D_C
#   define MP_MOD_D_C
#   define MP_INIT_C
#   define MP_ADD_D_C
#   define MP_PRIME_IS_PRIME_C
#   define MP_CLEAR_C
#endif

#if defined(MP_PRIME_RABIN_MILLER_TRIALS_C)
#endif

#if defined(MP_PRIME_RAND_C)
#   define S_MP_PRIME_RANDOM_EX_C
#   define MP_READ_UNSIGNED_BIN_C
#   define MP_PRIME_IS_PRIME_C
#   define MP_SUB_D_C
#   define MP_DIV_2_C
#   define MP_MUL_2_C
#   define MP_ADD_D_C
#   define S_MP_RAND_CB_C
#   define S_MP_RAND_SOURCE_C
#endif

#if defined(MP_PRIME_STRONG_LUCAS_SELFRIDGE_C)
#   define S_MP_MUL_SI_C
#   define MP_INIT_C
#   define MP_SET_I32_C
#   define MP_MUL_C
#   define MP_CLEAR_C
#   define MP_INIT_MULTI_C
#   define MP_SET_U32_C
#   define MP_GCD_C
#   define MP_CMP_D_C
#   define MP_CMP_C
#   define MP_KRONECKER_C
#   define MP_ADD_D_C
#   define MP_CNT_LSB_C
#   define MP_DIV_2D_C
#   define MP_SET_C
#   define MP_MUL_2_C
#   define MP_COUNT_BITS_C
#   define MP_MOD_C
#   define MP_SQR_C
#   define MP_SUB_C
#   define S_MP_GET_BIT_C
#   define MP_ADD_C
#   define MP_DIV_2_C
#   define MP_SUB_D_C
#   define MP_CLEAR_MULTI_C
#endif

#if defined(MP_PRIME_TAB_C)
#endif

#if defined(MP_RADIX_SIZE_C)
#   define MP_COUNT_BITS_C
#   define MP_INIT_COPY_C
#   define MP_DIV_D_C
#   define MP_CLEAR_C
#endif

#if defined(MP_RADIX_SMAP_C)
#endif

#if defined(MP_RAND_C)
#   define MP_RAND_SOURCE_C
#   define MP_ZERO_C
#   define MP_GROW_C
#   define S_MP_RAND_SOURCE_C
#endif

#if defined(MP_READ_RADIX_C)
#   define MP_ZERO_C
#   define MP_MUL_D_C
#   define MP_ADD_D_C
#endif

#if defined(MP_READ_SIGNED_BIN_C)
#   define MP_READ_UNSIGNED_BIN_C
#endif

#if defined(MP_READ_UNSIGNED_BIN_C)
#   define MP_GROW_C
#   define MP_ZERO_C
#   define MP_MUL_2D_C
#   define MP_CLAMP_C
#endif

#if defined(MP_REDUCE_C)
#   define MP_INIT_COPY_C
#   define MP_RSHD_C
#   define MP_MUL_C
#   define S_MP_MUL_HIGH_DIGS_C
#   define S_MP_MUL_HIGH_DIGS_FAST_C
#   define MP_MOD_2D_C
#   define S_MP_MUL_DIGS_C
#   define MP_SUB_C
#   define MP_CMP_D_C
#   define MP_SET_C
#   define MP_LSHD_C
#   define MP_ADD_C
#   define MP_CMP_C
#   define S_MP_SUB_C
#   define MP_CLEAR_C
#endif

#if defined(MP_REDUCE_2K_C)
#   define MP_INIT_C
#   define MP_COUNT_BITS_C
#   define MP_DIV_2D_C
#   define MP_MUL_D_C
#   define S_MP_ADD_C
#   define MP_CMP_MAG_C
#   define S_MP_SUB_C
#   define MP_CLEAR_C
#endif

#if defined(MP_REDUCE_2K_L_C)
#   define MP_INIT_C
#   define MP_COUNT_BITS_C
#   define MP_DIV_2D_C
#   define MP_MUL_C
#   define S_MP_ADD_C
#   define MP_CMP_MAG_C
#   define S_MP_SUB_C
#   define MP_CLEAR_C
#endif

#if defined(MP_REDUCE_2K_SETUP_C)
#   define MP_INIT_C
#   define MP_COUNT_BITS_C
#   define MP_2EXPT_C
#   define MP_CLEAR_C
#   define S_MP_SUB_C
#endif

#if defined(MP_REDUCE_2K_SETUP_L_C)
#   define MP_INIT_C
#   define MP_2EXPT_C
#   define MP_COUNT_BITS_C
#   define S_MP_SUB_C
#   define MP_CLEAR_C
#endif

#if defined(MP_REDUCE_IS_2K_C)
#   define MP_COUNT_BITS_C
#endif

#if defined(MP_REDUCE_IS_2K_L_C)
#endif

#if defined(MP_REDUCE_SETUP_C)
#   define MP_2EXPT_C
#   define MP_DIV_C
#endif

#if defined(MP_RSHD_C)
#   define MP_ZERO_C
#endif

#if defined(MP_SET_C)
#endif

#if defined(MP_SET_DOUBLE_C)
#   define MP_SET_U64_C
#   define MP_DIV_2D_C
#   define MP_MUL_2D_C
#endif

#if defined(MP_SHRINK_C)
#endif

#if defined(MP_SIGNED_BIN_SIZE_C)
#   define MP_UNSIGNED_BIN_SIZE_C
#endif

#if defined(MP_SIGNED_RSH_C)
#   define MP_DIV_2D_C
#   define MP_ADD_D_C
#   define MP_SUB_D_C
#endif

#if defined(MP_SQR_C)
#   define S_MP_TOOM_SQR_C
#   define S_MP_KARATSUBA_SQR_C
#   define S_MP_SQR_FAST_C
#   define S_MP_SQR_C
#endif

#if defined(MP_SQRMOD_C)
#   define MP_INIT_C
#   define MP_SQR_C
#   define MP_CLEAR_C
#   define MP_MOD_C
#endif

#if defined(MP_SQRT_C)
#   define MP_ZERO_C
#   define MP_INIT_COPY_C
#   define MP_RSHD_C
#   define MP_DIV_C
#   define MP_ADD_C
#   define MP_DIV_2_C
#   define MP_CMP_MAG_C
#   define MP_EXCH_C
#   define MP_CLEAR_C
#endif

#if defined(MP_SQRTMOD_PRIME_C)
#   define MP_CMP_D_C
#   define MP_ZERO_C
#   define MP_KRONECKER_C
#   define MP_INIT_MULTI_C
#   define MP_MOD_D_C
#   define MP_ADD_D_C
#   define MP_DIV_2_C
#   define MP_EXPTMOD_C
#   define MP_COPY_C
#   define MP_SUB_D_C
#   define MP_SET_U32_C
#   define MP_SQRMOD_C
#   define MP_MULMOD_C
#   define MP_SET_C
#   define MP_CLEAR_MULTI_C
#endif

#if defined(MP_SUB_C)
#   define S_MP_ADD_C
#   define MP_CMP_MAG_C
#   define S_MP_SUB_C
#endif

#if defined(MP_SUB_D_C)
#   define MP_GROW_C
#   define MP_ADD_D_C
#   define MP_CLAMP_C
#endif

#if defined(MP_SUBMOD_C)
#   define MP_INIT_C
#   define MP_SUB_C
#   define MP_CLEAR_C
#   define MP_MOD_C
#endif

#if defined(MP_TO_SIGNED_BIN_C)
#   define MP_TO_UNSIGNED_BIN_C
#endif

#if defined(MP_TO_SIGNED_BIN_N_C)
#   define MP_SIGNED_BIN_SIZE_C
#   define MP_TO_SIGNED_BIN_C
#endif

#if defined(MP_TO_UNSIGNED_BIN_C)
#   define MP_INIT_COPY_C
#   define MP_DIV_2D_C
#   define MP_CLEAR_C
#   define S_MP_REVERSE_C
#endif

#if defined(MP_TO_UNSIGNED_BIN_N_C)
#   define MP_UNSIGNED_BIN_SIZE_C
#   define MP_TO_UNSIGNED_BIN_C
#endif

#if defined(MP_TORADIX_C)
#   define MP_INIT_COPY_C
#   define MP_DIV_D_C
#   define MP_CLEAR_C
#   define S_MP_REVERSE_C
#endif

#if defined(MP_TORADIX_N_C)
#   define MP_INIT_COPY_C
#   define MP_DIV_D_C
#   define MP_CLEAR_C
#   define S_MP_REVERSE_C
#endif

#if defined(MP_UNSIGNED_BIN_SIZE_C)
#   define MP_COUNT_BITS_C
#endif

#if defined(MP_XOR_C)
#   define MP_GROW_C
#   define MP_CLAMP_C
#endif

#if defined(MP_ZERO_C)
#endif

#if defined(S_MP_ADD_C)
#   define MP_GROW_C
#   define MP_CLAMP_C
#endif

#if defined(S_MP_BALANCE_MUL_C)
#   define MP_INIT_SIZE_C
#   define MP_INIT_MULTI_C
#   define MP_CLEAR_C
#   define MP_MUL_C
#   define MP_LSHD_C
#   define MP_ADD_C
#   define MP_EXCH_C
#   define MP_CLEAR_MULTI_C
#endif

#if defined(S_MP_EXPTMOD_C)
#   define MP_COUNT_BITS_C
#   define MP_INIT_C
#   define MP_CLEAR_C
#   define MP_REDUCE_SETUP_C
#   define MP_REDUCE_2K_SETUP_L_C
#   define MP_MOD_C
#   define MP_COPY_C
#   define MP_SQR_C
#   define MP_MUL_C
#   define MP_SET_C
#   define MP_EXCH_C
#endif

#if defined(S_MP_EXPTMOD_FAST_C)
#   define MP_COUNT_BITS_C
#   define MP_INIT_SIZE_C
#   define MP_CLEAR_C
#   define MP_MONTGOMERY_SETUP_C
#   define MP_DR_SETUP_C
#   define MP_REDUCE_2K_SETUP_C
#   define MP_MONTGOMERY_CALC_NORMALIZATION_C
#   define MP_MULMOD_C
#   define MP_SET_C
#   define MP_MOD_C
#   define MP_COPY_C
#   define MP_SQR_C
#   define MP_MUL_C
#   define MP_EXCH_C
#endif

#if defined(S_MP_GET_BIT_C)
#endif

#if defined(S_MP_INVMOD_FAST_C)
#   define MP_INIT_MULTI_C
#   define MP_COPY_C
#   define MP_MOD_C
#   define MP_SET_C
#   define MP_DIV_2_C
#   define MP_SUB_C
#   define MP_CMP_C
#   define MP_CMP_D_C
#   define MP_ADD_C
#   define MP_CMP_MAG_C
#   define MP_EXCH_C
#   define MP_CLEAR_MULTI_C
#endif

#if defined(S_MP_INVMOD_SLOW_C)
#   define MP_INIT_MULTI_C
#   define MP_MOD_C
#   define MP_COPY_C
#   define MP_SET_C
#   define MP_DIV_2_C
#   define MP_ADD_C
#   define MP_SUB_C
#   define MP_CMP_C
#   define MP_CMP_D_C
#   define MP_CMP_MAG_C
#   define MP_EXCH_C
#   define MP_CLEAR_MULTI_C
#endif

#if defined(S_MP_KARATSUBA_MUL_C)
#   define MP_INIT_SIZE_C
#   define MP_CLAMP_C
#   define MP_MUL_C
#   define S_MP_ADD_C
#   define S_MP_SUB_C
#   define MP_LSHD_C
#   define MP_CLEAR_C
#endif

#if defined(S_MP_KARATSUBA_SQR_C)
#   define MP_INIT_SIZE_C
#   define MP_CLAMP_C
#   define MP_SQR_C
#   define S_MP_ADD_C
#   define S_MP_SUB_C
#   define MP_LSHD_C
#   define MP_CLEAR_C
#endif

#if defined(S_MP_MONTGOMERY_REDUCE_FAST_C)
#   define MP_GROW_C
#   define MP_CLAMP_C
#   define MP_CMP_MAG_C
#   define S_MP_SUB_C
#endif

#if defined(S_MP_MUL_DIGS_C)
#   define S_MP_MUL_DIGS_FAST_C
#   define MP_INIT_SIZE_C
#   define MP_CLAMP_C
#   define MP_EXCH_C
#   define MP_CLEAR_C
#endif

#if defined(S_MP_MUL_DIGS_FAST_C)
#   define MP_GROW_C
#   define MP_CLAMP_C
#endif

#if defined(S_MP_MUL_HIGH_DIGS_C)
#   define S_MP_MUL_HIGH_DIGS_FAST_C
#   define MP_INIT_SIZE_C
#   define MP_CLAMP_C
#   define MP_EXCH_C
#   define MP_CLEAR_C
#endif

#if defined(S_MP_MUL_HIGH_DIGS_FAST_C)
#   define MP_GROW_C
#   define MP_CLAMP_C
#endif

#if defined(S_MP_PRIME_IS_DIVISIBLE_C)
#   define MP_MOD_D_C
#endif

#if defined(S_MP_RAND_JENKINS_C)
#   define S_MP_RAND_JENKINS_INIT_C
#endif

#if defined(S_MP_RAND_PLATFORM_C)
#endif

#if defined(S_MP_REVERSE_C)
#endif

#if defined(S_MP_SQR_C)
#   define MP_INIT_SIZE_C
#   define MP_CLAMP_C
#   define MP_EXCH_C
#   define MP_CLEAR_C
#endif

#if defined(S_MP_SQR_FAST_C)
#   define MP_GROW_C
#   define MP_CLAMP_C
#endif

#if defined(S_MP_SUB_C)
#   define MP_GROW_C
#   define MP_CLAMP_C
#endif

#if defined(S_MP_TOOM_MUL_C)
#   define MP_INIT_MULTI_C
#   define MP_INIT_SIZE_C
#   define MP_CLAMP_C
#   define MP_ADD_C
#   define MP_MUL_C
#   define MP_MUL_2_C
#   define MP_SUB_C
#   define MP_DIV_3_C
#   define MP_DIV_2_C
#   define MP_LSHD_C
#   define MP_CLEAR_C
#   define MP_CLEAR_MULTI_C
#endif

#if defined(S_MP_TOOM_SQR_C)
#   define MP_INIT_C
#   define MP_INIT_SIZE_C
#   define MP_CLAMP_C
#   define MP_SQR_C
#   define MP_ADD_C
#   define MP_SUB_C
#   define MP_MUL_C
#   define MP_MUL_2_C
#   define MP_DIV_2_C
#   define MP_LSHD_C
#   define MP_CLEAR_C
#endif

#ifdef LTM3
#   define LTM_LAST
#endif

#include "tommath_superclass.h"
#include "tommath_class.h"
#else
#   define LTM_LAST
#endif
