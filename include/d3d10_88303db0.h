#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ID3D10DeviceChild ID3D10DeviceChild;
typedef interface ID3D10DepthStencilState ID3D10DepthStencilState;
typedef interface ID3D10BlendState ID3D10BlendState;
typedef interface ID3D10RasterizerState ID3D10RasterizerState;
typedef interface ID3D10Resource ID3D10Resource;
typedef interface ID3D10Buffer ID3D10Buffer;
typedef interface ID3D10Texture1D ID3D10Texture1D;
typedef interface ID3D10Texture2D ID3D10Texture2D;
typedef interface ID3D10Texture3D ID3D10Texture3D;
typedef interface ID3D10View ID3D10View;
typedef interface ID3D10ShaderResourceView ID3D10ShaderResourceView;
typedef interface ID3D10RenderTargetView ID3D10RenderTargetView;
typedef interface ID3D10DepthStencilView ID3D10DepthStencilView;
typedef interface ID3D10VertexShader ID3D10VertexShader;
typedef interface ID3D10GeometryShader ID3D10GeometryShader;
typedef interface ID3D10PixelShader ID3D10PixelShader;
typedef interface ID3D10InputLayout ID3D10InputLayout;
typedef interface ID3D10SamplerState ID3D10SamplerState;
typedef interface ID3D10Asynchronous ID3D10Asynchronous;
typedef interface ID3D10Query ID3D10Query;
typedef interface ID3D10Predicate ID3D10Predicate;
typedef interface ID3D10Counter ID3D10Counter;
typedef interface ID3D10Device ID3D10Device;
typedef interface ID3D10Multithread ID3D10Multithread;
#include "oaidl.h"
#include "ocidl.h"
#include "dxgi.h"
#include "d3dcommon.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum D3D10_INPUT_CLASSIFICATION
    {
        D3D10_INPUT_PER_VERTEX_DATA = 0,
        D3D10_INPUT_PER_INSTANCE_DATA = 1
    } D3D10_INPUT_CLASSIFICATION;
typedef struct D3D10_INPUT_ELEMENT_DESC
    {
    LPCSTR SemanticName;
    UINT SemanticIndex;
    DXGI_FORMAT Format;
    UINT InputSlot;
    UINT AlignedByteOffset;
    D3D10_INPUT_CLASSIFICATION InputSlotClass;
    UINT InstanceDataStepRate;
    } D3D10_INPUT_ELEMENT_DESC;
typedef
enum D3D10_FILL_MODE
    {
        D3D10_FILL_WIREFRAME = 2,
        D3D10_FILL_SOLID = 3
    } D3D10_FILL_MODE;
typedef D3D_PRIMITIVE_TOPOLOGY D3D10_PRIMITIVE_TOPOLOGY;
typedef D3D_PRIMITIVE D3D10_PRIMITIVE;
typedef
enum D3D10_CULL_MODE
    {
        D3D10_CULL_NONE = 1,
        D3D10_CULL_FRONT = 2,
        D3D10_CULL_BACK = 3
    } D3D10_CULL_MODE;
typedef struct D3D10_SO_DECLARATION_ENTRY
    {
    LPCSTR SemanticName;
    UINT SemanticIndex;
    BYTE StartComponent;
    BYTE ComponentCount;
    BYTE OutputSlot;
    } D3D10_SO_DECLARATION_ENTRY;
typedef struct D3D10_VIEWPORT
    {
    INT TopLeftX;
    INT TopLeftY;
    UINT Width;
    UINT Height;
    FLOAT MinDepth;
    FLOAT MaxDepth;
    } D3D10_VIEWPORT;
typedef
enum D3D10_RESOURCE_DIMENSION
    {
        D3D10_RESOURCE_DIMENSION_UNKNOWN = 0,
        D3D10_RESOURCE_DIMENSION_BUFFER = 1,
        D3D10_RESOURCE_DIMENSION_TEXTURE1D = 2,
        D3D10_RESOURCE_DIMENSION_TEXTURE2D = 3,
        D3D10_RESOURCE_DIMENSION_TEXTURE3D = 4
    } D3D10_RESOURCE_DIMENSION;
typedef D3D_SRV_DIMENSION D3D10_SRV_DIMENSION;
typedef
enum D3D10_DSV_DIMENSION
    {
        D3D10_DSV_DIMENSION_UNKNOWN = 0,
        D3D10_DSV_DIMENSION_TEXTURE1D = 1,
        D3D10_DSV_DIMENSION_TEXTURE1DARRAY = 2,
        D3D10_DSV_DIMENSION_TEXTURE2D = 3,
        D3D10_DSV_DIMENSION_TEXTURE2DARRAY = 4,
        D3D10_DSV_DIMENSION_TEXTURE2DMS = 5,
        D3D10_DSV_DIMENSION_TEXTURE2DMSARRAY = 6
    } D3D10_DSV_DIMENSION;
typedef
enum D3D10_RTV_DIMENSION
    {
        D3D10_RTV_DIMENSION_UNKNOWN = 0,
        D3D10_RTV_DIMENSION_BUFFER = 1,
        D3D10_RTV_DIMENSION_TEXTURE1D = 2,
        D3D10_RTV_DIMENSION_TEXTURE1DARRAY = 3,
        D3D10_RTV_DIMENSION_TEXTURE2D = 4,
        D3D10_RTV_DIMENSION_TEXTURE2DARRAY = 5,
        D3D10_RTV_DIMENSION_TEXTURE2DMS = 6,
        D3D10_RTV_DIMENSION_TEXTURE2DMSARRAY = 7,
        D3D10_RTV_DIMENSION_TEXTURE3D = 8
    } D3D10_RTV_DIMENSION;
typedef
enum D3D10_USAGE
    {
        D3D10_USAGE_DEFAULT = 0,
        D3D10_USAGE_IMMUTABLE = 1,
        D3D10_USAGE_DYNAMIC = 2,
        D3D10_USAGE_STAGING = 3
    } D3D10_USAGE;
typedef
enum D3D10_BIND_FLAG
    {
        D3D10_BIND_VERTEX_BUFFER = 0x1L,
        D3D10_BIND_INDEX_BUFFER = 0x2L,
        D3D10_BIND_CONSTANT_BUFFER = 0x4L,
        D3D10_BIND_SHADER_RESOURCE = 0x8L,
        D3D10_BIND_STREAM_OUTPUT = 0x10L,
        D3D10_BIND_RENDER_TARGET = 0x20L,
        D3D10_BIND_DEPTH_STENCIL = 0x40L
    } D3D10_BIND_FLAG;
typedef
enum D3D10_CPU_ACCESS_FLAG
    {
        D3D10_CPU_ACCESS_WRITE = 0x10000L,
        D3D10_CPU_ACCESS_READ = 0x20000L
    } D3D10_CPU_ACCESS_FLAG;
typedef
enum D3D10_RESOURCE_MISC_FLAG
    {
        D3D10_RESOURCE_MISC_GENERATE_MIPS = 0x1L,
        D3D10_RESOURCE_MISC_SHARED = 0x2L,
        D3D10_RESOURCE_MISC_TEXTURECUBE = 0x4L,
        D3D10_RESOURCE_MISC_SHARED_KEYEDMUTEX = 0x10L,
        D3D10_RESOURCE_MISC_GDI_COMPATIBLE = 0x20L
    } D3D10_RESOURCE_MISC_FLAG;
typedef
enum D3D10_MAP
    {
        D3D10_MAP_READ = 1,
        D3D10_MAP_WRITE = 2,
        D3D10_MAP_READ_WRITE = 3,
        D3D10_MAP_WRITE_DISCARD = 4,
        D3D10_MAP_WRITE_NO_OVERWRITE = 5
    } D3D10_MAP;
typedef
enum D3D10_MAP_FLAG
    {
        D3D10_MAP_FLAG_DO_NOT_WAIT = 0x100000L
    } D3D10_MAP_FLAG;
typedef
enum D3D10_RAISE_FLAG
    {
        D3D10_RAISE_FLAG_DRIVER_INTERNAL_ERROR = 0x1L
    } D3D10_RAISE_FLAG;
typedef
enum D3D10_CLEAR_FLAG
    {
        D3D10_CLEAR_DEPTH = 0x1L,
        D3D10_CLEAR_STENCIL = 0x2L
    } D3D10_CLEAR_FLAG;
typedef RECT D3D10_RECT;
typedef struct D3D10_BOX
    {
    UINT left;
    UINT top;
    UINT front;
    UINT right;
    UINT bottom;
    UINT back;
    } D3D10_BOX;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10DeviceChild;
    typedef struct ID3D10DeviceChildVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10DeviceChild * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10DeviceChild * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10DeviceChild * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10DeviceChild * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10DeviceChild * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10DeviceChild * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10DeviceChild * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        END_INTERFACE
    } ID3D10DeviceChildVtbl;
    interface ID3D10DeviceChild
    {
        CONST_VTBL struct ID3D10DeviceChildVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
typedef
enum D3D10_COMPARISON_FUNC
    {
        D3D10_COMPARISON_NEVER = 1,
        D3D10_COMPARISON_LESS = 2,
        D3D10_COMPARISON_EQUAL = 3,
        D3D10_COMPARISON_LESS_EQUAL = 4,
        D3D10_COMPARISON_GREATER = 5,
        D3D10_COMPARISON_NOT_EQUAL = 6,
        D3D10_COMPARISON_GREATER_EQUAL = 7,
        D3D10_COMPARISON_ALWAYS = 8
    } D3D10_COMPARISON_FUNC;
typedef
enum D3D10_DEPTH_WRITE_MASK
    {
        D3D10_DEPTH_WRITE_MASK_ZERO = 0,
        D3D10_DEPTH_WRITE_MASK_ALL = 1
    } D3D10_DEPTH_WRITE_MASK;
typedef
enum D3D10_STENCIL_OP
    {
        D3D10_STENCIL_OP_KEEP = 1,
        D3D10_STENCIL_OP_ZERO = 2,
        D3D10_STENCIL_OP_REPLACE = 3,
        D3D10_STENCIL_OP_INCR_SAT = 4,
        D3D10_STENCIL_OP_DECR_SAT = 5,
        D3D10_STENCIL_OP_INVERT = 6,
        D3D10_STENCIL_OP_INCR = 7,
        D3D10_STENCIL_OP_DECR = 8
    } D3D10_STENCIL_OP;
typedef struct D3D10_DEPTH_STENCILOP_DESC
    {
    D3D10_STENCIL_OP StencilFailOp;
    D3D10_STENCIL_OP StencilDepthFailOp;
    D3D10_STENCIL_OP StencilPassOp;
    D3D10_COMPARISON_FUNC StencilFunc;
    } D3D10_DEPTH_STENCILOP_DESC;
typedef struct D3D10_DEPTH_STENCIL_DESC
    {
    BOOL DepthEnable;
    D3D10_DEPTH_WRITE_MASK DepthWriteMask;
    D3D10_COMPARISON_FUNC DepthFunc;
    BOOL StencilEnable;
    UINT8 StencilReadMask;
    UINT8 StencilWriteMask;
    D3D10_DEPTH_STENCILOP_DESC FrontFace;
    D3D10_DEPTH_STENCILOP_DESC BackFace;
    } D3D10_DEPTH_STENCIL_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10DepthStencilState;
    typedef struct ID3D10DepthStencilStateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10DepthStencilState * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10DepthStencilState * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10DepthStencilState * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10DepthStencilState * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10DepthStencilState * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10DepthStencilState * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10DepthStencilState * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D10DepthStencilState * This,
            _Out_ D3D10_DEPTH_STENCIL_DESC *pDesc);
        END_INTERFACE
    } ID3D10DepthStencilStateVtbl;
    interface ID3D10DepthStencilState
    {
        CONST_VTBL struct ID3D10DepthStencilStateVtbl *lpVtbl;
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
enum D3D10_BLEND
    {
        D3D10_BLEND_ZERO = 1,
        D3D10_BLEND_ONE = 2,
        D3D10_BLEND_SRC_COLOR = 3,
        D3D10_BLEND_INV_SRC_COLOR = 4,
        D3D10_BLEND_SRC_ALPHA = 5,
        D3D10_BLEND_INV_SRC_ALPHA = 6,
        D3D10_BLEND_DEST_ALPHA = 7,
        D3D10_BLEND_INV_DEST_ALPHA = 8,
        D3D10_BLEND_DEST_COLOR = 9,
        D3D10_BLEND_INV_DEST_COLOR = 10,
        D3D10_BLEND_SRC_ALPHA_SAT = 11,
        D3D10_BLEND_BLEND_FACTOR = 14,
        D3D10_BLEND_INV_BLEND_FACTOR = 15,
        D3D10_BLEND_SRC1_COLOR = 16,
        D3D10_BLEND_INV_SRC1_COLOR = 17,
        D3D10_BLEND_SRC1_ALPHA = 18,
        D3D10_BLEND_INV_SRC1_ALPHA = 19
    } D3D10_BLEND;
typedef
enum D3D10_BLEND_OP
    {
        D3D10_BLEND_OP_ADD = 1,
        D3D10_BLEND_OP_SUBTRACT = 2,
        D3D10_BLEND_OP_REV_SUBTRACT = 3,
        D3D10_BLEND_OP_MIN = 4,
        D3D10_BLEND_OP_MAX = 5
    } D3D10_BLEND_OP;
typedef
enum D3D10_COLOR_WRITE_ENABLE
    {
        D3D10_COLOR_WRITE_ENABLE_RED = 1,
        D3D10_COLOR_WRITE_ENABLE_GREEN = 2,
        D3D10_COLOR_WRITE_ENABLE_BLUE = 4,
        D3D10_COLOR_WRITE_ENABLE_ALPHA = 8,
        D3D10_COLOR_WRITE_ENABLE_ALL = ( ( ( D3D10_COLOR_WRITE_ENABLE_RED | D3D10_COLOR_WRITE_ENABLE_GREEN ) | D3D10_COLOR_WRITE_ENABLE_BLUE ) | D3D10_COLOR_WRITE_ENABLE_ALPHA )
    } D3D10_COLOR_WRITE_ENABLE;
typedef struct D3D10_BLEND_DESC
    {
    BOOL AlphaToCoverageEnable;
    BOOL BlendEnable[ 8 ];
    D3D10_BLEND SrcBlend;
    D3D10_BLEND DestBlend;
    D3D10_BLEND_OP BlendOp;
    D3D10_BLEND SrcBlendAlpha;
    D3D10_BLEND DestBlendAlpha;
    D3D10_BLEND_OP BlendOpAlpha;
    UINT8 RenderTargetWriteMask[ 8 ];
    } D3D10_BLEND_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10BlendState;
    typedef struct ID3D10BlendStateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10BlendState * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10BlendState * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10BlendState * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10BlendState * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10BlendState * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10BlendState * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10BlendState * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D10BlendState * This,
            _Out_ D3D10_BLEND_DESC *pDesc);
        END_INTERFACE
    } ID3D10BlendStateVtbl;
    interface ID3D10BlendState
    {
        CONST_VTBL struct ID3D10BlendStateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef struct D3D10_RASTERIZER_DESC
    {
    D3D10_FILL_MODE FillMode;
    D3D10_CULL_MODE CullMode;
    BOOL FrontCounterClockwise;
    INT DepthBias;
    FLOAT DepthBiasClamp;
    FLOAT SlopeScaledDepthBias;
    BOOL DepthClipEnable;
    BOOL ScissorEnable;
    BOOL MultisampleEnable;
    BOOL AntialiasedLineEnable;
    } D3D10_RASTERIZER_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10RasterizerState;
    typedef struct ID3D10RasterizerStateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10RasterizerState * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10RasterizerState * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10RasterizerState * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10RasterizerState * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10RasterizerState * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10RasterizerState * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10RasterizerState * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D10RasterizerState * This,
            _Out_ D3D10_RASTERIZER_DESC *pDesc);
        END_INTERFACE
    } ID3D10RasterizerStateVtbl;
    interface ID3D10RasterizerState
    {
        CONST_VTBL struct ID3D10RasterizerStateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef struct D3D10_SUBRESOURCE_DATA
    {
    const void *pSysMem;
    UINT SysMemPitch;
    UINT SysMemSlicePitch;
    } D3D10_SUBRESOURCE_DATA;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10Resource;
    typedef struct ID3D10ResourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10Resource * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10Resource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10Resource * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10Resource * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10Resource * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10Resource * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10Resource * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetType )(
            ID3D10Resource * This,
            _Out_ D3D10_RESOURCE_DIMENSION *rType);
        void ( STDMETHODCALLTYPE *SetEvictionPriority )(
            ID3D10Resource * This,
            _In_ UINT EvictionPriority);
        UINT ( STDMETHODCALLTYPE *GetEvictionPriority )(
            ID3D10Resource * This);
        END_INTERFACE
    } ID3D10ResourceVtbl;
    interface ID3D10Resource
    {
        CONST_VTBL struct ID3D10ResourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetType(This,rType) )
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) )
    ( (This)->lpVtbl -> GetEvictionPriority(This) )
typedef struct D3D10_BUFFER_DESC
    {
    UINT ByteWidth;
    D3D10_USAGE Usage;
    UINT BindFlags;
    UINT CPUAccessFlags;
    UINT MiscFlags;
    } D3D10_BUFFER_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10Buffer;
    typedef struct ID3D10BufferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10Buffer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10Buffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10Buffer * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10Buffer * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10Buffer * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10Buffer * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10Buffer * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetType )(
            ID3D10Buffer * This,
            _Out_ D3D10_RESOURCE_DIMENSION *rType);
        void ( STDMETHODCALLTYPE *SetEvictionPriority )(
            ID3D10Buffer * This,
            _In_ UINT EvictionPriority);
        UINT ( STDMETHODCALLTYPE *GetEvictionPriority )(
            ID3D10Buffer * This);
        HRESULT ( STDMETHODCALLTYPE *Map )(
            ID3D10Buffer * This,
            _In_ D3D10_MAP MapType,
            _In_ UINT MapFlags,
            _Out_ void **ppData);
        void ( STDMETHODCALLTYPE *Unmap )(
            ID3D10Buffer * This);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D10Buffer * This,
            _Out_ D3D10_BUFFER_DESC *pDesc);
        END_INTERFACE
    } ID3D10BufferVtbl;
    interface ID3D10Buffer
    {
        CONST_VTBL struct ID3D10BufferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetType(This,rType) )
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) )
    ( (This)->lpVtbl -> GetEvictionPriority(This) )
    ( (This)->lpVtbl -> Map(This,MapType,MapFlags,ppData) )
    ( (This)->lpVtbl -> Unmap(This) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef struct D3D10_TEXTURE1D_DESC
    {
    UINT Width;
    UINT MipLevels;
    UINT ArraySize;
    DXGI_FORMAT Format;
    D3D10_USAGE Usage;
    UINT BindFlags;
    UINT CPUAccessFlags;
    UINT MiscFlags;
    } D3D10_TEXTURE1D_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10Texture1D;
    typedef struct ID3D10Texture1DVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10Texture1D * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10Texture1D * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10Texture1D * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10Texture1D * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10Texture1D * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10Texture1D * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10Texture1D * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetType )(
            ID3D10Texture1D * This,
            _Out_ D3D10_RESOURCE_DIMENSION *rType);
        void ( STDMETHODCALLTYPE *SetEvictionPriority )(
            ID3D10Texture1D * This,
            _In_ UINT EvictionPriority);
        UINT ( STDMETHODCALLTYPE *GetEvictionPriority )(
            ID3D10Texture1D * This);
        HRESULT ( STDMETHODCALLTYPE *Map )(
            ID3D10Texture1D * This,
            _In_ UINT Subresource,
            _In_ D3D10_MAP MapType,
            _In_ UINT MapFlags,
            _Out_ void **ppData);
        void ( STDMETHODCALLTYPE *Unmap )(
            ID3D10Texture1D * This,
            _In_ UINT Subresource);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D10Texture1D * This,
            _Out_ D3D10_TEXTURE1D_DESC *pDesc);
        END_INTERFACE
    } ID3D10Texture1DVtbl;
    interface ID3D10Texture1D
    {
        CONST_VTBL struct ID3D10Texture1DVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetType(This,rType) )
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) )
    ( (This)->lpVtbl -> GetEvictionPriority(This) )
    ( (This)->lpVtbl -> Map(This,Subresource,MapType,MapFlags,ppData) )
    ( (This)->lpVtbl -> Unmap(This,Subresource) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef struct D3D10_TEXTURE2D_DESC
    {
    UINT Width;
    UINT Height;
    UINT MipLevels;
    UINT ArraySize;
    DXGI_FORMAT Format;
    DXGI_SAMPLE_DESC SampleDesc;
    D3D10_USAGE Usage;
    UINT BindFlags;
    UINT CPUAccessFlags;
    UINT MiscFlags;
    } D3D10_TEXTURE2D_DESC;
typedef struct D3D10_MAPPED_TEXTURE2D
    {
    void *pData;
    UINT RowPitch;
    } D3D10_MAPPED_TEXTURE2D;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10Texture2D;
    typedef struct ID3D10Texture2DVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10Texture2D * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10Texture2D * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10Texture2D * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10Texture2D * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10Texture2D * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10Texture2D * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10Texture2D * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetType )(
            ID3D10Texture2D * This,
            _Out_ D3D10_RESOURCE_DIMENSION *rType);
        void ( STDMETHODCALLTYPE *SetEvictionPriority )(
            ID3D10Texture2D * This,
            _In_ UINT EvictionPriority);
        UINT ( STDMETHODCALLTYPE *GetEvictionPriority )(
            ID3D10Texture2D * This);
        HRESULT ( STDMETHODCALLTYPE *Map )(
            ID3D10Texture2D * This,
            _In_ UINT Subresource,
            _In_ D3D10_MAP MapType,
            _In_ UINT MapFlags,
            _Out_ D3D10_MAPPED_TEXTURE2D *pMappedTex2D);
        void ( STDMETHODCALLTYPE *Unmap )(
            ID3D10Texture2D * This,
            _In_ UINT Subresource);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D10Texture2D * This,
            _Out_ D3D10_TEXTURE2D_DESC *pDesc);
        END_INTERFACE
    } ID3D10Texture2DVtbl;
    interface ID3D10Texture2D
    {
        CONST_VTBL struct ID3D10Texture2DVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetType(This,rType) )
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) )
    ( (This)->lpVtbl -> GetEvictionPriority(This) )
    ( (This)->lpVtbl -> Map(This,Subresource,MapType,MapFlags,pMappedTex2D) )
    ( (This)->lpVtbl -> Unmap(This,Subresource) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef struct D3D10_TEXTURE3D_DESC
    {
    UINT Width;
    UINT Height;
    UINT Depth;
    UINT MipLevels;
    DXGI_FORMAT Format;
    D3D10_USAGE Usage;
    UINT BindFlags;
    UINT CPUAccessFlags;
    UINT MiscFlags;
    } D3D10_TEXTURE3D_DESC;
typedef struct D3D10_MAPPED_TEXTURE3D
    {
    void *pData;
    UINT RowPitch;
    UINT DepthPitch;
    } D3D10_MAPPED_TEXTURE3D;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10Texture3D;
    typedef struct ID3D10Texture3DVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10Texture3D * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10Texture3D * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10Texture3D * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10Texture3D * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10Texture3D * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10Texture3D * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10Texture3D * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetType )(
            ID3D10Texture3D * This,
            _Out_ D3D10_RESOURCE_DIMENSION *rType);
        void ( STDMETHODCALLTYPE *SetEvictionPriority )(
            ID3D10Texture3D * This,
            _In_ UINT EvictionPriority);
        UINT ( STDMETHODCALLTYPE *GetEvictionPriority )(
            ID3D10Texture3D * This);
        HRESULT ( STDMETHODCALLTYPE *Map )(
            ID3D10Texture3D * This,
            _In_ UINT Subresource,
            _In_ D3D10_MAP MapType,
            _In_ UINT MapFlags,
            _Out_ D3D10_MAPPED_TEXTURE3D *pMappedTex3D);
        void ( STDMETHODCALLTYPE *Unmap )(
            ID3D10Texture3D * This,
            _In_ UINT Subresource);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D10Texture3D * This,
            _Out_ D3D10_TEXTURE3D_DESC *pDesc);
        END_INTERFACE
    } ID3D10Texture3DVtbl;
    interface ID3D10Texture3D
    {
        CONST_VTBL struct ID3D10Texture3DVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetType(This,rType) )
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) )
    ( (This)->lpVtbl -> GetEvictionPriority(This) )
    ( (This)->lpVtbl -> Map(This,Subresource,MapType,MapFlags,pMappedTex3D) )
    ( (This)->lpVtbl -> Unmap(This,Subresource) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef
enum D3D10_TEXTURECUBE_FACE
    {
        D3D10_TEXTURECUBE_FACE_POSITIVE_X = 0,
        D3D10_TEXTURECUBE_FACE_NEGATIVE_X = 1,
        D3D10_TEXTURECUBE_FACE_POSITIVE_Y = 2,
        D3D10_TEXTURECUBE_FACE_NEGATIVE_Y = 3,
        D3D10_TEXTURECUBE_FACE_POSITIVE_Z = 4,
        D3D10_TEXTURECUBE_FACE_NEGATIVE_Z = 5
    } D3D10_TEXTURECUBE_FACE;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10View;
    typedef struct ID3D10ViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10View * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10View * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10View * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10View * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10View * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10View * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10View * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetResource )(
            ID3D10View * This,
            _Out_ ID3D10Resource **ppResource);
        END_INTERFACE
    } ID3D10ViewVtbl;
    interface ID3D10View
    {
        CONST_VTBL struct ID3D10ViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetResource(This,ppResource) )
typedef struct D3D10_BUFFER_SRV
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
    } D3D10_BUFFER_SRV;
typedef struct D3D10_TEX1D_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    } D3D10_TEX1D_SRV;
typedef struct D3D10_TEX1D_ARRAY_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D10_TEX1D_ARRAY_SRV;
typedef struct D3D10_TEX2D_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    } D3D10_TEX2D_SRV;
typedef struct D3D10_TEX2D_ARRAY_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D10_TEX2D_ARRAY_SRV;
typedef struct D3D10_TEX3D_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    } D3D10_TEX3D_SRV;
typedef struct D3D10_TEXCUBE_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    } D3D10_TEXCUBE_SRV;
typedef struct D3D10_TEX2DMS_SRV
    {
    UINT UnusedField_NothingToDefine;
    } D3D10_TEX2DMS_SRV;
typedef struct D3D10_TEX2DMS_ARRAY_SRV
    {
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D10_TEX2DMS_ARRAY_SRV;
typedef struct D3D10_SHADER_RESOURCE_VIEW_DESC
    {
    DXGI_FORMAT Format;
    D3D10_SRV_DIMENSION ViewDimension;
    union
        {
        D3D10_BUFFER_SRV Buffer;
        D3D10_TEX1D_SRV Texture1D;
        D3D10_TEX1D_ARRAY_SRV Texture1DArray;
        D3D10_TEX2D_SRV Texture2D;
        D3D10_TEX2D_ARRAY_SRV Texture2DArray;
        D3D10_TEX2DMS_SRV Texture2DMS;
        D3D10_TEX2DMS_ARRAY_SRV Texture2DMSArray;
        D3D10_TEX3D_SRV Texture3D;
        D3D10_TEXCUBE_SRV TextureCube;
        } ;
    } D3D10_SHADER_RESOURCE_VIEW_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0010_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10ShaderResourceView;
    typedef struct ID3D10ShaderResourceViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10ShaderResourceView * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10ShaderResourceView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10ShaderResourceView * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10ShaderResourceView * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10ShaderResourceView * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10ShaderResourceView * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10ShaderResourceView * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetResource )(
            ID3D10ShaderResourceView * This,
            _Out_ ID3D10Resource **ppResource);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D10ShaderResourceView * This,
            _Out_ D3D10_SHADER_RESOURCE_VIEW_DESC *pDesc);
        END_INTERFACE
    } ID3D10ShaderResourceViewVtbl;
    interface ID3D10ShaderResourceView
    {
        CONST_VTBL struct ID3D10ShaderResourceViewVtbl *lpVtbl;
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
typedef struct D3D10_BUFFER_RTV
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
    } D3D10_BUFFER_RTV;
typedef struct D3D10_TEX1D_RTV
    {
    UINT MipSlice;
    } D3D10_TEX1D_RTV;
typedef struct D3D10_TEX1D_ARRAY_RTV
    {
    UINT MipSlice;
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D10_TEX1D_ARRAY_RTV;
typedef struct D3D10_TEX2D_RTV
    {
    UINT MipSlice;
    } D3D10_TEX2D_RTV;
typedef struct D3D10_TEX2DMS_RTV
    {
    UINT UnusedField_NothingToDefine;
    } D3D10_TEX2DMS_RTV;
typedef struct D3D10_TEX2D_ARRAY_RTV
    {
    UINT MipSlice;
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D10_TEX2D_ARRAY_RTV;
typedef struct D3D10_TEX2DMS_ARRAY_RTV
    {
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D10_TEX2DMS_ARRAY_RTV;
typedef struct D3D10_TEX3D_RTV
    {
    UINT MipSlice;
    UINT FirstWSlice;
    UINT WSize;
    } D3D10_TEX3D_RTV;
typedef struct D3D10_RENDER_TARGET_VIEW_DESC
    {
    DXGI_FORMAT Format;
    D3D10_RTV_DIMENSION ViewDimension;
    union
        {
        D3D10_BUFFER_RTV Buffer;
        D3D10_TEX1D_RTV Texture1D;
        D3D10_TEX1D_ARRAY_RTV Texture1DArray;
        D3D10_TEX2D_RTV Texture2D;
        D3D10_TEX2D_ARRAY_RTV Texture2DArray;
        D3D10_TEX2DMS_RTV Texture2DMS;
        D3D10_TEX2DMS_ARRAY_RTV Texture2DMSArray;
        D3D10_TEX3D_RTV Texture3D;
        } ;
    } D3D10_RENDER_TARGET_VIEW_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0011_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10RenderTargetView;
    typedef struct ID3D10RenderTargetViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10RenderTargetView * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10RenderTargetView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10RenderTargetView * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10RenderTargetView * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10RenderTargetView * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10RenderTargetView * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10RenderTargetView * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetResource )(
            ID3D10RenderTargetView * This,
            _Out_ ID3D10Resource **ppResource);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D10RenderTargetView * This,
            _Out_ D3D10_RENDER_TARGET_VIEW_DESC *pDesc);
        END_INTERFACE
    } ID3D10RenderTargetViewVtbl;
    interface ID3D10RenderTargetView
    {
        CONST_VTBL struct ID3D10RenderTargetViewVtbl *lpVtbl;
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
typedef struct D3D10_TEX1D_DSV
    {
    UINT MipSlice;
    } D3D10_TEX1D_DSV;
typedef struct D3D10_TEX1D_ARRAY_DSV
    {
    UINT MipSlice;
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D10_TEX1D_ARRAY_DSV;
typedef struct D3D10_TEX2D_DSV
    {
    UINT MipSlice;
    } D3D10_TEX2D_DSV;
typedef struct D3D10_TEX2D_ARRAY_DSV
    {
    UINT MipSlice;
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D10_TEX2D_ARRAY_DSV;
typedef struct D3D10_TEX2DMS_DSV
    {
    UINT UnusedField_NothingToDefine;
    } D3D10_TEX2DMS_DSV;
typedef struct D3D10_TEX2DMS_ARRAY_DSV
    {
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D10_TEX2DMS_ARRAY_DSV;
typedef struct D3D10_DEPTH_STENCIL_VIEW_DESC
    {
    DXGI_FORMAT Format;
    D3D10_DSV_DIMENSION ViewDimension;
    union
        {
        D3D10_TEX1D_DSV Texture1D;
        D3D10_TEX1D_ARRAY_DSV Texture1DArray;
        D3D10_TEX2D_DSV Texture2D;
        D3D10_TEX2D_ARRAY_DSV Texture2DArray;
        D3D10_TEX2DMS_DSV Texture2DMS;
        D3D10_TEX2DMS_ARRAY_DSV Texture2DMSArray;
        } ;
    } D3D10_DEPTH_STENCIL_VIEW_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0012_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10DepthStencilView;
    typedef struct ID3D10DepthStencilViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10DepthStencilView * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10DepthStencilView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10DepthStencilView * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10DepthStencilView * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10DepthStencilView * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10DepthStencilView * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10DepthStencilView * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetResource )(
            ID3D10DepthStencilView * This,
            _Out_ ID3D10Resource **ppResource);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D10DepthStencilView * This,
            _Out_ D3D10_DEPTH_STENCIL_VIEW_DESC *pDesc);
        END_INTERFACE
    } ID3D10DepthStencilViewVtbl;
    interface ID3D10DepthStencilView
    {
        CONST_VTBL struct ID3D10DepthStencilViewVtbl *lpVtbl;
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
EXTERN_C const IID IID_ID3D10VertexShader;
    typedef struct ID3D10VertexShaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10VertexShader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10VertexShader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10VertexShader * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10VertexShader * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10VertexShader * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10VertexShader * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10VertexShader * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        END_INTERFACE
    } ID3D10VertexShaderVtbl;
    interface ID3D10VertexShader
    {
        CONST_VTBL struct ID3D10VertexShaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
EXTERN_C const IID IID_ID3D10GeometryShader;
    typedef struct ID3D10GeometryShaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10GeometryShader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10GeometryShader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10GeometryShader * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10GeometryShader * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10GeometryShader * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10GeometryShader * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10GeometryShader * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        END_INTERFACE
    } ID3D10GeometryShaderVtbl;
    interface ID3D10GeometryShader
    {
        CONST_VTBL struct ID3D10GeometryShaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
EXTERN_C const IID IID_ID3D10PixelShader;
    typedef struct ID3D10PixelShaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10PixelShader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10PixelShader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10PixelShader * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10PixelShader * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10PixelShader * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10PixelShader * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10PixelShader * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        END_INTERFACE
    } ID3D10PixelShaderVtbl;
    interface ID3D10PixelShader
    {
        CONST_VTBL struct ID3D10PixelShaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
EXTERN_C const IID IID_ID3D10InputLayout;
    typedef struct ID3D10InputLayoutVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10InputLayout * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10InputLayout * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10InputLayout * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10InputLayout * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10InputLayout * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10InputLayout * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10InputLayout * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        END_INTERFACE
    } ID3D10InputLayoutVtbl;
    interface ID3D10InputLayout
    {
        CONST_VTBL struct ID3D10InputLayoutVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
typedef
enum D3D10_FILTER
    {
        D3D10_FILTER_MIN_MAG_MIP_POINT = 0,
        D3D10_FILTER_MIN_MAG_POINT_MIP_LINEAR = 0x1,
        D3D10_FILTER_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x4,
        D3D10_FILTER_MIN_POINT_MAG_MIP_LINEAR = 0x5,
        D3D10_FILTER_MIN_LINEAR_MAG_MIP_POINT = 0x10,
        D3D10_FILTER_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x11,
        D3D10_FILTER_MIN_MAG_LINEAR_MIP_POINT = 0x14,
        D3D10_FILTER_MIN_MAG_MIP_LINEAR = 0x15,
        D3D10_FILTER_ANISOTROPIC = 0x55,
        D3D10_FILTER_COMPARISON_MIN_MAG_MIP_POINT = 0x80,
        D3D10_FILTER_COMPARISON_MIN_MAG_POINT_MIP_LINEAR = 0x81,
        D3D10_FILTER_COMPARISON_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x84,
        D3D10_FILTER_COMPARISON_MIN_POINT_MAG_MIP_LINEAR = 0x85,
        D3D10_FILTER_COMPARISON_MIN_LINEAR_MAG_MIP_POINT = 0x90,
        D3D10_FILTER_COMPARISON_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x91,
        D3D10_FILTER_COMPARISON_MIN_MAG_LINEAR_MIP_POINT = 0x94,
        D3D10_FILTER_COMPARISON_MIN_MAG_MIP_LINEAR = 0x95,
        D3D10_FILTER_COMPARISON_ANISOTROPIC = 0xd5,
        D3D10_FILTER_TEXT_1BIT = 0x80000000
    } D3D10_FILTER;
typedef
enum D3D10_FILTER_TYPE
    {
        D3D10_FILTER_TYPE_POINT = 0,
        D3D10_FILTER_TYPE_LINEAR = 1
    } D3D10_FILTER_TYPE;
                                   ( ( D3D10_FILTER ) ( \
                                   ( ( bComparison ) ? D3D10_COMPARISON_FILTERING_BIT : 0 ) | \
                                   ( ( ( min ) & D3D10_FILTER_TYPE_MASK ) << D3D10_MIN_FILTER_SHIFT ) | \
                                   ( ( ( mag ) & D3D10_FILTER_TYPE_MASK ) << D3D10_MAG_FILTER_SHIFT ) | \
                                   ( ( ( mip ) & D3D10_FILTER_TYPE_MASK ) << D3D10_MIP_FILTER_SHIFT ) ) )
                                         ( ( D3D10_FILTER ) ( \
                                         D3D10_ANISOTROPIC_FILTERING_BIT | \
                                         D3D10_ENCODE_BASIC_FILTER( D3D10_FILTER_TYPE_LINEAR, \
                                                                    D3D10_FILTER_TYPE_LINEAR, \
                                                                    D3D10_FILTER_TYPE_LINEAR, \
                                                                    bComparison ) ) )
                                 ( ( D3D10_FILTER_TYPE ) \
                                 ( ( ( d3d10Filter ) >> D3D10_MIN_FILTER_SHIFT ) & D3D10_FILTER_TYPE_MASK ) )
                                 ( ( D3D10_FILTER_TYPE ) \
                                 ( ( ( d3d10Filter ) >> D3D10_MAG_FILTER_SHIFT ) & D3D10_FILTER_TYPE_MASK ) )
                                 ( ( D3D10_FILTER_TYPE ) \
                                 ( ( ( d3d10Filter ) >> D3D10_MIP_FILTER_SHIFT ) & D3D10_FILTER_TYPE_MASK ) )
                                 ( ( d3d10Filter ) & D3D10_COMPARISON_FILTERING_BIT )
                            ( ( ( d3d10Filter ) & D3D10_ANISOTROPIC_FILTERING_BIT ) && \
                            ( D3D10_FILTER_TYPE_LINEAR == D3D10_DECODE_MIN_FILTER( d3d10Filter ) ) && \
                            ( D3D10_FILTER_TYPE_LINEAR == D3D10_DECODE_MAG_FILTER( d3d10Filter ) ) && \
                            ( D3D10_FILTER_TYPE_LINEAR == D3D10_DECODE_MIP_FILTER( d3d10Filter ) ) )
                                 ( ( d3d10Filter ) == D3D10_TEXT_1BIT_BIT )
typedef
enum D3D10_TEXTURE_ADDRESS_MODE
    {
        D3D10_TEXTURE_ADDRESS_WRAP = 1,
        D3D10_TEXTURE_ADDRESS_MIRROR = 2,
        D3D10_TEXTURE_ADDRESS_CLAMP = 3,
        D3D10_TEXTURE_ADDRESS_BORDER = 4,
        D3D10_TEXTURE_ADDRESS_MIRROR_ONCE = 5
    } D3D10_TEXTURE_ADDRESS_MODE;
typedef struct D3D10_SAMPLER_DESC
    {
    D3D10_FILTER Filter;
    D3D10_TEXTURE_ADDRESS_MODE AddressU;
    D3D10_TEXTURE_ADDRESS_MODE AddressV;
    D3D10_TEXTURE_ADDRESS_MODE AddressW;
    FLOAT MipLODBias;
    UINT MaxAnisotropy;
    D3D10_COMPARISON_FUNC ComparisonFunc;
    FLOAT BorderColor[ 4 ];
    FLOAT MinLOD;
    FLOAT MaxLOD;
    } D3D10_SAMPLER_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0017_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10SamplerState;
    typedef struct ID3D10SamplerStateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10SamplerState * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10SamplerState * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10SamplerState * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10SamplerState * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10SamplerState * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10SamplerState * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10SamplerState * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D10SamplerState * This,
            _Out_ D3D10_SAMPLER_DESC *pDesc);
        END_INTERFACE
    } ID3D10SamplerStateVtbl;
    interface ID3D10SamplerState
    {
        CONST_VTBL struct ID3D10SamplerStateVtbl *lpVtbl;
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
enum D3D10_FORMAT_SUPPORT
    {
        D3D10_FORMAT_SUPPORT_BUFFER = 0x1,
        D3D10_FORMAT_SUPPORT_IA_VERTEX_BUFFER = 0x2,
        D3D10_FORMAT_SUPPORT_IA_INDEX_BUFFER = 0x4,
        D3D10_FORMAT_SUPPORT_SO_BUFFER = 0x8,
        D3D10_FORMAT_SUPPORT_TEXTURE1D = 0x10,
        D3D10_FORMAT_SUPPORT_TEXTURE2D = 0x20,
        D3D10_FORMAT_SUPPORT_TEXTURE3D = 0x40,
        D3D10_FORMAT_SUPPORT_TEXTURECUBE = 0x80,
        D3D10_FORMAT_SUPPORT_SHADER_LOAD = 0x100,
        D3D10_FORMAT_SUPPORT_SHADER_SAMPLE = 0x200,
        D3D10_FORMAT_SUPPORT_SHADER_SAMPLE_COMPARISON = 0x400,
        D3D10_FORMAT_SUPPORT_SHADER_SAMPLE_MONO_TEXT = 0x800,
        D3D10_FORMAT_SUPPORT_MIP = 0x1000,
        D3D10_FORMAT_SUPPORT_MIP_AUTOGEN = 0x2000,
        D3D10_FORMAT_SUPPORT_RENDER_TARGET = 0x4000,
        D3D10_FORMAT_SUPPORT_BLENDABLE = 0x8000,
        D3D10_FORMAT_SUPPORT_DEPTH_STENCIL = 0x10000,
        D3D10_FORMAT_SUPPORT_CPU_LOCKABLE = 0x20000,
        D3D10_FORMAT_SUPPORT_MULTISAMPLE_RESOLVE = 0x40000,
        D3D10_FORMAT_SUPPORT_DISPLAY = 0x80000,
        D3D10_FORMAT_SUPPORT_CAST_WITHIN_BIT_LAYOUT = 0x100000,
        D3D10_FORMAT_SUPPORT_MULTISAMPLE_RENDERTARGET = 0x200000,
        D3D10_FORMAT_SUPPORT_MULTISAMPLE_LOAD = 0x400000,
        D3D10_FORMAT_SUPPORT_SHADER_GATHER = 0x800000,
        D3D10_FORMAT_SUPPORT_BACK_BUFFER_CAST = 0x1000000
    } D3D10_FORMAT_SUPPORT;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0018_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10Asynchronous;
    typedef struct ID3D10AsynchronousVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10Asynchronous * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10Asynchronous * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10Asynchronous * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10Asynchronous * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10Asynchronous * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10Asynchronous * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10Asynchronous * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *Begin )(
            ID3D10Asynchronous * This);
        void ( STDMETHODCALLTYPE *End )(
            ID3D10Asynchronous * This);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            ID3D10Asynchronous * This,
            _Out_writes_bytes_opt_(DataSize) void *pData,
            _In_ UINT DataSize,
            _In_ UINT GetDataFlags);
        UINT ( STDMETHODCALLTYPE *GetDataSize )(
            ID3D10Asynchronous * This);
        END_INTERFACE
    } ID3D10AsynchronousVtbl;
    interface ID3D10Asynchronous
    {
        CONST_VTBL struct ID3D10AsynchronousVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> Begin(This) )
    ( (This)->lpVtbl -> End(This) )
    ( (This)->lpVtbl -> GetData(This,pData,DataSize,GetDataFlags) )
    ( (This)->lpVtbl -> GetDataSize(This) )
typedef
enum D3D10_ASYNC_GETDATA_FLAG
    {
        D3D10_ASYNC_GETDATA_DONOTFLUSH = 0x1
    } D3D10_ASYNC_GETDATA_FLAG;
typedef
enum D3D10_QUERY
    {
        D3D10_QUERY_EVENT = 0,
        D3D10_QUERY_OCCLUSION = ( D3D10_QUERY_EVENT + 1 ) ,
        D3D10_QUERY_TIMESTAMP = ( D3D10_QUERY_OCCLUSION + 1 ) ,
        D3D10_QUERY_TIMESTAMP_DISJOINT = ( D3D10_QUERY_TIMESTAMP + 1 ) ,
        D3D10_QUERY_PIPELINE_STATISTICS = ( D3D10_QUERY_TIMESTAMP_DISJOINT + 1 ) ,
        D3D10_QUERY_OCCLUSION_PREDICATE = ( D3D10_QUERY_PIPELINE_STATISTICS + 1 ) ,
        D3D10_QUERY_SO_STATISTICS = ( D3D10_QUERY_OCCLUSION_PREDICATE + 1 ) ,
        D3D10_QUERY_SO_OVERFLOW_PREDICATE = ( D3D10_QUERY_SO_STATISTICS + 1 )
    } D3D10_QUERY;
typedef
enum D3D10_QUERY_MISC_FLAG
    {
        D3D10_QUERY_MISC_PREDICATEHINT = 0x1
    } D3D10_QUERY_MISC_FLAG;
typedef struct D3D10_QUERY_DESC
    {
    D3D10_QUERY Query;
    UINT MiscFlags;
    } D3D10_QUERY_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0019_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10Query;
    typedef struct ID3D10QueryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10Query * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10Query * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10Query * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10Query * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10Query * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10Query * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10Query * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *Begin )(
            ID3D10Query * This);
        void ( STDMETHODCALLTYPE *End )(
            ID3D10Query * This);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            ID3D10Query * This,
            _Out_writes_bytes_opt_(DataSize) void *pData,
            _In_ UINT DataSize,
            _In_ UINT GetDataFlags);
        UINT ( STDMETHODCALLTYPE *GetDataSize )(
            ID3D10Query * This);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D10Query * This,
            _Out_ D3D10_QUERY_DESC *pDesc);
        END_INTERFACE
    } ID3D10QueryVtbl;
    interface ID3D10Query
    {
        CONST_VTBL struct ID3D10QueryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> Begin(This) )
    ( (This)->lpVtbl -> End(This) )
    ( (This)->lpVtbl -> GetData(This,pData,DataSize,GetDataFlags) )
    ( (This)->lpVtbl -> GetDataSize(This) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
EXTERN_C const IID IID_ID3D10Predicate;
    typedef struct ID3D10PredicateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10Predicate * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10Predicate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10Predicate * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10Predicate * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10Predicate * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10Predicate * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10Predicate * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *Begin )(
            ID3D10Predicate * This);
        void ( STDMETHODCALLTYPE *End )(
            ID3D10Predicate * This);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            ID3D10Predicate * This,
            _Out_writes_bytes_opt_(DataSize) void *pData,
            _In_ UINT DataSize,
            _In_ UINT GetDataFlags);
        UINT ( STDMETHODCALLTYPE *GetDataSize )(
            ID3D10Predicate * This);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D10Predicate * This,
            _Out_ D3D10_QUERY_DESC *pDesc);
        END_INTERFACE
    } ID3D10PredicateVtbl;
    interface ID3D10Predicate
    {
        CONST_VTBL struct ID3D10PredicateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> Begin(This) )
    ( (This)->lpVtbl -> End(This) )
    ( (This)->lpVtbl -> GetData(This,pData,DataSize,GetDataFlags) )
    ( (This)->lpVtbl -> GetDataSize(This) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
typedef struct D3D10_QUERY_DATA_TIMESTAMP_DISJOINT
    {
    UINT64 Frequency;
    BOOL Disjoint;
    } D3D10_QUERY_DATA_TIMESTAMP_DISJOINT;
typedef struct D3D10_QUERY_DATA_PIPELINE_STATISTICS
    {
    UINT64 IAVertices;
    UINT64 IAPrimitives;
    UINT64 VSInvocations;
    UINT64 GSInvocations;
    UINT64 GSPrimitives;
    UINT64 CInvocations;
    UINT64 CPrimitives;
    UINT64 PSInvocations;
    } D3D10_QUERY_DATA_PIPELINE_STATISTICS;
typedef struct D3D10_QUERY_DATA_SO_STATISTICS
    {
    UINT64 NumPrimitivesWritten;
    UINT64 PrimitivesStorageNeeded;
    } D3D10_QUERY_DATA_SO_STATISTICS;
typedef
enum D3D10_COUNTER
    {
        D3D10_COUNTER_GPU_IDLE = 0,
        D3D10_COUNTER_VERTEX_PROCESSING = ( D3D10_COUNTER_GPU_IDLE + 1 ) ,
        D3D10_COUNTER_GEOMETRY_PROCESSING = ( D3D10_COUNTER_VERTEX_PROCESSING + 1 ) ,
        D3D10_COUNTER_PIXEL_PROCESSING = ( D3D10_COUNTER_GEOMETRY_PROCESSING + 1 ) ,
        D3D10_COUNTER_OTHER_GPU_PROCESSING = ( D3D10_COUNTER_PIXEL_PROCESSING + 1 ) ,
        D3D10_COUNTER_HOST_ADAPTER_BANDWIDTH_UTILIZATION = ( D3D10_COUNTER_OTHER_GPU_PROCESSING + 1 ) ,
        D3D10_COUNTER_LOCAL_VIDMEM_BANDWIDTH_UTILIZATION = ( D3D10_COUNTER_HOST_ADAPTER_BANDWIDTH_UTILIZATION + 1 ) ,
        D3D10_COUNTER_VERTEX_THROUGHPUT_UTILIZATION = ( D3D10_COUNTER_LOCAL_VIDMEM_BANDWIDTH_UTILIZATION + 1 ) ,
        D3D10_COUNTER_TRIANGLE_SETUP_THROUGHPUT_UTILIZATION = ( D3D10_COUNTER_VERTEX_THROUGHPUT_UTILIZATION + 1 ) ,
        D3D10_COUNTER_FILLRATE_THROUGHPUT_UTILIZATION = ( D3D10_COUNTER_TRIANGLE_SETUP_THROUGHPUT_UTILIZATION + 1 ) ,
        D3D10_COUNTER_VS_MEMORY_LIMITED = ( D3D10_COUNTER_FILLRATE_THROUGHPUT_UTILIZATION + 1 ) ,
        D3D10_COUNTER_VS_COMPUTATION_LIMITED = ( D3D10_COUNTER_VS_MEMORY_LIMITED + 1 ) ,
        D3D10_COUNTER_GS_MEMORY_LIMITED = ( D3D10_COUNTER_VS_COMPUTATION_LIMITED + 1 ) ,
        D3D10_COUNTER_GS_COMPUTATION_LIMITED = ( D3D10_COUNTER_GS_MEMORY_LIMITED + 1 ) ,
        D3D10_COUNTER_PS_MEMORY_LIMITED = ( D3D10_COUNTER_GS_COMPUTATION_LIMITED + 1 ) ,
        D3D10_COUNTER_PS_COMPUTATION_LIMITED = ( D3D10_COUNTER_PS_MEMORY_LIMITED + 1 ) ,
        D3D10_COUNTER_POST_TRANSFORM_CACHE_HIT_RATE = ( D3D10_COUNTER_PS_COMPUTATION_LIMITED + 1 ) ,
        D3D10_COUNTER_TEXTURE_CACHE_HIT_RATE = ( D3D10_COUNTER_POST_TRANSFORM_CACHE_HIT_RATE + 1 ) ,
        D3D10_COUNTER_DEVICE_DEPENDENT_0 = 0x40000000
    } D3D10_COUNTER;
typedef
enum D3D10_COUNTER_TYPE
    {
        D3D10_COUNTER_TYPE_FLOAT32 = 0,
        D3D10_COUNTER_TYPE_UINT16 = ( D3D10_COUNTER_TYPE_FLOAT32 + 1 ) ,
        D3D10_COUNTER_TYPE_UINT32 = ( D3D10_COUNTER_TYPE_UINT16 + 1 ) ,
        D3D10_COUNTER_TYPE_UINT64 = ( D3D10_COUNTER_TYPE_UINT32 + 1 )
    } D3D10_COUNTER_TYPE;
typedef struct D3D10_COUNTER_DESC
    {
    D3D10_COUNTER Counter;
    UINT MiscFlags;
    } D3D10_COUNTER_DESC;
typedef struct D3D10_COUNTER_INFO
    {
    D3D10_COUNTER LastDeviceDependentCounter;
    UINT NumSimultaneousCounters;
    UINT8 NumDetectableParallelUnits;
    } D3D10_COUNTER_INFO;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0021_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10Counter;
    typedef struct ID3D10CounterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10Counter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10Counter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10Counter * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10Counter * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10Counter * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10Counter * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10Counter * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *Begin )(
            ID3D10Counter * This);
        void ( STDMETHODCALLTYPE *End )(
            ID3D10Counter * This);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            ID3D10Counter * This,
            _Out_writes_bytes_opt_(DataSize) void *pData,
            _In_ UINT DataSize,
            _In_ UINT GetDataFlags);
        UINT ( STDMETHODCALLTYPE *GetDataSize )(
            ID3D10Counter * This);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D10Counter * This,
            _Out_ D3D10_COUNTER_DESC *pDesc);
        END_INTERFACE
    } ID3D10CounterVtbl;
    interface ID3D10Counter
    {
        CONST_VTBL struct ID3D10CounterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> Begin(This) )
    ( (This)->lpVtbl -> End(This) )
    ( (This)->lpVtbl -> GetData(This,pData,DataSize,GetDataFlags) )
    ( (This)->lpVtbl -> GetDataSize(This) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
EXTERN_C const IID IID_ID3D10Device;
    typedef struct ID3D10DeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10Device * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10Device * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10Device * This);
        void ( STDMETHODCALLTYPE *VSSetConstantBuffers )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D10Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *PSSetShaderResources )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D10ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *PSSetShader )(
            ID3D10Device * This,
            _In_opt_ ID3D10PixelShader *pPixelShader);
        void ( STDMETHODCALLTYPE *PSSetSamplers )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D10SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *VSSetShader )(
            ID3D10Device * This,
            _In_opt_ ID3D10VertexShader *pVertexShader);
        void ( STDMETHODCALLTYPE *DrawIndexed )(
            ID3D10Device * This,
            _In_ UINT IndexCount,
            _In_ UINT StartIndexLocation,
            _In_ INT BaseVertexLocation);
        void ( STDMETHODCALLTYPE *Draw )(
            ID3D10Device * This,
            _In_ UINT VertexCount,
            _In_ UINT StartVertexLocation);
        void ( STDMETHODCALLTYPE *PSSetConstantBuffers )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D10Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *IASetInputLayout )(
            ID3D10Device * This,
            _In_opt_ ID3D10InputLayout *pInputLayout);
        void ( STDMETHODCALLTYPE *IASetVertexBuffers )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_1_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_1_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D10Buffer *const *ppVertexBuffers,
            _In_reads_opt_(NumBuffers) const UINT *pStrides,
            _In_reads_opt_(NumBuffers) const UINT *pOffsets);
        void ( STDMETHODCALLTYPE *IASetIndexBuffer )(
            ID3D10Device * This,
            _In_opt_ ID3D10Buffer *pIndexBuffer,
            _In_ DXGI_FORMAT Format,
            _In_ UINT Offset);
        void ( STDMETHODCALLTYPE *DrawIndexedInstanced )(
            ID3D10Device * This,
            _In_ UINT IndexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartIndexLocation,
            _In_ INT BaseVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *DrawInstanced )(
            ID3D10Device * This,
            _In_ UINT VertexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *GSSetConstantBuffers )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D10Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *GSSetShader )(
            ID3D10Device * This,
            _In_opt_ ID3D10GeometryShader *pShader);
        void ( STDMETHODCALLTYPE *IASetPrimitiveTopology )(
            ID3D10Device * This,
            _In_ D3D10_PRIMITIVE_TOPOLOGY Topology);
        void ( STDMETHODCALLTYPE *VSSetShaderResources )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D10ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *VSSetSamplers )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D10SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *SetPredication )(
            ID3D10Device * This,
            _In_opt_ ID3D10Predicate *pPredicate,
            _In_ BOOL PredicateValue);
        void ( STDMETHODCALLTYPE *GSSetShaderResources )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D10ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *GSSetSamplers )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D10SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *OMSetRenderTargets )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_SIMULTANEOUS_RENDER_TARGET_COUNT ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D10RenderTargetView *const *ppRenderTargetViews,
            _In_opt_ ID3D10DepthStencilView *pDepthStencilView);
        void ( STDMETHODCALLTYPE *OMSetBlendState )(
            ID3D10Device * This,
            _In_opt_ ID3D10BlendState *pBlendState,
            _In_ const FLOAT BlendFactor[ 4 ],
            _In_ UINT SampleMask);
        void ( STDMETHODCALLTYPE *OMSetDepthStencilState )(
            ID3D10Device * This,
            _In_opt_ ID3D10DepthStencilState *pDepthStencilState,
            _In_ UINT StencilRef);
        void ( STDMETHODCALLTYPE *SOSetTargets )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_SO_BUFFER_SLOT_COUNT) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D10Buffer *const *ppSOTargets,
            _In_reads_opt_(NumBuffers) const UINT *pOffsets);
        void ( STDMETHODCALLTYPE *DrawAuto )(
            ID3D10Device * This);
        void ( STDMETHODCALLTYPE *RSSetState )(
            ID3D10Device * This,
            _In_opt_ ID3D10RasterizerState *pRasterizerState);
        void ( STDMETHODCALLTYPE *RSSetViewports )(
            ID3D10Device * This,
            _In_range_(0, D3D10_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumViewports,
            _In_reads_opt_(NumViewports) const D3D10_VIEWPORT *pViewports);
        void ( STDMETHODCALLTYPE *RSSetScissorRects )(
            ID3D10Device * This,
            _In_range_(0, D3D10_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumRects,
            _In_reads_opt_(NumRects) const D3D10_RECT *pRects);
        void ( STDMETHODCALLTYPE *CopySubresourceRegion )(
            ID3D10Device * This,
            _In_ ID3D10Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ UINT DstX,
            _In_ UINT DstY,
            _In_ UINT DstZ,
            _In_ ID3D10Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_opt_ const D3D10_BOX *pSrcBox);
        void ( STDMETHODCALLTYPE *CopyResource )(
            ID3D10Device * This,
            _In_ ID3D10Resource *pDstResource,
            _In_ ID3D10Resource *pSrcResource);
        void ( STDMETHODCALLTYPE *UpdateSubresource )(
            ID3D10Device * This,
            _In_ ID3D10Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_opt_ const D3D10_BOX *pDstBox,
            _In_ const void *pSrcData,
            _In_ UINT SrcRowPitch,
            _In_ UINT SrcDepthPitch);
        void ( STDMETHODCALLTYPE *ClearRenderTargetView )(
            ID3D10Device * This,
            _In_ ID3D10RenderTargetView *pRenderTargetView,
            _In_ const FLOAT ColorRGBA[ 4 ]);
        void ( STDMETHODCALLTYPE *ClearDepthStencilView )(
            ID3D10Device * This,
            _In_ ID3D10DepthStencilView *pDepthStencilView,
            _In_ UINT ClearFlags,
            _In_ FLOAT Depth,
            _In_ UINT8 Stencil);
        void ( STDMETHODCALLTYPE *GenerateMips )(
            ID3D10Device * This,
            _In_ ID3D10ShaderResourceView *pShaderResourceView);
        void ( STDMETHODCALLTYPE *ResolveSubresource )(
            ID3D10Device * This,
            _In_ ID3D10Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ ID3D10Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_ DXGI_FORMAT Format);
        void ( STDMETHODCALLTYPE *VSGetConstantBuffers )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D10Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *PSGetShaderResources )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D10ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *PSGetShader )(
            ID3D10Device * This,
            _Out_ ID3D10PixelShader **ppPixelShader);
        void ( STDMETHODCALLTYPE *PSGetSamplers )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D10SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *VSGetShader )(
            ID3D10Device * This,
            _Out_ ID3D10VertexShader **ppVertexShader);
        void ( STDMETHODCALLTYPE *PSGetConstantBuffers )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D10Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *IAGetInputLayout )(
            ID3D10Device * This,
            _Out_ ID3D10InputLayout **ppInputLayout);
        void ( STDMETHODCALLTYPE *IAGetVertexBuffers )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_1_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_1_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D10Buffer **ppVertexBuffers,
            _Out_writes_opt_(NumBuffers) UINT *pStrides,
            _Out_writes_opt_(NumBuffers) UINT *pOffsets);
        void ( STDMETHODCALLTYPE *IAGetIndexBuffer )(
            ID3D10Device * This,
            _Out_opt_ ID3D10Buffer **pIndexBuffer,
            _Out_opt_ DXGI_FORMAT *Format,
            _Out_opt_ UINT *Offset);
        void ( STDMETHODCALLTYPE *GSGetConstantBuffers )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D10Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *GSGetShader )(
            ID3D10Device * This,
            _Out_ ID3D10GeometryShader **ppGeometryShader);
        void ( STDMETHODCALLTYPE *IAGetPrimitiveTopology )(
            ID3D10Device * This,
            _Out_ D3D10_PRIMITIVE_TOPOLOGY *pTopology);
        void ( STDMETHODCALLTYPE *VSGetShaderResources )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D10ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *VSGetSamplers )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D10SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *GetPredication )(
            ID3D10Device * This,
            _Out_opt_ ID3D10Predicate **ppPredicate,
            _Out_opt_ BOOL *pPredicateValue);
        void ( STDMETHODCALLTYPE *GSGetShaderResources )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D10ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *GSGetSamplers )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D10SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *OMGetRenderTargets )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_SIMULTANEOUS_RENDER_TARGET_COUNT ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D10RenderTargetView **ppRenderTargetViews,
            _Out_opt_ ID3D10DepthStencilView **ppDepthStencilView);
        void ( STDMETHODCALLTYPE *OMGetBlendState )(
            ID3D10Device * This,
            _Out_opt_ ID3D10BlendState **ppBlendState,
            _Out_opt_ FLOAT BlendFactor[ 4 ],
            _Out_opt_ UINT *pSampleMask);
        void ( STDMETHODCALLTYPE *OMGetDepthStencilState )(
            ID3D10Device * This,
            _Out_opt_ ID3D10DepthStencilState **ppDepthStencilState,
            _Out_opt_ UINT *pStencilRef);
        void ( STDMETHODCALLTYPE *SOGetTargets )(
            ID3D10Device * This,
            _In_range_( 0, D3D10_SO_BUFFER_SLOT_COUNT ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D10Buffer **ppSOTargets,
            _Out_writes_opt_(NumBuffers) UINT *pOffsets);
        void ( STDMETHODCALLTYPE *RSGetState )(
            ID3D10Device * This,
            _Out_ ID3D10RasterizerState **ppRasterizerState);
        void ( STDMETHODCALLTYPE *RSGetViewports )(
            ID3D10Device * This,
            _Inout_ UINT *NumViewports,
            _Out_writes_opt_(*NumViewports) D3D10_VIEWPORT *pViewports);
        void ( STDMETHODCALLTYPE *RSGetScissorRects )(
            ID3D10Device * This,
            _Inout_ UINT *NumRects,
            _Out_writes_opt_(*NumRects) D3D10_RECT *pRects);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceRemovedReason )(
            ID3D10Device * This);
        HRESULT ( STDMETHODCALLTYPE *SetExceptionMode )(
            ID3D10Device * This,
            UINT RaiseFlags);
        UINT ( STDMETHODCALLTYPE *GetExceptionMode )(
            ID3D10Device * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10Device * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10Device * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10Device * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *ClearState )(
            ID3D10Device * This);
        void ( STDMETHODCALLTYPE *Flush )(
            ID3D10Device * This);
        HRESULT ( STDMETHODCALLTYPE *CreateBuffer )(
            ID3D10Device * This,
            _In_ const D3D10_BUFFER_DESC *pDesc,
            _In_opt_ const D3D10_SUBRESOURCE_DATA *pInitialData,
            _Out_opt_ ID3D10Buffer **ppBuffer);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture1D )(
            ID3D10Device * This,
            _In_ const D3D10_TEXTURE1D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels * pDesc->ArraySize)) const D3D10_SUBRESOURCE_DATA *pInitialData,
            _Out_ ID3D10Texture1D **ppTexture1D);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture2D )(
            ID3D10Device * This,
            _In_ const D3D10_TEXTURE2D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels * pDesc->ArraySize)) const D3D10_SUBRESOURCE_DATA *pInitialData,
            _Out_ ID3D10Texture2D **ppTexture2D);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture3D )(
            ID3D10Device * This,
            _In_ const D3D10_TEXTURE3D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels)) const D3D10_SUBRESOURCE_DATA *pInitialData,
            _Out_ ID3D10Texture3D **ppTexture3D);
        HRESULT ( STDMETHODCALLTYPE *CreateShaderResourceView )(
            ID3D10Device * This,
            _In_ ID3D10Resource *pResource,
            _In_opt_ const D3D10_SHADER_RESOURCE_VIEW_DESC *pDesc,
            _Out_opt_ ID3D10ShaderResourceView **ppSRView);
        HRESULT ( STDMETHODCALLTYPE *CreateRenderTargetView )(
            ID3D10Device * This,
            _In_ ID3D10Resource *pResource,
            _In_opt_ const D3D10_RENDER_TARGET_VIEW_DESC *pDesc,
            _Out_opt_ ID3D10RenderTargetView **ppRTView);
        HRESULT ( STDMETHODCALLTYPE *CreateDepthStencilView )(
            ID3D10Device * This,
            _In_ ID3D10Resource *pResource,
            _In_opt_ const D3D10_DEPTH_STENCIL_VIEW_DESC *pDesc,
            _Out_opt_ ID3D10DepthStencilView **ppDepthStencilView);
        HRESULT ( STDMETHODCALLTYPE *CreateInputLayout )(
            ID3D10Device * This,
            _In_reads_(NumElements) const D3D10_INPUT_ELEMENT_DESC *pInputElementDescs,
            _In_range_( 0, D3D10_1_IA_VERTEX_INPUT_STRUCTURE_ELEMENT_COUNT ) UINT NumElements,
            _In_reads_(BytecodeLength) const void *pShaderBytecodeWithInputSignature,
            _In_ SIZE_T BytecodeLength,
            _Out_opt_ ID3D10InputLayout **ppInputLayout);
        HRESULT ( STDMETHODCALLTYPE *CreateVertexShader )(
            ID3D10Device * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _Out_opt_ ID3D10VertexShader **ppVertexShader);
        HRESULT ( STDMETHODCALLTYPE *CreateGeometryShader )(
            ID3D10Device * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _Out_opt_ ID3D10GeometryShader **ppGeometryShader);
        HRESULT ( STDMETHODCALLTYPE *CreateGeometryShaderWithStreamOutput )(
            ID3D10Device * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_reads_opt_(NumEntries) const D3D10_SO_DECLARATION_ENTRY *pSODeclaration,
            _In_range_( 0, D3D10_SO_SINGLE_BUFFER_COMPONENT_LIMIT ) UINT NumEntries,
            _In_ UINT OutputStreamStride,
            _Out_opt_ ID3D10GeometryShader **ppGeometryShader);
        HRESULT ( STDMETHODCALLTYPE *CreatePixelShader )(
            ID3D10Device * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _Out_opt_ ID3D10PixelShader **ppPixelShader);
        HRESULT ( STDMETHODCALLTYPE *CreateBlendState )(
            ID3D10Device * This,
            _In_ const D3D10_BLEND_DESC *pBlendStateDesc,
            _Out_opt_ ID3D10BlendState **ppBlendState);
        HRESULT ( STDMETHODCALLTYPE *CreateDepthStencilState )(
            ID3D10Device * This,
            _In_ const D3D10_DEPTH_STENCIL_DESC *pDepthStencilDesc,
            _Out_opt_ ID3D10DepthStencilState **ppDepthStencilState);
        HRESULT ( STDMETHODCALLTYPE *CreateRasterizerState )(
            ID3D10Device * This,
            _In_ const D3D10_RASTERIZER_DESC *pRasterizerDesc,
            _Out_opt_ ID3D10RasterizerState **ppRasterizerState);
        HRESULT ( STDMETHODCALLTYPE *CreateSamplerState )(
            ID3D10Device * This,
            _In_ const D3D10_SAMPLER_DESC *pSamplerDesc,
            _Out_opt_ ID3D10SamplerState **ppSamplerState);
        HRESULT ( STDMETHODCALLTYPE *CreateQuery )(
            ID3D10Device * This,
            _In_ const D3D10_QUERY_DESC *pQueryDesc,
            _Out_opt_ ID3D10Query **ppQuery);
        HRESULT ( STDMETHODCALLTYPE *CreatePredicate )(
            ID3D10Device * This,
            _In_ const D3D10_QUERY_DESC *pPredicateDesc,
            _Out_opt_ ID3D10Predicate **ppPredicate);
        HRESULT ( STDMETHODCALLTYPE *CreateCounter )(
            ID3D10Device * This,
            _In_ const D3D10_COUNTER_DESC *pCounterDesc,
            _Out_opt_ ID3D10Counter **ppCounter);
        HRESULT ( STDMETHODCALLTYPE *CheckFormatSupport )(
            ID3D10Device * This,
            _In_ DXGI_FORMAT Format,
            _Out_ UINT *pFormatSupport);
        HRESULT ( STDMETHODCALLTYPE *CheckMultisampleQualityLevels )(
            ID3D10Device * This,
            _In_ DXGI_FORMAT Format,
            _In_ UINT SampleCount,
            _Out_ UINT *pNumQualityLevels);
        void ( STDMETHODCALLTYPE *CheckCounterInfo )(
            ID3D10Device * This,
            _Out_ D3D10_COUNTER_INFO *pCounterInfo);
        HRESULT ( STDMETHODCALLTYPE *CheckCounter )(
            ID3D10Device * This,
            _In_ const D3D10_COUNTER_DESC *pDesc,
            _Out_ D3D10_COUNTER_TYPE *pType,
            _Out_ UINT *pActiveCounters,
            _Out_writes_opt_(*pNameLength) LPSTR szName,
            _Inout_opt_ UINT *pNameLength,
            _Out_writes_opt_(*pUnitsLength) LPSTR szUnits,
            _Inout_opt_ UINT *pUnitsLength,
            _Out_writes_opt_(*pDescriptionLength) LPSTR szDescription,
            _Inout_opt_ UINT *pDescriptionLength);
        UINT ( STDMETHODCALLTYPE *GetCreationFlags )(
            ID3D10Device * This);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedResource )(
            ID3D10Device * This,
            _In_ HANDLE hResource,
            _In_ REFIID ReturnedInterface,
            _Out_opt_ void **ppResource);
        void ( STDMETHODCALLTYPE *SetTextFilterSize )(
            ID3D10Device * This,
            _In_ UINT Width,
            _In_ UINT Height);
        void ( STDMETHODCALLTYPE *GetTextFilterSize )(
            ID3D10Device * This,
            _Out_opt_ UINT *pWidth,
            _Out_opt_ UINT *pHeight);
        END_INTERFACE
    } ID3D10DeviceVtbl;
    interface ID3D10Device
    {
        CONST_VTBL struct ID3D10DeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> VSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
    ( (This)->lpVtbl -> PSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
    ( (This)->lpVtbl -> PSSetShader(This,pPixelShader) )
    ( (This)->lpVtbl -> PSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
    ( (This)->lpVtbl -> VSSetShader(This,pVertexShader) )
    ( (This)->lpVtbl -> DrawIndexed(This,IndexCount,StartIndexLocation,BaseVertexLocation) )
    ( (This)->lpVtbl -> Draw(This,VertexCount,StartVertexLocation) )
    ( (This)->lpVtbl -> PSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
    ( (This)->lpVtbl -> IASetInputLayout(This,pInputLayout) )
    ( (This)->lpVtbl -> IASetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) )
    ( (This)->lpVtbl -> IASetIndexBuffer(This,pIndexBuffer,Format,Offset) )
    ( (This)->lpVtbl -> DrawIndexedInstanced(This,IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation) )
    ( (This)->lpVtbl -> DrawInstanced(This,VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation) )
    ( (This)->lpVtbl -> GSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
    ( (This)->lpVtbl -> GSSetShader(This,pShader) )
    ( (This)->lpVtbl -> IASetPrimitiveTopology(This,Topology) )
    ( (This)->lpVtbl -> VSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
    ( (This)->lpVtbl -> VSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
    ( (This)->lpVtbl -> SetPredication(This,pPredicate,PredicateValue) )
    ( (This)->lpVtbl -> GSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
    ( (This)->lpVtbl -> GSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
    ( (This)->lpVtbl -> OMSetRenderTargets(This,NumViews,ppRenderTargetViews,pDepthStencilView) )
    ( (This)->lpVtbl -> OMSetBlendState(This,pBlendState,BlendFactor,SampleMask) )
    ( (This)->lpVtbl -> OMSetDepthStencilState(This,pDepthStencilState,StencilRef) )
    ( (This)->lpVtbl -> SOSetTargets(This,NumBuffers,ppSOTargets,pOffsets) )
    ( (This)->lpVtbl -> DrawAuto(This) )
    ( (This)->lpVtbl -> RSSetState(This,pRasterizerState) )
    ( (This)->lpVtbl -> RSSetViewports(This,NumViewports,pViewports) )
    ( (This)->lpVtbl -> RSSetScissorRects(This,NumRects,pRects) )
    ( (This)->lpVtbl -> CopySubresourceRegion(This,pDstResource,DstSubresource,DstX,DstY,DstZ,pSrcResource,SrcSubresource,pSrcBox) )
    ( (This)->lpVtbl -> CopyResource(This,pDstResource,pSrcResource) )
    ( (This)->lpVtbl -> UpdateSubresource(This,pDstResource,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch) )
    ( (This)->lpVtbl -> ClearRenderTargetView(This,pRenderTargetView,ColorRGBA) )
    ( (This)->lpVtbl -> ClearDepthStencilView(This,pDepthStencilView,ClearFlags,Depth,Stencil) )
    ( (This)->lpVtbl -> GenerateMips(This,pShaderResourceView) )
    ( (This)->lpVtbl -> ResolveSubresource(This,pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format) )
    ( (This)->lpVtbl -> VSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
    ( (This)->lpVtbl -> PSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
    ( (This)->lpVtbl -> PSGetShader(This,ppPixelShader) )
    ( (This)->lpVtbl -> PSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
    ( (This)->lpVtbl -> VSGetShader(This,ppVertexShader) )
    ( (This)->lpVtbl -> PSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
    ( (This)->lpVtbl -> IAGetInputLayout(This,ppInputLayout) )
    ( (This)->lpVtbl -> IAGetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) )
    ( (This)->lpVtbl -> IAGetIndexBuffer(This,pIndexBuffer,Format,Offset) )
    ( (This)->lpVtbl -> GSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
    ( (This)->lpVtbl -> GSGetShader(This,ppGeometryShader) )
    ( (This)->lpVtbl -> IAGetPrimitiveTopology(This,pTopology) )
    ( (This)->lpVtbl -> VSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
    ( (This)->lpVtbl -> VSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
    ( (This)->lpVtbl -> GetPredication(This,ppPredicate,pPredicateValue) )
    ( (This)->lpVtbl -> GSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
    ( (This)->lpVtbl -> GSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
    ( (This)->lpVtbl -> OMGetRenderTargets(This,NumViews,ppRenderTargetViews,ppDepthStencilView) )
    ( (This)->lpVtbl -> OMGetBlendState(This,ppBlendState,BlendFactor,pSampleMask) )
    ( (This)->lpVtbl -> OMGetDepthStencilState(This,ppDepthStencilState,pStencilRef) )
    ( (This)->lpVtbl -> SOGetTargets(This,NumBuffers,ppSOTargets,pOffsets) )
    ( (This)->lpVtbl -> RSGetState(This,ppRasterizerState) )
    ( (This)->lpVtbl -> RSGetViewports(This,NumViewports,pViewports) )
    ( (This)->lpVtbl -> RSGetScissorRects(This,NumRects,pRects) )
    ( (This)->lpVtbl -> GetDeviceRemovedReason(This) )
    ( (This)->lpVtbl -> SetExceptionMode(This,RaiseFlags) )
    ( (This)->lpVtbl -> GetExceptionMode(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> ClearState(This) )
    ( (This)->lpVtbl -> Flush(This) )
    ( (This)->lpVtbl -> CreateBuffer(This,pDesc,pInitialData,ppBuffer) )
    ( (This)->lpVtbl -> CreateTexture1D(This,pDesc,pInitialData,ppTexture1D) )
    ( (This)->lpVtbl -> CreateTexture2D(This,pDesc,pInitialData,ppTexture2D) )
    ( (This)->lpVtbl -> CreateTexture3D(This,pDesc,pInitialData,ppTexture3D) )
    ( (This)->lpVtbl -> CreateShaderResourceView(This,pResource,pDesc,ppSRView) )
    ( (This)->lpVtbl -> CreateRenderTargetView(This,pResource,pDesc,ppRTView) )
    ( (This)->lpVtbl -> CreateDepthStencilView(This,pResource,pDesc,ppDepthStencilView) )
    ( (This)->lpVtbl -> CreateInputLayout(This,pInputElementDescs,NumElements,pShaderBytecodeWithInputSignature,BytecodeLength,ppInputLayout) )
    ( (This)->lpVtbl -> CreateVertexShader(This,pShaderBytecode,BytecodeLength,ppVertexShader) )
    ( (This)->lpVtbl -> CreateGeometryShader(This,pShaderBytecode,BytecodeLength,ppGeometryShader) )
    ( (This)->lpVtbl -> CreateGeometryShaderWithStreamOutput(This,pShaderBytecode,BytecodeLength,pSODeclaration,NumEntries,OutputStreamStride,ppGeometryShader) )
    ( (This)->lpVtbl -> CreatePixelShader(This,pShaderBytecode,BytecodeLength,ppPixelShader) )
    ( (This)->lpVtbl -> CreateBlendState(This,pBlendStateDesc,ppBlendState) )
    ( (This)->lpVtbl -> CreateDepthStencilState(This,pDepthStencilDesc,ppDepthStencilState) )
    ( (This)->lpVtbl -> CreateRasterizerState(This,pRasterizerDesc,ppRasterizerState) )
    ( (This)->lpVtbl -> CreateSamplerState(This,pSamplerDesc,ppSamplerState) )
    ( (This)->lpVtbl -> CreateQuery(This,pQueryDesc,ppQuery) )
    ( (This)->lpVtbl -> CreatePredicate(This,pPredicateDesc,ppPredicate) )
    ( (This)->lpVtbl -> CreateCounter(This,pCounterDesc,ppCounter) )
    ( (This)->lpVtbl -> CheckFormatSupport(This,Format,pFormatSupport) )
    ( (This)->lpVtbl -> CheckMultisampleQualityLevels(This,Format,SampleCount,pNumQualityLevels) )
    ( (This)->lpVtbl -> CheckCounterInfo(This,pCounterInfo) )
    ( (This)->lpVtbl -> CheckCounter(This,pDesc,pType,pActiveCounters,szName,pNameLength,szUnits,pUnitsLength,szDescription,pDescriptionLength) )
    ( (This)->lpVtbl -> GetCreationFlags(This) )
    ( (This)->lpVtbl -> OpenSharedResource(This,hResource,ReturnedInterface,ppResource) )
    ( (This)->lpVtbl -> SetTextFilterSize(This,Width,Height) )
    ( (This)->lpVtbl -> GetTextFilterSize(This,pWidth,pHeight) )
#endif
#pragma endregion
#pragma region Application Family
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0023_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10Multithread;
    typedef struct ID3D10MultithreadVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10Multithread * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10Multithread * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10Multithread * This);
        void ( STDMETHODCALLTYPE *Enter )(
            ID3D10Multithread * This);
        void ( STDMETHODCALLTYPE *Leave )(
            ID3D10Multithread * This);
        BOOL ( STDMETHODCALLTYPE *SetMultithreadProtected )(
            ID3D10Multithread * This,
            _In_ BOOL bMTProtect);
        BOOL ( STDMETHODCALLTYPE *GetMultithreadProtected )(
            ID3D10Multithread * This);
        END_INTERFACE
    } ID3D10MultithreadVtbl;
    interface ID3D10Multithread
    {
        CONST_VTBL struct ID3D10MultithreadVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Enter(This) )
    ( (This)->lpVtbl -> Leave(This) )
    ( (This)->lpVtbl -> SetMultithreadProtected(This,bMTProtect) )
    ( (This)->lpVtbl -> GetMultithreadProtected(This) )
#endif
#pragma endregion
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum D3D10_CREATE_DEVICE_FLAG
    {
        D3D10_CREATE_DEVICE_SINGLETHREADED = 0x1,
        D3D10_CREATE_DEVICE_DEBUG = 0x2,
        D3D10_CREATE_DEVICE_SWITCH_TO_REF = 0x4,
        D3D10_CREATE_DEVICE_PREVENT_INTERNAL_THREADING_OPTIMIZATIONS = 0x8,
        D3D10_CREATE_DEVICE_ALLOW_NULL_FROM_MAP = 0x10,
        D3D10_CREATE_DEVICE_BGRA_SUPPORT = 0x20,
        D3D10_CREATE_DEVICE_PREVENT_ALTERING_LAYER_SETTINGS_FROM_REGISTRY = 0x80,
        D3D10_CREATE_DEVICE_STRICT_VALIDATION = 0x200,
        D3D10_CREATE_DEVICE_DEBUGGABLE = 0x400
    } D3D10_CREATE_DEVICE_FLAG;
#include "d3d10sdklayers.h"
#include "d3d10misc.h"
#include "d3d10shader.h"
#include "d3d10effect.h"
#endif
#pragma endregion
DEFINE_GUID(IID_ID3D10DeviceChild,0x9B7E4C00,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
DEFINE_GUID(IID_ID3D10DepthStencilState,0x2B4B1CC8,0xA4AD,0x41f8,0x83,0x22,0xCA,0x86,0xFC,0x3E,0xC6,0x75);
DEFINE_GUID(IID_ID3D10BlendState,0xEDAD8D19,0x8A35,0x4d6d,0x85,0x66,0x2E,0xA2,0x76,0xCD,0xE1,0x61);
DEFINE_GUID(IID_ID3D10RasterizerState,0xA2A07292,0x89AF,0x4345,0xBE,0x2E,0xC5,0x3D,0x9F,0xBB,0x6E,0x9F);
DEFINE_GUID(IID_ID3D10Resource,0x9B7E4C01,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
DEFINE_GUID(IID_ID3D10Buffer,0x9B7E4C02,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
DEFINE_GUID(IID_ID3D10Texture1D,0x9B7E4C03,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
DEFINE_GUID(IID_ID3D10Texture2D,0x9B7E4C04,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
DEFINE_GUID(IID_ID3D10Texture3D,0x9B7E4C05,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
DEFINE_GUID(IID_ID3D10View,0xC902B03F,0x60A7,0x49BA,0x99,0x36,0x2A,0x3A,0xB3,0x7A,0x7E,0x33);
DEFINE_GUID(IID_ID3D10ShaderResourceView,0x9B7E4C07,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
DEFINE_GUID(IID_ID3D10RenderTargetView,0x9B7E4C08,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
DEFINE_GUID(IID_ID3D10DepthStencilView,0x9B7E4C09,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
DEFINE_GUID(IID_ID3D10VertexShader,0x9B7E4C0A,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
DEFINE_GUID(IID_ID3D10GeometryShader,0x6316BE88,0x54CD,0x4040,0xAB,0x44,0x20,0x46,0x1B,0xC8,0x1F,0x68);
DEFINE_GUID(IID_ID3D10PixelShader,0x4968B601,0x9D00,0x4cde,0x83,0x46,0x8E,0x7F,0x67,0x58,0x19,0xB6);
DEFINE_GUID(IID_ID3D10InputLayout,0x9B7E4C0B,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
DEFINE_GUID(IID_ID3D10SamplerState,0x9B7E4C0C,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
DEFINE_GUID(IID_ID3D10Asynchronous,0x9B7E4C0D,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
DEFINE_GUID(IID_ID3D10Query,0x9B7E4C0E,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
DEFINE_GUID(IID_ID3D10Predicate,0x9B7E4C10,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
DEFINE_GUID(IID_ID3D10Counter,0x9B7E4C11,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
DEFINE_GUID(IID_ID3D10Device,0x9B7E4C0F,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
DEFINE_GUID(IID_ID3D10Multithread,0x9B7E4E00,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0024_v0_0_s_ifspec;
}
