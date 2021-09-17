       
#include <d2d1_1.h>
typedef HRESULT (CALLBACK *PD2D1_PROPERTY_SET_FUNCTION)(
    _In_ IUnknown *effect,
    _In_reads_(dataSize) const BYTE *data,
    UINT32 dataSize
    );
typedef HRESULT (CALLBACK *PD2D1_PROPERTY_GET_FUNCTION)(
    _In_ const IUnknown *effect,
    _Out_writes_opt_(dataSize) BYTE *data,
    UINT32 dataSize,
    _Out_opt_ UINT32 *actualSize
    );
interface ID2D1EffectContext;
interface ID2D1TransformNode;
typedef enum D2D1_CHANGE_TYPE
{
    D2D1_CHANGE_TYPE_NONE = 0,
    D2D1_CHANGE_TYPE_PROPERTIES = 1,
    D2D1_CHANGE_TYPE_CONTEXT = 2,
    D2D1_CHANGE_TYPE_GRAPH = 3,
    D2D1_CHANGE_TYPE_FORCE_DWORD = 0xffffffff
} D2D1_CHANGE_TYPE;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_CHANGE_TYPE);
typedef enum D2D1_PIXEL_OPTIONS
{
    D2D1_PIXEL_OPTIONS_NONE = 0,
    D2D1_PIXEL_OPTIONS_TRIVIAL_SAMPLING = 1,
    D2D1_PIXEL_OPTIONS_FORCE_DWORD = 0xffffffff
} D2D1_PIXEL_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_PIXEL_OPTIONS);
typedef enum D2D1_VERTEX_OPTIONS
{
    D2D1_VERTEX_OPTIONS_NONE = 0,
    D2D1_VERTEX_OPTIONS_DO_NOT_CLEAR = 1,
    D2D1_VERTEX_OPTIONS_USE_DEPTH_BUFFER = 2,
    D2D1_VERTEX_OPTIONS_ASSUME_NO_OVERLAP = 4,
    D2D1_VERTEX_OPTIONS_FORCE_DWORD = 0xffffffff
} D2D1_VERTEX_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_VERTEX_OPTIONS);
typedef enum D2D1_VERTEX_USAGE
{
    D2D1_VERTEX_USAGE_STATIC = 0,
    D2D1_VERTEX_USAGE_DYNAMIC = 1,
    D2D1_VERTEX_USAGE_FORCE_DWORD = 0xffffffff
} D2D1_VERTEX_USAGE;
typedef enum D2D1_BLEND_OPERATION
{
    D2D1_BLEND_OPERATION_ADD = 1,
    D2D1_BLEND_OPERATION_SUBTRACT = 2,
    D2D1_BLEND_OPERATION_REV_SUBTRACT = 3,
    D2D1_BLEND_OPERATION_MIN = 4,
    D2D1_BLEND_OPERATION_MAX = 5,
    D2D1_BLEND_OPERATION_FORCE_DWORD = 0xffffffff
} D2D1_BLEND_OPERATION;
typedef enum D2D1_BLEND
{
    D2D1_BLEND_ZERO = 1,
    D2D1_BLEND_ONE = 2,
    D2D1_BLEND_SRC_COLOR = 3,
    D2D1_BLEND_INV_SRC_COLOR = 4,
    D2D1_BLEND_SRC_ALPHA = 5,
    D2D1_BLEND_INV_SRC_ALPHA = 6,
    D2D1_BLEND_DEST_ALPHA = 7,
    D2D1_BLEND_INV_DEST_ALPHA = 8,
    D2D1_BLEND_DEST_COLOR = 9,
    D2D1_BLEND_INV_DEST_COLOR = 10,
    D2D1_BLEND_SRC_ALPHA_SAT = 11,
    D2D1_BLEND_BLEND_FACTOR = 14,
    D2D1_BLEND_INV_BLEND_FACTOR = 15,
    D2D1_BLEND_FORCE_DWORD = 0xffffffff
} D2D1_BLEND;
typedef enum D2D1_CHANNEL_DEPTH
{
    D2D1_CHANNEL_DEPTH_DEFAULT = 0,
    D2D1_CHANNEL_DEPTH_1 = 1,
    D2D1_CHANNEL_DEPTH_4 = 4,
    D2D1_CHANNEL_DEPTH_FORCE_DWORD = 0xffffffff
} D2D1_CHANNEL_DEPTH;
typedef enum D2D1_FILTER
{
    D2D1_FILTER_MIN_MAG_MIP_POINT = 0x00,
    D2D1_FILTER_MIN_MAG_POINT_MIP_LINEAR = 0x01,
    D2D1_FILTER_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x04,
    D2D1_FILTER_MIN_POINT_MAG_MIP_LINEAR = 0x05,
    D2D1_FILTER_MIN_LINEAR_MAG_MIP_POINT = 0x10,
    D2D1_FILTER_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x11,
    D2D1_FILTER_MIN_MAG_LINEAR_MIP_POINT = 0x14,
    D2D1_FILTER_MIN_MAG_MIP_LINEAR = 0x15,
    D2D1_FILTER_ANISOTROPIC = 0x55,
    D2D1_FILTER_FORCE_DWORD = 0xffffffff
} D2D1_FILTER;
typedef enum D2D1_FEATURE
{
    D2D1_FEATURE_DOUBLES = 0,
    D2D1_FEATURE_D3D10_X_HARDWARE_OPTIONS = 1,
    D2D1_FEATURE_FORCE_DWORD = 0xffffffff
} D2D1_FEATURE;
typedef struct D2D1_PROPERTY_BINDING
{
    PCWSTR propertyName;
    PD2D1_PROPERTY_SET_FUNCTION setFunction;
    PD2D1_PROPERTY_GET_FUNCTION getFunction;
} D2D1_PROPERTY_BINDING;
typedef struct D2D1_RESOURCE_TEXTURE_PROPERTIES
{
    _Field_size_(dimensions) CONST UINT32 *extents;
    UINT32 dimensions;
    D2D1_BUFFER_PRECISION bufferPrecision;
    D2D1_CHANNEL_DEPTH channelDepth;
    D2D1_FILTER filter;
    _Field_size_(dimensions) CONST D2D1_EXTEND_MODE *extendModes;
} D2D1_RESOURCE_TEXTURE_PROPERTIES;
typedef struct D2D1_INPUT_ELEMENT_DESC
{
    PCSTR semanticName;
    UINT32 semanticIndex;
    DXGI_FORMAT format;
    UINT32 inputSlot;
    UINT32 alignedByteOffset;
} D2D1_INPUT_ELEMENT_DESC;
typedef struct D2D1_VERTEX_BUFFER_PROPERTIES
{
    UINT32 inputCount;
    D2D1_VERTEX_USAGE usage;
    _Field_size_opt_(byteWidth) CONST BYTE *data;
    UINT32 byteWidth;
} D2D1_VERTEX_BUFFER_PROPERTIES;
typedef struct D2D1_CUSTOM_VERTEX_BUFFER_PROPERTIES
{
    _Field_size_(shaderBufferSize) CONST BYTE *shaderBufferWithInputSignature;
    UINT32 shaderBufferSize;
    _Field_size_opt_(elementCount) CONST D2D1_INPUT_ELEMENT_DESC *inputElements;
    UINT32 elementCount;
    UINT32 stride;
} D2D1_CUSTOM_VERTEX_BUFFER_PROPERTIES;
typedef struct D2D1_VERTEX_RANGE
{
    UINT32 startVertex;
    UINT32 vertexCount;
} D2D1_VERTEX_RANGE;
typedef struct D2D1_BLEND_DESCRIPTION
{
    D2D1_BLEND sourceBlend;
    D2D1_BLEND destinationBlend;
    D2D1_BLEND_OPERATION blendOperation;
    D2D1_BLEND sourceBlendAlpha;
    D2D1_BLEND destinationBlendAlpha;
    D2D1_BLEND_OPERATION blendOperationAlpha;
    FLOAT blendFactor[4];
} D2D1_BLEND_DESCRIPTION;
typedef struct D2D1_INPUT_DESCRIPTION
{
    D2D1_FILTER filter;
    UINT32 levelOfDetailCount;
} D2D1_INPUT_DESCRIPTION;
typedef struct D2D1_FEATURE_DATA_DOUBLES
{
    BOOL doublePrecisionFloatShaderOps;
} D2D1_FEATURE_DATA_DOUBLES;
typedef struct D2D1_FEATURE_DATA_D3D10_X_HARDWARE_OPTIONS
{
    BOOL computeShaders_Plus_RawAndStructuredBuffers_Via_Shader_4_x;
} D2D1_FEATURE_DATA_D3D10_X_HARDWARE_OPTIONS;
EXTERN_C CONST IID IID_ID2D1VertexBuffer;
EXTERN_C CONST IID IID_ID2D1ResourceTexture;
EXTERN_C CONST IID IID_ID2D1RenderInfo;
EXTERN_C CONST IID IID_ID2D1DrawInfo;
EXTERN_C CONST IID IID_ID2D1ComputeInfo;
EXTERN_C CONST IID IID_ID2D1TransformNode;
EXTERN_C CONST IID IID_ID2D1TransformGraph;
EXTERN_C CONST IID IID_ID2D1Transform;
EXTERN_C CONST IID IID_ID2D1DrawTransform;
EXTERN_C CONST IID IID_ID2D1ComputeTransform;
EXTERN_C CONST IID IID_ID2D1AnalysisTransform;
EXTERN_C CONST IID IID_ID2D1SourceTransform;
EXTERN_C CONST IID IID_ID2D1ConcreteTransform;
EXTERN_C CONST IID IID_ID2D1BlendTransform;
EXTERN_C CONST IID IID_ID2D1BorderTransform;
EXTERN_C CONST IID IID_ID2D1OffsetTransform;
EXTERN_C CONST IID IID_ID2D1BoundsAdjustmentTransform;
EXTERN_C CONST IID IID_ID2D1EffectImpl;
EXTERN_C CONST IID IID_ID2D1EffectContext;
interface DX_DECLARE_INTERFACE("9b8b1336-00a5-4668-92b7-ced5d8bf9b7b") ID2D1VertexBuffer : public IUnknown
{
    STDMETHOD(Map)(
        _Outptr_result_bytebuffer_(bufferSize) BYTE **data,
        UINT32 bufferSize
        ) PURE;
    STDMETHOD(Unmap)(
        ) PURE;
};
interface DX_DECLARE_INTERFACE("688d15c3-02b0-438d-b13a-d1b44c32c39a") ID2D1ResourceTexture : public IUnknown
{
    STDMETHOD(Update)(
        _In_reads_opt_(dimensions) CONST UINT32 *minimumExtents,
        _In_reads_opt_(dimensions) CONST UINT32 *maximimumExtents,
        _In_reads_opt_(dimensions - 1) CONST UINT32 *strides,
        UINT32 dimensions,
        _In_reads_(dataCount) CONST BYTE *data,
        UINT32 dataCount
        ) PURE;
};
interface DX_DECLARE_INTERFACE("519ae1bd-d19a-420d-b849-364f594776b7") ID2D1RenderInfo : public IUnknown
{
    STDMETHOD(SetInputDescription)(
        UINT32 inputIndex,
        D2D1_INPUT_DESCRIPTION inputDescription
        ) PURE;
    STDMETHOD(SetOutputBuffer)(
        D2D1_BUFFER_PRECISION bufferPrecision,
        D2D1_CHANNEL_DEPTH channelDepth
        ) PURE;
    STDMETHOD_(void, SetCached)(
        BOOL isCached
        ) PURE;
    STDMETHOD_(void, SetInstructionCountHint)(
        UINT32 instructionCount
        ) PURE;
};
interface DX_DECLARE_INTERFACE("693ce632-7f2f-45de-93fe-18d88b37aa21") ID2D1DrawInfo : public ID2D1RenderInfo
{
    STDMETHOD(SetPixelShaderConstantBuffer)(
        _In_reads_(bufferCount) CONST BYTE *buffer,
        UINT32 bufferCount
        ) PURE;
    STDMETHOD(SetResourceTexture)(
        UINT32 textureIndex,
        _In_ ID2D1ResourceTexture *resourceTexture
        ) PURE;
    STDMETHOD(SetVertexShaderConstantBuffer)(
        _In_reads_(bufferCount) CONST BYTE *buffer,
        UINT32 bufferCount
        ) PURE;
    STDMETHOD(SetPixelShader)(
        _In_ REFGUID shaderId,
        D2D1_PIXEL_OPTIONS pixelOptions = D2D1_PIXEL_OPTIONS_NONE
        ) PURE;
    STDMETHOD(SetVertexProcessing)(
        _In_opt_ ID2D1VertexBuffer *vertexBuffer,
        D2D1_VERTEX_OPTIONS vertexOptions,
        _In_opt_ CONST D2D1_BLEND_DESCRIPTION *blendDescription = NULL,
        _In_opt_ CONST D2D1_VERTEX_RANGE *vertexRange = NULL,
        _In_opt_ CONST GUID *vertexShader = NULL
        ) PURE;
};
interface DX_DECLARE_INTERFACE("5598b14b-9fd7-48b7-9bdb-8f0964eb38bc") ID2D1ComputeInfo : public ID2D1RenderInfo
{
    STDMETHOD(SetComputeShaderConstantBuffer)(
        _In_reads_(bufferCount) CONST BYTE *buffer,
        UINT32 bufferCount
        ) PURE;
    STDMETHOD(SetComputeShader)(
        _In_ REFGUID shaderId
        ) PURE;
    STDMETHOD(SetResourceTexture)(
        UINT32 textureIndex,
        _In_ ID2D1ResourceTexture *resourceTexture
        ) PURE;
};
interface DX_DECLARE_INTERFACE("b2efe1e7-729f-4102-949f-505fa21bf666") ID2D1TransformNode : public IUnknown
{
    STDMETHOD_(UINT32, GetInputCount)(
        ) CONST PURE;
};
interface DX_DECLARE_INTERFACE("13d29038-c3e6-4034-9081-13b53a417992") ID2D1TransformGraph : public IUnknown
{
    STDMETHOD_(UINT32, GetInputCount)(
        ) CONST PURE;
    STDMETHOD(SetSingleTransformNode)(
        _In_ ID2D1TransformNode *node
        ) PURE;
    STDMETHOD(AddNode)(
        _In_ ID2D1TransformNode *node
        ) PURE;
    STDMETHOD(RemoveNode)(
        _In_ ID2D1TransformNode *node
        ) PURE;
    STDMETHOD(SetOutputNode)(
        _In_ ID2D1TransformNode *node
        ) PURE;
    STDMETHOD(ConnectNode)(
        _In_ ID2D1TransformNode *fromNode,
        _In_ ID2D1TransformNode *toNode,
        UINT32 toNodeInputIndex
        ) PURE;
    STDMETHOD(ConnectToEffectInput)(
        UINT32 toEffectInputIndex,
        _In_ ID2D1TransformNode *node,
        UINT32 toNodeInputIndex
        ) PURE;
    STDMETHOD_(void, Clear)(
        ) PURE;
    STDMETHOD(SetPassthroughGraph)(
        UINT32 effectInputIndex
        ) PURE;
};
interface DX_DECLARE_INTERFACE("ef1a287d-342a-4f76-8fdb-da0d6ea9f92b") ID2D1Transform : public ID2D1TransformNode
{
    STDMETHOD(MapOutputRectToInputRects)(
        _In_ CONST D2D1_RECT_L *outputRect,
        _Out_writes_(inputRectsCount) D2D1_RECT_L *inputRects,
        UINT32 inputRectsCount
        ) CONST PURE;
    STDMETHOD(MapInputRectsToOutputRect)(
        _In_reads_(inputRectCount) CONST D2D1_RECT_L *inputRects,
        _In_reads_(inputRectCount) CONST D2D1_RECT_L *inputOpaqueSubRects,
        UINT32 inputRectCount,
        _Out_ D2D1_RECT_L *outputRect,
        _Out_ D2D1_RECT_L *outputOpaqueSubRect
        ) PURE;
    STDMETHOD(MapInvalidRect)(
        UINT32 inputIndex,
        D2D1_RECT_L invalidInputRect,
        _Out_ D2D1_RECT_L *invalidOutputRect
        ) CONST PURE;
};
interface DX_DECLARE_INTERFACE("36bfdcb6-9739-435d-a30d-a653beff6a6f") ID2D1DrawTransform : public ID2D1Transform
{
    STDMETHOD(SetDrawInfo)(
        _In_ ID2D1DrawInfo *drawInfo
        ) PURE;
};
interface DX_DECLARE_INTERFACE("0d85573c-01e3-4f7d-bfd9-0d60608bf3c3") ID2D1ComputeTransform : public ID2D1Transform
{
    STDMETHOD(SetComputeInfo)(
        _In_ ID2D1ComputeInfo *computeInfo
        ) PURE;
    STDMETHOD(CalculateThreadgroups)(
        _In_ CONST D2D1_RECT_L *outputRect,
        _Out_ UINT32 *dimensionX,
        _Out_ UINT32 *dimensionY,
        _Out_ UINT32 *dimensionZ
        ) PURE;
};
interface DX_DECLARE_INTERFACE("0359dc30-95e6-4568-9055-27720d130e93") ID2D1AnalysisTransform : public IUnknown
{
    STDMETHOD(ProcessAnalysisResults)(
        _In_reads_(analysisDataCount) CONST BYTE *analysisData,
        UINT32 analysisDataCount
        ) PURE;
};
interface DX_DECLARE_INTERFACE("db1800dd-0c34-4cf9-be90-31cc0a5653e1") ID2D1SourceTransform : public ID2D1Transform
{
    STDMETHOD(SetRenderInfo)(
        _In_ ID2D1RenderInfo *renderInfo
        ) PURE;
    STDMETHOD(Draw)(
        _In_ ID2D1Bitmap1 *target,
        _In_ CONST D2D1_RECT_L *drawRect,
        D2D1_POINT_2U targetOrigin
        ) PURE;
};
interface DX_DECLARE_INTERFACE("1a799d8a-69f7-4e4c-9fed-437ccc6684cc") ID2D1ConcreteTransform : public ID2D1TransformNode
{
    STDMETHOD(SetOutputBuffer)(
        D2D1_BUFFER_PRECISION bufferPrecision,
        D2D1_CHANNEL_DEPTH channelDepth
        ) PURE;
    STDMETHOD_(void, SetCached)(
        BOOL isCached
        ) PURE;
};
interface DX_DECLARE_INTERFACE("63ac0b32-ba44-450f-8806-7f4ca1ff2f1b") ID2D1BlendTransform : public ID2D1ConcreteTransform
{
    STDMETHOD_(void, SetDescription)(
        _In_ CONST D2D1_BLEND_DESCRIPTION *description
        ) PURE;
    STDMETHOD_(void, GetDescription)(
        _Out_ D2D1_BLEND_DESCRIPTION *description
        ) CONST PURE;
};
interface DX_DECLARE_INTERFACE("4998735c-3a19-473c-9781-656847e3a347") ID2D1BorderTransform : public ID2D1ConcreteTransform
{
    STDMETHOD_(void, SetExtendModeX)(
        D2D1_EXTEND_MODE extendMode
        ) PURE;
    STDMETHOD_(void, SetExtendModeY)(
        D2D1_EXTEND_MODE extendMode
        ) PURE;
    STDMETHOD_(D2D1_EXTEND_MODE, GetExtendModeX)(
        ) CONST PURE;
    STDMETHOD_(D2D1_EXTEND_MODE, GetExtendModeY)(
        ) CONST PURE;
};
interface DX_DECLARE_INTERFACE("3fe6adea-7643-4f53-bd14-a0ce63f24042") ID2D1OffsetTransform : public ID2D1TransformNode
{
    STDMETHOD_(void, SetOffset)(
        D2D1_POINT_2L offset
        ) PURE;
    STDMETHOD_(D2D1_POINT_2L, GetOffset)(
        ) CONST PURE;
};
interface DX_DECLARE_INTERFACE("90f732e2-5092-4606-a819-8651970baccd") ID2D1BoundsAdjustmentTransform : public ID2D1TransformNode
{
    STDMETHOD_(void, SetOutputBounds)(
        _In_ CONST D2D1_RECT_L *outputBounds
        ) PURE;
    STDMETHOD_(void, GetOutputBounds)(
        _Out_ D2D1_RECT_L *outputBounds
        ) CONST PURE;
};
interface DX_DECLARE_INTERFACE("a248fd3f-3e6c-4e63-9f03-7f68ecc91db9") ID2D1EffectImpl : public IUnknown
{
    STDMETHOD(Initialize)(
        _In_ ID2D1EffectContext *effectContext,
        _In_ ID2D1TransformGraph *transformGraph
        ) PURE;
    STDMETHOD(PrepareForRender)(
        D2D1_CHANGE_TYPE changeType
        ) PURE;
    STDMETHOD(SetGraph)(
        _In_ ID2D1TransformGraph *transformGraph
        ) PURE;
};
interface DX_DECLARE_INTERFACE("3d9f916b-27dc-4ad7-b4f1-64945340f563") ID2D1EffectContext : public IUnknown
{
    STDMETHOD_(void, GetDpi)(
        _Out_ FLOAT *dpiX,
        _Out_ FLOAT *dpiY
        ) CONST PURE;
    STDMETHOD(CreateEffect)(
        _In_ REFCLSID effectId,
        _COM_Outptr_ ID2D1Effect **effect
        ) PURE;
    STDMETHOD(GetMaximumSupportedFeatureLevel)(
        _In_reads_(featureLevelsCount) CONST D3D_FEATURE_LEVEL *featureLevels,
        UINT32 featureLevelsCount,
        _Out_ D3D_FEATURE_LEVEL *maximumSupportedFeatureLevel
        ) CONST PURE;
    STDMETHOD(CreateTransformNodeFromEffect)(
        _In_ ID2D1Effect *effect,
        _COM_Outptr_ ID2D1TransformNode **transformNode
        ) PURE;
    STDMETHOD(CreateBlendTransform)(
        UINT32 numInputs,
        _In_ CONST D2D1_BLEND_DESCRIPTION *blendDescription,
        _COM_Outptr_ ID2D1BlendTransform **transform
        ) PURE;
    STDMETHOD(CreateBorderTransform)(
        D2D1_EXTEND_MODE extendModeX,
        D2D1_EXTEND_MODE extendModeY,
        _COM_Outptr_ ID2D1BorderTransform **transform
        ) PURE;
    STDMETHOD(CreateOffsetTransform)(
        D2D1_POINT_2L offset,
        _COM_Outptr_ ID2D1OffsetTransform **transform
        ) PURE;
    STDMETHOD(CreateBoundsAdjustmentTransform)(
        _In_ CONST D2D1_RECT_L *outputRectangle,
        _COM_Outptr_ ID2D1BoundsAdjustmentTransform **transform
        ) PURE;
    STDMETHOD(LoadPixelShader)(
        REFGUID shaderId,
        _In_reads_(shaderBufferCount) CONST BYTE *shaderBuffer,
        UINT32 shaderBufferCount
        ) PURE;
    STDMETHOD(LoadVertexShader)(
        REFGUID resourceId,
        _In_reads_(shaderBufferCount) CONST BYTE *shaderBuffer,
        UINT32 shaderBufferCount
        ) PURE;
    STDMETHOD(LoadComputeShader)(
        REFGUID resourceId,
        _In_reads_(shaderBufferCount) CONST BYTE *shaderBuffer,
        UINT32 shaderBufferCount
        ) PURE;
    STDMETHOD_(BOOL, IsShaderLoaded)(
        REFGUID shaderId
        ) PURE;
    STDMETHOD(CreateResourceTexture)(
        _In_opt_ CONST GUID *resourceId,
        _In_ CONST D2D1_RESOURCE_TEXTURE_PROPERTIES *resourceTextureProperties,
        _In_reads_opt_(dataSize) CONST BYTE *data,
        _In_reads_opt_(resourceTextureProperties->dimensions - 1) CONST UINT32 *strides,
        UINT32 dataSize,
        _COM_Outptr_ ID2D1ResourceTexture **resourceTexture
        ) PURE;
    STDMETHOD(FindResourceTexture)(
        _In_ CONST GUID *resourceId,
        _COM_Outptr_ ID2D1ResourceTexture **resourceTexture
        ) PURE;
    STDMETHOD(CreateVertexBuffer)(
        _In_ CONST D2D1_VERTEX_BUFFER_PROPERTIES *vertexBufferProperties,
        _In_opt_ CONST GUID *resourceId,
        _In_opt_ CONST D2D1_CUSTOM_VERTEX_BUFFER_PROPERTIES *customVertexBufferProperties,
        _COM_Outptr_ ID2D1VertexBuffer **buffer
        ) PURE;
    STDMETHOD(FindVertexBuffer)(
        _In_ CONST GUID *resourceId,
        _COM_Outptr_ ID2D1VertexBuffer **buffer
        ) PURE;
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
    STDMETHOD(CheckFeatureSupport)(
        D2D1_FEATURE feature,
        _Out_writes_bytes_(featureSupportDataSize) void *featureSupportData,
        UINT32 featureSupportDataSize
        ) CONST PURE;
    STDMETHOD_(BOOL, IsBufferPrecisionSupported)(
        D2D1_BUFFER_PRECISION bufferPrecision
        ) CONST PURE;
};
typedef interface ID2D1VertexBuffer ID2D1VertexBuffer;
typedef interface ID2D1ResourceTexture ID2D1ResourceTexture;
typedef interface ID2D1RenderInfo ID2D1RenderInfo;
typedef interface ID2D1DrawInfo ID2D1DrawInfo;
typedef interface ID2D1ComputeInfo ID2D1ComputeInfo;
typedef interface ID2D1TransformNode ID2D1TransformNode;
typedef interface ID2D1TransformGraph ID2D1TransformGraph;
typedef interface ID2D1Transform ID2D1Transform;
typedef interface ID2D1DrawTransform ID2D1DrawTransform;
typedef interface ID2D1ComputeTransform ID2D1ComputeTransform;
typedef interface ID2D1AnalysisTransform ID2D1AnalysisTransform;
typedef interface ID2D1SourceTransform ID2D1SourceTransform;
typedef interface ID2D1ConcreteTransform ID2D1ConcreteTransform;
typedef interface ID2D1BlendTransform ID2D1BlendTransform;
typedef interface ID2D1BorderTransform ID2D1BorderTransform;
typedef interface ID2D1OffsetTransform ID2D1OffsetTransform;
typedef interface ID2D1BoundsAdjustmentTransform ID2D1BoundsAdjustmentTransform;
typedef interface ID2D1EffectImpl ID2D1EffectImpl;
typedef interface ID2D1EffectContext ID2D1EffectContext;
#include <d2d1_1helper.h>
