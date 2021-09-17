       
#include <d2d1.h>
#include <d2d1effects.h>
#if !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <dxgi.h>
#endif
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef interface ID2D1ColorContext ID2D1ColorContext;
typedef interface IWICColorContext IWICColorContext;
typedef interface IWICImagingFactory IWICImagingFactory;
typedef interface IPrintDocumentPackageTarget IPrintDocumentPackageTarget;
typedef interface IDWriteFactory IDWriteFactory;
typedef struct DWRITE_GLYPH_RUN_DESCRIPTION DWRITE_GLYPH_RUN_DESCRIPTION;
typedef struct D2D1_PROPERTY_BINDING D2D1_PROPERTY_BINDING;
typedef HRESULT (CALLBACK *PD2D1_EFFECT_FACTORY)(
    _Outptr_ IUnknown **effectImpl
    );
interface ID2D1Device;
interface ID2D1Effect;
typedef D2D_RECT_L D2D1_RECT_L;
typedef D2D_POINT_2L D2D1_POINT_2L;
typedef enum D2D1_PROPERTY_TYPE
{
    D2D1_PROPERTY_TYPE_UNKNOWN = 0,
    D2D1_PROPERTY_TYPE_STRING = 1,
    D2D1_PROPERTY_TYPE_BOOL = 2,
    D2D1_PROPERTY_TYPE_UINT32 = 3,
    D2D1_PROPERTY_TYPE_INT32 = 4,
    D2D1_PROPERTY_TYPE_FLOAT = 5,
    D2D1_PROPERTY_TYPE_VECTOR2 = 6,
    D2D1_PROPERTY_TYPE_VECTOR3 = 7,
    D2D1_PROPERTY_TYPE_VECTOR4 = 8,
    D2D1_PROPERTY_TYPE_BLOB = 9,
    D2D1_PROPERTY_TYPE_IUNKNOWN = 10,
    D2D1_PROPERTY_TYPE_ENUM = 11,
    D2D1_PROPERTY_TYPE_ARRAY = 12,
    D2D1_PROPERTY_TYPE_CLSID = 13,
    D2D1_PROPERTY_TYPE_MATRIX_3X2 = 14,
    D2D1_PROPERTY_TYPE_MATRIX_4X3 = 15,
    D2D1_PROPERTY_TYPE_MATRIX_4X4 = 16,
    D2D1_PROPERTY_TYPE_MATRIX_5X4 = 17,
    D2D1_PROPERTY_TYPE_COLOR_CONTEXT = 18,
    D2D1_PROPERTY_TYPE_FORCE_DWORD = 0xffffffff
} D2D1_PROPERTY_TYPE;
typedef enum D2D1_PROPERTY
{
    D2D1_PROPERTY_CLSID = 0x80000000,
    D2D1_PROPERTY_DISPLAYNAME = 0x80000001,
    D2D1_PROPERTY_AUTHOR = 0x80000002,
    D2D1_PROPERTY_CATEGORY = 0x80000003,
    D2D1_PROPERTY_DESCRIPTION = 0x80000004,
    D2D1_PROPERTY_INPUTS = 0x80000005,
    D2D1_PROPERTY_CACHED = 0x80000006,
    D2D1_PROPERTY_PRECISION = 0x80000007,
    D2D1_PROPERTY_MIN_INPUTS = 0x80000008,
    D2D1_PROPERTY_MAX_INPUTS = 0x80000009,
    D2D1_PROPERTY_FORCE_DWORD = 0xffffffff
} D2D1_PROPERTY;
typedef enum D2D1_SUBPROPERTY
{
    D2D1_SUBPROPERTY_DISPLAYNAME = 0x80000000,
    D2D1_SUBPROPERTY_ISREADONLY = 0x80000001,
    D2D1_SUBPROPERTY_MIN = 0x80000002,
    D2D1_SUBPROPERTY_MAX = 0x80000003,
    D2D1_SUBPROPERTY_DEFAULT = 0x80000004,
    D2D1_SUBPROPERTY_FIELDS = 0x80000005,
    D2D1_SUBPROPERTY_INDEX = 0x80000006,
    D2D1_SUBPROPERTY_FORCE_DWORD = 0xffffffff
} D2D1_SUBPROPERTY;
typedef enum D2D1_BITMAP_OPTIONS
{
    D2D1_BITMAP_OPTIONS_NONE = 0x00000000,
    D2D1_BITMAP_OPTIONS_TARGET = 0x00000001,
    D2D1_BITMAP_OPTIONS_CANNOT_DRAW = 0x00000002,
    D2D1_BITMAP_OPTIONS_CPU_READ = 0x00000004,
    D2D1_BITMAP_OPTIONS_GDI_COMPATIBLE = 0x00000008,
    D2D1_BITMAP_OPTIONS_FORCE_DWORD = 0xffffffff
} D2D1_BITMAP_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_BITMAP_OPTIONS);
typedef enum D2D1_COMPOSITE_MODE
{
    D2D1_COMPOSITE_MODE_SOURCE_OVER = 0,
    D2D1_COMPOSITE_MODE_DESTINATION_OVER = 1,
    D2D1_COMPOSITE_MODE_SOURCE_IN = 2,
    D2D1_COMPOSITE_MODE_DESTINATION_IN = 3,
    D2D1_COMPOSITE_MODE_SOURCE_OUT = 4,
    D2D1_COMPOSITE_MODE_DESTINATION_OUT = 5,
    D2D1_COMPOSITE_MODE_SOURCE_ATOP = 6,
    D2D1_COMPOSITE_MODE_DESTINATION_ATOP = 7,
    D2D1_COMPOSITE_MODE_XOR = 8,
    D2D1_COMPOSITE_MODE_PLUS = 9,
    D2D1_COMPOSITE_MODE_SOURCE_COPY = 10,
    D2D1_COMPOSITE_MODE_BOUNDED_SOURCE_COPY = 11,
    D2D1_COMPOSITE_MODE_MASK_INVERT = 12,
    D2D1_COMPOSITE_MODE_FORCE_DWORD = 0xffffffff
} D2D1_COMPOSITE_MODE;
typedef enum D2D1_BUFFER_PRECISION
{
    D2D1_BUFFER_PRECISION_UNKNOWN = 0,
    D2D1_BUFFER_PRECISION_8BPC_UNORM = 1,
    D2D1_BUFFER_PRECISION_8BPC_UNORM_SRGB = 2,
    D2D1_BUFFER_PRECISION_16BPC_UNORM = 3,
    D2D1_BUFFER_PRECISION_16BPC_FLOAT = 4,
    D2D1_BUFFER_PRECISION_32BPC_FLOAT = 5,
    D2D1_BUFFER_PRECISION_FORCE_DWORD = 0xffffffff
} D2D1_BUFFER_PRECISION;
typedef enum D2D1_MAP_OPTIONS
{
    D2D1_MAP_OPTIONS_NONE = 0,
    D2D1_MAP_OPTIONS_READ = 1,
    D2D1_MAP_OPTIONS_WRITE = 2,
    D2D1_MAP_OPTIONS_DISCARD = 4,
    D2D1_MAP_OPTIONS_FORCE_DWORD = 0xffffffff
} D2D1_MAP_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_MAP_OPTIONS);
typedef enum D2D1_INTERPOLATION_MODE
{
    D2D1_INTERPOLATION_MODE_NEAREST_NEIGHBOR = D2D1_INTERPOLATION_MODE_DEFINITION_NEAREST_NEIGHBOR,
    D2D1_INTERPOLATION_MODE_LINEAR = D2D1_INTERPOLATION_MODE_DEFINITION_LINEAR,
    D2D1_INTERPOLATION_MODE_CUBIC = D2D1_INTERPOLATION_MODE_DEFINITION_CUBIC,
    D2D1_INTERPOLATION_MODE_MULTI_SAMPLE_LINEAR = D2D1_INTERPOLATION_MODE_DEFINITION_MULTI_SAMPLE_LINEAR,
    D2D1_INTERPOLATION_MODE_ANISOTROPIC = D2D1_INTERPOLATION_MODE_DEFINITION_ANISOTROPIC,
    D2D1_INTERPOLATION_MODE_HIGH_QUALITY_CUBIC = D2D1_INTERPOLATION_MODE_DEFINITION_HIGH_QUALITY_CUBIC,
    D2D1_INTERPOLATION_MODE_FORCE_DWORD = 0xffffffff
} D2D1_INTERPOLATION_MODE;
typedef enum D2D1_UNIT_MODE
{
    D2D1_UNIT_MODE_DIPS = 0,
    D2D1_UNIT_MODE_PIXELS = 1,
    D2D1_UNIT_MODE_FORCE_DWORD = 0xffffffff
} D2D1_UNIT_MODE;
typedef enum D2D1_COLOR_SPACE
{
    D2D1_COLOR_SPACE_CUSTOM = 0,
    D2D1_COLOR_SPACE_SRGB = 1,
    D2D1_COLOR_SPACE_SCRGB = 2,
    D2D1_COLOR_SPACE_FORCE_DWORD = 0xffffffff
} D2D1_COLOR_SPACE;
typedef enum D2D1_DEVICE_CONTEXT_OPTIONS
{
    D2D1_DEVICE_CONTEXT_OPTIONS_NONE = 0,
    D2D1_DEVICE_CONTEXT_OPTIONS_ENABLE_MULTITHREADED_OPTIMIZATIONS = 1,
    D2D1_DEVICE_CONTEXT_OPTIONS_FORCE_DWORD = 0xffffffff
} D2D1_DEVICE_CONTEXT_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_DEVICE_CONTEXT_OPTIONS);
typedef enum D2D1_STROKE_TRANSFORM_TYPE
{
    D2D1_STROKE_TRANSFORM_TYPE_NORMAL = 0,
    D2D1_STROKE_TRANSFORM_TYPE_FIXED = 1,
    D2D1_STROKE_TRANSFORM_TYPE_HAIRLINE = 2,
    D2D1_STROKE_TRANSFORM_TYPE_FORCE_DWORD = 0xffffffff
} D2D1_STROKE_TRANSFORM_TYPE;
typedef enum D2D1_PRIMITIVE_BLEND
{
    D2D1_PRIMITIVE_BLEND_SOURCE_OVER = 0,
    D2D1_PRIMITIVE_BLEND_COPY = 1,
    D2D1_PRIMITIVE_BLEND_MIN = 2,
    D2D1_PRIMITIVE_BLEND_ADD = 3,
    D2D1_PRIMITIVE_BLEND_MAX = 4,
    D2D1_PRIMITIVE_BLEND_FORCE_DWORD = 0xffffffff
} D2D1_PRIMITIVE_BLEND;
typedef enum D2D1_THREADING_MODE
{
    D2D1_THREADING_MODE_SINGLE_THREADED = D2D1_FACTORY_TYPE_SINGLE_THREADED,
    D2D1_THREADING_MODE_MULTI_THREADED = D2D1_FACTORY_TYPE_MULTI_THREADED,
    D2D1_THREADING_MODE_FORCE_DWORD = 0xffffffff
} D2D1_THREADING_MODE;
typedef enum D2D1_COLOR_INTERPOLATION_MODE
{
    D2D1_COLOR_INTERPOLATION_MODE_STRAIGHT = 0,
    D2D1_COLOR_INTERPOLATION_MODE_PREMULTIPLIED = 1,
    D2D1_COLOR_INTERPOLATION_MODE_FORCE_DWORD = 0xffffffff
} D2D1_COLOR_INTERPOLATION_MODE;
typedef D2D_VECTOR_2F D2D1_VECTOR_2F;
typedef D2D_VECTOR_3F D2D1_VECTOR_3F;
typedef D2D_VECTOR_4F D2D1_VECTOR_4F;
typedef struct D2D1_BITMAP_PROPERTIES1
{
    D2D1_PIXEL_FORMAT pixelFormat;
    FLOAT dpiX;
    FLOAT dpiY;
    D2D1_BITMAP_OPTIONS bitmapOptions;
    _Field_size_opt_(1) ID2D1ColorContext *colorContext;
} D2D1_BITMAP_PROPERTIES1;
typedef struct D2D1_MAPPED_RECT
{
    UINT32 pitch;
    BYTE *bits;
} D2D1_MAPPED_RECT;
typedef struct D2D1_RENDERING_CONTROLS
{
    D2D1_BUFFER_PRECISION bufferPrecision;
    D2D1_SIZE_U tileSize;
} D2D1_RENDERING_CONTROLS;
typedef struct D2D1_EFFECT_INPUT_DESCRIPTION
{
    ID2D1Effect *effect;
    UINT32 inputIndex;
    D2D1_RECT_F inputRectangle;
} D2D1_EFFECT_INPUT_DESCRIPTION;
typedef D2D_MATRIX_4X3_F D2D1_MATRIX_4X3_F;
typedef D2D_MATRIX_4X4_F D2D1_MATRIX_4X4_F;
typedef D2D_MATRIX_5X4_F D2D1_MATRIX_5X4_F;
typedef struct D2D1_POINT_DESCRIPTION
{
    D2D1_POINT_2F point;
    D2D1_POINT_2F unitTangentVector;
    UINT32 endSegment;
    UINT32 endFigure;
    FLOAT lengthToEndSegment;
} D2D1_POINT_DESCRIPTION;
typedef struct D2D1_IMAGE_BRUSH_PROPERTIES
{
    D2D1_RECT_F sourceRectangle;
    D2D1_EXTEND_MODE extendModeX;
    D2D1_EXTEND_MODE extendModeY;
    D2D1_INTERPOLATION_MODE interpolationMode;
} D2D1_IMAGE_BRUSH_PROPERTIES;
typedef struct D2D1_BITMAP_BRUSH_PROPERTIES1
{
    D2D1_EXTEND_MODE extendModeX;
    D2D1_EXTEND_MODE extendModeY;
    D2D1_INTERPOLATION_MODE interpolationMode;
} D2D1_BITMAP_BRUSH_PROPERTIES1;
typedef struct D2D1_STROKE_STYLE_PROPERTIES1
{
    D2D1_CAP_STYLE startCap;
    D2D1_CAP_STYLE endCap;
    D2D1_CAP_STYLE dashCap;
    D2D1_LINE_JOIN lineJoin;
    FLOAT miterLimit;
    D2D1_DASH_STYLE dashStyle;
    FLOAT dashOffset;
    D2D1_STROKE_TRANSFORM_TYPE transformType;
} D2D1_STROKE_STYLE_PROPERTIES1;
typedef enum D2D1_LAYER_OPTIONS1
{
    D2D1_LAYER_OPTIONS1_NONE = 0,
    D2D1_LAYER_OPTIONS1_INITIALIZE_FROM_BACKGROUND = 1,
    D2D1_LAYER_OPTIONS1_IGNORE_ALPHA = 2,
    D2D1_LAYER_OPTIONS1_FORCE_DWORD = 0xffffffff
} D2D1_LAYER_OPTIONS1;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_LAYER_OPTIONS1);
typedef struct D2D1_LAYER_PARAMETERS1
{
    D2D1_RECT_F contentBounds;
    _Field_size_opt_(1) ID2D1Geometry *geometricMask;
    D2D1_ANTIALIAS_MODE maskAntialiasMode;
    D2D1_MATRIX_3X2_F maskTransform;
    FLOAT opacity;
    _Field_size_opt_(1) ID2D1Brush *opacityBrush;
    D2D1_LAYER_OPTIONS1 layerOptions;
} D2D1_LAYER_PARAMETERS1;
typedef enum D2D1_PRINT_FONT_SUBSET_MODE
{
    D2D1_PRINT_FONT_SUBSET_MODE_DEFAULT = 0,
    D2D1_PRINT_FONT_SUBSET_MODE_EACHPAGE = 1,
    D2D1_PRINT_FONT_SUBSET_MODE_NONE = 2,
    D2D1_PRINT_FONT_SUBSET_MODE_FORCE_DWORD = 0xffffffff
} D2D1_PRINT_FONT_SUBSET_MODE;
typedef struct D2D1_DRAWING_STATE_DESCRIPTION1
{
    D2D1_ANTIALIAS_MODE antialiasMode;
    D2D1_TEXT_ANTIALIAS_MODE textAntialiasMode;
    D2D1_TAG tag1;
    D2D1_TAG tag2;
    D2D1_MATRIX_3X2_F transform;
    D2D1_PRIMITIVE_BLEND primitiveBlend;
    D2D1_UNIT_MODE unitMode;
} D2D1_DRAWING_STATE_DESCRIPTION1;
typedef struct D2D1_PRINT_CONTROL_PROPERTIES
{
    D2D1_PRINT_FONT_SUBSET_MODE fontSubset;
    FLOAT rasterDPI;
    D2D1_COLOR_SPACE colorSpace;
} D2D1_PRINT_CONTROL_PROPERTIES;
typedef struct D2D1_CREATION_PROPERTIES
{
    D2D1_THREADING_MODE threadingMode;
    D2D1_DEBUG_LEVEL debugLevel;
    D2D1_DEVICE_CONTEXT_OPTIONS options;
} D2D1_CREATION_PROPERTIES;
EXTERN_C CONST IID IID_ID2D1GdiMetafileSink;
EXTERN_C CONST IID IID_ID2D1GdiMetafile;
EXTERN_C CONST IID IID_ID2D1CommandSink;
EXTERN_C CONST IID IID_ID2D1CommandList;
EXTERN_C CONST IID IID_ID2D1PrintControl;
EXTERN_C CONST IID IID_ID2D1ImageBrush;
EXTERN_C CONST IID IID_ID2D1BitmapBrush1;
EXTERN_C CONST IID IID_ID2D1StrokeStyle1;
EXTERN_C CONST IID IID_ID2D1PathGeometry1;
EXTERN_C CONST IID IID_ID2D1Properties;
EXTERN_C CONST IID IID_ID2D1Effect;
EXTERN_C CONST IID IID_ID2D1Bitmap1;
EXTERN_C CONST IID IID_ID2D1ColorContext;
EXTERN_C CONST IID IID_ID2D1GradientStopCollection1;
EXTERN_C CONST IID IID_ID2D1DrawingStateBlock1;
EXTERN_C CONST IID IID_ID2D1DeviceContext;
EXTERN_C CONST IID IID_ID2D1Device;
EXTERN_C CONST IID IID_ID2D1Factory1;
EXTERN_C CONST IID IID_ID2D1Multithread;
interface DX_DECLARE_INTERFACE("82237326-8111-4f7c-bcf4-b5c1175564fe") ID2D1GdiMetafileSink : public IUnknown
{
    STDMETHOD(ProcessRecord)(
        DWORD recordType,
        _In_opt_ CONST void *recordData,
        DWORD recordDataSize
        ) PURE;
};
interface DX_DECLARE_INTERFACE("2f543dc3-cfc1-4211-864f-cfd91c6f3395") ID2D1GdiMetafile : public ID2D1Resource
{
    STDMETHOD(Stream)(
        _In_ ID2D1GdiMetafileSink *sink
        ) PURE;
    STDMETHOD(GetBounds)(
        _Out_ D2D1_RECT_F *bounds
        ) PURE;
};
interface DX_DECLARE_INTERFACE("54d7898a-a061-40a7-bec7-e465bcba2c4f") ID2D1CommandSink : public IUnknown
{
    STDMETHOD(BeginDraw)(
        ) PURE;
    STDMETHOD(EndDraw)(
        ) PURE;
    STDMETHOD(SetAntialiasMode)(
        D2D1_ANTIALIAS_MODE antialiasMode
        ) PURE;
    STDMETHOD(SetTags)(
        D2D1_TAG tag1,
        D2D1_TAG tag2
        ) PURE;
    STDMETHOD(SetTextAntialiasMode)(
        D2D1_TEXT_ANTIALIAS_MODE textAntialiasMode
        ) PURE;
    STDMETHOD(SetTextRenderingParams)(
        _In_opt_ IDWriteRenderingParams *textRenderingParams
        ) PURE;
    STDMETHOD(SetTransform)(
        _In_ CONST D2D1_MATRIX_3X2_F *transform
        ) PURE;
    STDMETHOD(SetPrimitiveBlend)(
        D2D1_PRIMITIVE_BLEND primitiveBlend
        ) PURE;
    STDMETHOD(SetUnitMode)(
        D2D1_UNIT_MODE unitMode
        ) PURE;
    STDMETHOD(Clear)(
        _In_opt_ CONST D2D1_COLOR_F *color
        ) PURE;
    STDMETHOD(DrawGlyphRun)(
        D2D1_POINT_2F baselineOrigin,
        _In_ CONST DWRITE_GLYPH_RUN *glyphRun,
        _In_opt_ CONST DWRITE_GLYPH_RUN_DESCRIPTION *glyphRunDescription,
        _In_ ID2D1Brush *foregroundBrush,
        DWRITE_MEASURING_MODE measuringMode
        ) PURE;
    STDMETHOD(DrawLine)(
        D2D1_POINT_2F point0,
        D2D1_POINT_2F point1,
        _In_ ID2D1Brush *brush,
        FLOAT strokeWidth,
        _In_opt_ ID2D1StrokeStyle *strokeStyle
        ) PURE;
    STDMETHOD(DrawGeometry)(
        _In_ ID2D1Geometry *geometry,
        _In_ ID2D1Brush *brush,
        FLOAT strokeWidth,
        _In_opt_ ID2D1StrokeStyle *strokeStyle
        ) PURE;
    STDMETHOD(DrawRectangle)(
        _In_ CONST D2D1_RECT_F *rect,
        _In_ ID2D1Brush *brush,
        FLOAT strokeWidth,
        _In_opt_ ID2D1StrokeStyle *strokeStyle
        ) PURE;
    STDMETHOD(DrawBitmap)(
        _In_ ID2D1Bitmap *bitmap,
        _In_opt_ CONST D2D1_RECT_F *destinationRectangle,
        FLOAT opacity,
        D2D1_INTERPOLATION_MODE interpolationMode,
        _In_opt_ CONST D2D1_RECT_F *sourceRectangle,
        _In_opt_ CONST D2D1_MATRIX_4X4_F *perspectiveTransform
        ) PURE;
    STDMETHOD(DrawImage)(
        _In_ ID2D1Image *image,
        _In_opt_ CONST D2D1_POINT_2F *targetOffset,
        _In_opt_ CONST D2D1_RECT_F *imageRectangle,
        D2D1_INTERPOLATION_MODE interpolationMode,
        D2D1_COMPOSITE_MODE compositeMode
        ) PURE;
    STDMETHOD(DrawGdiMetafile)(
        _In_ ID2D1GdiMetafile *gdiMetafile,
        _In_opt_ CONST D2D1_POINT_2F *targetOffset
        ) PURE;
    STDMETHOD(FillMesh)(
        _In_ ID2D1Mesh *mesh,
        _In_ ID2D1Brush *brush
        ) PURE;
    STDMETHOD(FillOpacityMask)(
        _In_ ID2D1Bitmap *opacityMask,
        _In_ ID2D1Brush *brush,
        _In_opt_ CONST D2D1_RECT_F *destinationRectangle,
        _In_opt_ CONST D2D1_RECT_F *sourceRectangle
        ) PURE;
    STDMETHOD(FillGeometry)(
        _In_ ID2D1Geometry *geometry,
        _In_ ID2D1Brush *brush,
        _In_opt_ ID2D1Brush *opacityBrush
        ) PURE;
    STDMETHOD(FillRectangle)(
        _In_ CONST D2D1_RECT_F *rect,
        _In_ ID2D1Brush *brush
        ) PURE;
    STDMETHOD(PushAxisAlignedClip)(
        _In_ CONST D2D1_RECT_F *clipRect,
        D2D1_ANTIALIAS_MODE antialiasMode
        ) PURE;
    STDMETHOD(PushLayer)(
        _In_ CONST D2D1_LAYER_PARAMETERS1 *layerParameters1,
        _In_opt_ ID2D1Layer *layer
        ) PURE;
    STDMETHOD(PopAxisAlignedClip)(
        ) PURE;
    STDMETHOD(PopLayer)(
        ) PURE;
};
interface DX_DECLARE_INTERFACE("b4f34a19-2383-4d76-94f6-ec343657c3dc") ID2D1CommandList : public ID2D1Image
{
    STDMETHOD(Stream)(
        _In_ ID2D1CommandSink *sink
        ) PURE;
    STDMETHOD(Close)(
        ) PURE;
};
interface DX_DECLARE_INTERFACE("2c1d867d-c290-41c8-ae7e-34a98702e9a5") ID2D1PrintControl : public IUnknown
{
    STDMETHOD(AddPage)(
        _In_ ID2D1CommandList *commandList,
        D2D_SIZE_F pageSize,
        _In_opt_ IStream *pagePrintTicketStream,
        _Out_opt_ D2D1_TAG *tag1 = NULL,
        _Out_opt_ D2D1_TAG *tag2 = NULL
        ) PURE;
    STDMETHOD(Close)(
        ) PURE;
};
interface DX_DECLARE_INTERFACE("fe9e984d-3f95-407c-b5db-cb94d4e8f87c") ID2D1ImageBrush : public ID2D1Brush
{
    STDMETHOD_(void, SetImage)(
        _In_opt_ ID2D1Image *image
        ) PURE;
    STDMETHOD_(void, SetExtendModeX)(
        D2D1_EXTEND_MODE extendModeX
        ) PURE;
    STDMETHOD_(void, SetExtendModeY)(
        D2D1_EXTEND_MODE extendModeY
        ) PURE;
    STDMETHOD_(void, SetInterpolationMode)(
        D2D1_INTERPOLATION_MODE interpolationMode
        ) PURE;
    STDMETHOD_(void, SetSourceRectangle)(
        _In_ CONST D2D1_RECT_F *sourceRectangle
        ) PURE;
    STDMETHOD_(void, GetImage)(
        _Outptr_result_maybenull_ ID2D1Image **image
        ) CONST PURE;
    STDMETHOD_(D2D1_EXTEND_MODE, GetExtendModeX)(
        ) CONST PURE;
    STDMETHOD_(D2D1_EXTEND_MODE, GetExtendModeY)(
        ) CONST PURE;
    STDMETHOD_(D2D1_INTERPOLATION_MODE, GetInterpolationMode)(
        ) CONST PURE;
    STDMETHOD_(void, GetSourceRectangle)(
        _Out_ D2D1_RECT_F *sourceRectangle
        ) CONST PURE;
};
interface DX_DECLARE_INTERFACE("41343a53-e41a-49a2-91cd-21793bbb62e5") ID2D1BitmapBrush1 : public ID2D1BitmapBrush
{
    STDMETHOD_(void, SetInterpolationMode1)(
        D2D1_INTERPOLATION_MODE interpolationMode
        ) PURE;
    STDMETHOD_(D2D1_INTERPOLATION_MODE, GetInterpolationMode1)(
        ) CONST PURE;
};
interface DX_DECLARE_INTERFACE("10a72a66-e91c-43f4-993f-ddf4b82b0b4a") ID2D1StrokeStyle1 : public ID2D1StrokeStyle
{
    STDMETHOD_(D2D1_STROKE_TRANSFORM_TYPE, GetStrokeTransformType)(
        ) CONST PURE;
};
interface DX_DECLARE_INTERFACE("62baa2d2-ab54-41b7-b872-787e0106a421") ID2D1PathGeometry1 : public ID2D1PathGeometry
{
    STDMETHOD(ComputePointAndSegmentAtLength)(
        FLOAT length,
        UINT32 startSegment,
        _In_opt_ CONST D2D1_MATRIX_3X2_F *worldTransform,
        FLOAT flatteningTolerance,
        _Out_ D2D1_POINT_DESCRIPTION *pointDescription
        ) CONST PURE;
    COM_DECLSPEC_NOTHROW
    HRESULT
    ComputePointAndSegmentAtLength(
        FLOAT length,
        UINT32 startSegment,
        CONST D2D1_MATRIX_3X2_F &worldTransform,
        FLOAT flatteningTolerance,
        _Out_ D2D1_POINT_DESCRIPTION *pointDescription
        ) CONST
    {
        return ComputePointAndSegmentAtLength(length, startSegment, &worldTransform, flatteningTolerance, pointDescription);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    ComputePointAndSegmentAtLength(
        FLOAT length,
        UINT32 startSegment,
        _In_opt_ CONST D2D1_MATRIX_3X2_F *worldTransform,
        _Out_ D2D1_POINT_DESCRIPTION *pointDescription
        ) CONST
    {
        return ComputePointAndSegmentAtLength(length, startSegment, worldTransform, D2D1_DEFAULT_FLATTENING_TOLERANCE, pointDescription);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    ComputePointAndSegmentAtLength(
        FLOAT length,
        UINT32 startSegment,
        CONST D2D1_MATRIX_3X2_F &worldTransform,
        _Out_ D2D1_POINT_DESCRIPTION *pointDescription
        ) CONST
    {
        return ComputePointAndSegmentAtLength(length, startSegment, &worldTransform, D2D1_DEFAULT_FLATTENING_TOLERANCE, pointDescription);
    }
};
interface DX_DECLARE_INTERFACE("483473d7-cd46-4f9d-9d3a-3112aa80159d") ID2D1Properties : public IUnknown
{
    STDMETHOD_(UINT32, GetPropertyCount)(
        ) CONST PURE;
    STDMETHOD(GetPropertyName)(
        UINT32 index,
        _Out_writes_(nameCount) PWSTR name,
        UINT32 nameCount
        ) CONST PURE;
    STDMETHOD_(UINT32, GetPropertyNameLength)(
        UINT32 index
        ) CONST PURE;
    STDMETHOD_(D2D1_PROPERTY_TYPE, GetType)(
        UINT32 index
        ) CONST PURE;
    STDMETHOD_(UINT32, GetPropertyIndex)(
        _In_ PCWSTR name
        ) CONST PURE;
    STDMETHOD(SetValueByName)(
        _In_ PCWSTR name,
        D2D1_PROPERTY_TYPE type,
        _In_reads_(dataSize) CONST BYTE *data,
        UINT32 dataSize
        ) PURE;
    STDMETHOD(SetValue)(
        UINT32 index,
        D2D1_PROPERTY_TYPE type,
        _In_reads_(dataSize) CONST BYTE *data,
        UINT32 dataSize
        ) PURE;
    STDMETHOD(GetValueByName)(
        _In_ PCWSTR name,
        D2D1_PROPERTY_TYPE type,
        _Out_writes_(dataSize) BYTE *data,
        UINT32 dataSize
        ) CONST PURE;
    STDMETHOD(GetValue)(
        UINT32 index,
        D2D1_PROPERTY_TYPE type,
        _Out_writes_(dataSize) BYTE *data,
        UINT32 dataSize
        ) CONST PURE;
    STDMETHOD_(UINT32, GetValueSize)(
        UINT32 index
        ) CONST PURE;
    STDMETHOD(GetSubProperties)(
        UINT32 index,
        _COM_Outptr_result_maybenull_ ID2D1Properties **subProperties
        ) CONST PURE;
    COM_DECLSPEC_NOTHROW
    HRESULT
    SetValueByName(
        _In_ PCWSTR name,
        _In_reads_(dataSize) CONST BYTE *data,
        UINT32 dataSize
        )
    {
        return SetValueByName(name, D2D1_PROPERTY_TYPE_UNKNOWN, data, dataSize);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    SetValue(
        UINT32 index,
        _In_reads_(dataSize) CONST BYTE *data,
        UINT32 dataSize
        )
    {
        return SetValue(index, D2D1_PROPERTY_TYPE_UNKNOWN, data, dataSize);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetValueByName(
        _In_ PCWSTR name,
        _Out_writes_(dataSize) BYTE *data,
        UINT32 dataSize
        ) CONST
    {
        return GetValueByName(name, D2D1_PROPERTY_TYPE_UNKNOWN, data, dataSize);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    GetValue(
        UINT32 index,
        _Out_writes_(dataSize) BYTE *data,
        UINT32 dataSize
        ) CONST
    {
        return GetValue(index, D2D1_PROPERTY_TYPE_UNKNOWN, data, dataSize);
    }
    template<typename T>
    HRESULT GetValueByName(
        _In_ PCWSTR propertyName,
        _Out_ T *value
        ) const
    {
        return GetValueByName(propertyName, reinterpret_cast<BYTE *>(value), sizeof(*value));
    }
    template<typename T>
    T GetValueByName(
        _In_ PCWSTR propertyName
        ) const
    {
        T value;
        HRESULT ignoreHr = GetValueByName(propertyName, reinterpret_cast<BYTE *>(&value), sizeof(value));
        UNREFERENCED_PARAMETER(ignoreHr);
        return value;
    }
    template<typename T>
    HRESULT SetValueByName(
        _In_ PCWSTR propertyName,
        _In_ const T &value
        )
    {
        return SetValueByName(propertyName, reinterpret_cast<const BYTE *>(&value), sizeof(value));
    }
    template<typename U>
    HRESULT GetValue(
        U index,
        _Out_writes_(dataSize) BYTE *data,
        UINT32 dataSize
        ) CONST
    {
        return GetValue(static_cast<UINT32>(index), data, dataSize);
    }
    template<typename T, typename U>
    HRESULT GetValue(
        U index,
        _Out_ T *value
        ) const
    {
        return GetValue(static_cast<UINT32>(index), reinterpret_cast<BYTE *>(value), sizeof(*value));
    }
    template<typename T, typename U>
    T GetValue(
        U index
        ) const
    {
        T value;
        HRESULT ignoreHr = GetValue(static_cast<UINT32>(index), reinterpret_cast<BYTE *>(&value), sizeof(value));
        ignoreHr;
        return value;
    }
    template<typename U>
    HRESULT SetValue(
        U index,
        _In_reads_(dataSize) CONST BYTE *data,
        UINT32 dataSize
        )
    {
        return SetValue(static_cast<UINT32>(index), data, dataSize);
    }
    template<typename T, typename U>
    HRESULT SetValue(
        U index,
        _In_ const T &value
        )
    {
        return SetValue(static_cast<UINT32>(index), reinterpret_cast<const BYTE *>(&value), sizeof(value));
    }
    template<typename U>
    HRESULT GetPropertyName(
        U index,
        _Out_writes_(nameCount) PWSTR name,
        UINT32 nameCount
        ) CONST
    {
        return GetPropertyName(static_cast<UINT32>(index), name, nameCount);
    }
    template<typename U>
    UINT32 GetPropertyNameLength(
        U index
        ) CONST
    {
        return GetPropertyNameLength(static_cast<UINT32>(index));
    }
    template<typename U>
    D2D1_PROPERTY_TYPE GetType(
        U index
        ) CONST
    {
        return GetType(static_cast<UINT32>(index));
    }
    template<typename U>
    UINT32 GetValueSize(
        U index
        ) CONST
    {
        return GetValueSize(static_cast<UINT32>(index));
    }
    template<typename U>
    HRESULT GetSubProperties(
        U index,
        _Outptr_result_maybenull_ ID2D1Properties **subProperties
        ) CONST
    {
        return GetSubProperties(static_cast<UINT32>(index), subProperties);
    }
};
interface DX_DECLARE_INTERFACE("28211a43-7d89-476f-8181-2d6159b220ad") ID2D1Effect : public ID2D1Properties
{
    STDMETHOD_(void, SetInput)(
        UINT32 index,
        _In_opt_ ID2D1Image *input,
        BOOL invalidate = TRUE
        ) PURE;
    STDMETHOD(SetInputCount)(
        UINT32 inputCount
        ) PURE;
    STDMETHOD_(void, GetInput)(
        UINT32 index,
        _Outptr_result_maybenull_ ID2D1Image **input
        ) CONST PURE;
    STDMETHOD_(UINT32, GetInputCount)(
        ) CONST PURE;
    STDMETHOD_(void, GetOutput)(
        _Outptr_ ID2D1Image **outputImage
        ) CONST PURE;
    COM_DECLSPEC_NOTHROW
    void
    SetInputEffect(
        UINT32 index,
        _In_opt_ ID2D1Effect *inputEffect,
        BOOL invalidate = TRUE
        )
    {
        ID2D1Image *output = NULL;
        if (inputEffect != NULL)
        {
            inputEffect->GetOutput(&output);
        }
        SetInput(index, output, invalidate);
        if (output != NULL)
        {
            output->Release();
        }
    }
};
interface DX_DECLARE_INTERFACE("a898a84c-3873-4588-b08b-ebbf978df041") ID2D1Bitmap1 : public ID2D1Bitmap
{
    STDMETHOD_(void, GetColorContext)(
        _Outptr_result_maybenull_ ID2D1ColorContext **colorContext
        ) CONST PURE;
    STDMETHOD_(D2D1_BITMAP_OPTIONS, GetOptions)(
        ) CONST PURE;
    STDMETHOD(GetSurface)(
        _COM_Outptr_result_maybenull_ IDXGISurface **dxgiSurface
        ) CONST PURE;
    STDMETHOD(Map)(
        D2D1_MAP_OPTIONS options,
        _Out_ D2D1_MAPPED_RECT *mappedRect
        ) PURE;
    STDMETHOD(Unmap)(
        ) PURE;
};
interface DX_DECLARE_INTERFACE("1c4820bb-5771-4518-a581-2fe4dd0ec657") ID2D1ColorContext : public ID2D1Resource
{
    STDMETHOD_(D2D1_COLOR_SPACE, GetColorSpace)(
        ) CONST PURE;
    STDMETHOD_(UINT32, GetProfileSize)(
        ) CONST PURE;
    STDMETHOD(GetProfile)(
        _Out_writes_(profileSize) BYTE *profile,
        UINT32 profileSize
        ) CONST PURE;
};
interface DX_DECLARE_INTERFACE("ae1572f4-5dd0-4777-998b-9279472ae63b") ID2D1GradientStopCollection1 : public ID2D1GradientStopCollection
{
    STDMETHOD_(void, GetGradientStops1)(
        _Out_writes_to_(gradientStopsCount, _Inexpressible_("Retrieved through GetGradientStopCount()") ) D2D1_GRADIENT_STOP *gradientStops,
        UINT32 gradientStopsCount
        ) CONST PURE;
    STDMETHOD_(D2D1_COLOR_SPACE, GetPreInterpolationSpace)(
        ) CONST PURE;
    STDMETHOD_(D2D1_COLOR_SPACE, GetPostInterpolationSpace)(
        ) CONST PURE;
    STDMETHOD_(D2D1_BUFFER_PRECISION, GetBufferPrecision)(
        ) CONST PURE;
    STDMETHOD_(D2D1_COLOR_INTERPOLATION_MODE, GetColorInterpolationMode)(
        ) CONST PURE;
};
interface DX_DECLARE_INTERFACE("689f1f85-c72e-4e33-8f19-85754efd5ace") ID2D1DrawingStateBlock1 : public ID2D1DrawingStateBlock
{
    STDMETHOD_(void, GetDescription)(
        _Out_ D2D1_DRAWING_STATE_DESCRIPTION1 *stateDescription
        ) CONST PURE;
    using ID2D1DrawingStateBlock::GetDescription;
    STDMETHOD_(void, SetDescription)(
        _In_ CONST D2D1_DRAWING_STATE_DESCRIPTION1 *stateDescription
        ) PURE;
    using ID2D1DrawingStateBlock::SetDescription;
};
interface DX_DECLARE_INTERFACE("e8f7fe7a-191c-466d-ad95-975678bda998") ID2D1DeviceContext : public ID2D1RenderTarget
{
    STDMETHOD(CreateBitmap)(
        D2D1_SIZE_U size,
        _In_opt_ CONST void *sourceData,
        UINT32 pitch,
        _In_ CONST D2D1_BITMAP_PROPERTIES1 *bitmapProperties,
        _COM_Outptr_ ID2D1Bitmap1 **bitmap
        ) PURE;
    using ID2D1RenderTarget::CreateBitmap;
    STDMETHOD(CreateBitmapFromWicBitmap)(
        _In_ IWICBitmapSource *wicBitmapSource,
        _In_opt_ CONST D2D1_BITMAP_PROPERTIES1 *bitmapProperties,
        _COM_Outptr_ ID2D1Bitmap1 **bitmap
        ) PURE;
    using ID2D1RenderTarget::CreateBitmapFromWicBitmap;
    STDMETHOD(CreateColorContext)(
        D2D1_COLOR_SPACE space,
        _In_reads_opt_(profileSize) CONST BYTE *profile,
        UINT32 profileSize,
        _COM_Outptr_ ID2D1ColorContext **colorContext
        ) PURE;
    STDMETHOD(CreateColorContextFromFilename)(
        _In_ PCWSTR filename,
        _COM_Outptr_ ID2D1ColorContext **colorContext
        ) PURE;
    STDMETHOD(CreateColorContextFromWicColorContext)(
        _In_ IWICColorContext *wicColorContext,
        _COM_Outptr_ ID2D1ColorContext **colorContext
        ) PURE;
    STDMETHOD(CreateBitmapFromDxgiSurface)(
        _In_ IDXGISurface *surface,
        _In_opt_ CONST D2D1_BITMAP_PROPERTIES1 *bitmapProperties,
        _COM_Outptr_ ID2D1Bitmap1 **bitmap
        ) PURE;
    STDMETHOD(CreateEffect)(
        _In_ REFCLSID effectId,
        _COM_Outptr_ ID2D1Effect **effect
        ) PURE;
    STDMETHOD(CreateGradientStopCollection)(
        _In_reads_(straightAlphaGradientStopsCount) CONST D2D1_GRADIENT_STOP *straightAlphaGradientStops,
        _In_range_(>=,1) UINT32 straightAlphaGradientStopsCount,
        D2D1_COLOR_SPACE preInterpolationSpace,
        D2D1_COLOR_SPACE postInterpolationSpace,
        D2D1_BUFFER_PRECISION bufferPrecision,
        D2D1_EXTEND_MODE extendMode,
        D2D1_COLOR_INTERPOLATION_MODE colorInterpolationMode,
        _COM_Outptr_ ID2D1GradientStopCollection1 **gradientStopCollection1
        ) PURE;
    using ID2D1RenderTarget::CreateGradientStopCollection;
    STDMETHOD(CreateImageBrush)(
        _In_opt_ ID2D1Image *image,
        _In_ CONST D2D1_IMAGE_BRUSH_PROPERTIES *imageBrushProperties,
        _In_opt_ CONST D2D1_BRUSH_PROPERTIES *brushProperties,
        _COM_Outptr_ ID2D1ImageBrush **imageBrush
        ) PURE;
    STDMETHOD(CreateBitmapBrush)(
        _In_opt_ ID2D1Bitmap *bitmap,
        _In_opt_ CONST D2D1_BITMAP_BRUSH_PROPERTIES1 *bitmapBrushProperties,
        _In_opt_ CONST D2D1_BRUSH_PROPERTIES *brushProperties,
        _COM_Outptr_ ID2D1BitmapBrush1 **bitmapBrush
        ) PURE;
    using ID2D1RenderTarget::CreateBitmapBrush;
    STDMETHOD(CreateCommandList)(
        _COM_Outptr_ ID2D1CommandList **commandList
        ) PURE;
    STDMETHOD_(BOOL, IsDxgiFormatSupported)(
        DXGI_FORMAT format
        ) CONST PURE;
    STDMETHOD_(BOOL, IsBufferPrecisionSupported)(
        D2D1_BUFFER_PRECISION bufferPrecision
        ) CONST PURE;
    STDMETHOD(GetImageLocalBounds)(
        _In_ ID2D1Image *image,
        _Out_ D2D1_RECT_F *localBounds
        ) CONST PURE;
    STDMETHOD(GetImageWorldBounds)(
        _In_ ID2D1Image *image,
        _Out_ D2D1_RECT_F *worldBounds
        ) CONST PURE;
    STDMETHOD(GetGlyphRunWorldBounds)(
        D2D1_POINT_2F baselineOrigin,
        _In_ CONST DWRITE_GLYPH_RUN *glyphRun,
        DWRITE_MEASURING_MODE measuringMode,
        _Out_ D2D1_RECT_F *bounds
        ) CONST PURE;
    STDMETHOD_(void, GetDevice)(
        _Outptr_ ID2D1Device **device
        ) CONST PURE;
    STDMETHOD_(void, SetTarget)(
        _In_opt_ ID2D1Image *image
        ) PURE;
    STDMETHOD_(void, GetTarget)(
        _Outptr_result_maybenull_ ID2D1Image **image
        ) CONST PURE;
    STDMETHOD_(void, SetRenderingControls)(
        _In_ CONST D2D1_RENDERING_CONTROLS *renderingControls
        ) PURE;
    STDMETHOD_(void, GetRenderingControls)(
        _Out_ D2D1_RENDERING_CONTROLS *renderingControls
        ) CONST PURE;
    STDMETHOD_(void, SetPrimitiveBlend)(
        D2D1_PRIMITIVE_BLEND primitiveBlend
        ) PURE;
    STDMETHOD_(D2D1_PRIMITIVE_BLEND, GetPrimitiveBlend)(
        ) CONST PURE;
    STDMETHOD_(void, SetUnitMode)(
        D2D1_UNIT_MODE unitMode
        ) PURE;
    STDMETHOD_(D2D1_UNIT_MODE, GetUnitMode)(
        ) CONST PURE;
    STDMETHOD_(void, DrawGlyphRun)(
        D2D1_POINT_2F baselineOrigin,
        _In_ CONST DWRITE_GLYPH_RUN *glyphRun,
        _In_opt_ CONST DWRITE_GLYPH_RUN_DESCRIPTION *glyphRunDescription,
        _In_ ID2D1Brush *foregroundBrush,
        DWRITE_MEASURING_MODE measuringMode = DWRITE_MEASURING_MODE_NATURAL
        ) PURE;
    using ID2D1RenderTarget::DrawGlyphRun;
    STDMETHOD_(void, DrawImage)(
        _In_ ID2D1Image *image,
        _In_opt_ CONST D2D1_POINT_2F *targetOffset = NULL,
        _In_opt_ CONST D2D1_RECT_F *imageRectangle = NULL,
        D2D1_INTERPOLATION_MODE interpolationMode = D2D1_INTERPOLATION_MODE_LINEAR,
        D2D1_COMPOSITE_MODE compositeMode = D2D1_COMPOSITE_MODE_SOURCE_OVER
        ) PURE;
    STDMETHOD_(void, DrawGdiMetafile)(
        _In_ ID2D1GdiMetafile *gdiMetafile,
        _In_opt_ CONST D2D1_POINT_2F *targetOffset = NULL
        ) PURE;
    STDMETHOD_(void, DrawBitmap)(
        _In_ ID2D1Bitmap *bitmap,
        _In_opt_ CONST D2D1_RECT_F *destinationRectangle,
        FLOAT opacity,
        D2D1_INTERPOLATION_MODE interpolationMode,
        _In_opt_ CONST D2D1_RECT_F *sourceRectangle = NULL,
        _In_opt_ CONST D2D1_MATRIX_4X4_F *perspectiveTransform = NULL
        ) PURE;
    using ID2D1RenderTarget::DrawBitmap;
    STDMETHOD_(void, PushLayer)(
        _In_ CONST D2D1_LAYER_PARAMETERS1 *layerParameters,
        _In_opt_ ID2D1Layer *layer
        ) PURE;
    using ID2D1RenderTarget::PushLayer;
    STDMETHOD(InvalidateEffectInputRectangle)(
        _In_ ID2D1Effect *effect,
        UINT32 input,
        _In_ CONST D2D1_RECT_F *inputRectangle
        ) PURE;
    STDMETHOD(GetEffectInvalidRectangleCount)(
        _In_ ID2D1Effect *effect,
        _Out_ UINT32 *rectangleCount
        ) PURE;
    STDMETHOD(GetEffectInvalidRectangles)(
        _In_ ID2D1Effect *effect,
        _Out_writes_(rectanglesCount) D2D1_RECT_F *rectangles,
        UINT32 rectanglesCount
        ) PURE;
    STDMETHOD(GetEffectRequiredInputRectangles)(
        _In_ ID2D1Effect *renderEffect,
        _In_opt_ CONST D2D1_RECT_F *renderImageRectangle,
        _In_reads_(inputCount) CONST D2D1_EFFECT_INPUT_DESCRIPTION *inputDescriptions,
        _Out_writes_(inputCount) D2D1_RECT_F *requiredInputRects,
        UINT32 inputCount
        ) PURE;
    STDMETHOD_(void, FillOpacityMask)(
        _In_ ID2D1Bitmap *opacityMask,
        _In_ ID2D1Brush *brush,
        _In_opt_ CONST D2D1_RECT_F *destinationRectangle = NULL,
        _In_opt_ CONST D2D1_RECT_F *sourceRectangle = NULL
        ) PURE;
    using ID2D1RenderTarget::FillOpacityMask;
    COM_DECLSPEC_NOTHROW
    HRESULT
    CreateBitmap(
        D2D1_SIZE_U size,
        _In_opt_ CONST void *sourceData,
        UINT32 pitch,
        CONST D2D1_BITMAP_PROPERTIES1 &bitmapProperties,
        _COM_Outptr_ ID2D1Bitmap1 **bitmap
        )
    {
        return CreateBitmap(size, sourceData, pitch, &bitmapProperties, bitmap);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    CreateBitmapFromWicBitmap(
        _In_ IWICBitmapSource *wicBitmapSource,
        CONST D2D1_BITMAP_PROPERTIES1 &bitmapProperties,
        _COM_Outptr_ ID2D1Bitmap1 **bitmap
        )
    {
        return CreateBitmapFromWicBitmap(wicBitmapSource, &bitmapProperties, bitmap);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    CreateBitmapFromWicBitmap(
        _In_ IWICBitmapSource *wicBitmapSource,
        _COM_Outptr_ ID2D1Bitmap1 **bitmap
        )
    {
        return CreateBitmapFromWicBitmap(wicBitmapSource, NULL, bitmap);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    CreateBitmapFromDxgiSurface(
        _In_ IDXGISurface *surface,
        CONST D2D1_BITMAP_PROPERTIES1 &bitmapProperties,
        _COM_Outptr_ ID2D1Bitmap1 **bitmap
        )
    {
        return CreateBitmapFromDxgiSurface(surface, &bitmapProperties, bitmap);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    CreateImageBrush(
        _In_opt_ ID2D1Image *image,
        CONST D2D1_IMAGE_BRUSH_PROPERTIES &imageBrushProperties,
        CONST D2D1_BRUSH_PROPERTIES &brushProperties,
        _COM_Outptr_ ID2D1ImageBrush **imageBrush
        )
    {
        return CreateImageBrush(image, &imageBrushProperties, &brushProperties, imageBrush);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    CreateImageBrush(
        _In_opt_ ID2D1Image *image,
        CONST D2D1_IMAGE_BRUSH_PROPERTIES &imageBrushProperties,
        _COM_Outptr_ ID2D1ImageBrush **imageBrush
        )
    {
        return CreateImageBrush(image,&imageBrushProperties, NULL, imageBrush);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    CreateBitmapBrush(
        _In_opt_ ID2D1Bitmap *bitmap,
        _COM_Outptr_ ID2D1BitmapBrush1 **bitmapBrush
        )
    {
        return CreateBitmapBrush(bitmap, NULL, NULL, bitmapBrush);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    CreateBitmapBrush(
        _In_opt_ ID2D1Bitmap *bitmap,
        CONST D2D1_BITMAP_BRUSH_PROPERTIES1 &bitmapBrushProperties,
        _COM_Outptr_ ID2D1BitmapBrush1 **bitmapBrush
        )
    {
        return CreateBitmapBrush(bitmap, &bitmapBrushProperties, NULL, bitmapBrush);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    CreateBitmapBrush(
        _In_opt_ ID2D1Bitmap *bitmap,
        CONST D2D1_BITMAP_BRUSH_PROPERTIES1 &bitmapBrushProperties,
        CONST D2D1_BRUSH_PROPERTIES &brushProperties,
        _COM_Outptr_ ID2D1BitmapBrush1 **bitmapBrush
        )
    {
        return CreateBitmapBrush(bitmap, &bitmapBrushProperties, &brushProperties, bitmapBrush);
    }
    COM_DECLSPEC_NOTHROW
    void
    DrawImage(
        _In_ ID2D1Effect *effect,
        _In_opt_ CONST D2D1_POINT_2F *targetOffset = NULL,
        _In_opt_ CONST D2D1_RECT_F *imageRectangle = NULL,
        D2D1_INTERPOLATION_MODE interpolationMode = D2D1_INTERPOLATION_MODE_LINEAR,
        D2D1_COMPOSITE_MODE compositeMode = D2D1_COMPOSITE_MODE_SOURCE_OVER
        )
    {
        ID2D1Image *output = NULL;
        effect->GetOutput(&output);
        DrawImage(output, targetOffset, imageRectangle, interpolationMode, compositeMode);
        output->Release();
    }
    COM_DECLSPEC_NOTHROW
    void
    DrawImage(
        _In_ ID2D1Image *image,
        D2D1_INTERPOLATION_MODE interpolationMode,
        D2D1_COMPOSITE_MODE compositeMode = D2D1_COMPOSITE_MODE_SOURCE_OVER
        )
    {
        DrawImage(image, NULL, NULL, interpolationMode, compositeMode);
    }
    COM_DECLSPEC_NOTHROW
    void
    DrawImage(
        _In_ ID2D1Effect *effect,
        D2D1_INTERPOLATION_MODE interpolationMode,
        D2D1_COMPOSITE_MODE compositeMode = D2D1_COMPOSITE_MODE_SOURCE_OVER
        )
    {
        DrawImage(effect, NULL, NULL, interpolationMode, compositeMode);
    }
    COM_DECLSPEC_NOTHROW
    void
    DrawImage(
        _In_ ID2D1Image *image,
        D2D1_POINT_2F targetOffset,
        D2D1_INTERPOLATION_MODE interpolationMode = D2D1_INTERPOLATION_MODE_LINEAR,
        D2D1_COMPOSITE_MODE compositeMode = D2D1_COMPOSITE_MODE_SOURCE_OVER
        )
    {
        DrawImage(image, &targetOffset, NULL, interpolationMode, compositeMode);
    }
    COM_DECLSPEC_NOTHROW
    void
    DrawImage(
        _In_ ID2D1Effect *effect,
        D2D1_POINT_2F targetOffset,
        D2D1_INTERPOLATION_MODE interpolationMode = D2D1_INTERPOLATION_MODE_LINEAR,
        D2D1_COMPOSITE_MODE compositeMode = D2D1_COMPOSITE_MODE_SOURCE_OVER
        )
    {
        DrawImage(effect, &targetOffset, NULL, interpolationMode, compositeMode);
    }
    COM_DECLSPEC_NOTHROW
    void
    DrawImage(
        _In_ ID2D1Image *image,
        D2D1_POINT_2F targetOffset,
        CONST D2D1_RECT_F &imageRectangle,
        D2D1_INTERPOLATION_MODE interpolationMode = D2D1_INTERPOLATION_MODE_LINEAR,
        D2D1_COMPOSITE_MODE compositeMode = D2D1_COMPOSITE_MODE_SOURCE_OVER
        )
    {
        DrawImage(image, &targetOffset, &imageRectangle, interpolationMode, compositeMode);
    }
    COM_DECLSPEC_NOTHROW
    void
    DrawImage(
        _In_ ID2D1Effect *effect,
        D2D1_POINT_2F targetOffset,
        CONST D2D1_RECT_F &imageRectangle,
        D2D1_INTERPOLATION_MODE interpolationMode = D2D1_INTERPOLATION_MODE_LINEAR,
        D2D1_COMPOSITE_MODE compositeMode = D2D1_COMPOSITE_MODE_SOURCE_OVER
        )
    {
        DrawImage(effect, &targetOffset, &imageRectangle, interpolationMode, compositeMode);
    }
    COM_DECLSPEC_NOTHROW
    void
    PushLayer(
        CONST D2D1_LAYER_PARAMETERS1 &layerParameters,
        _In_opt_ ID2D1Layer *layer
        )
    {
        PushLayer(&layerParameters, layer);
    }
    COM_DECLSPEC_NOTHROW
    void
    DrawGdiMetafile(
        _In_ ID2D1GdiMetafile *gdiMetafile,
        D2D1_POINT_2F targetOffset
        )
    {
        DrawGdiMetafile(gdiMetafile, &targetOffset);
    }
    COM_DECLSPEC_NOTHROW
    void
    DrawBitmap(
        _In_ ID2D1Bitmap *bitmap,
        CONST D2D1_RECT_F &destinationRectangle,
        FLOAT opacity,
        D2D1_INTERPOLATION_MODE interpolationMode,
        _In_opt_ CONST D2D1_RECT_F *sourceRectangle = NULL,
        _In_opt_ CONST D2D1_MATRIX_4X4_F *perspectiveTransform = NULL
        )
    {
        DrawBitmap(bitmap, &destinationRectangle, opacity, interpolationMode, sourceRectangle, perspectiveTransform);
    }
    COM_DECLSPEC_NOTHROW
    void
    DrawBitmap(
        _In_ ID2D1Bitmap *bitmap,
        CONST D2D1_RECT_F &destinationRectangle,
        FLOAT opacity,
        D2D1_INTERPOLATION_MODE interpolationMode,
        CONST D2D1_RECT_F &sourceRectangle,
        _In_opt_ CONST D2D1_MATRIX_4X4_F *perspectiveTransform = NULL
        )
    {
        DrawBitmap(bitmap, &destinationRectangle, opacity, interpolationMode, &sourceRectangle, perspectiveTransform);
    }
    COM_DECLSPEC_NOTHROW
    void
    DrawBitmap(
        _In_ ID2D1Bitmap *bitmap,
        CONST D2D1_RECT_F &destinationRectangle,
        FLOAT opacity,
        D2D1_INTERPOLATION_MODE interpolationMode,
        CONST D2D1_RECT_F &sourceRectangle,
        CONST D2D1_MATRIX_4X4_F &perspectiveTransform
        )
    {
        DrawBitmap(bitmap, &destinationRectangle, opacity, interpolationMode, &sourceRectangle, &perspectiveTransform);
    }
    COM_DECLSPEC_NOTHROW
    void
    FillOpacityMask(
        _In_ ID2D1Bitmap *opacityMask,
        _In_ ID2D1Brush *brush,
        CONST D2D1_RECT_F &destinationRectangle,
        _In_opt_ CONST D2D1_RECT_F *sourceRectangle = NULL
        )
    {
        FillOpacityMask(opacityMask, brush, &destinationRectangle, sourceRectangle);
    }
    COM_DECLSPEC_NOTHROW
    void
    FillOpacityMask(
        _In_ ID2D1Bitmap *opacityMask,
        _In_ ID2D1Brush *brush,
        CONST D2D1_RECT_F &destinationRectangle,
        CONST D2D1_RECT_F &sourceRectangle
        )
    {
        FillOpacityMask(opacityMask, brush, &destinationRectangle, &sourceRectangle);
    }
    COM_DECLSPEC_NOTHROW
    void
    SetRenderingControls(
        CONST D2D1_RENDERING_CONTROLS &renderingControls
        )
    {
        return SetRenderingControls(&renderingControls);
    }
};
interface DX_DECLARE_INTERFACE("47dd575d-ac05-4cdd-8049-9b02cd16f44c") ID2D1Device : public ID2D1Resource
{
    STDMETHOD(CreateDeviceContext)(
        D2D1_DEVICE_CONTEXT_OPTIONS options,
        _COM_Outptr_ ID2D1DeviceContext **deviceContext
        ) PURE;
    STDMETHOD(CreatePrintControl)(
        _In_ IWICImagingFactory *wicFactory,
        _In_ IPrintDocumentPackageTarget *documentTarget,
        _In_opt_ CONST D2D1_PRINT_CONTROL_PROPERTIES *printControlProperties,
        _COM_Outptr_ ID2D1PrintControl **printControl
        ) PURE;
    STDMETHOD_(void, SetMaximumTextureMemory)(
        UINT64 maximumInBytes
        ) PURE;
    STDMETHOD_(UINT64, GetMaximumTextureMemory)(
        ) CONST PURE;
    STDMETHOD_(void, ClearResources)(
        UINT32 millisecondsSinceUse = 0
        ) PURE;
    COM_DECLSPEC_NOTHROW
    HRESULT
    CreatePrintControl(
        _In_ IWICImagingFactory *wicFactory,
        _In_ IPrintDocumentPackageTarget *documentTarget,
        CONST D2D1_PRINT_CONTROL_PROPERTIES &printControlProperties,
        _COM_Outptr_ ID2D1PrintControl **printControl
        )
    {
        return CreatePrintControl(wicFactory, documentTarget, &printControlProperties, printControl);
    }
};
interface DX_DECLARE_INTERFACE("bb12d362-daee-4b9a-aa1d-14ba401cfa1f") ID2D1Factory1 : public ID2D1Factory
{
    STDMETHOD(CreateDevice)(
        _In_ IDXGIDevice *dxgiDevice,
        _COM_Outptr_ ID2D1Device **d2dDevice
        ) PURE;
    STDMETHOD(CreateStrokeStyle)(
        _In_ CONST D2D1_STROKE_STYLE_PROPERTIES1 *strokeStyleProperties,
        _In_reads_opt_(dashesCount) CONST FLOAT *dashes,
        UINT32 dashesCount,
        _COM_Outptr_ ID2D1StrokeStyle1 **strokeStyle
        ) PURE;
    using ID2D1Factory::CreateStrokeStyle;
    STDMETHOD(CreatePathGeometry)(
        _COM_Outptr_ ID2D1PathGeometry1 **pathGeometry
        ) PURE;
    using ID2D1Factory::CreatePathGeometry;
    STDMETHOD(CreateDrawingStateBlock)(
        _In_opt_ CONST D2D1_DRAWING_STATE_DESCRIPTION1 *drawingStateDescription,
        _In_opt_ IDWriteRenderingParams *textRenderingParams,
        _COM_Outptr_ ID2D1DrawingStateBlock1 **drawingStateBlock
        ) PURE;
    using ID2D1Factory::CreateDrawingStateBlock;
    STDMETHOD(CreateGdiMetafile)(
        _In_ IStream *metafileStream,
        _COM_Outptr_ ID2D1GdiMetafile **metafile
        ) PURE;
    STDMETHOD(RegisterEffectFromStream)(
        _In_ REFCLSID classId,
        _In_ IStream *propertyXml,
        _In_reads_opt_(bindingsCount) CONST D2D1_PROPERTY_BINDING *bindings,
        UINT32 bindingsCount,
        _In_ CONST PD2D1_EFFECT_FACTORY effectFactory
        ) PURE;
    STDMETHOD(RegisterEffectFromString)(
        _In_ REFCLSID classId,
        _In_ PCWSTR propertyXml,
        _In_reads_opt_(bindingsCount) CONST D2D1_PROPERTY_BINDING *bindings,
        UINT32 bindingsCount,
        _In_ CONST PD2D1_EFFECT_FACTORY effectFactory
        ) PURE;
    STDMETHOD(UnregisterEffect)(
        _In_ REFCLSID classId
        ) PURE;
    STDMETHOD(GetRegisteredEffects)(
        _Out_writes_to_opt_(effectsCount, *effectsReturned) CLSID *effects,
        UINT32 effectsCount,
        _Out_opt_ UINT32 *effectsReturned,
        _Out_opt_ UINT32 *effectsRegistered
        ) CONST PURE;
    STDMETHOD(GetEffectProperties)(
        _In_ REFCLSID effectId,
        _COM_Outptr_ ID2D1Properties **properties
        ) CONST PURE;
    COM_DECLSPEC_NOTHROW
    HRESULT
    CreateStrokeStyle(
        CONST D2D1_STROKE_STYLE_PROPERTIES1 &strokeStyleProperties,
        _In_reads_opt_(dashesCount) CONST FLOAT *dashes,
        UINT32 dashesCount,
        _COM_Outptr_ ID2D1StrokeStyle1 **strokeStyle
        )
    {
        return CreateStrokeStyle(&strokeStyleProperties, dashes, dashesCount, strokeStyle);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    CreateDrawingStateBlock(
        CONST D2D1_DRAWING_STATE_DESCRIPTION1 &drawingStateDescription,
        _COM_Outptr_ ID2D1DrawingStateBlock1 **drawingStateBlock
        )
    {
        return CreateDrawingStateBlock(&drawingStateDescription, NULL, drawingStateBlock);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    CreateDrawingStateBlock(
        _COM_Outptr_ ID2D1DrawingStateBlock1 **drawingStateBlock
        )
    {
        return CreateDrawingStateBlock(NULL, NULL, drawingStateBlock);
    }
};
interface DX_DECLARE_INTERFACE("31e6e7bc-e0ff-4d46-8c64-a0a8c41c15d3") ID2D1Multithread : public IUnknown
{
    STDMETHOD_(BOOL, GetMultithreadProtected)(
        ) CONST PURE;
    STDMETHOD_(void, Enter)(
        ) PURE;
    STDMETHOD_(void, Leave)(
        ) PURE;
};
typedef interface ID2D1GdiMetafileSink ID2D1GdiMetafileSink;
typedef interface ID2D1GdiMetafile ID2D1GdiMetafile;
typedef interface ID2D1CommandSink ID2D1CommandSink;
typedef interface ID2D1CommandList ID2D1CommandList;
typedef interface ID2D1PrintControl ID2D1PrintControl;
typedef interface ID2D1ImageBrush ID2D1ImageBrush;
typedef interface ID2D1BitmapBrush1 ID2D1BitmapBrush1;
typedef interface ID2D1StrokeStyle1 ID2D1StrokeStyle1;
typedef interface ID2D1PathGeometry1 ID2D1PathGeometry1;
typedef interface ID2D1Properties ID2D1Properties;
typedef interface ID2D1Effect ID2D1Effect;
typedef interface ID2D1Bitmap1 ID2D1Bitmap1;
typedef interface ID2D1ColorContext ID2D1ColorContext;
typedef interface ID2D1GradientStopCollection1 ID2D1GradientStopCollection1;
typedef interface ID2D1DrawingStateBlock1 ID2D1DrawingStateBlock1;
typedef interface ID2D1DeviceContext ID2D1DeviceContext;
typedef interface ID2D1Device ID2D1Device;
typedef interface ID2D1Factory1 ID2D1Factory1;
typedef interface ID2D1Multithread ID2D1Multithread;
extern "C"
{
    HRESULT WINAPI
    D2D1CreateDevice(
        _In_ IDXGIDevice *dxgiDevice,
        _In_opt_ CONST D2D1_CREATION_PROPERTIES *creationProperties,
        _Outptr_ ID2D1Device **d2dDevice
        );
    HRESULT WINAPI
    D2D1CreateDeviceContext(
        _In_ IDXGISurface *dxgiSurface,
        _In_opt_ CONST D2D1_CREATION_PROPERTIES *creationProperties,
        _Outptr_ ID2D1DeviceContext **d2dDeviceContext
        );
    D2D1_COLOR_F WINAPI
    D2D1ConvertColorSpace(
        D2D1_COLOR_SPACE sourceColorSpace,
        D2D1_COLOR_SPACE destinationColorSpace,
        _In_ CONST D2D1_COLOR_F* color
        );
    void WINAPI
    D2D1SinCos(
      _In_ FLOAT angle,
      _Out_ FLOAT *s,
      _Out_ FLOAT *c
      );
    FLOAT WINAPI
    D2D1Tan(
        _In_ FLOAT angle
        );
    FLOAT WINAPI
    D2D1Vec3Length(
      _In_ FLOAT x,
      _In_ FLOAT y,
      _In_ FLOAT z
      );
}
#include <d2d1_1helper.h>
inline HRESULT
D2D1CreateDevice(
    _In_ IDXGIDevice *dxgiDevice,
    _In_ CONST D2D1_CREATION_PROPERTIES &creationProperties,
    _Outptr_ ID2D1Device **d2dDevice
    )
{
    return
        D2D1CreateDevice(
            dxgiDevice,
            &creationProperties,
            d2dDevice);
}
inline HRESULT
D2D1CreateDeviceContext(
    _In_ IDXGISurface *dxgiSurface,
    _In_ CONST D2D1_CREATION_PROPERTIES &creationProperties,
    _Outptr_ ID2D1DeviceContext **d2dDeviceContext
    )
{
    return
        D2D1CreateDeviceContext(
            dxgiSurface,
            &creationProperties,
            d2dDeviceContext);
}
#endif
#pragma endregion
