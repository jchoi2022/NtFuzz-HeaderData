#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ID3D11DeviceChild ID3D11DeviceChild;
typedef interface ID3D11DepthStencilState ID3D11DepthStencilState;
typedef interface ID3D11BlendState ID3D11BlendState;
typedef interface ID3D11RasterizerState ID3D11RasterizerState;
typedef interface ID3D11Resource ID3D11Resource;
typedef interface ID3D11Buffer ID3D11Buffer;
typedef interface ID3D11Texture1D ID3D11Texture1D;
typedef interface ID3D11Texture2D ID3D11Texture2D;
typedef interface ID3D11Texture3D ID3D11Texture3D;
typedef interface ID3D11View ID3D11View;
typedef interface ID3D11ShaderResourceView ID3D11ShaderResourceView;
typedef interface ID3D11RenderTargetView ID3D11RenderTargetView;
typedef interface ID3D11DepthStencilView ID3D11DepthStencilView;
typedef interface ID3D11UnorderedAccessView ID3D11UnorderedAccessView;
typedef interface ID3D11VertexShader ID3D11VertexShader;
typedef interface ID3D11HullShader ID3D11HullShader;
typedef interface ID3D11DomainShader ID3D11DomainShader;
typedef interface ID3D11GeometryShader ID3D11GeometryShader;
typedef interface ID3D11PixelShader ID3D11PixelShader;
typedef interface ID3D11ComputeShader ID3D11ComputeShader;
typedef interface ID3D11InputLayout ID3D11InputLayout;
typedef interface ID3D11SamplerState ID3D11SamplerState;
typedef interface ID3D11Asynchronous ID3D11Asynchronous;
typedef interface ID3D11Query ID3D11Query;
typedef interface ID3D11Predicate ID3D11Predicate;
typedef interface ID3D11Counter ID3D11Counter;
typedef interface ID3D11ClassInstance ID3D11ClassInstance;
typedef interface ID3D11ClassLinkage ID3D11ClassLinkage;
typedef interface ID3D11CommandList ID3D11CommandList;
typedef interface ID3D11DeviceContext ID3D11DeviceContext;
typedef interface ID3D11VideoDecoder ID3D11VideoDecoder;
typedef interface ID3D11VideoProcessorEnumerator ID3D11VideoProcessorEnumerator;
typedef interface ID3D11VideoProcessor ID3D11VideoProcessor;
typedef interface ID3D11AuthenticatedChannel ID3D11AuthenticatedChannel;
typedef interface ID3D11CryptoSession ID3D11CryptoSession;
typedef interface ID3D11VideoDecoderOutputView ID3D11VideoDecoderOutputView;
typedef interface ID3D11VideoProcessorInputView ID3D11VideoProcessorInputView;
typedef interface ID3D11VideoProcessorOutputView ID3D11VideoProcessorOutputView;
typedef interface ID3D11VideoContext ID3D11VideoContext;
typedef interface ID3D11VideoDevice ID3D11VideoDevice;
typedef interface ID3D11Device ID3D11Device;
#include "oaidl.h"
#include "ocidl.h"
#include "dxgi.h"
#include "d3dcommon.h"
extern "C"{
typedef
enum D3D11_INPUT_CLASSIFICATION
    {
        D3D11_INPUT_PER_VERTEX_DATA = 0,
        D3D11_INPUT_PER_INSTANCE_DATA = 1
    } D3D11_INPUT_CLASSIFICATION;
typedef struct D3D11_INPUT_ELEMENT_DESC
    {
    LPCSTR SemanticName;
    UINT SemanticIndex;
    DXGI_FORMAT Format;
    UINT InputSlot;
    UINT AlignedByteOffset;
    D3D11_INPUT_CLASSIFICATION InputSlotClass;
    UINT InstanceDataStepRate;
    } D3D11_INPUT_ELEMENT_DESC;
typedef
enum D3D11_FILL_MODE
    {
        D3D11_FILL_WIREFRAME = 2,
        D3D11_FILL_SOLID = 3
    } D3D11_FILL_MODE;
typedef D3D_PRIMITIVE_TOPOLOGY D3D11_PRIMITIVE_TOPOLOGY;
typedef D3D_PRIMITIVE D3D11_PRIMITIVE;
typedef
enum D3D11_CULL_MODE
    {
        D3D11_CULL_NONE = 1,
        D3D11_CULL_FRONT = 2,
        D3D11_CULL_BACK = 3
    } D3D11_CULL_MODE;
typedef struct D3D11_SO_DECLARATION_ENTRY
    {
    UINT Stream;
    LPCSTR SemanticName;
    UINT SemanticIndex;
    BYTE StartComponent;
    BYTE ComponentCount;
    BYTE OutputSlot;
    } D3D11_SO_DECLARATION_ENTRY;
typedef struct D3D11_VIEWPORT
    {
    FLOAT TopLeftX;
    FLOAT TopLeftY;
    FLOAT Width;
    FLOAT Height;
    FLOAT MinDepth;
    FLOAT MaxDepth;
    } D3D11_VIEWPORT;
typedef struct D3D11_DRAW_INSTANCED_INDIRECT_ARGS
    {
    UINT VertexCountPerInstance;
    UINT InstanceCount;
    UINT StartVertexLocation;
    UINT StartInstanceLocation;
    } D3D11_DRAW_INSTANCED_INDIRECT_ARGS;
typedef struct D3D11_DRAW_INDEXED_INSTANCED_INDIRECT_ARGS
    {
    UINT IndexCountPerInstance;
    UINT InstanceCount;
    UINT StartIndexLocation;
    INT BaseVertexLocation;
    UINT StartInstanceLocation;
    } D3D11_DRAW_INDEXED_INSTANCED_INDIRECT_ARGS;
typedef
enum D3D11_RESOURCE_DIMENSION
    {
        D3D11_RESOURCE_DIMENSION_UNKNOWN = 0,
        D3D11_RESOURCE_DIMENSION_BUFFER = 1,
        D3D11_RESOURCE_DIMENSION_TEXTURE1D = 2,
        D3D11_RESOURCE_DIMENSION_TEXTURE2D = 3,
        D3D11_RESOURCE_DIMENSION_TEXTURE3D = 4
    } D3D11_RESOURCE_DIMENSION;
typedef D3D_SRV_DIMENSION D3D11_SRV_DIMENSION;
typedef
enum D3D11_DSV_DIMENSION
    {
        D3D11_DSV_DIMENSION_UNKNOWN = 0,
        D3D11_DSV_DIMENSION_TEXTURE1D = 1,
        D3D11_DSV_DIMENSION_TEXTURE1DARRAY = 2,
        D3D11_DSV_DIMENSION_TEXTURE2D = 3,
        D3D11_DSV_DIMENSION_TEXTURE2DARRAY = 4,
        D3D11_DSV_DIMENSION_TEXTURE2DMS = 5,
        D3D11_DSV_DIMENSION_TEXTURE2DMSARRAY = 6
    } D3D11_DSV_DIMENSION;
typedef
enum D3D11_RTV_DIMENSION
    {
        D3D11_RTV_DIMENSION_UNKNOWN = 0,
        D3D11_RTV_DIMENSION_BUFFER = 1,
        D3D11_RTV_DIMENSION_TEXTURE1D = 2,
        D3D11_RTV_DIMENSION_TEXTURE1DARRAY = 3,
        D3D11_RTV_DIMENSION_TEXTURE2D = 4,
        D3D11_RTV_DIMENSION_TEXTURE2DARRAY = 5,
        D3D11_RTV_DIMENSION_TEXTURE2DMS = 6,
        D3D11_RTV_DIMENSION_TEXTURE2DMSARRAY = 7,
        D3D11_RTV_DIMENSION_TEXTURE3D = 8
    } D3D11_RTV_DIMENSION;
typedef
enum D3D11_UAV_DIMENSION
    {
        D3D11_UAV_DIMENSION_UNKNOWN = 0,
        D3D11_UAV_DIMENSION_BUFFER = 1,
        D3D11_UAV_DIMENSION_TEXTURE1D = 2,
        D3D11_UAV_DIMENSION_TEXTURE1DARRAY = 3,
        D3D11_UAV_DIMENSION_TEXTURE2D = 4,
        D3D11_UAV_DIMENSION_TEXTURE2DARRAY = 5,
        D3D11_UAV_DIMENSION_TEXTURE3D = 8
    } D3D11_UAV_DIMENSION;
typedef
enum D3D11_USAGE
    {
        D3D11_USAGE_DEFAULT = 0,
        D3D11_USAGE_IMMUTABLE = 1,
        D3D11_USAGE_DYNAMIC = 2,
        D3D11_USAGE_STAGING = 3
    } D3D11_USAGE;
typedef
enum D3D11_BIND_FLAG
    {
        D3D11_BIND_VERTEX_BUFFER = 0x1L,
        D3D11_BIND_INDEX_BUFFER = 0x2L,
        D3D11_BIND_CONSTANT_BUFFER = 0x4L,
        D3D11_BIND_SHADER_RESOURCE = 0x8L,
        D3D11_BIND_STREAM_OUTPUT = 0x10L,
        D3D11_BIND_RENDER_TARGET = 0x20L,
        D3D11_BIND_DEPTH_STENCIL = 0x40L,
        D3D11_BIND_UNORDERED_ACCESS = 0x80L,
        D3D11_BIND_DECODER = 0x200L,
        D3D11_BIND_VIDEO_ENCODER = 0x400L
    } D3D11_BIND_FLAG;
typedef
enum D3D11_CPU_ACCESS_FLAG
    {
        D3D11_CPU_ACCESS_WRITE = 0x10000L,
        D3D11_CPU_ACCESS_READ = 0x20000L
    } D3D11_CPU_ACCESS_FLAG;
typedef
enum D3D11_RESOURCE_MISC_FLAG
    {
        D3D11_RESOURCE_MISC_GENERATE_MIPS = 0x1L,
        D3D11_RESOURCE_MISC_SHARED = 0x2L,
        D3D11_RESOURCE_MISC_TEXTURECUBE = 0x4L,
        D3D11_RESOURCE_MISC_DRAWINDIRECT_ARGS = 0x10L,
        D3D11_RESOURCE_MISC_BUFFER_ALLOW_RAW_VIEWS = 0x20L,
        D3D11_RESOURCE_MISC_BUFFER_STRUCTURED = 0x40L,
        D3D11_RESOURCE_MISC_RESOURCE_CLAMP = 0x80L,
        D3D11_RESOURCE_MISC_SHARED_KEYEDMUTEX = 0x100L,
        D3D11_RESOURCE_MISC_GDI_COMPATIBLE = 0x200L,
        D3D11_RESOURCE_MISC_SHARED_NTHANDLE = 0x800L,
        D3D11_RESOURCE_MISC_RESTRICTED_CONTENT = 0x1000L,
        D3D11_RESOURCE_MISC_RESTRICT_SHARED_RESOURCE = 0x2000L,
        D3D11_RESOURCE_MISC_RESTRICT_SHARED_RESOURCE_DRIVER = 0x4000L,
        D3D11_RESOURCE_MISC_GUARDED = 0x8000L,
        D3D11_RESOURCE_MISC_TILE_POOL = 0x20000L,
        D3D11_RESOURCE_MISC_TILED = 0x40000L,
        D3D11_RESOURCE_MISC_HW_PROTECTED = 0x80000L
    } D3D11_RESOURCE_MISC_FLAG;
typedef
enum D3D11_MAP
    {
        D3D11_MAP_READ = 1,
        D3D11_MAP_WRITE = 2,
        D3D11_MAP_READ_WRITE = 3,
        D3D11_MAP_WRITE_DISCARD = 4,
        D3D11_MAP_WRITE_NO_OVERWRITE = 5
    } D3D11_MAP;
typedef
enum D3D11_MAP_FLAG
    {
        D3D11_MAP_FLAG_DO_NOT_WAIT = 0x100000L
    } D3D11_MAP_FLAG;
typedef
enum D3D11_RAISE_FLAG
    {
        D3D11_RAISE_FLAG_DRIVER_INTERNAL_ERROR = 0x1L
    } D3D11_RAISE_FLAG;
typedef
enum D3D11_CLEAR_FLAG
    {
        D3D11_CLEAR_DEPTH = 0x1L,
        D3D11_CLEAR_STENCIL = 0x2L
    } D3D11_CLEAR_FLAG;
typedef RECT D3D11_RECT;
typedef struct D3D11_BOX
    {
    UINT left;
    UINT top;
    UINT front;
    UINT right;
    UINT bottom;
    UINT back;
    } D3D11_BOX;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11DeviceChild;
    typedef struct ID3D11DeviceChildVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11DeviceChild * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11DeviceChild * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11DeviceChild * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11DeviceChild * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11DeviceChild * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11DeviceChild * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11DeviceChild * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        END_INTERFACE
    } ID3D11DeviceChildVtbl;
    interface ID3D11DeviceChild
    {
        CONST_VTBL struct ID3D11DeviceChildVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
typedef
enum D3D11_COMPARISON_FUNC
    {
        D3D11_COMPARISON_NEVER = 1,
        D3D11_COMPARISON_LESS = 2,
        D3D11_COMPARISON_EQUAL = 3,
        D3D11_COMPARISON_LESS_EQUAL = 4,
        D3D11_COMPARISON_GREATER = 5,
        D3D11_COMPARISON_NOT_EQUAL = 6,
        D3D11_COMPARISON_GREATER_EQUAL = 7,
        D3D11_COMPARISON_ALWAYS = 8
    } D3D11_COMPARISON_FUNC;
typedef
enum D3D11_DEPTH_WRITE_MASK
    {
        D3D11_DEPTH_WRITE_MASK_ZERO = 0,
        D3D11_DEPTH_WRITE_MASK_ALL = 1
    } D3D11_DEPTH_WRITE_MASK;
typedef
enum D3D11_STENCIL_OP
    {
        D3D11_STENCIL_OP_KEEP = 1,
        D3D11_STENCIL_OP_ZERO = 2,
        D3D11_STENCIL_OP_REPLACE = 3,
        D3D11_STENCIL_OP_INCR_SAT = 4,
        D3D11_STENCIL_OP_DECR_SAT = 5,
        D3D11_STENCIL_OP_INVERT = 6,
        D3D11_STENCIL_OP_INCR = 7,
        D3D11_STENCIL_OP_DECR = 8
    } D3D11_STENCIL_OP;
typedef struct D3D11_DEPTH_STENCILOP_DESC
    {
    D3D11_STENCIL_OP StencilFailOp;
    D3D11_STENCIL_OP StencilDepthFailOp;
    D3D11_STENCIL_OP StencilPassOp;
    D3D11_COMPARISON_FUNC StencilFunc;
    } D3D11_DEPTH_STENCILOP_DESC;
typedef struct D3D11_DEPTH_STENCIL_DESC
    {
    BOOL DepthEnable;
    D3D11_DEPTH_WRITE_MASK DepthWriteMask;
    D3D11_COMPARISON_FUNC DepthFunc;
    BOOL StencilEnable;
    UINT8 StencilReadMask;
    UINT8 StencilWriteMask;
    D3D11_DEPTH_STENCILOP_DESC FrontFace;
    D3D11_DEPTH_STENCILOP_DESC BackFace;
    } D3D11_DEPTH_STENCIL_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11DepthStencilState;
    typedef struct ID3D11DepthStencilStateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11DepthStencilState * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11DepthStencilState * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11DepthStencilState * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11DepthStencilState * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11DepthStencilState * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11DepthStencilState * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11DepthStencilState * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11DepthStencilState * This,
            _Out_ D3D11_DEPTH_STENCIL_DESC *pDesc);
        END_INTERFACE
    } ID3D11DepthStencilStateVtbl;
    interface ID3D11DepthStencilState
    {
        CONST_VTBL struct ID3D11DepthStencilStateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef
enum D3D11_BLEND
    {
        D3D11_BLEND_ZERO = 1,
        D3D11_BLEND_ONE = 2,
        D3D11_BLEND_SRC_COLOR = 3,
        D3D11_BLEND_INV_SRC_COLOR = 4,
        D3D11_BLEND_SRC_ALPHA = 5,
        D3D11_BLEND_INV_SRC_ALPHA = 6,
        D3D11_BLEND_DEST_ALPHA = 7,
        D3D11_BLEND_INV_DEST_ALPHA = 8,
        D3D11_BLEND_DEST_COLOR = 9,
        D3D11_BLEND_INV_DEST_COLOR = 10,
        D3D11_BLEND_SRC_ALPHA_SAT = 11,
        D3D11_BLEND_BLEND_FACTOR = 14,
        D3D11_BLEND_INV_BLEND_FACTOR = 15,
        D3D11_BLEND_SRC1_COLOR = 16,
        D3D11_BLEND_INV_SRC1_COLOR = 17,
        D3D11_BLEND_SRC1_ALPHA = 18,
        D3D11_BLEND_INV_SRC1_ALPHA = 19
    } D3D11_BLEND;
typedef
enum D3D11_BLEND_OP
    {
        D3D11_BLEND_OP_ADD = 1,
        D3D11_BLEND_OP_SUBTRACT = 2,
        D3D11_BLEND_OP_REV_SUBTRACT = 3,
        D3D11_BLEND_OP_MIN = 4,
        D3D11_BLEND_OP_MAX = 5
    } D3D11_BLEND_OP;
typedef
enum D3D11_COLOR_WRITE_ENABLE
    {
        D3D11_COLOR_WRITE_ENABLE_RED = 1,
        D3D11_COLOR_WRITE_ENABLE_GREEN = 2,
        D3D11_COLOR_WRITE_ENABLE_BLUE = 4,
        D3D11_COLOR_WRITE_ENABLE_ALPHA = 8,
        D3D11_COLOR_WRITE_ENABLE_ALL = ( ( ( D3D11_COLOR_WRITE_ENABLE_RED | D3D11_COLOR_WRITE_ENABLE_GREEN ) | D3D11_COLOR_WRITE_ENABLE_BLUE ) | D3D11_COLOR_WRITE_ENABLE_ALPHA )
    } D3D11_COLOR_WRITE_ENABLE;
typedef struct D3D11_RENDER_TARGET_BLEND_DESC
    {
    BOOL BlendEnable;
    D3D11_BLEND SrcBlend;
    D3D11_BLEND DestBlend;
    D3D11_BLEND_OP BlendOp;
    D3D11_BLEND SrcBlendAlpha;
    D3D11_BLEND DestBlendAlpha;
    D3D11_BLEND_OP BlendOpAlpha;
    UINT8 RenderTargetWriteMask;
    } D3D11_RENDER_TARGET_BLEND_DESC;
typedef struct D3D11_BLEND_DESC
    {
    BOOL AlphaToCoverageEnable;
    BOOL IndependentBlendEnable;
    D3D11_RENDER_TARGET_BLEND_DESC RenderTarget[ 8 ];
    } D3D11_BLEND_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11BlendState;
    typedef struct ID3D11BlendStateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11BlendState * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11BlendState * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11BlendState * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11BlendState * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11BlendState * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11BlendState * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11BlendState * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11BlendState * This,
            _Out_ D3D11_BLEND_DESC *pDesc);
        END_INTERFACE
    } ID3D11BlendStateVtbl;
    interface ID3D11BlendState
    {
        CONST_VTBL struct ID3D11BlendStateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef struct D3D11_RASTERIZER_DESC
    {
    D3D11_FILL_MODE FillMode;
    D3D11_CULL_MODE CullMode;
    BOOL FrontCounterClockwise;
    INT DepthBias;
    FLOAT DepthBiasClamp;
    FLOAT SlopeScaledDepthBias;
    BOOL DepthClipEnable;
    BOOL ScissorEnable;
    BOOL MultisampleEnable;
    BOOL AntialiasedLineEnable;
    } D3D11_RASTERIZER_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11RasterizerState;
    typedef struct ID3D11RasterizerStateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11RasterizerState * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11RasterizerState * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11RasterizerState * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11RasterizerState * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11RasterizerState * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11RasterizerState * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11RasterizerState * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11RasterizerState * This,
            _Out_ D3D11_RASTERIZER_DESC *pDesc);
        END_INTERFACE
    } ID3D11RasterizerStateVtbl;
    interface ID3D11RasterizerState
    {
        CONST_VTBL struct ID3D11RasterizerStateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef struct D3D11_SUBRESOURCE_DATA
    {
    const void *pSysMem;
    UINT SysMemPitch;
    UINT SysMemSlicePitch;
    } D3D11_SUBRESOURCE_DATA;
typedef struct D3D11_MAPPED_SUBRESOURCE
    {
    void *pData;
    UINT RowPitch;
    UINT DepthPitch;
    } D3D11_MAPPED_SUBRESOURCE;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11Resource;
    typedef struct ID3D11ResourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11Resource * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11Resource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11Resource * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11Resource * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11Resource * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11Resource * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11Resource * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetType )(
            ID3D11Resource * This,
            _Out_ D3D11_RESOURCE_DIMENSION *pResourceDimension);
        void ( STDMETHODCALLTYPE *SetEvictionPriority )(
            ID3D11Resource * This,
            _In_ UINT EvictionPriority);
        UINT ( STDMETHODCALLTYPE *GetEvictionPriority )(
            ID3D11Resource * This);
        END_INTERFACE
    } ID3D11ResourceVtbl;
    interface ID3D11Resource
    {
        CONST_VTBL struct ID3D11ResourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetType(This,pResourceDimension) )
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) )
    ( (This)->lpVtbl -> GetEvictionPriority(This) )
typedef struct D3D11_BUFFER_DESC
    {
    UINT ByteWidth;
    D3D11_USAGE Usage;
    UINT BindFlags;
    UINT CPUAccessFlags;
    UINT MiscFlags;
    UINT StructureByteStride;
    } D3D11_BUFFER_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11Buffer;
    typedef struct ID3D11BufferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11Buffer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11Buffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11Buffer * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11Buffer * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11Buffer * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11Buffer * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11Buffer * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetType )(
            ID3D11Buffer * This,
            _Out_ D3D11_RESOURCE_DIMENSION *pResourceDimension);
        void ( STDMETHODCALLTYPE *SetEvictionPriority )(
            ID3D11Buffer * This,
            _In_ UINT EvictionPriority);
        UINT ( STDMETHODCALLTYPE *GetEvictionPriority )(
            ID3D11Buffer * This);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11Buffer * This,
            _Out_ D3D11_BUFFER_DESC *pDesc);
        END_INTERFACE
    } ID3D11BufferVtbl;
    interface ID3D11Buffer
    {
        CONST_VTBL struct ID3D11BufferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetType(This,pResourceDimension) )
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) )
    ( (This)->lpVtbl -> GetEvictionPriority(This) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef struct D3D11_TEXTURE1D_DESC
    {
    UINT Width;
    UINT MipLevels;
    UINT ArraySize;
    DXGI_FORMAT Format;
    D3D11_USAGE Usage;
    UINT BindFlags;
    UINT CPUAccessFlags;
    UINT MiscFlags;
    } D3D11_TEXTURE1D_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11Texture1D;
    typedef struct ID3D11Texture1DVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11Texture1D * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11Texture1D * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11Texture1D * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11Texture1D * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11Texture1D * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11Texture1D * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11Texture1D * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetType )(
            ID3D11Texture1D * This,
            _Out_ D3D11_RESOURCE_DIMENSION *pResourceDimension);
        void ( STDMETHODCALLTYPE *SetEvictionPriority )(
            ID3D11Texture1D * This,
            _In_ UINT EvictionPriority);
        UINT ( STDMETHODCALLTYPE *GetEvictionPriority )(
            ID3D11Texture1D * This);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11Texture1D * This,
            _Out_ D3D11_TEXTURE1D_DESC *pDesc);
        END_INTERFACE
    } ID3D11Texture1DVtbl;
    interface ID3D11Texture1D
    {
        CONST_VTBL struct ID3D11Texture1DVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetType(This,pResourceDimension) )
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) )
    ( (This)->lpVtbl -> GetEvictionPriority(This) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef struct D3D11_TEXTURE2D_DESC
    {
    UINT Width;
    UINT Height;
    UINT MipLevels;
    UINT ArraySize;
    DXGI_FORMAT Format;
    DXGI_SAMPLE_DESC SampleDesc;
    D3D11_USAGE Usage;
    UINT BindFlags;
    UINT CPUAccessFlags;
    UINT MiscFlags;
    } D3D11_TEXTURE2D_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11Texture2D;
    typedef struct ID3D11Texture2DVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11Texture2D * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11Texture2D * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11Texture2D * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11Texture2D * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11Texture2D * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11Texture2D * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11Texture2D * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetType )(
            ID3D11Texture2D * This,
            _Out_ D3D11_RESOURCE_DIMENSION *pResourceDimension);
        void ( STDMETHODCALLTYPE *SetEvictionPriority )(
            ID3D11Texture2D * This,
            _In_ UINT EvictionPriority);
        UINT ( STDMETHODCALLTYPE *GetEvictionPriority )(
            ID3D11Texture2D * This);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11Texture2D * This,
            _Out_ D3D11_TEXTURE2D_DESC *pDesc);
        END_INTERFACE
    } ID3D11Texture2DVtbl;
    interface ID3D11Texture2D
    {
        CONST_VTBL struct ID3D11Texture2DVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetType(This,pResourceDimension) )
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) )
    ( (This)->lpVtbl -> GetEvictionPriority(This) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef struct D3D11_TEXTURE3D_DESC
    {
    UINT Width;
    UINT Height;
    UINT Depth;
    UINT MipLevels;
    DXGI_FORMAT Format;
    D3D11_USAGE Usage;
    UINT BindFlags;
    UINT CPUAccessFlags;
    UINT MiscFlags;
    } D3D11_TEXTURE3D_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11Texture3D;
    typedef struct ID3D11Texture3DVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11Texture3D * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11Texture3D * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11Texture3D * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11Texture3D * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11Texture3D * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11Texture3D * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11Texture3D * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetType )(
            ID3D11Texture3D * This,
            _Out_ D3D11_RESOURCE_DIMENSION *pResourceDimension);
        void ( STDMETHODCALLTYPE *SetEvictionPriority )(
            ID3D11Texture3D * This,
            _In_ UINT EvictionPriority);
        UINT ( STDMETHODCALLTYPE *GetEvictionPriority )(
            ID3D11Texture3D * This);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11Texture3D * This,
            _Out_ D3D11_TEXTURE3D_DESC *pDesc);
        END_INTERFACE
    } ID3D11Texture3DVtbl;
    interface ID3D11Texture3D
    {
        CONST_VTBL struct ID3D11Texture3DVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetType(This,pResourceDimension) )
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) )
    ( (This)->lpVtbl -> GetEvictionPriority(This) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef
enum D3D11_TEXTURECUBE_FACE
    {
        D3D11_TEXTURECUBE_FACE_POSITIVE_X = 0,
        D3D11_TEXTURECUBE_FACE_NEGATIVE_X = 1,
        D3D11_TEXTURECUBE_FACE_POSITIVE_Y = 2,
        D3D11_TEXTURECUBE_FACE_NEGATIVE_Y = 3,
        D3D11_TEXTURECUBE_FACE_POSITIVE_Z = 4,
        D3D11_TEXTURECUBE_FACE_NEGATIVE_Z = 5
    } D3D11_TEXTURECUBE_FACE;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11View;
    typedef struct ID3D11ViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11View * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11View * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11View * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11View * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11View * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11View * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11View * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetResource )(
            ID3D11View * This,
            _Outptr_ ID3D11Resource **ppResource);
        END_INTERFACE
    } ID3D11ViewVtbl;
    interface ID3D11View
    {
        CONST_VTBL struct ID3D11ViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetResource(This,ppResource) )
typedef struct D3D11_BUFFER_SRV
    {
    union
        {
        UINT FirstElement;
        UINT ElementOffset;
        } ;
    union
        {
        UINT NumElements;
        UINT ElementWidth;
        } ;
    } D3D11_BUFFER_SRV;
typedef
enum D3D11_BUFFEREX_SRV_FLAG
    {
        D3D11_BUFFEREX_SRV_FLAG_RAW = 0x1
    } D3D11_BUFFEREX_SRV_FLAG;
typedef struct D3D11_BUFFEREX_SRV
    {
    UINT FirstElement;
    UINT NumElements;
    UINT Flags;
    } D3D11_BUFFEREX_SRV;
typedef struct D3D11_TEX1D_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    } D3D11_TEX1D_SRV;
typedef struct D3D11_TEX1D_ARRAY_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D11_TEX1D_ARRAY_SRV;
typedef struct D3D11_TEX2D_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    } D3D11_TEX2D_SRV;
typedef struct D3D11_TEX2D_ARRAY_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D11_TEX2D_ARRAY_SRV;
typedef struct D3D11_TEX3D_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    } D3D11_TEX3D_SRV;
typedef struct D3D11_TEXCUBE_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    } D3D11_TEXCUBE_SRV;
typedef struct D3D11_TEXCUBE_ARRAY_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    UINT First2DArrayFace;
    UINT NumCubes;
    } D3D11_TEXCUBE_ARRAY_SRV;
typedef struct D3D11_TEX2DMS_SRV
    {
    UINT UnusedField_NothingToDefine;
    } D3D11_TEX2DMS_SRV;
typedef struct D3D11_TEX2DMS_ARRAY_SRV
    {
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D11_TEX2DMS_ARRAY_SRV;
typedef struct D3D11_SHADER_RESOURCE_VIEW_DESC
    {
    DXGI_FORMAT Format;
    D3D11_SRV_DIMENSION ViewDimension;
    union
        {
        D3D11_BUFFER_SRV Buffer;
        D3D11_TEX1D_SRV Texture1D;
        D3D11_TEX1D_ARRAY_SRV Texture1DArray;
        D3D11_TEX2D_SRV Texture2D;
        D3D11_TEX2D_ARRAY_SRV Texture2DArray;
        D3D11_TEX2DMS_SRV Texture2DMS;
        D3D11_TEX2DMS_ARRAY_SRV Texture2DMSArray;
        D3D11_TEX3D_SRV Texture3D;
        D3D11_TEXCUBE_SRV TextureCube;
        D3D11_TEXCUBE_ARRAY_SRV TextureCubeArray;
        D3D11_BUFFEREX_SRV BufferEx;
        } ;
    } D3D11_SHADER_RESOURCE_VIEW_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0010_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11ShaderResourceView;
    typedef struct ID3D11ShaderResourceViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11ShaderResourceView * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11ShaderResourceView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11ShaderResourceView * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11ShaderResourceView * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11ShaderResourceView * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11ShaderResourceView * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11ShaderResourceView * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetResource )(
            ID3D11ShaderResourceView * This,
            _Outptr_ ID3D11Resource **ppResource);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11ShaderResourceView * This,
            _Out_ D3D11_SHADER_RESOURCE_VIEW_DESC *pDesc);
        END_INTERFACE
    } ID3D11ShaderResourceViewVtbl;
    interface ID3D11ShaderResourceView
    {
        CONST_VTBL struct ID3D11ShaderResourceViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetResource(This,ppResource) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef struct D3D11_BUFFER_RTV
    {
    union
        {
        UINT FirstElement;
        UINT ElementOffset;
        } ;
    union
        {
        UINT NumElements;
        UINT ElementWidth;
        } ;
    } D3D11_BUFFER_RTV;
typedef struct D3D11_TEX1D_RTV
    {
    UINT MipSlice;
    } D3D11_TEX1D_RTV;
typedef struct D3D11_TEX1D_ARRAY_RTV
    {
    UINT MipSlice;
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D11_TEX1D_ARRAY_RTV;
typedef struct D3D11_TEX2D_RTV
    {
    UINT MipSlice;
    } D3D11_TEX2D_RTV;
typedef struct D3D11_TEX2DMS_RTV
    {
    UINT UnusedField_NothingToDefine;
    } D3D11_TEX2DMS_RTV;
typedef struct D3D11_TEX2D_ARRAY_RTV
    {
    UINT MipSlice;
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D11_TEX2D_ARRAY_RTV;
typedef struct D3D11_TEX2DMS_ARRAY_RTV
    {
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D11_TEX2DMS_ARRAY_RTV;
typedef struct D3D11_TEX3D_RTV
    {
    UINT MipSlice;
    UINT FirstWSlice;
    UINT WSize;
    } D3D11_TEX3D_RTV;
typedef struct D3D11_RENDER_TARGET_VIEW_DESC
    {
    DXGI_FORMAT Format;
    D3D11_RTV_DIMENSION ViewDimension;
    union
        {
        D3D11_BUFFER_RTV Buffer;
        D3D11_TEX1D_RTV Texture1D;
        D3D11_TEX1D_ARRAY_RTV Texture1DArray;
        D3D11_TEX2D_RTV Texture2D;
        D3D11_TEX2D_ARRAY_RTV Texture2DArray;
        D3D11_TEX2DMS_RTV Texture2DMS;
        D3D11_TEX2DMS_ARRAY_RTV Texture2DMSArray;
        D3D11_TEX3D_RTV Texture3D;
        } ;
    } D3D11_RENDER_TARGET_VIEW_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0011_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11RenderTargetView;
    typedef struct ID3D11RenderTargetViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11RenderTargetView * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11RenderTargetView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11RenderTargetView * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11RenderTargetView * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11RenderTargetView * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11RenderTargetView * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11RenderTargetView * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetResource )(
            ID3D11RenderTargetView * This,
            _Outptr_ ID3D11Resource **ppResource);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11RenderTargetView * This,
            _Out_ D3D11_RENDER_TARGET_VIEW_DESC *pDesc);
        END_INTERFACE
    } ID3D11RenderTargetViewVtbl;
    interface ID3D11RenderTargetView
    {
        CONST_VTBL struct ID3D11RenderTargetViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetResource(This,ppResource) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef struct D3D11_TEX1D_DSV
    {
    UINT MipSlice;
    } D3D11_TEX1D_DSV;
typedef struct D3D11_TEX1D_ARRAY_DSV
    {
    UINT MipSlice;
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D11_TEX1D_ARRAY_DSV;
typedef struct D3D11_TEX2D_DSV
    {
    UINT MipSlice;
    } D3D11_TEX2D_DSV;
typedef struct D3D11_TEX2D_ARRAY_DSV
    {
    UINT MipSlice;
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D11_TEX2D_ARRAY_DSV;
typedef struct D3D11_TEX2DMS_DSV
    {
    UINT UnusedField_NothingToDefine;
    } D3D11_TEX2DMS_DSV;
typedef struct D3D11_TEX2DMS_ARRAY_DSV
    {
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D11_TEX2DMS_ARRAY_DSV;
typedef
enum D3D11_DSV_FLAG
    {
        D3D11_DSV_READ_ONLY_DEPTH = 0x1L,
        D3D11_DSV_READ_ONLY_STENCIL = 0x2L
    } D3D11_DSV_FLAG;
typedef struct D3D11_DEPTH_STENCIL_VIEW_DESC
    {
    DXGI_FORMAT Format;
    D3D11_DSV_DIMENSION ViewDimension;
    UINT Flags;
    union
        {
        D3D11_TEX1D_DSV Texture1D;
        D3D11_TEX1D_ARRAY_DSV Texture1DArray;
        D3D11_TEX2D_DSV Texture2D;
        D3D11_TEX2D_ARRAY_DSV Texture2DArray;
        D3D11_TEX2DMS_DSV Texture2DMS;
        D3D11_TEX2DMS_ARRAY_DSV Texture2DMSArray;
        } ;
    } D3D11_DEPTH_STENCIL_VIEW_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0012_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11DepthStencilView;
    typedef struct ID3D11DepthStencilViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11DepthStencilView * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11DepthStencilView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11DepthStencilView * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11DepthStencilView * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11DepthStencilView * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11DepthStencilView * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11DepthStencilView * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetResource )(
            ID3D11DepthStencilView * This,
            _Outptr_ ID3D11Resource **ppResource);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11DepthStencilView * This,
            _Out_ D3D11_DEPTH_STENCIL_VIEW_DESC *pDesc);
        END_INTERFACE
    } ID3D11DepthStencilViewVtbl;
    interface ID3D11DepthStencilView
    {
        CONST_VTBL struct ID3D11DepthStencilViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetResource(This,ppResource) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef
enum D3D11_BUFFER_UAV_FLAG
    {
        D3D11_BUFFER_UAV_FLAG_RAW = 0x1,
        D3D11_BUFFER_UAV_FLAG_APPEND = 0x2,
        D3D11_BUFFER_UAV_FLAG_COUNTER = 0x4
    } D3D11_BUFFER_UAV_FLAG;
typedef struct D3D11_BUFFER_UAV
    {
    UINT FirstElement;
    UINT NumElements;
    UINT Flags;
    } D3D11_BUFFER_UAV;
typedef struct D3D11_TEX1D_UAV
    {
    UINT MipSlice;
    } D3D11_TEX1D_UAV;
typedef struct D3D11_TEX1D_ARRAY_UAV
    {
    UINT MipSlice;
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D11_TEX1D_ARRAY_UAV;
typedef struct D3D11_TEX2D_UAV
    {
    UINT MipSlice;
    } D3D11_TEX2D_UAV;
typedef struct D3D11_TEX2D_ARRAY_UAV
    {
    UINT MipSlice;
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D11_TEX2D_ARRAY_UAV;
typedef struct D3D11_TEX3D_UAV
    {
    UINT MipSlice;
    UINT FirstWSlice;
    UINT WSize;
    } D3D11_TEX3D_UAV;
typedef struct D3D11_UNORDERED_ACCESS_VIEW_DESC
    {
    DXGI_FORMAT Format;
    D3D11_UAV_DIMENSION ViewDimension;
    union
        {
        D3D11_BUFFER_UAV Buffer;
        D3D11_TEX1D_UAV Texture1D;
        D3D11_TEX1D_ARRAY_UAV Texture1DArray;
        D3D11_TEX2D_UAV Texture2D;
        D3D11_TEX2D_ARRAY_UAV Texture2DArray;
        D3D11_TEX3D_UAV Texture3D;
        } ;
    } D3D11_UNORDERED_ACCESS_VIEW_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11UnorderedAccessView;
    typedef struct ID3D11UnorderedAccessViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11UnorderedAccessView * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11UnorderedAccessView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11UnorderedAccessView * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11UnorderedAccessView * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11UnorderedAccessView * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11UnorderedAccessView * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11UnorderedAccessView * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetResource )(
            ID3D11UnorderedAccessView * This,
            _Outptr_ ID3D11Resource **ppResource);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11UnorderedAccessView * This,
            _Out_ D3D11_UNORDERED_ACCESS_VIEW_DESC *pDesc);
        END_INTERFACE
    } ID3D11UnorderedAccessViewVtbl;
    interface ID3D11UnorderedAccessView
    {
        CONST_VTBL struct ID3D11UnorderedAccessViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetResource(This,ppResource) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
EXTERN_C const IID IID_ID3D11VertexShader;
    typedef struct ID3D11VertexShaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11VertexShader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11VertexShader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11VertexShader * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11VertexShader * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11VertexShader * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11VertexShader * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11VertexShader * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        END_INTERFACE
    } ID3D11VertexShaderVtbl;
    interface ID3D11VertexShader
    {
        CONST_VTBL struct ID3D11VertexShaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
EXTERN_C const IID IID_ID3D11HullShader;
    typedef struct ID3D11HullShaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11HullShader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11HullShader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11HullShader * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11HullShader * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11HullShader * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11HullShader * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11HullShader * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        END_INTERFACE
    } ID3D11HullShaderVtbl;
    interface ID3D11HullShader
    {
        CONST_VTBL struct ID3D11HullShaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
EXTERN_C const IID IID_ID3D11DomainShader;
    typedef struct ID3D11DomainShaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11DomainShader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11DomainShader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11DomainShader * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11DomainShader * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11DomainShader * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11DomainShader * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11DomainShader * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        END_INTERFACE
    } ID3D11DomainShaderVtbl;
    interface ID3D11DomainShader
    {
        CONST_VTBL struct ID3D11DomainShaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
EXTERN_C const IID IID_ID3D11GeometryShader;
    typedef struct ID3D11GeometryShaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11GeometryShader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11GeometryShader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11GeometryShader * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11GeometryShader * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11GeometryShader * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11GeometryShader * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11GeometryShader * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        END_INTERFACE
    } ID3D11GeometryShaderVtbl;
    interface ID3D11GeometryShader
    {
        CONST_VTBL struct ID3D11GeometryShaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
EXTERN_C const IID IID_ID3D11PixelShader;
    typedef struct ID3D11PixelShaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11PixelShader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11PixelShader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11PixelShader * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11PixelShader * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11PixelShader * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11PixelShader * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11PixelShader * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        END_INTERFACE
    } ID3D11PixelShaderVtbl;
    interface ID3D11PixelShader
    {
        CONST_VTBL struct ID3D11PixelShaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
EXTERN_C const IID IID_ID3D11ComputeShader;
    typedef struct ID3D11ComputeShaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11ComputeShader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11ComputeShader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11ComputeShader * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11ComputeShader * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11ComputeShader * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11ComputeShader * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11ComputeShader * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        END_INTERFACE
    } ID3D11ComputeShaderVtbl;
    interface ID3D11ComputeShader
    {
        CONST_VTBL struct ID3D11ComputeShaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
EXTERN_C const IID IID_ID3D11InputLayout;
    typedef struct ID3D11InputLayoutVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11InputLayout * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11InputLayout * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11InputLayout * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11InputLayout * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11InputLayout * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11InputLayout * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11InputLayout * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        END_INTERFACE
    } ID3D11InputLayoutVtbl;
    interface ID3D11InputLayout
    {
        CONST_VTBL struct ID3D11InputLayoutVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
typedef
enum D3D11_FILTER
    {
        D3D11_FILTER_MIN_MAG_MIP_POINT = 0,
        D3D11_FILTER_MIN_MAG_POINT_MIP_LINEAR = 0x1,
        D3D11_FILTER_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x4,
        D3D11_FILTER_MIN_POINT_MAG_MIP_LINEAR = 0x5,
        D3D11_FILTER_MIN_LINEAR_MAG_MIP_POINT = 0x10,
        D3D11_FILTER_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x11,
        D3D11_FILTER_MIN_MAG_LINEAR_MIP_POINT = 0x14,
        D3D11_FILTER_MIN_MAG_MIP_LINEAR = 0x15,
        D3D11_FILTER_ANISOTROPIC = 0x55,
        D3D11_FILTER_COMPARISON_MIN_MAG_MIP_POINT = 0x80,
        D3D11_FILTER_COMPARISON_MIN_MAG_POINT_MIP_LINEAR = 0x81,
        D3D11_FILTER_COMPARISON_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x84,
        D3D11_FILTER_COMPARISON_MIN_POINT_MAG_MIP_LINEAR = 0x85,
        D3D11_FILTER_COMPARISON_MIN_LINEAR_MAG_MIP_POINT = 0x90,
        D3D11_FILTER_COMPARISON_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x91,
        D3D11_FILTER_COMPARISON_MIN_MAG_LINEAR_MIP_POINT = 0x94,
        D3D11_FILTER_COMPARISON_MIN_MAG_MIP_LINEAR = 0x95,
        D3D11_FILTER_COMPARISON_ANISOTROPIC = 0xd5,
        D3D11_FILTER_MINIMUM_MIN_MAG_MIP_POINT = 0x100,
        D3D11_FILTER_MINIMUM_MIN_MAG_POINT_MIP_LINEAR = 0x101,
        D3D11_FILTER_MINIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x104,
        D3D11_FILTER_MINIMUM_MIN_POINT_MAG_MIP_LINEAR = 0x105,
        D3D11_FILTER_MINIMUM_MIN_LINEAR_MAG_MIP_POINT = 0x110,
        D3D11_FILTER_MINIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x111,
        D3D11_FILTER_MINIMUM_MIN_MAG_LINEAR_MIP_POINT = 0x114,
        D3D11_FILTER_MINIMUM_MIN_MAG_MIP_LINEAR = 0x115,
        D3D11_FILTER_MINIMUM_ANISOTROPIC = 0x155,
        D3D11_FILTER_MAXIMUM_MIN_MAG_MIP_POINT = 0x180,
        D3D11_FILTER_MAXIMUM_MIN_MAG_POINT_MIP_LINEAR = 0x181,
        D3D11_FILTER_MAXIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x184,
        D3D11_FILTER_MAXIMUM_MIN_POINT_MAG_MIP_LINEAR = 0x185,
        D3D11_FILTER_MAXIMUM_MIN_LINEAR_MAG_MIP_POINT = 0x190,
        D3D11_FILTER_MAXIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x191,
        D3D11_FILTER_MAXIMUM_MIN_MAG_LINEAR_MIP_POINT = 0x194,
        D3D11_FILTER_MAXIMUM_MIN_MAG_MIP_LINEAR = 0x195,
        D3D11_FILTER_MAXIMUM_ANISOTROPIC = 0x1d5
    } D3D11_FILTER;
typedef
enum D3D11_FILTER_TYPE
    {
        D3D11_FILTER_TYPE_POINT = 0,
        D3D11_FILTER_TYPE_LINEAR = 1
    } D3D11_FILTER_TYPE;
typedef
enum D3D11_FILTER_REDUCTION_TYPE
    {
        D3D11_FILTER_REDUCTION_TYPE_STANDARD = 0,
        D3D11_FILTER_REDUCTION_TYPE_COMPARISON = 1,
        D3D11_FILTER_REDUCTION_TYPE_MINIMUM = 2,
        D3D11_FILTER_REDUCTION_TYPE_MAXIMUM = 3
    } D3D11_FILTER_REDUCTION_TYPE;
                                   ( ( D3D11_FILTER ) ( \
                                   ( ( ( min ) & D3D11_FILTER_TYPE_MASK ) << D3D11_MIN_FILTER_SHIFT ) | \
                                   ( ( ( mag ) & D3D11_FILTER_TYPE_MASK ) << D3D11_MAG_FILTER_SHIFT ) | \
                                   ( ( ( mip ) & D3D11_FILTER_TYPE_MASK ) << D3D11_MIP_FILTER_SHIFT ) | \
                                   ( ( ( reduction ) & D3D11_FILTER_REDUCTION_TYPE_MASK ) << D3D11_FILTER_REDUCTION_TYPE_SHIFT ) ) )
                                         ( ( D3D11_FILTER ) ( \
                                         D3D11_ANISOTROPIC_FILTERING_BIT | \
                                         D3D11_ENCODE_BASIC_FILTER( D3D11_FILTER_TYPE_LINEAR, \
                                                                    D3D11_FILTER_TYPE_LINEAR, \
                                                                    D3D11_FILTER_TYPE_LINEAR, \
                                                                    reduction ) ) )
                                 ( ( D3D11_FILTER_TYPE ) \
                                 ( ( ( d3d11Filter ) >> D3D11_MIN_FILTER_SHIFT ) & D3D11_FILTER_TYPE_MASK ) )
                                 ( ( D3D11_FILTER_TYPE ) \
                                 ( ( ( d3d11Filter ) >> D3D11_MAG_FILTER_SHIFT ) & D3D11_FILTER_TYPE_MASK ) )
                                 ( ( D3D11_FILTER_TYPE ) \
                                 ( ( ( d3d11Filter ) >> D3D11_MIP_FILTER_SHIFT ) & D3D11_FILTER_TYPE_MASK ) )
                                 ( ( D3D11_FILTER_REDUCTION_TYPE ) \
                                 ( ( ( d3d11Filter ) >> D3D11_FILTER_REDUCTION_TYPE_SHIFT ) & D3D11_FILTER_REDUCTION_TYPE_MASK ) )
                                 ( D3D11_DECODE_FILTER_REDUCTION( d3d11Filter ) == D3D11_FILTER_REDUCTION_TYPE_COMPARISON )
                            ( ( ( d3d11Filter ) & D3D11_ANISOTROPIC_FILTERING_BIT ) && \
                            ( D3D11_FILTER_TYPE_LINEAR == D3D11_DECODE_MIN_FILTER( d3d11Filter ) ) && \
                            ( D3D11_FILTER_TYPE_LINEAR == D3D11_DECODE_MAG_FILTER( d3d11Filter ) ) && \
                            ( D3D11_FILTER_TYPE_LINEAR == D3D11_DECODE_MIP_FILTER( d3d11Filter ) ) )
typedef
enum D3D11_TEXTURE_ADDRESS_MODE
    {
        D3D11_TEXTURE_ADDRESS_WRAP = 1,
        D3D11_TEXTURE_ADDRESS_MIRROR = 2,
        D3D11_TEXTURE_ADDRESS_CLAMP = 3,
        D3D11_TEXTURE_ADDRESS_BORDER = 4,
        D3D11_TEXTURE_ADDRESS_MIRROR_ONCE = 5
    } D3D11_TEXTURE_ADDRESS_MODE;
typedef struct D3D11_SAMPLER_DESC
    {
    D3D11_FILTER Filter;
    D3D11_TEXTURE_ADDRESS_MODE AddressU;
    D3D11_TEXTURE_ADDRESS_MODE AddressV;
    D3D11_TEXTURE_ADDRESS_MODE AddressW;
    FLOAT MipLODBias;
    UINT MaxAnisotropy;
    D3D11_COMPARISON_FUNC ComparisonFunc;
    FLOAT BorderColor[ 4 ];
    FLOAT MinLOD;
    FLOAT MaxLOD;
    } D3D11_SAMPLER_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0021_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11SamplerState;
    typedef struct ID3D11SamplerStateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11SamplerState * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11SamplerState * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11SamplerState * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11SamplerState * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11SamplerState * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11SamplerState * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11SamplerState * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11SamplerState * This,
            _Out_ D3D11_SAMPLER_DESC *pDesc);
        END_INTERFACE
    } ID3D11SamplerStateVtbl;
    interface ID3D11SamplerState
    {
        CONST_VTBL struct ID3D11SamplerStateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef
enum D3D11_FORMAT_SUPPORT
    {
        D3D11_FORMAT_SUPPORT_BUFFER = 0x1,
        D3D11_FORMAT_SUPPORT_IA_VERTEX_BUFFER = 0x2,
        D3D11_FORMAT_SUPPORT_IA_INDEX_BUFFER = 0x4,
        D3D11_FORMAT_SUPPORT_SO_BUFFER = 0x8,
        D3D11_FORMAT_SUPPORT_TEXTURE1D = 0x10,
        D3D11_FORMAT_SUPPORT_TEXTURE2D = 0x20,
        D3D11_FORMAT_SUPPORT_TEXTURE3D = 0x40,
        D3D11_FORMAT_SUPPORT_TEXTURECUBE = 0x80,
        D3D11_FORMAT_SUPPORT_SHADER_LOAD = 0x100,
        D3D11_FORMAT_SUPPORT_SHADER_SAMPLE = 0x200,
        D3D11_FORMAT_SUPPORT_SHADER_SAMPLE_COMPARISON = 0x400,
        D3D11_FORMAT_SUPPORT_SHADER_SAMPLE_MONO_TEXT = 0x800,
        D3D11_FORMAT_SUPPORT_MIP = 0x1000,
        D3D11_FORMAT_SUPPORT_MIP_AUTOGEN = 0x2000,
        D3D11_FORMAT_SUPPORT_RENDER_TARGET = 0x4000,
        D3D11_FORMAT_SUPPORT_BLENDABLE = 0x8000,
        D3D11_FORMAT_SUPPORT_DEPTH_STENCIL = 0x10000,
        D3D11_FORMAT_SUPPORT_CPU_LOCKABLE = 0x20000,
        D3D11_FORMAT_SUPPORT_MULTISAMPLE_RESOLVE = 0x40000,
        D3D11_FORMAT_SUPPORT_DISPLAY = 0x80000,
        D3D11_FORMAT_SUPPORT_CAST_WITHIN_BIT_LAYOUT = 0x100000,
        D3D11_FORMAT_SUPPORT_MULTISAMPLE_RENDERTARGET = 0x200000,
        D3D11_FORMAT_SUPPORT_MULTISAMPLE_LOAD = 0x400000,
        D3D11_FORMAT_SUPPORT_SHADER_GATHER = 0x800000,
        D3D11_FORMAT_SUPPORT_BACK_BUFFER_CAST = 0x1000000,
        D3D11_FORMAT_SUPPORT_TYPED_UNORDERED_ACCESS_VIEW = 0x2000000,
        D3D11_FORMAT_SUPPORT_SHADER_GATHER_COMPARISON = 0x4000000,
        D3D11_FORMAT_SUPPORT_DECODER_OUTPUT = 0x8000000,
        D3D11_FORMAT_SUPPORT_VIDEO_PROCESSOR_OUTPUT = 0x10000000,
        D3D11_FORMAT_SUPPORT_VIDEO_PROCESSOR_INPUT = 0x20000000,
        D3D11_FORMAT_SUPPORT_VIDEO_ENCODER = 0x40000000
    } D3D11_FORMAT_SUPPORT;
typedef
enum D3D11_FORMAT_SUPPORT2
    {
        D3D11_FORMAT_SUPPORT2_UAV_ATOMIC_ADD = 0x1,
        D3D11_FORMAT_SUPPORT2_UAV_ATOMIC_BITWISE_OPS = 0x2,
        D3D11_FORMAT_SUPPORT2_UAV_ATOMIC_COMPARE_STORE_OR_COMPARE_EXCHANGE = 0x4,
        D3D11_FORMAT_SUPPORT2_UAV_ATOMIC_EXCHANGE = 0x8,
        D3D11_FORMAT_SUPPORT2_UAV_ATOMIC_SIGNED_MIN_OR_MAX = 0x10,
        D3D11_FORMAT_SUPPORT2_UAV_ATOMIC_UNSIGNED_MIN_OR_MAX = 0x20,
        D3D11_FORMAT_SUPPORT2_UAV_TYPED_LOAD = 0x40,
        D3D11_FORMAT_SUPPORT2_UAV_TYPED_STORE = 0x80,
        D3D11_FORMAT_SUPPORT2_OUTPUT_MERGER_LOGIC_OP = 0x100,
        D3D11_FORMAT_SUPPORT2_TILED = 0x200,
        D3D11_FORMAT_SUPPORT2_SHAREABLE = 0x400,
        D3D11_FORMAT_SUPPORT2_MULTIPLANE_OVERLAY = 0x4000
    } D3D11_FORMAT_SUPPORT2;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0022_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11Asynchronous;
    typedef struct ID3D11AsynchronousVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11Asynchronous * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11Asynchronous * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11Asynchronous * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11Asynchronous * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11Asynchronous * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11Asynchronous * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11Asynchronous * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        UINT ( STDMETHODCALLTYPE *GetDataSize )(
            ID3D11Asynchronous * This);
        END_INTERFACE
    } ID3D11AsynchronousVtbl;
    interface ID3D11Asynchronous
    {
        CONST_VTBL struct ID3D11AsynchronousVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetDataSize(This) )
typedef
enum D3D11_ASYNC_GETDATA_FLAG
    {
        D3D11_ASYNC_GETDATA_DONOTFLUSH = 0x1
    } D3D11_ASYNC_GETDATA_FLAG;
typedef
enum D3D11_QUERY
    {
        D3D11_QUERY_EVENT = 0,
        D3D11_QUERY_OCCLUSION = ( D3D11_QUERY_EVENT + 1 ) ,
        D3D11_QUERY_TIMESTAMP = ( D3D11_QUERY_OCCLUSION + 1 ) ,
        D3D11_QUERY_TIMESTAMP_DISJOINT = ( D3D11_QUERY_TIMESTAMP + 1 ) ,
        D3D11_QUERY_PIPELINE_STATISTICS = ( D3D11_QUERY_TIMESTAMP_DISJOINT + 1 ) ,
        D3D11_QUERY_OCCLUSION_PREDICATE = ( D3D11_QUERY_PIPELINE_STATISTICS + 1 ) ,
        D3D11_QUERY_SO_STATISTICS = ( D3D11_QUERY_OCCLUSION_PREDICATE + 1 ) ,
        D3D11_QUERY_SO_OVERFLOW_PREDICATE = ( D3D11_QUERY_SO_STATISTICS + 1 ) ,
        D3D11_QUERY_SO_STATISTICS_STREAM0 = ( D3D11_QUERY_SO_OVERFLOW_PREDICATE + 1 ) ,
        D3D11_QUERY_SO_OVERFLOW_PREDICATE_STREAM0 = ( D3D11_QUERY_SO_STATISTICS_STREAM0 + 1 ) ,
        D3D11_QUERY_SO_STATISTICS_STREAM1 = ( D3D11_QUERY_SO_OVERFLOW_PREDICATE_STREAM0 + 1 ) ,
        D3D11_QUERY_SO_OVERFLOW_PREDICATE_STREAM1 = ( D3D11_QUERY_SO_STATISTICS_STREAM1 + 1 ) ,
        D3D11_QUERY_SO_STATISTICS_STREAM2 = ( D3D11_QUERY_SO_OVERFLOW_PREDICATE_STREAM1 + 1 ) ,
        D3D11_QUERY_SO_OVERFLOW_PREDICATE_STREAM2 = ( D3D11_QUERY_SO_STATISTICS_STREAM2 + 1 ) ,
        D3D11_QUERY_SO_STATISTICS_STREAM3 = ( D3D11_QUERY_SO_OVERFLOW_PREDICATE_STREAM2 + 1 ) ,
        D3D11_QUERY_SO_OVERFLOW_PREDICATE_STREAM3 = ( D3D11_QUERY_SO_STATISTICS_STREAM3 + 1 )
    } D3D11_QUERY;
typedef
enum D3D11_QUERY_MISC_FLAG
    {
        D3D11_QUERY_MISC_PREDICATEHINT = 0x1
    } D3D11_QUERY_MISC_FLAG;
typedef struct D3D11_QUERY_DESC
    {
    D3D11_QUERY Query;
    UINT MiscFlags;
    } D3D11_QUERY_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0023_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11Query;
    typedef struct ID3D11QueryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11Query * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11Query * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11Query * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11Query * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11Query * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11Query * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11Query * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        UINT ( STDMETHODCALLTYPE *GetDataSize )(
            ID3D11Query * This);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11Query * This,
            _Out_ D3D11_QUERY_DESC *pDesc);
        END_INTERFACE
    } ID3D11QueryVtbl;
    interface ID3D11Query
    {
        CONST_VTBL struct ID3D11QueryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetDataSize(This) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
EXTERN_C const IID IID_ID3D11Predicate;
    typedef struct ID3D11PredicateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11Predicate * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11Predicate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11Predicate * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11Predicate * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11Predicate * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11Predicate * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11Predicate * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        UINT ( STDMETHODCALLTYPE *GetDataSize )(
            ID3D11Predicate * This);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11Predicate * This,
            _Out_ D3D11_QUERY_DESC *pDesc);
        END_INTERFACE
    } ID3D11PredicateVtbl;
    interface ID3D11Predicate
    {
        CONST_VTBL struct ID3D11PredicateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetDataSize(This) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef struct D3D11_QUERY_DATA_TIMESTAMP_DISJOINT
    {
    UINT64 Frequency;
    BOOL Disjoint;
    } D3D11_QUERY_DATA_TIMESTAMP_DISJOINT;
typedef struct D3D11_QUERY_DATA_PIPELINE_STATISTICS
    {
    UINT64 IAVertices;
    UINT64 IAPrimitives;
    UINT64 VSInvocations;
    UINT64 GSInvocations;
    UINT64 GSPrimitives;
    UINT64 CInvocations;
    UINT64 CPrimitives;
    UINT64 PSInvocations;
    UINT64 HSInvocations;
    UINT64 DSInvocations;
    UINT64 CSInvocations;
    } D3D11_QUERY_DATA_PIPELINE_STATISTICS;
typedef struct D3D11_QUERY_DATA_SO_STATISTICS
    {
    UINT64 NumPrimitivesWritten;
    UINT64 PrimitivesStorageNeeded;
    } D3D11_QUERY_DATA_SO_STATISTICS;
typedef
enum D3D11_COUNTER
    {
        D3D11_COUNTER_DEVICE_DEPENDENT_0 = 0x40000000
    } D3D11_COUNTER;
typedef
enum D3D11_COUNTER_TYPE
    {
        D3D11_COUNTER_TYPE_FLOAT32 = 0,
        D3D11_COUNTER_TYPE_UINT16 = ( D3D11_COUNTER_TYPE_FLOAT32 + 1 ) ,
        D3D11_COUNTER_TYPE_UINT32 = ( D3D11_COUNTER_TYPE_UINT16 + 1 ) ,
        D3D11_COUNTER_TYPE_UINT64 = ( D3D11_COUNTER_TYPE_UINT32 + 1 )
    } D3D11_COUNTER_TYPE;
typedef struct D3D11_COUNTER_DESC
    {
    D3D11_COUNTER Counter;
    UINT MiscFlags;
    } D3D11_COUNTER_DESC;
typedef struct D3D11_COUNTER_INFO
    {
    D3D11_COUNTER LastDeviceDependentCounter;
    UINT NumSimultaneousCounters;
    UINT8 NumDetectableParallelUnits;
    } D3D11_COUNTER_INFO;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0025_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11Counter;
    typedef struct ID3D11CounterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11Counter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11Counter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11Counter * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11Counter * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11Counter * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11Counter * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11Counter * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        UINT ( STDMETHODCALLTYPE *GetDataSize )(
            ID3D11Counter * This);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11Counter * This,
            _Out_ D3D11_COUNTER_DESC *pDesc);
        END_INTERFACE
    } ID3D11CounterVtbl;
    interface ID3D11Counter
    {
        CONST_VTBL struct ID3D11CounterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetDataSize(This) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef
enum D3D11_STANDARD_MULTISAMPLE_QUALITY_LEVELS
    {
        D3D11_STANDARD_MULTISAMPLE_PATTERN = 0xffffffff,
        D3D11_CENTER_MULTISAMPLE_PATTERN = 0xfffffffe
    } D3D11_STANDARD_MULTISAMPLE_QUALITY_LEVELS;
typedef
enum D3D11_DEVICE_CONTEXT_TYPE
    {
        D3D11_DEVICE_CONTEXT_IMMEDIATE = 0,
        D3D11_DEVICE_CONTEXT_DEFERRED = ( D3D11_DEVICE_CONTEXT_IMMEDIATE + 1 )
    } D3D11_DEVICE_CONTEXT_TYPE;
typedef struct D3D11_CLASS_INSTANCE_DESC
    {
    UINT InstanceId;
    UINT InstanceIndex;
    UINT TypeId;
    UINT ConstantBuffer;
    UINT BaseConstantBufferOffset;
    UINT BaseTexture;
    UINT BaseSampler;
    BOOL Created;
    } D3D11_CLASS_INSTANCE_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0026_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11ClassInstance;
    typedef struct ID3D11ClassInstanceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11ClassInstance * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11ClassInstance * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11ClassInstance * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11ClassInstance * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11ClassInstance * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11ClassInstance * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11ClassInstance * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetClassLinkage )(
            ID3D11ClassInstance * This,
            _Outptr_ ID3D11ClassLinkage **ppLinkage);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11ClassInstance * This,
            _Out_ D3D11_CLASS_INSTANCE_DESC *pDesc);
        void ( STDMETHODCALLTYPE *GetInstanceName )(
            ID3D11ClassInstance * This,
            _Out_writes_opt_(*pBufferLength) LPSTR pInstanceName,
            _Inout_ SIZE_T *pBufferLength);
        void ( STDMETHODCALLTYPE *GetTypeName )(
            ID3D11ClassInstance * This,
            _Out_writes_opt_(*pBufferLength) LPSTR pTypeName,
            _Inout_ SIZE_T *pBufferLength);
        END_INTERFACE
    } ID3D11ClassInstanceVtbl;
    interface ID3D11ClassInstance
    {
        CONST_VTBL struct ID3D11ClassInstanceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetClassLinkage(This,ppLinkage) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
    ( (This)->lpVtbl -> GetInstanceName(This,pInstanceName,pBufferLength) )
    ( (This)->lpVtbl -> GetTypeName(This,pTypeName,pBufferLength) )
EXTERN_C const IID IID_ID3D11ClassLinkage;
    typedef struct ID3D11ClassLinkageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11ClassLinkage * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11ClassLinkage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11ClassLinkage * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11ClassLinkage * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11ClassLinkage * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11ClassLinkage * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11ClassLinkage * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *GetClassInstance )(
            ID3D11ClassLinkage * This,
            _In_ LPCSTR pClassInstanceName,
            _In_ UINT InstanceIndex,
            _COM_Outptr_ ID3D11ClassInstance **ppInstance);
        HRESULT ( STDMETHODCALLTYPE *CreateClassInstance )(
            ID3D11ClassLinkage * This,
            _In_ LPCSTR pClassTypeName,
            _In_ UINT ConstantBufferOffset,
            _In_ UINT ConstantVectorOffset,
            _In_ UINT TextureOffset,
            _In_ UINT SamplerOffset,
            _COM_Outptr_ ID3D11ClassInstance **ppInstance);
        END_INTERFACE
    } ID3D11ClassLinkageVtbl;
    interface ID3D11ClassLinkage
    {
        CONST_VTBL struct ID3D11ClassLinkageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetClassInstance(This,pClassInstanceName,InstanceIndex,ppInstance) )
    ( (This)->lpVtbl -> CreateClassInstance(This,pClassTypeName,ConstantBufferOffset,ConstantVectorOffset,TextureOffset,SamplerOffset,ppInstance) )
EXTERN_C const IID IID_ID3D11CommandList;
    typedef struct ID3D11CommandListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11CommandList * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11CommandList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11CommandList * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11CommandList * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11CommandList * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11CommandList * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11CommandList * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        UINT ( STDMETHODCALLTYPE *GetContextFlags )(
            ID3D11CommandList * This);
        END_INTERFACE
    } ID3D11CommandListVtbl;
    interface ID3D11CommandList
    {
        CONST_VTBL struct ID3D11CommandListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetContextFlags(This) )
typedef
enum D3D11_FEATURE
    {
        D3D11_FEATURE_THREADING = 0,
        D3D11_FEATURE_DOUBLES = ( D3D11_FEATURE_THREADING + 1 ) ,
        D3D11_FEATURE_FORMAT_SUPPORT = ( D3D11_FEATURE_DOUBLES + 1 ) ,
        D3D11_FEATURE_FORMAT_SUPPORT2 = ( D3D11_FEATURE_FORMAT_SUPPORT + 1 ) ,
        D3D11_FEATURE_D3D10_X_HARDWARE_OPTIONS = ( D3D11_FEATURE_FORMAT_SUPPORT2 + 1 ) ,
        D3D11_FEATURE_D3D11_OPTIONS = ( D3D11_FEATURE_D3D10_X_HARDWARE_OPTIONS + 1 ) ,
        D3D11_FEATURE_ARCHITECTURE_INFO = ( D3D11_FEATURE_D3D11_OPTIONS + 1 ) ,
        D3D11_FEATURE_D3D9_OPTIONS = ( D3D11_FEATURE_ARCHITECTURE_INFO + 1 ) ,
        D3D11_FEATURE_SHADER_MIN_PRECISION_SUPPORT = ( D3D11_FEATURE_D3D9_OPTIONS + 1 ) ,
        D3D11_FEATURE_D3D9_SHADOW_SUPPORT = ( D3D11_FEATURE_SHADER_MIN_PRECISION_SUPPORT + 1 ) ,
        D3D11_FEATURE_D3D11_OPTIONS1 = ( D3D11_FEATURE_D3D9_SHADOW_SUPPORT + 1 ) ,
        D3D11_FEATURE_D3D9_SIMPLE_INSTANCING_SUPPORT = ( D3D11_FEATURE_D3D11_OPTIONS1 + 1 ) ,
        D3D11_FEATURE_MARKER_SUPPORT = ( D3D11_FEATURE_D3D9_SIMPLE_INSTANCING_SUPPORT + 1 ) ,
        D3D11_FEATURE_D3D9_OPTIONS1 = ( D3D11_FEATURE_MARKER_SUPPORT + 1 ) ,
        D3D11_FEATURE_D3D11_OPTIONS2 = ( D3D11_FEATURE_D3D9_OPTIONS1 + 1 ) ,
        D3D11_FEATURE_D3D11_OPTIONS3 = ( D3D11_FEATURE_D3D11_OPTIONS2 + 1 ) ,
        D3D11_FEATURE_GPU_VIRTUAL_ADDRESS_SUPPORT = ( D3D11_FEATURE_D3D11_OPTIONS3 + 1 ) ,
        D3D11_FEATURE_D3D11_OPTIONS4 = ( D3D11_FEATURE_GPU_VIRTUAL_ADDRESS_SUPPORT + 1 ) ,
        D3D11_FEATURE_SHADER_CACHE = ( D3D11_FEATURE_D3D11_OPTIONS4 + 1 ) ,
        D3D11_FEATURE_D3D11_OPTIONS5 = ( D3D11_FEATURE_SHADER_CACHE + 1 )
    } D3D11_FEATURE;
typedef struct D3D11_FEATURE_DATA_THREADING
    {
    BOOL DriverConcurrentCreates;
    BOOL DriverCommandLists;
    } D3D11_FEATURE_DATA_THREADING;
typedef struct D3D11_FEATURE_DATA_DOUBLES
    {
    BOOL DoublePrecisionFloatShaderOps;
    } D3D11_FEATURE_DATA_DOUBLES;
typedef struct D3D11_FEATURE_DATA_FORMAT_SUPPORT
    {
    DXGI_FORMAT InFormat;
    UINT OutFormatSupport;
    } D3D11_FEATURE_DATA_FORMAT_SUPPORT;
typedef struct D3D11_FEATURE_DATA_FORMAT_SUPPORT2
    {
    DXGI_FORMAT InFormat;
    UINT OutFormatSupport2;
    } D3D11_FEATURE_DATA_FORMAT_SUPPORT2;
typedef struct D3D11_FEATURE_DATA_D3D10_X_HARDWARE_OPTIONS
    {
    BOOL ComputeShaders_Plus_RawAndStructuredBuffers_Via_Shader_4_x;
    } D3D11_FEATURE_DATA_D3D10_X_HARDWARE_OPTIONS;
typedef struct D3D11_FEATURE_DATA_D3D11_OPTIONS
    {
    BOOL OutputMergerLogicOp;
    BOOL UAVOnlyRenderingForcedSampleCount;
    BOOL DiscardAPIsSeenByDriver;
    BOOL FlagsForUpdateAndCopySeenByDriver;
    BOOL ClearView;
    BOOL CopyWithOverlap;
    BOOL ConstantBufferPartialUpdate;
    BOOL ConstantBufferOffsetting;
    BOOL MapNoOverwriteOnDynamicConstantBuffer;
    BOOL MapNoOverwriteOnDynamicBufferSRV;
    BOOL MultisampleRTVWithForcedSampleCountOne;
    BOOL SAD4ShaderInstructions;
    BOOL ExtendedDoublesShaderInstructions;
    BOOL ExtendedResourceSharing;
    } D3D11_FEATURE_DATA_D3D11_OPTIONS;
typedef struct D3D11_FEATURE_DATA_ARCHITECTURE_INFO
    {
    BOOL TileBasedDeferredRenderer;
    } D3D11_FEATURE_DATA_ARCHITECTURE_INFO;
typedef struct D3D11_FEATURE_DATA_D3D9_OPTIONS
    {
    BOOL FullNonPow2TextureSupport;
    } D3D11_FEATURE_DATA_D3D9_OPTIONS;
typedef struct D3D11_FEATURE_DATA_D3D9_SHADOW_SUPPORT
    {
    BOOL SupportsDepthAsTextureWithLessEqualComparisonFilter;
    } D3D11_FEATURE_DATA_D3D9_SHADOW_SUPPORT;
typedef
enum D3D11_SHADER_MIN_PRECISION_SUPPORT
    {
        D3D11_SHADER_MIN_PRECISION_10_BIT = 0x1,
        D3D11_SHADER_MIN_PRECISION_16_BIT = 0x2
    } D3D11_SHADER_MIN_PRECISION_SUPPORT;
typedef struct D3D11_FEATURE_DATA_SHADER_MIN_PRECISION_SUPPORT
    {
    UINT PixelShaderMinPrecision;
    UINT AllOtherShaderStagesMinPrecision;
    } D3D11_FEATURE_DATA_SHADER_MIN_PRECISION_SUPPORT;
typedef
enum D3D11_TILED_RESOURCES_TIER
    {
        D3D11_TILED_RESOURCES_NOT_SUPPORTED = 0,
        D3D11_TILED_RESOURCES_TIER_1 = 1,
        D3D11_TILED_RESOURCES_TIER_2 = 2,
        D3D11_TILED_RESOURCES_TIER_3 = 3
    } D3D11_TILED_RESOURCES_TIER;
typedef struct D3D11_FEATURE_DATA_D3D11_OPTIONS1
    {
    D3D11_TILED_RESOURCES_TIER TiledResourcesTier;
    BOOL MinMaxFiltering;
    BOOL ClearViewAlsoSupportsDepthOnlyFormats;
    BOOL MapOnDefaultBuffers;
    } D3D11_FEATURE_DATA_D3D11_OPTIONS1;
typedef struct D3D11_FEATURE_DATA_D3D9_SIMPLE_INSTANCING_SUPPORT
    {
    BOOL SimpleInstancingSupported;
    } D3D11_FEATURE_DATA_D3D9_SIMPLE_INSTANCING_SUPPORT;
typedef struct D3D11_FEATURE_DATA_MARKER_SUPPORT
    {
    BOOL Profile;
    } D3D11_FEATURE_DATA_MARKER_SUPPORT;
typedef struct D3D11_FEATURE_DATA_D3D9_OPTIONS1
    {
    BOOL FullNonPow2TextureSupported;
    BOOL DepthAsTextureWithLessEqualComparisonFilterSupported;
    BOOL SimpleInstancingSupported;
    BOOL TextureCubeFaceRenderTargetWithNonCubeDepthStencilSupported;
    } D3D11_FEATURE_DATA_D3D9_OPTIONS1;
typedef
enum D3D11_CONSERVATIVE_RASTERIZATION_TIER
    {
        D3D11_CONSERVATIVE_RASTERIZATION_NOT_SUPPORTED = 0,
        D3D11_CONSERVATIVE_RASTERIZATION_TIER_1 = 1,
        D3D11_CONSERVATIVE_RASTERIZATION_TIER_2 = 2,
        D3D11_CONSERVATIVE_RASTERIZATION_TIER_3 = 3
    } D3D11_CONSERVATIVE_RASTERIZATION_TIER;
typedef struct D3D11_FEATURE_DATA_D3D11_OPTIONS2
    {
    BOOL PSSpecifiedStencilRefSupported;
    BOOL TypedUAVLoadAdditionalFormats;
    BOOL ROVsSupported;
    D3D11_CONSERVATIVE_RASTERIZATION_TIER ConservativeRasterizationTier;
    D3D11_TILED_RESOURCES_TIER TiledResourcesTier;
    BOOL MapOnDefaultTextures;
    BOOL StandardSwizzle;
    BOOL UnifiedMemoryArchitecture;
    } D3D11_FEATURE_DATA_D3D11_OPTIONS2;
typedef struct D3D11_FEATURE_DATA_D3D11_OPTIONS3
    {
    BOOL VPAndRTArrayIndexFromAnyShaderFeedingRasterizer;
    } D3D11_FEATURE_DATA_D3D11_OPTIONS3;
typedef struct D3D11_FEATURE_DATA_GPU_VIRTUAL_ADDRESS_SUPPORT
    {
    UINT MaxGPUVirtualAddressBitsPerResource;
    UINT MaxGPUVirtualAddressBitsPerProcess;
    } D3D11_FEATURE_DATA_GPU_VIRTUAL_ADDRESS_SUPPORT;
typedef
enum D3D11_SHADER_CACHE_SUPPORT_FLAGS
    {
        D3D11_SHADER_CACHE_SUPPORT_NONE = 0,
        D3D11_SHADER_CACHE_SUPPORT_AUTOMATIC_INPROC_CACHE = 0x1,
        D3D11_SHADER_CACHE_SUPPORT_AUTOMATIC_DISK_CACHE = 0x2
    } D3D11_SHADER_CACHE_SUPPORT_FLAGS;
typedef struct D3D11_FEATURE_DATA_SHADER_CACHE
    {
    UINT SupportFlags;
    } D3D11_FEATURE_DATA_SHADER_CACHE;
typedef
enum D3D11_SHARED_RESOURCE_TIER
    {
        D3D11_SHARED_RESOURCE_TIER_0 = 0,
        D3D11_SHARED_RESOURCE_TIER_1 = ( D3D11_SHARED_RESOURCE_TIER_0 + 1 ) ,
        D3D11_SHARED_RESOURCE_TIER_2 = ( D3D11_SHARED_RESOURCE_TIER_1 + 1 )
    } D3D11_SHARED_RESOURCE_TIER;
typedef struct D3D11_FEATURE_DATA_D3D11_OPTIONS5
    {
    D3D11_SHARED_RESOURCE_TIER SharedResourceTier;
    } D3D11_FEATURE_DATA_D3D11_OPTIONS5;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0029_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11DeviceContext;
    typedef struct ID3D11DeviceContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11DeviceContext * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11DeviceContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11DeviceContext * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11DeviceContext * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11DeviceContext * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11DeviceContext * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11DeviceContext * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *VSSetConstantBuffers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *PSSetShaderResources )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *PSSetShader )(
            ID3D11DeviceContext * This,
            _In_opt_ ID3D11PixelShader *pPixelShader,
            _In_reads_opt_(NumClassInstances) ID3D11ClassInstance *const *ppClassInstances,
            UINT NumClassInstances);
        void ( STDMETHODCALLTYPE *PSSetSamplers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D11SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *VSSetShader )(
            ID3D11DeviceContext * This,
            _In_opt_ ID3D11VertexShader *pVertexShader,
            _In_reads_opt_(NumClassInstances) ID3D11ClassInstance *const *ppClassInstances,
            UINT NumClassInstances);
        void ( STDMETHODCALLTYPE *DrawIndexed )(
            ID3D11DeviceContext * This,
            _In_ UINT IndexCount,
            _In_ UINT StartIndexLocation,
            _In_ INT BaseVertexLocation);
        void ( STDMETHODCALLTYPE *Draw )(
            ID3D11DeviceContext * This,
            _In_ UINT VertexCount,
            _In_ UINT StartVertexLocation);
        HRESULT ( STDMETHODCALLTYPE *Map )(
            ID3D11DeviceContext * This,
            _In_ ID3D11Resource *pResource,
            _In_ UINT Subresource,
            _In_ D3D11_MAP MapType,
            _In_ UINT MapFlags,
            _Out_opt_ D3D11_MAPPED_SUBRESOURCE *pMappedResource);
        void ( STDMETHODCALLTYPE *Unmap )(
            ID3D11DeviceContext * This,
            _In_ ID3D11Resource *pResource,
            _In_ UINT Subresource);
        void ( STDMETHODCALLTYPE *PSSetConstantBuffers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *IASetInputLayout )(
            ID3D11DeviceContext * This,
            _In_opt_ ID3D11InputLayout *pInputLayout);
        void ( STDMETHODCALLTYPE *IASetVertexBuffers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppVertexBuffers,
            _In_reads_opt_(NumBuffers) const UINT *pStrides,
            _In_reads_opt_(NumBuffers) const UINT *pOffsets);
        void ( STDMETHODCALLTYPE *IASetIndexBuffer )(
            ID3D11DeviceContext * This,
            _In_opt_ ID3D11Buffer *pIndexBuffer,
            _In_ DXGI_FORMAT Format,
            _In_ UINT Offset);
        void ( STDMETHODCALLTYPE *DrawIndexedInstanced )(
            ID3D11DeviceContext * This,
            _In_ UINT IndexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartIndexLocation,
            _In_ INT BaseVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *DrawInstanced )(
            ID3D11DeviceContext * This,
            _In_ UINT VertexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *GSSetConstantBuffers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *GSSetShader )(
            ID3D11DeviceContext * This,
            _In_opt_ ID3D11GeometryShader *pShader,
            _In_reads_opt_(NumClassInstances) ID3D11ClassInstance *const *ppClassInstances,
            UINT NumClassInstances);
        void ( STDMETHODCALLTYPE *IASetPrimitiveTopology )(
            ID3D11DeviceContext * This,
            _In_ D3D11_PRIMITIVE_TOPOLOGY Topology);
        void ( STDMETHODCALLTYPE *VSSetShaderResources )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *VSSetSamplers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D11SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *Begin )(
            ID3D11DeviceContext * This,
            _In_ ID3D11Asynchronous *pAsync);
        void ( STDMETHODCALLTYPE *End )(
            ID3D11DeviceContext * This,
            _In_ ID3D11Asynchronous *pAsync);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            ID3D11DeviceContext * This,
            _In_ ID3D11Asynchronous *pAsync,
            _Out_writes_bytes_opt_( DataSize ) void *pData,
            _In_ UINT DataSize,
            _In_ UINT GetDataFlags);
        void ( STDMETHODCALLTYPE *SetPredication )(
            ID3D11DeviceContext * This,
            _In_opt_ ID3D11Predicate *pPredicate,
            _In_ BOOL PredicateValue);
        void ( STDMETHODCALLTYPE *GSSetShaderResources )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *GSSetSamplers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D11SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *OMSetRenderTargets )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11RenderTargetView *const *ppRenderTargetViews,
            _In_opt_ ID3D11DepthStencilView *pDepthStencilView);
        void ( STDMETHODCALLTYPE *OMSetRenderTargetsAndUnorderedAccessViews )(
            ID3D11DeviceContext * This,
            _In_ UINT NumRTVs,
            _In_reads_opt_(NumRTVs) ID3D11RenderTargetView *const *ppRenderTargetViews,
            _In_opt_ ID3D11DepthStencilView *pDepthStencilView,
            _In_range_( 0, D3D11_1_UAV_SLOT_COUNT - 1 ) UINT UAVStartSlot,
            _In_ UINT NumUAVs,
            _In_reads_opt_(NumUAVs) ID3D11UnorderedAccessView *const *ppUnorderedAccessViews,
            _In_reads_opt_(NumUAVs) const UINT *pUAVInitialCounts);
        void ( STDMETHODCALLTYPE *OMSetBlendState )(
            ID3D11DeviceContext * This,
            _In_opt_ ID3D11BlendState *pBlendState,
            _In_opt_ const FLOAT BlendFactor[ 4 ],
            _In_ UINT SampleMask);
        void ( STDMETHODCALLTYPE *OMSetDepthStencilState )(
            ID3D11DeviceContext * This,
            _In_opt_ ID3D11DepthStencilState *pDepthStencilState,
            _In_ UINT StencilRef);
        void ( STDMETHODCALLTYPE *SOSetTargets )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_SO_BUFFER_SLOT_COUNT) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppSOTargets,
            _In_reads_opt_(NumBuffers) const UINT *pOffsets);
        void ( STDMETHODCALLTYPE *DrawAuto )(
            ID3D11DeviceContext * This);
        void ( STDMETHODCALLTYPE *DrawIndexedInstancedIndirect )(
            ID3D11DeviceContext * This,
            _In_ ID3D11Buffer *pBufferForArgs,
            _In_ UINT AlignedByteOffsetForArgs);
        void ( STDMETHODCALLTYPE *DrawInstancedIndirect )(
            ID3D11DeviceContext * This,
            _In_ ID3D11Buffer *pBufferForArgs,
            _In_ UINT AlignedByteOffsetForArgs);
        void ( STDMETHODCALLTYPE *Dispatch )(
            ID3D11DeviceContext * This,
            _In_ UINT ThreadGroupCountX,
            _In_ UINT ThreadGroupCountY,
            _In_ UINT ThreadGroupCountZ);
        void ( STDMETHODCALLTYPE *DispatchIndirect )(
            ID3D11DeviceContext * This,
            _In_ ID3D11Buffer *pBufferForArgs,
            _In_ UINT AlignedByteOffsetForArgs);
        void ( STDMETHODCALLTYPE *RSSetState )(
            ID3D11DeviceContext * This,
            _In_opt_ ID3D11RasterizerState *pRasterizerState);
        void ( STDMETHODCALLTYPE *RSSetViewports )(
            ID3D11DeviceContext * This,
            _In_range_(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumViewports,
            _In_reads_opt_(NumViewports) const D3D11_VIEWPORT *pViewports);
        void ( STDMETHODCALLTYPE *RSSetScissorRects )(
            ID3D11DeviceContext * This,
            _In_range_(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumRects,
            _In_reads_opt_(NumRects) const D3D11_RECT *pRects);
        void ( STDMETHODCALLTYPE *CopySubresourceRegion )(
            ID3D11DeviceContext * This,
            _In_ ID3D11Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ UINT DstX,
            _In_ UINT DstY,
            _In_ UINT DstZ,
            _In_ ID3D11Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_opt_ const D3D11_BOX *pSrcBox);
        void ( STDMETHODCALLTYPE *CopyResource )(
            ID3D11DeviceContext * This,
            _In_ ID3D11Resource *pDstResource,
            _In_ ID3D11Resource *pSrcResource);
        void ( STDMETHODCALLTYPE *UpdateSubresource )(
            ID3D11DeviceContext * This,
            _In_ ID3D11Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_opt_ const D3D11_BOX *pDstBox,
            _In_ const void *pSrcData,
            _In_ UINT SrcRowPitch,
            _In_ UINT SrcDepthPitch);
        void ( STDMETHODCALLTYPE *CopyStructureCount )(
            ID3D11DeviceContext * This,
            _In_ ID3D11Buffer *pDstBuffer,
            _In_ UINT DstAlignedByteOffset,
            _In_ ID3D11UnorderedAccessView *pSrcView);
        void ( STDMETHODCALLTYPE *ClearRenderTargetView )(
            ID3D11DeviceContext * This,
            _In_ ID3D11RenderTargetView *pRenderTargetView,
            _In_ const FLOAT ColorRGBA[ 4 ]);
        void ( STDMETHODCALLTYPE *ClearUnorderedAccessViewUint )(
            ID3D11DeviceContext * This,
            _In_ ID3D11UnorderedAccessView *pUnorderedAccessView,
            _In_ const UINT Values[ 4 ]);
        void ( STDMETHODCALLTYPE *ClearUnorderedAccessViewFloat )(
            ID3D11DeviceContext * This,
            _In_ ID3D11UnorderedAccessView *pUnorderedAccessView,
            _In_ const FLOAT Values[ 4 ]);
        void ( STDMETHODCALLTYPE *ClearDepthStencilView )(
            ID3D11DeviceContext * This,
            _In_ ID3D11DepthStencilView *pDepthStencilView,
            _In_ UINT ClearFlags,
            _In_ FLOAT Depth,
            _In_ UINT8 Stencil);
        void ( STDMETHODCALLTYPE *GenerateMips )(
            ID3D11DeviceContext * This,
            _In_ ID3D11ShaderResourceView *pShaderResourceView);
        void ( STDMETHODCALLTYPE *SetResourceMinLOD )(
            ID3D11DeviceContext * This,
            _In_ ID3D11Resource *pResource,
            FLOAT MinLOD);
        FLOAT ( STDMETHODCALLTYPE *GetResourceMinLOD )(
            ID3D11DeviceContext * This,
            _In_ ID3D11Resource *pResource);
        void ( STDMETHODCALLTYPE *ResolveSubresource )(
            ID3D11DeviceContext * This,
            _In_ ID3D11Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ ID3D11Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_ DXGI_FORMAT Format);
        void ( STDMETHODCALLTYPE *ExecuteCommandList )(
            ID3D11DeviceContext * This,
            _In_ ID3D11CommandList *pCommandList,
            BOOL RestoreContextState);
        void ( STDMETHODCALLTYPE *HSSetShaderResources )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *HSSetShader )(
            ID3D11DeviceContext * This,
            _In_opt_ ID3D11HullShader *pHullShader,
            _In_reads_opt_(NumClassInstances) ID3D11ClassInstance *const *ppClassInstances,
            UINT NumClassInstances);
        void ( STDMETHODCALLTYPE *HSSetSamplers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D11SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *HSSetConstantBuffers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *DSSetShaderResources )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *DSSetShader )(
            ID3D11DeviceContext * This,
            _In_opt_ ID3D11DomainShader *pDomainShader,
            _In_reads_opt_(NumClassInstances) ID3D11ClassInstance *const *ppClassInstances,
            UINT NumClassInstances);
        void ( STDMETHODCALLTYPE *DSSetSamplers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D11SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *DSSetConstantBuffers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *CSSetShaderResources )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *CSSetUnorderedAccessViews )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_1_UAV_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_1_UAV_SLOT_COUNT - StartSlot ) UINT NumUAVs,
            _In_reads_opt_(NumUAVs) ID3D11UnorderedAccessView *const *ppUnorderedAccessViews,
            _In_reads_opt_(NumUAVs) const UINT *pUAVInitialCounts);
        void ( STDMETHODCALLTYPE *CSSetShader )(
            ID3D11DeviceContext * This,
            _In_opt_ ID3D11ComputeShader *pComputeShader,
            _In_reads_opt_(NumClassInstances) ID3D11ClassInstance *const *ppClassInstances,
            UINT NumClassInstances);
        void ( STDMETHODCALLTYPE *CSSetSamplers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D11SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *CSSetConstantBuffers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *VSGetConstantBuffers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *PSGetShaderResources )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *PSGetShader )(
            ID3D11DeviceContext * This,
            _Outptr_result_maybenull_ ID3D11PixelShader **ppPixelShader,
            _Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance **ppClassInstances,
            _Inout_opt_ UINT *pNumClassInstances);
        void ( STDMETHODCALLTYPE *PSGetSamplers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D11SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *VSGetShader )(
            ID3D11DeviceContext * This,
            _Outptr_result_maybenull_ ID3D11VertexShader **ppVertexShader,
            _Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance **ppClassInstances,
            _Inout_opt_ UINT *pNumClassInstances);
        void ( STDMETHODCALLTYPE *PSGetConstantBuffers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *IAGetInputLayout )(
            ID3D11DeviceContext * This,
            _Outptr_result_maybenull_ ID3D11InputLayout **ppInputLayout);
        void ( STDMETHODCALLTYPE *IAGetVertexBuffers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppVertexBuffers,
            _Out_writes_opt_(NumBuffers) UINT *pStrides,
            _Out_writes_opt_(NumBuffers) UINT *pOffsets);
        void ( STDMETHODCALLTYPE *IAGetIndexBuffer )(
            ID3D11DeviceContext * This,
            _Outptr_opt_result_maybenull_ ID3D11Buffer **pIndexBuffer,
            _Out_opt_ DXGI_FORMAT *Format,
            _Out_opt_ UINT *Offset);
        void ( STDMETHODCALLTYPE *GSGetConstantBuffers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *GSGetShader )(
            ID3D11DeviceContext * This,
            _Outptr_result_maybenull_ ID3D11GeometryShader **ppGeometryShader,
            _Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance **ppClassInstances,
            _Inout_opt_ UINT *pNumClassInstances);
        void ( STDMETHODCALLTYPE *IAGetPrimitiveTopology )(
            ID3D11DeviceContext * This,
            _Out_ D3D11_PRIMITIVE_TOPOLOGY *pTopology);
        void ( STDMETHODCALLTYPE *VSGetShaderResources )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *VSGetSamplers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D11SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *GetPredication )(
            ID3D11DeviceContext * This,
            _Outptr_opt_result_maybenull_ ID3D11Predicate **ppPredicate,
            _Out_opt_ BOOL *pPredicateValue);
        void ( STDMETHODCALLTYPE *GSGetShaderResources )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *GSGetSamplers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D11SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *OMGetRenderTargets )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11RenderTargetView **ppRenderTargetViews,
            _Outptr_opt_result_maybenull_ ID3D11DepthStencilView **ppDepthStencilView);
        void ( STDMETHODCALLTYPE *OMGetRenderTargetsAndUnorderedAccessViews )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT ) UINT NumRTVs,
            _Out_writes_opt_(NumRTVs) ID3D11RenderTargetView **ppRenderTargetViews,
            _Outptr_opt_result_maybenull_ ID3D11DepthStencilView **ppDepthStencilView,
            _In_range_( 0, D3D11_PS_CS_UAV_REGISTER_COUNT - 1 ) UINT UAVStartSlot,
            _In_range_( 0, D3D11_PS_CS_UAV_REGISTER_COUNT - UAVStartSlot ) UINT NumUAVs,
            _Out_writes_opt_(NumUAVs) ID3D11UnorderedAccessView **ppUnorderedAccessViews);
        void ( STDMETHODCALLTYPE *OMGetBlendState )(
            ID3D11DeviceContext * This,
            _Outptr_opt_result_maybenull_ ID3D11BlendState **ppBlendState,
            _Out_opt_ FLOAT BlendFactor[ 4 ],
            _Out_opt_ UINT *pSampleMask);
        void ( STDMETHODCALLTYPE *OMGetDepthStencilState )(
            ID3D11DeviceContext * This,
            _Outptr_opt_result_maybenull_ ID3D11DepthStencilState **ppDepthStencilState,
            _Out_opt_ UINT *pStencilRef);
        void ( STDMETHODCALLTYPE *SOGetTargets )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_SO_BUFFER_SLOT_COUNT ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppSOTargets);
        void ( STDMETHODCALLTYPE *RSGetState )(
            ID3D11DeviceContext * This,
            _Outptr_result_maybenull_ ID3D11RasterizerState **ppRasterizerState);
        void ( STDMETHODCALLTYPE *RSGetViewports )(
            ID3D11DeviceContext * This,
            _Inout_ UINT *pNumViewports,
            _Out_writes_opt_(*pNumViewports) D3D11_VIEWPORT *pViewports);
        void ( STDMETHODCALLTYPE *RSGetScissorRects )(
            ID3D11DeviceContext * This,
            _Inout_ UINT *pNumRects,
            _Out_writes_opt_(*pNumRects) D3D11_RECT *pRects);
        void ( STDMETHODCALLTYPE *HSGetShaderResources )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *HSGetShader )(
            ID3D11DeviceContext * This,
            _Outptr_result_maybenull_ ID3D11HullShader **ppHullShader,
            _Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance **ppClassInstances,
            _Inout_opt_ UINT *pNumClassInstances);
        void ( STDMETHODCALLTYPE *HSGetSamplers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D11SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *HSGetConstantBuffers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *DSGetShaderResources )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *DSGetShader )(
            ID3D11DeviceContext * This,
            _Outptr_result_maybenull_ ID3D11DomainShader **ppDomainShader,
            _Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance **ppClassInstances,
            _Inout_opt_ UINT *pNumClassInstances);
        void ( STDMETHODCALLTYPE *DSGetSamplers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D11SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *DSGetConstantBuffers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *CSGetShaderResources )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *CSGetUnorderedAccessViews )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_1_UAV_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_1_UAV_SLOT_COUNT - StartSlot ) UINT NumUAVs,
            _Out_writes_opt_(NumUAVs) ID3D11UnorderedAccessView **ppUnorderedAccessViews);
        void ( STDMETHODCALLTYPE *CSGetShader )(
            ID3D11DeviceContext * This,
            _Outptr_result_maybenull_ ID3D11ComputeShader **ppComputeShader,
            _Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance **ppClassInstances,
            _Inout_opt_ UINT *pNumClassInstances);
        void ( STDMETHODCALLTYPE *CSGetSamplers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D11SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *CSGetConstantBuffers )(
            ID3D11DeviceContext * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *ClearState )(
            ID3D11DeviceContext * This);
        void ( STDMETHODCALLTYPE *Flush )(
            ID3D11DeviceContext * This);
        D3D11_DEVICE_CONTEXT_TYPE ( STDMETHODCALLTYPE *GetType )(
            ID3D11DeviceContext * This);
        UINT ( STDMETHODCALLTYPE *GetContextFlags )(
            ID3D11DeviceContext * This);
        HRESULT ( STDMETHODCALLTYPE *FinishCommandList )(
            ID3D11DeviceContext * This,
            BOOL RestoreDeferredContextState,
            _COM_Outptr_opt_ ID3D11CommandList **ppCommandList);
        END_INTERFACE
    } ID3D11DeviceContextVtbl;
    interface ID3D11DeviceContext
    {
        CONST_VTBL struct ID3D11DeviceContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> VSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
    ( (This)->lpVtbl -> PSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
    ( (This)->lpVtbl -> PSSetShader(This,pPixelShader,ppClassInstances,NumClassInstances) )
    ( (This)->lpVtbl -> PSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
    ( (This)->lpVtbl -> VSSetShader(This,pVertexShader,ppClassInstances,NumClassInstances) )
    ( (This)->lpVtbl -> DrawIndexed(This,IndexCount,StartIndexLocation,BaseVertexLocation) )
    ( (This)->lpVtbl -> Draw(This,VertexCount,StartVertexLocation) )
    ( (This)->lpVtbl -> Map(This,pResource,Subresource,MapType,MapFlags,pMappedResource) )
    ( (This)->lpVtbl -> Unmap(This,pResource,Subresource) )
    ( (This)->lpVtbl -> PSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
    ( (This)->lpVtbl -> IASetInputLayout(This,pInputLayout) )
    ( (This)->lpVtbl -> IASetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) )
    ( (This)->lpVtbl -> IASetIndexBuffer(This,pIndexBuffer,Format,Offset) )
    ( (This)->lpVtbl -> DrawIndexedInstanced(This,IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation) )
    ( (This)->lpVtbl -> DrawInstanced(This,VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation) )
    ( (This)->lpVtbl -> GSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
    ( (This)->lpVtbl -> GSSetShader(This,pShader,ppClassInstances,NumClassInstances) )
    ( (This)->lpVtbl -> IASetPrimitiveTopology(This,Topology) )
    ( (This)->lpVtbl -> VSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
    ( (This)->lpVtbl -> VSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
    ( (This)->lpVtbl -> Begin(This,pAsync) )
    ( (This)->lpVtbl -> End(This,pAsync) )
    ( (This)->lpVtbl -> GetData(This,pAsync,pData,DataSize,GetDataFlags) )
    ( (This)->lpVtbl -> SetPredication(This,pPredicate,PredicateValue) )
    ( (This)->lpVtbl -> GSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
    ( (This)->lpVtbl -> GSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
    ( (This)->lpVtbl -> OMSetRenderTargets(This,NumViews,ppRenderTargetViews,pDepthStencilView) )
    ( (This)->lpVtbl -> OMSetRenderTargetsAndUnorderedAccessViews(This,NumRTVs,ppRenderTargetViews,pDepthStencilView,UAVStartSlot,NumUAVs,ppUnorderedAccessViews,pUAVInitialCounts) )
    ( (This)->lpVtbl -> OMSetBlendState(This,pBlendState,BlendFactor,SampleMask) )
    ( (This)->lpVtbl -> OMSetDepthStencilState(This,pDepthStencilState,StencilRef) )
    ( (This)->lpVtbl -> SOSetTargets(This,NumBuffers,ppSOTargets,pOffsets) )
    ( (This)->lpVtbl -> DrawAuto(This) )
    ( (This)->lpVtbl -> DrawIndexedInstancedIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs) )
    ( (This)->lpVtbl -> DrawInstancedIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs) )
    ( (This)->lpVtbl -> Dispatch(This,ThreadGroupCountX,ThreadGroupCountY,ThreadGroupCountZ) )
    ( (This)->lpVtbl -> DispatchIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs) )
    ( (This)->lpVtbl -> RSSetState(This,pRasterizerState) )
    ( (This)->lpVtbl -> RSSetViewports(This,NumViewports,pViewports) )
    ( (This)->lpVtbl -> RSSetScissorRects(This,NumRects,pRects) )
    ( (This)->lpVtbl -> CopySubresourceRegion(This,pDstResource,DstSubresource,DstX,DstY,DstZ,pSrcResource,SrcSubresource,pSrcBox) )
    ( (This)->lpVtbl -> CopyResource(This,pDstResource,pSrcResource) )
    ( (This)->lpVtbl -> UpdateSubresource(This,pDstResource,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch) )
    ( (This)->lpVtbl -> CopyStructureCount(This,pDstBuffer,DstAlignedByteOffset,pSrcView) )
    ( (This)->lpVtbl -> ClearRenderTargetView(This,pRenderTargetView,ColorRGBA) )
    ( (This)->lpVtbl -> ClearUnorderedAccessViewUint(This,pUnorderedAccessView,Values) )
    ( (This)->lpVtbl -> ClearUnorderedAccessViewFloat(This,pUnorderedAccessView,Values) )
    ( (This)->lpVtbl -> ClearDepthStencilView(This,pDepthStencilView,ClearFlags,Depth,Stencil) )
    ( (This)->lpVtbl -> GenerateMips(This,pShaderResourceView) )
    ( (This)->lpVtbl -> SetResourceMinLOD(This,pResource,MinLOD) )
    ( (This)->lpVtbl -> GetResourceMinLOD(This,pResource) )
    ( (This)->lpVtbl -> ResolveSubresource(This,pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format) )
    ( (This)->lpVtbl -> ExecuteCommandList(This,pCommandList,RestoreContextState) )
    ( (This)->lpVtbl -> HSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
    ( (This)->lpVtbl -> HSSetShader(This,pHullShader,ppClassInstances,NumClassInstances) )
    ( (This)->lpVtbl -> HSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
    ( (This)->lpVtbl -> HSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
    ( (This)->lpVtbl -> DSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
    ( (This)->lpVtbl -> DSSetShader(This,pDomainShader,ppClassInstances,NumClassInstances) )
    ( (This)->lpVtbl -> DSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
    ( (This)->lpVtbl -> DSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
    ( (This)->lpVtbl -> CSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
    ( (This)->lpVtbl -> CSSetUnorderedAccessViews(This,StartSlot,NumUAVs,ppUnorderedAccessViews,pUAVInitialCounts) )
    ( (This)->lpVtbl -> CSSetShader(This,pComputeShader,ppClassInstances,NumClassInstances) )
    ( (This)->lpVtbl -> CSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
    ( (This)->lpVtbl -> CSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
    ( (This)->lpVtbl -> VSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
    ( (This)->lpVtbl -> PSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
    ( (This)->lpVtbl -> PSGetShader(This,ppPixelShader,ppClassInstances,pNumClassInstances) )
    ( (This)->lpVtbl -> PSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
    ( (This)->lpVtbl -> VSGetShader(This,ppVertexShader,ppClassInstances,pNumClassInstances) )
    ( (This)->lpVtbl -> PSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
    ( (This)->lpVtbl -> IAGetInputLayout(This,ppInputLayout) )
    ( (This)->lpVtbl -> IAGetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) )
    ( (This)->lpVtbl -> IAGetIndexBuffer(This,pIndexBuffer,Format,Offset) )
    ( (This)->lpVtbl -> GSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
    ( (This)->lpVtbl -> GSGetShader(This,ppGeometryShader,ppClassInstances,pNumClassInstances) )
    ( (This)->lpVtbl -> IAGetPrimitiveTopology(This,pTopology) )
    ( (This)->lpVtbl -> VSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
    ( (This)->lpVtbl -> VSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
    ( (This)->lpVtbl -> GetPredication(This,ppPredicate,pPredicateValue) )
    ( (This)->lpVtbl -> GSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
    ( (This)->lpVtbl -> GSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
    ( (This)->lpVtbl -> OMGetRenderTargets(This,NumViews,ppRenderTargetViews,ppDepthStencilView) )
    ( (This)->lpVtbl -> OMGetRenderTargetsAndUnorderedAccessViews(This,NumRTVs,ppRenderTargetViews,ppDepthStencilView,UAVStartSlot,NumUAVs,ppUnorderedAccessViews) )
    ( (This)->lpVtbl -> OMGetBlendState(This,ppBlendState,BlendFactor,pSampleMask) )
    ( (This)->lpVtbl -> OMGetDepthStencilState(This,ppDepthStencilState,pStencilRef) )
    ( (This)->lpVtbl -> SOGetTargets(This,NumBuffers,ppSOTargets) )
    ( (This)->lpVtbl -> RSGetState(This,ppRasterizerState) )
    ( (This)->lpVtbl -> RSGetViewports(This,pNumViewports,pViewports) )
    ( (This)->lpVtbl -> RSGetScissorRects(This,pNumRects,pRects) )
    ( (This)->lpVtbl -> HSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
    ( (This)->lpVtbl -> HSGetShader(This,ppHullShader,ppClassInstances,pNumClassInstances) )
    ( (This)->lpVtbl -> HSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
    ( (This)->lpVtbl -> HSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
    ( (This)->lpVtbl -> DSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
    ( (This)->lpVtbl -> DSGetShader(This,ppDomainShader,ppClassInstances,pNumClassInstances) )
    ( (This)->lpVtbl -> DSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
    ( (This)->lpVtbl -> DSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
    ( (This)->lpVtbl -> CSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
    ( (This)->lpVtbl -> CSGetUnorderedAccessViews(This,StartSlot,NumUAVs,ppUnorderedAccessViews) )
    ( (This)->lpVtbl -> CSGetShader(This,ppComputeShader,ppClassInstances,pNumClassInstances) )
    ( (This)->lpVtbl -> CSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
    ( (This)->lpVtbl -> CSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
    ( (This)->lpVtbl -> ClearState(This) )
    ( (This)->lpVtbl -> Flush(This) )
    ( (This)->lpVtbl -> GetType(This) )
    ( (This)->lpVtbl -> GetContextFlags(This) )
    ( (This)->lpVtbl -> FinishCommandList(This,RestoreDeferredContextState,ppCommandList) )
typedef HRESULT APP_DEPRECATED_HRESULT;
DEFINE_GUID(D3D11_DECODER_PROFILE_MPEG2_MOCOMP, 0xe6a9f44b, 0x61b0, 0x4563,0x9e,0xa4,0x63,0xd2,0xa3,0xc6,0xfe,0x66);
DEFINE_GUID(D3D11_DECODER_PROFILE_MPEG2_IDCT, 0xbf22ad00, 0x03ea, 0x4690,0x80,0x77,0x47,0x33,0x46,0x20,0x9b,0x7e);
DEFINE_GUID(D3D11_DECODER_PROFILE_MPEG2_VLD, 0xee27417f, 0x5e28, 0x4e65,0xbe,0xea,0x1d,0x26,0xb5,0x08,0xad,0xc9);
DEFINE_GUID(D3D11_DECODER_PROFILE_MPEG1_VLD, 0x6f3ec719, 0x3735, 0x42cc,0x80,0x63,0x65,0xcc,0x3c,0xb3,0x66,0x16);
DEFINE_GUID(D3D11_DECODER_PROFILE_MPEG2and1_VLD, 0x86695f12, 0x340e, 0x4f04,0x9f,0xd3,0x92,0x53,0xdd,0x32,0x74,0x60);
DEFINE_GUID(D3D11_DECODER_PROFILE_H264_MOCOMP_NOFGT, 0x1b81be64, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_DECODER_PROFILE_H264_MOCOMP_FGT, 0x1b81be65, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_DECODER_PROFILE_H264_IDCT_NOFGT, 0x1b81be66, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_DECODER_PROFILE_H264_IDCT_FGT, 0x1b81be67, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_DECODER_PROFILE_H264_VLD_NOFGT, 0x1b81be68, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_DECODER_PROFILE_H264_VLD_FGT, 0x1b81be69, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_DECODER_PROFILE_H264_VLD_WITHFMOASO_NOFGT, 0xd5f04ff9, 0x3418,0x45d8,0x95,0x61,0x32,0xa7,0x6a,0xae,0x2d,0xdd);
DEFINE_GUID(D3D11_DECODER_PROFILE_H264_VLD_STEREO_PROGRESSIVE_NOFGT, 0xd79be8da, 0x0cf1,0x4c81,0xb8,0x2a,0x69,0xa4,0xe2,0x36,0xf4,0x3d);
DEFINE_GUID(D3D11_DECODER_PROFILE_H264_VLD_STEREO_NOFGT, 0xf9aaccbb, 0xc2b6,0x4cfc,0x87,0x79,0x57,0x07,0xb1,0x76,0x05,0x52);
DEFINE_GUID(D3D11_DECODER_PROFILE_H264_VLD_MULTIVIEW_NOFGT, 0x705b9d82, 0x76cf,0x49d6,0xb7,0xe6,0xac,0x88,0x72,0xdb,0x01,0x3c);
DEFINE_GUID(D3D11_DECODER_PROFILE_WMV8_POSTPROC, 0x1b81be80, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_DECODER_PROFILE_WMV8_MOCOMP, 0x1b81be81, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_DECODER_PROFILE_WMV9_POSTPROC, 0x1b81be90, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_DECODER_PROFILE_WMV9_MOCOMP, 0x1b81be91, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_DECODER_PROFILE_WMV9_IDCT, 0x1b81be94, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_DECODER_PROFILE_VC1_POSTPROC, 0x1b81beA0, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_DECODER_PROFILE_VC1_MOCOMP, 0x1b81beA1, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_DECODER_PROFILE_VC1_IDCT, 0x1b81beA2, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_DECODER_PROFILE_VC1_VLD, 0x1b81beA3, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_DECODER_PROFILE_VC1_D2010, 0x1b81beA4, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_DECODER_PROFILE_MPEG4PT2_VLD_SIMPLE, 0xefd64d74, 0xc9e8,0x41d7,0xa5,0xe9,0xe9,0xb0,0xe3,0x9f,0xa3,0x19);
DEFINE_GUID(D3D11_DECODER_PROFILE_MPEG4PT2_VLD_ADVSIMPLE_NOGMC, 0xed418a9f, 0x010d,0x4eda,0x9a,0xe3,0x9a,0x65,0x35,0x8d,0x8d,0x2e);
DEFINE_GUID(D3D11_DECODER_PROFILE_MPEG4PT2_VLD_ADVSIMPLE_GMC, 0xab998b5b, 0x4258,0x44a9,0x9f,0xeb,0x94,0xe5,0x97,0xa6,0xba,0xae);
DEFINE_GUID(D3D11_DECODER_PROFILE_HEVC_VLD_MAIN, 0x5b11d51b, 0x2f4c,0x4452,0xbc,0xc3,0x09,0xf2,0xa1,0x16,0x0c,0xc0);
DEFINE_GUID(D3D11_DECODER_PROFILE_HEVC_VLD_MAIN10, 0x107af0e0, 0xef1a,0x4d19,0xab,0xa8,0x67,0xa1,0x63,0x07,0x3d,0x13);
DEFINE_GUID(D3D11_DECODER_PROFILE_VP9_VLD_PROFILE0, 0x463707f8, 0xa1d0, 0x4585, 0x87, 0x6d, 0x83, 0xaa, 0x6d, 0x60, 0xb8, 0x9e);
DEFINE_GUID(D3D11_DECODER_PROFILE_VP9_VLD_10BIT_PROFILE2, 0xa4c749ef, 0x6ecf, 0x48aa, 0x84, 0x48, 0x50, 0xa7, 0xa1, 0x16, 0x5f, 0xf7);
DEFINE_GUID(D3D11_DECODER_PROFILE_VP8_VLD, 0x90b899ea, 0x3a62, 0x4705, 0x88, 0xb3, 0x8d, 0xf0, 0x4b, 0x27, 0x44, 0xe7);
typedef struct D3D11_VIDEO_DECODER_DESC
    {
    GUID Guid;
    UINT SampleWidth;
    UINT SampleHeight;
    DXGI_FORMAT OutputFormat;
    } D3D11_VIDEO_DECODER_DESC;
typedef struct D3D11_VIDEO_DECODER_CONFIG
    {
    GUID guidConfigBitstreamEncryption;
    GUID guidConfigMBcontrolEncryption;
    GUID guidConfigResidDiffEncryption;
    UINT ConfigBitstreamRaw;
    UINT ConfigMBcontrolRasterOrder;
    UINT ConfigResidDiffHost;
    UINT ConfigSpatialResid8;
    UINT ConfigResid8Subtraction;
    UINT ConfigSpatialHost8or9Clipping;
    UINT ConfigSpatialResidInterleaved;
    UINT ConfigIntraResidUnsigned;
    UINT ConfigResidDiffAccelerator;
    UINT ConfigHostInverseScan;
    UINT ConfigSpecificIDCT;
    UINT Config4GroupedCoefs;
    USHORT ConfigMinRenderTargetBuffCount;
    USHORT ConfigDecoderSpecific;
    } D3D11_VIDEO_DECODER_CONFIG;
typedef
enum D3D11_VIDEO_DECODER_BUFFER_TYPE
    {
        D3D11_VIDEO_DECODER_BUFFER_PICTURE_PARAMETERS = 0,
        D3D11_VIDEO_DECODER_BUFFER_MACROBLOCK_CONTROL = 1,
        D3D11_VIDEO_DECODER_BUFFER_RESIDUAL_DIFFERENCE = 2,
        D3D11_VIDEO_DECODER_BUFFER_DEBLOCKING_CONTROL = 3,
        D3D11_VIDEO_DECODER_BUFFER_INVERSE_QUANTIZATION_MATRIX = 4,
        D3D11_VIDEO_DECODER_BUFFER_SLICE_CONTROL = 5,
        D3D11_VIDEO_DECODER_BUFFER_BITSTREAM = 6,
        D3D11_VIDEO_DECODER_BUFFER_MOTION_VECTOR = 7,
        D3D11_VIDEO_DECODER_BUFFER_FILM_GRAIN = 8
    } D3D11_VIDEO_DECODER_BUFFER_TYPE;
typedef struct _D3D11_AES_CTR_IV
    {
    UINT64 IV;
    UINT64 Count;
    } D3D11_AES_CTR_IV;
typedef struct D3D11_ENCRYPTED_BLOCK_INFO
    {
    UINT NumEncryptedBytesAtBeginning;
    UINT NumBytesInSkipPattern;
    UINT NumBytesInEncryptPattern;
    } D3D11_ENCRYPTED_BLOCK_INFO;
typedef struct D3D11_VIDEO_DECODER_BUFFER_DESC
    {
    D3D11_VIDEO_DECODER_BUFFER_TYPE BufferType;
    UINT BufferIndex;
    UINT DataOffset;
    UINT DataSize;
    UINT FirstMBaddress;
    UINT NumMBsInBuffer;
    UINT Width;
    UINT Height;
    UINT Stride;
    UINT ReservedBits;
    _Field_size_opt_(IVSize) void *pIV;
    UINT IVSize;
    BOOL PartialEncryption;
    D3D11_ENCRYPTED_BLOCK_INFO EncryptedBlockInfo;
    } D3D11_VIDEO_DECODER_BUFFER_DESC;
typedef struct D3D11_VIDEO_DECODER_EXTENSION
    {
    UINT Function;
    _Field_size_(PrivateInputDataSize) void *pPrivateInputData;
    UINT PrivateInputDataSize;
    _Field_size_(PrivateOutputDataSize) void *pPrivateOutputData;
    UINT PrivateOutputDataSize;
    UINT ResourceCount;
    _Field_size_opt_(ResourceCount) ID3D11Resource **ppResourceList;
    } D3D11_VIDEO_DECODER_EXTENSION;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0030_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11VideoDecoder;
    typedef struct ID3D11VideoDecoderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11VideoDecoder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11VideoDecoder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11VideoDecoder * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11VideoDecoder * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11VideoDecoder * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11VideoDecoder * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11VideoDecoder * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *GetCreationParameters )(
            ID3D11VideoDecoder * This,
            _Out_ D3D11_VIDEO_DECODER_DESC *pVideoDesc,
            _Out_ D3D11_VIDEO_DECODER_CONFIG *pConfig);
        HRESULT ( STDMETHODCALLTYPE *GetDriverHandle )(
            ID3D11VideoDecoder * This,
            _Out_ HANDLE *pDriverHandle);
        END_INTERFACE
    } ID3D11VideoDecoderVtbl;
    interface ID3D11VideoDecoder
    {
        CONST_VTBL struct ID3D11VideoDecoderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetCreationParameters(This,pVideoDesc,pConfig) )
    ( (This)->lpVtbl -> GetDriverHandle(This,pDriverHandle) )
typedef
enum D3D11_VIDEO_PROCESSOR_FORMAT_SUPPORT
    {
        D3D11_VIDEO_PROCESSOR_FORMAT_SUPPORT_INPUT = 0x1,
        D3D11_VIDEO_PROCESSOR_FORMAT_SUPPORT_OUTPUT = 0x2
    } D3D11_VIDEO_PROCESSOR_FORMAT_SUPPORT;
typedef
enum D3D11_VIDEO_PROCESSOR_DEVICE_CAPS
    {
        D3D11_VIDEO_PROCESSOR_DEVICE_CAPS_LINEAR_SPACE = 0x1,
        D3D11_VIDEO_PROCESSOR_DEVICE_CAPS_xvYCC = 0x2,
        D3D11_VIDEO_PROCESSOR_DEVICE_CAPS_RGB_RANGE_CONVERSION = 0x4,
        D3D11_VIDEO_PROCESSOR_DEVICE_CAPS_YCbCr_MATRIX_CONVERSION = 0x8,
        D3D11_VIDEO_PROCESSOR_DEVICE_CAPS_NOMINAL_RANGE = 0x10
    } D3D11_VIDEO_PROCESSOR_DEVICE_CAPS;
typedef
enum D3D11_VIDEO_PROCESSOR_FEATURE_CAPS
    {
        D3D11_VIDEO_PROCESSOR_FEATURE_CAPS_ALPHA_FILL = 0x1,
        D3D11_VIDEO_PROCESSOR_FEATURE_CAPS_CONSTRICTION = 0x2,
        D3D11_VIDEO_PROCESSOR_FEATURE_CAPS_LUMA_KEY = 0x4,
        D3D11_VIDEO_PROCESSOR_FEATURE_CAPS_ALPHA_PALETTE = 0x8,
        D3D11_VIDEO_PROCESSOR_FEATURE_CAPS_LEGACY = 0x10,
        D3D11_VIDEO_PROCESSOR_FEATURE_CAPS_STEREO = 0x20,
        D3D11_VIDEO_PROCESSOR_FEATURE_CAPS_ROTATION = 0x40,
        D3D11_VIDEO_PROCESSOR_FEATURE_CAPS_ALPHA_STREAM = 0x80,
        D3D11_VIDEO_PROCESSOR_FEATURE_CAPS_PIXEL_ASPECT_RATIO = 0x100,
        D3D11_VIDEO_PROCESSOR_FEATURE_CAPS_MIRROR = 0x200,
        D3D11_VIDEO_PROCESSOR_FEATURE_CAPS_SHADER_USAGE = 0x400,
        D3D11_VIDEO_PROCESSOR_FEATURE_CAPS_METADATA_HDR10 = 0x800
    } D3D11_VIDEO_PROCESSOR_FEATURE_CAPS;
typedef
enum D3D11_VIDEO_PROCESSOR_FILTER_CAPS
    {
        D3D11_VIDEO_PROCESSOR_FILTER_CAPS_BRIGHTNESS = 0x1,
        D3D11_VIDEO_PROCESSOR_FILTER_CAPS_CONTRAST = 0x2,
        D3D11_VIDEO_PROCESSOR_FILTER_CAPS_HUE = 0x4,
        D3D11_VIDEO_PROCESSOR_FILTER_CAPS_SATURATION = 0x8,
        D3D11_VIDEO_PROCESSOR_FILTER_CAPS_NOISE_REDUCTION = 0x10,
        D3D11_VIDEO_PROCESSOR_FILTER_CAPS_EDGE_ENHANCEMENT = 0x20,
        D3D11_VIDEO_PROCESSOR_FILTER_CAPS_ANAMORPHIC_SCALING = 0x40,
        D3D11_VIDEO_PROCESSOR_FILTER_CAPS_STEREO_ADJUSTMENT = 0x80
    } D3D11_VIDEO_PROCESSOR_FILTER_CAPS;
typedef
enum D3D11_VIDEO_PROCESSOR_FORMAT_CAPS
    {
        D3D11_VIDEO_PROCESSOR_FORMAT_CAPS_RGB_INTERLACED = 0x1,
        D3D11_VIDEO_PROCESSOR_FORMAT_CAPS_RGB_PROCAMP = 0x2,
        D3D11_VIDEO_PROCESSOR_FORMAT_CAPS_RGB_LUMA_KEY = 0x4,
        D3D11_VIDEO_PROCESSOR_FORMAT_CAPS_PALETTE_INTERLACED = 0x8
    } D3D11_VIDEO_PROCESSOR_FORMAT_CAPS;
typedef
enum D3D11_VIDEO_PROCESSOR_AUTO_STREAM_CAPS
    {
        D3D11_VIDEO_PROCESSOR_AUTO_STREAM_CAPS_DENOISE = 0x1,
        D3D11_VIDEO_PROCESSOR_AUTO_STREAM_CAPS_DERINGING = 0x2,
        D3D11_VIDEO_PROCESSOR_AUTO_STREAM_CAPS_EDGE_ENHANCEMENT = 0x4,
        D3D11_VIDEO_PROCESSOR_AUTO_STREAM_CAPS_COLOR_CORRECTION = 0x8,
        D3D11_VIDEO_PROCESSOR_AUTO_STREAM_CAPS_FLESH_TONE_MAPPING = 0x10,
        D3D11_VIDEO_PROCESSOR_AUTO_STREAM_CAPS_IMAGE_STABILIZATION = 0x20,
        D3D11_VIDEO_PROCESSOR_AUTO_STREAM_CAPS_SUPER_RESOLUTION = 0x40,
        D3D11_VIDEO_PROCESSOR_AUTO_STREAM_CAPS_ANAMORPHIC_SCALING = 0x80
    } D3D11_VIDEO_PROCESSOR_AUTO_STREAM_CAPS;
typedef
enum D3D11_VIDEO_PROCESSOR_STEREO_CAPS
    {
        D3D11_VIDEO_PROCESSOR_STEREO_CAPS_MONO_OFFSET = 0x1,
        D3D11_VIDEO_PROCESSOR_STEREO_CAPS_ROW_INTERLEAVED = 0x2,
        D3D11_VIDEO_PROCESSOR_STEREO_CAPS_COLUMN_INTERLEAVED = 0x4,
        D3D11_VIDEO_PROCESSOR_STEREO_CAPS_CHECKERBOARD = 0x8,
        D3D11_VIDEO_PROCESSOR_STEREO_CAPS_FLIP_MODE = 0x10
    } D3D11_VIDEO_PROCESSOR_STEREO_CAPS;
typedef struct D3D11_VIDEO_PROCESSOR_CAPS
    {
    UINT DeviceCaps;
    UINT FeatureCaps;
    UINT FilterCaps;
    UINT InputFormatCaps;
    UINT AutoStreamCaps;
    UINT StereoCaps;
    UINT RateConversionCapsCount;
    UINT MaxInputStreams;
    UINT MaxStreamStates;
    } D3D11_VIDEO_PROCESSOR_CAPS;
typedef
enum D3D11_VIDEO_PROCESSOR_PROCESSOR_CAPS
    {
        D3D11_VIDEO_PROCESSOR_PROCESSOR_CAPS_DEINTERLACE_BLEND = 0x1,
        D3D11_VIDEO_PROCESSOR_PROCESSOR_CAPS_DEINTERLACE_BOB = 0x2,
        D3D11_VIDEO_PROCESSOR_PROCESSOR_CAPS_DEINTERLACE_ADAPTIVE = 0x4,
        D3D11_VIDEO_PROCESSOR_PROCESSOR_CAPS_DEINTERLACE_MOTION_COMPENSATION = 0x8,
        D3D11_VIDEO_PROCESSOR_PROCESSOR_CAPS_INVERSE_TELECINE = 0x10,
        D3D11_VIDEO_PROCESSOR_PROCESSOR_CAPS_FRAME_RATE_CONVERSION = 0x20
    } D3D11_VIDEO_PROCESSOR_PROCESSOR_CAPS;
typedef
enum D3D11_VIDEO_PROCESSOR_ITELECINE_CAPS
    {
        D3D11_VIDEO_PROCESSOR_ITELECINE_CAPS_32 = 0x1,
        D3D11_VIDEO_PROCESSOR_ITELECINE_CAPS_22 = 0x2,
        D3D11_VIDEO_PROCESSOR_ITELECINE_CAPS_2224 = 0x4,
        D3D11_VIDEO_PROCESSOR_ITELECINE_CAPS_2332 = 0x8,
        D3D11_VIDEO_PROCESSOR_ITELECINE_CAPS_32322 = 0x10,
        D3D11_VIDEO_PROCESSOR_ITELECINE_CAPS_55 = 0x20,
        D3D11_VIDEO_PROCESSOR_ITELECINE_CAPS_64 = 0x40,
        D3D11_VIDEO_PROCESSOR_ITELECINE_CAPS_87 = 0x80,
        D3D11_VIDEO_PROCESSOR_ITELECINE_CAPS_222222222223 = 0x100,
        D3D11_VIDEO_PROCESSOR_ITELECINE_CAPS_OTHER = 0x80000000
    } D3D11_VIDEO_PROCESSOR_ITELECINE_CAPS;
typedef struct D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS
    {
    UINT PastFrames;
    UINT FutureFrames;
    UINT ProcessorCaps;
    UINT ITelecineCaps;
    UINT CustomRateCount;
    } D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS;
typedef
enum D3D11_CONTENT_PROTECTION_CAPS
    {
        D3D11_CONTENT_PROTECTION_CAPS_SOFTWARE = 0x1,
        D3D11_CONTENT_PROTECTION_CAPS_HARDWARE = 0x2,
        D3D11_CONTENT_PROTECTION_CAPS_PROTECTION_ALWAYS_ON = 0x4,
        D3D11_CONTENT_PROTECTION_CAPS_PARTIAL_DECRYPTION = 0x8,
        D3D11_CONTENT_PROTECTION_CAPS_CONTENT_KEY = 0x10,
        D3D11_CONTENT_PROTECTION_CAPS_FRESHEN_SESSION_KEY = 0x20,
        D3D11_CONTENT_PROTECTION_CAPS_ENCRYPTED_READ_BACK = 0x40,
        D3D11_CONTENT_PROTECTION_CAPS_ENCRYPTED_READ_BACK_KEY = 0x80,
        D3D11_CONTENT_PROTECTION_CAPS_SEQUENTIAL_CTR_IV = 0x100,
        D3D11_CONTENT_PROTECTION_CAPS_ENCRYPT_SLICEDATA_ONLY = 0x200,
        D3D11_CONTENT_PROTECTION_CAPS_DECRYPTION_BLT = 0x400,
        D3D11_CONTENT_PROTECTION_CAPS_HARDWARE_PROTECT_UNCOMPRESSED = 0x800,
        D3D11_CONTENT_PROTECTION_CAPS_HARDWARE_PROTECTED_MEMORY_PAGEABLE = 0x1000,
        D3D11_CONTENT_PROTECTION_CAPS_HARDWARE_TEARDOWN = 0x2000,
        D3D11_CONTENT_PROTECTION_CAPS_HARDWARE_DRM_COMMUNICATION = 0x4000,
        D3D11_CONTENT_PROTECTION_CAPS_HARDWARE_DRM_COMMUNICATION_MULTI_THREADED = 0x8000
    } D3D11_CONTENT_PROTECTION_CAPS;
DEFINE_GUID(D3D11_CRYPTO_TYPE_AES128_CTR, 0x9b6bd711, 0x4f74, 0x41c9, 0x9e, 0x7b, 0xb, 0xe2, 0xd7, 0xd9, 0x3b, 0x4f );
DEFINE_GUID(D3D11_DECODER_ENCRYPTION_HW_CENC, 0x89d6ac4f, 0x9f2, 0x4229, 0xb2, 0xcd, 0x37, 0x74, 0xa, 0x6d, 0xfd, 0x81);
DEFINE_GUID(D3D11_DECODER_BITSTREAM_ENCRYPTION_TYPE_CENC, 0xb0405235, 0xc13d, 0x44f2, 0x9a, 0xe5, 0xdd, 0x48, 0xe0, 0x8e, 0x5b, 0x67);
DEFINE_GUID(D3D11_DECODER_BITSTREAM_ENCRYPTION_TYPE_CBCS, 0x422d9319, 0x9d21, 0x4bb7, 0x93, 0x71, 0xfa, 0xf5, 0xa8, 0x2c, 0x3e, 0x04);
DEFINE_GUID(D3D11_KEY_EXCHANGE_HW_PROTECTION, 0xb1170d8a, 0x628d, 0x4da3, 0xad, 0x3b, 0x82, 0xdd, 0xb0, 0x8b, 0x49, 0x70);
typedef struct D3D11_VIDEO_CONTENT_PROTECTION_CAPS
    {
    UINT Caps;
    UINT KeyExchangeTypeCount;
    UINT BlockAlignmentSize;
    ULONGLONG ProtectedMemorySize;
    } D3D11_VIDEO_CONTENT_PROTECTION_CAPS;
typedef struct D3D11_VIDEO_PROCESSOR_CUSTOM_RATE
    {
    DXGI_RATIONAL CustomRate;
    UINT OutputFrames;
    BOOL InputInterlaced;
    UINT InputFramesOrFields;
    } D3D11_VIDEO_PROCESSOR_CUSTOM_RATE;
typedef
enum D3D11_VIDEO_PROCESSOR_FILTER
    {
        D3D11_VIDEO_PROCESSOR_FILTER_BRIGHTNESS = 0,
        D3D11_VIDEO_PROCESSOR_FILTER_CONTRAST = 1,
        D3D11_VIDEO_PROCESSOR_FILTER_HUE = 2,
        D3D11_VIDEO_PROCESSOR_FILTER_SATURATION = 3,
        D3D11_VIDEO_PROCESSOR_FILTER_NOISE_REDUCTION = 4,
        D3D11_VIDEO_PROCESSOR_FILTER_EDGE_ENHANCEMENT = 5,
        D3D11_VIDEO_PROCESSOR_FILTER_ANAMORPHIC_SCALING = 6,
        D3D11_VIDEO_PROCESSOR_FILTER_STEREO_ADJUSTMENT = 7
    } D3D11_VIDEO_PROCESSOR_FILTER;
typedef struct D3D11_VIDEO_PROCESSOR_FILTER_RANGE
    {
    int Minimum;
    int Maximum;
    int Default;
    float Multiplier;
    } D3D11_VIDEO_PROCESSOR_FILTER_RANGE;
typedef
enum D3D11_VIDEO_FRAME_FORMAT
    {
        D3D11_VIDEO_FRAME_FORMAT_PROGRESSIVE = 0,
        D3D11_VIDEO_FRAME_FORMAT_INTERLACED_TOP_FIELD_FIRST = 1,
        D3D11_VIDEO_FRAME_FORMAT_INTERLACED_BOTTOM_FIELD_FIRST = 2
    } D3D11_VIDEO_FRAME_FORMAT;
typedef
enum D3D11_VIDEO_USAGE
    {
        D3D11_VIDEO_USAGE_PLAYBACK_NORMAL = 0,
        D3D11_VIDEO_USAGE_OPTIMAL_SPEED = 1,
        D3D11_VIDEO_USAGE_OPTIMAL_QUALITY = 2
    } D3D11_VIDEO_USAGE;
typedef struct D3D11_VIDEO_PROCESSOR_CONTENT_DESC
    {
    D3D11_VIDEO_FRAME_FORMAT InputFrameFormat;
    DXGI_RATIONAL InputFrameRate;
    UINT InputWidth;
    UINT InputHeight;
    DXGI_RATIONAL OutputFrameRate;
    UINT OutputWidth;
    UINT OutputHeight;
    D3D11_VIDEO_USAGE Usage;
    } D3D11_VIDEO_PROCESSOR_CONTENT_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0031_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11VideoProcessorEnumerator;
    typedef struct ID3D11VideoProcessorEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11VideoProcessorEnumerator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11VideoProcessorEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11VideoProcessorEnumerator * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11VideoProcessorEnumerator * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11VideoProcessorEnumerator * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11VideoProcessorEnumerator * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11VideoProcessorEnumerator * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessorContentDesc )(
            ID3D11VideoProcessorEnumerator * This,
            _Out_ D3D11_VIDEO_PROCESSOR_CONTENT_DESC *pContentDesc);
        HRESULT ( STDMETHODCALLTYPE *CheckVideoProcessorFormat )(
            ID3D11VideoProcessorEnumerator * This,
            _In_ DXGI_FORMAT Format,
            _Out_ UINT *pFlags);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessorCaps )(
            ID3D11VideoProcessorEnumerator * This,
            _Out_ D3D11_VIDEO_PROCESSOR_CAPS *pCaps);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessorRateConversionCaps )(
            ID3D11VideoProcessorEnumerator * This,
            _In_ UINT TypeIndex,
            _Out_ D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS *pCaps);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessorCustomRate )(
            ID3D11VideoProcessorEnumerator * This,
            _In_ UINT TypeIndex,
            _In_ UINT CustomRateIndex,
            _Out_ D3D11_VIDEO_PROCESSOR_CUSTOM_RATE *pRate);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessorFilterRange )(
            ID3D11VideoProcessorEnumerator * This,
            _In_ D3D11_VIDEO_PROCESSOR_FILTER Filter,
            _Out_ D3D11_VIDEO_PROCESSOR_FILTER_RANGE *pRange);
        END_INTERFACE
    } ID3D11VideoProcessorEnumeratorVtbl;
    interface ID3D11VideoProcessorEnumerator
    {
        CONST_VTBL struct ID3D11VideoProcessorEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetVideoProcessorContentDesc(This,pContentDesc) )
    ( (This)->lpVtbl -> CheckVideoProcessorFormat(This,Format,pFlags) )
    ( (This)->lpVtbl -> GetVideoProcessorCaps(This,pCaps) )
    ( (This)->lpVtbl -> GetVideoProcessorRateConversionCaps(This,TypeIndex,pCaps) )
    ( (This)->lpVtbl -> GetVideoProcessorCustomRate(This,TypeIndex,CustomRateIndex,pRate) )
    ( (This)->lpVtbl -> GetVideoProcessorFilterRange(This,Filter,pRange) )
typedef struct D3D11_VIDEO_COLOR_RGBA
    {
    float R;
    float G;
    float B;
    float A;
    } D3D11_VIDEO_COLOR_RGBA;
typedef struct D3D11_VIDEO_COLOR_YCbCrA
    {
    float Y;
    float Cb;
    float Cr;
    float A;
    } D3D11_VIDEO_COLOR_YCbCrA;
typedef struct D3D11_VIDEO_COLOR
    {
    union
        {
        D3D11_VIDEO_COLOR_YCbCrA YCbCr;
        D3D11_VIDEO_COLOR_RGBA RGBA;
        } ;
    } D3D11_VIDEO_COLOR;
typedef
enum D3D11_VIDEO_PROCESSOR_NOMINAL_RANGE
    {
        D3D11_VIDEO_PROCESSOR_NOMINAL_RANGE_UNDEFINED = 0,
        D3D11_VIDEO_PROCESSOR_NOMINAL_RANGE_16_235 = 1,
        D3D11_VIDEO_PROCESSOR_NOMINAL_RANGE_0_255 = 2
    } D3D11_VIDEO_PROCESSOR_NOMINAL_RANGE;
typedef struct D3D11_VIDEO_PROCESSOR_COLOR_SPACE
    {
    UINT Usage : 1;
    UINT RGB_Range : 1;
    UINT YCbCr_Matrix : 1;
    UINT YCbCr_xvYCC : 1;
    UINT Nominal_Range : 2;
    UINT Reserved : 26;
    } D3D11_VIDEO_PROCESSOR_COLOR_SPACE;
typedef
enum D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE
    {
        D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE_OPAQUE = 0,
        D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE_BACKGROUND = 1,
        D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE_DESTINATION = 2,
        D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE_SOURCE_STREAM = 3
    } D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE;
typedef
enum D3D11_VIDEO_PROCESSOR_OUTPUT_RATE
    {
        D3D11_VIDEO_PROCESSOR_OUTPUT_RATE_NORMAL = 0,
        D3D11_VIDEO_PROCESSOR_OUTPUT_RATE_HALF = 1,
        D3D11_VIDEO_PROCESSOR_OUTPUT_RATE_CUSTOM = 2
    } D3D11_VIDEO_PROCESSOR_OUTPUT_RATE;
typedef
enum D3D11_VIDEO_PROCESSOR_STEREO_FORMAT
    {
        D3D11_VIDEO_PROCESSOR_STEREO_FORMAT_MONO = 0,
        D3D11_VIDEO_PROCESSOR_STEREO_FORMAT_HORIZONTAL = 1,
        D3D11_VIDEO_PROCESSOR_STEREO_FORMAT_VERTICAL = 2,
        D3D11_VIDEO_PROCESSOR_STEREO_FORMAT_SEPARATE = 3,
        D3D11_VIDEO_PROCESSOR_STEREO_FORMAT_MONO_OFFSET = 4,
        D3D11_VIDEO_PROCESSOR_STEREO_FORMAT_ROW_INTERLEAVED = 5,
        D3D11_VIDEO_PROCESSOR_STEREO_FORMAT_COLUMN_INTERLEAVED = 6,
        D3D11_VIDEO_PROCESSOR_STEREO_FORMAT_CHECKERBOARD = 7
    } D3D11_VIDEO_PROCESSOR_STEREO_FORMAT;
typedef
enum D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE
    {
        D3D11_VIDEO_PROCESSOR_STEREO_FLIP_NONE = 0,
        D3D11_VIDEO_PROCESSOR_STEREO_FLIP_FRAME0 = 1,
        D3D11_VIDEO_PROCESSOR_STEREO_FLIP_FRAME1 = 2
    } D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE;
typedef
enum D3D11_VIDEO_PROCESSOR_ROTATION
    {
        D3D11_VIDEO_PROCESSOR_ROTATION_IDENTITY = 0,
        D3D11_VIDEO_PROCESSOR_ROTATION_90 = 1,
        D3D11_VIDEO_PROCESSOR_ROTATION_180 = 2,
        D3D11_VIDEO_PROCESSOR_ROTATION_270 = 3
    } D3D11_VIDEO_PROCESSOR_ROTATION;
typedef struct D3D11_VIDEO_PROCESSOR_STREAM
    {
    BOOL Enable;
    UINT OutputIndex;
    UINT InputFrameOrField;
    UINT PastFrames;
    UINT FutureFrames;
    _Field_size_(PastFrames) ID3D11VideoProcessorInputView **ppPastSurfaces;
    ID3D11VideoProcessorInputView *pInputSurface;
    _Field_size_(FutureFrames) ID3D11VideoProcessorInputView **ppFutureSurfaces;
    _Field_size_opt_(PastFrames) ID3D11VideoProcessorInputView **ppPastSurfacesRight;
    ID3D11VideoProcessorInputView *pInputSurfaceRight;
    _Field_size_(FutureFrames) ID3D11VideoProcessorInputView **ppFutureSurfacesRight;
    } D3D11_VIDEO_PROCESSOR_STREAM;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0032_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11VideoProcessor;
    typedef struct ID3D11VideoProcessorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11VideoProcessor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11VideoProcessor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11VideoProcessor * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11VideoProcessor * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11VideoProcessor * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11VideoProcessor * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11VideoProcessor * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetContentDesc )(
            ID3D11VideoProcessor * This,
            _Out_ D3D11_VIDEO_PROCESSOR_CONTENT_DESC *pDesc);
        void ( STDMETHODCALLTYPE *GetRateConversionCaps )(
            ID3D11VideoProcessor * This,
            _Out_ D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS *pCaps);
        END_INTERFACE
    } ID3D11VideoProcessorVtbl;
    interface ID3D11VideoProcessor
    {
        CONST_VTBL struct ID3D11VideoProcessorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetContentDesc(This,pDesc) )
    ( (This)->lpVtbl -> GetRateConversionCaps(This,pCaps) )
typedef struct D3D11_OMAC
    {
    BYTE Omac[ 16 ];
    } D3D11_OMAC;
typedef
enum D3D11_AUTHENTICATED_CHANNEL_TYPE
    {
        D3D11_AUTHENTICATED_CHANNEL_D3D11 = 1,
        D3D11_AUTHENTICATED_CHANNEL_DRIVER_SOFTWARE = 2,
        D3D11_AUTHENTICATED_CHANNEL_DRIVER_HARDWARE = 3
    } D3D11_AUTHENTICATED_CHANNEL_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0033_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11AuthenticatedChannel;
    typedef struct ID3D11AuthenticatedChannelVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11AuthenticatedChannel * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11AuthenticatedChannel * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11AuthenticatedChannel * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11AuthenticatedChannel * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11AuthenticatedChannel * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11AuthenticatedChannel * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11AuthenticatedChannel * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *GetCertificateSize )(
            ID3D11AuthenticatedChannel * This,
            _Out_ UINT *pCertificateSize);
        HRESULT ( STDMETHODCALLTYPE *GetCertificate )(
            ID3D11AuthenticatedChannel * This,
            _In_ UINT CertificateSize,
            _Out_writes_bytes_(CertificateSize) BYTE *pCertificate);
        void ( STDMETHODCALLTYPE *GetChannelHandle )(
            ID3D11AuthenticatedChannel * This,
            _Out_ HANDLE *pChannelHandle);
        END_INTERFACE
    } ID3D11AuthenticatedChannelVtbl;
    interface ID3D11AuthenticatedChannel
    {
        CONST_VTBL struct ID3D11AuthenticatedChannelVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetCertificateSize(This,pCertificateSize) )
    ( (This)->lpVtbl -> GetCertificate(This,CertificateSize,pCertificate) )
    ( (This)->lpVtbl -> GetChannelHandle(This,pChannelHandle) )
DEFINE_GUID( D3D11_AUTHENTICATED_QUERY_PROTECTION, 0xa84eb584, 0xc495, 0x48aa, 0xb9, 0x4d, 0x8b, 0xd2, 0xd6, 0xfb, 0xce, 0x5 );
DEFINE_GUID( D3D11_AUTHENTICATED_QUERY_CHANNEL_TYPE, 0xbc1b18a5, 0xb1fb, 0x42ab, 0xbd, 0x94, 0xb5, 0x82, 0x8b, 0x4b, 0xf7, 0xbe );
DEFINE_GUID( D3D11_AUTHENTICATED_QUERY_DEVICE_HANDLE, 0xec1c539d, 0x8cff, 0x4e2a, 0xbc, 0xc4, 0xf5, 0x69, 0x2f, 0x99, 0xf4, 0x80 );
DEFINE_GUID( D3D11_AUTHENTICATED_QUERY_CRYPTO_SESSION, 0x2634499e, 0xd018, 0x4d74, 0xac, 0x17, 0x7f, 0x72, 0x40, 0x59, 0x52, 0x8d );
DEFINE_GUID( D3D11_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_COUNT, 0xdb207b3, 0x9450, 0x46a6, 0x82, 0xde, 0x1b, 0x96, 0xd4, 0x4f, 0x9c, 0xf2 );
DEFINE_GUID( D3D11_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS, 0x649bbadb, 0xf0f4, 0x4639, 0xa1, 0x5b, 0x24, 0x39, 0x3f, 0xc3, 0xab, 0xac );
DEFINE_GUID( D3D11_AUTHENTICATED_QUERY_UNRESTRICTED_PROTECTED_SHARED_RESOURCE_COUNT, 0x12f0bd6, 0xe662, 0x4474, 0xbe, 0xfd, 0xaa, 0x53, 0xe5, 0x14, 0x3c, 0x6d );
DEFINE_GUID( D3D11_AUTHENTICATED_QUERY_OUTPUT_ID_COUNT, 0x2c042b5e, 0x8c07, 0x46d5, 0xaa, 0xbe, 0x8f, 0x75, 0xcb, 0xad, 0x4c, 0x31 );
DEFINE_GUID( D3D11_AUTHENTICATED_QUERY_OUTPUT_ID, 0x839ddca3, 0x9b4e, 0x41e4, 0xb0, 0x53, 0x89, 0x2b, 0xd2, 0xa1, 0x1e, 0xe7 );
DEFINE_GUID( D3D11_AUTHENTICATED_QUERY_ACCESSIBILITY_ATTRIBUTES, 0x6214d9d2, 0x432c, 0x4abb, 0x9f, 0xce, 0x21, 0x6e, 0xea, 0x26, 0x9e, 0x3b );
DEFINE_GUID( D3D11_AUTHENTICATED_QUERY_ENCRYPTION_WHEN_ACCESSIBLE_GUID_COUNT, 0xb30f7066, 0x203c, 0x4b07, 0x93, 0xfc, 0xce, 0xaa, 0xfd, 0x61, 0x24, 0x1e );
DEFINE_GUID( D3D11_AUTHENTICATED_QUERY_ENCRYPTION_WHEN_ACCESSIBLE_GUID, 0xf83a5958, 0xe986, 0x4bda, 0xbe, 0xb0, 0x41, 0x1f, 0x6a, 0x7a, 0x1, 0xb7 );
DEFINE_GUID( D3D11_AUTHENTICATED_QUERY_CURRENT_ENCRYPTION_WHEN_ACCESSIBLE, 0xec1791c7, 0xdad3, 0x4f15, 0x9e, 0xc3, 0xfa, 0xa9, 0x3d, 0x60, 0xd4, 0xf0 );
DEFINE_GUID( D3D11_AUTHENTICATED_CONFIGURE_INITIALIZE, 0x6114bdb, 0x3523, 0x470a, 0x8d, 0xca, 0xfb, 0xc2, 0x84, 0x51, 0x54, 0xf0 );
DEFINE_GUID( D3D11_AUTHENTICATED_CONFIGURE_PROTECTION, 0x50455658, 0x3f47, 0x4362, 0xbf, 0x99, 0xbf, 0xdf, 0xcd, 0xe9, 0xed, 0x29 );
DEFINE_GUID( D3D11_AUTHENTICATED_CONFIGURE_CRYPTO_SESSION, 0x6346cc54, 0x2cfc, 0x4ad4, 0x82, 0x24, 0xd1, 0x58, 0x37, 0xde, 0x77, 0x0 );
DEFINE_GUID( D3D11_AUTHENTICATED_CONFIGURE_SHARED_RESOURCE, 0x772d047, 0x1b40, 0x48e8, 0x9c, 0xa6, 0xb5, 0xf5, 0x10, 0xde, 0x9f, 0x1 );
DEFINE_GUID( D3D11_AUTHENTICATED_CONFIGURE_ENCRYPTION_WHEN_ACCESSIBLE, 0x41fff286, 0x6ae0, 0x4d43, 0x9d, 0x55, 0xa4, 0x6e, 0x9e, 0xfd, 0x15, 0x8a );
typedef struct D3D11_AUTHENTICATED_QUERY_INPUT
    {
    GUID QueryType;
    HANDLE hChannel;
    UINT SequenceNumber;
    } D3D11_AUTHENTICATED_QUERY_INPUT;
typedef struct D3D11_AUTHENTICATED_QUERY_OUTPUT
    {
    D3D11_OMAC omac;
    GUID QueryType;
    HANDLE hChannel;
    UINT SequenceNumber;
    HRESULT ReturnCode;
    } D3D11_AUTHENTICATED_QUERY_OUTPUT;
typedef union D3D11_AUTHENTICATED_PROTECTION_FLAGS
    {
    struct __MIDL___MIDL_itf_d3d11_0000_0034_0001
        {
        UINT ProtectionEnabled : 1;
        UINT OverlayOrFullscreenRequired : 1;
        UINT Reserved : 30;
        } Flags;
    UINT Value;
    } D3D11_AUTHENTICATED_PROTECTION_FLAGS;
typedef struct D3D11_AUTHENTICATED_QUERY_PROTECTION_OUTPUT
    {
    D3D11_AUTHENTICATED_QUERY_OUTPUT Output;
    D3D11_AUTHENTICATED_PROTECTION_FLAGS ProtectionFlags;
    } D3D11_AUTHENTICATED_QUERY_PROTECTION_OUTPUT;
typedef struct D3D11_AUTHENTICATED_QUERY_CHANNEL_TYPE_OUTPUT
    {
    D3D11_AUTHENTICATED_QUERY_OUTPUT Output;
    D3D11_AUTHENTICATED_CHANNEL_TYPE ChannelType;
    } D3D11_AUTHENTICATED_QUERY_CHANNEL_TYPE_OUTPUT;
typedef struct D3D11_AUTHENTICATED_QUERY_DEVICE_HANDLE_OUTPUT
    {
    D3D11_AUTHENTICATED_QUERY_OUTPUT Output;
    HANDLE DeviceHandle;
    } D3D11_AUTHENTICATED_QUERY_DEVICE_HANDLE_OUTPUT;
typedef struct D3D11_AUTHENTICATED_QUERY_CRYPTO_SESSION_INPUT
    {
    D3D11_AUTHENTICATED_QUERY_INPUT Input;
    HANDLE DecoderHandle;
    } D3D11_AUTHENTICATED_QUERY_CRYPTO_SESSION_INPUT;
typedef struct D3D11_AUTHENTICATED_QUERY_CRYPTO_SESSION_OUTPUT
    {
    D3D11_AUTHENTICATED_QUERY_OUTPUT Output;
    HANDLE DecoderHandle;
    HANDLE CryptoSessionHandle;
    HANDLE DeviceHandle;
    } D3D11_AUTHENTICATED_QUERY_CRYPTO_SESSION_OUTPUT;
typedef struct D3D11_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_COUNT_OUTPUT
    {
    D3D11_AUTHENTICATED_QUERY_OUTPUT Output;
    UINT RestrictedSharedResourceProcessCount;
    } D3D11_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_COUNT_OUTPUT;
typedef struct D3D11_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_INPUT
    {
    D3D11_AUTHENTICATED_QUERY_INPUT Input;
    UINT ProcessIndex;
    } D3D11_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_INPUT;
typedef
enum D3D11_AUTHENTICATED_PROCESS_IDENTIFIER_TYPE
    {
        D3D11_PROCESSIDTYPE_UNKNOWN = 0,
        D3D11_PROCESSIDTYPE_DWM = 1,
        D3D11_PROCESSIDTYPE_HANDLE = 2
    } D3D11_AUTHENTICATED_PROCESS_IDENTIFIER_TYPE;
typedef struct D3D11_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_OUTPUT
    {
    D3D11_AUTHENTICATED_QUERY_OUTPUT Output;
    UINT ProcessIndex;
    D3D11_AUTHENTICATED_PROCESS_IDENTIFIER_TYPE ProcessIdentifier;
    HANDLE ProcessHandle;
    } D3D11_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_OUTPUT;
typedef struct D3D11_AUTHENTICATED_QUERY_UNRESTRICTED_PROTECTED_SHARED_RESOURCE_COUNT_OUTPUT
    {
    D3D11_AUTHENTICATED_QUERY_OUTPUT Output;
    UINT UnrestrictedProtectedSharedResourceCount;
    } D3D11_AUTHENTICATED_QUERY_UNRESTRICTED_PROTECTED_SHARED_RESOURCE_COUNT_OUTPUT;
typedef struct D3D11_AUTHENTICATED_QUERY_OUTPUT_ID_COUNT_INPUT
    {
    D3D11_AUTHENTICATED_QUERY_INPUT Input;
    HANDLE DeviceHandle;
    HANDLE CryptoSessionHandle;
    } D3D11_AUTHENTICATED_QUERY_OUTPUT_ID_COUNT_INPUT;
typedef struct D3D11_AUTHENTICATED_QUERY_OUTPUT_ID_COUNT_OUTPUT
    {
    D3D11_AUTHENTICATED_QUERY_OUTPUT Output;
    HANDLE DeviceHandle;
    HANDLE CryptoSessionHandle;
    UINT OutputIDCount;
    } D3D11_AUTHENTICATED_QUERY_OUTPUT_ID_COUNT_OUTPUT;
typedef struct D3D11_AUTHENTICATED_QUERY_OUTPUT_ID_INPUT
    {
    D3D11_AUTHENTICATED_QUERY_INPUT Input;
    HANDLE DeviceHandle;
    HANDLE CryptoSessionHandle;
    UINT OutputIDIndex;
    } D3D11_AUTHENTICATED_QUERY_OUTPUT_ID_INPUT;
typedef struct D3D11_AUTHENTICATED_QUERY_OUTPUT_ID_OUTPUT
    {
    D3D11_AUTHENTICATED_QUERY_OUTPUT Output;
    HANDLE DeviceHandle;
    HANDLE CryptoSessionHandle;
    UINT OutputIDIndex;
    UINT64 OutputID;
    } D3D11_AUTHENTICATED_QUERY_OUTPUT_ID_OUTPUT;
typedef
enum D3D11_BUS_TYPE
    {
        D3D11_BUS_TYPE_OTHER = 0,
        D3D11_BUS_TYPE_PCI = 0x1,
        D3D11_BUS_TYPE_PCIX = 0x2,
        D3D11_BUS_TYPE_PCIEXPRESS = 0x3,
        D3D11_BUS_TYPE_AGP = 0x4,
        D3D11_BUS_IMPL_MODIFIER_INSIDE_OF_CHIPSET = 0x10000,
        D3D11_BUS_IMPL_MODIFIER_TRACKS_ON_MOTHER_BOARD_TO_CHIP = 0x20000,
        D3D11_BUS_IMPL_MODIFIER_TRACKS_ON_MOTHER_BOARD_TO_SOCKET = 0x30000,
        D3D11_BUS_IMPL_MODIFIER_DAUGHTER_BOARD_CONNECTOR = 0x40000,
        D3D11_BUS_IMPL_MODIFIER_DAUGHTER_BOARD_CONNECTOR_INSIDE_OF_NUAE = 0x50000,
        D3D11_BUS_IMPL_MODIFIER_NON_STANDARD = 0x80000000
    } D3D11_BUS_TYPE;
typedef struct D3D11_AUTHENTICATED_QUERY_ACESSIBILITY_OUTPUT
    {
    D3D11_AUTHENTICATED_QUERY_OUTPUT Output;
    D3D11_BUS_TYPE BusType;
    BOOL AccessibleInContiguousBlocks;
    BOOL AccessibleInNonContiguousBlocks;
    } D3D11_AUTHENTICATED_QUERY_ACCESSIBILITY_OUTPUT;
typedef struct D3D11_AUTHENTICATED_QUERY_ACCESSIBILITY_ENCRYPTION_GUID_COUNT_OUTPUT
    {
    D3D11_AUTHENTICATED_QUERY_OUTPUT Output;
    UINT EncryptionGuidCount;
    } D3D11_AUTHENTICATED_QUERY_ACCESSIBILITY_ENCRYPTION_GUID_COUNT_OUTPUT;
typedef struct D3D11_AUTHENTICATED_QUERY_ACCESSIBILITY_ENCRYPTION_GUID_INPUT
    {
    D3D11_AUTHENTICATED_QUERY_INPUT Input;
    UINT EncryptionGuidIndex;
    } D3D11_AUTHENTICATED_QUERY_ACCESSIBILITY_ENCRYPTION_GUID_INPUT;
typedef struct D3D11_AUTHENTICATED_QUERY_ACCESSIBILITY_ENCRYPTION_GUID_OUTPUT
    {
    D3D11_AUTHENTICATED_QUERY_OUTPUT Output;
    UINT EncryptionGuidIndex;
    GUID EncryptionGuid;
    } D3D11_AUTHENTICATED_QUERY_ACCESSIBILITY_ENCRYPTION_GUID_OUTPUT;
typedef struct D3D11_AUTHENTICATED_QUERY_CURRENT_ACCESSIBILITY_ENCRYPTION_OUTPUT
    {
    D3D11_AUTHENTICATED_QUERY_OUTPUT Output;
    GUID EncryptionGuid;
    } D3D11_AUTHENTICATED_QUERY_CURRENT_ACCESSIBILITY_ENCRYPTION_OUTPUT;
typedef struct D3D11_AUTHENTICATED_CONFIGURE_INPUT
    {
    D3D11_OMAC omac;
    GUID ConfigureType;
    HANDLE hChannel;
    UINT SequenceNumber;
    } D3D11_AUTHENTICATED_CONFIGURE_INPUT;
typedef struct D3D11_AUTHENTICATED_CONFIGURE_OUTPUT
    {
    D3D11_OMAC omac;
    GUID ConfigureType;
    HANDLE hChannel;
    UINT SequenceNumber;
    HRESULT ReturnCode;
    } D3D11_AUTHENTICATED_CONFIGURE_OUTPUT;
typedef struct D3D11_AUTHENTICATED_CONFIGURE_INITIALIZE_INPUT
    {
    D3D11_AUTHENTICATED_CONFIGURE_INPUT Parameters;
    UINT StartSequenceQuery;
    UINT StartSequenceConfigure;
    } D3D11_AUTHENTICATED_CONFIGURE_INITIALIZE_INPUT;
typedef struct D3D11_AUTHENTICATED_CONFIGURE_PROTECTION_INPUT
    {
    D3D11_AUTHENTICATED_CONFIGURE_INPUT Parameters;
    D3D11_AUTHENTICATED_PROTECTION_FLAGS Protections;
    } D3D11_AUTHENTICATED_CONFIGURE_PROTECTION_INPUT;
typedef struct D3D11_AUTHENTICATED_CONFIGURE_CRYPTO_SESSION_INPUT
    {
    D3D11_AUTHENTICATED_CONFIGURE_INPUT Parameters;
    HANDLE DecoderHandle;
    HANDLE CryptoSessionHandle;
    HANDLE DeviceHandle;
    } D3D11_AUTHENTICATED_CONFIGURE_CRYPTO_SESSION_INPUT;
typedef struct D3D11_AUTHENTICATED_CONFIGURE_SHARED_RESOURCE_INPUT
    {
    D3D11_AUTHENTICATED_CONFIGURE_INPUT Parameters;
    D3D11_AUTHENTICATED_PROCESS_IDENTIFIER_TYPE ProcessType;
    HANDLE ProcessHandle;
    BOOL AllowAccess;
    } D3D11_AUTHENTICATED_CONFIGURE_SHARED_RESOURCE_INPUT;
typedef struct D3D11_AUTHENTICATED_CONFIGURE_ACCESSIBLE_ENCRYPTION_INPUT
    {
    D3D11_AUTHENTICATED_CONFIGURE_INPUT Parameters;
    GUID EncryptionGuid;
    } D3D11_AUTHENTICATED_CONFIGURE_ACCESSIBLE_ENCRYPTION_INPUT;
DEFINE_GUID(D3D11_KEY_EXCHANGE_RSAES_OAEP, 0xc1949895, 0xd72a, 0x4a1d, 0x8e, 0x5d, 0xed, 0x85, 0x7d, 0x17, 0x15, 0x20);
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0034_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11CryptoSession;
    typedef struct ID3D11CryptoSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11CryptoSession * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11CryptoSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11CryptoSession * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11CryptoSession * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11CryptoSession * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11CryptoSession * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11CryptoSession * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetCryptoType )(
            ID3D11CryptoSession * This,
            _Out_ GUID *pCryptoType);
        void ( STDMETHODCALLTYPE *GetDecoderProfile )(
            ID3D11CryptoSession * This,
            _Out_ GUID *pDecoderProfile);
        HRESULT ( STDMETHODCALLTYPE *GetCertificateSize )(
            ID3D11CryptoSession * This,
            _Out_ UINT *pCertificateSize);
        HRESULT ( STDMETHODCALLTYPE *GetCertificate )(
            ID3D11CryptoSession * This,
            _In_ UINT CertificateSize,
            _Out_writes_bytes_(CertificateSize) BYTE *pCertificate);
        void ( STDMETHODCALLTYPE *GetCryptoSessionHandle )(
            ID3D11CryptoSession * This,
            _Out_ HANDLE *pCryptoSessionHandle);
        END_INTERFACE
    } ID3D11CryptoSessionVtbl;
    interface ID3D11CryptoSession
    {
        CONST_VTBL struct ID3D11CryptoSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetCryptoType(This,pCryptoType) )
    ( (This)->lpVtbl -> GetDecoderProfile(This,pDecoderProfile) )
    ( (This)->lpVtbl -> GetCertificateSize(This,pCertificateSize) )
    ( (This)->lpVtbl -> GetCertificate(This,CertificateSize,pCertificate) )
    ( (This)->lpVtbl -> GetCryptoSessionHandle(This,pCryptoSessionHandle) )
typedef
enum D3D11_VDOV_DIMENSION
    {
        D3D11_VDOV_DIMENSION_UNKNOWN = 0,
        D3D11_VDOV_DIMENSION_TEXTURE2D = 1
    } D3D11_VDOV_DIMENSION;
typedef struct D3D11_TEX2D_VDOV
    {
    UINT ArraySlice;
    } D3D11_TEX2D_VDOV;
typedef struct D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC
    {
    GUID DecodeProfile;
    D3D11_VDOV_DIMENSION ViewDimension;
    union
        {
        D3D11_TEX2D_VDOV Texture2D;
        } ;
    } D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0035_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11VideoDecoderOutputView;
    typedef struct ID3D11VideoDecoderOutputViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11VideoDecoderOutputView * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11VideoDecoderOutputView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11VideoDecoderOutputView * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11VideoDecoderOutputView * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11VideoDecoderOutputView * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11VideoDecoderOutputView * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11VideoDecoderOutputView * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetResource )(
            ID3D11VideoDecoderOutputView * This,
            _Outptr_ ID3D11Resource **ppResource);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11VideoDecoderOutputView * This,
            _Out_ D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC *pDesc);
        END_INTERFACE
    } ID3D11VideoDecoderOutputViewVtbl;
    interface ID3D11VideoDecoderOutputView
    {
        CONST_VTBL struct ID3D11VideoDecoderOutputViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetResource(This,ppResource) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef
enum D3D11_VPIV_DIMENSION
    {
        D3D11_VPIV_DIMENSION_UNKNOWN = 0,
        D3D11_VPIV_DIMENSION_TEXTURE2D = 1
    } D3D11_VPIV_DIMENSION;
typedef struct D3D11_TEX2D_VPIV
    {
    UINT MipSlice;
    UINT ArraySlice;
    } D3D11_TEX2D_VPIV;
typedef struct D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC
    {
    UINT FourCC;
    D3D11_VPIV_DIMENSION ViewDimension;
    union
        {
        D3D11_TEX2D_VPIV Texture2D;
        } ;
    } D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0036_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11VideoProcessorInputView;
    typedef struct ID3D11VideoProcessorInputViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11VideoProcessorInputView * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11VideoProcessorInputView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11VideoProcessorInputView * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11VideoProcessorInputView * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11VideoProcessorInputView * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11VideoProcessorInputView * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11VideoProcessorInputView * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetResource )(
            ID3D11VideoProcessorInputView * This,
            _Outptr_ ID3D11Resource **ppResource);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11VideoProcessorInputView * This,
            _Out_ D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC *pDesc);
        END_INTERFACE
    } ID3D11VideoProcessorInputViewVtbl;
    interface ID3D11VideoProcessorInputView
    {
        CONST_VTBL struct ID3D11VideoProcessorInputViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetResource(This,ppResource) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef
enum D3D11_VPOV_DIMENSION
    {
        D3D11_VPOV_DIMENSION_UNKNOWN = 0,
        D3D11_VPOV_DIMENSION_TEXTURE2D = 1,
        D3D11_VPOV_DIMENSION_TEXTURE2DARRAY = 2
    } D3D11_VPOV_DIMENSION;
typedef struct D3D11_TEX2D_VPOV
    {
    UINT MipSlice;
    } D3D11_TEX2D_VPOV;
typedef struct D3D11_TEX2D_ARRAY_VPOV
    {
    UINT MipSlice;
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D11_TEX2D_ARRAY_VPOV;
typedef struct D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC
    {
    D3D11_VPOV_DIMENSION ViewDimension;
    union
        {
        D3D11_TEX2D_VPOV Texture2D;
        D3D11_TEX2D_ARRAY_VPOV Texture2DArray;
        } ;
    } D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0037_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11VideoProcessorOutputView;
    typedef struct ID3D11VideoProcessorOutputViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11VideoProcessorOutputView * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11VideoProcessorOutputView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11VideoProcessorOutputView * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11VideoProcessorOutputView * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11VideoProcessorOutputView * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11VideoProcessorOutputView * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11VideoProcessorOutputView * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetResource )(
            ID3D11VideoProcessorOutputView * This,
            _Outptr_ ID3D11Resource **ppResource);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11VideoProcessorOutputView * This,
            _Out_ D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC *pDesc);
        END_INTERFACE
    } ID3D11VideoProcessorOutputViewVtbl;
    interface ID3D11VideoProcessorOutputView
    {
        CONST_VTBL struct ID3D11VideoProcessorOutputViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetResource(This,ppResource) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
EXTERN_C const IID IID_ID3D11VideoContext;
    typedef struct ID3D11VideoContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11VideoContext * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11VideoContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11VideoContext * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11VideoContext * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11VideoContext * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11VideoContext * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11VideoContext * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *GetDecoderBuffer )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            D3D11_VIDEO_DECODER_BUFFER_TYPE Type,
            _Out_ UINT *pBufferSize,
            _Outptr_result_bytebuffer_(*pBufferSize) void **ppBuffer);
        HRESULT ( STDMETHODCALLTYPE *ReleaseDecoderBuffer )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ D3D11_VIDEO_DECODER_BUFFER_TYPE Type);
        HRESULT ( STDMETHODCALLTYPE *DecoderBeginFrame )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ ID3D11VideoDecoderOutputView *pView,
            UINT ContentKeySize,
            _In_reads_bytes_opt_(ContentKeySize) const void *pContentKey);
        HRESULT ( STDMETHODCALLTYPE *DecoderEndFrame )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoDecoder *pDecoder);
        HRESULT ( STDMETHODCALLTYPE *SubmitDecoderBuffers )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ UINT NumBuffers,
            _In_reads_(NumBuffers) const D3D11_VIDEO_DECODER_BUFFER_DESC *pBufferDesc);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *DecoderExtension )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ const D3D11_VIDEO_DECODER_EXTENSION *pExtensionData);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputTargetRect )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ BOOL Enable,
            _In_opt_ const RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputBackgroundColor )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ BOOL YCbCr,
            _In_ const D3D11_VIDEO_COLOR *pColor);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputColorSpace )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ const D3D11_VIDEO_PROCESSOR_COLOR_SPACE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputAlphaFillMode )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode,
            _In_ UINT StreamIndex);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputConstriction )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ BOOL Enable,
            _In_ SIZE Size);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputStereoMode )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ BOOL Enable);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *VideoProcessorSetOutputExtension )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ const GUID *pExtensionGuid,
            _In_ UINT DataSize,
            _In_ void *pData);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputTargetRect )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ BOOL *Enabled,
            _Out_ RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputBackgroundColor )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ BOOL *pYCbCr,
            _Out_ D3D11_VIDEO_COLOR *pColor);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputColorSpace )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ D3D11_VIDEO_PROCESSOR_COLOR_SPACE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputAlphaFillMode )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE *pAlphaFillMode,
            _Out_ UINT *pStreamIndex);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputConstriction )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ BOOL *pEnabled,
            _Out_ SIZE *pSize);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputStereoMode )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ BOOL *pEnabled);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *VideoProcessorGetOutputExtension )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ const GUID *pExtensionGuid,
            _In_ UINT DataSize,
            _Out_writes_bytes_(DataSize) void *pData);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamFrameFormat )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ D3D11_VIDEO_FRAME_FORMAT FrameFormat);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamColorSpace )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ const D3D11_VIDEO_PROCESSOR_COLOR_SPACE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamOutputRate )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate,
            _In_ BOOL RepeatFrame,
            _In_opt_ const DXGI_RATIONAL *pCustomRate);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamSourceRect )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_opt_ const RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamDestRect )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_opt_ const RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamAlpha )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_ FLOAT Alpha);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamPalette )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ UINT Count,
            _In_reads_opt_(Count) const UINT *pEntries);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamPixelAspectRatio )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_opt_ const DXGI_RATIONAL *pSourceAspectRatio,
            _In_opt_ const DXGI_RATIONAL *pDestinationAspectRatio);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamLumaKey )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_ FLOAT Lower,
            _In_ FLOAT Upper);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamStereoFormat )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_ D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format,
            _In_ BOOL LeftViewFrame0,
            _In_ BOOL BaseViewFrame0,
            _In_ D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode,
            _In_ int MonoOffset);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamAutoProcessingMode )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamFilter )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ D3D11_VIDEO_PROCESSOR_FILTER Filter,
            _In_ BOOL Enable,
            _In_ int Level);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *VideoProcessorSetStreamExtension )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ const GUID *pExtensionGuid,
            _In_ UINT DataSize,
            _In_ void *pData);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamFrameFormat )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ D3D11_VIDEO_FRAME_FORMAT *pFrameFormat);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamColorSpace )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ D3D11_VIDEO_PROCESSOR_COLOR_SPACE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamOutputRate )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ D3D11_VIDEO_PROCESSOR_OUTPUT_RATE *pOutputRate,
            _Out_ BOOL *pRepeatFrame,
            _Out_ DXGI_RATIONAL *pCustomRate);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamSourceRect )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamDestRect )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamAlpha )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ FLOAT *pAlpha);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamPalette )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ UINT Count,
            _Out_writes_(Count) UINT *pEntries);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamPixelAspectRatio )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ DXGI_RATIONAL *pSourceAspectRatio,
            _Out_ DXGI_RATIONAL *pDestinationAspectRatio);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamLumaKey )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ FLOAT *pLower,
            _Out_ FLOAT *pUpper);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamStereoFormat )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnable,
            _Out_ D3D11_VIDEO_PROCESSOR_STEREO_FORMAT *pFormat,
            _Out_ BOOL *pLeftViewFrame0,
            _Out_ BOOL *pBaseViewFrame0,
            _Out_ D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE *pFlipMode,
            _Out_ int *MonoOffset);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamAutoProcessingMode )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamFilter )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ D3D11_VIDEO_PROCESSOR_FILTER Filter,
            _Out_ BOOL *pEnabled,
            _Out_ int *pLevel);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *VideoProcessorGetStreamExtension )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ const GUID *pExtensionGuid,
            _In_ UINT DataSize,
            _Out_writes_bytes_(DataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *VideoProcessorBlt )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ ID3D11VideoProcessorOutputView *pView,
            _In_ UINT OutputFrame,
            _In_ UINT StreamCount,
            _In_reads_(StreamCount) const D3D11_VIDEO_PROCESSOR_STREAM *pStreams);
        HRESULT ( STDMETHODCALLTYPE *NegotiateCryptoSessionKeyExchange )(
            ID3D11VideoContext * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ UINT DataSize,
            _Inout_updates_bytes_(DataSize) void *pData);
        void ( STDMETHODCALLTYPE *EncryptionBlt )(
            ID3D11VideoContext * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ ID3D11Texture2D *pSrcSurface,
            _In_ ID3D11Texture2D *pDstSurface,
            _In_ UINT IVSize,
            _Inout_opt_bytecount_(IVSize) void *pIV);
        void ( STDMETHODCALLTYPE *DecryptionBlt )(
            ID3D11VideoContext * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ ID3D11Texture2D *pSrcSurface,
            _In_ ID3D11Texture2D *pDstSurface,
            _In_opt_ D3D11_ENCRYPTED_BLOCK_INFO *pEncryptedBlockInfo,
            _In_ UINT ContentKeySize,
            _In_reads_bytes_opt_(ContentKeySize) const void *pContentKey,
            _In_ UINT IVSize,
            _Inout_opt_bytecount_(IVSize) void *pIV);
        void ( STDMETHODCALLTYPE *StartSessionKeyRefresh )(
            ID3D11VideoContext * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ UINT RandomNumberSize,
            _Out_writes_bytes_(RandomNumberSize) void *pRandomNumber);
        void ( STDMETHODCALLTYPE *FinishSessionKeyRefresh )(
            ID3D11VideoContext * This,
            _In_ ID3D11CryptoSession *pCryptoSession);
        HRESULT ( STDMETHODCALLTYPE *GetEncryptionBltKey )(
            ID3D11VideoContext * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ UINT KeySize,
            _Out_writes_bytes_(KeySize) void *pReadbackKey);
        HRESULT ( STDMETHODCALLTYPE *NegotiateAuthenticatedChannelKeyExchange )(
            ID3D11VideoContext * This,
            _In_ ID3D11AuthenticatedChannel *pChannel,
            _In_ UINT DataSize,
            _Inout_updates_bytes_(DataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *QueryAuthenticatedChannel )(
            ID3D11VideoContext * This,
            _In_ ID3D11AuthenticatedChannel *pChannel,
            _In_ UINT InputSize,
            _In_reads_bytes_(InputSize) const void *pInput,
            _In_ UINT OutputSize,
            _Out_writes_bytes_(OutputSize) void *pOutput);
        HRESULT ( STDMETHODCALLTYPE *ConfigureAuthenticatedChannel )(
            ID3D11VideoContext * This,
            _In_ ID3D11AuthenticatedChannel *pChannel,
            _In_ UINT InputSize,
            _In_reads_bytes_(InputSize) const void *pInput,
            _Out_ D3D11_AUTHENTICATED_CONFIGURE_OUTPUT *pOutput);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamRotation )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_ D3D11_VIDEO_PROCESSOR_ROTATION Rotation);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamRotation )(
            ID3D11VideoContext * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnable,
            _Out_ D3D11_VIDEO_PROCESSOR_ROTATION *pRotation);
        END_INTERFACE
    } ID3D11VideoContextVtbl;
    interface ID3D11VideoContext
    {
        CONST_VTBL struct ID3D11VideoContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetDecoderBuffer(This,pDecoder,Type,pBufferSize,ppBuffer) )
    ( (This)->lpVtbl -> ReleaseDecoderBuffer(This,pDecoder,Type) )
    ( (This)->lpVtbl -> DecoderBeginFrame(This,pDecoder,pView,ContentKeySize,pContentKey) )
    ( (This)->lpVtbl -> DecoderEndFrame(This,pDecoder) )
    ( (This)->lpVtbl -> SubmitDecoderBuffers(This,pDecoder,NumBuffers,pBufferDesc) )
    ( (This)->lpVtbl -> DecoderExtension(This,pDecoder,pExtensionData) )
    ( (This)->lpVtbl -> VideoProcessorSetOutputTargetRect(This,pVideoProcessor,Enable,pRect) )
    ( (This)->lpVtbl -> VideoProcessorSetOutputBackgroundColor(This,pVideoProcessor,YCbCr,pColor) )
    ( (This)->lpVtbl -> VideoProcessorSetOutputColorSpace(This,pVideoProcessor,pColorSpace) )
    ( (This)->lpVtbl -> VideoProcessorSetOutputAlphaFillMode(This,pVideoProcessor,AlphaFillMode,StreamIndex) )
    ( (This)->lpVtbl -> VideoProcessorSetOutputConstriction(This,pVideoProcessor,Enable,Size) )
    ( (This)->lpVtbl -> VideoProcessorSetOutputStereoMode(This,pVideoProcessor,Enable) )
    ( (This)->lpVtbl -> VideoProcessorSetOutputExtension(This,pVideoProcessor,pExtensionGuid,DataSize,pData) )
    ( (This)->lpVtbl -> VideoProcessorGetOutputTargetRect(This,pVideoProcessor,Enabled,pRect) )
    ( (This)->lpVtbl -> VideoProcessorGetOutputBackgroundColor(This,pVideoProcessor,pYCbCr,pColor) )
    ( (This)->lpVtbl -> VideoProcessorGetOutputColorSpace(This,pVideoProcessor,pColorSpace) )
    ( (This)->lpVtbl -> VideoProcessorGetOutputAlphaFillMode(This,pVideoProcessor,pAlphaFillMode,pStreamIndex) )
    ( (This)->lpVtbl -> VideoProcessorGetOutputConstriction(This,pVideoProcessor,pEnabled,pSize) )
    ( (This)->lpVtbl -> VideoProcessorGetOutputStereoMode(This,pVideoProcessor,pEnabled) )
    ( (This)->lpVtbl -> VideoProcessorGetOutputExtension(This,pVideoProcessor,pExtensionGuid,DataSize,pData) )
    ( (This)->lpVtbl -> VideoProcessorSetStreamFrameFormat(This,pVideoProcessor,StreamIndex,FrameFormat) )
    ( (This)->lpVtbl -> VideoProcessorSetStreamColorSpace(This,pVideoProcessor,StreamIndex,pColorSpace) )
    ( (This)->lpVtbl -> VideoProcessorSetStreamOutputRate(This,pVideoProcessor,StreamIndex,OutputRate,RepeatFrame,pCustomRate) )
    ( (This)->lpVtbl -> VideoProcessorSetStreamSourceRect(This,pVideoProcessor,StreamIndex,Enable,pRect) )
    ( (This)->lpVtbl -> VideoProcessorSetStreamDestRect(This,pVideoProcessor,StreamIndex,Enable,pRect) )
    ( (This)->lpVtbl -> VideoProcessorSetStreamAlpha(This,pVideoProcessor,StreamIndex,Enable,Alpha) )
    ( (This)->lpVtbl -> VideoProcessorSetStreamPalette(This,pVideoProcessor,StreamIndex,Count,pEntries) )
    ( (This)->lpVtbl -> VideoProcessorSetStreamPixelAspectRatio(This,pVideoProcessor,StreamIndex,Enable,pSourceAspectRatio,pDestinationAspectRatio) )
    ( (This)->lpVtbl -> VideoProcessorSetStreamLumaKey(This,pVideoProcessor,StreamIndex,Enable,Lower,Upper) )
    ( (This)->lpVtbl -> VideoProcessorSetStreamStereoFormat(This,pVideoProcessor,StreamIndex,Enable,Format,LeftViewFrame0,BaseViewFrame0,FlipMode,MonoOffset) )
    ( (This)->lpVtbl -> VideoProcessorSetStreamAutoProcessingMode(This,pVideoProcessor,StreamIndex,Enable) )
    ( (This)->lpVtbl -> VideoProcessorSetStreamFilter(This,pVideoProcessor,StreamIndex,Filter,Enable,Level) )
    ( (This)->lpVtbl -> VideoProcessorSetStreamExtension(This,pVideoProcessor,StreamIndex,pExtensionGuid,DataSize,pData) )
    ( (This)->lpVtbl -> VideoProcessorGetStreamFrameFormat(This,pVideoProcessor,StreamIndex,pFrameFormat) )
    ( (This)->lpVtbl -> VideoProcessorGetStreamColorSpace(This,pVideoProcessor,StreamIndex,pColorSpace) )
    ( (This)->lpVtbl -> VideoProcessorGetStreamOutputRate(This,pVideoProcessor,StreamIndex,pOutputRate,pRepeatFrame,pCustomRate) )
    ( (This)->lpVtbl -> VideoProcessorGetStreamSourceRect(This,pVideoProcessor,StreamIndex,pEnabled,pRect) )
    ( (This)->lpVtbl -> VideoProcessorGetStreamDestRect(This,pVideoProcessor,StreamIndex,pEnabled,pRect) )
    ( (This)->lpVtbl -> VideoProcessorGetStreamAlpha(This,pVideoProcessor,StreamIndex,pEnabled,pAlpha) )
    ( (This)->lpVtbl -> VideoProcessorGetStreamPalette(This,pVideoProcessor,StreamIndex,Count,pEntries) )
    ( (This)->lpVtbl -> VideoProcessorGetStreamPixelAspectRatio(This,pVideoProcessor,StreamIndex,pEnabled,pSourceAspectRatio,pDestinationAspectRatio) )
    ( (This)->lpVtbl -> VideoProcessorGetStreamLumaKey(This,pVideoProcessor,StreamIndex,pEnabled,pLower,pUpper) )
    ( (This)->lpVtbl -> VideoProcessorGetStreamStereoFormat(This,pVideoProcessor,StreamIndex,pEnable,pFormat,pLeftViewFrame0,pBaseViewFrame0,pFlipMode,MonoOffset) )
    ( (This)->lpVtbl -> VideoProcessorGetStreamAutoProcessingMode(This,pVideoProcessor,StreamIndex,pEnabled) )
    ( (This)->lpVtbl -> VideoProcessorGetStreamFilter(This,pVideoProcessor,StreamIndex,Filter,pEnabled,pLevel) )
    ( (This)->lpVtbl -> VideoProcessorGetStreamExtension(This,pVideoProcessor,StreamIndex,pExtensionGuid,DataSize,pData) )
    ( (This)->lpVtbl -> VideoProcessorBlt(This,pVideoProcessor,pView,OutputFrame,StreamCount,pStreams) )
    ( (This)->lpVtbl -> NegotiateCryptoSessionKeyExchange(This,pCryptoSession,DataSize,pData) )
    ( (This)->lpVtbl -> EncryptionBlt(This,pCryptoSession,pSrcSurface,pDstSurface,IVSize,pIV) )
    ( (This)->lpVtbl -> DecryptionBlt(This,pCryptoSession,pSrcSurface,pDstSurface,pEncryptedBlockInfo,ContentKeySize,pContentKey,IVSize,pIV) )
    ( (This)->lpVtbl -> StartSessionKeyRefresh(This,pCryptoSession,RandomNumberSize,pRandomNumber) )
    ( (This)->lpVtbl -> FinishSessionKeyRefresh(This,pCryptoSession) )
    ( (This)->lpVtbl -> GetEncryptionBltKey(This,pCryptoSession,KeySize,pReadbackKey) )
    ( (This)->lpVtbl -> NegotiateAuthenticatedChannelKeyExchange(This,pChannel,DataSize,pData) )
    ( (This)->lpVtbl -> QueryAuthenticatedChannel(This,pChannel,InputSize,pInput,OutputSize,pOutput) )
    ( (This)->lpVtbl -> ConfigureAuthenticatedChannel(This,pChannel,InputSize,pInput,pOutput) )
    ( (This)->lpVtbl -> VideoProcessorSetStreamRotation(This,pVideoProcessor,StreamIndex,Enable,Rotation) )
    ( (This)->lpVtbl -> VideoProcessorGetStreamRotation(This,pVideoProcessor,StreamIndex,pEnable,pRotation) )
EXTERN_C const IID IID_ID3D11VideoDevice;
    typedef struct ID3D11VideoDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11VideoDevice * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11VideoDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11VideoDevice * This);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoDecoder )(
            ID3D11VideoDevice * This,
            _In_ const D3D11_VIDEO_DECODER_DESC *pVideoDesc,
            _In_ const D3D11_VIDEO_DECODER_CONFIG *pConfig,
            _COM_Outptr_ ID3D11VideoDecoder **ppDecoder);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoProcessor )(
            ID3D11VideoDevice * This,
            _In_ ID3D11VideoProcessorEnumerator *pEnum,
            _In_ UINT RateConversionIndex,
            _COM_Outptr_ ID3D11VideoProcessor **ppVideoProcessor);
        HRESULT ( STDMETHODCALLTYPE *CreateAuthenticatedChannel )(
            ID3D11VideoDevice * This,
            _In_ D3D11_AUTHENTICATED_CHANNEL_TYPE ChannelType,
            _COM_Outptr_ ID3D11AuthenticatedChannel **ppAuthenticatedChannel);
        HRESULT ( STDMETHODCALLTYPE *CreateCryptoSession )(
            ID3D11VideoDevice * This,
            _In_ const GUID *pCryptoType,
            _In_opt_ const GUID *pDecoderProfile,
            _In_ const GUID *pKeyExchangeType,
            _COM_Outptr_ ID3D11CryptoSession **ppCryptoSession);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoDecoderOutputView )(
            ID3D11VideoDevice * This,
            _In_ ID3D11Resource *pResource,
            _In_ const D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11VideoDecoderOutputView **ppVDOVView);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoProcessorInputView )(
            ID3D11VideoDevice * This,
            _In_ ID3D11Resource *pResource,
            _In_ ID3D11VideoProcessorEnumerator *pEnum,
            _In_ const D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11VideoProcessorInputView **ppVPIView);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoProcessorOutputView )(
            ID3D11VideoDevice * This,
            _In_ ID3D11Resource *pResource,
            _In_ ID3D11VideoProcessorEnumerator *pEnum,
            _In_ const D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11VideoProcessorOutputView **ppVPOView);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoProcessorEnumerator )(
            ID3D11VideoDevice * This,
            _In_ const D3D11_VIDEO_PROCESSOR_CONTENT_DESC *pDesc,
            _COM_Outptr_ ID3D11VideoProcessorEnumerator **ppEnum);
        UINT ( STDMETHODCALLTYPE *GetVideoDecoderProfileCount )(
            ID3D11VideoDevice * This);
        HRESULT ( STDMETHODCALLTYPE *GetVideoDecoderProfile )(
            ID3D11VideoDevice * This,
            _In_ UINT Index,
            _Out_ GUID *pDecoderProfile);
        HRESULT ( STDMETHODCALLTYPE *CheckVideoDecoderFormat )(
            ID3D11VideoDevice * This,
            _In_ const GUID *pDecoderProfile,
            _In_ DXGI_FORMAT Format,
            _Out_ BOOL *pSupported);
        HRESULT ( STDMETHODCALLTYPE *GetVideoDecoderConfigCount )(
            ID3D11VideoDevice * This,
            _In_ const D3D11_VIDEO_DECODER_DESC *pDesc,
            _Out_ UINT *pCount);
        HRESULT ( STDMETHODCALLTYPE *GetVideoDecoderConfig )(
            ID3D11VideoDevice * This,
            _In_ const D3D11_VIDEO_DECODER_DESC *pDesc,
            _In_ UINT Index,
            _Out_ D3D11_VIDEO_DECODER_CONFIG *pConfig);
        HRESULT ( STDMETHODCALLTYPE *GetContentProtectionCaps )(
            ID3D11VideoDevice * This,
            _In_opt_ const GUID *pCryptoType,
            _In_opt_ const GUID *pDecoderProfile,
            _Out_ D3D11_VIDEO_CONTENT_PROTECTION_CAPS *pCaps);
        HRESULT ( STDMETHODCALLTYPE *CheckCryptoKeyExchange )(
            ID3D11VideoDevice * This,
            _In_ const GUID *pCryptoType,
            _In_opt_ const GUID *pDecoderProfile,
            _In_ UINT Index,
            _Out_ GUID *pKeyExchangeType);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11VideoDevice * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11VideoDevice * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        END_INTERFACE
    } ID3D11VideoDeviceVtbl;
    interface ID3D11VideoDevice
    {
        CONST_VTBL struct ID3D11VideoDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateVideoDecoder(This,pVideoDesc,pConfig,ppDecoder) )
    ( (This)->lpVtbl -> CreateVideoProcessor(This,pEnum,RateConversionIndex,ppVideoProcessor) )
    ( (This)->lpVtbl -> CreateAuthenticatedChannel(This,ChannelType,ppAuthenticatedChannel) )
    ( (This)->lpVtbl -> CreateCryptoSession(This,pCryptoType,pDecoderProfile,pKeyExchangeType,ppCryptoSession) )
    ( (This)->lpVtbl -> CreateVideoDecoderOutputView(This,pResource,pDesc,ppVDOVView) )
    ( (This)->lpVtbl -> CreateVideoProcessorInputView(This,pResource,pEnum,pDesc,ppVPIView) )
    ( (This)->lpVtbl -> CreateVideoProcessorOutputView(This,pResource,pEnum,pDesc,ppVPOView) )
    ( (This)->lpVtbl -> CreateVideoProcessorEnumerator(This,pDesc,ppEnum) )
    ( (This)->lpVtbl -> GetVideoDecoderProfileCount(This) )
    ( (This)->lpVtbl -> GetVideoDecoderProfile(This,Index,pDecoderProfile) )
    ( (This)->lpVtbl -> CheckVideoDecoderFormat(This,pDecoderProfile,Format,pSupported) )
    ( (This)->lpVtbl -> GetVideoDecoderConfigCount(This,pDesc,pCount) )
    ( (This)->lpVtbl -> GetVideoDecoderConfig(This,pDesc,Index,pConfig) )
    ( (This)->lpVtbl -> GetContentProtectionCaps(This,pCryptoType,pDecoderProfile,pCaps) )
    ( (This)->lpVtbl -> CheckCryptoKeyExchange(This,pCryptoType,pDecoderProfile,Index,pKeyExchangeType) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#include <winapifamily.h>
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0040_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11Device;
    typedef struct ID3D11DeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11Device * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11Device * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11Device * This);
        HRESULT ( STDMETHODCALLTYPE *CreateBuffer )(
            ID3D11Device * This,
            _In_ const D3D11_BUFFER_DESC *pDesc,
            _In_opt_ const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Buffer **ppBuffer);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture1D )(
            ID3D11Device * This,
            _In_ const D3D11_TEXTURE1D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels * pDesc->ArraySize)) const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Texture1D **ppTexture1D);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture2D )(
            ID3D11Device * This,
            _In_ const D3D11_TEXTURE2D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels * pDesc->ArraySize)) const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Texture2D **ppTexture2D);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture3D )(
            ID3D11Device * This,
            _In_ const D3D11_TEXTURE3D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels)) const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Texture3D **ppTexture3D);
        HRESULT ( STDMETHODCALLTYPE *CreateShaderResourceView )(
            ID3D11Device * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_SHADER_RESOURCE_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11ShaderResourceView **ppSRView);
        HRESULT ( STDMETHODCALLTYPE *CreateUnorderedAccessView )(
            ID3D11Device * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_UNORDERED_ACCESS_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11UnorderedAccessView **ppUAView);
        HRESULT ( STDMETHODCALLTYPE *CreateRenderTargetView )(
            ID3D11Device * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_RENDER_TARGET_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11RenderTargetView **ppRTView);
        HRESULT ( STDMETHODCALLTYPE *CreateDepthStencilView )(
            ID3D11Device * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_DEPTH_STENCIL_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11DepthStencilView **ppDepthStencilView);
        HRESULT ( STDMETHODCALLTYPE *CreateInputLayout )(
            ID3D11Device * This,
            _In_reads_(NumElements) const D3D11_INPUT_ELEMENT_DESC *pInputElementDescs,
            _In_range_( 0, D3D11_IA_VERTEX_INPUT_STRUCTURE_ELEMENT_COUNT ) UINT NumElements,
            _In_reads_(BytecodeLength) const void *pShaderBytecodeWithInputSignature,
            _In_ SIZE_T BytecodeLength,
            _COM_Outptr_opt_ ID3D11InputLayout **ppInputLayout);
        HRESULT ( STDMETHODCALLTYPE *CreateVertexShader )(
            ID3D11Device * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11VertexShader **ppVertexShader);
        HRESULT ( STDMETHODCALLTYPE *CreateGeometryShader )(
            ID3D11Device * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11GeometryShader **ppGeometryShader);
        HRESULT ( STDMETHODCALLTYPE *CreateGeometryShaderWithStreamOutput )(
            ID3D11Device * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_reads_opt_(NumEntries) const D3D11_SO_DECLARATION_ENTRY *pSODeclaration,
            _In_range_( 0, D3D11_SO_STREAM_COUNT * D3D11_SO_OUTPUT_COMPONENT_COUNT ) UINT NumEntries,
            _In_reads_opt_(NumStrides) const UINT *pBufferStrides,
            _In_range_( 0, D3D11_SO_BUFFER_SLOT_COUNT ) UINT NumStrides,
            _In_ UINT RasterizedStream,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11GeometryShader **ppGeometryShader);
        HRESULT ( STDMETHODCALLTYPE *CreatePixelShader )(
            ID3D11Device * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11PixelShader **ppPixelShader);
        HRESULT ( STDMETHODCALLTYPE *CreateHullShader )(
            ID3D11Device * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11HullShader **ppHullShader);
        HRESULT ( STDMETHODCALLTYPE *CreateDomainShader )(
            ID3D11Device * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11DomainShader **ppDomainShader);
        HRESULT ( STDMETHODCALLTYPE *CreateComputeShader )(
            ID3D11Device * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11ComputeShader **ppComputeShader);
        HRESULT ( STDMETHODCALLTYPE *CreateClassLinkage )(
            ID3D11Device * This,
            _COM_Outptr_ ID3D11ClassLinkage **ppLinkage);
        HRESULT ( STDMETHODCALLTYPE *CreateBlendState )(
            ID3D11Device * This,
            _In_ const D3D11_BLEND_DESC *pBlendStateDesc,
            _COM_Outptr_opt_ ID3D11BlendState **ppBlendState);
        HRESULT ( STDMETHODCALLTYPE *CreateDepthStencilState )(
            ID3D11Device * This,
            _In_ const D3D11_DEPTH_STENCIL_DESC *pDepthStencilDesc,
            _COM_Outptr_opt_ ID3D11DepthStencilState **ppDepthStencilState);
        HRESULT ( STDMETHODCALLTYPE *CreateRasterizerState )(
            ID3D11Device * This,
            _In_ const D3D11_RASTERIZER_DESC *pRasterizerDesc,
            _COM_Outptr_opt_ ID3D11RasterizerState **ppRasterizerState);
        HRESULT ( STDMETHODCALLTYPE *CreateSamplerState )(
            ID3D11Device * This,
            _In_ const D3D11_SAMPLER_DESC *pSamplerDesc,
            _COM_Outptr_opt_ ID3D11SamplerState **ppSamplerState);
        HRESULT ( STDMETHODCALLTYPE *CreateQuery )(
            ID3D11Device * This,
            _In_ const D3D11_QUERY_DESC *pQueryDesc,
            _COM_Outptr_opt_ ID3D11Query **ppQuery);
        HRESULT ( STDMETHODCALLTYPE *CreatePredicate )(
            ID3D11Device * This,
            _In_ const D3D11_QUERY_DESC *pPredicateDesc,
            _COM_Outptr_opt_ ID3D11Predicate **ppPredicate);
        HRESULT ( STDMETHODCALLTYPE *CreateCounter )(
            ID3D11Device * This,
            _In_ const D3D11_COUNTER_DESC *pCounterDesc,
            _COM_Outptr_opt_ ID3D11Counter **ppCounter);
        HRESULT ( STDMETHODCALLTYPE *CreateDeferredContext )(
            ID3D11Device * This,
            UINT ContextFlags,
            _COM_Outptr_opt_ ID3D11DeviceContext **ppDeferredContext);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedResource )(
            ID3D11Device * This,
            _In_ HANDLE hResource,
            _In_ REFIID ReturnedInterface,
            _COM_Outptr_opt_ void **ppResource);
        HRESULT ( STDMETHODCALLTYPE *CheckFormatSupport )(
            ID3D11Device * This,
            _In_ DXGI_FORMAT Format,
            _Out_ UINT *pFormatSupport);
        HRESULT ( STDMETHODCALLTYPE *CheckMultisampleQualityLevels )(
            ID3D11Device * This,
            _In_ DXGI_FORMAT Format,
            _In_ UINT SampleCount,
            _Out_ UINT *pNumQualityLevels);
        void ( STDMETHODCALLTYPE *CheckCounterInfo )(
            ID3D11Device * This,
            _Out_ D3D11_COUNTER_INFO *pCounterInfo);
        HRESULT ( STDMETHODCALLTYPE *CheckCounter )(
            ID3D11Device * This,
            _In_ const D3D11_COUNTER_DESC *pDesc,
            _Out_ D3D11_COUNTER_TYPE *pType,
            _Out_ UINT *pActiveCounters,
            _Out_writes_opt_(*pNameLength) LPSTR szName,
            _Inout_opt_ UINT *pNameLength,
            _Out_writes_opt_(*pUnitsLength) LPSTR szUnits,
            _Inout_opt_ UINT *pUnitsLength,
            _Out_writes_opt_(*pDescriptionLength) LPSTR szDescription,
            _Inout_opt_ UINT *pDescriptionLength);
        HRESULT ( STDMETHODCALLTYPE *CheckFeatureSupport )(
            ID3D11Device * This,
            D3D11_FEATURE Feature,
            _Out_writes_bytes_(FeatureSupportDataSize) void *pFeatureSupportData,
            UINT FeatureSupportDataSize);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11Device * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11Device * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11Device * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        D3D_FEATURE_LEVEL ( STDMETHODCALLTYPE *GetFeatureLevel )(
            ID3D11Device * This);
        UINT ( STDMETHODCALLTYPE *GetCreationFlags )(
            ID3D11Device * This);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceRemovedReason )(
            ID3D11Device * This);
        void ( STDMETHODCALLTYPE *GetImmediateContext )(
            ID3D11Device * This,
            _Outptr_ ID3D11DeviceContext **ppImmediateContext);
        HRESULT ( STDMETHODCALLTYPE *SetExceptionMode )(
            ID3D11Device * This,
            UINT RaiseFlags);
        UINT ( STDMETHODCALLTYPE *GetExceptionMode )(
            ID3D11Device * This);
        END_INTERFACE
    } ID3D11DeviceVtbl;
    interface ID3D11Device
    {
        CONST_VTBL struct ID3D11DeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateBuffer(This,pDesc,pInitialData,ppBuffer) )
    ( (This)->lpVtbl -> CreateTexture1D(This,pDesc,pInitialData,ppTexture1D) )
    ( (This)->lpVtbl -> CreateTexture2D(This,pDesc,pInitialData,ppTexture2D) )
    ( (This)->lpVtbl -> CreateTexture3D(This,pDesc,pInitialData,ppTexture3D) )
    ( (This)->lpVtbl -> CreateShaderResourceView(This,pResource,pDesc,ppSRView) )
    ( (This)->lpVtbl -> CreateUnorderedAccessView(This,pResource,pDesc,ppUAView) )
    ( (This)->lpVtbl -> CreateRenderTargetView(This,pResource,pDesc,ppRTView) )
    ( (This)->lpVtbl -> CreateDepthStencilView(This,pResource,pDesc,ppDepthStencilView) )
    ( (This)->lpVtbl -> CreateInputLayout(This,pInputElementDescs,NumElements,pShaderBytecodeWithInputSignature,BytecodeLength,ppInputLayout) )
    ( (This)->lpVtbl -> CreateVertexShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppVertexShader) )
    ( (This)->lpVtbl -> CreateGeometryShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppGeometryShader) )
    ( (This)->lpVtbl -> CreateGeometryShaderWithStreamOutput(This,pShaderBytecode,BytecodeLength,pSODeclaration,NumEntries,pBufferStrides,NumStrides,RasterizedStream,pClassLinkage,ppGeometryShader) )
    ( (This)->lpVtbl -> CreatePixelShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppPixelShader) )
    ( (This)->lpVtbl -> CreateHullShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppHullShader) )
    ( (This)->lpVtbl -> CreateDomainShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppDomainShader) )
    ( (This)->lpVtbl -> CreateComputeShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppComputeShader) )
    ( (This)->lpVtbl -> CreateClassLinkage(This,ppLinkage) )
    ( (This)->lpVtbl -> CreateBlendState(This,pBlendStateDesc,ppBlendState) )
    ( (This)->lpVtbl -> CreateDepthStencilState(This,pDepthStencilDesc,ppDepthStencilState) )
    ( (This)->lpVtbl -> CreateRasterizerState(This,pRasterizerDesc,ppRasterizerState) )
    ( (This)->lpVtbl -> CreateSamplerState(This,pSamplerDesc,ppSamplerState) )
    ( (This)->lpVtbl -> CreateQuery(This,pQueryDesc,ppQuery) )
    ( (This)->lpVtbl -> CreatePredicate(This,pPredicateDesc,ppPredicate) )
    ( (This)->lpVtbl -> CreateCounter(This,pCounterDesc,ppCounter) )
    ( (This)->lpVtbl -> CreateDeferredContext(This,ContextFlags,ppDeferredContext) )
    ( (This)->lpVtbl -> OpenSharedResource(This,hResource,ReturnedInterface,ppResource) )
    ( (This)->lpVtbl -> CheckFormatSupport(This,Format,pFormatSupport) )
    ( (This)->lpVtbl -> CheckMultisampleQualityLevels(This,Format,SampleCount,pNumQualityLevels) )
    ( (This)->lpVtbl -> CheckCounterInfo(This,pCounterInfo) )
    ( (This)->lpVtbl -> CheckCounter(This,pDesc,pType,pActiveCounters,szName,pNameLength,szUnits,pUnitsLength,szDescription,pDescriptionLength) )
    ( (This)->lpVtbl -> CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetFeatureLevel(This) )
    ( (This)->lpVtbl -> GetCreationFlags(This) )
    ( (This)->lpVtbl -> GetDeviceRemovedReason(This) )
    ( (This)->lpVtbl -> GetImmediateContext(This,ppImmediateContext) )
    ( (This)->lpVtbl -> SetExceptionMode(This,RaiseFlags) )
    ( (This)->lpVtbl -> GetExceptionMode(This) )
typedef
enum D3D11_CREATE_DEVICE_FLAG
    {
        D3D11_CREATE_DEVICE_SINGLETHREADED = 0x1,
        D3D11_CREATE_DEVICE_DEBUG = 0x2,
        D3D11_CREATE_DEVICE_SWITCH_TO_REF = 0x4,
        D3D11_CREATE_DEVICE_PREVENT_INTERNAL_THREADING_OPTIMIZATIONS = 0x8,
        D3D11_CREATE_DEVICE_BGRA_SUPPORT = 0x20,
        D3D11_CREATE_DEVICE_DEBUGGABLE = 0x40,
        D3D11_CREATE_DEVICE_PREVENT_ALTERING_LAYER_SETTINGS_FROM_REGISTRY = 0x80,
        D3D11_CREATE_DEVICE_DISABLE_GPU_TIMEOUT = 0x100,
        D3D11_CREATE_DEVICE_VIDEO_SUPPORT = 0x800
    } D3D11_CREATE_DEVICE_FLAG;
#include "d3d11sdklayers.h"
#include "d3d10_1.h"
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "d3d10shader.h"
#include "d3d10_1shader.h"
#include "d3d10misc.h"
#include "d3d10effect.h"
#endif
#pragma endregion
typedef HRESULT (WINAPI* PFN_D3D11_CREATE_DEVICE)( _In_opt_ IDXGIAdapter*,
    D3D_DRIVER_TYPE, HMODULE, UINT,
    _In_reads_opt_( FeatureLevels ) CONST D3D_FEATURE_LEVEL*,
    UINT FeatureLevels, UINT, _COM_Outptr_opt_ ID3D11Device**,
    _Out_opt_ D3D_FEATURE_LEVEL*, _COM_Outptr_opt_ ID3D11DeviceContext** );
HRESULT WINAPI D3D11CreateDevice(
    _In_opt_ IDXGIAdapter* pAdapter,
    D3D_DRIVER_TYPE DriverType,
    HMODULE Software,
    UINT Flags,
    _In_reads_opt_( FeatureLevels ) CONST D3D_FEATURE_LEVEL* pFeatureLevels,
    UINT FeatureLevels,
    UINT SDKVersion,
    _COM_Outptr_opt_ ID3D11Device** ppDevice,
    _Out_opt_ D3D_FEATURE_LEVEL* pFeatureLevel,
    _COM_Outptr_opt_ ID3D11DeviceContext** ppImmediateContext );
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef HRESULT (WINAPI* PFN_D3D11_CREATE_DEVICE_AND_SWAP_CHAIN)( _In_opt_ IDXGIAdapter*,
    D3D_DRIVER_TYPE, HMODULE, UINT,
    _In_reads_opt_( FeatureLevels ) CONST D3D_FEATURE_LEVEL*,
    UINT FeatureLevels, UINT, _In_opt_ CONST DXGI_SWAP_CHAIN_DESC*,
    _COM_Outptr_opt_ IDXGISwapChain**, _COM_Outptr_opt_ ID3D11Device**,
    _Out_opt_ D3D_FEATURE_LEVEL*, _COM_Outptr_opt_ ID3D11DeviceContext** );
HRESULT WINAPI D3D11CreateDeviceAndSwapChain(
    _In_opt_ IDXGIAdapter* pAdapter,
    D3D_DRIVER_TYPE DriverType,
    HMODULE Software,
    UINT Flags,
    _In_reads_opt_( FeatureLevels ) CONST D3D_FEATURE_LEVEL* pFeatureLevels,
    UINT FeatureLevels,
    UINT SDKVersion,
    _In_opt_ CONST DXGI_SWAP_CHAIN_DESC* pSwapChainDesc,
    _COM_Outptr_opt_ IDXGISwapChain** ppSwapChain,
    _COM_Outptr_opt_ ID3D11Device** ppDevice,
    _Out_opt_ D3D_FEATURE_LEVEL* pFeatureLevel,
    _COM_Outptr_opt_ ID3D11DeviceContext** ppImmediateContext );
#endif
#pragma endregion
DEFINE_GUID(IID_ID3D11DeviceChild,0x1841e5c8,0x16b0,0x489b,0xbc,0xc8,0x44,0xcf,0xb0,0xd5,0xde,0xae);
DEFINE_GUID(IID_ID3D11DepthStencilState,0x03823efb,0x8d8f,0x4e1c,0x9a,0xa2,0xf6,0x4b,0xb2,0xcb,0xfd,0xf1);
DEFINE_GUID(IID_ID3D11BlendState,0x75b68faa,0x347d,0x4159,0x8f,0x45,0xa0,0x64,0x0f,0x01,0xcd,0x9a);
DEFINE_GUID(IID_ID3D11RasterizerState,0x9bb4ab81,0xab1a,0x4d8f,0xb5,0x06,0xfc,0x04,0x20,0x0b,0x6e,0xe7);
DEFINE_GUID(IID_ID3D11Resource,0xdc8e63f3,0xd12b,0x4952,0xb4,0x7b,0x5e,0x45,0x02,0x6a,0x86,0x2d);
DEFINE_GUID(IID_ID3D11Buffer,0x48570b85,0xd1ee,0x4fcd,0xa2,0x50,0xeb,0x35,0x07,0x22,0xb0,0x37);
DEFINE_GUID(IID_ID3D11Texture1D,0xf8fb5c27,0xc6b3,0x4f75,0xa4,0xc8,0x43,0x9a,0xf2,0xef,0x56,0x4c);
DEFINE_GUID(IID_ID3D11Texture2D,0x6f15aaf2,0xd208,0x4e89,0x9a,0xb4,0x48,0x95,0x35,0xd3,0x4f,0x9c);
DEFINE_GUID(IID_ID3D11Texture3D,0x037e866e,0xf56d,0x4357,0xa8,0xaf,0x9d,0xab,0xbe,0x6e,0x25,0x0e);
DEFINE_GUID(IID_ID3D11View,0x839d1216,0xbb2e,0x412b,0xb7,0xf4,0xa9,0xdb,0xeb,0xe0,0x8e,0xd1);
DEFINE_GUID(IID_ID3D11ShaderResourceView,0xb0e06fe0,0x8192,0x4e1a,0xb1,0xca,0x36,0xd7,0x41,0x47,0x10,0xb2);
DEFINE_GUID(IID_ID3D11RenderTargetView,0xdfdba067,0x0b8d,0x4865,0x87,0x5b,0xd7,0xb4,0x51,0x6c,0xc1,0x64);
DEFINE_GUID(IID_ID3D11DepthStencilView,0x9fdac92a,0x1876,0x48c3,0xaf,0xad,0x25,0xb9,0x4f,0x84,0xa9,0xb6);
DEFINE_GUID(IID_ID3D11UnorderedAccessView,0x28acf509,0x7f5c,0x48f6,0x86,0x11,0xf3,0x16,0x01,0x0a,0x63,0x80);
DEFINE_GUID(IID_ID3D11VertexShader,0x3b301d64,0xd678,0x4289,0x88,0x97,0x22,0xf8,0x92,0x8b,0x72,0xf3);
DEFINE_GUID(IID_ID3D11HullShader,0x8e5c6061,0x628a,0x4c8e,0x82,0x64,0xbb,0xe4,0x5c,0xb3,0xd5,0xdd);
DEFINE_GUID(IID_ID3D11DomainShader,0xf582c508,0x0f36,0x490c,0x99,0x77,0x31,0xee,0xce,0x26,0x8c,0xfa);
DEFINE_GUID(IID_ID3D11GeometryShader,0x38325b96,0xeffb,0x4022,0xba,0x02,0x2e,0x79,0x5b,0x70,0x27,0x5c);
DEFINE_GUID(IID_ID3D11PixelShader,0xea82e40d,0x51dc,0x4f33,0x93,0xd4,0xdb,0x7c,0x91,0x25,0xae,0x8c);
DEFINE_GUID(IID_ID3D11ComputeShader,0x4f5b196e,0xc2bd,0x495e,0xbd,0x01,0x1f,0xde,0xd3,0x8e,0x49,0x69);
DEFINE_GUID(IID_ID3D11InputLayout,0xe4819ddc,0x4cf0,0x4025,0xbd,0x26,0x5d,0xe8,0x2a,0x3e,0x07,0xb7);
DEFINE_GUID(IID_ID3D11SamplerState,0xda6fea51,0x564c,0x4487,0x98,0x10,0xf0,0xd0,0xf9,0xb4,0xe3,0xa5);
DEFINE_GUID(IID_ID3D11Asynchronous,0x4b35d0cd,0x1e15,0x4258,0x9c,0x98,0x1b,0x13,0x33,0xf6,0xdd,0x3b);
DEFINE_GUID(IID_ID3D11Query,0xd6c00747,0x87b7,0x425e,0xb8,0x4d,0x44,0xd1,0x08,0x56,0x0a,0xfd);
DEFINE_GUID(IID_ID3D11Predicate,0x9eb576dd,0x9f77,0x4d86,0x81,0xaa,0x8b,0xab,0x5f,0xe4,0x90,0xe2);
DEFINE_GUID(IID_ID3D11Counter,0x6e8c49fb,0xa371,0x4770,0xb4,0x40,0x29,0x08,0x60,0x22,0xb7,0x41);
DEFINE_GUID(IID_ID3D11ClassInstance,0xa6cd7faa,0xb0b7,0x4a2f,0x94,0x36,0x86,0x62,0xa6,0x57,0x97,0xcb);
DEFINE_GUID(IID_ID3D11ClassLinkage,0xddf57cba,0x9543,0x46e4,0xa1,0x2b,0xf2,0x07,0xa0,0xfe,0x7f,0xed);
DEFINE_GUID(IID_ID3D11CommandList,0xa24bc4d1,0x769e,0x43f7,0x80,0x13,0x98,0xff,0x56,0x6c,0x18,0xe2);
DEFINE_GUID(IID_ID3D11DeviceContext,0xc0bfa96c,0xe089,0x44fb,0x8e,0xaf,0x26,0xf8,0x79,0x61,0x90,0xda);
DEFINE_GUID(IID_ID3D11VideoDecoder,0x3C9C5B51,0x995D,0x48d1,0x9B,0x8D,0xFA,0x5C,0xAE,0xDE,0xD6,0x5C);
DEFINE_GUID(IID_ID3D11VideoProcessorEnumerator,0x31627037,0x53AB,0x4200,0x90,0x61,0x05,0xFA,0xA9,0xAB,0x45,0xF9);
DEFINE_GUID(IID_ID3D11VideoProcessor,0x1D7B0652,0x185F,0x41c6,0x85,0xCE,0x0C,0x5B,0xE3,0xD4,0xAE,0x6C);
DEFINE_GUID(IID_ID3D11AuthenticatedChannel,0x3015A308,0xDCBD,0x47aa,0xA7,0x47,0x19,0x24,0x86,0xD1,0x4D,0x4A);
DEFINE_GUID(IID_ID3D11CryptoSession,0x9B32F9AD,0xBDCC,0x40a6,0xA3,0x9D,0xD5,0xC8,0x65,0x84,0x57,0x20);
DEFINE_GUID(IID_ID3D11VideoDecoderOutputView,0xC2931AEA,0x2A85,0x4f20,0x86,0x0F,0xFB,0xA1,0xFD,0x25,0x6E,0x18);
DEFINE_GUID(IID_ID3D11VideoProcessorInputView,0x11EC5A5F,0x51DC,0x4945,0xAB,0x34,0x6E,0x8C,0x21,0x30,0x0E,0xA5);
DEFINE_GUID(IID_ID3D11VideoProcessorOutputView,0xA048285E,0x25A9,0x4527,0xBD,0x93,0xD6,0x8B,0x68,0xC4,0x42,0x54);
DEFINE_GUID(IID_ID3D11VideoContext,0x61F21C45,0x3C0E,0x4a74,0x9C,0xEA,0x67,0x10,0x0D,0x9A,0xD5,0xE4);
DEFINE_GUID(IID_ID3D11VideoDevice,0x10EC4D5B,0x975A,0x4689,0xB9,0xE4,0xD0,0xAA,0xC3,0x0F,0xE3,0x33);
DEFINE_GUID(IID_ID3D11Device,0xdb6f6ddb,0xac77,0x4e88,0x82,0x53,0x81,0x9d,0xf9,0xbb,0xf1,0x40);
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0041_v0_0_s_ifspec;
}
