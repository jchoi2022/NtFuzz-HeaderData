       
#include <tmmintrin.h>
              _mm_testc_si128((val), _mm_cmpeq_epi32((val),(val)))
        extern __m128i _mm_blend_epi16 (__m128i v1, __m128i v2,
                                        const int mask);
        extern __m128i _mm_blendv_epi8 (__m128i v1, __m128i v2, __m128i mask);
        extern __m128 _mm_blend_ps (__m128 v1, __m128 v2, const int mask);
        extern __m128 _mm_blendv_ps(__m128 v1, __m128 v2, __m128 v3);
        extern __m128d _mm_blend_pd (__m128d v1, __m128d v2, const int mask);
        extern __m128d _mm_blendv_pd(__m128d v1, __m128d v2, __m128d v3);
        extern __m128 _mm_dp_ps(__m128 val1, __m128 val2, const int mask);
        extern __m128d _mm_dp_pd(__m128d val1, __m128d val2, const int mask);
        extern __m128i _mm_cmpeq_epi64(__m128i val1, __m128i val2);
        extern __m128i _mm_min_epi8 (__m128i val1, __m128i val2);
        extern __m128i _mm_max_epi8 (__m128i val1, __m128i val2);
        extern __m128i _mm_min_epu16(__m128i val1, __m128i val2);
        extern __m128i _mm_max_epu16(__m128i val1, __m128i val2);
        extern __m128i _mm_min_epi32(__m128i val1, __m128i val2);
        extern __m128i _mm_max_epi32(__m128i val1, __m128i val2);
        extern __m128i _mm_min_epu32(__m128i val1, __m128i val2);
        extern __m128i _mm_max_epu32(__m128i val1, __m128i val2);
        extern __m128i _mm_mullo_epi32(__m128i a, __m128i b);
        extern __m128i _mm_mul_epi32(__m128i a, __m128i b);
        extern int _mm_testz_si128(__m128i mask, __m128i val);
        extern int _mm_testc_si128(__m128i mask, __m128i val);
        extern int _mm_testnzc_si128(__m128i mask, __m128i s2);
        extern __m128 _mm_insert_ps(__m128 dst, __m128 src, const int ndx);
        (((srcField)<<6) | ((dstField)<<4) | (zeroMask))
        extern int _mm_extract_ps(__m128 src, const int ndx);
        *((int*)&(dest)) = _mm_extract_ps((src), (ndx))
        _mm_insert_ps(_mm_setzero_ps(), (src), \
                      _MM_MK_INSERTPS_NDX((num), 0, 0x0e))
        extern __m128i _mm_insert_epi8 (__m128i dst, int s, const int ndx);
        extern __m128i _mm_insert_epi32(__m128i dst, int s, const int ndx);
        extern int _mm_extract_epi8 (__m128i src, const int ndx);
        extern int _mm_extract_epi32(__m128i src, const int ndx);
        extern __m128i _mm_minpos_epu16(__m128i shortValues);
        extern __m128d _mm_round_pd(__m128d val, int iRoundMode);
        extern __m128d _mm_round_sd(__m128d dst, __m128d val, int iRoundMode);
        extern __m128 _mm_round_ps(__m128 val, int iRoundMode);
        extern __m128 _mm_round_ss(__m128 dst, __m128 val, int iRoundMode);
        extern __m128i _mm_cvtepi8_epi32 (__m128i byteValues);
        extern __m128i _mm_cvtepi16_epi32(__m128i shortValues);
        extern __m128i _mm_cvtepi8_epi64 (__m128i byteValues);
        extern __m128i _mm_cvtepi32_epi64(__m128i intValues);
        extern __m128i _mm_cvtepi16_epi64(__m128i shortValues);
        extern __m128i _mm_cvtepi8_epi16 (__m128i byteValues);
        extern __m128i _mm_cvtepu8_epi32 (__m128i byteValues);
        extern __m128i _mm_cvtepu16_epi32(__m128i shortValues);
        extern __m128i _mm_cvtepu8_epi64 (__m128i shortValues);
        extern __m128i _mm_cvtepu32_epi64(__m128i intValues);
        extern __m128i _mm_cvtepu16_epi64(__m128i shortValues);
        extern __m128i _mm_cvtepu8_epi16 (__m128i byteValues);
        extern __m128i _mm_packus_epi32(__m128i val1, __m128i val2);
        extern __m128i _mm_mpsadbw_epu8(__m128i s1, __m128i s2, const int msk);
        extern __m128i _mm_stream_load_si128(__m128i* v1);
