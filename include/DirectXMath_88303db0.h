       
#error DirectX Math requires C++
#error DirectX Math does not support this target
#pragma warning(push)
#pragma warning(disable:4514 4820)
#include <math.h>
#include <float.h>
#include <malloc.h>
#pragma warning(pop)
#pragma warning(push)
#pragma warning(disable : 4987)
#include <intrin.h>
#pragma warning(pop)
#include <xmmintrin.h>
#include <emmintrin.h>
#include <pmmintrin.h>
#include <smmintrin.h>
#include <immintrin.h>
#include <sal.h>
#include <assert.h>
#pragma warning(push)
#pragma warning(disable : 4005 4668)
#include <stdint.h>
#pragma warning(pop)
namespace DirectX
{
XM_CONST float XM_PI = 3.141592654f;
XM_CONST float XM_2PI = 6.283185307f;
XM_CONST float XM_1DIVPI = 0.318309886f;
XM_CONST float XM_1DIV2PI = 0.159154943f;
XM_CONST float XM_PIDIV2 = 1.570796327f;
XM_CONST float XM_PIDIV4 = 0.785398163f;
XM_CONST uint32_t XM_SELECT_0 = 0x00000000;
XM_CONST uint32_t XM_SELECT_1 = 0xFFFFFFFF;
XM_CONST uint32_t XM_PERMUTE_0X = 0;
XM_CONST uint32_t XM_PERMUTE_0Y = 1;
XM_CONST uint32_t XM_PERMUTE_0Z = 2;
XM_CONST uint32_t XM_PERMUTE_0W = 3;
XM_CONST uint32_t XM_PERMUTE_1X = 4;
XM_CONST uint32_t XM_PERMUTE_1Y = 5;
XM_CONST uint32_t XM_PERMUTE_1Z = 6;
XM_CONST uint32_t XM_PERMUTE_1W = 7;
XM_CONST uint32_t XM_SWIZZLE_X = 0;
XM_CONST uint32_t XM_SWIZZLE_Y = 1;
XM_CONST uint32_t XM_SWIZZLE_Z = 2;
XM_CONST uint32_t XM_SWIZZLE_W = 3;
XM_CONST uint32_t XM_CRMASK_CR6 = 0x000000F0;
XM_CONST uint32_t XM_CRMASK_CR6TRUE = 0x00000080;
XM_CONST uint32_t XM_CRMASK_CR6FALSE = 0x00000020;
XM_CONST uint32_t XM_CRMASK_CR6BOUNDS = XM_CRMASK_CR6FALSE;
XM_CONST size_t XM_CACHE_LINE_SIZE = 64;
inline XM_CONSTEXPR float XMConvertToRadians(float fDegrees) { return fDegrees * (XM_PI / 180.0f); }
inline XM_CONSTEXPR float XMConvertToDegrees(float fRadians) { return fRadians * (180.0f / XM_PI); }
inline bool XMComparisonAllTrue(uint32_t CR) { return (((CR) & XM_CRMASK_CR6TRUE) == XM_CRMASK_CR6TRUE); }
inline bool XMComparisonAnyTrue(uint32_t CR) { return (((CR) & XM_CRMASK_CR6FALSE) != XM_CRMASK_CR6FALSE); }
inline bool XMComparisonAllFalse(uint32_t CR) { return (((CR) & XM_CRMASK_CR6FALSE) == XM_CRMASK_CR6FALSE); }
inline bool XMComparisonAnyFalse(uint32_t CR) { return (((CR) & XM_CRMASK_CR6TRUE) != XM_CRMASK_CR6TRUE); }
inline bool XMComparisonMixed(uint32_t CR) { return (((CR) & XM_CRMASK_CR6) == 0); }
inline bool XMComparisonAllInBounds(uint32_t CR) { return (((CR) & XM_CRMASK_CR6BOUNDS) == XM_CRMASK_CR6BOUNDS); }
inline bool XMComparisonAnyOutOfBounds(uint32_t CR) { return (((CR) & XM_CRMASK_CR6BOUNDS) != XM_CRMASK_CR6BOUNDS); }
#pragma warning(push)
#pragma warning(disable:4068 4201 4365 4324 4820)
#pragma prefast(push)
#pragma prefast(disable : 25000, "FXMVECTOR is 16 bytes")
typedef __vector4 XMVECTOR;
typedef const XMVECTOR& FXMVECTOR;
typedef const XMVECTOR& GXMVECTOR;
typedef const XMVECTOR& HXMVECTOR;
typedef const XMVECTOR& CXMVECTOR;
__declspec(align(16)) struct XMVECTORF32
{
    union
    {
        float f[4];
        XMVECTOR v;
    };
    inline operator XMVECTOR() const { return v; }
    inline operator const float*() const { return f; }
};
__declspec(align(16)) struct XMVECTORI32
{
    union
    {
        int32_t i[4];
        XMVECTOR v;
    };
    inline operator XMVECTOR() const { return v; }
};
__declspec(align(16)) struct XMVECTORU8
{
    union
    {
        uint8_t u[16];
        XMVECTOR v;
    };
    inline operator XMVECTOR() const { return v; }
};
__declspec(align(16)) struct XMVECTORU32
{
    union
    {
        uint32_t u[4];
        XMVECTOR v;
    };
    inline operator XMVECTOR() const { return v; }
};
XMVECTOR XM_CALLCONV operator+ (FXMVECTOR V);
XMVECTOR XM_CALLCONV operator- (FXMVECTOR V);
XMVECTOR& XM_CALLCONV operator+= (XMVECTOR& V1, FXMVECTOR V2);
XMVECTOR& XM_CALLCONV operator-= (XMVECTOR& V1, FXMVECTOR V2);
XMVECTOR& XM_CALLCONV operator*= (XMVECTOR& V1, FXMVECTOR V2);
XMVECTOR& XM_CALLCONV operator/= (XMVECTOR& V1, FXMVECTOR V2);
XMVECTOR& operator*= (XMVECTOR& V, float S);
XMVECTOR& operator/= (XMVECTOR& V, float S);
XMVECTOR XM_CALLCONV operator+ (FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV operator- (FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV operator* (FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV operator/ (FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV operator* (FXMVECTOR V, float S);
XMVECTOR XM_CALLCONV operator* (float S, FXMVECTOR V);
XMVECTOR XM_CALLCONV operator/ (FXMVECTOR V, float S);
struct XMMATRIX;
typedef const XMMATRIX& FXMMATRIX;
typedef const XMMATRIX& CXMMATRIX;
struct XMMATRIX
{
    union
    {
        XMVECTOR r[4];
        struct
        {
            float _11, _12, _13, _14;
            float _21, _22, _23, _24;
            float _31, _32, _33, _34;
            float _41, _42, _43, _44;
        };
        float m[4][4];
    };
    XMMATRIX() = default;
    XMMATRIX(const XMMATRIX&) = default;
    XMMATRIX& operator=(const XMMATRIX&) = default;
    XMMATRIX(XMMATRIX&&) = default;
    XMMATRIX& operator=(XMMATRIX&&) = default;
    constexpr XMMATRIX(FXMVECTOR R0, FXMVECTOR R1, FXMVECTOR R2, CXMVECTOR R3) : r{ R0,R1,R2,R3 } {}
    XMMATRIX(float m00, float m01, float m02, float m03,
             float m10, float m11, float m12, float m13,
             float m20, float m21, float m22, float m23,
             float m30, float m31, float m32, float m33);
    explicit XMMATRIX(_In_reads_(16) const float *pArray);
    float operator() (size_t Row, size_t Column) const { return m[Row][Column]; }
    float& operator() (size_t Row, size_t Column) { return m[Row][Column]; }
    XMMATRIX operator+ () const { return *this; }
    XMMATRIX operator- () const;
    XMMATRIX& XM_CALLCONV operator+= (FXMMATRIX M);
    XMMATRIX& XM_CALLCONV operator-= (FXMMATRIX M);
    XMMATRIX& XM_CALLCONV operator*= (FXMMATRIX M);
    XMMATRIX& operator*= (float S);
    XMMATRIX& operator/= (float S);
    XMMATRIX XM_CALLCONV operator+ (FXMMATRIX M) const;
    XMMATRIX XM_CALLCONV operator- (FXMMATRIX M) const;
    XMMATRIX XM_CALLCONV operator* (FXMMATRIX M) const;
    XMMATRIX operator* (float S) const;
    XMMATRIX operator/ (float S) const;
    friend XMMATRIX XM_CALLCONV operator* (float S, FXMMATRIX M);
};
struct XMFLOAT2
{
    float x;
    float y;
    XMFLOAT2() = default;
    XMFLOAT2(const XMFLOAT2&) = default;
    XMFLOAT2& operator=(const XMFLOAT2&) = default;
    XMFLOAT2(XMFLOAT2&&) = default;
    XMFLOAT2& operator=(XMFLOAT2&&) = default;
    XM_CONSTEXPR XMFLOAT2(float _x, float _y) : x(_x), y(_y) {}
    explicit XMFLOAT2(_In_reads_(2) const float *pArray) : x(pArray[0]), y(pArray[1]) {}
};
__declspec(align(16)) struct XMFLOAT2A : public XMFLOAT2
{
    XMFLOAT2A() = default;
    XMFLOAT2A(const XMFLOAT2A&) = default;
    XMFLOAT2A& operator=(const XMFLOAT2A&) = default;
    XMFLOAT2A(XMFLOAT2A&&) = default;
    XMFLOAT2A& operator=(XMFLOAT2A&&) = default;
    XM_CONSTEXPR XMFLOAT2A(float _x, float _y) : XMFLOAT2(_x, _y) {}
    explicit XMFLOAT2A(_In_reads_(2) const float *pArray) : XMFLOAT2(pArray) {}
};
struct XMINT2
{
    int32_t x;
    int32_t y;
    XMINT2() = default;
    XMINT2(const XMINT2&) = default;
    XMINT2& operator=(const XMINT2&) = default;
    XMINT2(XMINT2&&) = default;
    XMINT2& operator=(XMINT2&&) = default;
    XM_CONSTEXPR XMINT2(int32_t _x, int32_t _y) : x(_x), y(_y) {}
    explicit XMINT2(_In_reads_(2) const int32_t *pArray) : x(pArray[0]), y(pArray[1]) {}
};
struct XMUINT2
{
    uint32_t x;
    uint32_t y;
    XMUINT2() = default;
    XMUINT2(const XMUINT2&) = default;
    XMUINT2& operator=(const XMUINT2&) = default;
    XMUINT2(XMUINT2&&) = default;
    XMUINT2& operator=(XMUINT2&&) = default;
    XM_CONSTEXPR XMUINT2(uint32_t _x, uint32_t _y) : x(_x), y(_y) {}
    explicit XMUINT2(_In_reads_(2) const uint32_t *pArray) : x(pArray[0]), y(pArray[1]) {}
};
struct XMFLOAT3
{
    float x;
    float y;
    float z;
    XMFLOAT3() = default;
    XMFLOAT3(const XMFLOAT3&) = default;
    XMFLOAT3& operator=(const XMFLOAT3&) = default;
    XMFLOAT3(XMFLOAT3&&) = default;
    XMFLOAT3& operator=(XMFLOAT3&&) = default;
    XM_CONSTEXPR XMFLOAT3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
    explicit XMFLOAT3(_In_reads_(3) const float *pArray) : x(pArray[0]), y(pArray[1]), z(pArray[2]) {}
};
__declspec(align(16)) struct XMFLOAT3A : public XMFLOAT3
{
    XMFLOAT3A() = default;
    XMFLOAT3A(const XMFLOAT3A&) = default;
    XMFLOAT3A& operator=(const XMFLOAT3A&) = default;
    XMFLOAT3A(XMFLOAT3A&&) = default;
    XMFLOAT3A& operator=(XMFLOAT3A&&) = default;
    XM_CONSTEXPR XMFLOAT3A(float _x, float _y, float _z) : XMFLOAT3(_x, _y, _z) {}
    explicit XMFLOAT3A(_In_reads_(3) const float *pArray) : XMFLOAT3(pArray) {}
};
struct XMINT3
{
    int32_t x;
    int32_t y;
    int32_t z;
    XMINT3() = default;
    XMINT3(const XMINT3&) = default;
    XMINT3& operator=(const XMINT3&) = default;
    XMINT3(XMINT3&&) = default;
    XMINT3& operator=(XMINT3&&) = default;
    XM_CONSTEXPR XMINT3(int32_t _x, int32_t _y, int32_t _z) : x(_x), y(_y), z(_z) {}
    explicit XMINT3(_In_reads_(3) const int32_t *pArray) : x(pArray[0]), y(pArray[1]), z(pArray[2]) {}
};
struct XMUINT3
{
    uint32_t x;
    uint32_t y;
    uint32_t z;
    XMUINT3() = default;
    XMUINT3(const XMUINT3&) = default;
    XMUINT3& operator=(const XMUINT3&) = default;
    XMUINT3(XMUINT3&&) = default;
    XMUINT3& operator=(XMUINT3&&) = default;
    XM_CONSTEXPR XMUINT3(uint32_t _x, uint32_t _y, uint32_t _z) : x(_x), y(_y), z(_z) {}
    explicit XMUINT3(_In_reads_(3) const uint32_t *pArray) : x(pArray[0]), y(pArray[1]), z(pArray[2]) {}
};
struct XMFLOAT4
{
    float x;
    float y;
    float z;
    float w;
    XMFLOAT4() = default;
    XMFLOAT4(const XMFLOAT4&) = default;
    XMFLOAT4& operator=(const XMFLOAT4&) = default;
    XMFLOAT4(XMFLOAT4&&) = default;
    XMFLOAT4& operator=(XMFLOAT4&&) = default;
    XM_CONSTEXPR XMFLOAT4(float _x, float _y, float _z, float _w) : x(_x), y(_y), z(_z), w(_w) {}
    explicit XMFLOAT4(_In_reads_(4) const float *pArray) : x(pArray[0]), y(pArray[1]), z(pArray[2]), w(pArray[3]) {}
};
__declspec(align(16)) struct XMFLOAT4A : public XMFLOAT4
{
    XMFLOAT4A() = default;
    XMFLOAT4A(const XMFLOAT4A&) = default;
    XMFLOAT4A& operator=(const XMFLOAT4A&) = default;
    XMFLOAT4A(XMFLOAT4A&&) = default;
    XMFLOAT4A& operator=(XMFLOAT4A&&) = default;
    XM_CONSTEXPR XMFLOAT4A(float _x, float _y, float _z, float _w) : XMFLOAT4(_x, _y, _z, _w) {}
    explicit XMFLOAT4A(_In_reads_(4) const float *pArray) : XMFLOAT4(pArray) {}
};
struct XMINT4
{
    int32_t x;
    int32_t y;
    int32_t z;
    int32_t w;
    XMINT4() = default;
    XMINT4(const XMINT4&) = default;
    XMINT4& operator=(const XMINT4&) = default;
    XMINT4(XMINT4&&) = default;
    XMINT4& operator=(XMINT4&&) = default;
    XM_CONSTEXPR XMINT4(int32_t _x, int32_t _y, int32_t _z, int32_t _w) : x(_x), y(_y), z(_z), w(_w) {}
    explicit XMINT4(_In_reads_(4) const int32_t *pArray) : x(pArray[0]), y(pArray[1]), z(pArray[2]), w(pArray[3]) {}
};
struct XMUINT4
{
    uint32_t x;
    uint32_t y;
    uint32_t z;
    uint32_t w;
    XMUINT4() = default;
    XMUINT4(const XMUINT4&) = default;
    XMUINT4& operator=(const XMUINT4&) = default;
    XMUINT4(XMUINT4&&) = default;
    XMUINT4& operator=(XMUINT4&&) = default;
    XM_CONSTEXPR XMUINT4(uint32_t _x, uint32_t _y, uint32_t _z, uint32_t _w) : x(_x), y(_y), z(_z), w(_w) {}
    explicit XMUINT4(_In_reads_(4) const uint32_t *pArray) : x(pArray[0]), y(pArray[1]), z(pArray[2]), w(pArray[3]) {}
};
struct XMFLOAT3X3
{
    union
    {
        struct
        {
            float _11, _12, _13;
            float _21, _22, _23;
            float _31, _32, _33;
        };
        float m[3][3];
    };
    XMFLOAT3X3() = default;
    XMFLOAT3X3(const XMFLOAT3X3&) = default;
    XMFLOAT3X3& operator=(const XMFLOAT3X3&) = default;
    XMFLOAT3X3(XMFLOAT3X3&&) = default;
    XMFLOAT3X3& operator=(XMFLOAT3X3&&) = default;
    XM_CONSTEXPR XMFLOAT3X3(float m00, float m01, float m02,
                            float m10, float m11, float m12,
                            float m20, float m21, float m22)
        : _11(m00), _12(m01), _13(m02),
          _21(m10), _22(m11), _23(m12),
          _31(m20), _32(m21), _33(m22) {}
    explicit XMFLOAT3X3(_In_reads_(9) const float *pArray);
    float operator() (size_t Row, size_t Column) const { return m[Row][Column]; }
    float& operator() (size_t Row, size_t Column) { return m[Row][Column]; }
};
struct XMFLOAT4X3
{
    union
    {
        struct
        {
            float _11, _12, _13;
            float _21, _22, _23;
            float _31, _32, _33;
            float _41, _42, _43;
        };
        float m[4][3];
        float f[12];
    };
    XMFLOAT4X3() = default;
    XMFLOAT4X3(const XMFLOAT4X3&) = default;
    XMFLOAT4X3& operator=(const XMFLOAT4X3&) = default;
    XMFLOAT4X3(XMFLOAT4X3&&) = default;
    XMFLOAT4X3& operator=(XMFLOAT4X3&&) = default;
    XM_CONSTEXPR XMFLOAT4X3(float m00, float m01, float m02,
                            float m10, float m11, float m12,
                            float m20, float m21, float m22,
                            float m30, float m31, float m32)
        : _11(m00), _12(m01), _13(m02),
          _21(m10), _22(m11), _23(m12),
          _31(m20), _32(m21), _33(m22),
          _41(m30), _42(m31), _43(m32) {}
    explicit XMFLOAT4X3(_In_reads_(12) const float *pArray);
    float operator() (size_t Row, size_t Column) const { return m[Row][Column]; }
    float& operator() (size_t Row, size_t Column) { return m[Row][Column]; }
};
__declspec(align(16)) struct XMFLOAT4X3A : public XMFLOAT4X3
{
    XMFLOAT4X3A() = default;
    XMFLOAT4X3A(const XMFLOAT4X3A&) = default;
    XMFLOAT4X3A& operator=(const XMFLOAT4X3A&) = default;
    XMFLOAT4X3A(XMFLOAT4X3A&&) = default;
    XMFLOAT4X3A& operator=(XMFLOAT4X3A&&) = default;
    XM_CONSTEXPR XMFLOAT4X3A(float m00, float m01, float m02,
                            float m10, float m11, float m12,
                            float m20, float m21, float m22,
                            float m30, float m31, float m32) :
        XMFLOAT4X3(m00,m01,m02,m10,m11,m12,m20,m21,m22,m30,m31,m32) {}
    explicit XMFLOAT4X3A(_In_reads_(12) const float *pArray) : XMFLOAT4X3(pArray) {}
};
struct XMFLOAT3X4
{
    union
    {
        struct
        {
            float _11, _12, _13, _14;
            float _21, _22, _23, _24;
            float _31, _32, _33, _34;
        };
        float m[3][4];
        float f[12];
    };
    XMFLOAT3X4() = default;
    XMFLOAT3X4(const XMFLOAT3X4&) = default;
    XMFLOAT3X4& operator=(const XMFLOAT3X4&) = default;
    XMFLOAT3X4(XMFLOAT3X4&&) = default;
    XMFLOAT3X4& operator=(XMFLOAT3X4&&) = default;
    XM_CONSTEXPR XMFLOAT3X4(float m00, float m01, float m02, float m03,
                            float m10, float m11, float m12, float m13,
                            float m20, float m21, float m22, float m23)
        : _11(m00), _12(m01), _13(m02), _14(m03),
          _21(m10), _22(m11), _23(m12), _24(m13),
          _31(m20), _32(m21), _33(m22), _34(m23) {}
    explicit XMFLOAT3X4(_In_reads_(12) const float *pArray);
    float operator() (size_t Row, size_t Column) const { return m[Row][Column]; }
    float& operator() (size_t Row, size_t Column) { return m[Row][Column]; }
};
__declspec(align(16)) struct XMFLOAT3X4A : public XMFLOAT3X4
{
    XMFLOAT3X4A() = default;
    XMFLOAT3X4A(const XMFLOAT3X4A&) = default;
    XMFLOAT3X4A& operator=(const XMFLOAT3X4A&) = default;
    XMFLOAT3X4A(XMFLOAT3X4A&&) = default;
    XMFLOAT3X4A& operator=(XMFLOAT3X4A&&) = default;
    XM_CONSTEXPR XMFLOAT3X4A(float m00, float m01, float m02, float m03,
                             float m10, float m11, float m12, float m13,
                             float m20, float m21, float m22, float m23) :
        XMFLOAT3X4(m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23) {}
    explicit XMFLOAT3X4A(_In_reads_(12) const float *pArray) : XMFLOAT3X4(pArray) {}
};
struct XMFLOAT4X4
{
    union
    {
        struct
        {
            float _11, _12, _13, _14;
            float _21, _22, _23, _24;
            float _31, _32, _33, _34;
            float _41, _42, _43, _44;
        };
        float m[4][4];
    };
    XMFLOAT4X4() = default;
    XMFLOAT4X4(const XMFLOAT4X4&) = default;
    XMFLOAT4X4& operator=(const XMFLOAT4X4&) = default;
    XMFLOAT4X4(XMFLOAT4X4&&) = default;
    XMFLOAT4X4& operator=(XMFLOAT4X4&&) = default;
    XM_CONSTEXPR XMFLOAT4X4(float m00, float m01, float m02, float m03,
                            float m10, float m11, float m12, float m13,
                            float m20, float m21, float m22, float m23,
                            float m30, float m31, float m32, float m33)
        : _11(m00), _12(m01), _13(m02), _14(m03),
          _21(m10), _22(m11), _23(m12), _24(m13),
          _31(m20), _32(m21), _33(m22), _34(m23),
          _41(m30), _42(m31), _43(m32), _44(m33) {}
    explicit XMFLOAT4X4(_In_reads_(16) const float *pArray);
    float operator() (size_t Row, size_t Column) const { return m[Row][Column]; }
    float& operator() (size_t Row, size_t Column) { return m[Row][Column]; }
};
__declspec(align(16)) struct XMFLOAT4X4A : public XMFLOAT4X4
{
    XMFLOAT4X4A() = default;
    XMFLOAT4X4A(const XMFLOAT4X4A&) = default;
    XMFLOAT4X4A& operator=(const XMFLOAT4X4A&) = default;
    XMFLOAT4X4A(XMFLOAT4X4A&&) = default;
    XMFLOAT4X4A& operator=(XMFLOAT4X4A&&) = default;
    XM_CONSTEXPR XMFLOAT4X4A(float m00, float m01, float m02, float m03,
                             float m10, float m11, float m12, float m13,
                             float m20, float m21, float m22, float m23,
                             float m30, float m31, float m32, float m33)
        : XMFLOAT4X4(m00,m01,m02,m03,m10,m11,m12,m13,m20,m21,m22,m23,m30,m31,m32,m33) {}
    explicit XMFLOAT4X4A(_In_reads_(16) const float *pArray) : XMFLOAT4X4(pArray) {}
};
#pragma prefast(pop)
#pragma warning(pop)
XMVECTOR XM_CALLCONV XMConvertVectorIntToFloat(FXMVECTOR VInt, uint32_t DivExponent);
XMVECTOR XM_CALLCONV XMConvertVectorFloatToInt(FXMVECTOR VFloat, uint32_t MulExponent);
XMVECTOR XM_CALLCONV XMConvertVectorUIntToFloat(FXMVECTOR VUInt, uint32_t DivExponent);
XMVECTOR XM_CALLCONV XMConvertVectorFloatToUInt(FXMVECTOR VFloat, uint32_t MulExponent);
XMVECTOR XM_CALLCONV XMVectorSetBinaryConstant(uint32_t C0, uint32_t C1, uint32_t C2, uint32_t C3);
XMVECTOR XM_CALLCONV XMVectorSplatConstant(int32_t IntConstant, uint32_t DivExponent);
XMVECTOR XM_CALLCONV XMVectorSplatConstantInt(int32_t IntConstant);
XMVECTOR XM_CALLCONV XMLoadInt(_In_ const uint32_t* pSource);
XMVECTOR XM_CALLCONV XMLoadFloat(_In_ const float* pSource);
XMVECTOR XM_CALLCONV XMLoadInt2(_In_reads_(2) const uint32_t* pSource);
XMVECTOR XM_CALLCONV XMLoadInt2A(_In_reads_(2) const uint32_t* PSource);
XMVECTOR XM_CALLCONV XMLoadFloat2(_In_ const XMFLOAT2* pSource);
XMVECTOR XM_CALLCONV XMLoadFloat2A(_In_ const XMFLOAT2A* pSource);
XMVECTOR XM_CALLCONV XMLoadSInt2(_In_ const XMINT2* pSource);
XMVECTOR XM_CALLCONV XMLoadUInt2(_In_ const XMUINT2* pSource);
XMVECTOR XM_CALLCONV XMLoadInt3(_In_reads_(3) const uint32_t* pSource);
XMVECTOR XM_CALLCONV XMLoadInt3A(_In_reads_(3) const uint32_t* pSource);
XMVECTOR XM_CALLCONV XMLoadFloat3(_In_ const XMFLOAT3* pSource);
XMVECTOR XM_CALLCONV XMLoadFloat3A(_In_ const XMFLOAT3A* pSource);
XMVECTOR XM_CALLCONV XMLoadSInt3(_In_ const XMINT3* pSource);
XMVECTOR XM_CALLCONV XMLoadUInt3(_In_ const XMUINT3* pSource);
XMVECTOR XM_CALLCONV XMLoadInt4(_In_reads_(4) const uint32_t* pSource);
XMVECTOR XM_CALLCONV XMLoadInt4A(_In_reads_(4) const uint32_t* pSource);
XMVECTOR XM_CALLCONV XMLoadFloat4(_In_ const XMFLOAT4* pSource);
XMVECTOR XM_CALLCONV XMLoadFloat4A(_In_ const XMFLOAT4A* pSource);
XMVECTOR XM_CALLCONV XMLoadSInt4(_In_ const XMINT4* pSource);
XMVECTOR XM_CALLCONV XMLoadUInt4(_In_ const XMUINT4* pSource);
XMMATRIX XM_CALLCONV XMLoadFloat3x3(_In_ const XMFLOAT3X3* pSource);
XMMATRIX XM_CALLCONV XMLoadFloat4x3(_In_ const XMFLOAT4X3* pSource);
XMMATRIX XM_CALLCONV XMLoadFloat4x3A(_In_ const XMFLOAT4X3A* pSource);
XMMATRIX XM_CALLCONV XMLoadFloat3x4(_In_ const XMFLOAT3X4* pSource);
XMMATRIX XM_CALLCONV XMLoadFloat3x4A(_In_ const XMFLOAT3X4A* pSource);
XMMATRIX XM_CALLCONV XMLoadFloat4x4(_In_ const XMFLOAT4X4* pSource);
XMMATRIX XM_CALLCONV XMLoadFloat4x4A(_In_ const XMFLOAT4X4A* pSource);
void XM_CALLCONV XMStoreInt(_Out_ uint32_t* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreFloat(_Out_ float* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreInt2(_Out_writes_(2) uint32_t* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreInt2A(_Out_writes_(2) uint32_t* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreFloat2(_Out_ XMFLOAT2* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreFloat2A(_Out_ XMFLOAT2A* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreSInt2(_Out_ XMINT2* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreUInt2(_Out_ XMUINT2* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreInt3(_Out_writes_(3) uint32_t* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreInt3A(_Out_writes_(3) uint32_t* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreFloat3(_Out_ XMFLOAT3* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreFloat3A(_Out_ XMFLOAT3A* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreSInt3(_Out_ XMINT3* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreUInt3(_Out_ XMUINT3* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreInt4(_Out_writes_(4) uint32_t* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreInt4A(_Out_writes_(4) uint32_t* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreFloat4(_Out_ XMFLOAT4* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreFloat4A(_Out_ XMFLOAT4A* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreSInt4(_Out_ XMINT4* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreUInt4(_Out_ XMUINT4* pDestination, _In_ FXMVECTOR V);
void XM_CALLCONV XMStoreFloat3x3(_Out_ XMFLOAT3X3* pDestination, _In_ FXMMATRIX M);
void XM_CALLCONV XMStoreFloat4x3(_Out_ XMFLOAT4X3* pDestination, _In_ FXMMATRIX M);
void XM_CALLCONV XMStoreFloat4x3A(_Out_ XMFLOAT4X3A* pDestination, _In_ FXMMATRIX M);
void XM_CALLCONV XMStoreFloat3x4(_Out_ XMFLOAT3X4* pDestination, _In_ FXMMATRIX M);
void XM_CALLCONV XMStoreFloat3x4A(_Out_ XMFLOAT3X4A* pDestination, _In_ FXMMATRIX M);
void XM_CALLCONV XMStoreFloat4x4(_Out_ XMFLOAT4X4* pDestination, _In_ FXMMATRIX M);
void XM_CALLCONV XMStoreFloat4x4A(_Out_ XMFLOAT4X4A* pDestination, _In_ FXMMATRIX M);
XMVECTOR XM_CALLCONV XMVectorZero();
XMVECTOR XM_CALLCONV XMVectorSet(float x, float y, float z, float w);
XMVECTOR XM_CALLCONV XMVectorSetInt(uint32_t x, uint32_t y, uint32_t z, uint32_t w);
XMVECTOR XM_CALLCONV XMVectorReplicate(float Value);
XMVECTOR XM_CALLCONV XMVectorReplicatePtr(_In_ const float *pValue);
XMVECTOR XM_CALLCONV XMVectorReplicateInt(uint32_t Value);
XMVECTOR XM_CALLCONV XMVectorReplicateIntPtr(_In_ const uint32_t *pValue);
XMVECTOR XM_CALLCONV XMVectorTrueInt();
XMVECTOR XM_CALLCONV XMVectorFalseInt();
XMVECTOR XM_CALLCONV XMVectorSplatX(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorSplatY(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorSplatZ(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorSplatW(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorSplatOne();
XMVECTOR XM_CALLCONV XMVectorSplatInfinity();
XMVECTOR XM_CALLCONV XMVectorSplatQNaN();
XMVECTOR XM_CALLCONV XMVectorSplatEpsilon();
XMVECTOR XM_CALLCONV XMVectorSplatSignMask();
float XM_CALLCONV XMVectorGetByIndex(FXMVECTOR V, size_t i);
float XM_CALLCONV XMVectorGetX(FXMVECTOR V);
float XM_CALLCONV XMVectorGetY(FXMVECTOR V);
float XM_CALLCONV XMVectorGetZ(FXMVECTOR V);
float XM_CALLCONV XMVectorGetW(FXMVECTOR V);
void XM_CALLCONV XMVectorGetByIndexPtr(_Out_ float *f, _In_ FXMVECTOR V, _In_ size_t i);
void XM_CALLCONV XMVectorGetXPtr(_Out_ float *x, _In_ FXMVECTOR V);
void XM_CALLCONV XMVectorGetYPtr(_Out_ float *y, _In_ FXMVECTOR V);
void XM_CALLCONV XMVectorGetZPtr(_Out_ float *z, _In_ FXMVECTOR V);
void XM_CALLCONV XMVectorGetWPtr(_Out_ float *w, _In_ FXMVECTOR V);
uint32_t XM_CALLCONV XMVectorGetIntByIndex(FXMVECTOR V, size_t i);
uint32_t XM_CALLCONV XMVectorGetIntX(FXMVECTOR V);
uint32_t XM_CALLCONV XMVectorGetIntY(FXMVECTOR V);
uint32_t XM_CALLCONV XMVectorGetIntZ(FXMVECTOR V);
uint32_t XM_CALLCONV XMVectorGetIntW(FXMVECTOR V);
void XM_CALLCONV XMVectorGetIntByIndexPtr(_Out_ uint32_t *x, _In_ FXMVECTOR V, _In_ size_t i);
void XM_CALLCONV XMVectorGetIntXPtr(_Out_ uint32_t *x, _In_ FXMVECTOR V);
void XM_CALLCONV XMVectorGetIntYPtr(_Out_ uint32_t *y, _In_ FXMVECTOR V);
void XM_CALLCONV XMVectorGetIntZPtr(_Out_ uint32_t *z, _In_ FXMVECTOR V);
void XM_CALLCONV XMVectorGetIntWPtr(_Out_ uint32_t *w, _In_ FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorSetByIndex(FXMVECTOR V,float f, size_t i);
XMVECTOR XM_CALLCONV XMVectorSetX(FXMVECTOR V, float x);
XMVECTOR XM_CALLCONV XMVectorSetY(FXMVECTOR V, float y);
XMVECTOR XM_CALLCONV XMVectorSetZ(FXMVECTOR V, float z);
XMVECTOR XM_CALLCONV XMVectorSetW(FXMVECTOR V, float w);
XMVECTOR XM_CALLCONV XMVectorSetByIndexPtr(_In_ FXMVECTOR V, _In_ const float *f, _In_ size_t i);
XMVECTOR XM_CALLCONV XMVectorSetXPtr(_In_ FXMVECTOR V, _In_ const float *x);
XMVECTOR XM_CALLCONV XMVectorSetYPtr(_In_ FXMVECTOR V, _In_ const float *y);
XMVECTOR XM_CALLCONV XMVectorSetZPtr(_In_ FXMVECTOR V, _In_ const float *z);
XMVECTOR XM_CALLCONV XMVectorSetWPtr(_In_ FXMVECTOR V, _In_ const float *w);
XMVECTOR XM_CALLCONV XMVectorSetIntByIndex(FXMVECTOR V, uint32_t x, size_t i);
XMVECTOR XM_CALLCONV XMVectorSetIntX(FXMVECTOR V, uint32_t x);
XMVECTOR XM_CALLCONV XMVectorSetIntY(FXMVECTOR V, uint32_t y);
XMVECTOR XM_CALLCONV XMVectorSetIntZ(FXMVECTOR V, uint32_t z);
XMVECTOR XM_CALLCONV XMVectorSetIntW(FXMVECTOR V, uint32_t w);
XMVECTOR XM_CALLCONV XMVectorSetIntByIndexPtr(_In_ FXMVECTOR V, _In_ const uint32_t *x, _In_ size_t i);
XMVECTOR XM_CALLCONV XMVectorSetIntXPtr(_In_ FXMVECTOR V, _In_ const uint32_t *x);
XMVECTOR XM_CALLCONV XMVectorSetIntYPtr(_In_ FXMVECTOR V, _In_ const uint32_t *y);
XMVECTOR XM_CALLCONV XMVectorSetIntZPtr(_In_ FXMVECTOR V, _In_ const uint32_t *z);
XMVECTOR XM_CALLCONV XMVectorSetIntWPtr(_In_ FXMVECTOR V, _In_ const uint32_t *w);
XMVECTOR XM_CALLCONV XMVectorSwizzle(FXMVECTOR V, uint32_t E0, uint32_t E1, uint32_t E2, uint32_t E3);
XMVECTOR XM_CALLCONV XMVectorPermute(FXMVECTOR V1, FXMVECTOR V2, uint32_t PermuteX, uint32_t PermuteY, uint32_t PermuteZ, uint32_t PermuteW);
XMVECTOR XM_CALLCONV XMVectorSelectControl(uint32_t VectorIndex0, uint32_t VectorIndex1, uint32_t VectorIndex2, uint32_t VectorIndex3);
XMVECTOR XM_CALLCONV XMVectorSelect(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR Control);
XMVECTOR XM_CALLCONV XMVectorMergeXY(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorMergeZW(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorShiftLeft(FXMVECTOR V1, FXMVECTOR V2, uint32_t Elements);
XMVECTOR XM_CALLCONV XMVectorRotateLeft(FXMVECTOR V, uint32_t Elements);
XMVECTOR XM_CALLCONV XMVectorRotateRight(FXMVECTOR V, uint32_t Elements);
XMVECTOR XM_CALLCONV XMVectorInsert(FXMVECTOR VD, FXMVECTOR VS, uint32_t VSLeftRotateElements,
                                           uint32_t Select0, uint32_t Select1, uint32_t Select2, uint32_t Select3);
XMVECTOR XM_CALLCONV XMVectorEqual(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorEqualR(_Out_ uint32_t* pCR, _In_ FXMVECTOR V1, _In_ FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorEqualInt(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorEqualIntR(_Out_ uint32_t* pCR, _In_ FXMVECTOR V, _In_ FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorNearEqual(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR Epsilon);
XMVECTOR XM_CALLCONV XMVectorNotEqual(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorNotEqualInt(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorGreater(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorGreaterR(_Out_ uint32_t* pCR, _In_ FXMVECTOR V1, _In_ FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorGreaterOrEqual(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorGreaterOrEqualR(_Out_ uint32_t* pCR, _In_ FXMVECTOR V1, _In_ FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorLess(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorLessOrEqual(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorInBounds(FXMVECTOR V, FXMVECTOR Bounds);
XMVECTOR XM_CALLCONV XMVectorInBoundsR(_Out_ uint32_t* pCR, _In_ FXMVECTOR V, _In_ FXMVECTOR Bounds);
XMVECTOR XM_CALLCONV XMVectorIsNaN(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorIsInfinite(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorMin(FXMVECTOR V1,FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorMax(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorRound(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorTruncate(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorFloor(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorCeiling(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorClamp(FXMVECTOR V, FXMVECTOR Min, FXMVECTOR Max);
XMVECTOR XM_CALLCONV XMVectorSaturate(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorAndInt(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorAndCInt(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorOrInt(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorNorInt(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorXorInt(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorNegate(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorAdd(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorSum(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorAddAngles(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorSubtract(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorSubtractAngles(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorMultiply(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorMultiplyAdd(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR V3);
XMVECTOR XM_CALLCONV XMVectorDivide(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorNegativeMultiplySubtract(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR V3);
XMVECTOR XM_CALLCONV XMVectorScale(FXMVECTOR V, float ScaleFactor);
XMVECTOR XM_CALLCONV XMVectorReciprocalEst(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorReciprocal(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorSqrtEst(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorSqrt(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorReciprocalSqrtEst(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorReciprocalSqrt(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorExp2(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorExpE(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorExp(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorLog2(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorLogE(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorLog(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorPow(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorAbs(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorMod(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVectorModAngles(FXMVECTOR Angles);
XMVECTOR XM_CALLCONV XMVectorSin(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorSinEst(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorCos(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorCosEst(FXMVECTOR V);
void XM_CALLCONV XMVectorSinCos(_Out_ XMVECTOR* pSin, _Out_ XMVECTOR* pCos, _In_ FXMVECTOR V);
void XM_CALLCONV XMVectorSinCosEst(_Out_ XMVECTOR* pSin, _Out_ XMVECTOR* pCos, _In_ FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorTan(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorTanEst(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorSinH(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorCosH(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorTanH(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorASin(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorASinEst(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorACos(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorACosEst(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorATan(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorATanEst(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVectorATan2(FXMVECTOR Y, FXMVECTOR X);
XMVECTOR XM_CALLCONV XMVectorATan2Est(FXMVECTOR Y, FXMVECTOR X);
XMVECTOR XM_CALLCONV XMVectorLerp(FXMVECTOR V0, FXMVECTOR V1, float t);
XMVECTOR XM_CALLCONV XMVectorLerpV(FXMVECTOR V0, FXMVECTOR V1, FXMVECTOR T);
XMVECTOR XM_CALLCONV XMVectorHermite(FXMVECTOR Position0, FXMVECTOR Tangent0, FXMVECTOR Position1, GXMVECTOR Tangent1, float t);
XMVECTOR XM_CALLCONV XMVectorHermiteV(FXMVECTOR Position0, FXMVECTOR Tangent0, FXMVECTOR Position1, GXMVECTOR Tangent1, HXMVECTOR T);
XMVECTOR XM_CALLCONV XMVectorCatmullRom(FXMVECTOR Position0, FXMVECTOR Position1, FXMVECTOR Position2, GXMVECTOR Position3, float t);
XMVECTOR XM_CALLCONV XMVectorCatmullRomV(FXMVECTOR Position0, FXMVECTOR Position1, FXMVECTOR Position2, GXMVECTOR Position3, HXMVECTOR T);
XMVECTOR XM_CALLCONV XMVectorBaryCentric(FXMVECTOR Position0, FXMVECTOR Position1, FXMVECTOR Position2, float f, float g);
XMVECTOR XM_CALLCONV XMVectorBaryCentricV(FXMVECTOR Position0, FXMVECTOR Position1, FXMVECTOR Position2, GXMVECTOR F, HXMVECTOR G);
bool XM_CALLCONV XMVector2Equal(FXMVECTOR V1, FXMVECTOR V2);
uint32_t XM_CALLCONV XMVector2EqualR(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector2EqualInt(FXMVECTOR V1, FXMVECTOR V2);
uint32_t XM_CALLCONV XMVector2EqualIntR(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector2NearEqual(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR Epsilon);
bool XM_CALLCONV XMVector2NotEqual(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector2NotEqualInt(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector2Greater(FXMVECTOR V1, FXMVECTOR V2);
uint32_t XM_CALLCONV XMVector2GreaterR(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector2GreaterOrEqual(FXMVECTOR V1, FXMVECTOR V2);
uint32_t XM_CALLCONV XMVector2GreaterOrEqualR(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector2Less(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector2LessOrEqual(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector2InBounds(FXMVECTOR V, FXMVECTOR Bounds);
bool XM_CALLCONV XMVector2IsNaN(FXMVECTOR V);
bool XM_CALLCONV XMVector2IsInfinite(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector2Dot(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVector2Cross(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVector2LengthSq(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector2ReciprocalLengthEst(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector2ReciprocalLength(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector2LengthEst(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector2Length(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector2NormalizeEst(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector2Normalize(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector2ClampLength(FXMVECTOR V, float LengthMin, float LengthMax);
XMVECTOR XM_CALLCONV XMVector2ClampLengthV(FXMVECTOR V, FXMVECTOR LengthMin, FXMVECTOR LengthMax);
XMVECTOR XM_CALLCONV XMVector2Reflect(FXMVECTOR Incident, FXMVECTOR Normal);
XMVECTOR XM_CALLCONV XMVector2Refract(FXMVECTOR Incident, FXMVECTOR Normal, float RefractionIndex);
XMVECTOR XM_CALLCONV XMVector2RefractV(FXMVECTOR Incident, FXMVECTOR Normal, FXMVECTOR RefractionIndex);
XMVECTOR XM_CALLCONV XMVector2Orthogonal(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector2AngleBetweenNormalsEst(FXMVECTOR N1, FXMVECTOR N2);
XMVECTOR XM_CALLCONV XMVector2AngleBetweenNormals(FXMVECTOR N1, FXMVECTOR N2);
XMVECTOR XM_CALLCONV XMVector2AngleBetweenVectors(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVector2LinePointDistance(FXMVECTOR LinePoint1, FXMVECTOR LinePoint2, FXMVECTOR Point);
XMVECTOR XM_CALLCONV XMVector2IntersectLine(FXMVECTOR Line1Point1, FXMVECTOR Line1Point2, FXMVECTOR Line2Point1, GXMVECTOR Line2Point2);
XMVECTOR XM_CALLCONV XMVector2Transform(FXMVECTOR V, FXMMATRIX M);
XMFLOAT4* XM_CALLCONV XMVector2TransformStream(_Out_writes_bytes_(sizeof(XMFLOAT4)+OutputStride*(VectorCount-1)) XMFLOAT4* pOutputStream,
                                                    _In_ size_t OutputStride,
                                                    _In_reads_bytes_(sizeof(XMFLOAT2)+InputStride*(VectorCount-1)) const XMFLOAT2* pInputStream,
                                                    _In_ size_t InputStride, _In_ size_t VectorCount, _In_ FXMMATRIX M);
XMVECTOR XM_CALLCONV XMVector2TransformCoord(FXMVECTOR V, FXMMATRIX M);
XMFLOAT2* XM_CALLCONV XMVector2TransformCoordStream(_Out_writes_bytes_(sizeof(XMFLOAT2)+OutputStride*(VectorCount-1)) XMFLOAT2* pOutputStream,
                                                          _In_ size_t OutputStride,
                                                          _In_reads_bytes_(sizeof(XMFLOAT2)+InputStride*(VectorCount-1)) const XMFLOAT2* pInputStream,
                                                          _In_ size_t InputStride, _In_ size_t VectorCount, _In_ FXMMATRIX M);
XMVECTOR XM_CALLCONV XMVector2TransformNormal(FXMVECTOR V, FXMMATRIX M);
XMFLOAT2* XM_CALLCONV XMVector2TransformNormalStream(_Out_writes_bytes_(sizeof(XMFLOAT2)+OutputStride*(VectorCount-1)) XMFLOAT2* pOutputStream,
                                                           _In_ size_t OutputStride,
                                                           _In_reads_bytes_(sizeof(XMFLOAT2)+InputStride*(VectorCount-1)) const XMFLOAT2* pInputStream,
                                                           _In_ size_t InputStride, _In_ size_t VectorCount, _In_ FXMMATRIX M);
bool XM_CALLCONV XMVector3Equal(FXMVECTOR V1, FXMVECTOR V2);
uint32_t XM_CALLCONV XMVector3EqualR(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector3EqualInt(FXMVECTOR V1, FXMVECTOR V2);
uint32_t XM_CALLCONV XMVector3EqualIntR(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector3NearEqual(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR Epsilon);
bool XM_CALLCONV XMVector3NotEqual(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector3NotEqualInt(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector3Greater(FXMVECTOR V1, FXMVECTOR V2);
uint32_t XM_CALLCONV XMVector3GreaterR(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector3GreaterOrEqual(FXMVECTOR V1, FXMVECTOR V2);
uint32_t XM_CALLCONV XMVector3GreaterOrEqualR(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector3Less(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector3LessOrEqual(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector3InBounds(FXMVECTOR V, FXMVECTOR Bounds);
bool XM_CALLCONV XMVector3IsNaN(FXMVECTOR V);
bool XM_CALLCONV XMVector3IsInfinite(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector3Dot(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVector3Cross(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVector3LengthSq(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector3ReciprocalLengthEst(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector3ReciprocalLength(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector3LengthEst(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector3Length(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector3NormalizeEst(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector3Normalize(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector3ClampLength(FXMVECTOR V, float LengthMin, float LengthMax);
XMVECTOR XM_CALLCONV XMVector3ClampLengthV(FXMVECTOR V, FXMVECTOR LengthMin, FXMVECTOR LengthMax);
XMVECTOR XM_CALLCONV XMVector3Reflect(FXMVECTOR Incident, FXMVECTOR Normal);
XMVECTOR XM_CALLCONV XMVector3Refract(FXMVECTOR Incident, FXMVECTOR Normal, float RefractionIndex);
XMVECTOR XM_CALLCONV XMVector3RefractV(FXMVECTOR Incident, FXMVECTOR Normal, FXMVECTOR RefractionIndex);
XMVECTOR XM_CALLCONV XMVector3Orthogonal(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector3AngleBetweenNormalsEst(FXMVECTOR N1, FXMVECTOR N2);
XMVECTOR XM_CALLCONV XMVector3AngleBetweenNormals(FXMVECTOR N1, FXMVECTOR N2);
XMVECTOR XM_CALLCONV XMVector3AngleBetweenVectors(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVector3LinePointDistance(FXMVECTOR LinePoint1, FXMVECTOR LinePoint2, FXMVECTOR Point);
void XM_CALLCONV XMVector3ComponentsFromNormal(_Out_ XMVECTOR* pParallel, _Out_ XMVECTOR* pPerpendicular, _In_ FXMVECTOR V, _In_ FXMVECTOR Normal);
XMVECTOR XM_CALLCONV XMVector3Rotate(FXMVECTOR V, FXMVECTOR RotationQuaternion);
XMVECTOR XM_CALLCONV XMVector3InverseRotate(FXMVECTOR V, FXMVECTOR RotationQuaternion);
XMVECTOR XM_CALLCONV XMVector3Transform(FXMVECTOR V, FXMMATRIX M);
XMFLOAT4* XM_CALLCONV XMVector3TransformStream(_Out_writes_bytes_(sizeof(XMFLOAT4)+OutputStride*(VectorCount-1)) XMFLOAT4* pOutputStream,
                                                     _In_ size_t OutputStride,
                                                     _In_reads_bytes_(sizeof(XMFLOAT3)+InputStride*(VectorCount-1)) const XMFLOAT3* pInputStream,
                                                     _In_ size_t InputStride, _In_ size_t VectorCount, _In_ FXMMATRIX M);
XMVECTOR XM_CALLCONV XMVector3TransformCoord(FXMVECTOR V, FXMMATRIX M);
XMFLOAT3* XM_CALLCONV XMVector3TransformCoordStream(_Out_writes_bytes_(sizeof(XMFLOAT3)+OutputStride*(VectorCount-1)) XMFLOAT3* pOutputStream,
                                                          _In_ size_t OutputStride,
                                                          _In_reads_bytes_(sizeof(XMFLOAT3)+InputStride*(VectorCount-1)) const XMFLOAT3* pInputStream,
                                                          _In_ size_t InputStride, _In_ size_t VectorCount, _In_ FXMMATRIX M);
XMVECTOR XM_CALLCONV XMVector3TransformNormal(FXMVECTOR V, FXMMATRIX M);
XMFLOAT3* XM_CALLCONV XMVector3TransformNormalStream(_Out_writes_bytes_(sizeof(XMFLOAT3)+OutputStride*(VectorCount-1)) XMFLOAT3* pOutputStream,
                                                           _In_ size_t OutputStride,
                                                           _In_reads_bytes_(sizeof(XMFLOAT3)+InputStride*(VectorCount-1)) const XMFLOAT3* pInputStream,
                                                           _In_ size_t InputStride, _In_ size_t VectorCount, _In_ FXMMATRIX M);
XMVECTOR XM_CALLCONV XMVector3Project(FXMVECTOR V, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight, float ViewportMinZ, float ViewportMaxZ,
                                             FXMMATRIX Projection, CXMMATRIX View, CXMMATRIX World);
XMFLOAT3* XM_CALLCONV XMVector3ProjectStream(_Out_writes_bytes_(sizeof(XMFLOAT3)+OutputStride*(VectorCount-1)) XMFLOAT3* pOutputStream,
                                                   _In_ size_t OutputStride,
                                                   _In_reads_bytes_(sizeof(XMFLOAT3)+InputStride*(VectorCount-1)) const XMFLOAT3* pInputStream,
                                                   _In_ size_t InputStride, _In_ size_t VectorCount,
                                                   _In_ float ViewportX, _In_ float ViewportY, _In_ float ViewportWidth, _In_ float ViewportHeight, _In_ float ViewportMinZ, _In_ float ViewportMaxZ,
                                                   _In_ FXMMATRIX Projection, _In_ CXMMATRIX View, _In_ CXMMATRIX World);
XMVECTOR XM_CALLCONV XMVector3Unproject(FXMVECTOR V, float ViewportX, float ViewportY, float ViewportWidth, float ViewportHeight, float ViewportMinZ, float ViewportMaxZ,
                                               FXMMATRIX Projection, CXMMATRIX View, CXMMATRIX World);
XMFLOAT3* XM_CALLCONV XMVector3UnprojectStream(_Out_writes_bytes_(sizeof(XMFLOAT3)+OutputStride*(VectorCount-1)) XMFLOAT3* pOutputStream,
                                                     _In_ size_t OutputStride,
                                                     _In_reads_bytes_(sizeof(XMFLOAT3)+InputStride*(VectorCount-1)) const XMFLOAT3* pInputStream,
                                                     _In_ size_t InputStride, _In_ size_t VectorCount,
                                                     _In_ float ViewportX, _In_ float ViewportY, _In_ float ViewportWidth, _In_ float ViewportHeight, _In_ float ViewportMinZ, _In_ float ViewportMaxZ,
                                                     _In_ FXMMATRIX Projection, _In_ CXMMATRIX View, _In_ CXMMATRIX World);
bool XM_CALLCONV XMVector4Equal(FXMVECTOR V1, FXMVECTOR V2);
uint32_t XM_CALLCONV XMVector4EqualR(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector4EqualInt(FXMVECTOR V1, FXMVECTOR V2);
uint32_t XM_CALLCONV XMVector4EqualIntR(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector4NearEqual(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR Epsilon);
bool XM_CALLCONV XMVector4NotEqual(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector4NotEqualInt(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector4Greater(FXMVECTOR V1, FXMVECTOR V2);
uint32_t XM_CALLCONV XMVector4GreaterR(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector4GreaterOrEqual(FXMVECTOR V1, FXMVECTOR V2);
uint32_t XM_CALLCONV XMVector4GreaterOrEqualR(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector4Less(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector4LessOrEqual(FXMVECTOR V1, FXMVECTOR V2);
bool XM_CALLCONV XMVector4InBounds(FXMVECTOR V, FXMVECTOR Bounds);
bool XM_CALLCONV XMVector4IsNaN(FXMVECTOR V);
bool XM_CALLCONV XMVector4IsInfinite(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector4Dot(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVector4Cross(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR V3);
XMVECTOR XM_CALLCONV XMVector4LengthSq(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector4ReciprocalLengthEst(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector4ReciprocalLength(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector4LengthEst(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector4Length(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector4NormalizeEst(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector4Normalize(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector4ClampLength(FXMVECTOR V, float LengthMin, float LengthMax);
XMVECTOR XM_CALLCONV XMVector4ClampLengthV(FXMVECTOR V, FXMVECTOR LengthMin, FXMVECTOR LengthMax);
XMVECTOR XM_CALLCONV XMVector4Reflect(FXMVECTOR Incident, FXMVECTOR Normal);
XMVECTOR XM_CALLCONV XMVector4Refract(FXMVECTOR Incident, FXMVECTOR Normal, float RefractionIndex);
XMVECTOR XM_CALLCONV XMVector4RefractV(FXMVECTOR Incident, FXMVECTOR Normal, FXMVECTOR RefractionIndex);
XMVECTOR XM_CALLCONV XMVector4Orthogonal(FXMVECTOR V);
XMVECTOR XM_CALLCONV XMVector4AngleBetweenNormalsEst(FXMVECTOR N1, FXMVECTOR N2);
XMVECTOR XM_CALLCONV XMVector4AngleBetweenNormals(FXMVECTOR N1, FXMVECTOR N2);
XMVECTOR XM_CALLCONV XMVector4AngleBetweenVectors(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR XM_CALLCONV XMVector4Transform(FXMVECTOR V, FXMMATRIX M);
XMFLOAT4* XM_CALLCONV XMVector4TransformStream(_Out_writes_bytes_(sizeof(XMFLOAT4)+OutputStride*(VectorCount-1)) XMFLOAT4* pOutputStream,
                                                     _In_ size_t OutputStride,
                                                     _In_reads_bytes_(sizeof(XMFLOAT4)+InputStride*(VectorCount-1)) const XMFLOAT4* pInputStream,
                                                     _In_ size_t InputStride, _In_ size_t VectorCount, _In_ FXMMATRIX M);
bool XM_CALLCONV XMMatrixIsNaN(FXMMATRIX M);
bool XM_CALLCONV XMMatrixIsInfinite(FXMMATRIX M);
bool XM_CALLCONV XMMatrixIsIdentity(FXMMATRIX M);
XMMATRIX XM_CALLCONV XMMatrixMultiply(FXMMATRIX M1, CXMMATRIX M2);
XMMATRIX XM_CALLCONV XMMatrixMultiplyTranspose(FXMMATRIX M1, CXMMATRIX M2);
XMMATRIX XM_CALLCONV XMMatrixTranspose(FXMMATRIX M);
XMMATRIX XM_CALLCONV XMMatrixInverse(_Out_opt_ XMVECTOR* pDeterminant, _In_ FXMMATRIX M);
XMVECTOR XM_CALLCONV XMMatrixDeterminant(FXMMATRIX M);
_Success_(return)
bool XM_CALLCONV XMMatrixDecompose(_Out_ XMVECTOR *outScale, _Out_ XMVECTOR *outRotQuat, _Out_ XMVECTOR *outTrans, _In_ FXMMATRIX M);
XMMATRIX XM_CALLCONV XMMatrixIdentity();
XMMATRIX XM_CALLCONV XMMatrixSet(float m00, float m01, float m02, float m03,
                                        float m10, float m11, float m12, float m13,
                                        float m20, float m21, float m22, float m23,
                                        float m30, float m31, float m32, float m33);
XMMATRIX XM_CALLCONV XMMatrixTranslation(float OffsetX, float OffsetY, float OffsetZ);
XMMATRIX XM_CALLCONV XMMatrixTranslationFromVector(FXMVECTOR Offset);
XMMATRIX XM_CALLCONV XMMatrixScaling(float ScaleX, float ScaleY, float ScaleZ);
XMMATRIX XM_CALLCONV XMMatrixScalingFromVector(FXMVECTOR Scale);
XMMATRIX XM_CALLCONV XMMatrixRotationX(float Angle);
XMMATRIX XM_CALLCONV XMMatrixRotationY(float Angle);
XMMATRIX XM_CALLCONV XMMatrixRotationZ(float Angle);
XMMATRIX XM_CALLCONV XMMatrixRotationRollPitchYaw(float Pitch, float Yaw, float Roll);
XMMATRIX XM_CALLCONV XMMatrixRotationRollPitchYawFromVector(FXMVECTOR Angles);
XMMATRIX XM_CALLCONV XMMatrixRotationNormal(FXMVECTOR NormalAxis, float Angle);
XMMATRIX XM_CALLCONV XMMatrixRotationAxis(FXMVECTOR Axis, float Angle);
XMMATRIX XM_CALLCONV XMMatrixRotationQuaternion(FXMVECTOR Quaternion);
XMMATRIX XM_CALLCONV XMMatrixTransformation2D(FXMVECTOR ScalingOrigin, float ScalingOrientation, FXMVECTOR Scaling,
                                                     FXMVECTOR RotationOrigin, float Rotation, GXMVECTOR Translation);
XMMATRIX XM_CALLCONV XMMatrixTransformation(FXMVECTOR ScalingOrigin, FXMVECTOR ScalingOrientationQuaternion, FXMVECTOR Scaling,
                                                   GXMVECTOR RotationOrigin, HXMVECTOR RotationQuaternion, HXMVECTOR Translation);
XMMATRIX XM_CALLCONV XMMatrixAffineTransformation2D(FXMVECTOR Scaling, FXMVECTOR RotationOrigin, float Rotation, FXMVECTOR Translation);
XMMATRIX XM_CALLCONV XMMatrixAffineTransformation(FXMVECTOR Scaling, FXMVECTOR RotationOrigin, FXMVECTOR RotationQuaternion, GXMVECTOR Translation);
XMMATRIX XM_CALLCONV XMMatrixReflect(FXMVECTOR ReflectionPlane);
XMMATRIX XM_CALLCONV XMMatrixShadow(FXMVECTOR ShadowPlane, FXMVECTOR LightPosition);
XMMATRIX XM_CALLCONV XMMatrixLookAtLH(FXMVECTOR EyePosition, FXMVECTOR FocusPosition, FXMVECTOR UpDirection);
XMMATRIX XM_CALLCONV XMMatrixLookAtRH(FXMVECTOR EyePosition, FXMVECTOR FocusPosition, FXMVECTOR UpDirection);
XMMATRIX XM_CALLCONV XMMatrixLookToLH(FXMVECTOR EyePosition, FXMVECTOR EyeDirection, FXMVECTOR UpDirection);
XMMATRIX XM_CALLCONV XMMatrixLookToRH(FXMVECTOR EyePosition, FXMVECTOR EyeDirection, FXMVECTOR UpDirection);
XMMATRIX XM_CALLCONV XMMatrixPerspectiveLH(float ViewWidth, float ViewHeight, float NearZ, float FarZ);
XMMATRIX XM_CALLCONV XMMatrixPerspectiveRH(float ViewWidth, float ViewHeight, float NearZ, float FarZ);
XMMATRIX XM_CALLCONV XMMatrixPerspectiveFovLH(float FovAngleY, float AspectRatio, float NearZ, float FarZ);
XMMATRIX XM_CALLCONV XMMatrixPerspectiveFovRH(float FovAngleY, float AspectRatio, float NearZ, float FarZ);
XMMATRIX XM_CALLCONV XMMatrixPerspectiveOffCenterLH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ);
XMMATRIX XM_CALLCONV XMMatrixPerspectiveOffCenterRH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ);
XMMATRIX XM_CALLCONV XMMatrixOrthographicLH(float ViewWidth, float ViewHeight, float NearZ, float FarZ);
XMMATRIX XM_CALLCONV XMMatrixOrthographicRH(float ViewWidth, float ViewHeight, float NearZ, float FarZ);
XMMATRIX XM_CALLCONV XMMatrixOrthographicOffCenterLH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ);
XMMATRIX XM_CALLCONV XMMatrixOrthographicOffCenterRH(float ViewLeft, float ViewRight, float ViewBottom, float ViewTop, float NearZ, float FarZ);
bool XM_CALLCONV XMQuaternionEqual(FXMVECTOR Q1, FXMVECTOR Q2);
bool XM_CALLCONV XMQuaternionNotEqual(FXMVECTOR Q1, FXMVECTOR Q2);
bool XM_CALLCONV XMQuaternionIsNaN(FXMVECTOR Q);
bool XM_CALLCONV XMQuaternionIsInfinite(FXMVECTOR Q);
bool XM_CALLCONV XMQuaternionIsIdentity(FXMVECTOR Q);
XMVECTOR XM_CALLCONV XMQuaternionDot(FXMVECTOR Q1, FXMVECTOR Q2);
XMVECTOR XM_CALLCONV XMQuaternionMultiply(FXMVECTOR Q1, FXMVECTOR Q2);
XMVECTOR XM_CALLCONV XMQuaternionLengthSq(FXMVECTOR Q);
XMVECTOR XM_CALLCONV XMQuaternionReciprocalLength(FXMVECTOR Q);
XMVECTOR XM_CALLCONV XMQuaternionLength(FXMVECTOR Q);
XMVECTOR XM_CALLCONV XMQuaternionNormalizeEst(FXMVECTOR Q);
XMVECTOR XM_CALLCONV XMQuaternionNormalize(FXMVECTOR Q);
XMVECTOR XM_CALLCONV XMQuaternionConjugate(FXMVECTOR Q);
XMVECTOR XM_CALLCONV XMQuaternionInverse(FXMVECTOR Q);
XMVECTOR XM_CALLCONV XMQuaternionLn(FXMVECTOR Q);
XMVECTOR XM_CALLCONV XMQuaternionExp(FXMVECTOR Q);
XMVECTOR XM_CALLCONV XMQuaternionSlerp(FXMVECTOR Q0, FXMVECTOR Q1, float t);
XMVECTOR XM_CALLCONV XMQuaternionSlerpV(FXMVECTOR Q0, FXMVECTOR Q1, FXMVECTOR T);
XMVECTOR XM_CALLCONV XMQuaternionSquad(FXMVECTOR Q0, FXMVECTOR Q1, FXMVECTOR Q2, GXMVECTOR Q3, float t);
XMVECTOR XM_CALLCONV XMQuaternionSquadV(FXMVECTOR Q0, FXMVECTOR Q1, FXMVECTOR Q2, GXMVECTOR Q3, HXMVECTOR T);
void XM_CALLCONV XMQuaternionSquadSetup(_Out_ XMVECTOR* pA, _Out_ XMVECTOR* pB, _Out_ XMVECTOR* pC, _In_ FXMVECTOR Q0, _In_ FXMVECTOR Q1, _In_ FXMVECTOR Q2, _In_ GXMVECTOR Q3);
XMVECTOR XM_CALLCONV XMQuaternionBaryCentric(FXMVECTOR Q0, FXMVECTOR Q1, FXMVECTOR Q2, float f, float g);
XMVECTOR XM_CALLCONV XMQuaternionBaryCentricV(FXMVECTOR Q0, FXMVECTOR Q1, FXMVECTOR Q2, GXMVECTOR F, HXMVECTOR G);
XMVECTOR XM_CALLCONV XMQuaternionIdentity();
XMVECTOR XM_CALLCONV XMQuaternionRotationRollPitchYaw(float Pitch, float Yaw, float Roll);
XMVECTOR XM_CALLCONV XMQuaternionRotationRollPitchYawFromVector(FXMVECTOR Angles);
XMVECTOR XM_CALLCONV XMQuaternionRotationNormal(FXMVECTOR NormalAxis, float Angle);
XMVECTOR XM_CALLCONV XMQuaternionRotationAxis(FXMVECTOR Axis, float Angle);
XMVECTOR XM_CALLCONV XMQuaternionRotationMatrix(FXMMATRIX M);
void XM_CALLCONV XMQuaternionToAxisAngle(_Out_ XMVECTOR* pAxis, _Out_ float* pAngle, _In_ FXMVECTOR Q);
bool XM_CALLCONV XMPlaneEqual(FXMVECTOR P1, FXMVECTOR P2);
bool XM_CALLCONV XMPlaneNearEqual(FXMVECTOR P1, FXMVECTOR P2, FXMVECTOR Epsilon);
bool XM_CALLCONV XMPlaneNotEqual(FXMVECTOR P1, FXMVECTOR P2);
bool XM_CALLCONV XMPlaneIsNaN(FXMVECTOR P);
bool XM_CALLCONV XMPlaneIsInfinite(FXMVECTOR P);
XMVECTOR XM_CALLCONV XMPlaneDot(FXMVECTOR P, FXMVECTOR V);
XMVECTOR XM_CALLCONV XMPlaneDotCoord(FXMVECTOR P, FXMVECTOR V);
XMVECTOR XM_CALLCONV XMPlaneDotNormal(FXMVECTOR P, FXMVECTOR V);
XMVECTOR XM_CALLCONV XMPlaneNormalizeEst(FXMVECTOR P);
XMVECTOR XM_CALLCONV XMPlaneNormalize(FXMVECTOR P);
XMVECTOR XM_CALLCONV XMPlaneIntersectLine(FXMVECTOR P, FXMVECTOR LinePoint1, FXMVECTOR LinePoint2);
void XM_CALLCONV XMPlaneIntersectPlane(_Out_ XMVECTOR* pLinePoint1, _Out_ XMVECTOR* pLinePoint2, _In_ FXMVECTOR P1, _In_ FXMVECTOR P2);
XMVECTOR XM_CALLCONV XMPlaneTransform(FXMVECTOR P, FXMMATRIX M);
XMFLOAT4* XM_CALLCONV XMPlaneTransformStream(_Out_writes_bytes_(sizeof(XMFLOAT4)+OutputStride*(PlaneCount-1)) XMFLOAT4* pOutputStream,
                                                   _In_ size_t OutputStride,
                                                   _In_reads_bytes_(sizeof(XMFLOAT4)+InputStride*(PlaneCount-1)) const XMFLOAT4* pInputStream,
                                                   _In_ size_t InputStride, _In_ size_t PlaneCount, _In_ FXMMATRIX M);
XMVECTOR XM_CALLCONV XMPlaneFromPointNormal(FXMVECTOR Point, FXMVECTOR Normal);
XMVECTOR XM_CALLCONV XMPlaneFromPoints(FXMVECTOR Point1, FXMVECTOR Point2, FXMVECTOR Point3);
bool XM_CALLCONV XMColorEqual(FXMVECTOR C1, FXMVECTOR C2);
bool XM_CALLCONV XMColorNotEqual(FXMVECTOR C1, FXMVECTOR C2);
bool XM_CALLCONV XMColorGreater(FXMVECTOR C1, FXMVECTOR C2);
bool XM_CALLCONV XMColorGreaterOrEqual(FXMVECTOR C1, FXMVECTOR C2);
bool XM_CALLCONV XMColorLess(FXMVECTOR C1, FXMVECTOR C2);
bool XM_CALLCONV XMColorLessOrEqual(FXMVECTOR C1, FXMVECTOR C2);
bool XM_CALLCONV XMColorIsNaN(FXMVECTOR C);
bool XM_CALLCONV XMColorIsInfinite(FXMVECTOR C);
XMVECTOR XM_CALLCONV XMColorNegative(FXMVECTOR C);
XMVECTOR XM_CALLCONV XMColorModulate(FXMVECTOR C1, FXMVECTOR C2);
XMVECTOR XM_CALLCONV XMColorAdjustSaturation(FXMVECTOR C, float Saturation);
XMVECTOR XM_CALLCONV XMColorAdjustContrast(FXMVECTOR C, float Contrast);
XMVECTOR XM_CALLCONV XMColorRGBToHSL( FXMVECTOR rgb );
XMVECTOR XM_CALLCONV XMColorHSLToRGB( FXMVECTOR hsl );
XMVECTOR XM_CALLCONV XMColorRGBToHSV( FXMVECTOR rgb );
XMVECTOR XM_CALLCONV XMColorHSVToRGB( FXMVECTOR hsv );
XMVECTOR XM_CALLCONV XMColorRGBToYUV( FXMVECTOR rgb );
XMVECTOR XM_CALLCONV XMColorYUVToRGB( FXMVECTOR yuv );
XMVECTOR XM_CALLCONV XMColorRGBToYUV_HD( FXMVECTOR rgb );
XMVECTOR XM_CALLCONV XMColorYUVToRGB_HD( FXMVECTOR yuv );
XMVECTOR XM_CALLCONV XMColorRGBToXYZ( FXMVECTOR rgb );
XMVECTOR XM_CALLCONV XMColorXYZToRGB( FXMVECTOR xyz );
XMVECTOR XM_CALLCONV XMColorXYZToSRGB( FXMVECTOR xyz );
XMVECTOR XM_CALLCONV XMColorSRGBToXYZ( FXMVECTOR srgb );
XMVECTOR XM_CALLCONV XMColorRGBToSRGB( FXMVECTOR rgb );
XMVECTOR XM_CALLCONV XMColorSRGBToRGB( FXMVECTOR srgb );
bool XMVerifyCPUSupport();
XMVECTOR XM_CALLCONV XMFresnelTerm(FXMVECTOR CosIncidentAngle, FXMVECTOR RefractionIndex);
bool XMScalarNearEqual(float S1, float S2, float Epsilon);
float XMScalarModAngle(float Value);
float XMScalarSin(float Value);
float XMScalarSinEst(float Value);
float XMScalarCos(float Value);
float XMScalarCosEst(float Value);
void XMScalarSinCos(_Out_ float* pSin, _Out_ float* pCos, float Value);
void XMScalarSinCosEst(_Out_ float* pSin, _Out_ float* pCos, float Value);
float XMScalarASin(float Value);
float XMScalarASinEst(float Value);
float XMScalarACos(float Value);
float XMScalarACosEst(float Value);
template<class T> inline T XMMin(T a, T b) { return (a < b) ? a : b; }
template<class T> inline T XMMax(T a, T b) { return (a > b) ? a : b; }
template<uint32_t PermuteX, uint32_t PermuteY, uint32_t PermuteZ, uint32_t PermuteW>
    inline XMVECTOR XM_CALLCONV XMVectorPermute(FXMVECTOR V1, FXMVECTOR V2)
{
    static_assert(PermuteX <= 7, "PermuteX template parameter out of range");
    static_assert(PermuteY <= 7, "PermuteY template parameter out of range");
    static_assert(PermuteZ <= 7, "PermuteZ template parameter out of range");
    static_assert(PermuteW <= 7, "PermuteW template parameter out of range");
    return XMVectorPermute( V1, V2, PermuteX, PermuteY, PermuteZ, PermuteW );
}
template<> inline XMVECTOR XM_CALLCONV XMVectorPermute<0,1,2,3>(FXMVECTOR V1, FXMVECTOR) { return V1; }
template<> inline XMVECTOR XM_CALLCONV XMVectorPermute<4,5,6,7>(FXMVECTOR, FXMVECTOR V2) { return V2; }
template<uint32_t SwizzleX, uint32_t SwizzleY, uint32_t SwizzleZ, uint32_t SwizzleW>
    inline XMVECTOR XM_CALLCONV XMVectorSwizzle(FXMVECTOR V)
{
    static_assert(SwizzleX <= 3, "SwizzleX template parameter out of range");
    static_assert(SwizzleY <= 3, "SwizzleY template parameter out of range");
    static_assert(SwizzleZ <= 3, "SwizzleZ template parameter out of range");
    static_assert(SwizzleW <= 3, "SwizzleW template parameter out of range");
    return XMVectorSwizzle( V, SwizzleX, SwizzleY, SwizzleZ, SwizzleW );
}
template<> inline XMVECTOR XM_CALLCONV XMVectorSwizzle<0,1,2,3>(FXMVECTOR V) { return V; }
template<uint32_t Elements>
    inline XMVECTOR XM_CALLCONV XMVectorShiftLeft(FXMVECTOR V1, FXMVECTOR V2)
{
    static_assert( Elements < 4, "Elements template parameter out of range" );
    return XMVectorPermute<Elements, (Elements + 1), (Elements + 2), (Elements + 3)>(V1, V2);
}
template<uint32_t Elements>
    inline XMVECTOR XM_CALLCONV XMVectorRotateLeft(FXMVECTOR V)
{
    static_assert( Elements < 4, "Elements template parameter out of range" );
    return XMVectorSwizzle<Elements & 3, (Elements + 1) & 3, (Elements + 2) & 3, (Elements + 3) & 3>(V);
}
template<uint32_t Elements>
    inline XMVECTOR XM_CALLCONV XMVectorRotateRight(FXMVECTOR V)
{
    static_assert( Elements < 4, "Elements template parameter out of range" );
    return XMVectorSwizzle<(4 - Elements) & 3, (5 - Elements) & 3, (6 - Elements) & 3, (7 - Elements) & 3>(V);
}
template<uint32_t VSLeftRotateElements, uint32_t Select0, uint32_t Select1, uint32_t Select2, uint32_t Select3>
    inline XMVECTOR XM_CALLCONV XMVectorInsert(FXMVECTOR VD, FXMVECTOR VS)
{
    XMVECTOR Control = XMVectorSelectControl(Select0&1, Select1&1, Select2&1, Select3&1);
    return XMVectorSelect( VD, XMVectorRotateLeft<VSLeftRotateElements>(VS), Control );
}
XMGLOBALCONST XMVECTORF32 g_XMSinCoefficients0 = { { { -0.16666667f, +0.0083333310f, -0.00019840874f, +2.7525562e-06f } } };
XMGLOBALCONST XMVECTORF32 g_XMSinCoefficients1 = { { { -2.3889859e-08f, -0.16665852f , +0.0083139502f , -0.00018524670f } } };
XMGLOBALCONST XMVECTORF32 g_XMCosCoefficients0 = { { { -0.5f, +0.041666638f, -0.0013888378f, +2.4760495e-05f } } };
XMGLOBALCONST XMVECTORF32 g_XMCosCoefficients1 = { { { -2.6051615e-07f, -0.49992746f , +0.041493919f , -0.0012712436f } } };
XMGLOBALCONST XMVECTORF32 g_XMTanCoefficients0 = { { { 1.0f, 0.333333333f, 0.133333333f, 5.396825397e-2f } } };
XMGLOBALCONST XMVECTORF32 g_XMTanCoefficients1 = { { { 2.186948854e-2f, 8.863235530e-3f, 3.592128167e-3f, 1.455834485e-3f } } };
XMGLOBALCONST XMVECTORF32 g_XMTanCoefficients2 = { { { 5.900274264e-4f, 2.391290764e-4f, 9.691537707e-5f, 3.927832950e-5f } } };
XMGLOBALCONST XMVECTORF32 g_XMArcCoefficients0 = { { { +1.5707963050f, -0.2145988016f, +0.0889789874f, -0.0501743046f } } };
XMGLOBALCONST XMVECTORF32 g_XMArcCoefficients1 = { { { +0.0308918810f, -0.0170881256f, +0.0066700901f, -0.0012624911f } } };
XMGLOBALCONST XMVECTORF32 g_XMATanCoefficients0 = { { { -0.3333314528f, +0.1999355085f, -0.1420889944f, +0.1065626393f } } };
XMGLOBALCONST XMVECTORF32 g_XMATanCoefficients1 = { { { -0.0752896400f, +0.0429096138f, -0.0161657367f, +0.0028662257f } } };
XMGLOBALCONST XMVECTORF32 g_XMATanEstCoefficients0 = { { { +0.999866f, +0.999866f, +0.999866f, +0.999866f } } };
XMGLOBALCONST XMVECTORF32 g_XMATanEstCoefficients1 = { { { -0.3302995f, +0.180141f, -0.085133f, +0.0208351f } } };
XMGLOBALCONST XMVECTORF32 g_XMTanEstCoefficients = { { { 2.484f, -1.954923183e-1f, 2.467401101f, XM_1DIVPI } } };
XMGLOBALCONST XMVECTORF32 g_XMArcEstCoefficients = { { { +1.5707288f, -0.2121144f, +0.0742610f, -0.0187293f } } };
XMGLOBALCONST XMVECTORF32 g_XMPiConstants0 = { { { XM_PI, XM_2PI, XM_1DIVPI, XM_1DIV2PI } } };
XMGLOBALCONST XMVECTORF32 g_XMIdentityR0 = { { { 1.0f, 0.0f, 0.0f, 0.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMIdentityR1 = { { { 0.0f, 1.0f, 0.0f, 0.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMIdentityR2 = { { { 0.0f, 0.0f, 1.0f, 0.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMIdentityR3 = { { { 0.0f, 0.0f, 0.0f, 1.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMNegIdentityR0 = { { { -1.0f, 0.0f, 0.0f, 0.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMNegIdentityR1 = { { { 0.0f, -1.0f, 0.0f, 0.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMNegIdentityR2 = { { { 0.0f, 0.0f, -1.0f, 0.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMNegIdentityR3 = { { { 0.0f, 0.0f, 0.0f, -1.0f } } };
XMGLOBALCONST XMVECTORU32 g_XMNegativeZero = { { { 0x80000000, 0x80000000, 0x80000000, 0x80000000 } } };
XMGLOBALCONST XMVECTORU32 g_XMNegate3 = { { { 0x80000000, 0x80000000, 0x80000000, 0x00000000 } } };
XMGLOBALCONST XMVECTORU32 g_XMMaskXY = { { { 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000 } } };
XMGLOBALCONST XMVECTORU32 g_XMMask3 = { { { 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000 } } };
XMGLOBALCONST XMVECTORU32 g_XMMaskX = { { { 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000 } } };
XMGLOBALCONST XMVECTORU32 g_XMMaskY = { { { 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000 } } };
XMGLOBALCONST XMVECTORU32 g_XMMaskZ = { { { 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000 } } };
XMGLOBALCONST XMVECTORU32 g_XMMaskW = { { { 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF } } };
XMGLOBALCONST XMVECTORF32 g_XMOne = { { { 1.0f, 1.0f, 1.0f, 1.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMOne3 = { { { 1.0f, 1.0f, 1.0f, 0.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMZero = { { { 0.0f, 0.0f, 0.0f, 0.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMTwo = { { { 2.f, 2.f, 2.f, 2.f } } };
XMGLOBALCONST XMVECTORF32 g_XMFour = { { { 4.f, 4.f, 4.f, 4.f } } };
XMGLOBALCONST XMVECTORF32 g_XMSix = { { { 6.f, 6.f, 6.f, 6.f } } };
XMGLOBALCONST XMVECTORF32 g_XMNegativeOne = { { { -1.0f, -1.0f, -1.0f, -1.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMOneHalf = { { { 0.5f, 0.5f, 0.5f, 0.5f } } };
XMGLOBALCONST XMVECTORF32 g_XMNegativeOneHalf = { { { -0.5f, -0.5f, -0.5f, -0.5f } } };
XMGLOBALCONST XMVECTORF32 g_XMNegativeTwoPi = { { { -XM_2PI, -XM_2PI, -XM_2PI, -XM_2PI } } };
XMGLOBALCONST XMVECTORF32 g_XMNegativePi = { { { -XM_PI, -XM_PI, -XM_PI, -XM_PI } } };
XMGLOBALCONST XMVECTORF32 g_XMHalfPi = { { { XM_PIDIV2, XM_PIDIV2, XM_PIDIV2, XM_PIDIV2 } } };
XMGLOBALCONST XMVECTORF32 g_XMPi = { { { XM_PI, XM_PI, XM_PI, XM_PI } } };
XMGLOBALCONST XMVECTORF32 g_XMReciprocalPi = { { { XM_1DIVPI, XM_1DIVPI, XM_1DIVPI, XM_1DIVPI } } };
XMGLOBALCONST XMVECTORF32 g_XMTwoPi = { { { XM_2PI, XM_2PI, XM_2PI, XM_2PI } } };
XMGLOBALCONST XMVECTORF32 g_XMReciprocalTwoPi = { { { XM_1DIV2PI, XM_1DIV2PI, XM_1DIV2PI, XM_1DIV2PI } } };
XMGLOBALCONST XMVECTORF32 g_XMEpsilon = { { { 1.192092896e-7f, 1.192092896e-7f, 1.192092896e-7f, 1.192092896e-7f } } };
XMGLOBALCONST XMVECTORI32 g_XMInfinity = { { { 0x7F800000, 0x7F800000, 0x7F800000, 0x7F800000 } } };
XMGLOBALCONST XMVECTORI32 g_XMQNaN = { { { 0x7FC00000, 0x7FC00000, 0x7FC00000, 0x7FC00000 } } };
XMGLOBALCONST XMVECTORI32 g_XMQNaNTest = { { { 0x007FFFFF, 0x007FFFFF, 0x007FFFFF, 0x007FFFFF } } };
XMGLOBALCONST XMVECTORI32 g_XMAbsMask = { { { 0x7FFFFFFF, 0x7FFFFFFF, 0x7FFFFFFF, 0x7FFFFFFF } } };
XMGLOBALCONST XMVECTORI32 g_XMFltMin = { { { 0x00800000, 0x00800000, 0x00800000, 0x00800000 } } };
XMGLOBALCONST XMVECTORI32 g_XMFltMax = { { { 0x7F7FFFFF, 0x7F7FFFFF, 0x7F7FFFFF, 0x7F7FFFFF } } };
XMGLOBALCONST XMVECTORU32 g_XMNegOneMask = { { { 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF } } };
XMGLOBALCONST XMVECTORU32 g_XMMaskA8R8G8B8 = { { { 0x00FF0000, 0x0000FF00, 0x000000FF, 0xFF000000 } } };
XMGLOBALCONST XMVECTORU32 g_XMFlipA8R8G8B8 = { { { 0x00000000, 0x00000000, 0x00000000, 0x80000000 } } };
XMGLOBALCONST XMVECTORF32 g_XMFixAA8R8G8B8 = { { { 0.0f, 0.0f, 0.0f, float(0x80000000U) } } };
XMGLOBALCONST XMVECTORF32 g_XMNormalizeA8R8G8B8 = { { { 1.0f / (255.0f*float(0x10000)), 1.0f / (255.0f*float(0x100)), 1.0f / 255.0f, 1.0f / (255.0f*float(0x1000000)) } } };
XMGLOBALCONST XMVECTORU32 g_XMMaskA2B10G10R10 = { { { 0x000003FF, 0x000FFC00, 0x3FF00000, 0xC0000000 } } };
XMGLOBALCONST XMVECTORU32 g_XMFlipA2B10G10R10 = { { { 0x00000200, 0x00080000, 0x20000000, 0x80000000 } } };
XMGLOBALCONST XMVECTORF32 g_XMFixAA2B10G10R10 = { { { -512.0f, -512.0f*float(0x400), -512.0f*float(0x100000), float(0x80000000U) } } };
XMGLOBALCONST XMVECTORF32 g_XMNormalizeA2B10G10R10 = { { { 1.0f / 511.0f, 1.0f / (511.0f*float(0x400)), 1.0f / (511.0f*float(0x100000)), 1.0f / (3.0f*float(0x40000000)) } } };
XMGLOBALCONST XMVECTORU32 g_XMMaskX16Y16 = { { { 0x0000FFFF, 0xFFFF0000, 0x00000000, 0x00000000 } } };
XMGLOBALCONST XMVECTORI32 g_XMFlipX16Y16 = { { { 0x00008000, 0x00000000, 0x00000000, 0x00000000 } } };
XMGLOBALCONST XMVECTORF32 g_XMFixX16Y16 = { { { -32768.0f, 0.0f, 0.0f, 0.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMNormalizeX16Y16 = { { { 1.0f / 32767.0f, 1.0f / (32767.0f*65536.0f), 0.0f, 0.0f } } };
XMGLOBALCONST XMVECTORU32 g_XMMaskX16Y16Z16W16 = { { { 0x0000FFFF, 0x0000FFFF, 0xFFFF0000, 0xFFFF0000 } } };
XMGLOBALCONST XMVECTORI32 g_XMFlipX16Y16Z16W16 = { { { 0x00008000, 0x00008000, 0x00000000, 0x00000000 } } };
XMGLOBALCONST XMVECTORF32 g_XMFixX16Y16Z16W16 = { { { -32768.0f, -32768.0f, 0.0f, 0.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMNormalizeX16Y16Z16W16 = { { { 1.0f / 32767.0f, 1.0f / 32767.0f, 1.0f / (32767.0f*65536.0f), 1.0f / (32767.0f*65536.0f) } } };
XMGLOBALCONST XMVECTORF32 g_XMNoFraction = { { { 8388608.0f, 8388608.0f, 8388608.0f, 8388608.0f } } };
XMGLOBALCONST XMVECTORI32 g_XMMaskByte = { { { 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF } } };
XMGLOBALCONST XMVECTORF32 g_XMNegateX = { { { -1.0f, 1.0f, 1.0f, 1.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMNegateY = { { { 1.0f, -1.0f, 1.0f, 1.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMNegateZ = { { { 1.0f, 1.0f, -1.0f, 1.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMNegateW = { { { 1.0f, 1.0f, 1.0f, -1.0f } } };
XMGLOBALCONST XMVECTORU32 g_XMSelect0101 = { { { XM_SELECT_0, XM_SELECT_1, XM_SELECT_0, XM_SELECT_1 } } };
XMGLOBALCONST XMVECTORU32 g_XMSelect1010 = { { { XM_SELECT_1, XM_SELECT_0, XM_SELECT_1, XM_SELECT_0 } } };
XMGLOBALCONST XMVECTORI32 g_XMOneHalfMinusEpsilon = { { { 0x3EFFFFFD, 0x3EFFFFFD, 0x3EFFFFFD, 0x3EFFFFFD } } };
XMGLOBALCONST XMVECTORU32 g_XMSelect1000 = { { { XM_SELECT_1, XM_SELECT_0, XM_SELECT_0, XM_SELECT_0 } } };
XMGLOBALCONST XMVECTORU32 g_XMSelect1100 = { { { XM_SELECT_1, XM_SELECT_1, XM_SELECT_0, XM_SELECT_0 } } };
XMGLOBALCONST XMVECTORU32 g_XMSelect1110 = { { { XM_SELECT_1, XM_SELECT_1, XM_SELECT_1, XM_SELECT_0 } } };
XMGLOBALCONST XMVECTORU32 g_XMSelect1011 = { { { XM_SELECT_1, XM_SELECT_0, XM_SELECT_1, XM_SELECT_1 } } };
XMGLOBALCONST XMVECTORF32 g_XMFixupY16 = { { { 1.0f, 1.0f / 65536.0f, 0.0f, 0.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMFixupY16W16 = { { { 1.0f, 1.0f, 1.0f / 65536.0f, 1.0f / 65536.0f } } };
XMGLOBALCONST XMVECTORU32 g_XMFlipY = { { { 0, 0x80000000, 0, 0 } } };
XMGLOBALCONST XMVECTORU32 g_XMFlipZ = { { { 0, 0, 0x80000000, 0 } } };
XMGLOBALCONST XMVECTORU32 g_XMFlipW = { { { 0, 0, 0, 0x80000000 } } };
XMGLOBALCONST XMVECTORU32 g_XMFlipYZ = { { { 0, 0x80000000, 0x80000000, 0 } } };
XMGLOBALCONST XMVECTORU32 g_XMFlipZW = { { { 0, 0, 0x80000000, 0x80000000 } } };
XMGLOBALCONST XMVECTORU32 g_XMFlipYW = { { { 0, 0x80000000, 0, 0x80000000 } } };
XMGLOBALCONST XMVECTORI32 g_XMMaskDec4 = { { { 0x3FF, 0x3FF << 10, 0x3FF << 20, static_cast<int>(0xC0000000) } } };
XMGLOBALCONST XMVECTORI32 g_XMXorDec4 = { { { 0x200, 0x200 << 10, 0x200 << 20, 0 } } };
XMGLOBALCONST XMVECTORF32 g_XMAddUDec4 = { { { 0, 0, 0, 32768.0f*65536.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMAddDec4 = { { { -512.0f, -512.0f*1024.0f, -512.0f*1024.0f*1024.0f, 0 } } };
XMGLOBALCONST XMVECTORF32 g_XMMulDec4 = { { { 1.0f, 1.0f / 1024.0f, 1.0f / (1024.0f*1024.0f), 1.0f / (1024.0f*1024.0f*1024.0f) } } };
XMGLOBALCONST XMVECTORU32 g_XMMaskByte4 = { { { 0xFF, 0xFF00, 0xFF0000, 0xFF000000 } } };
XMGLOBALCONST XMVECTORI32 g_XMXorByte4 = { { { 0x80, 0x8000, 0x800000, 0x00000000 } } };
XMGLOBALCONST XMVECTORF32 g_XMAddByte4 = { { { -128.0f, -128.0f*256.0f, -128.0f*65536.0f, 0 } } };
XMGLOBALCONST XMVECTORF32 g_XMFixUnsigned = { { { 32768.0f*65536.0f, 32768.0f*65536.0f, 32768.0f*65536.0f, 32768.0f*65536.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMMaxInt = { { { 65536.0f*32768.0f - 128.0f, 65536.0f*32768.0f - 128.0f, 65536.0f*32768.0f - 128.0f, 65536.0f*32768.0f - 128.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMMaxUInt = { { { 65536.0f*65536.0f - 256.0f, 65536.0f*65536.0f - 256.0f, 65536.0f*65536.0f - 256.0f, 65536.0f*65536.0f - 256.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMUnsignedFix = { { { 32768.0f*65536.0f, 32768.0f*65536.0f, 32768.0f*65536.0f, 32768.0f*65536.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMsrgbScale = { { { 12.92f, 12.92f, 12.92f, 1.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMsrgbA = { { { 0.055f, 0.055f, 0.055f, 0.0f } } };
XMGLOBALCONST XMVECTORF32 g_XMsrgbA1 = { { { 1.055f, 1.055f, 1.055f, 1.0f } } };
XMGLOBALCONST XMVECTORI32 g_XMExponentBias = { { { 127, 127, 127, 127 } } };
XMGLOBALCONST XMVECTORI32 g_XMSubnormalExponent = { { { -126, -126, -126, -126 } } };
XMGLOBALCONST XMVECTORI32 g_XMNumTrailing = { { { 23, 23, 23, 23 } } };
XMGLOBALCONST XMVECTORI32 g_XMMinNormal = { { { 0x00800000, 0x00800000, 0x00800000, 0x00800000 } } };
XMGLOBALCONST XMVECTORU32 g_XMNegInfinity = { { { 0xFF800000, 0xFF800000, 0xFF800000, 0xFF800000 } } };
XMGLOBALCONST XMVECTORU32 g_XMNegQNaN = { { { 0xFFC00000, 0xFFC00000, 0xFFC00000, 0xFFC00000 } } };
XMGLOBALCONST XMVECTORI32 g_XMBin128 = { { { 0x43000000, 0x43000000, 0x43000000, 0x43000000 } } };
XMGLOBALCONST XMVECTORU32 g_XMBinNeg150 = { { { 0xC3160000, 0xC3160000, 0xC3160000, 0xC3160000 } } };
XMGLOBALCONST XMVECTORI32 g_XM253 = { { { 253, 253, 253, 253 } } };
XMGLOBALCONST XMVECTORF32 g_XMExpEst1 = { { { -6.93147182e-1f, -6.93147182e-1f, -6.93147182e-1f, -6.93147182e-1f } } };
XMGLOBALCONST XMVECTORF32 g_XMExpEst2 = { { { +2.40226462e-1f, +2.40226462e-1f, +2.40226462e-1f, +2.40226462e-1f } } };
XMGLOBALCONST XMVECTORF32 g_XMExpEst3 = { { { -5.55036440e-2f, -5.55036440e-2f, -5.55036440e-2f, -5.55036440e-2f } } };
XMGLOBALCONST XMVECTORF32 g_XMExpEst4 = { { { +9.61597636e-3f, +9.61597636e-3f, +9.61597636e-3f, +9.61597636e-3f } } };
XMGLOBALCONST XMVECTORF32 g_XMExpEst5 = { { { -1.32823968e-3f, -1.32823968e-3f, -1.32823968e-3f, -1.32823968e-3f } } };
XMGLOBALCONST XMVECTORF32 g_XMExpEst6 = { { { +1.47491097e-4f, +1.47491097e-4f, +1.47491097e-4f, +1.47491097e-4f } } };
XMGLOBALCONST XMVECTORF32 g_XMExpEst7 = { { { -1.08635004e-5f, -1.08635004e-5f, -1.08635004e-5f, -1.08635004e-5f } } };
XMGLOBALCONST XMVECTORF32 g_XMLogEst0 = { { { +1.442693f, +1.442693f, +1.442693f, +1.442693f } } };
XMGLOBALCONST XMVECTORF32 g_XMLogEst1 = { { { -0.721242f, -0.721242f, -0.721242f, -0.721242f } } };
XMGLOBALCONST XMVECTORF32 g_XMLogEst2 = { { { +0.479384f, +0.479384f, +0.479384f, +0.479384f } } };
XMGLOBALCONST XMVECTORF32 g_XMLogEst3 = { { { -0.350295f, -0.350295f, -0.350295f, -0.350295f } } };
XMGLOBALCONST XMVECTORF32 g_XMLogEst4 = { { { +0.248590f, +0.248590f, +0.248590f, +0.248590f } } };
XMGLOBALCONST XMVECTORF32 g_XMLogEst5 = { { { -0.145700f, -0.145700f, -0.145700f, -0.145700f } } };
XMGLOBALCONST XMVECTORF32 g_XMLogEst6 = { { { +0.057148f, +0.057148f, +0.057148f, +0.057148f } } };
XMGLOBALCONST XMVECTORF32 g_XMLogEst7 = { { { -0.010578f, -0.010578f, -0.010578f, -0.010578f } } };
XMGLOBALCONST XMVECTORF32 g_XMLgE = { { { +1.442695f, +1.442695f, +1.442695f, +1.442695f } } };
XMGLOBALCONST XMVECTORF32 g_XMInvLgE = { { { +6.93147182e-1f, +6.93147182e-1f, +6.93147182e-1f, +6.93147182e-1f } } };
XMGLOBALCONST XMVECTORF32 g_UByteMax = { { { 255.0f, 255.0f, 255.0f, 255.0f } } };
XMGLOBALCONST XMVECTORF32 g_ByteMin = { { { -127.0f, -127.0f, -127.0f, -127.0f } } };
XMGLOBALCONST XMVECTORF32 g_ByteMax = { { { 127.0f, 127.0f, 127.0f, 127.0f } } };
XMGLOBALCONST XMVECTORF32 g_ShortMin = { { { -32767.0f, -32767.0f, -32767.0f, -32767.0f } } };
XMGLOBALCONST XMVECTORF32 g_ShortMax = { { { 32767.0f, 32767.0f, 32767.0f, 32767.0f } } };
XMGLOBALCONST XMVECTORF32 g_UShortMax = { { { 65535.0f, 65535.0f, 65535.0f, 65535.0f } } };
#pragma warning(push)
#pragma warning(disable:4068 4214 4204 4365 4616 4640 6001 6101)
#pragma prefast(push)
#pragma prefast(disable : 25000, "FXMVECTOR is 16 bytes")
#pragma prefast(disable : 26495, "Union initialization confuses /analyze")
inline XMVECTOR XM_CALLCONV XMVectorSetBinaryConstant(uint32_t C0, uint32_t C1, uint32_t C2, uint32_t C3)
{
    static const XMVECTORU32 g_vMask1 = { { { 1, 1, 1, 1 } } };
    __m128i vTemp = _mm_set_epi32(static_cast<int>(C3), static_cast<int>(C2), static_cast<int>(C1), static_cast<int>(C0));
    vTemp = _mm_and_si128(vTemp,g_vMask1);
    vTemp = _mm_cmpeq_epi32(vTemp,g_vMask1);
    vTemp = _mm_and_si128(vTemp,g_XMOne);
    return _mm_castsi128_ps(vTemp);
}
inline XMVECTOR XM_CALLCONV XMVectorSplatConstant(int32_t IntConstant, uint32_t DivExponent)
{
    assert( IntConstant >= -16 && IntConstant <= 15 );
    assert( DivExponent < 32 );
    __m128i vScale = _mm_set1_epi32(IntConstant);
    XMVECTOR vResult = _mm_cvtepi32_ps(vScale);
    uint32_t uScale = 0x3F800000U - (DivExponent << 23);
    vScale = _mm_set1_epi32(static_cast<int>(uScale));
    vResult = _mm_mul_ps(vResult,_mm_castsi128_ps(vScale));
    return vResult;
}
inline XMVECTOR XM_CALLCONV XMVectorSplatConstantInt(int32_t IntConstant)
{
    assert( IntConstant >= -16 && IntConstant <= 15 );
    __m128i V = _mm_set1_epi32( IntConstant );
    return _mm_castsi128_ps(V);
}
#include "DirectXMathConvert.inl"
#include "DirectXMathVector.inl"
#include "DirectXMathMatrix.inl"
#include "DirectXMathMisc.inl"
#pragma prefast(pop)
#pragma warning(pop)
}
