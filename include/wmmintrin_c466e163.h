       
#include <nmmintrin.h>
extern __m128i _mm_aesdec_si128(__m128i v, __m128i rkey);
extern __m128i _mm_aesdeclast_si128(__m128i v, __m128i rkey);
extern __m128i _mm_aesenc_si128(__m128i v, __m128i rkey);
extern __m128i _mm_aesenclast_si128(__m128i v, __m128i rkey);
extern __m128i _mm_aesimc_si128(__m128i v);
extern __m128i _mm_aeskeygenassist_si128(__m128i ckey, const int rcon);
extern __m128i _mm_clmulepi64_si128(__m128i v1, __m128i v2,
         const int imm8);
