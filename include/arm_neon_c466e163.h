       
#include <sal.h>
#error This header is specific to ARM targets
typedef union __declspec(intrin_type) _ADVSIMD_ALIGN(8) __n64
{
    unsigned __int64 n64_u64[1];
    unsigned __int32 n64_u32[2];
    unsigned __int16 n64_u16[4];
    unsigned __int8 n64_u8[8];
    __int64 n64_i64[1];
    __int32 n64_i32[2];
    __int16 n64_i16[4];
    __int8 n64_i8[8];
    float n64_f32[2];
} __n64;
typedef union __declspec(intrin_type) _ADVSIMD_ALIGN(8) __n128
{
     unsigned __int64 n128_u64[2];
     unsigned __int32 n128_u32[4];
     unsigned __int16 n128_u16[8];
     unsigned __int8 n128_u8[16];
     __int64 n128_i64[2];
     __int32 n128_i32[4];
     __int16 n128_i16[8];
     __int8 n128_i8[16];
     float n128_f32[4];
    struct
    {
        __n64 low64;
        __n64 high64;
    } DUMMYNEONSTRUCT;
} __n128;
typedef struct __n64x2
{
    __n64 val[2];
} __n64x2;
typedef struct __n64x3
{
    __n64 val[3];
} __n64x3;
typedef struct __n64x4
{
    __n64 val[4];
} __n64x4;
typedef struct __n128x2
{
    __n128 val[2];
} __n128x2;
typedef struct __n128x3
{
    __n128 val[3];
} __n128x3;
typedef struct __n128x4
{
    __n128 val[4];
} __n128x4;
typedef unsigned __int8 poly8_t;
typedef unsigned __int16 poly16_t;
typedef float float32_t;
__inline __n64 *__int8ToN64(_In_ __int8 *p) { return (__n64 *)p; }
__inline __n64 *__int16ToN64(__int16 *p) { return (__n64 *)p; }
__inline __n64 *__int32ToN64(__int32 *p) { return (__n64 *)p; }
__inline __n64 *__int64ToN64(__int64 *p) { return (__n64 *)p; }
__inline __n64 *__uint8ToN64(unsigned __int8 *p) { return (__n64 *)p; }
__inline __n64 *__uint16ToN64(unsigned __int16 *p) { return (__n64 *)p; }
__inline __n64 *__uint32ToN64(unsigned __int32 *p) { return (__n64 *)p; }
__inline __n64 *__uint64ToN64(unsigned __int64 *p) { return (__n64 *)p; }
__inline __n64 *__poly8ToN64(poly8_t *p) { return (__n64 *)p; }
__inline __n64 *__poly16ToN64(poly16_t *p) { return (__n64 *)p; }
__inline __n64 *__float32ToN64(float32_t *p) { return (__n64 *)p; }
__inline const __n64 *__int8ToN64_c(const __int8 *p) { return (const __n64 *)p; }
__inline const __n64 *__int16ToN64_c(const __int16 *p) { return (const __n64 *)p; }
__inline const __n64 *__int32ToN64_c(const __int32 *p) { return (const __n64 *)p; }
__inline const __n64 *__int64ToN64_c(const __int64 *p) { return (const __n64 *)p; }
__inline const __n64 *__uint8ToN64_c(const unsigned __int8 *p) { return (const __n64 *)p; }
__inline const __n64 *__uint16ToN64_c(const unsigned __int16 *p) { return (const __n64 *)p; }
__inline const __n64 *__uint32ToN64_c(const unsigned __int32 *p) { return (const __n64 *)p; }
__inline const __n64 *__uint64ToN64_c(const unsigned __int64 *p) { return (const __n64 *)p; }
__inline const __n64 *__poly8ToN64_c(const poly8_t *p) { return (const __n64 *)p; }
__inline const __n64 *__poly16ToN64_c(const poly16_t *p) { return (const __n64 *)p; }
__inline const __n64 *__float32ToN64_c(const float32_t *p) { return (const __n64 *)p; }
__inline __int32 __int8ToInt32(__int8 i) { return (__int32)i; }
__inline __int32 __int16ToInt32(__int16 i) { return (__int32)i; }
__inline __int32 __int32ToInt32(__int32 i) { return (__int32)i; }
__inline __int64 __int64ToInt64(__int64 i) { return (__int64)i; }
__inline __int32 __uint8ToInt32(unsigned __int8 i) { return (__int32)i; }
__inline __int32 __uint16ToInt32(unsigned __int16 i) { return (__int32)i; }
__inline __int32 __uint32ToInt32(unsigned __int32 i) { return (__int32)i; }
__inline __int64 __uint64ToInt64(unsigned __int64 i) { return (__int64)i; }
__inline __int32 __poly8ToInt32(poly8_t i) { return (__int32)i; }
__inline __int32 __poly16ToInt32(poly16_t i) { return (__int32)i; }
typedef __n64 float32x2_t;
typedef __n64x2 float32x2x2_t;
typedef __n64x3 float32x2x3_t;
typedef __n64x4 float32x2x4_t;
typedef __n64 int8x8_t;
typedef __n64x2 int8x8x2_t;
typedef __n64x3 int8x8x3_t;
typedef __n64x4 int8x8x4_t;
typedef __n64 int16x4_t;
typedef __n64x2 int16x4x2_t;
typedef __n64x3 int16x4x3_t;
typedef __n64x4 int16x4x4_t;
typedef __n64 int32x2_t;
typedef __n64x2 int32x2x2_t;
typedef __n64x3 int32x2x3_t;
typedef __n64x4 int32x2x4_t;
typedef __n64 int64x1_t;
typedef __n64x2 int64x1x2_t;
typedef __n64x3 int64x1x3_t;
typedef __n64x4 int64x1x4_t;
typedef __n64 poly8x8_t;
typedef __n64x2 poly8x8x2_t;
typedef __n64x3 poly8x8x3_t;
typedef __n64x4 poly8x8x4_t;
typedef __n64 poly16x4_t;
typedef __n64x2 poly16x4x2_t;
typedef __n64x3 poly16x4x3_t;
typedef __n64x4 poly16x4x4_t;
typedef __n64 uint8x8_t;
typedef __n64x2 uint8x8x2_t;
typedef __n64x3 uint8x8x3_t;
typedef __n64x4 uint8x8x4_t;
typedef __n64 uint16x4_t;
typedef __n64x2 uint16x4x2_t;
typedef __n64x3 uint16x4x3_t;
typedef __n64x4 uint16x4x4_t;
typedef __n64 uint32x2_t;
typedef __n64x2 uint32x2x2_t;
typedef __n64x3 uint32x2x3_t;
typedef __n64x4 uint32x2x4_t;
typedef __n64 uint64x1_t;
typedef __n64x2 uint64x1x2_t;
typedef __n64x3 uint64x1x3_t;
typedef __n64x4 uint64x1x4_t;
typedef __n128 float32x4_t;
typedef __n128x2 float32x4x2_t;
typedef __n128x3 float32x4x3_t;
typedef __n128x4 float32x4x4_t;
typedef __n128 int8x16_t;
typedef __n128x2 int8x16x2_t;
typedef __n128x3 int8x16x3_t;
typedef __n128x4 int8x16x4_t;
typedef __n128 int16x8_t;
typedef __n128x2 int16x8x2_t;
typedef __n128x3 int16x8x3_t;
typedef __n128x4 int16x8x4_t;
typedef __n128 int32x4_t;
typedef __n128x2 int32x4x2_t;
typedef __n128x3 int32x4x3_t;
typedef __n128x4 int32x4x4_t;
typedef __n128 int64x2_t;
typedef __n128x2 int64x2x2_t;
typedef __n128x3 int64x2x3_t;
typedef __n128x4 int64x2x4_t;
typedef __n128 poly8x16_t;
typedef __n128x2 poly8x16x2_t;
typedef __n128x3 poly8x16x3_t;
typedef __n128x4 poly8x16x4_t;
typedef __n128 poly16x8_t;
typedef __n128x2 poly16x8x2_t;
typedef __n128x3 poly16x8x3_t;
typedef __n128x4 poly16x8x4_t;
typedef __n128 uint8x16_t;
typedef __n128x2 uint8x16x2_t;
typedef __n128x3 uint8x16x3_t;
typedef __n128x4 uint8x16x4_t;
typedef __n128 uint16x8_t;
typedef __n128x2 uint16x8x2_t;
typedef __n128x3 uint16x8x3_t;
typedef __n128x4 uint16x8x4_t;
typedef __n128 uint32x4_t;
typedef __n128x2 uint32x4x2_t;
typedef __n128x3 uint32x4x3_t;
typedef __n128x4 uint32x4x4_t;
typedef __n128 uint64x2_t;
typedef __n128x2 uint64x2x2_t;
typedef __n128x3 uint64x2x3_t;
typedef __n128x4 uint64x2x4_t;
__n64x2 __neon_DdDm_acc2(unsigned int, __n64, __n64);
__n64x2 __neon_Dx2Adr(unsigned int, const __n64*);
__n64x2 __neon_Dx2Adr_acc(unsigned int, __n64x2, const __n64*);
__n64x3 __neon_Dx3Adr(unsigned int, const __n64*);
__n64x3 __neon_Dx3Adr_acc(unsigned int, __n64x3, const __n64*);
__n64x4 __neon_Dx4Adr(unsigned int, const __n64*);
__n64x4 __neon_Dx4Adr_acc(unsigned int, __n64x4, const __n64*);
__n64 __neon_DdDm(unsigned int, __n64);
__n64 __neon_DdDx2Dm(unsigned int, __n64x2, __n64);
__n64 __neon_DdDx2Dm_acc(unsigned int, __n64, __n64x2, __n64);
__n64 __neon_DdDx3Dm(unsigned int, __n64x3, __n64);
__n64 __neon_DdDx3Dm_acc(unsigned int, __n64, __n64x3, __n64);
__n64 __neon_DdDx4Dm(unsigned int, __n64x4, __n64);
__n64 __neon_DdDx4Dm_acc(unsigned int, __n64, __n64x4, __n64);
__n64 __neon_DdDm_acc(unsigned int, __n64, __n64);
__n64 __neon_DdDnDm(unsigned int, __n64, __n64);
__n64 __neon_DdDnDm_acc(unsigned int, __n64, __n64, __n64);
__n64 __neon_DdDnDmx(unsigned int, __n64, __n64);
__n64 __neon_DdDnDmx_acc(unsigned int, __n64, __n64, __n64);
__n64 __neon_DdFt(unsigned int, float);
__n64 __neon_DdFt_acc(unsigned int, __n64, float);
__n64 __neon_D1Adr(unsigned int, const __n64*);
__n64 __neon_D1Adr_acc(unsigned int, __n64, const __n64*);
__n64 __neon_DdQm(unsigned int, __n128);
__n64 __neon_DdQm_high(unsigned int, __n128);
__n64 __neon_DdQm_low(unsigned int, __n128);
__n64 __neon_DdQnQm(unsigned int, __n128, __n128);
__n64 __neon_DdRt(unsigned int, int);
__n64 __neon_DdRtRt2(unsigned int, __int64);
__n64 __neon_DdRtRt2_acc(unsigned int, __n64, __int64);
__n64 __neon_DdRt_acc(unsigned int, __n64, int);
float __neon_FtDn(unsigned int, __n64);
float __neon_FtQn(unsigned int, __n128);
__n128x2 __neon_Qx2Adr(unsigned int, const __n64*);
__n128x2 __neon_Qx2Adr_acc(unsigned int, __n128x2, const __n64*);
__n128x2 __neon_QdQm_acc2(unsigned int, __n128, __n128);
__n128x3 __neon_Qx3Adr(unsigned int, const __n64*);
__n128x3 __neon_Qx3Adr_acc(unsigned int, __n128x3, const __n64*);
__n128x4 __neon_Qx4Adr(unsigned int, const __n64*);
__n128x4 __neon_Qx4Adr_acc(unsigned int, __n128x4, const __n64*);
__n128 __neon_QdDm(unsigned int, __n64);
__n128 __neon_QdDnDm(unsigned int, __n64, __n64);
__n128 __neon_QdDnDm_acc(unsigned int, __n128, __n64, __n64);
__n128 __neon_QdDnDm_merge(unsigned int, __n64, __n64);
__n128 __neon_QdDnDmx(unsigned int, __n64, __n64);
__n128 __neon_QdDnDmx_acc(unsigned int, __n128, __n64, __n64);
__n128 __neon_QdFt(unsigned int, float);
__n128 __neon_QdFt_acc(unsigned int, __n128, float);
__n128 __neon_Q1Adr(unsigned int, const __n64*);
__n128 __neon_Q1Adr_acc(unsigned int, __n128, const __n64*);
__n128 __neon_QdQm(unsigned int, __n128);
__n128 __neon_QdQm_acc(unsigned int, __n128, __n128);
__n128 __neon_QdQnDm(unsigned int, __n128, __n64);
__n128 __neon_QdQnDmx(unsigned int, __n128, __n64);
__n128 __neon_QdQnDmx_acc(unsigned int, __n128, __n128, __n64);
__n128 __neon_QdQnQm(unsigned int, __n128, __n128);
__n128 __neon_QdQnQm_acc(unsigned int, __n128, __n128, __n128);
__n128 __neon_QdRt(unsigned int, int);
__n128 __neon_QdRtRt2_acc(unsigned int, __n128, __int64);
__n128 __neon_QdRtRt2_dup(unsigned int, __int64);
__n128 __neon_QdRt_acc(unsigned int, __n128, int);
__int64 __neon_RtRt2Dm(unsigned int, __n64);
__int64 __neon_RtRt2Qm(unsigned int, __n128);
int __neon_RtDn(unsigned int, __n64);
int __neon_RtQn(unsigned int, __n128);
void __neon_AdrD1(unsigned int, __n64*, __n64);
void __neon_AdrDx2(unsigned int, __n64*, __n64x2);
void __neon_AdrDx2x(unsigned int, __n64*, __n64x2);
void __neon_AdrDx3(unsigned int, __n64*, __n64x3);
void __neon_AdrDx3x(unsigned int, __n64*, __n64x3);
void __neon_AdrDx4(unsigned int, __n64*, __n64x4);
void __neon_AdrDx4x(unsigned int, __n64*, __n64x4);
void __neon_AdrQ1(unsigned int, __n64*, __n128);
void __neon_AdrQx2(unsigned int, __n64*, __n128x2);
void __neon_AdrQx2x(unsigned int, __n64*, __n128x2);
void __neon_AdrQx3(unsigned int, __n64*, __n128x3);
void __neon_AdrQx3x(unsigned int, __n64*, __n128x3);
void __neon_AdrQx4(unsigned int, __n64*, __n128x4);
void __neon_AdrQx4x(unsigned int, __n64*, __n128x4);
    ( \
    ((a) == 8) ? 0 : \
    ((a) == 16) ? 1 : \
    -1)
    ( \
    ((a) == 8) ? 0 : \
    ((a) == 32) ? 1 : \
    -1)
    ( \
    ((a) == 8) ? 0 : \
    ((a) == 64) ? 1 : \
    -1)
    ( \
    ((a) == 8) ? 0 : \
    ((a) == 64) ? 1 : \
    ((a) == 128) ? 2 : \
    -1)
    ( \
    ((a) == 8) ? 0 : \
    ((a) == 64) ? 1 : \
    ((a) == 128) ? 2 : \
    ((a) == 256) ? 3 : \
    -1)
