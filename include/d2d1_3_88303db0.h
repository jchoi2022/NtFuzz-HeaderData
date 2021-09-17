       
#include <d2d1_2.h>
#include <d2d1effects_2.h>
#include <d2d1svg.h>
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef interface IWICBitmapFrameDecode IWICBitmapFrameDecode;
typedef interface IDWriteFontFace IDWriteFontFace;
typedef enum D2D1_INK_NIB_SHAPE
{
    D2D1_INK_NIB_SHAPE_ROUND = 0,
    D2D1_INK_NIB_SHAPE_SQUARE = 1,
    D2D1_INK_NIB_SHAPE_FORCE_DWORD = 0xffffffff
} D2D1_INK_NIB_SHAPE;
typedef enum D2D1_ORIENTATION
{
    D2D1_ORIENTATION_DEFAULT = 1,
    D2D1_ORIENTATION_FLIP_HORIZONTAL = 2,
    D2D1_ORIENTATION_ROTATE_CLOCKWISE180 = 3,
    D2D1_ORIENTATION_ROTATE_CLOCKWISE180_FLIP_HORIZONTAL = 4,
    D2D1_ORIENTATION_ROTATE_CLOCKWISE90_FLIP_HORIZONTAL = 5,
    D2D1_ORIENTATION_ROTATE_CLOCKWISE270 = 6,
    D2D1_ORIENTATION_ROTATE_CLOCKWISE270_FLIP_HORIZONTAL = 7,
    D2D1_ORIENTATION_ROTATE_CLOCKWISE90 = 8,
    D2D1_ORIENTATION_FORCE_DWORD = 0xffffffff
} D2D1_ORIENTATION;
typedef enum D2D1_IMAGE_SOURCE_LOADING_OPTIONS
{
    D2D1_IMAGE_SOURCE_LOADING_OPTIONS_NONE = 0,
    D2D1_IMAGE_SOURCE_LOADING_OPTIONS_RELEASE_SOURCE = 1,
    D2D1_IMAGE_SOURCE_LOADING_OPTIONS_CACHE_ON_DEMAND = 2,
    D2D1_IMAGE_SOURCE_LOADING_OPTIONS_FORCE_DWORD = 0xffffffff
} D2D1_IMAGE_SOURCE_LOADING_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_IMAGE_SOURCE_LOADING_OPTIONS);
typedef enum D2D1_IMAGE_SOURCE_FROM_DXGI_OPTIONS
{
    D2D1_IMAGE_SOURCE_FROM_DXGI_OPTIONS_NONE = 0,
    D2D1_IMAGE_SOURCE_FROM_DXGI_OPTIONS_LOW_QUALITY_PRIMARY_CONVERSION = 1,
    D2D1_IMAGE_SOURCE_FROM_DXGI_OPTIONS_FORCE_DWORD = 0xffffffff
} D2D1_IMAGE_SOURCE_FROM_DXGI_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_IMAGE_SOURCE_FROM_DXGI_OPTIONS);
typedef enum D2D1_TRANSFORMED_IMAGE_SOURCE_OPTIONS
{
    D2D1_TRANSFORMED_IMAGE_SOURCE_OPTIONS_NONE = 0,
    D2D1_TRANSFORMED_IMAGE_SOURCE_OPTIONS_DISABLE_DPI_SCALE = 1,
    D2D1_TRANSFORMED_IMAGE_SOURCE_OPTIONS_FORCE_DWORD = 0xffffffff
} D2D1_TRANSFORMED_IMAGE_SOURCE_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_TRANSFORMED_IMAGE_SOURCE_OPTIONS);
typedef struct D2D1_TRANSFORMED_IMAGE_SOURCE_PROPERTIES
{
    D2D1_ORIENTATION orientation;
    FLOAT scaleX;
    FLOAT scaleY;
    D2D1_INTERPOLATION_MODE interpolationMode;
    D2D1_TRANSFORMED_IMAGE_SOURCE_OPTIONS options;
} D2D1_TRANSFORMED_IMAGE_SOURCE_PROPERTIES;
typedef struct D2D1_INK_POINT
{
    FLOAT x;
    FLOAT y;
    FLOAT radius;
} D2D1_INK_POINT;
typedef struct D2D1_INK_BEZIER_SEGMENT
{
    D2D1_INK_POINT point1;
    D2D1_INK_POINT point2;
    D2D1_INK_POINT point3;
} D2D1_INK_BEZIER_SEGMENT;
typedef struct D2D1_INK_STYLE_PROPERTIES
{
    D2D1_INK_NIB_SHAPE nibShape;
    D2D1_MATRIX_3X2_F nibTransform;
} D2D1_INK_STYLE_PROPERTIES;
typedef enum D2D1_PATCH_EDGE_MODE
{
    D2D1_PATCH_EDGE_MODE_ALIASED = 0,
    D2D1_PATCH_EDGE_MODE_ANTIALIASED = 1,
    D2D1_PATCH_EDGE_MODE_ALIASED_INFLATED = 2,
    D2D1_PATCH_EDGE_MODE_FORCE_DWORD = 0xffffffff
} D2D1_PATCH_EDGE_MODE;
typedef struct D2D1_GRADIENT_MESH_PATCH
{
    D2D1_POINT_2F point00;
    D2D1_POINT_2F point01;
    D2D1_POINT_2F point02;
    D2D1_POINT_2F point03;
    D2D1_POINT_2F point10;
    D2D1_POINT_2F point11;
    D2D1_POINT_2F point12;
    D2D1_POINT_2F point13;
    D2D1_POINT_2F point20;
    D2D1_POINT_2F point21;
    D2D1_POINT_2F point22;
    D2D1_POINT_2F point23;
    D2D1_POINT_2F point30;
    D2D1_POINT_2F point31;
    D2D1_POINT_2F point32;
    D2D1_POINT_2F point33;
    D2D1_COLOR_F color00;
    D2D1_COLOR_F color03;
    D2D1_COLOR_F color30;
    D2D1_COLOR_F color33;
    D2D1_PATCH_EDGE_MODE topEdgeMode;
    D2D1_PATCH_EDGE_MODE leftEdgeMode;
    D2D1_PATCH_EDGE_MODE bottomEdgeMode;
    D2D1_PATCH_EDGE_MODE rightEdgeMode;
} D2D1_GRADIENT_MESH_PATCH;
typedef enum D2D1_SPRITE_OPTIONS
{
    D2D1_SPRITE_OPTIONS_NONE = 0,
    D2D1_SPRITE_OPTIONS_CLAMP_TO_SOURCE_RECTANGLE = 1,
    D2D1_SPRITE_OPTIONS_FORCE_DWORD = 0xffffffff
} D2D1_SPRITE_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_SPRITE_OPTIONS);
typedef enum D2D1_COLOR_BITMAP_GLYPH_SNAP_OPTION
{
    D2D1_COLOR_BITMAP_GLYPH_SNAP_OPTION_DEFAULT = 0,
    D2D1_COLOR_BITMAP_GLYPH_SNAP_OPTION_DISABLE = 1,
    D2D1_COLOR_BITMAP_GLYPH_SNAP_OPTION_FORCE_DWORD = 0xffffffff
} D2D1_COLOR_BITMAP_GLYPH_SNAP_OPTION;
typedef enum D2D1_GAMMA1
{
    D2D1_GAMMA1_G22 = D2D1_GAMMA_2_2,
    D2D1_GAMMA1_G10 = D2D1_GAMMA_1_0,
    D2D1_GAMMA1_G2084 = 2,
    D2D1_GAMMA1_FORCE_DWORD = 0xffffffff
} D2D1_GAMMA1;
typedef struct D2D1_SIMPLE_COLOR_PROFILE
{
    D2D1_POINT_2F redPrimary;
    D2D1_POINT_2F greenPrimary;
    D2D1_POINT_2F bluePrimary;
    D2D1_POINT_2F whitePointXZ;
    D2D1_GAMMA1 gamma;
} D2D1_SIMPLE_COLOR_PROFILE;
typedef enum D2D1_COLOR_CONTEXT_TYPE
{
    D2D1_COLOR_CONTEXT_TYPE_ICC = 0,
    D2D1_COLOR_CONTEXT_TYPE_SIMPLE = 1,
    D2D1_COLOR_CONTEXT_TYPE_DXGI = 2,
    D2D1_COLOR_CONTEXT_TYPE_FORCE_DWORD = 0xffffffff
} D2D1_COLOR_CONTEXT_TYPE;
EXTERN_C CONST IID IID_ID2D1InkStyle;
EXTERN_C CONST IID IID_ID2D1Ink;
EXTERN_C CONST IID IID_ID2D1GradientMesh;
EXTERN_C CONST IID IID_ID2D1ImageSource;
EXTERN_C CONST IID IID_ID2D1ImageSourceFromWic;
EXTERN_C CONST IID IID_ID2D1TransformedImageSource;
EXTERN_C CONST IID IID_ID2D1LookupTable3D;
EXTERN_C CONST IID IID_ID2D1DeviceContext2;
EXTERN_C CONST IID IID_ID2D1Device2;
EXTERN_C CONST IID IID_ID2D1Factory3;
EXTERN_C CONST IID IID_ID2D1CommandSink2;
EXTERN_C CONST IID IID_ID2D1GdiMetafile1;
EXTERN_C CONST IID IID_ID2D1GdiMetafileSink1;
EXTERN_C CONST IID IID_ID2D1SpriteBatch;
EXTERN_C CONST IID IID_ID2D1DeviceContext3;
EXTERN_C CONST IID IID_ID2D1Device3;
EXTERN_C CONST IID IID_ID2D1Factory4;
EXTERN_C CONST IID IID_ID2D1CommandSink3;
EXTERN_C CONST IID IID_ID2D1SvgGlyphStyle;
EXTERN_C CONST IID IID_ID2D1DeviceContext4;
EXTERN_C CONST IID IID_ID2D1Device4;
EXTERN_C CONST IID IID_ID2D1Factory5;
EXTERN_C CONST IID IID_ID2D1CommandSink4;
EXTERN_C CONST IID IID_ID2D1ColorContext1;
EXTERN_C CONST IID IID_ID2D1DeviceContext5;
EXTERN_C CONST IID IID_ID2D1Device5;
EXTERN_C CONST IID IID_ID2D1Factory6;
EXTERN_C CONST IID IID_ID2D1CommandSink5;
EXTERN_C CONST IID IID_ID2D1DeviceContext6;
EXTERN_C CONST IID IID_ID2D1Device6;
EXTERN_C CONST IID IID_ID2D1Factory7;
interface DX_DECLARE_INTERFACE("bae8b344-23fc-4071-8cb5-d05d6f073848") ID2D1InkStyle : public ID2D1Resource
{
    STDMETHOD_(void, SetNibTransform)(
        _In_ CONST D2D1_MATRIX_3X2_F *transform
        ) PURE;
    STDMETHOD_(void, GetNibTransform)(
        _Out_ D2D1_MATRIX_3X2_F *transform
        ) CONST PURE;
    STDMETHOD_(void, SetNibShape)(
        D2D1_INK_NIB_SHAPE nibShape
        ) PURE;
    STDMETHOD_(D2D1_INK_NIB_SHAPE, GetNibShape)(
        ) CONST PURE;
    COM_DECLSPEC_NOTHROW
    void
    SetNibTransform(
        CONST D2D1_MATRIX_3X2_F &transform
        )
    {
        SetNibTransform(&transform);
    }
};
interface DX_DECLARE_INTERFACE("b499923b-7029-478f-a8b3-432c7c5f5312") ID2D1Ink : public ID2D1Resource
{
    STDMETHOD_(void, SetStartPoint)(
        _In_ CONST D2D1_INK_POINT *startPoint
        ) PURE;
    STDMETHOD_(D2D1_INK_POINT, GetStartPoint)(
        ) CONST PURE;
    STDMETHOD(AddSegments)(
        _In_reads_(segmentsCount) CONST D2D1_INK_BEZIER_SEGMENT *segments,
        UINT32 segmentsCount
        ) PURE;
    STDMETHOD(RemoveSegmentsAtEnd)(
        UINT32 segmentsCount
        ) PURE;
    STDMETHOD(SetSegments)(
        UINT32 startSegment,
        _In_reads_(segmentsCount) CONST D2D1_INK_BEZIER_SEGMENT *segments,
        UINT32 segmentsCount
        ) PURE;
    STDMETHOD(SetSegmentAtEnd)(
        _In_ CONST D2D1_INK_BEZIER_SEGMENT *segment
        ) PURE;
    STDMETHOD_(UINT32, GetSegmentCount)(
        ) CONST PURE;
    STDMETHOD(GetSegments)(
        UINT32 startSegment,
        _Out_writes_(segmentsCount) D2D1_INK_BEZIER_SEGMENT *segments,
        UINT32 segmentsCount
        ) CONST PURE;
    STDMETHOD(StreamAsGeometry)(
        _In_opt_ ID2D1InkStyle *inkStyle,
        _In_opt_ CONST D2D1_MATRIX_3X2_F *worldTransform,
        FLOAT flatteningTolerance,
        _In_ ID2D1SimplifiedGeometrySink *geometrySink
        ) CONST PURE;
    STDMETHOD(GetBounds)(
        _In_opt_ ID2D1InkStyle *inkStyle,
        _In_opt_ CONST D2D1_MATRIX_3X2_F *worldTransform,
        _Out_ D2D1_RECT_F *bounds
        ) CONST PURE;
    COM_DECLSPEC_NOTHROW
    void
    SetStartPoint(
        CONST D2D1_INK_POINT &startPoint
        )
    {
        SetStartPoint(&startPoint);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    SetSegmentAtEnd(
        CONST D2D1_INK_BEZIER_SEGMENT &segment
        )
    {
        return SetSegmentAtEnd(&segment);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    StreamAsGeometry(
        _In_opt_ ID2D1InkStyle *inkStyle,
        CONST D2D1_MATRIX_3X2_F &worldTransform,
        FLOAT flatteningTolerance,
        _In_ ID2D1SimplifiedGeometrySink *geometrySink
        ) CONST
    {
        return StreamAsGeometry(inkStyle,&worldTransform, flatteningTolerance, geometrySink);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    StreamAsGeometry(
        _In_opt_ ID2D1InkStyle *inkStyle,
        _In_opt_ CONST D2D1_MATRIX_3X2_F *worldTransform,
        _In_ ID2D1SimplifiedGeometrySink *geometrySink
        ) CONST
    {
        return StreamAsGeometry(inkStyle,worldTransform, D2D1_DEFAULT_FLATTENING_TOLERANCE, geometrySink);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    StreamAsGeometry(
        _In_opt_ ID2D1InkStyle *inkStyle,
        CONST D2D1_MATRIX_3X2_F &worldTransform,
        _In_ ID2D1SimplifiedGeometrySink *geometrySink
        ) CONST
    {
        return StreamAsGeometry(inkStyle,&worldTransform, D2D1_DEFAULT_FLATTENING_TOLERANCE, geometrySink);
    }
};
interface DX_DECLARE_INTERFACE("f292e401-c050-4cde-83d7-04962d3b23c2") ID2D1GradientMesh : public ID2D1Resource
{
    STDMETHOD_(UINT32, GetPatchCount)(
        ) CONST PURE;
    STDMETHOD(GetPatches)(
        UINT32 startIndex,
        _Out_writes_(patchesCount) D2D1_GRADIENT_MESH_PATCH *patches,
        UINT32 patchesCount
        ) CONST PURE;
};
interface DX_DECLARE_INTERFACE("c9b664e5-74a1-4378-9ac2-eefc37a3f4d8") ID2D1ImageSource : public ID2D1Image
{
    STDMETHOD(OfferResources)(
        ) PURE;
    STDMETHOD(TryReclaimResources)(
        _Out_ BOOL *resourcesDiscarded
        ) PURE;
};
interface DX_DECLARE_INTERFACE("77395441-1c8f-4555-8683-f50dab0fe792") ID2D1ImageSourceFromWic : public ID2D1ImageSource
{
    STDMETHOD(EnsureCached)(
        _In_opt_ CONST D2D1_RECT_U *rectangleToFill
        ) PURE;
    STDMETHOD(TrimCache)(
        _In_opt_ CONST D2D1_RECT_U *rectangleToPreserve
        ) PURE;
    STDMETHOD_(void, GetSource)(
        _Outptr_result_maybenull_ IWICBitmapSource **wicBitmapSource
        ) CONST PURE;
    COM_DECLSPEC_NOTHROW
    HRESULT
    EnsureCached(
        CONST D2D1_RECT_U &rectangleToFill
        )
    {
        return EnsureCached(&rectangleToFill);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    TrimCache(
        CONST D2D1_RECT_U &rectangleToPreserve
        )
    {
        return TrimCache(&rectangleToPreserve);
    }
};
interface DX_DECLARE_INTERFACE("7f1f79e5-2796-416c-8f55-700f911445e5") ID2D1TransformedImageSource : public ID2D1Image
{
    STDMETHOD_(void, GetSource)(
        _Outptr_result_maybenull_ ID2D1ImageSource **imageSource
        ) CONST PURE;
    STDMETHOD_(void, GetProperties)(
        _Out_ D2D1_TRANSFORMED_IMAGE_SOURCE_PROPERTIES *properties
        ) CONST PURE;
};
interface DX_DECLARE_INTERFACE("53dd9855-a3b0-4d5b-82e1-26e25c5e5797") ID2D1LookupTable3D : public ID2D1Resource
{
};
interface DX_DECLARE_INTERFACE("394ea6a3-0c34-4321-950b-6ca20f0be6c7") ID2D1DeviceContext2 : public ID2D1DeviceContext1
{
    STDMETHOD(CreateInk)(
        _In_ CONST D2D1_INK_POINT *startPoint,
        _COM_Outptr_ ID2D1Ink **ink
        ) PURE;
    STDMETHOD(CreateInkStyle)(
        _In_opt_ CONST D2D1_INK_STYLE_PROPERTIES *inkStyleProperties,
        _COM_Outptr_ ID2D1InkStyle **inkStyle
        ) PURE;
    STDMETHOD(CreateGradientMesh)(
        _In_reads_(patchesCount) CONST D2D1_GRADIENT_MESH_PATCH *patches,
        UINT32 patchesCount,
        _COM_Outptr_ ID2D1GradientMesh **gradientMesh
        ) PURE;
    STDMETHOD(CreateImageSourceFromWic)(
        _In_ IWICBitmapSource *wicBitmapSource,
        D2D1_IMAGE_SOURCE_LOADING_OPTIONS loadingOptions,
        D2D1_ALPHA_MODE alphaMode,
        _COM_Outptr_ ID2D1ImageSourceFromWic **imageSource
        ) PURE;
    STDMETHOD(CreateLookupTable3D)(
        D2D1_BUFFER_PRECISION precision,
        _In_reads_(3) CONST UINT32 *extents,
        _In_reads_(dataCount) CONST BYTE *data,
        UINT32 dataCount,
        _In_reads_(2) CONST UINT32 *strides,
        _COM_Outptr_ ID2D1LookupTable3D **lookupTable
        ) PURE;
    STDMETHOD(CreateImageSourceFromDxgi)(
        _In_reads_(surfaceCount) IDXGISurface **surfaces,
        UINT32 surfaceCount,
        DXGI_COLOR_SPACE_TYPE colorSpace,
        D2D1_IMAGE_SOURCE_FROM_DXGI_OPTIONS options,
        _COM_Outptr_ ID2D1ImageSource **imageSource
        ) PURE;
    STDMETHOD(GetGradientMeshWorldBounds)(
        _In_ ID2D1GradientMesh *gradientMesh,
        _Out_ D2D1_RECT_F *pBounds
        ) CONST PURE;
    STDMETHOD_(void, DrawInk)(
        _In_ ID2D1Ink *ink,
        _In_ ID2D1Brush *brush,
        _In_opt_ ID2D1InkStyle *inkStyle
        ) PURE;
    STDMETHOD_(void, DrawGradientMesh)(
        _In_ ID2D1GradientMesh *gradientMesh
        ) PURE;
    STDMETHOD_(void, DrawGdiMetafile)(
        _In_ ID2D1GdiMetafile *gdiMetafile,
        _In_opt_ CONST D2D1_RECT_F *destinationRectangle,
        _In_opt_ CONST D2D1_RECT_F *sourceRectangle = NULL
        ) PURE;
    using ID2D1DeviceContext::DrawGdiMetafile;
    STDMETHOD(CreateTransformedImageSource)(
        _In_ ID2D1ImageSource *imageSource,
        _In_ CONST D2D1_TRANSFORMED_IMAGE_SOURCE_PROPERTIES *properties,
        _COM_Outptr_ ID2D1TransformedImageSource **transformedImageSource
        ) PURE;
    COM_DECLSPEC_NOTHROW
    HRESULT
    CreateInk(
        CONST D2D1_INK_POINT &startPoint,
        _COM_Outptr_ ID2D1Ink **ink
        )
    {
        return CreateInk(&startPoint, ink);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    CreateInkStyle(
        CONST D2D1_INK_STYLE_PROPERTIES &inkStyleProperties,
        _COM_Outptr_ ID2D1InkStyle **inkStyle
        )
    {
        return CreateInkStyle(&inkStyleProperties, inkStyle);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    CreateImageSourceFromWic(
        _In_ IWICBitmapSource *wicBitmapSource,
        D2D1_IMAGE_SOURCE_LOADING_OPTIONS loadingOptions,
        _COM_Outptr_ ID2D1ImageSourceFromWic **imageSource
        )
    {
        return CreateImageSourceFromWic(wicBitmapSource, loadingOptions, D2D1_ALPHA_MODE_UNKNOWN, imageSource);
    }
    COM_DECLSPEC_NOTHROW
    HRESULT
    CreateImageSourceFromWic(
        _In_ IWICBitmapSource *wicBitmapSource,
        _COM_Outptr_ ID2D1ImageSourceFromWic **imageSource
        )
    {
        return CreateImageSourceFromWic(wicBitmapSource, D2D1_IMAGE_SOURCE_LOADING_OPTIONS_NONE, D2D1_ALPHA_MODE_UNKNOWN, imageSource);
    }
    COM_DECLSPEC_NOTHROW
    void
    DrawGdiMetafile(
        _In_ ID2D1GdiMetafile *gdiMetafile,
        CONST D2D1_RECT_F &destinationRectangle,
        CONST D2D1_RECT_F &sourceRectangle
        )
    {
        return DrawGdiMetafile(gdiMetafile, &destinationRectangle, &sourceRectangle);
    }
    COM_DECLSPEC_NOTHROW
    void
    DrawGdiMetafile(
        _In_ ID2D1GdiMetafile *gdiMetafile,
        CONST D2D1_RECT_F &destinationRectangle,
        _In_ CONST D2D1_RECT_F *sourceRectangle = NULL
        )
    {
        return DrawGdiMetafile(gdiMetafile, &destinationRectangle, sourceRectangle);
    }
};
interface DX_DECLARE_INTERFACE("a44472e1-8dfb-4e60-8492-6e2861c9ca8b") ID2D1Device2 : public ID2D1Device1
{
    STDMETHOD(CreateDeviceContext)(
        D2D1_DEVICE_CONTEXT_OPTIONS options,
        _COM_Outptr_ ID2D1DeviceContext2 **deviceContext2
        ) PURE;
    using ID2D1Device1::CreateDeviceContext;
    using ID2D1Device::CreateDeviceContext;
    STDMETHOD_(void, FlushDeviceContexts)(
        _In_ ID2D1Bitmap *bitmap
        ) PURE;
    STDMETHOD(GetDxgiDevice)(
        _COM_Outptr_ IDXGIDevice **dxgiDevice
        ) PURE;
};
interface DX_DECLARE_INTERFACE("0869759f-4f00-413f-b03e-2bda45404d0f") ID2D1Factory3 : public ID2D1Factory2
{
    STDMETHOD(CreateDevice)(
        _In_ IDXGIDevice *dxgiDevice,
        _COM_Outptr_ ID2D1Device2 **d2dDevice2
        ) PURE;
    using ID2D1Factory2::CreateDevice;
    using ID2D1Factory1::CreateDevice;
};
interface DX_DECLARE_INTERFACE("3bab440e-417e-47df-a2e2-bc0be6a00916") ID2D1CommandSink2 : public ID2D1CommandSink1
{
    STDMETHOD(DrawInk)(
        _In_ ID2D1Ink *ink,
        _In_ ID2D1Brush *brush,
        _In_opt_ ID2D1InkStyle *inkStyle
        ) PURE;
    STDMETHOD(DrawGradientMesh)(
        _In_ ID2D1GradientMesh *gradientMesh
        ) PURE;
    STDMETHOD(DrawGdiMetafile)(
        _In_ ID2D1GdiMetafile *gdiMetafile,
        _In_opt_ CONST D2D1_RECT_F *destinationRectangle,
        _In_opt_ CONST D2D1_RECT_F *sourceRectangle
        ) PURE;
    using ID2D1CommandSink::DrawGdiMetafile;
};
interface DX_DECLARE_INTERFACE("2e69f9e8-dd3f-4bf9-95ba-c04f49d788df") ID2D1GdiMetafile1 : public ID2D1GdiMetafile
{
    STDMETHOD(GetDpi)(
        _Out_ FLOAT *dpiX,
        _Out_ FLOAT *dpiY
        ) PURE;
    STDMETHOD(GetSourceBounds)(
        _Out_ D2D1_RECT_F *bounds
        ) PURE;
};
interface DX_DECLARE_INTERFACE("fd0ecb6b-91e6-411e-8655-395e760f91b4") ID2D1GdiMetafileSink1 : public ID2D1GdiMetafileSink
{
    STDMETHOD(ProcessRecord)(
        DWORD recordType,
        _In_opt_ CONST void *recordData,
        DWORD recordDataSize,
        UINT32 flags
        ) PURE;
    using ID2D1GdiMetafileSink::ProcessRecord;
};
interface DX_DECLARE_INTERFACE("4dc583bf-3a10-438a-8722-e9765224f1f1") ID2D1SpriteBatch : public ID2D1Resource
{
    STDMETHOD(AddSprites)(
        UINT32 spriteCount,
        _In_reads_bytes_(sizeof(D2D1_RECT_F) + (spriteCount - 1) * destinationRectanglesStride) CONST D2D1_RECT_F *destinationRectangles,
        _In_reads_bytes_opt_(sizeof(D2D1_RECT_U) + (spriteCount - 1) * sourceRectanglesStride) CONST D2D1_RECT_U *sourceRectangles = NULL,
        _In_reads_bytes_opt_(sizeof(D2D1_COLOR_F) + (spriteCount - 1) * colorsStride) CONST D2D1_COLOR_F *colors = NULL,
        _In_reads_bytes_opt_(sizeof(D2D1_MATRIX_3X2_F) + (spriteCount - 1) * transformsStride) CONST D2D1_MATRIX_3X2_F *transforms = NULL,
        UINT32 destinationRectanglesStride = sizeof(D2D1_RECT_F),
        UINT32 sourceRectanglesStride = sizeof(D2D1_RECT_U),
        UINT32 colorsStride = sizeof(D2D1_COLOR_F),
        UINT32 transformsStride = sizeof(D2D1_MATRIX_3X2_F)
        ) PURE;
    STDMETHOD(SetSprites)(
        UINT32 startIndex,
        UINT32 spriteCount,
        _In_reads_bytes_opt_(sizeof(D2D1_RECT_F) + (spriteCount - 1) * destinationRectanglesStride) CONST D2D1_RECT_F *destinationRectangles = NULL,
        _In_reads_bytes_opt_(sizeof(D2D1_RECT_U) + (spriteCount - 1) * sourceRectanglesStride) CONST D2D1_RECT_U *sourceRectangles = NULL,
        _In_reads_bytes_opt_(sizeof(D2D1_COLOR_F) + (spriteCount - 1) * colorsStride) CONST D2D1_COLOR_F *colors = NULL,
        _In_reads_bytes_opt_(sizeof(D2D1_MATRIX_3X2_F) + (spriteCount - 1) * transformsStride) CONST D2D1_MATRIX_3X2_F *transforms = NULL,
        UINT32 destinationRectanglesStride = sizeof(D2D1_RECT_F),
        UINT32 sourceRectanglesStride = sizeof(D2D1_RECT_U),
        UINT32 colorsStride = sizeof(D2D1_COLOR_F),
        UINT32 transformsStride = sizeof(D2D1_MATRIX_3X2_F)
        ) PURE;
    STDMETHOD(GetSprites)(
        UINT32 startIndex,
        UINT32 spriteCount,
        _Out_writes_opt_(spriteCount) D2D1_RECT_F *destinationRectangles = NULL,
        _Out_writes_opt_(spriteCount) D2D1_RECT_U *sourceRectangles = NULL,
        _Out_writes_opt_(spriteCount) D2D1_COLOR_F *colors = NULL,
        _Out_writes_opt_(spriteCount) D2D1_MATRIX_3X2_F *transforms = NULL
        ) CONST PURE;
    STDMETHOD_(UINT32, GetSpriteCount)(
        ) CONST PURE;
    STDMETHOD_(void, Clear)(
        ) PURE;
};
interface DX_DECLARE_INTERFACE("235a7496-8351-414c-bcd4-6672ab2d8e00") ID2D1DeviceContext3 : public ID2D1DeviceContext2
{
    STDMETHOD(CreateSpriteBatch)(
        _COM_Outptr_ ID2D1SpriteBatch **spriteBatch
        ) PURE;
    STDMETHOD_(void, DrawSpriteBatch)(
        _In_ ID2D1SpriteBatch *spriteBatch,
        UINT32 startIndex,
        UINT32 spriteCount,
        _In_ ID2D1Bitmap *bitmap,
        D2D1_BITMAP_INTERPOLATION_MODE interpolationMode = D2D1_BITMAP_INTERPOLATION_MODE_LINEAR,
        D2D1_SPRITE_OPTIONS spriteOptions = D2D1_SPRITE_OPTIONS_NONE
        ) PURE;
    COM_DECLSPEC_NOTHROW
    void
    DrawSpriteBatch(
        _In_ ID2D1SpriteBatch *spriteBatch,
        _In_ ID2D1Bitmap *bitmap,
        D2D1_BITMAP_INTERPOLATION_MODE interpolationMode = D2D1_BITMAP_INTERPOLATION_MODE_LINEAR,
        D2D1_SPRITE_OPTIONS spriteOptions = D2D1_SPRITE_OPTIONS_NONE
        )
    {
        return DrawSpriteBatch(spriteBatch, 0, spriteBatch->GetSpriteCount(), bitmap, interpolationMode, spriteOptions);
    }
};
interface DX_DECLARE_INTERFACE("852f2087-802c-4037-ab60-ff2e7ee6fc01") ID2D1Device3 : public ID2D1Device2
{
    STDMETHOD(CreateDeviceContext)(
        D2D1_DEVICE_CONTEXT_OPTIONS options,
        _COM_Outptr_ ID2D1DeviceContext3 **deviceContext3
        ) PURE;
    using ID2D1Device2::CreateDeviceContext;
    using ID2D1Device1::CreateDeviceContext;
    using ID2D1Device::CreateDeviceContext;
};
interface DX_DECLARE_INTERFACE("bd4ec2d2-0662-4bee-ba8e-6f29f032e096") ID2D1Factory4 : public ID2D1Factory3
{
    STDMETHOD(CreateDevice)(
        _In_ IDXGIDevice *dxgiDevice,
        _COM_Outptr_ ID2D1Device3 **d2dDevice3
        ) PURE;
    using ID2D1Factory3::CreateDevice;
    using ID2D1Factory2::CreateDevice;
    using ID2D1Factory1::CreateDevice;
};
interface DX_DECLARE_INTERFACE("18079135-4cf3-4868-bc8e-06067e6d242d") ID2D1CommandSink3 : public ID2D1CommandSink2
{
    STDMETHOD(DrawSpriteBatch)(
        _In_ ID2D1SpriteBatch *spriteBatch,
        UINT32 startIndex,
        UINT32 spriteCount,
        _In_ ID2D1Bitmap *bitmap,
        D2D1_BITMAP_INTERPOLATION_MODE interpolationMode,
        D2D1_SPRITE_OPTIONS spriteOptions
        ) PURE;
};
interface DX_DECLARE_INTERFACE("af671749-d241-4db8-8e41-dcc2e5c1a438") ID2D1SvgGlyphStyle : public ID2D1Resource
{
    STDMETHOD(SetFill)(
        _In_opt_ ID2D1Brush *brush
        ) PURE;
    STDMETHOD_(void, GetFill)(
        _Outptr_result_maybenull_ ID2D1Brush **brush
        ) PURE;
    STDMETHOD(SetStroke)(
        _In_opt_ ID2D1Brush *brush,
        FLOAT strokeWidth = 1.0f,
        _In_reads_opt_(dashesCount) CONST FLOAT *dashes = NULL,
        UINT32 dashesCount = 0,
        FLOAT dashOffset = 1.0f
        ) PURE;
    STDMETHOD_(UINT32, GetStrokeDashesCount)(
        ) PURE;
    STDMETHOD_(void, GetStroke)(
        _Outptr_opt_result_maybenull_ ID2D1Brush **brush,
        _Out_opt_ FLOAT *strokeWidth = NULL,
        _Out_writes_opt_(dashesCount) FLOAT *dashes = NULL,
        UINT32 dashesCount = 0,
        _Out_opt_ FLOAT *dashOffset = NULL
        ) PURE;
};
interface DX_DECLARE_INTERFACE("8c427831-3d90-4476-b647-c4fae349e4db") ID2D1DeviceContext4 : public ID2D1DeviceContext3
{
    STDMETHOD(CreateSvgGlyphStyle)(
        _COM_Outptr_ ID2D1SvgGlyphStyle **svgGlyphStyle
        ) PURE;
    STDMETHOD_(void, DrawText)(
        _In_reads_(stringLength) CONST WCHAR *string,
        UINT32 stringLength,
        _In_ IDWriteTextFormat *textFormat,
        _In_ CONST D2D1_RECT_F *layoutRect,
        _In_opt_ ID2D1Brush *defaultFillBrush,
        _In_opt_ ID2D1SvgGlyphStyle *svgGlyphStyle,
        UINT32 colorPaletteIndex = 0,
        D2D1_DRAW_TEXT_OPTIONS options = D2D1_DRAW_TEXT_OPTIONS_ENABLE_COLOR_FONT,
        DWRITE_MEASURING_MODE measuringMode = DWRITE_MEASURING_MODE_NATURAL
        ) PURE;
    using ID2D1RenderTarget::DrawText;
    STDMETHOD_(void, DrawTextLayout)(
        D2D1_POINT_2F origin,
        _In_ IDWriteTextLayout *textLayout,
        _In_opt_ ID2D1Brush *defaultFillBrush,
        _In_opt_ ID2D1SvgGlyphStyle *svgGlyphStyle,
        UINT32 colorPaletteIndex = 0,
        D2D1_DRAW_TEXT_OPTIONS options = D2D1_DRAW_TEXT_OPTIONS_ENABLE_COLOR_FONT
        ) PURE;
    using ID2D1RenderTarget::DrawTextLayout;
    STDMETHOD_(void, DrawColorBitmapGlyphRun)(
        DWRITE_GLYPH_IMAGE_FORMATS glyphImageFormat,
        D2D1_POINT_2F baselineOrigin,
        _In_ CONST DWRITE_GLYPH_RUN *glyphRun,
        DWRITE_MEASURING_MODE measuringMode = DWRITE_MEASURING_MODE_NATURAL,
        D2D1_COLOR_BITMAP_GLYPH_SNAP_OPTION bitmapSnapOption = D2D1_COLOR_BITMAP_GLYPH_SNAP_OPTION_DEFAULT
        ) PURE;
    STDMETHOD_(void, DrawSvgGlyphRun)(
        D2D1_POINT_2F baselineOrigin,
        _In_ CONST DWRITE_GLYPH_RUN *glyphRun,
        _In_opt_ ID2D1Brush *defaultFillBrush = NULL,
        _In_opt_ ID2D1SvgGlyphStyle *svgGlyphStyle = NULL,
        UINT32 colorPaletteIndex = 0,
        DWRITE_MEASURING_MODE measuringMode = DWRITE_MEASURING_MODE_NATURAL
        ) PURE;
    STDMETHOD(GetColorBitmapGlyphImage)(
        DWRITE_GLYPH_IMAGE_FORMATS glyphImageFormat,
        D2D1_POINT_2F glyphOrigin,
        _In_ IDWriteFontFace *fontFace,
        FLOAT fontEmSize,
        UINT16 glyphIndex,
        BOOL isSideways,
        _In_opt_ CONST D2D1_MATRIX_3X2_F *worldTransform,
        FLOAT dpiX,
        FLOAT dpiY,
        _Out_ D2D1_MATRIX_3X2_F *glyphTransform,
        _COM_Outptr_ ID2D1Image **glyphImage
        ) PURE;
    STDMETHOD(GetSvgGlyphImage)(
        D2D1_POINT_2F glyphOrigin,
        _In_ IDWriteFontFace *fontFace,
        FLOAT fontEmSize,
        UINT16 glyphIndex,
        BOOL isSideways,
        _In_opt_ CONST D2D1_MATRIX_3X2_F *worldTransform,
        _In_opt_ ID2D1Brush *defaultFillBrush,
        _In_opt_ ID2D1SvgGlyphStyle *svgGlyphStyle,
        UINT32 colorPaletteIndex,
        _Out_ D2D1_MATRIX_3X2_F *glyphTransform,
        _COM_Outptr_ ID2D1CommandList **glyphImage
        ) PURE;
    COM_DECLSPEC_NOTHROW
    void
    DrawText(
        _In_reads_(stringLength) CONST WCHAR *string,
        UINT32 stringLength,
        _In_ IDWriteTextFormat *textFormat,
        CONST D2D1_RECT_F &layoutRect,
        _In_opt_ ID2D1Brush *defaultFillBrush,
        _In_opt_ ID2D1SvgGlyphStyle *svgGlyphStyle,
        UINT32 colorPaletteIndex = 0,
        D2D1_DRAW_TEXT_OPTIONS options = D2D1_DRAW_TEXT_OPTIONS_ENABLE_COLOR_FONT,
        DWRITE_MEASURING_MODE measuringMode = DWRITE_MEASURING_MODE_NATURAL
        )
    {
        return DrawText(string, stringLength, textFormat, &layoutRect, defaultFillBrush, svgGlyphStyle, colorPaletteIndex, options, measuringMode);
    }
};
interface DX_DECLARE_INTERFACE("d7bdb159-5683-4a46-bc9c-72dc720b858b") ID2D1Device4 : public ID2D1Device3
{
    STDMETHOD(CreateDeviceContext)(
        D2D1_DEVICE_CONTEXT_OPTIONS options,
        _COM_Outptr_ ID2D1DeviceContext4 **deviceContext4
        ) PURE;
    using ID2D1Device3::CreateDeviceContext;
    using ID2D1Device2::CreateDeviceContext;
    using ID2D1Device1::CreateDeviceContext;
    using ID2D1Device::CreateDeviceContext;
    STDMETHOD_(void, SetMaximumColorGlyphCacheMemory)(
        UINT64 maximumInBytes
        ) PURE;
    STDMETHOD_(UINT64, GetMaximumColorGlyphCacheMemory)(
        ) CONST PURE;
};
interface DX_DECLARE_INTERFACE("c4349994-838e-4b0f-8cab-44997d9eeacc") ID2D1Factory5 : public ID2D1Factory4
{
    STDMETHOD(CreateDevice)(
        _In_ IDXGIDevice *dxgiDevice,
        _COM_Outptr_ ID2D1Device4 **d2dDevice4
        ) PURE;
    using ID2D1Factory4::CreateDevice;
    using ID2D1Factory3::CreateDevice;
    using ID2D1Factory2::CreateDevice;
    using ID2D1Factory1::CreateDevice;
};
interface DX_DECLARE_INTERFACE("c78a6519-40d6-4218-b2de-beeeb744bb3e") ID2D1CommandSink4 : public ID2D1CommandSink3
{
    STDMETHOD(SetPrimitiveBlend2)(
        D2D1_PRIMITIVE_BLEND primitiveBlend
        ) PURE;
};
interface DX_DECLARE_INTERFACE("1ab42875-c57f-4be9-bd85-9cd78d6f55ee") ID2D1ColorContext1 : public ID2D1ColorContext
{
    STDMETHOD_(D2D1_COLOR_CONTEXT_TYPE, GetColorContextType)(
        ) CONST PURE;
    STDMETHOD_(DXGI_COLOR_SPACE_TYPE, GetDXGIColorSpace)(
        ) CONST PURE;
    STDMETHOD(GetSimpleColorProfile)(
        _Out_ D2D1_SIMPLE_COLOR_PROFILE *simpleProfile
        ) CONST PURE;
};
interface DX_DECLARE_INTERFACE("7836d248-68cc-4df6-b9e8-de991bf62eb7") ID2D1DeviceContext5 : public ID2D1DeviceContext4
{
    STDMETHOD(CreateSvgDocument)(
        _In_opt_ IStream *inputXmlStream,
        D2D1_SIZE_F viewportSize,
        _COM_Outptr_ ID2D1SvgDocument **svgDocument
        ) PURE;
    STDMETHOD_(void, DrawSvgDocument)(
        _In_ ID2D1SvgDocument *svgDocument
        ) PURE;
    STDMETHOD(CreateColorContextFromDxgiColorSpace)(
        DXGI_COLOR_SPACE_TYPE colorSpace,
        _COM_Outptr_ ID2D1ColorContext1 **colorContext
        ) PURE;
    STDMETHOD(CreateColorContextFromSimpleColorProfile)(
        _In_ CONST D2D1_SIMPLE_COLOR_PROFILE *simpleProfile,
        _COM_Outptr_ ID2D1ColorContext1 **colorContext
        ) PURE;
    COM_DECLSPEC_NOTHROW
    HRESULT
    CreateColorContextFromSimpleColorProfile(
        CONST D2D1_SIMPLE_COLOR_PROFILE &simpleProfile,
        _COM_Outptr_ ID2D1ColorContext1 **colorContext
        )
    {
        return CreateColorContextFromSimpleColorProfile(&simpleProfile, colorContext);
    }
};
interface DX_DECLARE_INTERFACE("d55ba0a4-6405-4694-aef5-08ee1a4358b4") ID2D1Device5 : public ID2D1Device4
{
    STDMETHOD(CreateDeviceContext)(
        D2D1_DEVICE_CONTEXT_OPTIONS options,
        _COM_Outptr_ ID2D1DeviceContext5 **deviceContext5
        ) PURE;
    using ID2D1Device4::CreateDeviceContext;
    using ID2D1Device3::CreateDeviceContext;
    using ID2D1Device2::CreateDeviceContext;
    using ID2D1Device1::CreateDeviceContext;
    using ID2D1Device::CreateDeviceContext;
};
interface DX_DECLARE_INTERFACE("f9976f46-f642-44c1-97ca-da32ea2a2635") ID2D1Factory6 : public ID2D1Factory5
{
    STDMETHOD(CreateDevice)(
        _In_ IDXGIDevice *dxgiDevice,
        _COM_Outptr_ ID2D1Device5 **d2dDevice5
        ) PURE;
    using ID2D1Factory5::CreateDevice;
    using ID2D1Factory4::CreateDevice;
    using ID2D1Factory3::CreateDevice;
    using ID2D1Factory2::CreateDevice;
    using ID2D1Factory1::CreateDevice;
};
interface DX_DECLARE_INTERFACE("7047dd26-b1e7-44a7-959a-8349e2144fa8") ID2D1CommandSink5 : public ID2D1CommandSink4
{
    STDMETHOD(BlendImage)(
        _In_ ID2D1Image *image,
        D2D1_BLEND_MODE blendMode,
        _In_opt_ CONST D2D1_POINT_2F *targetOffset,
        _In_opt_ CONST D2D1_RECT_F *imageRectangle,
        D2D1_INTERPOLATION_MODE interpolationMode
        ) PURE;
};
interface DX_DECLARE_INTERFACE("985f7e37-4ed0-4a19-98a3-15b0edfde306") ID2D1DeviceContext6 : public ID2D1DeviceContext5
{
    STDMETHOD_(void, BlendImage)(
        _In_ ID2D1Image *image,
        D2D1_BLEND_MODE blendMode,
        _In_opt_ CONST D2D1_POINT_2F *targetOffset = NULL,
        _In_opt_ CONST D2D1_RECT_F *imageRectangle = NULL,
        D2D1_INTERPOLATION_MODE interpolationMode = D2D1_INTERPOLATION_MODE_LINEAR
        ) PURE;
};
interface DX_DECLARE_INTERFACE("7bfef914-2d75-4bad-be87-e18ddb077b6d") ID2D1Device6 : public ID2D1Device5
{
    STDMETHOD(CreateDeviceContext)(
        D2D1_DEVICE_CONTEXT_OPTIONS options,
        _COM_Outptr_ ID2D1DeviceContext6 **deviceContext6
        ) PURE;
    using ID2D1Device5::CreateDeviceContext;
    using ID2D1Device4::CreateDeviceContext;
    using ID2D1Device3::CreateDeviceContext;
    using ID2D1Device2::CreateDeviceContext;
    using ID2D1Device1::CreateDeviceContext;
    using ID2D1Device::CreateDeviceContext;
};
interface DX_DECLARE_INTERFACE("bdc2bdd3-b96c-4de6-bdf7-99d4745454de") ID2D1Factory7 : public ID2D1Factory6
{
    STDMETHOD(CreateDevice)(
        _In_ IDXGIDevice *dxgiDevice,
        _COM_Outptr_ ID2D1Device6 **d2dDevice6
        ) PURE;
    using ID2D1Factory6::CreateDevice;
    using ID2D1Factory5::CreateDevice;
    using ID2D1Factory4::CreateDevice;
    using ID2D1Factory3::CreateDevice;
    using ID2D1Factory2::CreateDevice;
    using ID2D1Factory1::CreateDevice;
};
typedef interface ID2D1InkStyle ID2D1InkStyle;
typedef interface ID2D1Ink ID2D1Ink;
typedef interface ID2D1GradientMesh ID2D1GradientMesh;
typedef interface ID2D1ImageSource ID2D1ImageSource;
typedef interface ID2D1ImageSourceFromWic ID2D1ImageSourceFromWic;
typedef interface ID2D1TransformedImageSource ID2D1TransformedImageSource;
typedef interface ID2D1LookupTable3D ID2D1LookupTable3D;
typedef interface ID2D1DeviceContext2 ID2D1DeviceContext2;
typedef interface ID2D1Device2 ID2D1Device2;
typedef interface ID2D1Factory3 ID2D1Factory3;
typedef interface ID2D1CommandSink2 ID2D1CommandSink2;
typedef interface ID2D1GdiMetafile1 ID2D1GdiMetafile1;
typedef interface ID2D1GdiMetafileSink1 ID2D1GdiMetafileSink1;
extern "C"
{
    void WINAPI
    D2D1GetGradientMeshInteriorPointsFromCoonsPatch(
        _In_ CONST D2D1_POINT_2F *pPoint0,
        _In_ CONST D2D1_POINT_2F *pPoint1,
        _In_ CONST D2D1_POINT_2F *pPoint2,
        _In_ CONST D2D1_POINT_2F *pPoint3,
        _In_ CONST D2D1_POINT_2F *pPoint4,
        _In_ CONST D2D1_POINT_2F *pPoint5,
        _In_ CONST D2D1_POINT_2F *pPoint6,
        _In_ CONST D2D1_POINT_2F *pPoint7,
        _In_ CONST D2D1_POINT_2F *pPoint8,
        _In_ CONST D2D1_POINT_2F *pPoint9,
        _In_ CONST D2D1_POINT_2F *pPoint10,
        _In_ CONST D2D1_POINT_2F *pPoint11,
        _Out_ D2D1_POINT_2F *pTensorPoint11,
        _Out_ D2D1_POINT_2F *pTensorPoint12,
        _Out_ D2D1_POINT_2F *pTensorPoint21,
        _Out_ D2D1_POINT_2F *pTensorPoint22
        );
}
#endif
#pragma endregion
#include <d2d1_3helper.h>
