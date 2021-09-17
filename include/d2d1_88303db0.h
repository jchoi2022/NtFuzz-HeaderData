       
#include <windows.h>
#include <unknwn.h>
#include <dcommon.h>
#include <D2DErr.h>
#include <D2DBaseTypes.h>
#include <dxgiformat.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <d3d10_1.h>
#else
#include <d3dcommon.h>
#endif
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef interface IDWriteTextFormat IDWriteTextFormat;
typedef interface IDWriteTextLayout IDWriteTextLayout;
typedef interface IDWriteRenderingParams IDWriteRenderingParams;
typedef interface IDXGISurface IDXGISurface;
typedef interface IWICBitmap IWICBitmap;
typedef interface IWICBitmapSource IWICBitmapSource;
typedef struct DWRITE_GLYPH_RUN DWRITE_GLYPH_RUN;
typedef interface ID2D1Factory ID2D1Factory;
typedef interface ID2D1RenderTarget ID2D1RenderTarget;
typedef interface ID2D1BitmapRenderTarget ID2D1BitmapRenderTarget;
typedef interface ID2D1SimplifiedGeometrySink ID2D1SimplifiedGeometrySink;;
typedef interface ID2D1TessellationSink ID2D1TessellationSink;
typedef interface ID2D1Geometry ID2D1Geometry;
typedef interface ID2D1Brush ID2D1Brush;
enum
{
    D2D1_INTERPOLATION_MODE_DEFINITION_NEAREST_NEIGHBOR = 0,
    D2D1_INTERPOLATION_MODE_DEFINITION_LINEAR = 1,
    D2D1_INTERPOLATION_MODE_DEFINITION_CUBIC = 2,
    D2D1_INTERPOLATION_MODE_DEFINITION_MULTI_SAMPLE_LINEAR = 3,
    D2D1_INTERPOLATION_MODE_DEFINITION_ANISOTROPIC = 4,
    D2D1_INTERPOLATION_MODE_DEFINITION_HIGH_QUALITY_CUBIC = 5,
    D2D1_INTERPOLATION_MODE_DEFINITION_FANT = 6,
    D2D1_INTERPOLATION_MODE_DEFINITION_MIPMAP_LINEAR = 7
};
typedef enum D2D1_GAMMA
{
    D2D1_GAMMA_2_2 = 0,
    D2D1_GAMMA_1_0 = 1,
    D2D1_GAMMA_FORCE_DWORD = 0xffffffff
} D2D1_GAMMA;
typedef enum D2D1_OPACITY_MASK_CONTENT
{
    D2D1_OPACITY_MASK_CONTENT_GRAPHICS = 0,
    D2D1_OPACITY_MASK_CONTENT_TEXT_NATURAL = 1,
    D2D1_OPACITY_MASK_CONTENT_TEXT_GDI_COMPATIBLE = 2,
    D2D1_OPACITY_MASK_CONTENT_FORCE_DWORD = 0xffffffff
} D2D1_OPACITY_MASK_CONTENT;
typedef enum D2D1_EXTEND_MODE
{
    D2D1_EXTEND_MODE_CLAMP = 0,
    D2D1_EXTEND_MODE_WRAP = 1,
    D2D1_EXTEND_MODE_MIRROR = 2,
    D2D1_EXTEND_MODE_FORCE_DWORD = 0xffffffff
} D2D1_EXTEND_MODE;
typedef enum D2D1_ANTIALIAS_MODE
{
    D2D1_ANTIALIAS_MODE_PER_PRIMITIVE = 0,
    D2D1_ANTIALIAS_MODE_ALIASED = 1,
    D2D1_ANTIALIAS_MODE_FORCE_DWORD = 0xffffffff
} D2D1_ANTIALIAS_MODE;
typedef enum D2D1_TEXT_ANTIALIAS_MODE
{
    D2D1_TEXT_ANTIALIAS_MODE_DEFAULT = 0,
    D2D1_TEXT_ANTIALIAS_MODE_CLEARTYPE = 1,
    D2D1_TEXT_ANTIALIAS_MODE_GRAYSCALE = 2,
    D2D1_TEXT_ANTIALIAS_MODE_ALIASED = 3,
    D2D1_TEXT_ANTIALIAS_MODE_FORCE_DWORD = 0xffffffff
} D2D1_TEXT_ANTIALIAS_MODE;
typedef enum D2D1_BITMAP_INTERPOLATION_MODE
{
    D2D1_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR = D2D1_INTERPOLATION_MODE_DEFINITION_NEAREST_NEIGHBOR,
    D2D1_BITMAP_INTERPOLATION_MODE_LINEAR = D2D1_INTERPOLATION_MODE_DEFINITION_LINEAR,
    D2D1_BITMAP_INTERPOLATION_MODE_FORCE_DWORD = 0xffffffff
} D2D1_BITMAP_INTERPOLATION_MODE;
typedef enum D2D1_DRAW_TEXT_OPTIONS
{
    D2D1_DRAW_TEXT_OPTIONS_NO_SNAP = 0x00000001,
    D2D1_DRAW_TEXT_OPTIONS_CLIP = 0x00000002,
    D2D1_DRAW_TEXT_OPTIONS_ENABLE_COLOR_FONT = 0x00000004,
    D2D1_DRAW_TEXT_OPTIONS_DISABLE_COLOR_BITMAP_SNAPPING = 0x00000008,
    D2D1_DRAW_TEXT_OPTIONS_NONE = 0x00000000,
    D2D1_DRAW_TEXT_OPTIONS_FORCE_DWORD = 0xffffffff
} D2D1_DRAW_TEXT_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_DRAW_TEXT_OPTIONS);
typedef D2D_POINT_2U D2D1_POINT_2U;
typedef D2D_POINT_2F D2D1_POINT_2F;
typedef D2D_RECT_F D2D1_RECT_F;
typedef D2D_RECT_U D2D1_RECT_U;
typedef D2D_SIZE_F D2D1_SIZE_F;
typedef D2D_SIZE_U D2D1_SIZE_U;
typedef D2D_COLOR_F D2D1_COLOR_F;
typedef D2D_MATRIX_3X2_F D2D1_MATRIX_3X2_F;
typedef UINT64 D2D1_TAG;
typedef struct D2D1_BITMAP_PROPERTIES
{
    D2D1_PIXEL_FORMAT pixelFormat;
    FLOAT dpiX;
    FLOAT dpiY;
} D2D1_BITMAP_PROPERTIES;
typedef struct D2D1_GRADIENT_STOP
{
    FLOAT position;
    D2D1_COLOR_F color;
} D2D1_GRADIENT_STOP;
typedef struct D2D1_BRUSH_PROPERTIES
{
    FLOAT opacity;
    D2D1_MATRIX_3X2_F transform;
} D2D1_BRUSH_PROPERTIES;
typedef struct D2D1_BITMAP_BRUSH_PROPERTIES
{
    D2D1_EXTEND_MODE extendModeX;
    D2D1_EXTEND_MODE extendModeY;
    D2D1_BITMAP_INTERPOLATION_MODE interpolationMode;
} D2D1_BITMAP_BRUSH_PROPERTIES;
typedef struct D2D1_LINEAR_GRADIENT_BRUSH_PROPERTIES
{
    D2D1_POINT_2F startPoint;
    D2D1_POINT_2F endPoint;
} D2D1_LINEAR_GRADIENT_BRUSH_PROPERTIES;
typedef struct D2D1_RADIAL_GRADIENT_BRUSH_PROPERTIES
{
    D2D1_POINT_2F center;
    D2D1_POINT_2F gradientOriginOffset;
    FLOAT radiusX;
    FLOAT radiusY;
} D2D1_RADIAL_GRADIENT_BRUSH_PROPERTIES;
typedef enum D2D1_ARC_SIZE
{
    D2D1_ARC_SIZE_SMALL = 0,
    D2D1_ARC_SIZE_LARGE = 1,
    D2D1_ARC_SIZE_FORCE_DWORD = 0xffffffff
} D2D1_ARC_SIZE;
typedef enum D2D1_CAP_STYLE
{
    D2D1_CAP_STYLE_FLAT = 0,
    D2D1_CAP_STYLE_SQUARE = 1,
    D2D1_CAP_STYLE_ROUND = 2,
    D2D1_CAP_STYLE_TRIANGLE = 3,
    D2D1_CAP_STYLE_FORCE_DWORD = 0xffffffff
} D2D1_CAP_STYLE;
typedef enum D2D1_DASH_STYLE
{
    D2D1_DASH_STYLE_SOLID = 0,
    D2D1_DASH_STYLE_DASH = 1,
    D2D1_DASH_STYLE_DOT = 2,
    D2D1_DASH_STYLE_DASH_DOT = 3,
    D2D1_DASH_STYLE_DASH_DOT_DOT = 4,
    D2D1_DASH_STYLE_CUSTOM = 5,
    D2D1_DASH_STYLE_FORCE_DWORD = 0xffffffff
} D2D1_DASH_STYLE;
typedef enum D2D1_LINE_JOIN
{
    D2D1_LINE_JOIN_MITER = 0,
    D2D1_LINE_JOIN_BEVEL = 1,
    D2D1_LINE_JOIN_ROUND = 2,
    D2D1_LINE_JOIN_MITER_OR_BEVEL = 3,
    D2D1_LINE_JOIN_FORCE_DWORD = 0xffffffff
} D2D1_LINE_JOIN;
typedef enum D2D1_COMBINE_MODE
{
    D2D1_COMBINE_MODE_UNION = 0,
    D2D1_COMBINE_MODE_INTERSECT = 1,
    D2D1_COMBINE_MODE_XOR = 2,
    D2D1_COMBINE_MODE_EXCLUDE = 3,
    D2D1_COMBINE_MODE_FORCE_DWORD = 0xffffffff
} D2D1_COMBINE_MODE;
typedef enum D2D1_GEOMETRY_RELATION
{
    D2D1_GEOMETRY_RELATION_UNKNOWN = 0,
    D2D1_GEOMETRY_RELATION_DISJOINT = 1,
    D2D1_GEOMETRY_RELATION_IS_CONTAINED = 2,
    D2D1_GEOMETRY_RELATION_CONTAINS = 3,
    D2D1_GEOMETRY_RELATION_OVERLAP = 4,
    D2D1_GEOMETRY_RELATION_FORCE_DWORD = 0xffffffff
} D2D1_GEOMETRY_RELATION;
typedef enum D2D1_GEOMETRY_SIMPLIFICATION_OPTION
{
    D2D1_GEOMETRY_SIMPLIFICATION_OPTION_CUBICS_AND_LINES = 0,
    D2D1_GEOMETRY_SIMPLIFICATION_OPTION_LINES = 1,
    D2D1_GEOMETRY_SIMPLIFICATION_OPTION_FORCE_DWORD = 0xffffffff
} D2D1_GEOMETRY_SIMPLIFICATION_OPTION;
typedef enum D2D1_FIGURE_BEGIN
{
    D2D1_FIGURE_BEGIN_FILLED = 0,
    D2D1_FIGURE_BEGIN_HOLLOW = 1,
    D2D1_FIGURE_BEGIN_FORCE_DWORD = 0xffffffff
} D2D1_FIGURE_BEGIN;
typedef enum D2D1_FIGURE_END
{
    D2D1_FIGURE_END_OPEN = 0,
    D2D1_FIGURE_END_CLOSED = 1,
    D2D1_FIGURE_END_FORCE_DWORD = 0xffffffff
} D2D1_FIGURE_END;
typedef struct D2D1_BEZIER_SEGMENT
{
    D2D1_POINT_2F point1;
    D2D1_POINT_2F point2;
    D2D1_POINT_2F point3;
} D2D1_BEZIER_SEGMENT;
typedef struct D2D1_TRIANGLE
{
    D2D1_POINT_2F point1;
    D2D1_POINT_2F point2;
    D2D1_POINT_2F point3;
} D2D1_TRIANGLE;
typedef enum D2D1_PATH_SEGMENT
{
    D2D1_PATH_SEGMENT_NONE = 0x00000000,
    D2D1_PATH_SEGMENT_FORCE_UNSTROKED = 0x00000001,
    D2D1_PATH_SEGMENT_FORCE_ROUND_LINE_JOIN = 0x00000002,
    D2D1_PATH_SEGMENT_FORCE_DWORD = 0xffffffff
} D2D1_PATH_SEGMENT;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_PATH_SEGMENT);
typedef enum D2D1_SWEEP_DIRECTION
{
    D2D1_SWEEP_DIRECTION_COUNTER_CLOCKWISE = 0,
    D2D1_SWEEP_DIRECTION_CLOCKWISE = 1,
    D2D1_SWEEP_DIRECTION_FORCE_DWORD = 0xffffffff
} D2D1_SWEEP_DIRECTION;
typedef enum D2D1_FILL_MODE
{
    D2D1_FILL_MODE_ALTERNATE = 0,
    D2D1_FILL_MODE_WINDING = 1,
    D2D1_FILL_MODE_FORCE_DWORD = 0xffffffff
} D2D1_FILL_MODE;
typedef struct D2D1_ARC_SEGMENT
{
    D2D1_POINT_2F point;
    D2D1_SIZE_F size;
    FLOAT rotationAngle;
    D2D1_SWEEP_DIRECTION sweepDirection;
    D2D1_ARC_SIZE arcSize;
} D2D1_ARC_SEGMENT;
typedef struct D2D1_QUADRATIC_BEZIER_SEGMENT
{
    D2D1_POINT_2F point1;
    D2D1_POINT_2F point2;
} D2D1_QUADRATIC_BEZIER_SEGMENT;
typedef struct D2D1_ELLIPSE
{
    D2D1_POINT_2F point;
    FLOAT radiusX;
    FLOAT radiusY;
} D2D1_ELLIPSE;
typedef struct D2D1_ROUNDED_RECT
{
    D2D1_RECT_F rect;
    FLOAT radiusX;
    FLOAT radiusY;
} D2D1_ROUNDED_RECT;
typedef struct D2D1_STROKE_STYLE_PROPERTIES
{
    D2D1_CAP_STYLE startCap;
    D2D1_CAP_STYLE endCap;
    D2D1_CAP_STYLE dashCap;
    D2D1_LINE_JOIN lineJoin;
    FLOAT miterLimit;
    D2D1_DASH_STYLE dashStyle;
    FLOAT dashOffset;
} D2D1_STROKE_STYLE_PROPERTIES;
typedef enum D2D1_LAYER_OPTIONS
{
    D2D1_LAYER_OPTIONS_NONE = 0x00000000,
    D2D1_LAYER_OPTIONS_INITIALIZE_FOR_CLEARTYPE = 0x00000001,
    D2D1_LAYER_OPTIONS_FORCE_DWORD = 0xffffffff
} D2D1_LAYER_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_LAYER_OPTIONS);
typedef struct D2D1_LAYER_PARAMETERS
{
    D2D1_RECT_F contentBounds;
    _Field_size_opt_(1) ID2D1Geometry *geometricMask;
    D2D1_ANTIALIAS_MODE maskAntialiasMode;
    D2D1_MATRIX_3X2_F maskTransform;
    FLOAT opacity;
    _Field_size_opt_(1) ID2D1Brush *opacityBrush;
    D2D1_LAYER_OPTIONS layerOptions;
} D2D1_LAYER_PARAMETERS;
typedef enum D2D1_WINDOW_STATE
{
    D2D1_WINDOW_STATE_NONE = 0x0000000,
    D2D1_WINDOW_STATE_OCCLUDED = 0x0000001,
    D2D1_WINDOW_STATE_FORCE_DWORD = 0xffffffff
} D2D1_WINDOW_STATE;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_WINDOW_STATE);
typedef enum D2D1_RENDER_TARGET_TYPE
{
    D2D1_RENDER_TARGET_TYPE_DEFAULT = 0,
    D2D1_RENDER_TARGET_TYPE_SOFTWARE = 1,
    D2D1_RENDER_TARGET_TYPE_HARDWARE = 2,
    D2D1_RENDER_TARGET_TYPE_FORCE_DWORD = 0xffffffff
} D2D1_RENDER_TARGET_TYPE;
typedef enum D2D1_FEATURE_LEVEL
{
    D2D1_FEATURE_LEVEL_DEFAULT = 0,
    D2D1_FEATURE_LEVEL_9 = D3D_FEATURE_LEVEL_9_1,
    D2D1_FEATURE_LEVEL_10 = D3D_FEATURE_LEVEL_10_0,
    D2D1_FEATURE_LEVEL_FORCE_DWORD = 0xffffffff
} D2D1_FEATURE_LEVEL;
typedef enum D2D1_RENDER_TARGET_USAGE
{
    D2D1_RENDER_TARGET_USAGE_NONE = 0x00000000,
    D2D1_RENDER_TARGET_USAGE_FORCE_BITMAP_REMOTING = 0x00000001,
    D2D1_RENDER_TARGET_USAGE_GDI_COMPATIBLE = 0x00000002,
    D2D1_RENDER_TARGET_USAGE_FORCE_DWORD = 0xffffffff
} D2D1_RENDER_TARGET_USAGE;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_RENDER_TARGET_USAGE);
typedef enum D2D1_PRESENT_OPTIONS
{
    D2D1_PRESENT_OPTIONS_NONE = 0x00000000,
    D2D1_PRESENT_OPTIONS_RETAIN_CONTENTS = 0x00000001,
    D2D1_PRESENT_OPTIONS_IMMEDIATELY = 0x00000002,
    D2D1_PRESENT_OPTIONS_FORCE_DWORD = 0xffffffff
} D2D1_PRESENT_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_PRESENT_OPTIONS);
typedef struct D2D1_RENDER_TARGET_PROPERTIES
{
    D2D1_RENDER_TARGET_TYPE type;
    D2D1_PIXEL_FORMAT pixelFormat;
    FLOAT dpiX;
    FLOAT dpiY;
    D2D1_RENDER_TARGET_USAGE usage;
    D2D1_FEATURE_LEVEL minLevel;
} D2D1_RENDER_TARGET_PROPERTIES;
typedef struct D2D1_HWND_RENDER_TARGET_PROPERTIES
{
    HWND hwnd;
    D2D1_SIZE_U pixelSize;
    D2D1_PRESENT_OPTIONS presentOptions;
} D2D1_HWND_RENDER_TARGET_PROPERTIES;
typedef enum D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS
{
    D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS_NONE = 0x00000000,
    D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS_GDI_COMPATIBLE = 0x00000001,
    D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS_FORCE_DWORD = 0xffffffff
} D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS);
typedef struct D2D1_DRAWING_STATE_DESCRIPTION
{
    D2D1_ANTIALIAS_MODE antialiasMode;
    D2D1_TEXT_ANTIALIAS_MODE textAntialiasMode;
    D2D1_TAG tag1;
    D2D1_TAG tag2;
    D2D1_MATRIX_3X2_F transform;
} D2D1_DRAWING_STATE_DESCRIPTION;
typedef enum D2D1_DC_INITIALIZE_MODE
{
    D2D1_DC_INITIALIZE_MODE_COPY = 0,
    D2D1_DC_INITIALIZE_MODE_CLEAR = 1,
    D2D1_DC_INITIALIZE_MODE_FORCE_DWORD = 0xffffffff
} D2D1_DC_INITIALIZE_MODE;
typedef enum D2D1_DEBUG_LEVEL
{
    D2D1_DEBUG_LEVEL_NONE = 0,
    D2D1_DEBUG_LEVEL_ERROR = 1,
    D2D1_DEBUG_LEVEL_WARNING = 2,
    D2D1_DEBUG_LEVEL_INFORMATION = 3,
    D2D1_DEBUG_LEVEL_FORCE_DWORD = 0xffffffff
} D2D1_DEBUG_LEVEL;
typedef enum D2D1_FACTORY_TYPE
{
    D2D1_FACTORY_TYPE_SINGLE_THREADED = 0,
    D2D1_FACTORY_TYPE_MULTI_THREADED = 1,
    D2D1_FACTORY_TYPE_FORCE_DWORD = 0xffffffff
} D2D1_FACTORY_TYPE;
typedef struct D2D1_FACTORY_OPTIONS
{
    D2D1_DEBUG_LEVEL debugLevel;
} D2D1_FACTORY_OPTIONS;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
EXTERN_C CONST IID IID_ID2D1Resource;
EXTERN_C CONST IID IID_ID2D1Image;
EXTERN_C CONST IID IID_ID2D1Bitmap;
EXTERN_C CONST IID IID_ID2D1GradientStopCollection;
EXTERN_C CONST IID IID_ID2D1Brush;
EXTERN_C CONST IID IID_ID2D1BitmapBrush;
EXTERN_C CONST IID IID_ID2D1SolidColorBrush;
EXTERN_C CONST IID IID_ID2D1LinearGradientBrush;
EXTERN_C CONST IID IID_ID2D1RadialGradientBrush;
EXTERN_C CONST IID IID_ID2D1StrokeStyle;
EXTERN_C CONST IID IID_ID2D1Geometry;
EXTERN_C CONST IID IID_ID2D1RectangleGeometry;
EXTERN_C CONST IID IID_ID2D1RoundedRectangleGeometry;
EXTERN_C CONST IID IID_ID2D1EllipseGeometry;
EXTERN_C CONST IID IID_ID2D1GeometryGroup;
EXTERN_C CONST IID IID_ID2D1TransformedGeometry;
EXTERN_C CONST IID IID_ID2D1SimplifiedGeometrySink;
EXTERN_C CONST IID IID_ID2D1GeometrySink;
EXTERN_C CONST IID IID_ID2D1TessellationSink;
EXTERN_C CONST IID IID_ID2D1PathGeometry;
EXTERN_C CONST IID IID_ID2D1Mesh;
EXTERN_C CONST IID IID_ID2D1Layer;
EXTERN_C CONST IID IID_ID2D1DrawingStateBlock;
EXTERN_C CONST IID IID_ID2D1RenderTarget;
EXTERN_C CONST IID IID_ID2D1BitmapRenderTarget;
EXTERN_C CONST IID IID_ID2D1HwndRenderTarget;
EXTERN_C CONST IID IID_ID2D1DCRenderTarget;
EXTERN_C CONST IID IID_ID2D1Factory;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C CONST IID IID_ID2D1GdiInteropRenderTarget;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef interface ID2D1Resource ID2D1Resource;
typedef interface ID2D1Image ID2D1Image;
typedef interface ID2D1Bitmap ID2D1Bitmap;
typedef interface ID2D1GradientStopCollection ID2D1GradientStopCollection;
typedef interface ID2D1Brush ID2D1Brush;
typedef interface ID2D1BitmapBrush ID2D1BitmapBrush;
typedef interface ID2D1SolidColorBrush ID2D1SolidColorBrush;
typedef interface ID2D1LinearGradientBrush ID2D1LinearGradientBrush;
typedef interface ID2D1RadialGradientBrush ID2D1RadialGradientBrush;
typedef interface ID2D1StrokeStyle ID2D1StrokeStyle;
typedef interface ID2D1Geometry ID2D1Geometry;
typedef interface ID2D1RectangleGeometry ID2D1RectangleGeometry;
typedef interface ID2D1RoundedRectangleGeometry ID2D1RoundedRectangleGeometry;
typedef interface ID2D1EllipseGeometry ID2D1EllipseGeometry;
typedef interface ID2D1GeometryGroup ID2D1GeometryGroup;
typedef interface ID2D1TransformedGeometry ID2D1TransformedGeometry;
typedef interface ID2D1SimplifiedGeometrySink ID2D1SimplifiedGeometrySink;
typedef interface ID2D1GeometrySink ID2D1GeometrySink;
typedef interface ID2D1TessellationSink ID2D1TessellationSink;
typedef interface ID2D1PathGeometry ID2D1PathGeometry;
typedef interface ID2D1Mesh ID2D1Mesh;
typedef interface ID2D1Layer ID2D1Layer;
typedef interface ID2D1DrawingStateBlock ID2D1DrawingStateBlock;
typedef interface ID2D1RenderTarget ID2D1RenderTarget;
typedef interface ID2D1BitmapRenderTarget ID2D1BitmapRenderTarget;
typedef interface ID2D1HwndRenderTarget ID2D1HwndRenderTarget;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef interface ID2D1GdiInteropRenderTarget ID2D1GdiInteropRenderTarget;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef interface ID2D1DCRenderTarget ID2D1DCRenderTarget;
typedef interface ID2D1Factory ID2D1Factory;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern "C"
{
    HRESULT WINAPI
    D2D1CreateFactory(
        _In_ D2D1_FACTORY_TYPE factoryType,
        _In_ REFIID riid,
        _In_opt_ CONST D2D1_FACTORY_OPTIONS *pFactoryOptions,
        _Out_ void **ppIFactory
        );
    void WINAPI
    D2D1MakeRotateMatrix(
        _In_ FLOAT angle,
        _In_ D2D1_POINT_2F center,
        _Out_ D2D1_MATRIX_3X2_F *matrix
        );
    void WINAPI
    D2D1MakeSkewMatrix(
        _In_ FLOAT angleX,
        _In_ FLOAT angleY,
        _In_ D2D1_POINT_2F center,
        _Out_ D2D1_MATRIX_3X2_F *matrix
        );
    BOOL WINAPI
    D2D1IsMatrixInvertible(
        _In_ CONST D2D1_MATRIX_3X2_F *matrix
        );
    BOOL WINAPI
    D2D1InvertMatrix(
        _Inout_ D2D1_MATRIX_3X2_F *matrix
        );
}
#include <d2d1helper.h>
#endif
#pragma endregion
