       
#include <dxgiformat.h>
#pragma warning(push)
#pragma warning(disable:4201)
struct IDXGISurface;
typedef enum DWRITE_MEASURING_MODE
{
    DWRITE_MEASURING_MODE_NATURAL,
    DWRITE_MEASURING_MODE_GDI_CLASSIC,
    DWRITE_MEASURING_MODE_GDI_NATURAL
} DWRITE_MEASURING_MODE;
enum DWRITE_GLYPH_IMAGE_FORMATS
{
    DWRITE_GLYPH_IMAGE_FORMATS_NONE = 0x00000000,
    DWRITE_GLYPH_IMAGE_FORMATS_TRUETYPE = 0x00000001,
    DWRITE_GLYPH_IMAGE_FORMATS_CFF = 0x00000002,
    DWRITE_GLYPH_IMAGE_FORMATS_COLR = 0x00000004,
    DWRITE_GLYPH_IMAGE_FORMATS_SVG = 0x00000008,
    DWRITE_GLYPH_IMAGE_FORMATS_PNG = 0x00000010,
    DWRITE_GLYPH_IMAGE_FORMATS_JPEG = 0x00000020,
    DWRITE_GLYPH_IMAGE_FORMATS_TIFF = 0x00000040,
    DWRITE_GLYPH_IMAGE_FORMATS_PREMULTIPLIED_B8G8R8A8 = 0x00000080,
};
DEFINE_ENUM_FLAG_OPERATORS(DWRITE_GLYPH_IMAGE_FORMATS);
typedef enum D2D1_ALPHA_MODE
{
        D2D1_ALPHA_MODE_UNKNOWN = 0,
        D2D1_ALPHA_MODE_PREMULTIPLIED = 1,
        D2D1_ALPHA_MODE_STRAIGHT = 2,
        D2D1_ALPHA_MODE_IGNORE = 3,
        D2D1_ALPHA_MODE_FORCE_DWORD = 0xffffffff
} D2D1_ALPHA_MODE;
typedef struct D2D1_PIXEL_FORMAT
{
    DXGI_FORMAT format;
    D2D1_ALPHA_MODE alphaMode;
} D2D1_PIXEL_FORMAT;
typedef struct D2D_POINT_2U
{
    UINT32 x;
    UINT32 y;
} D2D_POINT_2U;
typedef struct D2D_POINT_2F
{
    FLOAT x;
    FLOAT y;
} D2D_POINT_2F;
typedef POINT D2D_POINT_2L;
typedef struct D2D_VECTOR_2F
{
    FLOAT x;
    FLOAT y;
} D2D_VECTOR_2F;
typedef struct D2D_VECTOR_3F
{
    FLOAT x;
    FLOAT y;
    FLOAT z;
} D2D_VECTOR_3F;
typedef struct D2D_VECTOR_4F
{
    FLOAT x;
    FLOAT y;
    FLOAT z;
    FLOAT w;
} D2D_VECTOR_4F;
typedef struct D2D_RECT_F
{
    FLOAT left;
    FLOAT top;
    FLOAT right;
    FLOAT bottom;
} D2D_RECT_F;
typedef struct D2D_RECT_U
{
    UINT32 left;
    UINT32 top;
    UINT32 right;
    UINT32 bottom;
} D2D_RECT_U;
typedef RECT D2D_RECT_L;
typedef struct D2D_SIZE_F
{
    FLOAT width;
    FLOAT height;
} D2D_SIZE_F;
typedef struct D2D_SIZE_U
{
    UINT32 width;
    UINT32 height;
} D2D_SIZE_U;
typedef struct D2D_MATRIX_3X2_F
{
    union
    {
        struct
        {
            FLOAT m11;
            FLOAT m12;
            FLOAT m21;
            FLOAT m22;
            FLOAT dx;
            FLOAT dy;
        };
        struct
        {
            FLOAT _11, _12;
            FLOAT _21, _22;
            FLOAT _31, _32;
        };
        FLOAT m[3][2];
    };
} D2D_MATRIX_3X2_F;
typedef struct D2D_MATRIX_4X3_F
{
    union
    {
        struct
        {
            FLOAT _11, _12, _13;
            FLOAT _21, _22, _23;
            FLOAT _31, _32, _33;
            FLOAT _41, _42, _43;
        };
        FLOAT m[4][3];
    };
} D2D_MATRIX_4X3_F;
typedef struct D2D_MATRIX_4X4_F
{
    union
    {
        struct
        {
            FLOAT _11, _12, _13, _14;
            FLOAT _21, _22, _23, _24;
            FLOAT _31, _32, _33, _34;
            FLOAT _41, _42, _43, _44;
        };
        FLOAT m[4][4];
    };
} D2D_MATRIX_4X4_F;
typedef struct D2D_MATRIX_5X4_F
{
    union
    {
        struct
        {
            FLOAT _11, _12, _13, _14;
            FLOAT _21, _22, _23, _24;
            FLOAT _31, _32, _33, _34;
            FLOAT _41, _42, _43, _44;
            FLOAT _51, _52, _53, _54;
        };
        FLOAT m[5][4];
    };
} D2D_MATRIX_5X4_F;
typedef D2D_POINT_2F D2D1_POINT_2F;
typedef D2D_POINT_2U D2D1_POINT_2U;
typedef D2D_POINT_2L D2D1_POINT_2L;
typedef D2D_RECT_F D2D1_RECT_F;
typedef D2D_RECT_U D2D1_RECT_U;
typedef D2D_RECT_L D2D1_RECT_L;
typedef D2D_SIZE_F D2D1_SIZE_F;
typedef D2D_SIZE_U D2D1_SIZE_U;
typedef D2D_MATRIX_3X2_F D2D1_MATRIX_3X2_F;
#pragma warning(pop)
