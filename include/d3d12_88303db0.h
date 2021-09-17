#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ID3D12Object ID3D12Object;
typedef interface ID3D12DeviceChild ID3D12DeviceChild;
typedef interface ID3D12RootSignature ID3D12RootSignature;
typedef interface ID3D12RootSignatureDeserializer ID3D12RootSignatureDeserializer;
typedef interface ID3D12VersionedRootSignatureDeserializer ID3D12VersionedRootSignatureDeserializer;
typedef interface ID3D12Pageable ID3D12Pageable;
typedef interface ID3D12Heap ID3D12Heap;
typedef interface ID3D12Resource ID3D12Resource;
typedef interface ID3D12CommandAllocator ID3D12CommandAllocator;
typedef interface ID3D12Fence ID3D12Fence;
typedef interface ID3D12Fence1 ID3D12Fence1;
typedef interface ID3D12PipelineState ID3D12PipelineState;
typedef interface ID3D12DescriptorHeap ID3D12DescriptorHeap;
typedef interface ID3D12QueryHeap ID3D12QueryHeap;
typedef interface ID3D12CommandSignature ID3D12CommandSignature;
typedef interface ID3D12CommandList ID3D12CommandList;
typedef interface ID3D12GraphicsCommandList ID3D12GraphicsCommandList;
typedef interface ID3D12GraphicsCommandList1 ID3D12GraphicsCommandList1;
typedef interface ID3D12GraphicsCommandList2 ID3D12GraphicsCommandList2;
typedef interface ID3D12CommandQueue ID3D12CommandQueue;
typedef interface ID3D12Device ID3D12Device;
typedef interface ID3D12PipelineLibrary ID3D12PipelineLibrary;
typedef interface ID3D12PipelineLibrary1 ID3D12PipelineLibrary1;
typedef interface ID3D12Device1 ID3D12Device1;
typedef interface ID3D12Device2 ID3D12Device2;
typedef interface ID3D12Device3 ID3D12Device3;
typedef interface ID3D12ProtectedSession ID3D12ProtectedSession;
typedef interface ID3D12ProtectedResourceSession ID3D12ProtectedResourceSession;
typedef interface ID3D12Device4 ID3D12Device4;
typedef interface ID3D12LifetimeOwner ID3D12LifetimeOwner;
typedef interface ID3D12SwapChainAssistant ID3D12SwapChainAssistant;
typedef interface ID3D12LifetimeTracker ID3D12LifetimeTracker;
typedef interface ID3D12StateObject ID3D12StateObject;
typedef interface ID3D12StateObjectProperties ID3D12StateObjectProperties;
typedef interface ID3D12Device5 ID3D12Device5;
typedef interface ID3D12DeviceRemovedExtendedDataSettings ID3D12DeviceRemovedExtendedDataSettings;
typedef interface ID3D12DeviceRemovedExtendedData ID3D12DeviceRemovedExtendedData;
typedef interface ID3D12Device6 ID3D12Device6;
typedef interface ID3D12Resource1 ID3D12Resource1;
typedef interface ID3D12Heap1 ID3D12Heap1;
typedef interface ID3D12GraphicsCommandList3 ID3D12GraphicsCommandList3;
typedef interface ID3D12MetaCommand ID3D12MetaCommand;
typedef interface ID3D12GraphicsCommandList4 ID3D12GraphicsCommandList4;
typedef interface ID3D12Tools ID3D12Tools;
typedef interface ID3D12GraphicsCommandList5 ID3D12GraphicsCommandList5;
#include "oaidl.h"
#include "ocidl.h"
#include "dxgicommon.h"
#include "dxgiformat.h"
#include "d3dcommon.h"
extern "C"{
#include <winapifamily.h>
#pragma region App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
typedef UINT64 D3D12_GPU_VIRTUAL_ADDRESS;
typedef
enum D3D12_COMMAND_LIST_TYPE
    {
        D3D12_COMMAND_LIST_TYPE_DIRECT = 0,
        D3D12_COMMAND_LIST_TYPE_BUNDLE = 1,
        D3D12_COMMAND_LIST_TYPE_COMPUTE = 2,
        D3D12_COMMAND_LIST_TYPE_COPY = 3,
        D3D12_COMMAND_LIST_TYPE_VIDEO_DECODE = 4,
        D3D12_COMMAND_LIST_TYPE_VIDEO_PROCESS = 5,
        D3D12_COMMAND_LIST_TYPE_VIDEO_ENCODE = 6
    } D3D12_COMMAND_LIST_TYPE;
typedef
enum D3D12_COMMAND_QUEUE_FLAGS
    {
        D3D12_COMMAND_QUEUE_FLAG_NONE = 0,
        D3D12_COMMAND_QUEUE_FLAG_DISABLE_GPU_TIMEOUT = 0x1
    } D3D12_COMMAND_QUEUE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_COMMAND_QUEUE_FLAGS );
typedef
enum D3D12_COMMAND_QUEUE_PRIORITY
    {
        D3D12_COMMAND_QUEUE_PRIORITY_NORMAL = 0,
        D3D12_COMMAND_QUEUE_PRIORITY_HIGH = 100,
        D3D12_COMMAND_QUEUE_PRIORITY_GLOBAL_REALTIME = 10000
    } D3D12_COMMAND_QUEUE_PRIORITY;
typedef struct D3D12_COMMAND_QUEUE_DESC
    {
    D3D12_COMMAND_LIST_TYPE Type;
    INT Priority;
    D3D12_COMMAND_QUEUE_FLAGS Flags;
    UINT NodeMask;
    } D3D12_COMMAND_QUEUE_DESC;
typedef
enum D3D12_PRIMITIVE_TOPOLOGY_TYPE
    {
        D3D12_PRIMITIVE_TOPOLOGY_TYPE_UNDEFINED = 0,
        D3D12_PRIMITIVE_TOPOLOGY_TYPE_POINT = 1,
        D3D12_PRIMITIVE_TOPOLOGY_TYPE_LINE = 2,
        D3D12_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE = 3,
        D3D12_PRIMITIVE_TOPOLOGY_TYPE_PATCH = 4
    } D3D12_PRIMITIVE_TOPOLOGY_TYPE;
typedef
enum D3D12_INPUT_CLASSIFICATION
    {
        D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA = 0,
        D3D12_INPUT_CLASSIFICATION_PER_INSTANCE_DATA = 1
    } D3D12_INPUT_CLASSIFICATION;
typedef struct D3D12_INPUT_ELEMENT_DESC
    {
    LPCSTR SemanticName;
    UINT SemanticIndex;
    DXGI_FORMAT Format;
    UINT InputSlot;
    UINT AlignedByteOffset;
    D3D12_INPUT_CLASSIFICATION InputSlotClass;
    UINT InstanceDataStepRate;
    } D3D12_INPUT_ELEMENT_DESC;
typedef
enum D3D12_FILL_MODE
    {
        D3D12_FILL_MODE_WIREFRAME = 2,
        D3D12_FILL_MODE_SOLID = 3
    } D3D12_FILL_MODE;
typedef D3D_PRIMITIVE_TOPOLOGY D3D12_PRIMITIVE_TOPOLOGY;
typedef D3D_PRIMITIVE D3D12_PRIMITIVE;
typedef
enum D3D12_CULL_MODE
    {
        D3D12_CULL_MODE_NONE = 1,
        D3D12_CULL_MODE_FRONT = 2,
        D3D12_CULL_MODE_BACK = 3
    } D3D12_CULL_MODE;
typedef struct D3D12_SO_DECLARATION_ENTRY
    {
    UINT Stream;
    LPCSTR SemanticName;
    UINT SemanticIndex;
    BYTE StartComponent;
    BYTE ComponentCount;
    BYTE OutputSlot;
    } D3D12_SO_DECLARATION_ENTRY;
typedef struct D3D12_VIEWPORT
    {
    FLOAT TopLeftX;
    FLOAT TopLeftY;
    FLOAT Width;
    FLOAT Height;
    FLOAT MinDepth;
    FLOAT MaxDepth;
    } D3D12_VIEWPORT;
typedef RECT D3D12_RECT;
typedef struct D3D12_BOX
    {
    UINT left;
    UINT top;
    UINT front;
    UINT right;
    UINT bottom;
    UINT back;
    } D3D12_BOX;
typedef
enum D3D12_COMPARISON_FUNC
    {
        D3D12_COMPARISON_FUNC_NEVER = 1,
        D3D12_COMPARISON_FUNC_LESS = 2,
        D3D12_COMPARISON_FUNC_EQUAL = 3,
        D3D12_COMPARISON_FUNC_LESS_EQUAL = 4,
        D3D12_COMPARISON_FUNC_GREATER = 5,
        D3D12_COMPARISON_FUNC_NOT_EQUAL = 6,
        D3D12_COMPARISON_FUNC_GREATER_EQUAL = 7,
        D3D12_COMPARISON_FUNC_ALWAYS = 8
    } D3D12_COMPARISON_FUNC;
typedef
enum D3D12_DEPTH_WRITE_MASK
    {
        D3D12_DEPTH_WRITE_MASK_ZERO = 0,
        D3D12_DEPTH_WRITE_MASK_ALL = 1
    } D3D12_DEPTH_WRITE_MASK;
typedef
enum D3D12_STENCIL_OP
    {
        D3D12_STENCIL_OP_KEEP = 1,
        D3D12_STENCIL_OP_ZERO = 2,
        D3D12_STENCIL_OP_REPLACE = 3,
        D3D12_STENCIL_OP_INCR_SAT = 4,
        D3D12_STENCIL_OP_DECR_SAT = 5,
        D3D12_STENCIL_OP_INVERT = 6,
        D3D12_STENCIL_OP_INCR = 7,
        D3D12_STENCIL_OP_DECR = 8
    } D3D12_STENCIL_OP;
typedef struct D3D12_DEPTH_STENCILOP_DESC
    {
    D3D12_STENCIL_OP StencilFailOp;
    D3D12_STENCIL_OP StencilDepthFailOp;
    D3D12_STENCIL_OP StencilPassOp;
    D3D12_COMPARISON_FUNC StencilFunc;
    } D3D12_DEPTH_STENCILOP_DESC;
typedef struct D3D12_DEPTH_STENCIL_DESC
    {
    BOOL DepthEnable;
    D3D12_DEPTH_WRITE_MASK DepthWriteMask;
    D3D12_COMPARISON_FUNC DepthFunc;
    BOOL StencilEnable;
    UINT8 StencilReadMask;
    UINT8 StencilWriteMask;
    D3D12_DEPTH_STENCILOP_DESC FrontFace;
    D3D12_DEPTH_STENCILOP_DESC BackFace;
    } D3D12_DEPTH_STENCIL_DESC;
typedef struct D3D12_DEPTH_STENCIL_DESC1
    {
    BOOL DepthEnable;
    D3D12_DEPTH_WRITE_MASK DepthWriteMask;
    D3D12_COMPARISON_FUNC DepthFunc;
    BOOL StencilEnable;
    UINT8 StencilReadMask;
    UINT8 StencilWriteMask;
    D3D12_DEPTH_STENCILOP_DESC FrontFace;
    D3D12_DEPTH_STENCILOP_DESC BackFace;
    BOOL DepthBoundsTestEnable;
    } D3D12_DEPTH_STENCIL_DESC1;
typedef
enum D3D12_BLEND
    {
        D3D12_BLEND_ZERO = 1,
        D3D12_BLEND_ONE = 2,
        D3D12_BLEND_SRC_COLOR = 3,
        D3D12_BLEND_INV_SRC_COLOR = 4,
        D3D12_BLEND_SRC_ALPHA = 5,
        D3D12_BLEND_INV_SRC_ALPHA = 6,
        D3D12_BLEND_DEST_ALPHA = 7,
        D3D12_BLEND_INV_DEST_ALPHA = 8,
        D3D12_BLEND_DEST_COLOR = 9,
        D3D12_BLEND_INV_DEST_COLOR = 10,
        D3D12_BLEND_SRC_ALPHA_SAT = 11,
        D3D12_BLEND_BLEND_FACTOR = 14,
        D3D12_BLEND_INV_BLEND_FACTOR = 15,
        D3D12_BLEND_SRC1_COLOR = 16,
        D3D12_BLEND_INV_SRC1_COLOR = 17,
        D3D12_BLEND_SRC1_ALPHA = 18,
        D3D12_BLEND_INV_SRC1_ALPHA = 19
    } D3D12_BLEND;
typedef
enum D3D12_BLEND_OP
    {
        D3D12_BLEND_OP_ADD = 1,
        D3D12_BLEND_OP_SUBTRACT = 2,
        D3D12_BLEND_OP_REV_SUBTRACT = 3,
        D3D12_BLEND_OP_MIN = 4,
        D3D12_BLEND_OP_MAX = 5
    } D3D12_BLEND_OP;
typedef
enum D3D12_COLOR_WRITE_ENABLE
    {
        D3D12_COLOR_WRITE_ENABLE_RED = 1,
        D3D12_COLOR_WRITE_ENABLE_GREEN = 2,
        D3D12_COLOR_WRITE_ENABLE_BLUE = 4,
        D3D12_COLOR_WRITE_ENABLE_ALPHA = 8,
        D3D12_COLOR_WRITE_ENABLE_ALL = ( ( ( D3D12_COLOR_WRITE_ENABLE_RED | D3D12_COLOR_WRITE_ENABLE_GREEN ) | D3D12_COLOR_WRITE_ENABLE_BLUE ) | D3D12_COLOR_WRITE_ENABLE_ALPHA )
    } D3D12_COLOR_WRITE_ENABLE;
typedef
enum D3D12_LOGIC_OP
    {
        D3D12_LOGIC_OP_CLEAR = 0,
        D3D12_LOGIC_OP_SET = ( D3D12_LOGIC_OP_CLEAR + 1 ) ,
        D3D12_LOGIC_OP_COPY = ( D3D12_LOGIC_OP_SET + 1 ) ,
        D3D12_LOGIC_OP_COPY_INVERTED = ( D3D12_LOGIC_OP_COPY + 1 ) ,
        D3D12_LOGIC_OP_NOOP = ( D3D12_LOGIC_OP_COPY_INVERTED + 1 ) ,
        D3D12_LOGIC_OP_INVERT = ( D3D12_LOGIC_OP_NOOP + 1 ) ,
        D3D12_LOGIC_OP_AND = ( D3D12_LOGIC_OP_INVERT + 1 ) ,
        D3D12_LOGIC_OP_NAND = ( D3D12_LOGIC_OP_AND + 1 ) ,
        D3D12_LOGIC_OP_OR = ( D3D12_LOGIC_OP_NAND + 1 ) ,
        D3D12_LOGIC_OP_NOR = ( D3D12_LOGIC_OP_OR + 1 ) ,
        D3D12_LOGIC_OP_XOR = ( D3D12_LOGIC_OP_NOR + 1 ) ,
        D3D12_LOGIC_OP_EQUIV = ( D3D12_LOGIC_OP_XOR + 1 ) ,
        D3D12_LOGIC_OP_AND_REVERSE = ( D3D12_LOGIC_OP_EQUIV + 1 ) ,
        D3D12_LOGIC_OP_AND_INVERTED = ( D3D12_LOGIC_OP_AND_REVERSE + 1 ) ,
        D3D12_LOGIC_OP_OR_REVERSE = ( D3D12_LOGIC_OP_AND_INVERTED + 1 ) ,
        D3D12_LOGIC_OP_OR_INVERTED = ( D3D12_LOGIC_OP_OR_REVERSE + 1 )
    } D3D12_LOGIC_OP;
typedef struct D3D12_RENDER_TARGET_BLEND_DESC
    {
    BOOL BlendEnable;
    BOOL LogicOpEnable;
    D3D12_BLEND SrcBlend;
    D3D12_BLEND DestBlend;
    D3D12_BLEND_OP BlendOp;
    D3D12_BLEND SrcBlendAlpha;
    D3D12_BLEND DestBlendAlpha;
    D3D12_BLEND_OP BlendOpAlpha;
    D3D12_LOGIC_OP LogicOp;
    UINT8 RenderTargetWriteMask;
    } D3D12_RENDER_TARGET_BLEND_DESC;
typedef struct D3D12_BLEND_DESC
    {
    BOOL AlphaToCoverageEnable;
    BOOL IndependentBlendEnable;
    D3D12_RENDER_TARGET_BLEND_DESC RenderTarget[ 8 ];
    } D3D12_BLEND_DESC;
typedef
enum D3D12_CONSERVATIVE_RASTERIZATION_MODE
    {
        D3D12_CONSERVATIVE_RASTERIZATION_MODE_OFF = 0,
        D3D12_CONSERVATIVE_RASTERIZATION_MODE_ON = 1
    } D3D12_CONSERVATIVE_RASTERIZATION_MODE;
typedef struct D3D12_RASTERIZER_DESC
    {
    D3D12_FILL_MODE FillMode;
    D3D12_CULL_MODE CullMode;
    BOOL FrontCounterClockwise;
    INT DepthBias;
    FLOAT DepthBiasClamp;
    FLOAT SlopeScaledDepthBias;
    BOOL DepthClipEnable;
    BOOL MultisampleEnable;
    BOOL AntialiasedLineEnable;
    UINT ForcedSampleCount;
    D3D12_CONSERVATIVE_RASTERIZATION_MODE ConservativeRaster;
    } D3D12_RASTERIZER_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D12Object;
    typedef struct ID3D12ObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12Object * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12Object * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12Object * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12Object * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12Object * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12Object * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12Object * This,
            _In_z_ LPCWSTR Name);
        END_INTERFACE
    } ID3D12ObjectVtbl;
    interface ID3D12Object
    {
        CONST_VTBL struct ID3D12ObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
EXTERN_C const IID IID_ID3D12DeviceChild;
    typedef struct ID3D12DeviceChildVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12DeviceChild * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12DeviceChild * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12DeviceChild * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12DeviceChild * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12DeviceChild * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12DeviceChild * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12DeviceChild * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12DeviceChild * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        END_INTERFACE
    } ID3D12DeviceChildVtbl;
    interface ID3D12DeviceChild
    {
        CONST_VTBL struct ID3D12DeviceChildVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
EXTERN_C const IID IID_ID3D12RootSignature;
    typedef struct ID3D12RootSignatureVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12RootSignature * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12RootSignature * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12RootSignature * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12RootSignature * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12RootSignature * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12RootSignature * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12RootSignature * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12RootSignature * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        END_INTERFACE
    } ID3D12RootSignatureVtbl;
    interface ID3D12RootSignature
    {
        CONST_VTBL struct ID3D12RootSignatureVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
typedef struct D3D12_SHADER_BYTECODE
    {
    _Field_size_bytes_full_(BytecodeLength) const void *pShaderBytecode;
    SIZE_T BytecodeLength;
    } D3D12_SHADER_BYTECODE;
typedef struct D3D12_STREAM_OUTPUT_DESC
    {
    _Field_size_full_(NumEntries) const D3D12_SO_DECLARATION_ENTRY *pSODeclaration;
    UINT NumEntries;
    _Field_size_full_(NumStrides) const UINT *pBufferStrides;
    UINT NumStrides;
    UINT RasterizedStream;
    } D3D12_STREAM_OUTPUT_DESC;
typedef struct D3D12_INPUT_LAYOUT_DESC
    {
    _Field_size_full_(NumElements) const D3D12_INPUT_ELEMENT_DESC *pInputElementDescs;
    UINT NumElements;
    } D3D12_INPUT_LAYOUT_DESC;
typedef
enum D3D12_INDEX_BUFFER_STRIP_CUT_VALUE
    {
        D3D12_INDEX_BUFFER_STRIP_CUT_VALUE_DISABLED = 0,
        D3D12_INDEX_BUFFER_STRIP_CUT_VALUE_0xFFFF = 1,
        D3D12_INDEX_BUFFER_STRIP_CUT_VALUE_0xFFFFFFFF = 2
    } D3D12_INDEX_BUFFER_STRIP_CUT_VALUE;
typedef struct D3D12_CACHED_PIPELINE_STATE
    {
    _Field_size_bytes_full_(CachedBlobSizeInBytes) const void *pCachedBlob;
    SIZE_T CachedBlobSizeInBytes;
    } D3D12_CACHED_PIPELINE_STATE;
typedef
enum D3D12_PIPELINE_STATE_FLAGS
    {
        D3D12_PIPELINE_STATE_FLAG_NONE = 0,
        D3D12_PIPELINE_STATE_FLAG_TOOL_DEBUG = 0x1
    } D3D12_PIPELINE_STATE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_PIPELINE_STATE_FLAGS );
typedef struct D3D12_GRAPHICS_PIPELINE_STATE_DESC
    {
    ID3D12RootSignature *pRootSignature;
    D3D12_SHADER_BYTECODE VS;
    D3D12_SHADER_BYTECODE PS;
    D3D12_SHADER_BYTECODE DS;
    D3D12_SHADER_BYTECODE HS;
    D3D12_SHADER_BYTECODE GS;
    D3D12_STREAM_OUTPUT_DESC StreamOutput;
    D3D12_BLEND_DESC BlendState;
    UINT SampleMask;
    D3D12_RASTERIZER_DESC RasterizerState;
    D3D12_DEPTH_STENCIL_DESC DepthStencilState;
    D3D12_INPUT_LAYOUT_DESC InputLayout;
    D3D12_INDEX_BUFFER_STRIP_CUT_VALUE IBStripCutValue;
    D3D12_PRIMITIVE_TOPOLOGY_TYPE PrimitiveTopologyType;
    UINT NumRenderTargets;
    DXGI_FORMAT RTVFormats[ 8 ];
    DXGI_FORMAT DSVFormat;
    DXGI_SAMPLE_DESC SampleDesc;
    UINT NodeMask;
    D3D12_CACHED_PIPELINE_STATE CachedPSO;
    D3D12_PIPELINE_STATE_FLAGS Flags;
    } D3D12_GRAPHICS_PIPELINE_STATE_DESC;
typedef struct D3D12_COMPUTE_PIPELINE_STATE_DESC
    {
    ID3D12RootSignature *pRootSignature;
    D3D12_SHADER_BYTECODE CS;
    UINT NodeMask;
    D3D12_CACHED_PIPELINE_STATE CachedPSO;
    D3D12_PIPELINE_STATE_FLAGS Flags;
    } D3D12_COMPUTE_PIPELINE_STATE_DESC;
struct D3D12_RT_FORMAT_ARRAY
    {
    DXGI_FORMAT RTFormats[ 8 ];
    UINT NumRenderTargets;
    } ;
typedef struct D3D12_PIPELINE_STATE_STREAM_DESC
    {
    _In_ SIZE_T SizeInBytes;
    _In_reads_(_Inexpressible_("Dependent on size of subobjects")) void *pPipelineStateSubobjectStream;
    } D3D12_PIPELINE_STATE_STREAM_DESC;
typedef
enum D3D12_PIPELINE_STATE_SUBOBJECT_TYPE
    {
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_ROOT_SIGNATURE = 0,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_VS = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_ROOT_SIGNATURE + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_PS = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_VS + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DS = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_PS + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_HS = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DS + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_GS = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_HS + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_CS = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_GS + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_STREAM_OUTPUT = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_CS + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_BLEND = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_STREAM_OUTPUT + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_SAMPLE_MASK = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_BLEND + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_RASTERIZER = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_SAMPLE_MASK + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_RASTERIZER + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_INPUT_LAYOUT = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_IB_STRIP_CUT_VALUE = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_INPUT_LAYOUT + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_PRIMITIVE_TOPOLOGY = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_IB_STRIP_CUT_VALUE + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_RENDER_TARGET_FORMATS = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_PRIMITIVE_TOPOLOGY + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL_FORMAT = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_RENDER_TARGET_FORMATS + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_SAMPLE_DESC = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL_FORMAT + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_NODE_MASK = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_SAMPLE_DESC + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_CACHED_PSO = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_NODE_MASK + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_FLAGS = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_CACHED_PSO + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL1 = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_FLAGS + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_VIEW_INSTANCING = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL1 + 1 ) ,
        D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_MAX_VALID = ( D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_VIEW_INSTANCING + 1 )
    } D3D12_PIPELINE_STATE_SUBOBJECT_TYPE;
typedef
enum D3D12_FEATURE
    {
        D3D12_FEATURE_D3D12_OPTIONS = 0,
        D3D12_FEATURE_ARCHITECTURE = 1,
        D3D12_FEATURE_FEATURE_LEVELS = 2,
        D3D12_FEATURE_FORMAT_SUPPORT = 3,
        D3D12_FEATURE_MULTISAMPLE_QUALITY_LEVELS = 4,
        D3D12_FEATURE_FORMAT_INFO = 5,
        D3D12_FEATURE_GPU_VIRTUAL_ADDRESS_SUPPORT = 6,
        D3D12_FEATURE_SHADER_MODEL = 7,
        D3D12_FEATURE_D3D12_OPTIONS1 = 8,
        D3D12_FEATURE_PROTECTED_RESOURCE_SESSION_SUPPORT = 10,
        D3D12_FEATURE_ROOT_SIGNATURE = 12,
        D3D12_FEATURE_ARCHITECTURE1 = 16,
        D3D12_FEATURE_D3D12_OPTIONS2 = 18,
        D3D12_FEATURE_SHADER_CACHE = 19,
        D3D12_FEATURE_COMMAND_QUEUE_PRIORITY = 20,
        D3D12_FEATURE_D3D12_OPTIONS3 = 21,
        D3D12_FEATURE_EXISTING_HEAPS = 22,
        D3D12_FEATURE_D3D12_OPTIONS4 = 23,
        D3D12_FEATURE_SERIALIZATION = 24,
        D3D12_FEATURE_CROSS_NODE = 25,
        D3D12_FEATURE_D3D12_OPTIONS5 = 27,
        D3D12_FEATURE_D3D12_OPTIONS6 = 30,
        D3D12_FEATURE_QUERY_META_COMMAND = 31
    } D3D12_FEATURE;
typedef
enum D3D12_SHADER_MIN_PRECISION_SUPPORT
    {
        D3D12_SHADER_MIN_PRECISION_SUPPORT_NONE = 0,
        D3D12_SHADER_MIN_PRECISION_SUPPORT_10_BIT = 0x1,
        D3D12_SHADER_MIN_PRECISION_SUPPORT_16_BIT = 0x2
    } D3D12_SHADER_MIN_PRECISION_SUPPORT;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_SHADER_MIN_PRECISION_SUPPORT );
typedef
enum D3D12_TILED_RESOURCES_TIER
    {
        D3D12_TILED_RESOURCES_TIER_NOT_SUPPORTED = 0,
        D3D12_TILED_RESOURCES_TIER_1 = 1,
        D3D12_TILED_RESOURCES_TIER_2 = 2,
        D3D12_TILED_RESOURCES_TIER_3 = 3,
        D3D12_TILED_RESOURCES_TIER_4 = 4
    } D3D12_TILED_RESOURCES_TIER;
typedef
enum D3D12_RESOURCE_BINDING_TIER
    {
        D3D12_RESOURCE_BINDING_TIER_1 = 1,
        D3D12_RESOURCE_BINDING_TIER_2 = 2,
        D3D12_RESOURCE_BINDING_TIER_3 = 3
    } D3D12_RESOURCE_BINDING_TIER;
typedef
enum D3D12_CONSERVATIVE_RASTERIZATION_TIER
    {
        D3D12_CONSERVATIVE_RASTERIZATION_TIER_NOT_SUPPORTED = 0,
        D3D12_CONSERVATIVE_RASTERIZATION_TIER_1 = 1,
        D3D12_CONSERVATIVE_RASTERIZATION_TIER_2 = 2,
        D3D12_CONSERVATIVE_RASTERIZATION_TIER_3 = 3
    } D3D12_CONSERVATIVE_RASTERIZATION_TIER;
typedef
enum D3D12_FORMAT_SUPPORT1
    {
        D3D12_FORMAT_SUPPORT1_NONE = 0,
        D3D12_FORMAT_SUPPORT1_BUFFER = 0x1,
        D3D12_FORMAT_SUPPORT1_IA_VERTEX_BUFFER = 0x2,
        D3D12_FORMAT_SUPPORT1_IA_INDEX_BUFFER = 0x4,
        D3D12_FORMAT_SUPPORT1_SO_BUFFER = 0x8,
        D3D12_FORMAT_SUPPORT1_TEXTURE1D = 0x10,
        D3D12_FORMAT_SUPPORT1_TEXTURE2D = 0x20,
        D3D12_FORMAT_SUPPORT1_TEXTURE3D = 0x40,
        D3D12_FORMAT_SUPPORT1_TEXTURECUBE = 0x80,
        D3D12_FORMAT_SUPPORT1_SHADER_LOAD = 0x100,
        D3D12_FORMAT_SUPPORT1_SHADER_SAMPLE = 0x200,
        D3D12_FORMAT_SUPPORT1_SHADER_SAMPLE_COMPARISON = 0x400,
        D3D12_FORMAT_SUPPORT1_SHADER_SAMPLE_MONO_TEXT = 0x800,
        D3D12_FORMAT_SUPPORT1_MIP = 0x1000,
        D3D12_FORMAT_SUPPORT1_RENDER_TARGET = 0x4000,
        D3D12_FORMAT_SUPPORT1_BLENDABLE = 0x8000,
        D3D12_FORMAT_SUPPORT1_DEPTH_STENCIL = 0x10000,
        D3D12_FORMAT_SUPPORT1_MULTISAMPLE_RESOLVE = 0x40000,
        D3D12_FORMAT_SUPPORT1_DISPLAY = 0x80000,
        D3D12_FORMAT_SUPPORT1_CAST_WITHIN_BIT_LAYOUT = 0x100000,
        D3D12_FORMAT_SUPPORT1_MULTISAMPLE_RENDERTARGET = 0x200000,
        D3D12_FORMAT_SUPPORT1_MULTISAMPLE_LOAD = 0x400000,
        D3D12_FORMAT_SUPPORT1_SHADER_GATHER = 0x800000,
        D3D12_FORMAT_SUPPORT1_BACK_BUFFER_CAST = 0x1000000,
        D3D12_FORMAT_SUPPORT1_TYPED_UNORDERED_ACCESS_VIEW = 0x2000000,
        D3D12_FORMAT_SUPPORT1_SHADER_GATHER_COMPARISON = 0x4000000,
        D3D12_FORMAT_SUPPORT1_DECODER_OUTPUT = 0x8000000,
        D3D12_FORMAT_SUPPORT1_VIDEO_PROCESSOR_OUTPUT = 0x10000000,
        D3D12_FORMAT_SUPPORT1_VIDEO_PROCESSOR_INPUT = 0x20000000,
        D3D12_FORMAT_SUPPORT1_VIDEO_ENCODER = 0x40000000
    } D3D12_FORMAT_SUPPORT1;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_FORMAT_SUPPORT1 );
typedef
enum D3D12_FORMAT_SUPPORT2
    {
        D3D12_FORMAT_SUPPORT2_NONE = 0,
        D3D12_FORMAT_SUPPORT2_UAV_ATOMIC_ADD = 0x1,
        D3D12_FORMAT_SUPPORT2_UAV_ATOMIC_BITWISE_OPS = 0x2,
        D3D12_FORMAT_SUPPORT2_UAV_ATOMIC_COMPARE_STORE_OR_COMPARE_EXCHANGE = 0x4,
        D3D12_FORMAT_SUPPORT2_UAV_ATOMIC_EXCHANGE = 0x8,
        D3D12_FORMAT_SUPPORT2_UAV_ATOMIC_SIGNED_MIN_OR_MAX = 0x10,
        D3D12_FORMAT_SUPPORT2_UAV_ATOMIC_UNSIGNED_MIN_OR_MAX = 0x20,
        D3D12_FORMAT_SUPPORT2_UAV_TYPED_LOAD = 0x40,
        D3D12_FORMAT_SUPPORT2_UAV_TYPED_STORE = 0x80,
        D3D12_FORMAT_SUPPORT2_OUTPUT_MERGER_LOGIC_OP = 0x100,
        D3D12_FORMAT_SUPPORT2_TILED = 0x200,
        D3D12_FORMAT_SUPPORT2_MULTIPLANE_OVERLAY = 0x4000
    } D3D12_FORMAT_SUPPORT2;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_FORMAT_SUPPORT2 );
typedef
enum D3D12_MULTISAMPLE_QUALITY_LEVEL_FLAGS
    {
        D3D12_MULTISAMPLE_QUALITY_LEVELS_FLAG_NONE = 0,
        D3D12_MULTISAMPLE_QUALITY_LEVELS_FLAG_TILED_RESOURCE = 0x1
    } D3D12_MULTISAMPLE_QUALITY_LEVEL_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_MULTISAMPLE_QUALITY_LEVEL_FLAGS );
typedef
enum D3D12_CROSS_NODE_SHARING_TIER
    {
        D3D12_CROSS_NODE_SHARING_TIER_NOT_SUPPORTED = 0,
        D3D12_CROSS_NODE_SHARING_TIER_1_EMULATED = 1,
        D3D12_CROSS_NODE_SHARING_TIER_1 = 2,
        D3D12_CROSS_NODE_SHARING_TIER_2 = 3,
        D3D12_CROSS_NODE_SHARING_TIER_3 = 4
    } D3D12_CROSS_NODE_SHARING_TIER;
typedef
enum D3D12_RESOURCE_HEAP_TIER
    {
        D3D12_RESOURCE_HEAP_TIER_1 = 1,
        D3D12_RESOURCE_HEAP_TIER_2 = 2
    } D3D12_RESOURCE_HEAP_TIER;
typedef
enum D3D12_PROGRAMMABLE_SAMPLE_POSITIONS_TIER
    {
        D3D12_PROGRAMMABLE_SAMPLE_POSITIONS_TIER_NOT_SUPPORTED = 0,
        D3D12_PROGRAMMABLE_SAMPLE_POSITIONS_TIER_1 = 1,
        D3D12_PROGRAMMABLE_SAMPLE_POSITIONS_TIER_2 = 2
    } D3D12_PROGRAMMABLE_SAMPLE_POSITIONS_TIER;
typedef
enum D3D12_VIEW_INSTANCING_TIER
    {
        D3D12_VIEW_INSTANCING_TIER_NOT_SUPPORTED = 0,
        D3D12_VIEW_INSTANCING_TIER_1 = 1,
        D3D12_VIEW_INSTANCING_TIER_2 = 2,
        D3D12_VIEW_INSTANCING_TIER_3 = 3
    } D3D12_VIEW_INSTANCING_TIER;
typedef struct D3D12_FEATURE_DATA_D3D12_OPTIONS
    {
    _Out_ BOOL DoublePrecisionFloatShaderOps;
    _Out_ BOOL OutputMergerLogicOp;
    _Out_ D3D12_SHADER_MIN_PRECISION_SUPPORT MinPrecisionSupport;
    _Out_ D3D12_TILED_RESOURCES_TIER TiledResourcesTier;
    _Out_ D3D12_RESOURCE_BINDING_TIER ResourceBindingTier;
    _Out_ BOOL PSSpecifiedStencilRefSupported;
    _Out_ BOOL TypedUAVLoadAdditionalFormats;
    _Out_ BOOL ROVsSupported;
    _Out_ D3D12_CONSERVATIVE_RASTERIZATION_TIER ConservativeRasterizationTier;
    _Out_ UINT MaxGPUVirtualAddressBitsPerResource;
    _Out_ BOOL StandardSwizzle64KBSupported;
    _Out_ D3D12_CROSS_NODE_SHARING_TIER CrossNodeSharingTier;
    _Out_ BOOL CrossAdapterRowMajorTextureSupported;
    _Out_ BOOL VPAndRTArrayIndexFromAnyShaderFeedingRasterizerSupportedWithoutGSEmulation;
    _Out_ D3D12_RESOURCE_HEAP_TIER ResourceHeapTier;
    } D3D12_FEATURE_DATA_D3D12_OPTIONS;
typedef struct D3D12_FEATURE_DATA_D3D12_OPTIONS1
    {
    _Out_ BOOL WaveOps;
    _Out_ UINT WaveLaneCountMin;
    _Out_ UINT WaveLaneCountMax;
    _Out_ UINT TotalLaneCount;
    _Out_ BOOL ExpandedComputeResourceStates;
    _Out_ BOOL Int64ShaderOps;
    } D3D12_FEATURE_DATA_D3D12_OPTIONS1;
typedef struct D3D12_FEATURE_DATA_D3D12_OPTIONS2
    {
    _Out_ BOOL DepthBoundsTestSupported;
    _Out_ D3D12_PROGRAMMABLE_SAMPLE_POSITIONS_TIER ProgrammableSamplePositionsTier;
    } D3D12_FEATURE_DATA_D3D12_OPTIONS2;
typedef
enum D3D_ROOT_SIGNATURE_VERSION
    {
        D3D_ROOT_SIGNATURE_VERSION_1 = 0x1,
        D3D_ROOT_SIGNATURE_VERSION_1_0 = 0x1,
        D3D_ROOT_SIGNATURE_VERSION_1_1 = 0x2
    } D3D_ROOT_SIGNATURE_VERSION;
typedef struct D3D12_FEATURE_DATA_ROOT_SIGNATURE
    {
    _Inout_ D3D_ROOT_SIGNATURE_VERSION HighestVersion;
    } D3D12_FEATURE_DATA_ROOT_SIGNATURE;
typedef struct D3D12_FEATURE_DATA_ARCHITECTURE
    {
    _In_ UINT NodeIndex;
    _Out_ BOOL TileBasedRenderer;
    _Out_ BOOL UMA;
    _Out_ BOOL CacheCoherentUMA;
    } D3D12_FEATURE_DATA_ARCHITECTURE;
typedef struct D3D12_FEATURE_DATA_ARCHITECTURE1
    {
    _In_ UINT NodeIndex;
    _Out_ BOOL TileBasedRenderer;
    _Out_ BOOL UMA;
    _Out_ BOOL CacheCoherentUMA;
    _Out_ BOOL IsolatedMMU;
    } D3D12_FEATURE_DATA_ARCHITECTURE1;
typedef struct D3D12_FEATURE_DATA_FEATURE_LEVELS
    {
    _In_ UINT NumFeatureLevels;
    _In_reads_(NumFeatureLevels) const D3D_FEATURE_LEVEL *pFeatureLevelsRequested;
    _Out_ D3D_FEATURE_LEVEL MaxSupportedFeatureLevel;
    } D3D12_FEATURE_DATA_FEATURE_LEVELS;
typedef
enum D3D_SHADER_MODEL
    {
        D3D_SHADER_MODEL_5_1 = 0x51,
        D3D_SHADER_MODEL_6_0 = 0x60,
        D3D_SHADER_MODEL_6_1 = 0x61,
        D3D_SHADER_MODEL_6_2 = 0x62,
        D3D_SHADER_MODEL_6_3 = 0x63,
        D3D_SHADER_MODEL_6_4 = 0x64,
        D3D_SHADER_MODEL_6_5 = 0x65
    } D3D_SHADER_MODEL;
typedef struct D3D12_FEATURE_DATA_SHADER_MODEL
    {
    _Inout_ D3D_SHADER_MODEL HighestShaderModel;
    } D3D12_FEATURE_DATA_SHADER_MODEL;
typedef struct D3D12_FEATURE_DATA_FORMAT_SUPPORT
    {
    _In_ DXGI_FORMAT Format;
    _Out_ D3D12_FORMAT_SUPPORT1 Support1;
    _Out_ D3D12_FORMAT_SUPPORT2 Support2;
    } D3D12_FEATURE_DATA_FORMAT_SUPPORT;
typedef struct D3D12_FEATURE_DATA_MULTISAMPLE_QUALITY_LEVELS
    {
    _In_ DXGI_FORMAT Format;
    _In_ UINT SampleCount;
    _In_ D3D12_MULTISAMPLE_QUALITY_LEVEL_FLAGS Flags;
    _Out_ UINT NumQualityLevels;
    } D3D12_FEATURE_DATA_MULTISAMPLE_QUALITY_LEVELS;
typedef struct D3D12_FEATURE_DATA_FORMAT_INFO
    {
    DXGI_FORMAT Format;
    UINT8 PlaneCount;
    } D3D12_FEATURE_DATA_FORMAT_INFO;
typedef struct D3D12_FEATURE_DATA_GPU_VIRTUAL_ADDRESS_SUPPORT
    {
    UINT MaxGPUVirtualAddressBitsPerResource;
    UINT MaxGPUVirtualAddressBitsPerProcess;
    } D3D12_FEATURE_DATA_GPU_VIRTUAL_ADDRESS_SUPPORT;
typedef
enum D3D12_SHADER_CACHE_SUPPORT_FLAGS
    {
        D3D12_SHADER_CACHE_SUPPORT_NONE = 0,
        D3D12_SHADER_CACHE_SUPPORT_SINGLE_PSO = 0x1,
        D3D12_SHADER_CACHE_SUPPORT_LIBRARY = 0x2,
        D3D12_SHADER_CACHE_SUPPORT_AUTOMATIC_INPROC_CACHE = 0x4,
        D3D12_SHADER_CACHE_SUPPORT_AUTOMATIC_DISK_CACHE = 0x8
    } D3D12_SHADER_CACHE_SUPPORT_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_SHADER_CACHE_SUPPORT_FLAGS );
typedef struct D3D12_FEATURE_DATA_SHADER_CACHE
    {
    _Out_ D3D12_SHADER_CACHE_SUPPORT_FLAGS SupportFlags;
    } D3D12_FEATURE_DATA_SHADER_CACHE;
typedef struct D3D12_FEATURE_DATA_COMMAND_QUEUE_PRIORITY
    {
    _In_ D3D12_COMMAND_LIST_TYPE CommandListType;
    _In_ UINT Priority;
    _Out_ BOOL PriorityForTypeIsSupported;
    } D3D12_FEATURE_DATA_COMMAND_QUEUE_PRIORITY;
typedef
enum D3D12_COMMAND_LIST_SUPPORT_FLAGS
    {
        D3D12_COMMAND_LIST_SUPPORT_FLAG_NONE = 0,
        D3D12_COMMAND_LIST_SUPPORT_FLAG_DIRECT = ( 1 << D3D12_COMMAND_LIST_TYPE_DIRECT ) ,
        D3D12_COMMAND_LIST_SUPPORT_FLAG_BUNDLE = ( 1 << D3D12_COMMAND_LIST_TYPE_BUNDLE ) ,
        D3D12_COMMAND_LIST_SUPPORT_FLAG_COMPUTE = ( 1 << D3D12_COMMAND_LIST_TYPE_COMPUTE ) ,
        D3D12_COMMAND_LIST_SUPPORT_FLAG_COPY = ( 1 << D3D12_COMMAND_LIST_TYPE_COPY ) ,
        D3D12_COMMAND_LIST_SUPPORT_FLAG_VIDEO_DECODE = ( 1 << D3D12_COMMAND_LIST_TYPE_VIDEO_DECODE ) ,
        D3D12_COMMAND_LIST_SUPPORT_FLAG_VIDEO_PROCESS = ( 1 << D3D12_COMMAND_LIST_TYPE_VIDEO_PROCESS ) ,
        D3D12_COMMAND_LIST_SUPPORT_FLAG_VIDEO_ENCODE = ( 1 << D3D12_COMMAND_LIST_TYPE_VIDEO_ENCODE )
    } D3D12_COMMAND_LIST_SUPPORT_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_COMMAND_LIST_SUPPORT_FLAGS );
typedef struct D3D12_FEATURE_DATA_D3D12_OPTIONS3
    {
    _Out_ BOOL CopyQueueTimestampQueriesSupported;
    _Out_ BOOL CastingFullyTypedFormatSupported;
    _Out_ D3D12_COMMAND_LIST_SUPPORT_FLAGS WriteBufferImmediateSupportFlags;
    _Out_ D3D12_VIEW_INSTANCING_TIER ViewInstancingTier;
    _Out_ BOOL BarycentricsSupported;
    } D3D12_FEATURE_DATA_D3D12_OPTIONS3;
typedef struct D3D12_FEATURE_DATA_EXISTING_HEAPS
    {
    _Out_ BOOL Supported;
    } D3D12_FEATURE_DATA_EXISTING_HEAPS;
typedef
enum D3D12_SHARED_RESOURCE_COMPATIBILITY_TIER
    {
        D3D12_SHARED_RESOURCE_COMPATIBILITY_TIER_0 = 0,
        D3D12_SHARED_RESOURCE_COMPATIBILITY_TIER_1 = ( D3D12_SHARED_RESOURCE_COMPATIBILITY_TIER_0 + 1 )
    } D3D12_SHARED_RESOURCE_COMPATIBILITY_TIER;
typedef struct D3D12_FEATURE_DATA_D3D12_OPTIONS4
    {
    _Out_ BOOL MSAA64KBAlignedTextureSupported;
    _Out_ D3D12_SHARED_RESOURCE_COMPATIBILITY_TIER SharedResourceCompatibilityTier;
    _Out_ BOOL Native16BitShaderOpsSupported;
    } D3D12_FEATURE_DATA_D3D12_OPTIONS4;
typedef
enum D3D12_HEAP_SERIALIZATION_TIER
    {
        D3D12_HEAP_SERIALIZATION_TIER_0 = 0,
        D3D12_HEAP_SERIALIZATION_TIER_10 = 10
    } D3D12_HEAP_SERIALIZATION_TIER;
typedef struct D3D12_FEATURE_DATA_SERIALIZATION
    {
    _In_ UINT NodeIndex;
    _Out_ D3D12_HEAP_SERIALIZATION_TIER HeapSerializationTier;
    } D3D12_FEATURE_DATA_SERIALIZATION;
typedef struct D3D12_FEATURE_DATA_CROSS_NODE
    {
    D3D12_CROSS_NODE_SHARING_TIER SharingTier;
    BOOL AtomicShaderInstructions;
    } D3D12_FEATURE_DATA_CROSS_NODE;
typedef
enum D3D12_RENDER_PASS_TIER
    {
        D3D12_RENDER_PASS_TIER_0 = 0,
        D3D12_RENDER_PASS_TIER_1 = 1,
        D3D12_RENDER_PASS_TIER_2 = 2
    } D3D12_RENDER_PASS_TIER;
typedef
enum D3D12_RAYTRACING_TIER
    {
        D3D12_RAYTRACING_TIER_NOT_SUPPORTED = 0,
        D3D12_RAYTRACING_TIER_1_0 = 10
    } D3D12_RAYTRACING_TIER;
typedef struct D3D12_FEATURE_DATA_D3D12_OPTIONS5
    {
    _Out_ BOOL SRVOnlyTiledResourceTier3;
    _Out_ D3D12_RENDER_PASS_TIER RenderPassesTier;
    _Out_ D3D12_RAYTRACING_TIER RaytracingTier;
    } D3D12_FEATURE_DATA_D3D12_OPTIONS5;
typedef
enum D3D12_VARIABLE_SHADING_RATE_TIER
    {
        D3D12_VARIABLE_SHADING_RATE_TIER_NOT_SUPPORTED = 0,
        D3D12_VARIABLE_SHADING_RATE_TIER_1 = 1,
        D3D12_VARIABLE_SHADING_RATE_TIER_2 = 2
    } D3D12_VARIABLE_SHADING_RATE_TIER;
typedef struct D3D12_FEATURE_DATA_D3D12_OPTIONS6
    {
    _Out_ BOOL AdditionalShadingRatesSupported;
    _Out_ BOOL PerPrimitiveShadingRateSupportedWithViewportIndexing;
    _Out_ D3D12_VARIABLE_SHADING_RATE_TIER VariableShadingRateTier;
    _Out_ UINT ShadingRateImageTileSize;
    _Out_ BOOL BackgroundProcessingSupported;
    } D3D12_FEATURE_DATA_D3D12_OPTIONS6;
typedef struct D3D12_FEATURE_DATA_QUERY_META_COMMAND
    {
    _In_ GUID CommandId;
    _In_ UINT NodeMask;
    _Field_size_bytes_full_opt_( QueryInputDataSizeInBytes ) const void *pQueryInputData;
    _In_ SIZE_T QueryInputDataSizeInBytes;
    _Field_size_bytes_full_( QueryOutputDataSizeInBytes ) void *pQueryOutputData;
    _In_ SIZE_T QueryOutputDataSizeInBytes;
    } D3D12_FEATURE_DATA_QUERY_META_COMMAND;
typedef struct D3D12_RESOURCE_ALLOCATION_INFO
    {
    UINT64 SizeInBytes;
    UINT64 Alignment;
    } D3D12_RESOURCE_ALLOCATION_INFO;
typedef struct D3D12_RESOURCE_ALLOCATION_INFO1
    {
    UINT64 Offset;
    UINT64 Alignment;
    UINT64 SizeInBytes;
    } D3D12_RESOURCE_ALLOCATION_INFO1;
typedef
enum D3D12_HEAP_TYPE
    {
        D3D12_HEAP_TYPE_DEFAULT = 1,
        D3D12_HEAP_TYPE_UPLOAD = 2,
        D3D12_HEAP_TYPE_READBACK = 3,
        D3D12_HEAP_TYPE_CUSTOM = 4
    } D3D12_HEAP_TYPE;
typedef
enum D3D12_CPU_PAGE_PROPERTY
    {
        D3D12_CPU_PAGE_PROPERTY_UNKNOWN = 0,
        D3D12_CPU_PAGE_PROPERTY_NOT_AVAILABLE = 1,
        D3D12_CPU_PAGE_PROPERTY_WRITE_COMBINE = 2,
        D3D12_CPU_PAGE_PROPERTY_WRITE_BACK = 3
    } D3D12_CPU_PAGE_PROPERTY;
typedef
enum D3D12_MEMORY_POOL
    {
        D3D12_MEMORY_POOL_UNKNOWN = 0,
        D3D12_MEMORY_POOL_L0 = 1,
        D3D12_MEMORY_POOL_L1 = 2
    } D3D12_MEMORY_POOL;
typedef struct D3D12_HEAP_PROPERTIES
    {
    D3D12_HEAP_TYPE Type;
    D3D12_CPU_PAGE_PROPERTY CPUPageProperty;
    D3D12_MEMORY_POOL MemoryPoolPreference;
    UINT CreationNodeMask;
    UINT VisibleNodeMask;
    } D3D12_HEAP_PROPERTIES;
typedef
enum D3D12_HEAP_FLAGS
    {
        D3D12_HEAP_FLAG_NONE = 0,
        D3D12_HEAP_FLAG_SHARED = 0x1,
        D3D12_HEAP_FLAG_DENY_BUFFERS = 0x4,
        D3D12_HEAP_FLAG_ALLOW_DISPLAY = 0x8,
        D3D12_HEAP_FLAG_SHARED_CROSS_ADAPTER = 0x20,
        D3D12_HEAP_FLAG_DENY_RT_DS_TEXTURES = 0x40,
        D3D12_HEAP_FLAG_DENY_NON_RT_DS_TEXTURES = 0x80,
        D3D12_HEAP_FLAG_HARDWARE_PROTECTED = 0x100,
        D3D12_HEAP_FLAG_ALLOW_WRITE_WATCH = 0x200,
        D3D12_HEAP_FLAG_ALLOW_SHADER_ATOMICS = 0x400,
        D3D12_HEAP_FLAG_ALLOW_ALL_BUFFERS_AND_TEXTURES = 0,
        D3D12_HEAP_FLAG_ALLOW_ONLY_BUFFERS = 0xc0,
        D3D12_HEAP_FLAG_ALLOW_ONLY_NON_RT_DS_TEXTURES = 0x44,
        D3D12_HEAP_FLAG_ALLOW_ONLY_RT_DS_TEXTURES = 0x84
    } D3D12_HEAP_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_HEAP_FLAGS );
typedef struct D3D12_HEAP_DESC
    {
    UINT64 SizeInBytes;
    D3D12_HEAP_PROPERTIES Properties;
    UINT64 Alignment;
    D3D12_HEAP_FLAGS Flags;
    } D3D12_HEAP_DESC;
typedef
enum D3D12_RESOURCE_DIMENSION
    {
        D3D12_RESOURCE_DIMENSION_UNKNOWN = 0,
        D3D12_RESOURCE_DIMENSION_BUFFER = 1,
        D3D12_RESOURCE_DIMENSION_TEXTURE1D = 2,
        D3D12_RESOURCE_DIMENSION_TEXTURE2D = 3,
        D3D12_RESOURCE_DIMENSION_TEXTURE3D = 4
    } D3D12_RESOURCE_DIMENSION;
typedef
enum D3D12_TEXTURE_LAYOUT
    {
        D3D12_TEXTURE_LAYOUT_UNKNOWN = 0,
        D3D12_TEXTURE_LAYOUT_ROW_MAJOR = 1,
        D3D12_TEXTURE_LAYOUT_64KB_UNDEFINED_SWIZZLE = 2,
        D3D12_TEXTURE_LAYOUT_64KB_STANDARD_SWIZZLE = 3
    } D3D12_TEXTURE_LAYOUT;
typedef
enum D3D12_RESOURCE_FLAGS
    {
        D3D12_RESOURCE_FLAG_NONE = 0,
        D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET = 0x1,
        D3D12_RESOURCE_FLAG_ALLOW_DEPTH_STENCIL = 0x2,
        D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS = 0x4,
        D3D12_RESOURCE_FLAG_DENY_SHADER_RESOURCE = 0x8,
        D3D12_RESOURCE_FLAG_ALLOW_CROSS_ADAPTER = 0x10,
        D3D12_RESOURCE_FLAG_ALLOW_SIMULTANEOUS_ACCESS = 0x20,
        D3D12_RESOURCE_FLAG_VIDEO_DECODE_REFERENCE_ONLY = 0x40
    } D3D12_RESOURCE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_RESOURCE_FLAGS );
typedef struct D3D12_RESOURCE_DESC
    {
    D3D12_RESOURCE_DIMENSION Dimension;
    UINT64 Alignment;
    UINT64 Width;
    UINT Height;
    UINT16 DepthOrArraySize;
    UINT16 MipLevels;
    DXGI_FORMAT Format;
    DXGI_SAMPLE_DESC SampleDesc;
    D3D12_TEXTURE_LAYOUT Layout;
    D3D12_RESOURCE_FLAGS Flags;
    } D3D12_RESOURCE_DESC;
typedef struct D3D12_DEPTH_STENCIL_VALUE
    {
    FLOAT Depth;
    UINT8 Stencil;
    } D3D12_DEPTH_STENCIL_VALUE;
typedef struct D3D12_CLEAR_VALUE
    {
    DXGI_FORMAT Format;
    union
        {
        FLOAT Color[ 4 ];
        D3D12_DEPTH_STENCIL_VALUE DepthStencil;
        } ;
    } D3D12_CLEAR_VALUE;
typedef struct D3D12_RANGE
    {
    SIZE_T Begin;
    SIZE_T End;
    } D3D12_RANGE;
typedef struct D3D12_RANGE_UINT64
    {
    UINT64 Begin;
    UINT64 End;
    } D3D12_RANGE_UINT64;
typedef struct D3D12_SUBRESOURCE_RANGE_UINT64
    {
    UINT Subresource;
    D3D12_RANGE_UINT64 Range;
    } D3D12_SUBRESOURCE_RANGE_UINT64;
typedef struct D3D12_SUBRESOURCE_INFO
    {
    UINT64 Offset;
    UINT RowPitch;
    UINT DepthPitch;
    } D3D12_SUBRESOURCE_INFO;
typedef struct D3D12_TILED_RESOURCE_COORDINATE
    {
    UINT X;
    UINT Y;
    UINT Z;
    UINT Subresource;
    } D3D12_TILED_RESOURCE_COORDINATE;
typedef struct D3D12_TILE_REGION_SIZE
    {
    UINT NumTiles;
    BOOL UseBox;
    UINT Width;
    UINT16 Height;
    UINT16 Depth;
    } D3D12_TILE_REGION_SIZE;
typedef
enum D3D12_TILE_RANGE_FLAGS
    {
        D3D12_TILE_RANGE_FLAG_NONE = 0,
        D3D12_TILE_RANGE_FLAG_NULL = 1,
        D3D12_TILE_RANGE_FLAG_SKIP = 2,
        D3D12_TILE_RANGE_FLAG_REUSE_SINGLE_TILE = 4
    } D3D12_TILE_RANGE_FLAGS;
typedef struct D3D12_SUBRESOURCE_TILING
    {
    UINT WidthInTiles;
    UINT16 HeightInTiles;
    UINT16 DepthInTiles;
    UINT StartTileIndexInOverallResource;
    } D3D12_SUBRESOURCE_TILING;
typedef struct D3D12_TILE_SHAPE
    {
    UINT WidthInTexels;
    UINT HeightInTexels;
    UINT DepthInTexels;
    } D3D12_TILE_SHAPE;
typedef struct D3D12_PACKED_MIP_INFO
    {
    UINT8 NumStandardMips;
    UINT8 NumPackedMips;
    UINT NumTilesForPackedMips;
    UINT StartTileIndexInOverallResource;
    } D3D12_PACKED_MIP_INFO;
typedef
enum D3D12_TILE_MAPPING_FLAGS
    {
        D3D12_TILE_MAPPING_FLAG_NONE = 0,
        D3D12_TILE_MAPPING_FLAG_NO_HAZARD = 0x1
    } D3D12_TILE_MAPPING_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_TILE_MAPPING_FLAGS );
typedef
enum D3D12_TILE_COPY_FLAGS
    {
        D3D12_TILE_COPY_FLAG_NONE = 0,
        D3D12_TILE_COPY_FLAG_NO_HAZARD = 0x1,
        D3D12_TILE_COPY_FLAG_LINEAR_BUFFER_TO_SWIZZLED_TILED_RESOURCE = 0x2,
        D3D12_TILE_COPY_FLAG_SWIZZLED_TILED_RESOURCE_TO_LINEAR_BUFFER = 0x4
    } D3D12_TILE_COPY_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_TILE_COPY_FLAGS );
typedef
enum D3D12_RESOURCE_STATES
    {
        D3D12_RESOURCE_STATE_COMMON = 0,
        D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER = 0x1,
        D3D12_RESOURCE_STATE_INDEX_BUFFER = 0x2,
        D3D12_RESOURCE_STATE_RENDER_TARGET = 0x4,
        D3D12_RESOURCE_STATE_UNORDERED_ACCESS = 0x8,
        D3D12_RESOURCE_STATE_DEPTH_WRITE = 0x10,
        D3D12_RESOURCE_STATE_DEPTH_READ = 0x20,
        D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE = 0x40,
        D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE = 0x80,
        D3D12_RESOURCE_STATE_STREAM_OUT = 0x100,
        D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT = 0x200,
        D3D12_RESOURCE_STATE_COPY_DEST = 0x400,
        D3D12_RESOURCE_STATE_COPY_SOURCE = 0x800,
        D3D12_RESOURCE_STATE_RESOLVE_DEST = 0x1000,
        D3D12_RESOURCE_STATE_RESOLVE_SOURCE = 0x2000,
        D3D12_RESOURCE_STATE_RAYTRACING_ACCELERATION_STRUCTURE = 0x400000,
        D3D12_RESOURCE_STATE_SHADING_RATE_SOURCE = 0x1000000,
        D3D12_RESOURCE_STATE_GENERIC_READ = ( ( ( ( ( 0x1 | 0x2 ) | 0x40 ) | 0x80 ) | 0x200 ) | 0x800 ) ,
        D3D12_RESOURCE_STATE_PRESENT = 0,
        D3D12_RESOURCE_STATE_PREDICATION = 0x200,
        D3D12_RESOURCE_STATE_VIDEO_DECODE_READ = 0x10000,
        D3D12_RESOURCE_STATE_VIDEO_DECODE_WRITE = 0x20000,
        D3D12_RESOURCE_STATE_VIDEO_PROCESS_READ = 0x40000,
        D3D12_RESOURCE_STATE_VIDEO_PROCESS_WRITE = 0x80000,
        D3D12_RESOURCE_STATE_VIDEO_ENCODE_READ = 0x200000,
        D3D12_RESOURCE_STATE_VIDEO_ENCODE_WRITE = 0x800000
    } D3D12_RESOURCE_STATES;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_RESOURCE_STATES );
typedef
enum D3D12_RESOURCE_BARRIER_TYPE
    {
        D3D12_RESOURCE_BARRIER_TYPE_TRANSITION = 0,
        D3D12_RESOURCE_BARRIER_TYPE_ALIASING = ( D3D12_RESOURCE_BARRIER_TYPE_TRANSITION + 1 ) ,
        D3D12_RESOURCE_BARRIER_TYPE_UAV = ( D3D12_RESOURCE_BARRIER_TYPE_ALIASING + 1 )
    } D3D12_RESOURCE_BARRIER_TYPE;
typedef struct D3D12_RESOURCE_TRANSITION_BARRIER
    {
    ID3D12Resource *pResource;
    UINT Subresource;
    D3D12_RESOURCE_STATES StateBefore;
    D3D12_RESOURCE_STATES StateAfter;
    } D3D12_RESOURCE_TRANSITION_BARRIER;
typedef struct D3D12_RESOURCE_ALIASING_BARRIER
    {
    ID3D12Resource *pResourceBefore;
    ID3D12Resource *pResourceAfter;
    } D3D12_RESOURCE_ALIASING_BARRIER;
typedef struct D3D12_RESOURCE_UAV_BARRIER
    {
    ID3D12Resource *pResource;
    } D3D12_RESOURCE_UAV_BARRIER;
typedef
enum D3D12_RESOURCE_BARRIER_FLAGS
    {
        D3D12_RESOURCE_BARRIER_FLAG_NONE = 0,
        D3D12_RESOURCE_BARRIER_FLAG_BEGIN_ONLY = 0x1,
        D3D12_RESOURCE_BARRIER_FLAG_END_ONLY = 0x2
    } D3D12_RESOURCE_BARRIER_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_RESOURCE_BARRIER_FLAGS );
typedef struct D3D12_RESOURCE_BARRIER
    {
    D3D12_RESOURCE_BARRIER_TYPE Type;
    D3D12_RESOURCE_BARRIER_FLAGS Flags;
    union
        {
        D3D12_RESOURCE_TRANSITION_BARRIER Transition;
        D3D12_RESOURCE_ALIASING_BARRIER Aliasing;
        D3D12_RESOURCE_UAV_BARRIER UAV;
        } ;
    } D3D12_RESOURCE_BARRIER;
typedef struct D3D12_SUBRESOURCE_FOOTPRINT
    {
    DXGI_FORMAT Format;
    UINT Width;
    UINT Height;
    UINT Depth;
    UINT RowPitch;
    } D3D12_SUBRESOURCE_FOOTPRINT;
typedef struct D3D12_PLACED_SUBRESOURCE_FOOTPRINT
    {
    UINT64 Offset;
    D3D12_SUBRESOURCE_FOOTPRINT Footprint;
    } D3D12_PLACED_SUBRESOURCE_FOOTPRINT;
typedef
enum D3D12_TEXTURE_COPY_TYPE
    {
        D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX = 0,
        D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT = 1
    } D3D12_TEXTURE_COPY_TYPE;
typedef struct D3D12_TEXTURE_COPY_LOCATION
    {
    ID3D12Resource *pResource;
    D3D12_TEXTURE_COPY_TYPE Type;
    union
        {
        D3D12_PLACED_SUBRESOURCE_FOOTPRINT PlacedFootprint;
        UINT SubresourceIndex;
        } ;
    } D3D12_TEXTURE_COPY_LOCATION;
typedef
enum D3D12_RESOLVE_MODE
    {
        D3D12_RESOLVE_MODE_DECOMPRESS = 0,
        D3D12_RESOLVE_MODE_MIN = 1,
        D3D12_RESOLVE_MODE_MAX = 2,
        D3D12_RESOLVE_MODE_AVERAGE = 3
    } D3D12_RESOLVE_MODE;
typedef struct D3D12_SAMPLE_POSITION
    {
    INT8 X;
    INT8 Y;
    } D3D12_SAMPLE_POSITION;
typedef struct D3D12_VIEW_INSTANCE_LOCATION
    {
    UINT ViewportArrayIndex;
    UINT RenderTargetArrayIndex;
    } D3D12_VIEW_INSTANCE_LOCATION;
typedef
enum D3D12_VIEW_INSTANCING_FLAGS
    {
        D3D12_VIEW_INSTANCING_FLAG_NONE = 0,
        D3D12_VIEW_INSTANCING_FLAG_ENABLE_VIEW_INSTANCE_MASKING = 0x1
    } D3D12_VIEW_INSTANCING_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_VIEW_INSTANCING_FLAGS );
typedef struct D3D12_VIEW_INSTANCING_DESC
    {
    UINT ViewInstanceCount;
    _Field_size_full_(ViewInstanceCount) const D3D12_VIEW_INSTANCE_LOCATION *pViewInstanceLocations;
    D3D12_VIEW_INSTANCING_FLAGS Flags;
    } D3D12_VIEW_INSTANCING_DESC;
typedef
enum D3D12_SHADER_COMPONENT_MAPPING
    {
        D3D12_SHADER_COMPONENT_MAPPING_FROM_MEMORY_COMPONENT_0 = 0,
        D3D12_SHADER_COMPONENT_MAPPING_FROM_MEMORY_COMPONENT_1 = 1,
        D3D12_SHADER_COMPONENT_MAPPING_FROM_MEMORY_COMPONENT_2 = 2,
        D3D12_SHADER_COMPONENT_MAPPING_FROM_MEMORY_COMPONENT_3 = 3,
        D3D12_SHADER_COMPONENT_MAPPING_FORCE_VALUE_0 = 4,
        D3D12_SHADER_COMPONENT_MAPPING_FORCE_VALUE_1 = 5
    } D3D12_SHADER_COMPONENT_MAPPING;
                                                                (((Src1)&D3D12_SHADER_COMPONENT_MAPPING_MASK)<<D3D12_SHADER_COMPONENT_MAPPING_SHIFT)| \
                                                                (((Src2)&D3D12_SHADER_COMPONENT_MAPPING_MASK)<<(D3D12_SHADER_COMPONENT_MAPPING_SHIFT*2))| \
                                                                (((Src3)&D3D12_SHADER_COMPONENT_MAPPING_MASK)<<(D3D12_SHADER_COMPONENT_MAPPING_SHIFT*3))| \
                                                                D3D12_SHADER_COMPONENT_MAPPING_ALWAYS_SET_BIT_AVOIDING_ZEROMEM_MISTAKES))
typedef
enum D3D12_BUFFER_SRV_FLAGS
    {
        D3D12_BUFFER_SRV_FLAG_NONE = 0,
        D3D12_BUFFER_SRV_FLAG_RAW = 0x1
    } D3D12_BUFFER_SRV_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_BUFFER_SRV_FLAGS );
typedef struct D3D12_BUFFER_SRV
    {
    UINT64 FirstElement;
    UINT NumElements;
    UINT StructureByteStride;
    D3D12_BUFFER_SRV_FLAGS Flags;
    } D3D12_BUFFER_SRV;
typedef struct D3D12_TEX1D_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    FLOAT ResourceMinLODClamp;
    } D3D12_TEX1D_SRV;
typedef struct D3D12_TEX1D_ARRAY_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    UINT FirstArraySlice;
    UINT ArraySize;
    FLOAT ResourceMinLODClamp;
    } D3D12_TEX1D_ARRAY_SRV;
typedef struct D3D12_TEX2D_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    UINT PlaneSlice;
    FLOAT ResourceMinLODClamp;
    } D3D12_TEX2D_SRV;
typedef struct D3D12_TEX2D_ARRAY_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    UINT FirstArraySlice;
    UINT ArraySize;
    UINT PlaneSlice;
    FLOAT ResourceMinLODClamp;
    } D3D12_TEX2D_ARRAY_SRV;
typedef struct D3D12_TEX3D_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    FLOAT ResourceMinLODClamp;
    } D3D12_TEX3D_SRV;
typedef struct D3D12_TEXCUBE_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    FLOAT ResourceMinLODClamp;
    } D3D12_TEXCUBE_SRV;
typedef struct D3D12_TEXCUBE_ARRAY_SRV
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    UINT First2DArrayFace;
    UINT NumCubes;
    FLOAT ResourceMinLODClamp;
    } D3D12_TEXCUBE_ARRAY_SRV;
typedef struct D3D12_TEX2DMS_SRV
    {
    UINT UnusedField_NothingToDefine;
    } D3D12_TEX2DMS_SRV;
typedef struct D3D12_TEX2DMS_ARRAY_SRV
    {
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D12_TEX2DMS_ARRAY_SRV;
typedef struct D3D12_RAYTRACING_ACCELERATION_STRUCTURE_SRV
    {
    D3D12_GPU_VIRTUAL_ADDRESS Location;
    } D3D12_RAYTRACING_ACCELERATION_STRUCTURE_SRV;
typedef
enum D3D12_SRV_DIMENSION
    {
        D3D12_SRV_DIMENSION_UNKNOWN = 0,
        D3D12_SRV_DIMENSION_BUFFER = 1,
        D3D12_SRV_DIMENSION_TEXTURE1D = 2,
        D3D12_SRV_DIMENSION_TEXTURE1DARRAY = 3,
        D3D12_SRV_DIMENSION_TEXTURE2D = 4,
        D3D12_SRV_DIMENSION_TEXTURE2DARRAY = 5,
        D3D12_SRV_DIMENSION_TEXTURE2DMS = 6,
        D3D12_SRV_DIMENSION_TEXTURE2DMSARRAY = 7,
        D3D12_SRV_DIMENSION_TEXTURE3D = 8,
        D3D12_SRV_DIMENSION_TEXTURECUBE = 9,
        D3D12_SRV_DIMENSION_TEXTURECUBEARRAY = 10,
        D3D12_SRV_DIMENSION_RAYTRACING_ACCELERATION_STRUCTURE = 11
    } D3D12_SRV_DIMENSION;
typedef struct D3D12_SHADER_RESOURCE_VIEW_DESC
    {
    DXGI_FORMAT Format;
    D3D12_SRV_DIMENSION ViewDimension;
    UINT Shader4ComponentMapping;
    union
        {
        D3D12_BUFFER_SRV Buffer;
        D3D12_TEX1D_SRV Texture1D;
        D3D12_TEX1D_ARRAY_SRV Texture1DArray;
        D3D12_TEX2D_SRV Texture2D;
        D3D12_TEX2D_ARRAY_SRV Texture2DArray;
        D3D12_TEX2DMS_SRV Texture2DMS;
        D3D12_TEX2DMS_ARRAY_SRV Texture2DMSArray;
        D3D12_TEX3D_SRV Texture3D;
        D3D12_TEXCUBE_SRV TextureCube;
        D3D12_TEXCUBE_ARRAY_SRV TextureCubeArray;
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_SRV RaytracingAccelerationStructure;
        } ;
    } D3D12_SHADER_RESOURCE_VIEW_DESC;
typedef struct D3D12_CONSTANT_BUFFER_VIEW_DESC
    {
    D3D12_GPU_VIRTUAL_ADDRESS BufferLocation;
    UINT SizeInBytes;
    } D3D12_CONSTANT_BUFFER_VIEW_DESC;
typedef
enum D3D12_FILTER
    {
        D3D12_FILTER_MIN_MAG_MIP_POINT = 0,
        D3D12_FILTER_MIN_MAG_POINT_MIP_LINEAR = 0x1,
        D3D12_FILTER_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x4,
        D3D12_FILTER_MIN_POINT_MAG_MIP_LINEAR = 0x5,
        D3D12_FILTER_MIN_LINEAR_MAG_MIP_POINT = 0x10,
        D3D12_FILTER_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x11,
        D3D12_FILTER_MIN_MAG_LINEAR_MIP_POINT = 0x14,
        D3D12_FILTER_MIN_MAG_MIP_LINEAR = 0x15,
        D3D12_FILTER_ANISOTROPIC = 0x55,
        D3D12_FILTER_COMPARISON_MIN_MAG_MIP_POINT = 0x80,
        D3D12_FILTER_COMPARISON_MIN_MAG_POINT_MIP_LINEAR = 0x81,
        D3D12_FILTER_COMPARISON_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x84,
        D3D12_FILTER_COMPARISON_MIN_POINT_MAG_MIP_LINEAR = 0x85,
        D3D12_FILTER_COMPARISON_MIN_LINEAR_MAG_MIP_POINT = 0x90,
        D3D12_FILTER_COMPARISON_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x91,
        D3D12_FILTER_COMPARISON_MIN_MAG_LINEAR_MIP_POINT = 0x94,
        D3D12_FILTER_COMPARISON_MIN_MAG_MIP_LINEAR = 0x95,
        D3D12_FILTER_COMPARISON_ANISOTROPIC = 0xd5,
        D3D12_FILTER_MINIMUM_MIN_MAG_MIP_POINT = 0x100,
        D3D12_FILTER_MINIMUM_MIN_MAG_POINT_MIP_LINEAR = 0x101,
        D3D12_FILTER_MINIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x104,
        D3D12_FILTER_MINIMUM_MIN_POINT_MAG_MIP_LINEAR = 0x105,
        D3D12_FILTER_MINIMUM_MIN_LINEAR_MAG_MIP_POINT = 0x110,
        D3D12_FILTER_MINIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x111,
        D3D12_FILTER_MINIMUM_MIN_MAG_LINEAR_MIP_POINT = 0x114,
        D3D12_FILTER_MINIMUM_MIN_MAG_MIP_LINEAR = 0x115,
        D3D12_FILTER_MINIMUM_ANISOTROPIC = 0x155,
        D3D12_FILTER_MAXIMUM_MIN_MAG_MIP_POINT = 0x180,
        D3D12_FILTER_MAXIMUM_MIN_MAG_POINT_MIP_LINEAR = 0x181,
        D3D12_FILTER_MAXIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x184,
        D3D12_FILTER_MAXIMUM_MIN_POINT_MAG_MIP_LINEAR = 0x185,
        D3D12_FILTER_MAXIMUM_MIN_LINEAR_MAG_MIP_POINT = 0x190,
        D3D12_FILTER_MAXIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x191,
        D3D12_FILTER_MAXIMUM_MIN_MAG_LINEAR_MIP_POINT = 0x194,
        D3D12_FILTER_MAXIMUM_MIN_MAG_MIP_LINEAR = 0x195,
        D3D12_FILTER_MAXIMUM_ANISOTROPIC = 0x1d5
    } D3D12_FILTER;
typedef
enum D3D12_FILTER_TYPE
    {
        D3D12_FILTER_TYPE_POINT = 0,
        D3D12_FILTER_TYPE_LINEAR = 1
    } D3D12_FILTER_TYPE;
typedef
enum D3D12_FILTER_REDUCTION_TYPE
    {
        D3D12_FILTER_REDUCTION_TYPE_STANDARD = 0,
        D3D12_FILTER_REDUCTION_TYPE_COMPARISON = 1,
        D3D12_FILTER_REDUCTION_TYPE_MINIMUM = 2,
        D3D12_FILTER_REDUCTION_TYPE_MAXIMUM = 3
    } D3D12_FILTER_REDUCTION_TYPE;
                                   ( ( D3D12_FILTER ) ( \
                                   ( ( ( min ) & D3D12_FILTER_TYPE_MASK ) << D3D12_MIN_FILTER_SHIFT ) | \
                                   ( ( ( mag ) & D3D12_FILTER_TYPE_MASK ) << D3D12_MAG_FILTER_SHIFT ) | \
                                   ( ( ( mip ) & D3D12_FILTER_TYPE_MASK ) << D3D12_MIP_FILTER_SHIFT ) | \
                                   ( ( ( reduction ) & D3D12_FILTER_REDUCTION_TYPE_MASK ) << D3D12_FILTER_REDUCTION_TYPE_SHIFT ) ) )
                                         ( ( D3D12_FILTER ) ( \
                                         D3D12_ANISOTROPIC_FILTERING_BIT | \
                                         D3D12_ENCODE_BASIC_FILTER( D3D12_FILTER_TYPE_LINEAR, \
                                                                    D3D12_FILTER_TYPE_LINEAR, \
                                                                    D3D12_FILTER_TYPE_LINEAR, \
                                                                    reduction ) ) )
                                 ( ( D3D12_FILTER_TYPE ) \
                                 ( ( ( D3D12Filter ) >> D3D12_MIN_FILTER_SHIFT ) & D3D12_FILTER_TYPE_MASK ) )
                                 ( ( D3D12_FILTER_TYPE ) \
                                 ( ( ( D3D12Filter ) >> D3D12_MAG_FILTER_SHIFT ) & D3D12_FILTER_TYPE_MASK ) )
                                 ( ( D3D12_FILTER_TYPE ) \
                                 ( ( ( D3D12Filter ) >> D3D12_MIP_FILTER_SHIFT ) & D3D12_FILTER_TYPE_MASK ) )
                                 ( ( D3D12_FILTER_REDUCTION_TYPE ) \
                                 ( ( ( D3D12Filter ) >> D3D12_FILTER_REDUCTION_TYPE_SHIFT ) & D3D12_FILTER_REDUCTION_TYPE_MASK ) )
                                 ( D3D12_DECODE_FILTER_REDUCTION( D3D12Filter ) == D3D12_FILTER_REDUCTION_TYPE_COMPARISON )
                            ( ( ( D3D12Filter ) & D3D12_ANISOTROPIC_FILTERING_BIT ) && \
                            ( D3D12_FILTER_TYPE_LINEAR == D3D12_DECODE_MIN_FILTER( D3D12Filter ) ) && \
                            ( D3D12_FILTER_TYPE_LINEAR == D3D12_DECODE_MAG_FILTER( D3D12Filter ) ) && \
                            ( D3D12_FILTER_TYPE_LINEAR == D3D12_DECODE_MIP_FILTER( D3D12Filter ) ) )
typedef
enum D3D12_TEXTURE_ADDRESS_MODE
    {
        D3D12_TEXTURE_ADDRESS_MODE_WRAP = 1,
        D3D12_TEXTURE_ADDRESS_MODE_MIRROR = 2,
        D3D12_TEXTURE_ADDRESS_MODE_CLAMP = 3,
        D3D12_TEXTURE_ADDRESS_MODE_BORDER = 4,
        D3D12_TEXTURE_ADDRESS_MODE_MIRROR_ONCE = 5
    } D3D12_TEXTURE_ADDRESS_MODE;
typedef struct D3D12_SAMPLER_DESC
    {
    D3D12_FILTER Filter;
    D3D12_TEXTURE_ADDRESS_MODE AddressU;
    D3D12_TEXTURE_ADDRESS_MODE AddressV;
    D3D12_TEXTURE_ADDRESS_MODE AddressW;
    FLOAT MipLODBias;
    UINT MaxAnisotropy;
    D3D12_COMPARISON_FUNC ComparisonFunc;
    FLOAT BorderColor[ 4 ];
    FLOAT MinLOD;
    FLOAT MaxLOD;
    } D3D12_SAMPLER_DESC;
typedef
enum D3D12_BUFFER_UAV_FLAGS
    {
        D3D12_BUFFER_UAV_FLAG_NONE = 0,
        D3D12_BUFFER_UAV_FLAG_RAW = 0x1
    } D3D12_BUFFER_UAV_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_BUFFER_UAV_FLAGS );
typedef struct D3D12_BUFFER_UAV
    {
    UINT64 FirstElement;
    UINT NumElements;
    UINT StructureByteStride;
    UINT64 CounterOffsetInBytes;
    D3D12_BUFFER_UAV_FLAGS Flags;
    } D3D12_BUFFER_UAV;
typedef struct D3D12_TEX1D_UAV
    {
    UINT MipSlice;
    } D3D12_TEX1D_UAV;
typedef struct D3D12_TEX1D_ARRAY_UAV
    {
    UINT MipSlice;
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D12_TEX1D_ARRAY_UAV;
typedef struct D3D12_TEX2D_UAV
    {
    UINT MipSlice;
    UINT PlaneSlice;
    } D3D12_TEX2D_UAV;
typedef struct D3D12_TEX2D_ARRAY_UAV
    {
    UINT MipSlice;
    UINT FirstArraySlice;
    UINT ArraySize;
    UINT PlaneSlice;
    } D3D12_TEX2D_ARRAY_UAV;
typedef struct D3D12_TEX3D_UAV
    {
    UINT MipSlice;
    UINT FirstWSlice;
    UINT WSize;
    } D3D12_TEX3D_UAV;
typedef
enum D3D12_UAV_DIMENSION
    {
        D3D12_UAV_DIMENSION_UNKNOWN = 0,
        D3D12_UAV_DIMENSION_BUFFER = 1,
        D3D12_UAV_DIMENSION_TEXTURE1D = 2,
        D3D12_UAV_DIMENSION_TEXTURE1DARRAY = 3,
        D3D12_UAV_DIMENSION_TEXTURE2D = 4,
        D3D12_UAV_DIMENSION_TEXTURE2DARRAY = 5,
        D3D12_UAV_DIMENSION_TEXTURE3D = 8
    } D3D12_UAV_DIMENSION;
typedef struct D3D12_UNORDERED_ACCESS_VIEW_DESC
    {
    DXGI_FORMAT Format;
    D3D12_UAV_DIMENSION ViewDimension;
    union
        {
        D3D12_BUFFER_UAV Buffer;
        D3D12_TEX1D_UAV Texture1D;
        D3D12_TEX1D_ARRAY_UAV Texture1DArray;
        D3D12_TEX2D_UAV Texture2D;
        D3D12_TEX2D_ARRAY_UAV Texture2DArray;
        D3D12_TEX3D_UAV Texture3D;
        } ;
    } D3D12_UNORDERED_ACCESS_VIEW_DESC;
typedef struct D3D12_BUFFER_RTV
    {
    UINT64 FirstElement;
    UINT NumElements;
    } D3D12_BUFFER_RTV;
typedef struct D3D12_TEX1D_RTV
    {
    UINT MipSlice;
    } D3D12_TEX1D_RTV;
typedef struct D3D12_TEX1D_ARRAY_RTV
    {
    UINT MipSlice;
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D12_TEX1D_ARRAY_RTV;
typedef struct D3D12_TEX2D_RTV
    {
    UINT MipSlice;
    UINT PlaneSlice;
    } D3D12_TEX2D_RTV;
typedef struct D3D12_TEX2DMS_RTV
    {
    UINT UnusedField_NothingToDefine;
    } D3D12_TEX2DMS_RTV;
typedef struct D3D12_TEX2D_ARRAY_RTV
    {
    UINT MipSlice;
    UINT FirstArraySlice;
    UINT ArraySize;
    UINT PlaneSlice;
    } D3D12_TEX2D_ARRAY_RTV;
typedef struct D3D12_TEX2DMS_ARRAY_RTV
    {
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D12_TEX2DMS_ARRAY_RTV;
typedef struct D3D12_TEX3D_RTV
    {
    UINT MipSlice;
    UINT FirstWSlice;
    UINT WSize;
    } D3D12_TEX3D_RTV;
typedef
enum D3D12_RTV_DIMENSION
    {
        D3D12_RTV_DIMENSION_UNKNOWN = 0,
        D3D12_RTV_DIMENSION_BUFFER = 1,
        D3D12_RTV_DIMENSION_TEXTURE1D = 2,
        D3D12_RTV_DIMENSION_TEXTURE1DARRAY = 3,
        D3D12_RTV_DIMENSION_TEXTURE2D = 4,
        D3D12_RTV_DIMENSION_TEXTURE2DARRAY = 5,
        D3D12_RTV_DIMENSION_TEXTURE2DMS = 6,
        D3D12_RTV_DIMENSION_TEXTURE2DMSARRAY = 7,
        D3D12_RTV_DIMENSION_TEXTURE3D = 8
    } D3D12_RTV_DIMENSION;
typedef struct D3D12_RENDER_TARGET_VIEW_DESC
    {
    DXGI_FORMAT Format;
    D3D12_RTV_DIMENSION ViewDimension;
    union
        {
        D3D12_BUFFER_RTV Buffer;
        D3D12_TEX1D_RTV Texture1D;
        D3D12_TEX1D_ARRAY_RTV Texture1DArray;
        D3D12_TEX2D_RTV Texture2D;
        D3D12_TEX2D_ARRAY_RTV Texture2DArray;
        D3D12_TEX2DMS_RTV Texture2DMS;
        D3D12_TEX2DMS_ARRAY_RTV Texture2DMSArray;
        D3D12_TEX3D_RTV Texture3D;
        } ;
    } D3D12_RENDER_TARGET_VIEW_DESC;
typedef struct D3D12_TEX1D_DSV
    {
    UINT MipSlice;
    } D3D12_TEX1D_DSV;
typedef struct D3D12_TEX1D_ARRAY_DSV
    {
    UINT MipSlice;
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D12_TEX1D_ARRAY_DSV;
typedef struct D3D12_TEX2D_DSV
    {
    UINT MipSlice;
    } D3D12_TEX2D_DSV;
typedef struct D3D12_TEX2D_ARRAY_DSV
    {
    UINT MipSlice;
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D12_TEX2D_ARRAY_DSV;
typedef struct D3D12_TEX2DMS_DSV
    {
    UINT UnusedField_NothingToDefine;
    } D3D12_TEX2DMS_DSV;
typedef struct D3D12_TEX2DMS_ARRAY_DSV
    {
    UINT FirstArraySlice;
    UINT ArraySize;
    } D3D12_TEX2DMS_ARRAY_DSV;
typedef
enum D3D12_DSV_FLAGS
    {
        D3D12_DSV_FLAG_NONE = 0,
        D3D12_DSV_FLAG_READ_ONLY_DEPTH = 0x1,
        D3D12_DSV_FLAG_READ_ONLY_STENCIL = 0x2
    } D3D12_DSV_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_DSV_FLAGS );
typedef
enum D3D12_DSV_DIMENSION
    {
        D3D12_DSV_DIMENSION_UNKNOWN = 0,
        D3D12_DSV_DIMENSION_TEXTURE1D = 1,
        D3D12_DSV_DIMENSION_TEXTURE1DARRAY = 2,
        D3D12_DSV_DIMENSION_TEXTURE2D = 3,
        D3D12_DSV_DIMENSION_TEXTURE2DARRAY = 4,
        D3D12_DSV_DIMENSION_TEXTURE2DMS = 5,
        D3D12_DSV_DIMENSION_TEXTURE2DMSARRAY = 6
    } D3D12_DSV_DIMENSION;
typedef struct D3D12_DEPTH_STENCIL_VIEW_DESC
    {
    DXGI_FORMAT Format;
    D3D12_DSV_DIMENSION ViewDimension;
    D3D12_DSV_FLAGS Flags;
    union
        {
        D3D12_TEX1D_DSV Texture1D;
        D3D12_TEX1D_ARRAY_DSV Texture1DArray;
        D3D12_TEX2D_DSV Texture2D;
        D3D12_TEX2D_ARRAY_DSV Texture2DArray;
        D3D12_TEX2DMS_DSV Texture2DMS;
        D3D12_TEX2DMS_ARRAY_DSV Texture2DMSArray;
        } ;
    } D3D12_DEPTH_STENCIL_VIEW_DESC;
typedef
enum D3D12_CLEAR_FLAGS
    {
        D3D12_CLEAR_FLAG_DEPTH = 0x1,
        D3D12_CLEAR_FLAG_STENCIL = 0x2
    } D3D12_CLEAR_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_CLEAR_FLAGS );
typedef
enum D3D12_FENCE_FLAGS
    {
        D3D12_FENCE_FLAG_NONE = 0,
        D3D12_FENCE_FLAG_SHARED = 0x1,
        D3D12_FENCE_FLAG_SHARED_CROSS_ADAPTER = 0x2,
        D3D12_FENCE_FLAG_NON_MONITORED = 0x4
    } D3D12_FENCE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_FENCE_FLAGS );
typedef
enum D3D12_DESCRIPTOR_HEAP_TYPE
    {
        D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV = 0,
        D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER = ( D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV + 1 ) ,
        D3D12_DESCRIPTOR_HEAP_TYPE_RTV = ( D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER + 1 ) ,
        D3D12_DESCRIPTOR_HEAP_TYPE_DSV = ( D3D12_DESCRIPTOR_HEAP_TYPE_RTV + 1 ) ,
        D3D12_DESCRIPTOR_HEAP_TYPE_NUM_TYPES = ( D3D12_DESCRIPTOR_HEAP_TYPE_DSV + 1 )
    } D3D12_DESCRIPTOR_HEAP_TYPE;
typedef
enum D3D12_DESCRIPTOR_HEAP_FLAGS
    {
        D3D12_DESCRIPTOR_HEAP_FLAG_NONE = 0,
        D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE = 0x1
    } D3D12_DESCRIPTOR_HEAP_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_DESCRIPTOR_HEAP_FLAGS );
typedef struct D3D12_DESCRIPTOR_HEAP_DESC
    {
    D3D12_DESCRIPTOR_HEAP_TYPE Type;
    UINT NumDescriptors;
    D3D12_DESCRIPTOR_HEAP_FLAGS Flags;
    UINT NodeMask;
    } D3D12_DESCRIPTOR_HEAP_DESC;
typedef
enum D3D12_DESCRIPTOR_RANGE_TYPE
    {
        D3D12_DESCRIPTOR_RANGE_TYPE_SRV = 0,
        D3D12_DESCRIPTOR_RANGE_TYPE_UAV = ( D3D12_DESCRIPTOR_RANGE_TYPE_SRV + 1 ) ,
        D3D12_DESCRIPTOR_RANGE_TYPE_CBV = ( D3D12_DESCRIPTOR_RANGE_TYPE_UAV + 1 ) ,
        D3D12_DESCRIPTOR_RANGE_TYPE_SAMPLER = ( D3D12_DESCRIPTOR_RANGE_TYPE_CBV + 1 )
    } D3D12_DESCRIPTOR_RANGE_TYPE;
typedef struct D3D12_DESCRIPTOR_RANGE
    {
    D3D12_DESCRIPTOR_RANGE_TYPE RangeType;
    UINT NumDescriptors;
    UINT BaseShaderRegister;
    UINT RegisterSpace;
    UINT OffsetInDescriptorsFromTableStart;
    } D3D12_DESCRIPTOR_RANGE;
typedef struct D3D12_ROOT_DESCRIPTOR_TABLE
    {
    UINT NumDescriptorRanges;
    _Field_size_full_(NumDescriptorRanges) const D3D12_DESCRIPTOR_RANGE *pDescriptorRanges;
    } D3D12_ROOT_DESCRIPTOR_TABLE;
typedef struct D3D12_ROOT_CONSTANTS
    {
    UINT ShaderRegister;
    UINT RegisterSpace;
    UINT Num32BitValues;
    } D3D12_ROOT_CONSTANTS;
typedef struct D3D12_ROOT_DESCRIPTOR
    {
    UINT ShaderRegister;
    UINT RegisterSpace;
    } D3D12_ROOT_DESCRIPTOR;
typedef
enum D3D12_SHADER_VISIBILITY
    {
        D3D12_SHADER_VISIBILITY_ALL = 0,
        D3D12_SHADER_VISIBILITY_VERTEX = 1,
        D3D12_SHADER_VISIBILITY_HULL = 2,
        D3D12_SHADER_VISIBILITY_DOMAIN = 3,
        D3D12_SHADER_VISIBILITY_GEOMETRY = 4,
        D3D12_SHADER_VISIBILITY_PIXEL = 5
    } D3D12_SHADER_VISIBILITY;
typedef
enum D3D12_ROOT_PARAMETER_TYPE
    {
        D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE = 0,
        D3D12_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS = ( D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE + 1 ) ,
        D3D12_ROOT_PARAMETER_TYPE_CBV = ( D3D12_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS + 1 ) ,
        D3D12_ROOT_PARAMETER_TYPE_SRV = ( D3D12_ROOT_PARAMETER_TYPE_CBV + 1 ) ,
        D3D12_ROOT_PARAMETER_TYPE_UAV = ( D3D12_ROOT_PARAMETER_TYPE_SRV + 1 )
    } D3D12_ROOT_PARAMETER_TYPE;
typedef struct D3D12_ROOT_PARAMETER
    {
    D3D12_ROOT_PARAMETER_TYPE ParameterType;
    union
        {
        D3D12_ROOT_DESCRIPTOR_TABLE DescriptorTable;
        D3D12_ROOT_CONSTANTS Constants;
        D3D12_ROOT_DESCRIPTOR Descriptor;
        } ;
    D3D12_SHADER_VISIBILITY ShaderVisibility;
    } D3D12_ROOT_PARAMETER;
typedef
enum D3D12_ROOT_SIGNATURE_FLAGS
    {
        D3D12_ROOT_SIGNATURE_FLAG_NONE = 0,
        D3D12_ROOT_SIGNATURE_FLAG_ALLOW_INPUT_ASSEMBLER_INPUT_LAYOUT = 0x1,
        D3D12_ROOT_SIGNATURE_FLAG_DENY_VERTEX_SHADER_ROOT_ACCESS = 0x2,
        D3D12_ROOT_SIGNATURE_FLAG_DENY_HULL_SHADER_ROOT_ACCESS = 0x4,
        D3D12_ROOT_SIGNATURE_FLAG_DENY_DOMAIN_SHADER_ROOT_ACCESS = 0x8,
        D3D12_ROOT_SIGNATURE_FLAG_DENY_GEOMETRY_SHADER_ROOT_ACCESS = 0x10,
        D3D12_ROOT_SIGNATURE_FLAG_DENY_PIXEL_SHADER_ROOT_ACCESS = 0x20,
        D3D12_ROOT_SIGNATURE_FLAG_ALLOW_STREAM_OUTPUT = 0x40,
        D3D12_ROOT_SIGNATURE_FLAG_LOCAL_ROOT_SIGNATURE = 0x80
    } D3D12_ROOT_SIGNATURE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_ROOT_SIGNATURE_FLAGS );
typedef
enum D3D12_STATIC_BORDER_COLOR
    {
        D3D12_STATIC_BORDER_COLOR_TRANSPARENT_BLACK = 0,
        D3D12_STATIC_BORDER_COLOR_OPAQUE_BLACK = ( D3D12_STATIC_BORDER_COLOR_TRANSPARENT_BLACK + 1 ) ,
        D3D12_STATIC_BORDER_COLOR_OPAQUE_WHITE = ( D3D12_STATIC_BORDER_COLOR_OPAQUE_BLACK + 1 )
    } D3D12_STATIC_BORDER_COLOR;
typedef struct D3D12_STATIC_SAMPLER_DESC
    {
    D3D12_FILTER Filter;
    D3D12_TEXTURE_ADDRESS_MODE AddressU;
    D3D12_TEXTURE_ADDRESS_MODE AddressV;
    D3D12_TEXTURE_ADDRESS_MODE AddressW;
    FLOAT MipLODBias;
    UINT MaxAnisotropy;
    D3D12_COMPARISON_FUNC ComparisonFunc;
    D3D12_STATIC_BORDER_COLOR BorderColor;
    FLOAT MinLOD;
    FLOAT MaxLOD;
    UINT ShaderRegister;
    UINT RegisterSpace;
    D3D12_SHADER_VISIBILITY ShaderVisibility;
    } D3D12_STATIC_SAMPLER_DESC;
typedef struct D3D12_ROOT_SIGNATURE_DESC
    {
    UINT NumParameters;
    _Field_size_full_(NumParameters) const D3D12_ROOT_PARAMETER *pParameters;
    UINT NumStaticSamplers;
    _Field_size_full_(NumStaticSamplers) const D3D12_STATIC_SAMPLER_DESC *pStaticSamplers;
    D3D12_ROOT_SIGNATURE_FLAGS Flags;
    } D3D12_ROOT_SIGNATURE_DESC;
typedef
enum D3D12_DESCRIPTOR_RANGE_FLAGS
    {
        D3D12_DESCRIPTOR_RANGE_FLAG_NONE = 0,
        D3D12_DESCRIPTOR_RANGE_FLAG_DESCRIPTORS_VOLATILE = 0x1,
        D3D12_DESCRIPTOR_RANGE_FLAG_DATA_VOLATILE = 0x2,
        D3D12_DESCRIPTOR_RANGE_FLAG_DATA_STATIC_WHILE_SET_AT_EXECUTE = 0x4,
        D3D12_DESCRIPTOR_RANGE_FLAG_DATA_STATIC = 0x8,
        D3D12_DESCRIPTOR_RANGE_FLAG_DESCRIPTORS_STATIC_KEEPING_BUFFER_BOUNDS_CHECKS = 0x10000
    } D3D12_DESCRIPTOR_RANGE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_DESCRIPTOR_RANGE_FLAGS );
typedef struct D3D12_DESCRIPTOR_RANGE1
    {
    D3D12_DESCRIPTOR_RANGE_TYPE RangeType;
    UINT NumDescriptors;
    UINT BaseShaderRegister;
    UINT RegisterSpace;
    D3D12_DESCRIPTOR_RANGE_FLAGS Flags;
    UINT OffsetInDescriptorsFromTableStart;
    } D3D12_DESCRIPTOR_RANGE1;
typedef struct D3D12_ROOT_DESCRIPTOR_TABLE1
    {
    UINT NumDescriptorRanges;
    _Field_size_full_(NumDescriptorRanges) const D3D12_DESCRIPTOR_RANGE1 *pDescriptorRanges;
    } D3D12_ROOT_DESCRIPTOR_TABLE1;
typedef
enum D3D12_ROOT_DESCRIPTOR_FLAGS
    {
        D3D12_ROOT_DESCRIPTOR_FLAG_NONE = 0,
        D3D12_ROOT_DESCRIPTOR_FLAG_DATA_VOLATILE = 0x2,
        D3D12_ROOT_DESCRIPTOR_FLAG_DATA_STATIC_WHILE_SET_AT_EXECUTE = 0x4,
        D3D12_ROOT_DESCRIPTOR_FLAG_DATA_STATIC = 0x8
    } D3D12_ROOT_DESCRIPTOR_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_ROOT_DESCRIPTOR_FLAGS );
typedef struct D3D12_ROOT_DESCRIPTOR1
    {
    UINT ShaderRegister;
    UINT RegisterSpace;
    D3D12_ROOT_DESCRIPTOR_FLAGS Flags;
    } D3D12_ROOT_DESCRIPTOR1;
typedef struct D3D12_ROOT_PARAMETER1
    {
    D3D12_ROOT_PARAMETER_TYPE ParameterType;
    union
        {
        D3D12_ROOT_DESCRIPTOR_TABLE1 DescriptorTable;
        D3D12_ROOT_CONSTANTS Constants;
        D3D12_ROOT_DESCRIPTOR1 Descriptor;
        } ;
    D3D12_SHADER_VISIBILITY ShaderVisibility;
    } D3D12_ROOT_PARAMETER1;
typedef struct D3D12_ROOT_SIGNATURE_DESC1
    {
    UINT NumParameters;
    _Field_size_full_(NumParameters) const D3D12_ROOT_PARAMETER1 *pParameters;
    UINT NumStaticSamplers;
    _Field_size_full_(NumStaticSamplers) const D3D12_STATIC_SAMPLER_DESC *pStaticSamplers;
    D3D12_ROOT_SIGNATURE_FLAGS Flags;
    } D3D12_ROOT_SIGNATURE_DESC1;
typedef struct D3D12_VERSIONED_ROOT_SIGNATURE_DESC
    {
    D3D_ROOT_SIGNATURE_VERSION Version;
    union
        {
        D3D12_ROOT_SIGNATURE_DESC Desc_1_0;
        D3D12_ROOT_SIGNATURE_DESC1 Desc_1_1;
        } ;
    } D3D12_VERSIONED_ROOT_SIGNATURE_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D12RootSignatureDeserializer;
    typedef struct ID3D12RootSignatureDeserializerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12RootSignatureDeserializer * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12RootSignatureDeserializer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12RootSignatureDeserializer * This);
        const D3D12_ROOT_SIGNATURE_DESC *( STDMETHODCALLTYPE *GetRootSignatureDesc )(
            ID3D12RootSignatureDeserializer * This);
        END_INTERFACE
    } ID3D12RootSignatureDeserializerVtbl;
    interface ID3D12RootSignatureDeserializer
    {
        CONST_VTBL struct ID3D12RootSignatureDeserializerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRootSignatureDesc(This) )
EXTERN_C const IID IID_ID3D12VersionedRootSignatureDeserializer;
    typedef struct ID3D12VersionedRootSignatureDeserializerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12VersionedRootSignatureDeserializer * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12VersionedRootSignatureDeserializer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12VersionedRootSignatureDeserializer * This);
        HRESULT ( STDMETHODCALLTYPE *GetRootSignatureDescAtVersion )(
            ID3D12VersionedRootSignatureDeserializer * This,
            D3D_ROOT_SIGNATURE_VERSION convertToVersion,
            _Out_ const D3D12_VERSIONED_ROOT_SIGNATURE_DESC **ppDesc);
        const D3D12_VERSIONED_ROOT_SIGNATURE_DESC *( STDMETHODCALLTYPE *GetUnconvertedRootSignatureDesc )(
            ID3D12VersionedRootSignatureDeserializer * This);
        END_INTERFACE
    } ID3D12VersionedRootSignatureDeserializerVtbl;
    interface ID3D12VersionedRootSignatureDeserializer
    {
        CONST_VTBL struct ID3D12VersionedRootSignatureDeserializerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRootSignatureDescAtVersion(This,convertToVersion,ppDesc) )
    ( (This)->lpVtbl -> GetUnconvertedRootSignatureDesc(This) )
typedef HRESULT (WINAPI* PFN_D3D12_SERIALIZE_ROOT_SIGNATURE)(
                            _In_ const D3D12_ROOT_SIGNATURE_DESC* pRootSignature,
                            _In_ D3D_ROOT_SIGNATURE_VERSION Version,
                            _Out_ ID3DBlob** ppBlob,
                            _Always_(_Outptr_opt_result_maybenull_) ID3DBlob** ppErrorBlob);
HRESULT WINAPI D3D12SerializeRootSignature(
                            _In_ const D3D12_ROOT_SIGNATURE_DESC* pRootSignature,
                            _In_ D3D_ROOT_SIGNATURE_VERSION Version,
                            _Out_ ID3DBlob** ppBlob,
                            _Always_(_Outptr_opt_result_maybenull_) ID3DBlob** ppErrorBlob);
typedef HRESULT (WINAPI* PFN_D3D12_CREATE_ROOT_SIGNATURE_DESERIALIZER)(
                                     _In_reads_bytes_(SrcDataSizeInBytes) LPCVOID pSrcData,
                                     _In_ SIZE_T SrcDataSizeInBytes,
                                     _In_ REFIID pRootSignatureDeserializerInterface,
                                     _Out_ void** ppRootSignatureDeserializer);
HRESULT WINAPI D3D12CreateRootSignatureDeserializer(
                                     _In_reads_bytes_(SrcDataSizeInBytes) LPCVOID pSrcData,
                                     _In_ SIZE_T SrcDataSizeInBytes,
                                     _In_ REFIID pRootSignatureDeserializerInterface,
                                     _Out_ void** ppRootSignatureDeserializer);
typedef HRESULT (WINAPI* PFN_D3D12_SERIALIZE_VERSIONED_ROOT_SIGNATURE)(
                            _In_ const D3D12_VERSIONED_ROOT_SIGNATURE_DESC* pRootSignature,
                            _Out_ ID3DBlob** ppBlob,
                            _Always_(_Outptr_opt_result_maybenull_) ID3DBlob** ppErrorBlob);
HRESULT WINAPI D3D12SerializeVersionedRootSignature(
                            _In_ const D3D12_VERSIONED_ROOT_SIGNATURE_DESC* pRootSignature,
                            _Out_ ID3DBlob** ppBlob,
                            _Always_(_Outptr_opt_result_maybenull_) ID3DBlob** ppErrorBlob);
typedef HRESULT (WINAPI* PFN_D3D12_CREATE_VERSIONED_ROOT_SIGNATURE_DESERIALIZER)(
                                     _In_reads_bytes_(SrcDataSizeInBytes) LPCVOID pSrcData,
                                     _In_ SIZE_T SrcDataSizeInBytes,
                                     _In_ REFIID pRootSignatureDeserializerInterface,
                                     _Out_ void** ppRootSignatureDeserializer);
HRESULT WINAPI D3D12CreateVersionedRootSignatureDeserializer(
                                     _In_reads_bytes_(SrcDataSizeInBytes) LPCVOID pSrcData,
                                     _In_ SIZE_T SrcDataSizeInBytes,
                                     _In_ REFIID pRootSignatureDeserializerInterface,
                                     _Out_ void** ppRootSignatureDeserializer);
typedef struct D3D12_CPU_DESCRIPTOR_HANDLE
    {
    SIZE_T ptr;
    } D3D12_CPU_DESCRIPTOR_HANDLE;
typedef struct D3D12_GPU_DESCRIPTOR_HANDLE
    {
    UINT64 ptr;
    } D3D12_GPU_DESCRIPTOR_HANDLE;
typedef struct D3D12_DISCARD_REGION
    {
    UINT NumRects;
    _In_reads_(NumRects) const D3D12_RECT *pRects;
    UINT FirstSubresource;
    UINT NumSubresources;
    } D3D12_DISCARD_REGION;
typedef
enum D3D12_QUERY_HEAP_TYPE
    {
        D3D12_QUERY_HEAP_TYPE_OCCLUSION = 0,
        D3D12_QUERY_HEAP_TYPE_TIMESTAMP = 1,
        D3D12_QUERY_HEAP_TYPE_PIPELINE_STATISTICS = 2,
        D3D12_QUERY_HEAP_TYPE_SO_STATISTICS = 3,
        D3D12_QUERY_HEAP_TYPE_VIDEO_DECODE_STATISTICS = 4,
        D3D12_QUERY_HEAP_TYPE_COPY_QUEUE_TIMESTAMP = 5
    } D3D12_QUERY_HEAP_TYPE;
typedef struct D3D12_QUERY_HEAP_DESC
    {
    D3D12_QUERY_HEAP_TYPE Type;
    UINT Count;
    UINT NodeMask;
    } D3D12_QUERY_HEAP_DESC;
typedef
enum D3D12_QUERY_TYPE
    {
        D3D12_QUERY_TYPE_OCCLUSION = 0,
        D3D12_QUERY_TYPE_BINARY_OCCLUSION = 1,
        D3D12_QUERY_TYPE_TIMESTAMP = 2,
        D3D12_QUERY_TYPE_PIPELINE_STATISTICS = 3,
        D3D12_QUERY_TYPE_SO_STATISTICS_STREAM0 = 4,
        D3D12_QUERY_TYPE_SO_STATISTICS_STREAM1 = 5,
        D3D12_QUERY_TYPE_SO_STATISTICS_STREAM2 = 6,
        D3D12_QUERY_TYPE_SO_STATISTICS_STREAM3 = 7,
        D3D12_QUERY_TYPE_VIDEO_DECODE_STATISTICS = 8
    } D3D12_QUERY_TYPE;
typedef
enum D3D12_PREDICATION_OP
    {
        D3D12_PREDICATION_OP_EQUAL_ZERO = 0,
        D3D12_PREDICATION_OP_NOT_EQUAL_ZERO = 1
    } D3D12_PREDICATION_OP;
typedef struct D3D12_QUERY_DATA_PIPELINE_STATISTICS
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
    } D3D12_QUERY_DATA_PIPELINE_STATISTICS;
typedef struct D3D12_QUERY_DATA_SO_STATISTICS
    {
    UINT64 NumPrimitivesWritten;
    UINT64 PrimitivesStorageNeeded;
    } D3D12_QUERY_DATA_SO_STATISTICS;
typedef struct D3D12_STREAM_OUTPUT_BUFFER_VIEW
    {
    D3D12_GPU_VIRTUAL_ADDRESS BufferLocation;
    UINT64 SizeInBytes;
    D3D12_GPU_VIRTUAL_ADDRESS BufferFilledSizeLocation;
    } D3D12_STREAM_OUTPUT_BUFFER_VIEW;
typedef struct D3D12_DRAW_ARGUMENTS
    {
    UINT VertexCountPerInstance;
    UINT InstanceCount;
    UINT StartVertexLocation;
    UINT StartInstanceLocation;
    } D3D12_DRAW_ARGUMENTS;
typedef struct D3D12_DRAW_INDEXED_ARGUMENTS
    {
    UINT IndexCountPerInstance;
    UINT InstanceCount;
    UINT StartIndexLocation;
    INT BaseVertexLocation;
    UINT StartInstanceLocation;
    } D3D12_DRAW_INDEXED_ARGUMENTS;
typedef struct D3D12_DISPATCH_ARGUMENTS
    {
    UINT ThreadGroupCountX;
    UINT ThreadGroupCountY;
    UINT ThreadGroupCountZ;
    } D3D12_DISPATCH_ARGUMENTS;
typedef struct D3D12_VERTEX_BUFFER_VIEW
    {
    D3D12_GPU_VIRTUAL_ADDRESS BufferLocation;
    UINT SizeInBytes;
    UINT StrideInBytes;
    } D3D12_VERTEX_BUFFER_VIEW;
typedef struct D3D12_INDEX_BUFFER_VIEW
    {
    D3D12_GPU_VIRTUAL_ADDRESS BufferLocation;
    UINT SizeInBytes;
    DXGI_FORMAT Format;
    } D3D12_INDEX_BUFFER_VIEW;
typedef
enum D3D12_INDIRECT_ARGUMENT_TYPE
    {
        D3D12_INDIRECT_ARGUMENT_TYPE_DRAW = 0,
        D3D12_INDIRECT_ARGUMENT_TYPE_DRAW_INDEXED = ( D3D12_INDIRECT_ARGUMENT_TYPE_DRAW + 1 ) ,
        D3D12_INDIRECT_ARGUMENT_TYPE_DISPATCH = ( D3D12_INDIRECT_ARGUMENT_TYPE_DRAW_INDEXED + 1 ) ,
        D3D12_INDIRECT_ARGUMENT_TYPE_VERTEX_BUFFER_VIEW = ( D3D12_INDIRECT_ARGUMENT_TYPE_DISPATCH + 1 ) ,
        D3D12_INDIRECT_ARGUMENT_TYPE_INDEX_BUFFER_VIEW = ( D3D12_INDIRECT_ARGUMENT_TYPE_VERTEX_BUFFER_VIEW + 1 ) ,
        D3D12_INDIRECT_ARGUMENT_TYPE_CONSTANT = ( D3D12_INDIRECT_ARGUMENT_TYPE_INDEX_BUFFER_VIEW + 1 ) ,
        D3D12_INDIRECT_ARGUMENT_TYPE_CONSTANT_BUFFER_VIEW = ( D3D12_INDIRECT_ARGUMENT_TYPE_CONSTANT + 1 ) ,
        D3D12_INDIRECT_ARGUMENT_TYPE_SHADER_RESOURCE_VIEW = ( D3D12_INDIRECT_ARGUMENT_TYPE_CONSTANT_BUFFER_VIEW + 1 ) ,
        D3D12_INDIRECT_ARGUMENT_TYPE_UNORDERED_ACCESS_VIEW = ( D3D12_INDIRECT_ARGUMENT_TYPE_SHADER_RESOURCE_VIEW + 1 )
    } D3D12_INDIRECT_ARGUMENT_TYPE;
typedef struct D3D12_INDIRECT_ARGUMENT_DESC
    {
    D3D12_INDIRECT_ARGUMENT_TYPE Type;
    union
        {
        struct
            {
            UINT Slot;
            } VertexBuffer;
        struct
            {
            UINT RootParameterIndex;
            UINT DestOffsetIn32BitValues;
            UINT Num32BitValuesToSet;
            } Constant;
        struct
            {
            UINT RootParameterIndex;
            } ConstantBufferView;
        struct
            {
            UINT RootParameterIndex;
            } ShaderResourceView;
        struct
            {
            UINT RootParameterIndex;
            } UnorderedAccessView;
        } ;
    } D3D12_INDIRECT_ARGUMENT_DESC;
typedef struct D3D12_COMMAND_SIGNATURE_DESC
    {
    UINT ByteStride;
    UINT NumArgumentDescs;
    _Field_size_full_(NumArgumentDescs) const D3D12_INDIRECT_ARGUMENT_DESC *pArgumentDescs;
    UINT NodeMask;
    } D3D12_COMMAND_SIGNATURE_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D12Pageable;
    typedef struct ID3D12PageableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12Pageable * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12Pageable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12Pageable * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12Pageable * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12Pageable * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12Pageable * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12Pageable * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12Pageable * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        END_INTERFACE
    } ID3D12PageableVtbl;
    interface ID3D12Pageable
    {
        CONST_VTBL struct ID3D12PageableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
EXTERN_C const IID IID_ID3D12Heap;
    typedef struct ID3D12HeapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12Heap * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12Heap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12Heap * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12Heap * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12Heap * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12Heap * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12Heap * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12Heap * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        D3D12_HEAP_DESC ( STDMETHODCALLTYPE *GetDesc )(
            ID3D12Heap * This);
        END_INTERFACE
    } ID3D12HeapVtbl;
    interface ID3D12Heap
    {
        CONST_VTBL struct ID3D12HeapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> GetDesc(This) )
EXTERN_C const IID IID_ID3D12Resource;
    typedef struct ID3D12ResourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12Resource * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12Resource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12Resource * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12Resource * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12Resource * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12Resource * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12Resource * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12Resource * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        HRESULT ( STDMETHODCALLTYPE *Map )(
            ID3D12Resource * This,
            UINT Subresource,
            _In_opt_ const D3D12_RANGE *pReadRange,
            _Outptr_opt_result_bytebuffer_(_Inexpressible_("Dependent on resource")) void **ppData);
        void ( STDMETHODCALLTYPE *Unmap )(
            ID3D12Resource * This,
            UINT Subresource,
            _In_opt_ const D3D12_RANGE *pWrittenRange);
        D3D12_RESOURCE_DESC ( STDMETHODCALLTYPE *GetDesc )(
            ID3D12Resource * This);
        D3D12_GPU_VIRTUAL_ADDRESS ( STDMETHODCALLTYPE *GetGPUVirtualAddress )(
            ID3D12Resource * This);
        HRESULT ( STDMETHODCALLTYPE *WriteToSubresource )(
            ID3D12Resource * This,
            UINT DstSubresource,
            _In_opt_ const D3D12_BOX *pDstBox,
            _In_ const void *pSrcData,
            UINT SrcRowPitch,
            UINT SrcDepthPitch);
        HRESULT ( STDMETHODCALLTYPE *ReadFromSubresource )(
            ID3D12Resource * This,
            _Out_ void *pDstData,
            UINT DstRowPitch,
            UINT DstDepthPitch,
            UINT SrcSubresource,
            _In_opt_ const D3D12_BOX *pSrcBox);
        HRESULT ( STDMETHODCALLTYPE *GetHeapProperties )(
            ID3D12Resource * This,
            _Out_opt_ D3D12_HEAP_PROPERTIES *pHeapProperties,
            _Out_opt_ D3D12_HEAP_FLAGS *pHeapFlags);
        END_INTERFACE
    } ID3D12ResourceVtbl;
    interface ID3D12Resource
    {
        CONST_VTBL struct ID3D12ResourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> Map(This,Subresource,pReadRange,ppData) )
    ( (This)->lpVtbl -> Unmap(This,Subresource,pWrittenRange) )
    ( (This)->lpVtbl -> GetDesc(This) )
    ( (This)->lpVtbl -> GetGPUVirtualAddress(This) )
    ( (This)->lpVtbl -> WriteToSubresource(This,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch) )
    ( (This)->lpVtbl -> ReadFromSubresource(This,pDstData,DstRowPitch,DstDepthPitch,SrcSubresource,pSrcBox) )
    ( (This)->lpVtbl -> GetHeapProperties(This,pHeapProperties,pHeapFlags) )
EXTERN_C const IID IID_ID3D12CommandAllocator;
    typedef struct ID3D12CommandAllocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12CommandAllocator * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12CommandAllocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12CommandAllocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12CommandAllocator * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12CommandAllocator * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12CommandAllocator * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12CommandAllocator * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12CommandAllocator * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            ID3D12CommandAllocator * This);
        END_INTERFACE
    } ID3D12CommandAllocatorVtbl;
    interface ID3D12CommandAllocator
    {
        CONST_VTBL struct ID3D12CommandAllocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> Reset(This) )
EXTERN_C const IID IID_ID3D12Fence;
    typedef struct ID3D12FenceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12Fence * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12Fence * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12Fence * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12Fence * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12Fence * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12Fence * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12Fence * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12Fence * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        UINT64 ( STDMETHODCALLTYPE *GetCompletedValue )(
            ID3D12Fence * This);
        HRESULT ( STDMETHODCALLTYPE *SetEventOnCompletion )(
            ID3D12Fence * This,
            UINT64 Value,
            HANDLE hEvent);
        HRESULT ( STDMETHODCALLTYPE *Signal )(
            ID3D12Fence * This,
            UINT64 Value);
        END_INTERFACE
    } ID3D12FenceVtbl;
    interface ID3D12Fence
    {
        CONST_VTBL struct ID3D12FenceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> GetCompletedValue(This) )
    ( (This)->lpVtbl -> SetEventOnCompletion(This,Value,hEvent) )
    ( (This)->lpVtbl -> Signal(This,Value) )
EXTERN_C const IID IID_ID3D12Fence1;
    typedef struct ID3D12Fence1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12Fence1 * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12Fence1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12Fence1 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12Fence1 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12Fence1 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12Fence1 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12Fence1 * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12Fence1 * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        UINT64 ( STDMETHODCALLTYPE *GetCompletedValue )(
            ID3D12Fence1 * This);
        HRESULT ( STDMETHODCALLTYPE *SetEventOnCompletion )(
            ID3D12Fence1 * This,
            UINT64 Value,
            HANDLE hEvent);
        HRESULT ( STDMETHODCALLTYPE *Signal )(
            ID3D12Fence1 * This,
            UINT64 Value);
        D3D12_FENCE_FLAGS ( STDMETHODCALLTYPE *GetCreationFlags )(
            ID3D12Fence1 * This);
        END_INTERFACE
    } ID3D12Fence1Vtbl;
    interface ID3D12Fence1
    {
        CONST_VTBL struct ID3D12Fence1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> GetCompletedValue(This) )
    ( (This)->lpVtbl -> SetEventOnCompletion(This,Value,hEvent) )
    ( (This)->lpVtbl -> Signal(This,Value) )
    ( (This)->lpVtbl -> GetCreationFlags(This) )
EXTERN_C const IID IID_ID3D12PipelineState;
    typedef struct ID3D12PipelineStateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12PipelineState * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12PipelineState * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12PipelineState * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12PipelineState * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12PipelineState * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12PipelineState * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12PipelineState * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12PipelineState * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        HRESULT ( STDMETHODCALLTYPE *GetCachedBlob )(
            ID3D12PipelineState * This,
            _COM_Outptr_ ID3DBlob **ppBlob);
        END_INTERFACE
    } ID3D12PipelineStateVtbl;
    interface ID3D12PipelineState
    {
        CONST_VTBL struct ID3D12PipelineStateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> GetCachedBlob(This,ppBlob) )
EXTERN_C const IID IID_ID3D12DescriptorHeap;
    typedef struct ID3D12DescriptorHeapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12DescriptorHeap * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12DescriptorHeap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12DescriptorHeap * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12DescriptorHeap * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12DescriptorHeap * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12DescriptorHeap * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12DescriptorHeap * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12DescriptorHeap * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        D3D12_DESCRIPTOR_HEAP_DESC ( STDMETHODCALLTYPE *GetDesc )(
            ID3D12DescriptorHeap * This);
        D3D12_CPU_DESCRIPTOR_HANDLE ( STDMETHODCALLTYPE *GetCPUDescriptorHandleForHeapStart )(
            ID3D12DescriptorHeap * This);
        D3D12_GPU_DESCRIPTOR_HANDLE ( STDMETHODCALLTYPE *GetGPUDescriptorHandleForHeapStart )(
            ID3D12DescriptorHeap * This);
        END_INTERFACE
    } ID3D12DescriptorHeapVtbl;
    interface ID3D12DescriptorHeap
    {
        CONST_VTBL struct ID3D12DescriptorHeapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> GetDesc(This) )
    ( (This)->lpVtbl -> GetCPUDescriptorHandleForHeapStart(This) )
    ( (This)->lpVtbl -> GetGPUDescriptorHandleForHeapStart(This) )
EXTERN_C const IID IID_ID3D12QueryHeap;
    typedef struct ID3D12QueryHeapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12QueryHeap * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12QueryHeap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12QueryHeap * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12QueryHeap * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12QueryHeap * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12QueryHeap * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12QueryHeap * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12QueryHeap * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        END_INTERFACE
    } ID3D12QueryHeapVtbl;
    interface ID3D12QueryHeap
    {
        CONST_VTBL struct ID3D12QueryHeapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
EXTERN_C const IID IID_ID3D12CommandSignature;
    typedef struct ID3D12CommandSignatureVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12CommandSignature * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12CommandSignature * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12CommandSignature * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12CommandSignature * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12CommandSignature * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12CommandSignature * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12CommandSignature * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12CommandSignature * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        END_INTERFACE
    } ID3D12CommandSignatureVtbl;
    interface ID3D12CommandSignature
    {
        CONST_VTBL struct ID3D12CommandSignatureVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
EXTERN_C const IID IID_ID3D12CommandList;
    typedef struct ID3D12CommandListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12CommandList * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12CommandList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12CommandList * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12CommandList * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12CommandList * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12CommandList * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12CommandList * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12CommandList * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        D3D12_COMMAND_LIST_TYPE ( STDMETHODCALLTYPE *GetType )(
            ID3D12CommandList * This);
        END_INTERFACE
    } ID3D12CommandListVtbl;
    interface ID3D12CommandList
    {
        CONST_VTBL struct ID3D12CommandListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> GetType(This) )
EXTERN_C const IID IID_ID3D12GraphicsCommandList;
    typedef struct ID3D12GraphicsCommandListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12GraphicsCommandList * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12GraphicsCommandList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12GraphicsCommandList * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12GraphicsCommandList * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12GraphicsCommandList * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12GraphicsCommandList * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12GraphicsCommandList * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12GraphicsCommandList * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        D3D12_COMMAND_LIST_TYPE ( STDMETHODCALLTYPE *GetType )(
            ID3D12GraphicsCommandList * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            ID3D12GraphicsCommandList * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            ID3D12GraphicsCommandList * This,
            _In_ ID3D12CommandAllocator *pAllocator,
            _In_opt_ ID3D12PipelineState *pInitialState);
        void ( STDMETHODCALLTYPE *ClearState )(
            ID3D12GraphicsCommandList * This,
            _In_opt_ ID3D12PipelineState *pPipelineState);
        void ( STDMETHODCALLTYPE *DrawInstanced )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT VertexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *DrawIndexedInstanced )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT IndexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartIndexLocation,
            _In_ INT BaseVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *Dispatch )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT ThreadGroupCountX,
            _In_ UINT ThreadGroupCountY,
            _In_ UINT ThreadGroupCountZ);
        void ( STDMETHODCALLTYPE *CopyBufferRegion )(
            ID3D12GraphicsCommandList * This,
            _In_ ID3D12Resource *pDstBuffer,
            UINT64 DstOffset,
            _In_ ID3D12Resource *pSrcBuffer,
            UINT64 SrcOffset,
            UINT64 NumBytes);
        void ( STDMETHODCALLTYPE *CopyTextureRegion )(
            ID3D12GraphicsCommandList * This,
            _In_ const D3D12_TEXTURE_COPY_LOCATION *pDst,
            UINT DstX,
            UINT DstY,
            UINT DstZ,
            _In_ const D3D12_TEXTURE_COPY_LOCATION *pSrc,
            _In_opt_ const D3D12_BOX *pSrcBox);
        void ( STDMETHODCALLTYPE *CopyResource )(
            ID3D12GraphicsCommandList * This,
            _In_ ID3D12Resource *pDstResource,
            _In_ ID3D12Resource *pSrcResource);
        void ( STDMETHODCALLTYPE *CopyTiles )(
            ID3D12GraphicsCommandList * This,
            _In_ ID3D12Resource *pTiledResource,
            _In_ const D3D12_TILED_RESOURCE_COORDINATE *pTileRegionStartCoordinate,
            _In_ const D3D12_TILE_REGION_SIZE *pTileRegionSize,
            _In_ ID3D12Resource *pBuffer,
            UINT64 BufferStartOffsetInBytes,
            D3D12_TILE_COPY_FLAGS Flags);
        void ( STDMETHODCALLTYPE *ResolveSubresource )(
            ID3D12GraphicsCommandList * This,
            _In_ ID3D12Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ ID3D12Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_ DXGI_FORMAT Format);
        void ( STDMETHODCALLTYPE *IASetPrimitiveTopology )(
            ID3D12GraphicsCommandList * This,
            _In_ D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology);
        void ( STDMETHODCALLTYPE *RSSetViewports )(
            ID3D12GraphicsCommandList * This,
            _In_range_(0, D3D12_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumViewports,
            _In_reads_( NumViewports) const D3D12_VIEWPORT *pViewports);
        void ( STDMETHODCALLTYPE *RSSetScissorRects )(
            ID3D12GraphicsCommandList * This,
            _In_range_(0, D3D12_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumRects,
            _In_reads_( NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *OMSetBlendFactor )(
            ID3D12GraphicsCommandList * This,
            _In_reads_opt_(4) const FLOAT BlendFactor[ 4 ]);
        void ( STDMETHODCALLTYPE *OMSetStencilRef )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT StencilRef);
        void ( STDMETHODCALLTYPE *SetPipelineState )(
            ID3D12GraphicsCommandList * This,
            _In_ ID3D12PipelineState *pPipelineState);
        void ( STDMETHODCALLTYPE *ResourceBarrier )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT NumBarriers,
            _In_reads_(NumBarriers) const D3D12_RESOURCE_BARRIER *pBarriers);
        void ( STDMETHODCALLTYPE *ExecuteBundle )(
            ID3D12GraphicsCommandList * This,
            _In_ ID3D12GraphicsCommandList *pCommandList);
        void ( STDMETHODCALLTYPE *SetDescriptorHeaps )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT NumDescriptorHeaps,
            _In_reads_(NumDescriptorHeaps) ID3D12DescriptorHeap *const *ppDescriptorHeaps);
        void ( STDMETHODCALLTYPE *SetComputeRootSignature )(
            ID3D12GraphicsCommandList * This,
            _In_opt_ ID3D12RootSignature *pRootSignature);
        void ( STDMETHODCALLTYPE *SetGraphicsRootSignature )(
            ID3D12GraphicsCommandList * This,
            _In_opt_ ID3D12RootSignature *pRootSignature);
        void ( STDMETHODCALLTYPE *SetComputeRootDescriptorTable )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
        void ( STDMETHODCALLTYPE *SetGraphicsRootDescriptorTable )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
        void ( STDMETHODCALLTYPE *SetComputeRoot32BitConstant )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT SrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetGraphicsRoot32BitConstant )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT SrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetComputeRoot32BitConstants )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT Num32BitValuesToSet,
            _In_reads_(Num32BitValuesToSet*sizeof(UINT)) const void *pSrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetGraphicsRoot32BitConstants )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT Num32BitValuesToSet,
            _In_reads_(Num32BitValuesToSet*sizeof(UINT)) const void *pSrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetComputeRootConstantBufferView )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetGraphicsRootConstantBufferView )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetComputeRootShaderResourceView )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetGraphicsRootShaderResourceView )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetComputeRootUnorderedAccessView )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetGraphicsRootUnorderedAccessView )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *IASetIndexBuffer )(
            ID3D12GraphicsCommandList * This,
            _In_opt_ const D3D12_INDEX_BUFFER_VIEW *pView);
        void ( STDMETHODCALLTYPE *IASetVertexBuffers )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT StartSlot,
            _In_ UINT NumViews,
            _In_reads_opt_(NumViews) const D3D12_VERTEX_BUFFER_VIEW *pViews);
        void ( STDMETHODCALLTYPE *SOSetTargets )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT StartSlot,
            _In_ UINT NumViews,
            _In_reads_opt_(NumViews) const D3D12_STREAM_OUTPUT_BUFFER_VIEW *pViews);
        void ( STDMETHODCALLTYPE *OMSetRenderTargets )(
            ID3D12GraphicsCommandList * This,
            _In_ UINT NumRenderTargetDescriptors,
            _In_opt_ const D3D12_CPU_DESCRIPTOR_HANDLE *pRenderTargetDescriptors,
            _In_ BOOL RTsSingleHandleToDescriptorRange,
            _In_opt_ const D3D12_CPU_DESCRIPTOR_HANDLE *pDepthStencilDescriptor);
        void ( STDMETHODCALLTYPE *ClearDepthStencilView )(
            ID3D12GraphicsCommandList * This,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView,
            _In_ D3D12_CLEAR_FLAGS ClearFlags,
            _In_ FLOAT Depth,
            _In_ UINT8 Stencil,
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *ClearRenderTargetView )(
            ID3D12GraphicsCommandList * This,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView,
            _In_ const FLOAT ColorRGBA[ 4 ],
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *ClearUnorderedAccessViewUint )(
            ID3D12GraphicsCommandList * This,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
            _In_ ID3D12Resource *pResource,
            _In_ const UINT Values[ 4 ],
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *ClearUnorderedAccessViewFloat )(
            ID3D12GraphicsCommandList * This,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
            _In_ ID3D12Resource *pResource,
            _In_ const FLOAT Values[ 4 ],
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *DiscardResource )(
            ID3D12GraphicsCommandList * This,
            _In_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_DISCARD_REGION *pRegion);
        void ( STDMETHODCALLTYPE *BeginQuery )(
            ID3D12GraphicsCommandList * This,
            _In_ ID3D12QueryHeap *pQueryHeap,
            _In_ D3D12_QUERY_TYPE Type,
            _In_ UINT Index);
        void ( STDMETHODCALLTYPE *EndQuery )(
            ID3D12GraphicsCommandList * This,
            _In_ ID3D12QueryHeap *pQueryHeap,
            _In_ D3D12_QUERY_TYPE Type,
            _In_ UINT Index);
        void ( STDMETHODCALLTYPE *ResolveQueryData )(
            ID3D12GraphicsCommandList * This,
            _In_ ID3D12QueryHeap *pQueryHeap,
            _In_ D3D12_QUERY_TYPE Type,
            _In_ UINT StartIndex,
            _In_ UINT NumQueries,
            _In_ ID3D12Resource *pDestinationBuffer,
            _In_ UINT64 AlignedDestinationBufferOffset);
        void ( STDMETHODCALLTYPE *SetPredication )(
            ID3D12GraphicsCommandList * This,
            _In_opt_ ID3D12Resource *pBuffer,
            _In_ UINT64 AlignedBufferOffset,
            _In_ D3D12_PREDICATION_OP Operation);
        void ( STDMETHODCALLTYPE *SetMarker )(
            ID3D12GraphicsCommandList * This,
            UINT Metadata,
            _In_reads_bytes_opt_(Size) const void *pData,
            UINT Size);
        void ( STDMETHODCALLTYPE *BeginEvent )(
            ID3D12GraphicsCommandList * This,
            UINT Metadata,
            _In_reads_bytes_opt_(Size) const void *pData,
            UINT Size);
        void ( STDMETHODCALLTYPE *EndEvent )(
            ID3D12GraphicsCommandList * This);
        void ( STDMETHODCALLTYPE *ExecuteIndirect )(
            ID3D12GraphicsCommandList * This,
            _In_ ID3D12CommandSignature *pCommandSignature,
            _In_ UINT MaxCommandCount,
            _In_ ID3D12Resource *pArgumentBuffer,
            _In_ UINT64 ArgumentBufferOffset,
            _In_opt_ ID3D12Resource *pCountBuffer,
            _In_ UINT64 CountBufferOffset);
        END_INTERFACE
    } ID3D12GraphicsCommandListVtbl;
    interface ID3D12GraphicsCommandList
    {
        CONST_VTBL struct ID3D12GraphicsCommandListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> GetType(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Reset(This,pAllocator,pInitialState) )
    ( (This)->lpVtbl -> ClearState(This,pPipelineState) )
    ( (This)->lpVtbl -> DrawInstanced(This,VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation) )
    ( (This)->lpVtbl -> DrawIndexedInstanced(This,IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation) )
    ( (This)->lpVtbl -> Dispatch(This,ThreadGroupCountX,ThreadGroupCountY,ThreadGroupCountZ) )
    ( (This)->lpVtbl -> CopyBufferRegion(This,pDstBuffer,DstOffset,pSrcBuffer,SrcOffset,NumBytes) )
    ( (This)->lpVtbl -> CopyTextureRegion(This,pDst,DstX,DstY,DstZ,pSrc,pSrcBox) )
    ( (This)->lpVtbl -> CopyResource(This,pDstResource,pSrcResource) )
    ( (This)->lpVtbl -> CopyTiles(This,pTiledResource,pTileRegionStartCoordinate,pTileRegionSize,pBuffer,BufferStartOffsetInBytes,Flags) )
    ( (This)->lpVtbl -> ResolveSubresource(This,pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format) )
    ( (This)->lpVtbl -> IASetPrimitiveTopology(This,PrimitiveTopology) )
    ( (This)->lpVtbl -> RSSetViewports(This,NumViewports,pViewports) )
    ( (This)->lpVtbl -> RSSetScissorRects(This,NumRects,pRects) )
    ( (This)->lpVtbl -> OMSetBlendFactor(This,BlendFactor) )
    ( (This)->lpVtbl -> OMSetStencilRef(This,StencilRef) )
    ( (This)->lpVtbl -> SetPipelineState(This,pPipelineState) )
    ( (This)->lpVtbl -> ResourceBarrier(This,NumBarriers,pBarriers) )
    ( (This)->lpVtbl -> ExecuteBundle(This,pCommandList) )
    ( (This)->lpVtbl -> SetDescriptorHeaps(This,NumDescriptorHeaps,ppDescriptorHeaps) )
    ( (This)->lpVtbl -> SetComputeRootSignature(This,pRootSignature) )
    ( (This)->lpVtbl -> SetGraphicsRootSignature(This,pRootSignature) )
    ( (This)->lpVtbl -> SetComputeRootDescriptorTable(This,RootParameterIndex,BaseDescriptor) )
    ( (This)->lpVtbl -> SetGraphicsRootDescriptorTable(This,RootParameterIndex,BaseDescriptor) )
    ( (This)->lpVtbl -> SetComputeRoot32BitConstant(This,RootParameterIndex,SrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetGraphicsRoot32BitConstant(This,RootParameterIndex,SrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetComputeRoot32BitConstants(This,RootParameterIndex,Num32BitValuesToSet,pSrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetGraphicsRoot32BitConstants(This,RootParameterIndex,Num32BitValuesToSet,pSrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetComputeRootConstantBufferView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetGraphicsRootConstantBufferView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetComputeRootShaderResourceView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetGraphicsRootShaderResourceView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetComputeRootUnorderedAccessView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetGraphicsRootUnorderedAccessView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> IASetIndexBuffer(This,pView) )
    ( (This)->lpVtbl -> IASetVertexBuffers(This,StartSlot,NumViews,pViews) )
    ( (This)->lpVtbl -> SOSetTargets(This,StartSlot,NumViews,pViews) )
    ( (This)->lpVtbl -> OMSetRenderTargets(This,NumRenderTargetDescriptors,pRenderTargetDescriptors,RTsSingleHandleToDescriptorRange,pDepthStencilDescriptor) )
    ( (This)->lpVtbl -> ClearDepthStencilView(This,DepthStencilView,ClearFlags,Depth,Stencil,NumRects,pRects) )
    ( (This)->lpVtbl -> ClearRenderTargetView(This,RenderTargetView,ColorRGBA,NumRects,pRects) )
    ( (This)->lpVtbl -> ClearUnorderedAccessViewUint(This,ViewGPUHandleInCurrentHeap,ViewCPUHandle,pResource,Values,NumRects,pRects) )
    ( (This)->lpVtbl -> ClearUnorderedAccessViewFloat(This,ViewGPUHandleInCurrentHeap,ViewCPUHandle,pResource,Values,NumRects,pRects) )
    ( (This)->lpVtbl -> DiscardResource(This,pResource,pRegion) )
    ( (This)->lpVtbl -> BeginQuery(This,pQueryHeap,Type,Index) )
    ( (This)->lpVtbl -> EndQuery(This,pQueryHeap,Type,Index) )
    ( (This)->lpVtbl -> ResolveQueryData(This,pQueryHeap,Type,StartIndex,NumQueries,pDestinationBuffer,AlignedDestinationBufferOffset) )
    ( (This)->lpVtbl -> SetPredication(This,pBuffer,AlignedBufferOffset,Operation) )
    ( (This)->lpVtbl -> SetMarker(This,Metadata,pData,Size) )
    ( (This)->lpVtbl -> BeginEvent(This,Metadata,pData,Size) )
    ( (This)->lpVtbl -> EndEvent(This) )
    ( (This)->lpVtbl -> ExecuteIndirect(This,pCommandSignature,MaxCommandCount,pArgumentBuffer,ArgumentBufferOffset,pCountBuffer,CountBufferOffset) )
EXTERN_C const IID IID_ID3D12GraphicsCommandList1;
    typedef struct ID3D12GraphicsCommandList1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12GraphicsCommandList1 * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12GraphicsCommandList1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12GraphicsCommandList1 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12GraphicsCommandList1 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12GraphicsCommandList1 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12GraphicsCommandList1 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12GraphicsCommandList1 * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12GraphicsCommandList1 * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        D3D12_COMMAND_LIST_TYPE ( STDMETHODCALLTYPE *GetType )(
            ID3D12GraphicsCommandList1 * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            ID3D12GraphicsCommandList1 * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            ID3D12GraphicsCommandList1 * This,
            _In_ ID3D12CommandAllocator *pAllocator,
            _In_opt_ ID3D12PipelineState *pInitialState);
        void ( STDMETHODCALLTYPE *ClearState )(
            ID3D12GraphicsCommandList1 * This,
            _In_opt_ ID3D12PipelineState *pPipelineState);
        void ( STDMETHODCALLTYPE *DrawInstanced )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT VertexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *DrawIndexedInstanced )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT IndexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartIndexLocation,
            _In_ INT BaseVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *Dispatch )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT ThreadGroupCountX,
            _In_ UINT ThreadGroupCountY,
            _In_ UINT ThreadGroupCountZ);
        void ( STDMETHODCALLTYPE *CopyBufferRegion )(
            ID3D12GraphicsCommandList1 * This,
            _In_ ID3D12Resource *pDstBuffer,
            UINT64 DstOffset,
            _In_ ID3D12Resource *pSrcBuffer,
            UINT64 SrcOffset,
            UINT64 NumBytes);
        void ( STDMETHODCALLTYPE *CopyTextureRegion )(
            ID3D12GraphicsCommandList1 * This,
            _In_ const D3D12_TEXTURE_COPY_LOCATION *pDst,
            UINT DstX,
            UINT DstY,
            UINT DstZ,
            _In_ const D3D12_TEXTURE_COPY_LOCATION *pSrc,
            _In_opt_ const D3D12_BOX *pSrcBox);
        void ( STDMETHODCALLTYPE *CopyResource )(
            ID3D12GraphicsCommandList1 * This,
            _In_ ID3D12Resource *pDstResource,
            _In_ ID3D12Resource *pSrcResource);
        void ( STDMETHODCALLTYPE *CopyTiles )(
            ID3D12GraphicsCommandList1 * This,
            _In_ ID3D12Resource *pTiledResource,
            _In_ const D3D12_TILED_RESOURCE_COORDINATE *pTileRegionStartCoordinate,
            _In_ const D3D12_TILE_REGION_SIZE *pTileRegionSize,
            _In_ ID3D12Resource *pBuffer,
            UINT64 BufferStartOffsetInBytes,
            D3D12_TILE_COPY_FLAGS Flags);
        void ( STDMETHODCALLTYPE *ResolveSubresource )(
            ID3D12GraphicsCommandList1 * This,
            _In_ ID3D12Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ ID3D12Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_ DXGI_FORMAT Format);
        void ( STDMETHODCALLTYPE *IASetPrimitiveTopology )(
            ID3D12GraphicsCommandList1 * This,
            _In_ D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology);
        void ( STDMETHODCALLTYPE *RSSetViewports )(
            ID3D12GraphicsCommandList1 * This,
            _In_range_(0, D3D12_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumViewports,
            _In_reads_( NumViewports) const D3D12_VIEWPORT *pViewports);
        void ( STDMETHODCALLTYPE *RSSetScissorRects )(
            ID3D12GraphicsCommandList1 * This,
            _In_range_(0, D3D12_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumRects,
            _In_reads_( NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *OMSetBlendFactor )(
            ID3D12GraphicsCommandList1 * This,
            _In_reads_opt_(4) const FLOAT BlendFactor[ 4 ]);
        void ( STDMETHODCALLTYPE *OMSetStencilRef )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT StencilRef);
        void ( STDMETHODCALLTYPE *SetPipelineState )(
            ID3D12GraphicsCommandList1 * This,
            _In_ ID3D12PipelineState *pPipelineState);
        void ( STDMETHODCALLTYPE *ResourceBarrier )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT NumBarriers,
            _In_reads_(NumBarriers) const D3D12_RESOURCE_BARRIER *pBarriers);
        void ( STDMETHODCALLTYPE *ExecuteBundle )(
            ID3D12GraphicsCommandList1 * This,
            _In_ ID3D12GraphicsCommandList *pCommandList);
        void ( STDMETHODCALLTYPE *SetDescriptorHeaps )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT NumDescriptorHeaps,
            _In_reads_(NumDescriptorHeaps) ID3D12DescriptorHeap *const *ppDescriptorHeaps);
        void ( STDMETHODCALLTYPE *SetComputeRootSignature )(
            ID3D12GraphicsCommandList1 * This,
            _In_opt_ ID3D12RootSignature *pRootSignature);
        void ( STDMETHODCALLTYPE *SetGraphicsRootSignature )(
            ID3D12GraphicsCommandList1 * This,
            _In_opt_ ID3D12RootSignature *pRootSignature);
        void ( STDMETHODCALLTYPE *SetComputeRootDescriptorTable )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
        void ( STDMETHODCALLTYPE *SetGraphicsRootDescriptorTable )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
        void ( STDMETHODCALLTYPE *SetComputeRoot32BitConstant )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT SrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetGraphicsRoot32BitConstant )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT SrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetComputeRoot32BitConstants )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT Num32BitValuesToSet,
            _In_reads_(Num32BitValuesToSet*sizeof(UINT)) const void *pSrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetGraphicsRoot32BitConstants )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT Num32BitValuesToSet,
            _In_reads_(Num32BitValuesToSet*sizeof(UINT)) const void *pSrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetComputeRootConstantBufferView )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetGraphicsRootConstantBufferView )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetComputeRootShaderResourceView )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetGraphicsRootShaderResourceView )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetComputeRootUnorderedAccessView )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetGraphicsRootUnorderedAccessView )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *IASetIndexBuffer )(
            ID3D12GraphicsCommandList1 * This,
            _In_opt_ const D3D12_INDEX_BUFFER_VIEW *pView);
        void ( STDMETHODCALLTYPE *IASetVertexBuffers )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT StartSlot,
            _In_ UINT NumViews,
            _In_reads_opt_(NumViews) const D3D12_VERTEX_BUFFER_VIEW *pViews);
        void ( STDMETHODCALLTYPE *SOSetTargets )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT StartSlot,
            _In_ UINT NumViews,
            _In_reads_opt_(NumViews) const D3D12_STREAM_OUTPUT_BUFFER_VIEW *pViews);
        void ( STDMETHODCALLTYPE *OMSetRenderTargets )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT NumRenderTargetDescriptors,
            _In_opt_ const D3D12_CPU_DESCRIPTOR_HANDLE *pRenderTargetDescriptors,
            _In_ BOOL RTsSingleHandleToDescriptorRange,
            _In_opt_ const D3D12_CPU_DESCRIPTOR_HANDLE *pDepthStencilDescriptor);
        void ( STDMETHODCALLTYPE *ClearDepthStencilView )(
            ID3D12GraphicsCommandList1 * This,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView,
            _In_ D3D12_CLEAR_FLAGS ClearFlags,
            _In_ FLOAT Depth,
            _In_ UINT8 Stencil,
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *ClearRenderTargetView )(
            ID3D12GraphicsCommandList1 * This,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView,
            _In_ const FLOAT ColorRGBA[ 4 ],
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *ClearUnorderedAccessViewUint )(
            ID3D12GraphicsCommandList1 * This,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
            _In_ ID3D12Resource *pResource,
            _In_ const UINT Values[ 4 ],
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *ClearUnorderedAccessViewFloat )(
            ID3D12GraphicsCommandList1 * This,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
            _In_ ID3D12Resource *pResource,
            _In_ const FLOAT Values[ 4 ],
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *DiscardResource )(
            ID3D12GraphicsCommandList1 * This,
            _In_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_DISCARD_REGION *pRegion);
        void ( STDMETHODCALLTYPE *BeginQuery )(
            ID3D12GraphicsCommandList1 * This,
            _In_ ID3D12QueryHeap *pQueryHeap,
            _In_ D3D12_QUERY_TYPE Type,
            _In_ UINT Index);
        void ( STDMETHODCALLTYPE *EndQuery )(
            ID3D12GraphicsCommandList1 * This,
            _In_ ID3D12QueryHeap *pQueryHeap,
            _In_ D3D12_QUERY_TYPE Type,
            _In_ UINT Index);
        void ( STDMETHODCALLTYPE *ResolveQueryData )(
            ID3D12GraphicsCommandList1 * This,
            _In_ ID3D12QueryHeap *pQueryHeap,
            _In_ D3D12_QUERY_TYPE Type,
            _In_ UINT StartIndex,
            _In_ UINT NumQueries,
            _In_ ID3D12Resource *pDestinationBuffer,
            _In_ UINT64 AlignedDestinationBufferOffset);
        void ( STDMETHODCALLTYPE *SetPredication )(
            ID3D12GraphicsCommandList1 * This,
            _In_opt_ ID3D12Resource *pBuffer,
            _In_ UINT64 AlignedBufferOffset,
            _In_ D3D12_PREDICATION_OP Operation);
        void ( STDMETHODCALLTYPE *SetMarker )(
            ID3D12GraphicsCommandList1 * This,
            UINT Metadata,
            _In_reads_bytes_opt_(Size) const void *pData,
            UINT Size);
        void ( STDMETHODCALLTYPE *BeginEvent )(
            ID3D12GraphicsCommandList1 * This,
            UINT Metadata,
            _In_reads_bytes_opt_(Size) const void *pData,
            UINT Size);
        void ( STDMETHODCALLTYPE *EndEvent )(
            ID3D12GraphicsCommandList1 * This);
        void ( STDMETHODCALLTYPE *ExecuteIndirect )(
            ID3D12GraphicsCommandList1 * This,
            _In_ ID3D12CommandSignature *pCommandSignature,
            _In_ UINT MaxCommandCount,
            _In_ ID3D12Resource *pArgumentBuffer,
            _In_ UINT64 ArgumentBufferOffset,
            _In_opt_ ID3D12Resource *pCountBuffer,
            _In_ UINT64 CountBufferOffset);
        void ( STDMETHODCALLTYPE *AtomicCopyBufferUINT )(
            ID3D12GraphicsCommandList1 * This,
            _In_ ID3D12Resource *pDstBuffer,
            UINT64 DstOffset,
            _In_ ID3D12Resource *pSrcBuffer,
            UINT64 SrcOffset,
            UINT Dependencies,
            _In_reads_(Dependencies) ID3D12Resource *const *ppDependentResources,
            _In_reads_(Dependencies) const D3D12_SUBRESOURCE_RANGE_UINT64 *pDependentSubresourceRanges);
        void ( STDMETHODCALLTYPE *AtomicCopyBufferUINT64 )(
            ID3D12GraphicsCommandList1 * This,
            _In_ ID3D12Resource *pDstBuffer,
            UINT64 DstOffset,
            _In_ ID3D12Resource *pSrcBuffer,
            UINT64 SrcOffset,
            UINT Dependencies,
            _In_reads_(Dependencies) ID3D12Resource *const *ppDependentResources,
            _In_reads_(Dependencies) const D3D12_SUBRESOURCE_RANGE_UINT64 *pDependentSubresourceRanges);
        void ( STDMETHODCALLTYPE *OMSetDepthBounds )(
            ID3D12GraphicsCommandList1 * This,
            _In_ FLOAT Min,
            _In_ FLOAT Max);
        void ( STDMETHODCALLTYPE *SetSamplePositions )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT NumSamplesPerPixel,
            _In_ UINT NumPixels,
            _In_reads_(NumSamplesPerPixel*NumPixels) D3D12_SAMPLE_POSITION *pSamplePositions);
        void ( STDMETHODCALLTYPE *ResolveSubresourceRegion )(
            ID3D12GraphicsCommandList1 * This,
            _In_ ID3D12Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ UINT DstX,
            _In_ UINT DstY,
            _In_ ID3D12Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_opt_ D3D12_RECT *pSrcRect,
            _In_ DXGI_FORMAT Format,
            _In_ D3D12_RESOLVE_MODE ResolveMode);
        void ( STDMETHODCALLTYPE *SetViewInstanceMask )(
            ID3D12GraphicsCommandList1 * This,
            _In_ UINT Mask);
        END_INTERFACE
    } ID3D12GraphicsCommandList1Vtbl;
    interface ID3D12GraphicsCommandList1
    {
        CONST_VTBL struct ID3D12GraphicsCommandList1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> GetType(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Reset(This,pAllocator,pInitialState) )
    ( (This)->lpVtbl -> ClearState(This,pPipelineState) )
    ( (This)->lpVtbl -> DrawInstanced(This,VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation) )
    ( (This)->lpVtbl -> DrawIndexedInstanced(This,IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation) )
    ( (This)->lpVtbl -> Dispatch(This,ThreadGroupCountX,ThreadGroupCountY,ThreadGroupCountZ) )
    ( (This)->lpVtbl -> CopyBufferRegion(This,pDstBuffer,DstOffset,pSrcBuffer,SrcOffset,NumBytes) )
    ( (This)->lpVtbl -> CopyTextureRegion(This,pDst,DstX,DstY,DstZ,pSrc,pSrcBox) )
    ( (This)->lpVtbl -> CopyResource(This,pDstResource,pSrcResource) )
    ( (This)->lpVtbl -> CopyTiles(This,pTiledResource,pTileRegionStartCoordinate,pTileRegionSize,pBuffer,BufferStartOffsetInBytes,Flags) )
    ( (This)->lpVtbl -> ResolveSubresource(This,pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format) )
    ( (This)->lpVtbl -> IASetPrimitiveTopology(This,PrimitiveTopology) )
    ( (This)->lpVtbl -> RSSetViewports(This,NumViewports,pViewports) )
    ( (This)->lpVtbl -> RSSetScissorRects(This,NumRects,pRects) )
    ( (This)->lpVtbl -> OMSetBlendFactor(This,BlendFactor) )
    ( (This)->lpVtbl -> OMSetStencilRef(This,StencilRef) )
    ( (This)->lpVtbl -> SetPipelineState(This,pPipelineState) )
    ( (This)->lpVtbl -> ResourceBarrier(This,NumBarriers,pBarriers) )
    ( (This)->lpVtbl -> ExecuteBundle(This,pCommandList) )
    ( (This)->lpVtbl -> SetDescriptorHeaps(This,NumDescriptorHeaps,ppDescriptorHeaps) )
    ( (This)->lpVtbl -> SetComputeRootSignature(This,pRootSignature) )
    ( (This)->lpVtbl -> SetGraphicsRootSignature(This,pRootSignature) )
    ( (This)->lpVtbl -> SetComputeRootDescriptorTable(This,RootParameterIndex,BaseDescriptor) )
    ( (This)->lpVtbl -> SetGraphicsRootDescriptorTable(This,RootParameterIndex,BaseDescriptor) )
    ( (This)->lpVtbl -> SetComputeRoot32BitConstant(This,RootParameterIndex,SrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetGraphicsRoot32BitConstant(This,RootParameterIndex,SrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetComputeRoot32BitConstants(This,RootParameterIndex,Num32BitValuesToSet,pSrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetGraphicsRoot32BitConstants(This,RootParameterIndex,Num32BitValuesToSet,pSrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetComputeRootConstantBufferView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetGraphicsRootConstantBufferView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetComputeRootShaderResourceView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetGraphicsRootShaderResourceView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetComputeRootUnorderedAccessView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetGraphicsRootUnorderedAccessView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> IASetIndexBuffer(This,pView) )
    ( (This)->lpVtbl -> IASetVertexBuffers(This,StartSlot,NumViews,pViews) )
    ( (This)->lpVtbl -> SOSetTargets(This,StartSlot,NumViews,pViews) )
    ( (This)->lpVtbl -> OMSetRenderTargets(This,NumRenderTargetDescriptors,pRenderTargetDescriptors,RTsSingleHandleToDescriptorRange,pDepthStencilDescriptor) )
    ( (This)->lpVtbl -> ClearDepthStencilView(This,DepthStencilView,ClearFlags,Depth,Stencil,NumRects,pRects) )
    ( (This)->lpVtbl -> ClearRenderTargetView(This,RenderTargetView,ColorRGBA,NumRects,pRects) )
    ( (This)->lpVtbl -> ClearUnorderedAccessViewUint(This,ViewGPUHandleInCurrentHeap,ViewCPUHandle,pResource,Values,NumRects,pRects) )
    ( (This)->lpVtbl -> ClearUnorderedAccessViewFloat(This,ViewGPUHandleInCurrentHeap,ViewCPUHandle,pResource,Values,NumRects,pRects) )
    ( (This)->lpVtbl -> DiscardResource(This,pResource,pRegion) )
    ( (This)->lpVtbl -> BeginQuery(This,pQueryHeap,Type,Index) )
    ( (This)->lpVtbl -> EndQuery(This,pQueryHeap,Type,Index) )
    ( (This)->lpVtbl -> ResolveQueryData(This,pQueryHeap,Type,StartIndex,NumQueries,pDestinationBuffer,AlignedDestinationBufferOffset) )
    ( (This)->lpVtbl -> SetPredication(This,pBuffer,AlignedBufferOffset,Operation) )
    ( (This)->lpVtbl -> SetMarker(This,Metadata,pData,Size) )
    ( (This)->lpVtbl -> BeginEvent(This,Metadata,pData,Size) )
    ( (This)->lpVtbl -> EndEvent(This) )
    ( (This)->lpVtbl -> ExecuteIndirect(This,pCommandSignature,MaxCommandCount,pArgumentBuffer,ArgumentBufferOffset,pCountBuffer,CountBufferOffset) )
    ( (This)->lpVtbl -> AtomicCopyBufferUINT(This,pDstBuffer,DstOffset,pSrcBuffer,SrcOffset,Dependencies,ppDependentResources,pDependentSubresourceRanges) )
    ( (This)->lpVtbl -> AtomicCopyBufferUINT64(This,pDstBuffer,DstOffset,pSrcBuffer,SrcOffset,Dependencies,ppDependentResources,pDependentSubresourceRanges) )
    ( (This)->lpVtbl -> OMSetDepthBounds(This,Min,Max) )
    ( (This)->lpVtbl -> SetSamplePositions(This,NumSamplesPerPixel,NumPixels,pSamplePositions) )
    ( (This)->lpVtbl -> ResolveSubresourceRegion(This,pDstResource,DstSubresource,DstX,DstY,pSrcResource,SrcSubresource,pSrcRect,Format,ResolveMode) )
    ( (This)->lpVtbl -> SetViewInstanceMask(This,Mask) )
typedef struct D3D12_WRITEBUFFERIMMEDIATE_PARAMETER
    {
    D3D12_GPU_VIRTUAL_ADDRESS Dest;
    UINT32 Value;
    } D3D12_WRITEBUFFERIMMEDIATE_PARAMETER;
typedef
enum D3D12_WRITEBUFFERIMMEDIATE_MODE
    {
        D3D12_WRITEBUFFERIMMEDIATE_MODE_DEFAULT = 0,
        D3D12_WRITEBUFFERIMMEDIATE_MODE_MARKER_IN = 0x1,
        D3D12_WRITEBUFFERIMMEDIATE_MODE_MARKER_OUT = 0x2
    } D3D12_WRITEBUFFERIMMEDIATE_MODE;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0018_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D12GraphicsCommandList2;
    typedef struct ID3D12GraphicsCommandList2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12GraphicsCommandList2 * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12GraphicsCommandList2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12GraphicsCommandList2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12GraphicsCommandList2 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12GraphicsCommandList2 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12GraphicsCommandList2 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12GraphicsCommandList2 * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12GraphicsCommandList2 * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        D3D12_COMMAND_LIST_TYPE ( STDMETHODCALLTYPE *GetType )(
            ID3D12GraphicsCommandList2 * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            ID3D12GraphicsCommandList2 * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            ID3D12GraphicsCommandList2 * This,
            _In_ ID3D12CommandAllocator *pAllocator,
            _In_opt_ ID3D12PipelineState *pInitialState);
        void ( STDMETHODCALLTYPE *ClearState )(
            ID3D12GraphicsCommandList2 * This,
            _In_opt_ ID3D12PipelineState *pPipelineState);
        void ( STDMETHODCALLTYPE *DrawInstanced )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT VertexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *DrawIndexedInstanced )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT IndexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartIndexLocation,
            _In_ INT BaseVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *Dispatch )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT ThreadGroupCountX,
            _In_ UINT ThreadGroupCountY,
            _In_ UINT ThreadGroupCountZ);
        void ( STDMETHODCALLTYPE *CopyBufferRegion )(
            ID3D12GraphicsCommandList2 * This,
            _In_ ID3D12Resource *pDstBuffer,
            UINT64 DstOffset,
            _In_ ID3D12Resource *pSrcBuffer,
            UINT64 SrcOffset,
            UINT64 NumBytes);
        void ( STDMETHODCALLTYPE *CopyTextureRegion )(
            ID3D12GraphicsCommandList2 * This,
            _In_ const D3D12_TEXTURE_COPY_LOCATION *pDst,
            UINT DstX,
            UINT DstY,
            UINT DstZ,
            _In_ const D3D12_TEXTURE_COPY_LOCATION *pSrc,
            _In_opt_ const D3D12_BOX *pSrcBox);
        void ( STDMETHODCALLTYPE *CopyResource )(
            ID3D12GraphicsCommandList2 * This,
            _In_ ID3D12Resource *pDstResource,
            _In_ ID3D12Resource *pSrcResource);
        void ( STDMETHODCALLTYPE *CopyTiles )(
            ID3D12GraphicsCommandList2 * This,
            _In_ ID3D12Resource *pTiledResource,
            _In_ const D3D12_TILED_RESOURCE_COORDINATE *pTileRegionStartCoordinate,
            _In_ const D3D12_TILE_REGION_SIZE *pTileRegionSize,
            _In_ ID3D12Resource *pBuffer,
            UINT64 BufferStartOffsetInBytes,
            D3D12_TILE_COPY_FLAGS Flags);
        void ( STDMETHODCALLTYPE *ResolveSubresource )(
            ID3D12GraphicsCommandList2 * This,
            _In_ ID3D12Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ ID3D12Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_ DXGI_FORMAT Format);
        void ( STDMETHODCALLTYPE *IASetPrimitiveTopology )(
            ID3D12GraphicsCommandList2 * This,
            _In_ D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology);
        void ( STDMETHODCALLTYPE *RSSetViewports )(
            ID3D12GraphicsCommandList2 * This,
            _In_range_(0, D3D12_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumViewports,
            _In_reads_( NumViewports) const D3D12_VIEWPORT *pViewports);
        void ( STDMETHODCALLTYPE *RSSetScissorRects )(
            ID3D12GraphicsCommandList2 * This,
            _In_range_(0, D3D12_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumRects,
            _In_reads_( NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *OMSetBlendFactor )(
            ID3D12GraphicsCommandList2 * This,
            _In_reads_opt_(4) const FLOAT BlendFactor[ 4 ]);
        void ( STDMETHODCALLTYPE *OMSetStencilRef )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT StencilRef);
        void ( STDMETHODCALLTYPE *SetPipelineState )(
            ID3D12GraphicsCommandList2 * This,
            _In_ ID3D12PipelineState *pPipelineState);
        void ( STDMETHODCALLTYPE *ResourceBarrier )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT NumBarriers,
            _In_reads_(NumBarriers) const D3D12_RESOURCE_BARRIER *pBarriers);
        void ( STDMETHODCALLTYPE *ExecuteBundle )(
            ID3D12GraphicsCommandList2 * This,
            _In_ ID3D12GraphicsCommandList *pCommandList);
        void ( STDMETHODCALLTYPE *SetDescriptorHeaps )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT NumDescriptorHeaps,
            _In_reads_(NumDescriptorHeaps) ID3D12DescriptorHeap *const *ppDescriptorHeaps);
        void ( STDMETHODCALLTYPE *SetComputeRootSignature )(
            ID3D12GraphicsCommandList2 * This,
            _In_opt_ ID3D12RootSignature *pRootSignature);
        void ( STDMETHODCALLTYPE *SetGraphicsRootSignature )(
            ID3D12GraphicsCommandList2 * This,
            _In_opt_ ID3D12RootSignature *pRootSignature);
        void ( STDMETHODCALLTYPE *SetComputeRootDescriptorTable )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
        void ( STDMETHODCALLTYPE *SetGraphicsRootDescriptorTable )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
        void ( STDMETHODCALLTYPE *SetComputeRoot32BitConstant )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT SrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetGraphicsRoot32BitConstant )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT SrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetComputeRoot32BitConstants )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT Num32BitValuesToSet,
            _In_reads_(Num32BitValuesToSet*sizeof(UINT)) const void *pSrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetGraphicsRoot32BitConstants )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT Num32BitValuesToSet,
            _In_reads_(Num32BitValuesToSet*sizeof(UINT)) const void *pSrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetComputeRootConstantBufferView )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetGraphicsRootConstantBufferView )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetComputeRootShaderResourceView )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetGraphicsRootShaderResourceView )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetComputeRootUnorderedAccessView )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetGraphicsRootUnorderedAccessView )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *IASetIndexBuffer )(
            ID3D12GraphicsCommandList2 * This,
            _In_opt_ const D3D12_INDEX_BUFFER_VIEW *pView);
        void ( STDMETHODCALLTYPE *IASetVertexBuffers )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT StartSlot,
            _In_ UINT NumViews,
            _In_reads_opt_(NumViews) const D3D12_VERTEX_BUFFER_VIEW *pViews);
        void ( STDMETHODCALLTYPE *SOSetTargets )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT StartSlot,
            _In_ UINT NumViews,
            _In_reads_opt_(NumViews) const D3D12_STREAM_OUTPUT_BUFFER_VIEW *pViews);
        void ( STDMETHODCALLTYPE *OMSetRenderTargets )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT NumRenderTargetDescriptors,
            _In_opt_ const D3D12_CPU_DESCRIPTOR_HANDLE *pRenderTargetDescriptors,
            _In_ BOOL RTsSingleHandleToDescriptorRange,
            _In_opt_ const D3D12_CPU_DESCRIPTOR_HANDLE *pDepthStencilDescriptor);
        void ( STDMETHODCALLTYPE *ClearDepthStencilView )(
            ID3D12GraphicsCommandList2 * This,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView,
            _In_ D3D12_CLEAR_FLAGS ClearFlags,
            _In_ FLOAT Depth,
            _In_ UINT8 Stencil,
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *ClearRenderTargetView )(
            ID3D12GraphicsCommandList2 * This,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView,
            _In_ const FLOAT ColorRGBA[ 4 ],
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *ClearUnorderedAccessViewUint )(
            ID3D12GraphicsCommandList2 * This,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
            _In_ ID3D12Resource *pResource,
            _In_ const UINT Values[ 4 ],
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *ClearUnorderedAccessViewFloat )(
            ID3D12GraphicsCommandList2 * This,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
            _In_ ID3D12Resource *pResource,
            _In_ const FLOAT Values[ 4 ],
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *DiscardResource )(
            ID3D12GraphicsCommandList2 * This,
            _In_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_DISCARD_REGION *pRegion);
        void ( STDMETHODCALLTYPE *BeginQuery )(
            ID3D12GraphicsCommandList2 * This,
            _In_ ID3D12QueryHeap *pQueryHeap,
            _In_ D3D12_QUERY_TYPE Type,
            _In_ UINT Index);
        void ( STDMETHODCALLTYPE *EndQuery )(
            ID3D12GraphicsCommandList2 * This,
            _In_ ID3D12QueryHeap *pQueryHeap,
            _In_ D3D12_QUERY_TYPE Type,
            _In_ UINT Index);
        void ( STDMETHODCALLTYPE *ResolveQueryData )(
            ID3D12GraphicsCommandList2 * This,
            _In_ ID3D12QueryHeap *pQueryHeap,
            _In_ D3D12_QUERY_TYPE Type,
            _In_ UINT StartIndex,
            _In_ UINT NumQueries,
            _In_ ID3D12Resource *pDestinationBuffer,
            _In_ UINT64 AlignedDestinationBufferOffset);
        void ( STDMETHODCALLTYPE *SetPredication )(
            ID3D12GraphicsCommandList2 * This,
            _In_opt_ ID3D12Resource *pBuffer,
            _In_ UINT64 AlignedBufferOffset,
            _In_ D3D12_PREDICATION_OP Operation);
        void ( STDMETHODCALLTYPE *SetMarker )(
            ID3D12GraphicsCommandList2 * This,
            UINT Metadata,
            _In_reads_bytes_opt_(Size) const void *pData,
            UINT Size);
        void ( STDMETHODCALLTYPE *BeginEvent )(
            ID3D12GraphicsCommandList2 * This,
            UINT Metadata,
            _In_reads_bytes_opt_(Size) const void *pData,
            UINT Size);
        void ( STDMETHODCALLTYPE *EndEvent )(
            ID3D12GraphicsCommandList2 * This);
        void ( STDMETHODCALLTYPE *ExecuteIndirect )(
            ID3D12GraphicsCommandList2 * This,
            _In_ ID3D12CommandSignature *pCommandSignature,
            _In_ UINT MaxCommandCount,
            _In_ ID3D12Resource *pArgumentBuffer,
            _In_ UINT64 ArgumentBufferOffset,
            _In_opt_ ID3D12Resource *pCountBuffer,
            _In_ UINT64 CountBufferOffset);
        void ( STDMETHODCALLTYPE *AtomicCopyBufferUINT )(
            ID3D12GraphicsCommandList2 * This,
            _In_ ID3D12Resource *pDstBuffer,
            UINT64 DstOffset,
            _In_ ID3D12Resource *pSrcBuffer,
            UINT64 SrcOffset,
            UINT Dependencies,
            _In_reads_(Dependencies) ID3D12Resource *const *ppDependentResources,
            _In_reads_(Dependencies) const D3D12_SUBRESOURCE_RANGE_UINT64 *pDependentSubresourceRanges);
        void ( STDMETHODCALLTYPE *AtomicCopyBufferUINT64 )(
            ID3D12GraphicsCommandList2 * This,
            _In_ ID3D12Resource *pDstBuffer,
            UINT64 DstOffset,
            _In_ ID3D12Resource *pSrcBuffer,
            UINT64 SrcOffset,
            UINT Dependencies,
            _In_reads_(Dependencies) ID3D12Resource *const *ppDependentResources,
            _In_reads_(Dependencies) const D3D12_SUBRESOURCE_RANGE_UINT64 *pDependentSubresourceRanges);
        void ( STDMETHODCALLTYPE *OMSetDepthBounds )(
            ID3D12GraphicsCommandList2 * This,
            _In_ FLOAT Min,
            _In_ FLOAT Max);
        void ( STDMETHODCALLTYPE *SetSamplePositions )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT NumSamplesPerPixel,
            _In_ UINT NumPixels,
            _In_reads_(NumSamplesPerPixel*NumPixels) D3D12_SAMPLE_POSITION *pSamplePositions);
        void ( STDMETHODCALLTYPE *ResolveSubresourceRegion )(
            ID3D12GraphicsCommandList2 * This,
            _In_ ID3D12Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ UINT DstX,
            _In_ UINT DstY,
            _In_ ID3D12Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_opt_ D3D12_RECT *pSrcRect,
            _In_ DXGI_FORMAT Format,
            _In_ D3D12_RESOLVE_MODE ResolveMode);
        void ( STDMETHODCALLTYPE *SetViewInstanceMask )(
            ID3D12GraphicsCommandList2 * This,
            _In_ UINT Mask);
        void ( STDMETHODCALLTYPE *WriteBufferImmediate )(
            ID3D12GraphicsCommandList2 * This,
            UINT Count,
            _In_reads_(Count) const D3D12_WRITEBUFFERIMMEDIATE_PARAMETER *pParams,
            _In_reads_opt_(Count) const D3D12_WRITEBUFFERIMMEDIATE_MODE *pModes);
        END_INTERFACE
    } ID3D12GraphicsCommandList2Vtbl;
    interface ID3D12GraphicsCommandList2
    {
        CONST_VTBL struct ID3D12GraphicsCommandList2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> GetType(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Reset(This,pAllocator,pInitialState) )
    ( (This)->lpVtbl -> ClearState(This,pPipelineState) )
    ( (This)->lpVtbl -> DrawInstanced(This,VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation) )
    ( (This)->lpVtbl -> DrawIndexedInstanced(This,IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation) )
    ( (This)->lpVtbl -> Dispatch(This,ThreadGroupCountX,ThreadGroupCountY,ThreadGroupCountZ) )
    ( (This)->lpVtbl -> CopyBufferRegion(This,pDstBuffer,DstOffset,pSrcBuffer,SrcOffset,NumBytes) )
    ( (This)->lpVtbl -> CopyTextureRegion(This,pDst,DstX,DstY,DstZ,pSrc,pSrcBox) )
    ( (This)->lpVtbl -> CopyResource(This,pDstResource,pSrcResource) )
    ( (This)->lpVtbl -> CopyTiles(This,pTiledResource,pTileRegionStartCoordinate,pTileRegionSize,pBuffer,BufferStartOffsetInBytes,Flags) )
    ( (This)->lpVtbl -> ResolveSubresource(This,pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format) )
    ( (This)->lpVtbl -> IASetPrimitiveTopology(This,PrimitiveTopology) )
    ( (This)->lpVtbl -> RSSetViewports(This,NumViewports,pViewports) )
    ( (This)->lpVtbl -> RSSetScissorRects(This,NumRects,pRects) )
    ( (This)->lpVtbl -> OMSetBlendFactor(This,BlendFactor) )
    ( (This)->lpVtbl -> OMSetStencilRef(This,StencilRef) )
    ( (This)->lpVtbl -> SetPipelineState(This,pPipelineState) )
    ( (This)->lpVtbl -> ResourceBarrier(This,NumBarriers,pBarriers) )
    ( (This)->lpVtbl -> ExecuteBundle(This,pCommandList) )
    ( (This)->lpVtbl -> SetDescriptorHeaps(This,NumDescriptorHeaps,ppDescriptorHeaps) )
    ( (This)->lpVtbl -> SetComputeRootSignature(This,pRootSignature) )
    ( (This)->lpVtbl -> SetGraphicsRootSignature(This,pRootSignature) )
    ( (This)->lpVtbl -> SetComputeRootDescriptorTable(This,RootParameterIndex,BaseDescriptor) )
    ( (This)->lpVtbl -> SetGraphicsRootDescriptorTable(This,RootParameterIndex,BaseDescriptor) )
    ( (This)->lpVtbl -> SetComputeRoot32BitConstant(This,RootParameterIndex,SrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetGraphicsRoot32BitConstant(This,RootParameterIndex,SrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetComputeRoot32BitConstants(This,RootParameterIndex,Num32BitValuesToSet,pSrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetGraphicsRoot32BitConstants(This,RootParameterIndex,Num32BitValuesToSet,pSrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetComputeRootConstantBufferView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetGraphicsRootConstantBufferView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetComputeRootShaderResourceView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetGraphicsRootShaderResourceView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetComputeRootUnorderedAccessView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetGraphicsRootUnorderedAccessView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> IASetIndexBuffer(This,pView) )
    ( (This)->lpVtbl -> IASetVertexBuffers(This,StartSlot,NumViews,pViews) )
    ( (This)->lpVtbl -> SOSetTargets(This,StartSlot,NumViews,pViews) )
    ( (This)->lpVtbl -> OMSetRenderTargets(This,NumRenderTargetDescriptors,pRenderTargetDescriptors,RTsSingleHandleToDescriptorRange,pDepthStencilDescriptor) )
    ( (This)->lpVtbl -> ClearDepthStencilView(This,DepthStencilView,ClearFlags,Depth,Stencil,NumRects,pRects) )
    ( (This)->lpVtbl -> ClearRenderTargetView(This,RenderTargetView,ColorRGBA,NumRects,pRects) )
    ( (This)->lpVtbl -> ClearUnorderedAccessViewUint(This,ViewGPUHandleInCurrentHeap,ViewCPUHandle,pResource,Values,NumRects,pRects) )
    ( (This)->lpVtbl -> ClearUnorderedAccessViewFloat(This,ViewGPUHandleInCurrentHeap,ViewCPUHandle,pResource,Values,NumRects,pRects) )
    ( (This)->lpVtbl -> DiscardResource(This,pResource,pRegion) )
    ( (This)->lpVtbl -> BeginQuery(This,pQueryHeap,Type,Index) )
    ( (This)->lpVtbl -> EndQuery(This,pQueryHeap,Type,Index) )
    ( (This)->lpVtbl -> ResolveQueryData(This,pQueryHeap,Type,StartIndex,NumQueries,pDestinationBuffer,AlignedDestinationBufferOffset) )
    ( (This)->lpVtbl -> SetPredication(This,pBuffer,AlignedBufferOffset,Operation) )
    ( (This)->lpVtbl -> SetMarker(This,Metadata,pData,Size) )
    ( (This)->lpVtbl -> BeginEvent(This,Metadata,pData,Size) )
    ( (This)->lpVtbl -> EndEvent(This) )
    ( (This)->lpVtbl -> ExecuteIndirect(This,pCommandSignature,MaxCommandCount,pArgumentBuffer,ArgumentBufferOffset,pCountBuffer,CountBufferOffset) )
    ( (This)->lpVtbl -> AtomicCopyBufferUINT(This,pDstBuffer,DstOffset,pSrcBuffer,SrcOffset,Dependencies,ppDependentResources,pDependentSubresourceRanges) )
    ( (This)->lpVtbl -> AtomicCopyBufferUINT64(This,pDstBuffer,DstOffset,pSrcBuffer,SrcOffset,Dependencies,ppDependentResources,pDependentSubresourceRanges) )
    ( (This)->lpVtbl -> OMSetDepthBounds(This,Min,Max) )
    ( (This)->lpVtbl -> SetSamplePositions(This,NumSamplesPerPixel,NumPixels,pSamplePositions) )
    ( (This)->lpVtbl -> ResolveSubresourceRegion(This,pDstResource,DstSubresource,DstX,DstY,pSrcResource,SrcSubresource,pSrcRect,Format,ResolveMode) )
    ( (This)->lpVtbl -> SetViewInstanceMask(This,Mask) )
    ( (This)->lpVtbl -> WriteBufferImmediate(This,Count,pParams,pModes) )
EXTERN_C const IID IID_ID3D12CommandQueue;
    typedef struct ID3D12CommandQueueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12CommandQueue * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12CommandQueue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12CommandQueue * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12CommandQueue * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12CommandQueue * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12CommandQueue * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12CommandQueue * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12CommandQueue * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        void ( STDMETHODCALLTYPE *UpdateTileMappings )(
            ID3D12CommandQueue * This,
            _In_ ID3D12Resource *pResource,
            UINT NumResourceRegions,
            _In_reads_opt_(NumResourceRegions) const D3D12_TILED_RESOURCE_COORDINATE *pResourceRegionStartCoordinates,
            _In_reads_opt_(NumResourceRegions) const D3D12_TILE_REGION_SIZE *pResourceRegionSizes,
            _In_opt_ ID3D12Heap *pHeap,
            UINT NumRanges,
            _In_reads_opt_(NumRanges) const D3D12_TILE_RANGE_FLAGS *pRangeFlags,
            _In_reads_opt_(NumRanges) const UINT *pHeapRangeStartOffsets,
            _In_reads_opt_(NumRanges) const UINT *pRangeTileCounts,
            D3D12_TILE_MAPPING_FLAGS Flags);
        void ( STDMETHODCALLTYPE *CopyTileMappings )(
            ID3D12CommandQueue * This,
            _In_ ID3D12Resource *pDstResource,
            _In_ const D3D12_TILED_RESOURCE_COORDINATE *pDstRegionStartCoordinate,
            _In_ ID3D12Resource *pSrcResource,
            _In_ const D3D12_TILED_RESOURCE_COORDINATE *pSrcRegionStartCoordinate,
            _In_ const D3D12_TILE_REGION_SIZE *pRegionSize,
            D3D12_TILE_MAPPING_FLAGS Flags);
        void ( STDMETHODCALLTYPE *ExecuteCommandLists )(
            ID3D12CommandQueue * This,
            _In_ UINT NumCommandLists,
            _In_reads_(NumCommandLists) ID3D12CommandList *const *ppCommandLists);
        void ( STDMETHODCALLTYPE *SetMarker )(
            ID3D12CommandQueue * This,
            UINT Metadata,
            _In_reads_bytes_opt_(Size) const void *pData,
            UINT Size);
        void ( STDMETHODCALLTYPE *BeginEvent )(
            ID3D12CommandQueue * This,
            UINT Metadata,
            _In_reads_bytes_opt_(Size) const void *pData,
            UINT Size);
        void ( STDMETHODCALLTYPE *EndEvent )(
            ID3D12CommandQueue * This);
        HRESULT ( STDMETHODCALLTYPE *Signal )(
            ID3D12CommandQueue * This,
            ID3D12Fence *pFence,
            UINT64 Value);
        HRESULT ( STDMETHODCALLTYPE *Wait )(
            ID3D12CommandQueue * This,
            ID3D12Fence *pFence,
            UINT64 Value);
        HRESULT ( STDMETHODCALLTYPE *GetTimestampFrequency )(
            ID3D12CommandQueue * This,
            _Out_ UINT64 *pFrequency);
        HRESULT ( STDMETHODCALLTYPE *GetClockCalibration )(
            ID3D12CommandQueue * This,
            _Out_ UINT64 *pGpuTimestamp,
            _Out_ UINT64 *pCpuTimestamp);
        D3D12_COMMAND_QUEUE_DESC ( STDMETHODCALLTYPE *GetDesc )(
            ID3D12CommandQueue * This);
        END_INTERFACE
    } ID3D12CommandQueueVtbl;
    interface ID3D12CommandQueue
    {
        CONST_VTBL struct ID3D12CommandQueueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> UpdateTileMappings(This,pResource,NumResourceRegions,pResourceRegionStartCoordinates,pResourceRegionSizes,pHeap,NumRanges,pRangeFlags,pHeapRangeStartOffsets,pRangeTileCounts,Flags) )
    ( (This)->lpVtbl -> CopyTileMappings(This,pDstResource,pDstRegionStartCoordinate,pSrcResource,pSrcRegionStartCoordinate,pRegionSize,Flags) )
    ( (This)->lpVtbl -> ExecuteCommandLists(This,NumCommandLists,ppCommandLists) )
    ( (This)->lpVtbl -> SetMarker(This,Metadata,pData,Size) )
    ( (This)->lpVtbl -> BeginEvent(This,Metadata,pData,Size) )
    ( (This)->lpVtbl -> EndEvent(This) )
    ( (This)->lpVtbl -> Signal(This,pFence,Value) )
    ( (This)->lpVtbl -> Wait(This,pFence,Value) )
    ( (This)->lpVtbl -> GetTimestampFrequency(This,pFrequency) )
    ( (This)->lpVtbl -> GetClockCalibration(This,pGpuTimestamp,pCpuTimestamp) )
    ( (This)->lpVtbl -> GetDesc(This) )
typedef struct __LUID
    {
    DWORD LowPart;
    LONG HighPart;
    } LUID;
typedef struct __LUID *PLUID;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0020_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D12Device;
    typedef struct ID3D12DeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12Device * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12Device * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12Device * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12Device * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12Device * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12Device * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12Device * This,
            _In_z_ LPCWSTR Name);
        UINT ( STDMETHODCALLTYPE *GetNodeCount )(
            ID3D12Device * This);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandQueue )(
            ID3D12Device * This,
            _In_ const D3D12_COMMAND_QUEUE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppCommandQueue);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandAllocator )(
            ID3D12Device * This,
            _In_ D3D12_COMMAND_LIST_TYPE type,
            REFIID riid,
            _COM_Outptr_ void **ppCommandAllocator);
        HRESULT ( STDMETHODCALLTYPE *CreateGraphicsPipelineState )(
            ID3D12Device * This,
            _In_ const D3D12_GRAPHICS_PIPELINE_STATE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *CreateComputePipelineState )(
            ID3D12Device * This,
            _In_ const D3D12_COMPUTE_PIPELINE_STATE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandList )(
            ID3D12Device * This,
            _In_ UINT nodeMask,
            _In_ D3D12_COMMAND_LIST_TYPE type,
            _In_ ID3D12CommandAllocator *pCommandAllocator,
            _In_opt_ ID3D12PipelineState *pInitialState,
            REFIID riid,
            _COM_Outptr_ void **ppCommandList);
        HRESULT ( STDMETHODCALLTYPE *CheckFeatureSupport )(
            ID3D12Device * This,
            D3D12_FEATURE Feature,
            _Inout_updates_bytes_(FeatureSupportDataSize) void *pFeatureSupportData,
            UINT FeatureSupportDataSize);
        HRESULT ( STDMETHODCALLTYPE *CreateDescriptorHeap )(
            ID3D12Device * This,
            _In_ const D3D12_DESCRIPTOR_HEAP_DESC *pDescriptorHeapDesc,
            REFIID riid,
            _COM_Outptr_ void **ppvHeap);
        UINT ( STDMETHODCALLTYPE *GetDescriptorHandleIncrementSize )(
            ID3D12Device * This,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType);
        HRESULT ( STDMETHODCALLTYPE *CreateRootSignature )(
            ID3D12Device * This,
            _In_ UINT nodeMask,
            _In_reads_(blobLengthInBytes) const void *pBlobWithRootSignature,
            _In_ SIZE_T blobLengthInBytes,
            REFIID riid,
            _COM_Outptr_ void **ppvRootSignature);
        void ( STDMETHODCALLTYPE *CreateConstantBufferView )(
            ID3D12Device * This,
            _In_opt_ const D3D12_CONSTANT_BUFFER_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateShaderResourceView )(
            ID3D12Device * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_SHADER_RESOURCE_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateUnorderedAccessView )(
            ID3D12Device * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ ID3D12Resource *pCounterResource,
            _In_opt_ const D3D12_UNORDERED_ACCESS_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateRenderTargetView )(
            ID3D12Device * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_RENDER_TARGET_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateDepthStencilView )(
            ID3D12Device * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_DEPTH_STENCIL_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateSampler )(
            ID3D12Device * This,
            _In_ const D3D12_SAMPLER_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CopyDescriptors )(
            ID3D12Device * This,
            _In_ UINT NumDestDescriptorRanges,
            _In_reads_(NumDestDescriptorRanges) const D3D12_CPU_DESCRIPTOR_HANDLE *pDestDescriptorRangeStarts,
            _In_reads_opt_(NumDestDescriptorRanges) const UINT *pDestDescriptorRangeSizes,
            _In_ UINT NumSrcDescriptorRanges,
            _In_reads_(NumSrcDescriptorRanges) const D3D12_CPU_DESCRIPTOR_HANDLE *pSrcDescriptorRangeStarts,
            _In_reads_opt_(NumSrcDescriptorRanges) const UINT *pSrcDescriptorRangeSizes,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
        void ( STDMETHODCALLTYPE *CopyDescriptorsSimple )(
            ID3D12Device * This,
            _In_ UINT NumDescriptors,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
        D3D12_RESOURCE_ALLOCATION_INFO ( STDMETHODCALLTYPE *GetResourceAllocationInfo )(
            ID3D12Device * This,
            _In_ UINT visibleMask,
            _In_ UINT numResourceDescs,
            _In_reads_(numResourceDescs) const D3D12_RESOURCE_DESC *pResourceDescs);
        D3D12_HEAP_PROPERTIES ( STDMETHODCALLTYPE *GetCustomHeapProperties )(
            ID3D12Device * This,
            _In_ UINT nodeMask,
            D3D12_HEAP_TYPE heapType);
        HRESULT ( STDMETHODCALLTYPE *CreateCommittedResource )(
            ID3D12Device * This,
            _In_ const D3D12_HEAP_PROPERTIES *pHeapProperties,
            D3D12_HEAP_FLAGS HeapFlags,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialResourceState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riidResource,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateHeap )(
            ID3D12Device * This,
            _In_ const D3D12_HEAP_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *CreatePlacedResource )(
            ID3D12Device * This,
            _In_ ID3D12Heap *pHeap,
            UINT64 HeapOffset,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateReservedResource )(
            ID3D12Device * This,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateSharedHandle )(
            ID3D12Device * This,
            _In_ ID3D12DeviceChild *pObject,
            _In_opt_ const SECURITY_ATTRIBUTES *pAttributes,
            DWORD Access,
            _In_opt_ LPCWSTR Name,
            _Out_ HANDLE *pHandle);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedHandle )(
            ID3D12Device * This,
            _In_ HANDLE NTHandle,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvObj);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedHandleByName )(
            ID3D12Device * This,
            _In_ LPCWSTR Name,
            DWORD Access,
            _Out_ HANDLE *pNTHandle);
        HRESULT ( STDMETHODCALLTYPE *MakeResident )(
            ID3D12Device * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects);
        HRESULT ( STDMETHODCALLTYPE *Evict )(
            ID3D12Device * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects);
        HRESULT ( STDMETHODCALLTYPE *CreateFence )(
            ID3D12Device * This,
            UINT64 InitialValue,
            D3D12_FENCE_FLAGS Flags,
            REFIID riid,
            _COM_Outptr_ void **ppFence);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceRemovedReason )(
            ID3D12Device * This);
        void ( STDMETHODCALLTYPE *GetCopyableFootprints )(
            ID3D12Device * This,
            _In_ const D3D12_RESOURCE_DESC *pResourceDesc,
            _In_range_(0,D3D12_REQ_SUBRESOURCES) UINT FirstSubresource,
            _In_range_(0,D3D12_REQ_SUBRESOURCES-FirstSubresource) UINT NumSubresources,
            UINT64 BaseOffset,
            _Out_writes_opt_(NumSubresources) D3D12_PLACED_SUBRESOURCE_FOOTPRINT *pLayouts,
            _Out_writes_opt_(NumSubresources) UINT *pNumRows,
            _Out_writes_opt_(NumSubresources) UINT64 *pRowSizeInBytes,
            _Out_opt_ UINT64 *pTotalBytes);
        HRESULT ( STDMETHODCALLTYPE *CreateQueryHeap )(
            ID3D12Device * This,
            _In_ const D3D12_QUERY_HEAP_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *SetStablePowerState )(
            ID3D12Device * This,
            BOOL Enable);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandSignature )(
            ID3D12Device * This,
            _In_ const D3D12_COMMAND_SIGNATURE_DESC *pDesc,
            _In_opt_ ID3D12RootSignature *pRootSignature,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvCommandSignature);
        void ( STDMETHODCALLTYPE *GetResourceTiling )(
            ID3D12Device * This,
            _In_ ID3D12Resource *pTiledResource,
            _Out_opt_ UINT *pNumTilesForEntireResource,
            _Out_opt_ D3D12_PACKED_MIP_INFO *pPackedMipDesc,
            _Out_opt_ D3D12_TILE_SHAPE *pStandardTileShapeForNonPackedMips,
            _Inout_opt_ UINT *pNumSubresourceTilings,
            _In_ UINT FirstSubresourceTilingToGet,
            _Out_writes_(*pNumSubresourceTilings) D3D12_SUBRESOURCE_TILING *pSubresourceTilingsForNonPackedMips);
        LUID ( STDMETHODCALLTYPE *GetAdapterLuid )(
            ID3D12Device * This);
        END_INTERFACE
    } ID3D12DeviceVtbl;
    interface ID3D12Device
    {
        CONST_VTBL struct ID3D12DeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetNodeCount(This) )
    ( (This)->lpVtbl -> CreateCommandQueue(This,pDesc,riid,ppCommandQueue) )
    ( (This)->lpVtbl -> CreateCommandAllocator(This,type,riid,ppCommandAllocator) )
    ( (This)->lpVtbl -> CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> CreateComputePipelineState(This,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) )
    ( (This)->lpVtbl -> CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) )
    ( (This)->lpVtbl -> CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> GetDescriptorHandleIncrementSize(This,DescriptorHeapType) )
    ( (This)->lpVtbl -> CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) )
    ( (This)->lpVtbl -> CreateConstantBufferView(This,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateRenderTargetView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateDepthStencilView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateSampler(This,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) )
    ( (This)->lpVtbl -> CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) )
    ( (This)->lpVtbl -> GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs) )
    ( (This)->lpVtbl -> GetCustomHeapProperties(This,nodeMask,heapType) )
    ( (This)->lpVtbl -> CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) )
    ( (This)->lpVtbl -> CreateHeap(This,pDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) )
    ( (This)->lpVtbl -> CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) )
    ( (This)->lpVtbl -> CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle) )
    ( (This)->lpVtbl -> OpenSharedHandle(This,NTHandle,riid,ppvObj) )
    ( (This)->lpVtbl -> OpenSharedHandleByName(This,Name,Access,pNTHandle) )
    ( (This)->lpVtbl -> MakeResident(This,NumObjects,ppObjects) )
    ( (This)->lpVtbl -> Evict(This,NumObjects,ppObjects) )
    ( (This)->lpVtbl -> CreateFence(This,InitialValue,Flags,riid,ppFence) )
    ( (This)->lpVtbl -> GetDeviceRemovedReason(This) )
    ( (This)->lpVtbl -> GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) )
    ( (This)->lpVtbl -> CreateQueryHeap(This,pDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> SetStablePowerState(This,Enable) )
    ( (This)->lpVtbl -> CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature) )
    ( (This)->lpVtbl -> GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) )
    ( (This)->lpVtbl -> GetAdapterLuid(This) )
EXTERN_C const IID IID_ID3D12PipelineLibrary;
    typedef struct ID3D12PipelineLibraryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12PipelineLibrary * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12PipelineLibrary * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12PipelineLibrary * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12PipelineLibrary * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12PipelineLibrary * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12PipelineLibrary * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12PipelineLibrary * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12PipelineLibrary * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        HRESULT ( STDMETHODCALLTYPE *StorePipeline )(
            ID3D12PipelineLibrary * This,
            _In_opt_ LPCWSTR pName,
            _In_ ID3D12PipelineState *pPipeline);
        HRESULT ( STDMETHODCALLTYPE *LoadGraphicsPipeline )(
            ID3D12PipelineLibrary * This,
            _In_ LPCWSTR pName,
            _In_ const D3D12_GRAPHICS_PIPELINE_STATE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *LoadComputePipeline )(
            ID3D12PipelineLibrary * This,
            _In_ LPCWSTR pName,
            _In_ const D3D12_COMPUTE_PIPELINE_STATE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        SIZE_T ( STDMETHODCALLTYPE *GetSerializedSize )(
            ID3D12PipelineLibrary * This);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            ID3D12PipelineLibrary * This,
            _Out_writes_(DataSizeInBytes) void *pData,
            SIZE_T DataSizeInBytes);
        END_INTERFACE
    } ID3D12PipelineLibraryVtbl;
    interface ID3D12PipelineLibrary
    {
        CONST_VTBL struct ID3D12PipelineLibraryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> StorePipeline(This,pName,pPipeline) )
    ( (This)->lpVtbl -> LoadGraphicsPipeline(This,pName,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> LoadComputePipeline(This,pName,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> GetSerializedSize(This) )
    ( (This)->lpVtbl -> Serialize(This,pData,DataSizeInBytes) )
EXTERN_C const IID IID_ID3D12PipelineLibrary1;
    typedef struct ID3D12PipelineLibrary1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12PipelineLibrary1 * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12PipelineLibrary1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12PipelineLibrary1 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12PipelineLibrary1 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12PipelineLibrary1 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12PipelineLibrary1 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12PipelineLibrary1 * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12PipelineLibrary1 * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        HRESULT ( STDMETHODCALLTYPE *StorePipeline )(
            ID3D12PipelineLibrary1 * This,
            _In_opt_ LPCWSTR pName,
            _In_ ID3D12PipelineState *pPipeline);
        HRESULT ( STDMETHODCALLTYPE *LoadGraphicsPipeline )(
            ID3D12PipelineLibrary1 * This,
            _In_ LPCWSTR pName,
            _In_ const D3D12_GRAPHICS_PIPELINE_STATE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *LoadComputePipeline )(
            ID3D12PipelineLibrary1 * This,
            _In_ LPCWSTR pName,
            _In_ const D3D12_COMPUTE_PIPELINE_STATE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        SIZE_T ( STDMETHODCALLTYPE *GetSerializedSize )(
            ID3D12PipelineLibrary1 * This);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            ID3D12PipelineLibrary1 * This,
            _Out_writes_(DataSizeInBytes) void *pData,
            SIZE_T DataSizeInBytes);
        HRESULT ( STDMETHODCALLTYPE *LoadPipeline )(
            ID3D12PipelineLibrary1 * This,
            _In_ LPCWSTR pName,
            _In_ const D3D12_PIPELINE_STATE_STREAM_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        END_INTERFACE
    } ID3D12PipelineLibrary1Vtbl;
    interface ID3D12PipelineLibrary1
    {
        CONST_VTBL struct ID3D12PipelineLibrary1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> StorePipeline(This,pName,pPipeline) )
    ( (This)->lpVtbl -> LoadGraphicsPipeline(This,pName,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> LoadComputePipeline(This,pName,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> GetSerializedSize(This) )
    ( (This)->lpVtbl -> Serialize(This,pData,DataSizeInBytes) )
    ( (This)->lpVtbl -> LoadPipeline(This,pName,pDesc,riid,ppPipelineState) )
typedef
enum D3D12_MULTIPLE_FENCE_WAIT_FLAGS
    {
        D3D12_MULTIPLE_FENCE_WAIT_FLAG_NONE = 0,
        D3D12_MULTIPLE_FENCE_WAIT_FLAG_ANY = 0x1,
        D3D12_MULTIPLE_FENCE_WAIT_FLAG_ALL = 0
    } D3D12_MULTIPLE_FENCE_WAIT_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_MULTIPLE_FENCE_WAIT_FLAGS );
typedef
enum D3D12_RESIDENCY_PRIORITY
    {
        D3D12_RESIDENCY_PRIORITY_MINIMUM = 0x28000000,
        D3D12_RESIDENCY_PRIORITY_LOW = 0x50000000,
        D3D12_RESIDENCY_PRIORITY_NORMAL = 0x78000000,
        D3D12_RESIDENCY_PRIORITY_HIGH = 0xa0010000,
        D3D12_RESIDENCY_PRIORITY_MAXIMUM = 0xc8000000
    } D3D12_RESIDENCY_PRIORITY;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0023_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D12Device1;
    typedef struct ID3D12Device1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12Device1 * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12Device1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12Device1 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12Device1 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12Device1 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12Device1 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12Device1 * This,
            _In_z_ LPCWSTR Name);
        UINT ( STDMETHODCALLTYPE *GetNodeCount )(
            ID3D12Device1 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandQueue )(
            ID3D12Device1 * This,
            _In_ const D3D12_COMMAND_QUEUE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppCommandQueue);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandAllocator )(
            ID3D12Device1 * This,
            _In_ D3D12_COMMAND_LIST_TYPE type,
            REFIID riid,
            _COM_Outptr_ void **ppCommandAllocator);
        HRESULT ( STDMETHODCALLTYPE *CreateGraphicsPipelineState )(
            ID3D12Device1 * This,
            _In_ const D3D12_GRAPHICS_PIPELINE_STATE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *CreateComputePipelineState )(
            ID3D12Device1 * This,
            _In_ const D3D12_COMPUTE_PIPELINE_STATE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandList )(
            ID3D12Device1 * This,
            _In_ UINT nodeMask,
            _In_ D3D12_COMMAND_LIST_TYPE type,
            _In_ ID3D12CommandAllocator *pCommandAllocator,
            _In_opt_ ID3D12PipelineState *pInitialState,
            REFIID riid,
            _COM_Outptr_ void **ppCommandList);
        HRESULT ( STDMETHODCALLTYPE *CheckFeatureSupport )(
            ID3D12Device1 * This,
            D3D12_FEATURE Feature,
            _Inout_updates_bytes_(FeatureSupportDataSize) void *pFeatureSupportData,
            UINT FeatureSupportDataSize);
        HRESULT ( STDMETHODCALLTYPE *CreateDescriptorHeap )(
            ID3D12Device1 * This,
            _In_ const D3D12_DESCRIPTOR_HEAP_DESC *pDescriptorHeapDesc,
            REFIID riid,
            _COM_Outptr_ void **ppvHeap);
        UINT ( STDMETHODCALLTYPE *GetDescriptorHandleIncrementSize )(
            ID3D12Device1 * This,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType);
        HRESULT ( STDMETHODCALLTYPE *CreateRootSignature )(
            ID3D12Device1 * This,
            _In_ UINT nodeMask,
            _In_reads_(blobLengthInBytes) const void *pBlobWithRootSignature,
            _In_ SIZE_T blobLengthInBytes,
            REFIID riid,
            _COM_Outptr_ void **ppvRootSignature);
        void ( STDMETHODCALLTYPE *CreateConstantBufferView )(
            ID3D12Device1 * This,
            _In_opt_ const D3D12_CONSTANT_BUFFER_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateShaderResourceView )(
            ID3D12Device1 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_SHADER_RESOURCE_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateUnorderedAccessView )(
            ID3D12Device1 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ ID3D12Resource *pCounterResource,
            _In_opt_ const D3D12_UNORDERED_ACCESS_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateRenderTargetView )(
            ID3D12Device1 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_RENDER_TARGET_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateDepthStencilView )(
            ID3D12Device1 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_DEPTH_STENCIL_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateSampler )(
            ID3D12Device1 * This,
            _In_ const D3D12_SAMPLER_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CopyDescriptors )(
            ID3D12Device1 * This,
            _In_ UINT NumDestDescriptorRanges,
            _In_reads_(NumDestDescriptorRanges) const D3D12_CPU_DESCRIPTOR_HANDLE *pDestDescriptorRangeStarts,
            _In_reads_opt_(NumDestDescriptorRanges) const UINT *pDestDescriptorRangeSizes,
            _In_ UINT NumSrcDescriptorRanges,
            _In_reads_(NumSrcDescriptorRanges) const D3D12_CPU_DESCRIPTOR_HANDLE *pSrcDescriptorRangeStarts,
            _In_reads_opt_(NumSrcDescriptorRanges) const UINT *pSrcDescriptorRangeSizes,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
        void ( STDMETHODCALLTYPE *CopyDescriptorsSimple )(
            ID3D12Device1 * This,
            _In_ UINT NumDescriptors,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
        D3D12_RESOURCE_ALLOCATION_INFO ( STDMETHODCALLTYPE *GetResourceAllocationInfo )(
            ID3D12Device1 * This,
            _In_ UINT visibleMask,
            _In_ UINT numResourceDescs,
            _In_reads_(numResourceDescs) const D3D12_RESOURCE_DESC *pResourceDescs);
        D3D12_HEAP_PROPERTIES ( STDMETHODCALLTYPE *GetCustomHeapProperties )(
            ID3D12Device1 * This,
            _In_ UINT nodeMask,
            D3D12_HEAP_TYPE heapType);
        HRESULT ( STDMETHODCALLTYPE *CreateCommittedResource )(
            ID3D12Device1 * This,
            _In_ const D3D12_HEAP_PROPERTIES *pHeapProperties,
            D3D12_HEAP_FLAGS HeapFlags,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialResourceState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riidResource,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateHeap )(
            ID3D12Device1 * This,
            _In_ const D3D12_HEAP_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *CreatePlacedResource )(
            ID3D12Device1 * This,
            _In_ ID3D12Heap *pHeap,
            UINT64 HeapOffset,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateReservedResource )(
            ID3D12Device1 * This,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateSharedHandle )(
            ID3D12Device1 * This,
            _In_ ID3D12DeviceChild *pObject,
            _In_opt_ const SECURITY_ATTRIBUTES *pAttributes,
            DWORD Access,
            _In_opt_ LPCWSTR Name,
            _Out_ HANDLE *pHandle);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedHandle )(
            ID3D12Device1 * This,
            _In_ HANDLE NTHandle,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvObj);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedHandleByName )(
            ID3D12Device1 * This,
            _In_ LPCWSTR Name,
            DWORD Access,
            _Out_ HANDLE *pNTHandle);
        HRESULT ( STDMETHODCALLTYPE *MakeResident )(
            ID3D12Device1 * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects);
        HRESULT ( STDMETHODCALLTYPE *Evict )(
            ID3D12Device1 * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects);
        HRESULT ( STDMETHODCALLTYPE *CreateFence )(
            ID3D12Device1 * This,
            UINT64 InitialValue,
            D3D12_FENCE_FLAGS Flags,
            REFIID riid,
            _COM_Outptr_ void **ppFence);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceRemovedReason )(
            ID3D12Device1 * This);
        void ( STDMETHODCALLTYPE *GetCopyableFootprints )(
            ID3D12Device1 * This,
            _In_ const D3D12_RESOURCE_DESC *pResourceDesc,
            _In_range_(0,D3D12_REQ_SUBRESOURCES) UINT FirstSubresource,
            _In_range_(0,D3D12_REQ_SUBRESOURCES-FirstSubresource) UINT NumSubresources,
            UINT64 BaseOffset,
            _Out_writes_opt_(NumSubresources) D3D12_PLACED_SUBRESOURCE_FOOTPRINT *pLayouts,
            _Out_writes_opt_(NumSubresources) UINT *pNumRows,
            _Out_writes_opt_(NumSubresources) UINT64 *pRowSizeInBytes,
            _Out_opt_ UINT64 *pTotalBytes);
        HRESULT ( STDMETHODCALLTYPE *CreateQueryHeap )(
            ID3D12Device1 * This,
            _In_ const D3D12_QUERY_HEAP_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *SetStablePowerState )(
            ID3D12Device1 * This,
            BOOL Enable);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandSignature )(
            ID3D12Device1 * This,
            _In_ const D3D12_COMMAND_SIGNATURE_DESC *pDesc,
            _In_opt_ ID3D12RootSignature *pRootSignature,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvCommandSignature);
        void ( STDMETHODCALLTYPE *GetResourceTiling )(
            ID3D12Device1 * This,
            _In_ ID3D12Resource *pTiledResource,
            _Out_opt_ UINT *pNumTilesForEntireResource,
            _Out_opt_ D3D12_PACKED_MIP_INFO *pPackedMipDesc,
            _Out_opt_ D3D12_TILE_SHAPE *pStandardTileShapeForNonPackedMips,
            _Inout_opt_ UINT *pNumSubresourceTilings,
            _In_ UINT FirstSubresourceTilingToGet,
            _Out_writes_(*pNumSubresourceTilings) D3D12_SUBRESOURCE_TILING *pSubresourceTilingsForNonPackedMips);
        LUID ( STDMETHODCALLTYPE *GetAdapterLuid )(
            ID3D12Device1 * This);
        HRESULT ( STDMETHODCALLTYPE *CreatePipelineLibrary )(
            ID3D12Device1 * This,
            _In_reads_(BlobLength) const void *pLibraryBlob,
            SIZE_T BlobLength,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineLibrary);
        HRESULT ( STDMETHODCALLTYPE *SetEventOnMultipleFenceCompletion )(
            ID3D12Device1 * This,
            _In_reads_(NumFences) ID3D12Fence *const *ppFences,
            _In_reads_(NumFences) const UINT64 *pFenceValues,
            UINT NumFences,
            D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags,
            HANDLE hEvent);
        HRESULT ( STDMETHODCALLTYPE *SetResidencyPriority )(
            ID3D12Device1 * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects,
            _In_reads_(NumObjects) const D3D12_RESIDENCY_PRIORITY *pPriorities);
        END_INTERFACE
    } ID3D12Device1Vtbl;
    interface ID3D12Device1
    {
        CONST_VTBL struct ID3D12Device1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetNodeCount(This) )
    ( (This)->lpVtbl -> CreateCommandQueue(This,pDesc,riid,ppCommandQueue) )
    ( (This)->lpVtbl -> CreateCommandAllocator(This,type,riid,ppCommandAllocator) )
    ( (This)->lpVtbl -> CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> CreateComputePipelineState(This,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) )
    ( (This)->lpVtbl -> CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) )
    ( (This)->lpVtbl -> CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> GetDescriptorHandleIncrementSize(This,DescriptorHeapType) )
    ( (This)->lpVtbl -> CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) )
    ( (This)->lpVtbl -> CreateConstantBufferView(This,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateRenderTargetView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateDepthStencilView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateSampler(This,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) )
    ( (This)->lpVtbl -> CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) )
    ( (This)->lpVtbl -> GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs) )
    ( (This)->lpVtbl -> GetCustomHeapProperties(This,nodeMask,heapType) )
    ( (This)->lpVtbl -> CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) )
    ( (This)->lpVtbl -> CreateHeap(This,pDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) )
    ( (This)->lpVtbl -> CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) )
    ( (This)->lpVtbl -> CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle) )
    ( (This)->lpVtbl -> OpenSharedHandle(This,NTHandle,riid,ppvObj) )
    ( (This)->lpVtbl -> OpenSharedHandleByName(This,Name,Access,pNTHandle) )
    ( (This)->lpVtbl -> MakeResident(This,NumObjects,ppObjects) )
    ( (This)->lpVtbl -> Evict(This,NumObjects,ppObjects) )
    ( (This)->lpVtbl -> CreateFence(This,InitialValue,Flags,riid,ppFence) )
    ( (This)->lpVtbl -> GetDeviceRemovedReason(This) )
    ( (This)->lpVtbl -> GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) )
    ( (This)->lpVtbl -> CreateQueryHeap(This,pDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> SetStablePowerState(This,Enable) )
    ( (This)->lpVtbl -> CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature) )
    ( (This)->lpVtbl -> GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) )
    ( (This)->lpVtbl -> GetAdapterLuid(This) )
    ( (This)->lpVtbl -> CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary) )
    ( (This)->lpVtbl -> SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent) )
    ( (This)->lpVtbl -> SetResidencyPriority(This,NumObjects,ppObjects,pPriorities) )
EXTERN_C const IID IID_ID3D12Device2;
    typedef struct ID3D12Device2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12Device2 * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12Device2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12Device2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12Device2 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12Device2 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12Device2 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12Device2 * This,
            _In_z_ LPCWSTR Name);
        UINT ( STDMETHODCALLTYPE *GetNodeCount )(
            ID3D12Device2 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandQueue )(
            ID3D12Device2 * This,
            _In_ const D3D12_COMMAND_QUEUE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppCommandQueue);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandAllocator )(
            ID3D12Device2 * This,
            _In_ D3D12_COMMAND_LIST_TYPE type,
            REFIID riid,
            _COM_Outptr_ void **ppCommandAllocator);
        HRESULT ( STDMETHODCALLTYPE *CreateGraphicsPipelineState )(
            ID3D12Device2 * This,
            _In_ const D3D12_GRAPHICS_PIPELINE_STATE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *CreateComputePipelineState )(
            ID3D12Device2 * This,
            _In_ const D3D12_COMPUTE_PIPELINE_STATE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandList )(
            ID3D12Device2 * This,
            _In_ UINT nodeMask,
            _In_ D3D12_COMMAND_LIST_TYPE type,
            _In_ ID3D12CommandAllocator *pCommandAllocator,
            _In_opt_ ID3D12PipelineState *pInitialState,
            REFIID riid,
            _COM_Outptr_ void **ppCommandList);
        HRESULT ( STDMETHODCALLTYPE *CheckFeatureSupport )(
            ID3D12Device2 * This,
            D3D12_FEATURE Feature,
            _Inout_updates_bytes_(FeatureSupportDataSize) void *pFeatureSupportData,
            UINT FeatureSupportDataSize);
        HRESULT ( STDMETHODCALLTYPE *CreateDescriptorHeap )(
            ID3D12Device2 * This,
            _In_ const D3D12_DESCRIPTOR_HEAP_DESC *pDescriptorHeapDesc,
            REFIID riid,
            _COM_Outptr_ void **ppvHeap);
        UINT ( STDMETHODCALLTYPE *GetDescriptorHandleIncrementSize )(
            ID3D12Device2 * This,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType);
        HRESULT ( STDMETHODCALLTYPE *CreateRootSignature )(
            ID3D12Device2 * This,
            _In_ UINT nodeMask,
            _In_reads_(blobLengthInBytes) const void *pBlobWithRootSignature,
            _In_ SIZE_T blobLengthInBytes,
            REFIID riid,
            _COM_Outptr_ void **ppvRootSignature);
        void ( STDMETHODCALLTYPE *CreateConstantBufferView )(
            ID3D12Device2 * This,
            _In_opt_ const D3D12_CONSTANT_BUFFER_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateShaderResourceView )(
            ID3D12Device2 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_SHADER_RESOURCE_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateUnorderedAccessView )(
            ID3D12Device2 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ ID3D12Resource *pCounterResource,
            _In_opt_ const D3D12_UNORDERED_ACCESS_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateRenderTargetView )(
            ID3D12Device2 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_RENDER_TARGET_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateDepthStencilView )(
            ID3D12Device2 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_DEPTH_STENCIL_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateSampler )(
            ID3D12Device2 * This,
            _In_ const D3D12_SAMPLER_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CopyDescriptors )(
            ID3D12Device2 * This,
            _In_ UINT NumDestDescriptorRanges,
            _In_reads_(NumDestDescriptorRanges) const D3D12_CPU_DESCRIPTOR_HANDLE *pDestDescriptorRangeStarts,
            _In_reads_opt_(NumDestDescriptorRanges) const UINT *pDestDescriptorRangeSizes,
            _In_ UINT NumSrcDescriptorRanges,
            _In_reads_(NumSrcDescriptorRanges) const D3D12_CPU_DESCRIPTOR_HANDLE *pSrcDescriptorRangeStarts,
            _In_reads_opt_(NumSrcDescriptorRanges) const UINT *pSrcDescriptorRangeSizes,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
        void ( STDMETHODCALLTYPE *CopyDescriptorsSimple )(
            ID3D12Device2 * This,
            _In_ UINT NumDescriptors,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
        D3D12_RESOURCE_ALLOCATION_INFO ( STDMETHODCALLTYPE *GetResourceAllocationInfo )(
            ID3D12Device2 * This,
            _In_ UINT visibleMask,
            _In_ UINT numResourceDescs,
            _In_reads_(numResourceDescs) const D3D12_RESOURCE_DESC *pResourceDescs);
        D3D12_HEAP_PROPERTIES ( STDMETHODCALLTYPE *GetCustomHeapProperties )(
            ID3D12Device2 * This,
            _In_ UINT nodeMask,
            D3D12_HEAP_TYPE heapType);
        HRESULT ( STDMETHODCALLTYPE *CreateCommittedResource )(
            ID3D12Device2 * This,
            _In_ const D3D12_HEAP_PROPERTIES *pHeapProperties,
            D3D12_HEAP_FLAGS HeapFlags,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialResourceState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riidResource,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateHeap )(
            ID3D12Device2 * This,
            _In_ const D3D12_HEAP_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *CreatePlacedResource )(
            ID3D12Device2 * This,
            _In_ ID3D12Heap *pHeap,
            UINT64 HeapOffset,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateReservedResource )(
            ID3D12Device2 * This,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateSharedHandle )(
            ID3D12Device2 * This,
            _In_ ID3D12DeviceChild *pObject,
            _In_opt_ const SECURITY_ATTRIBUTES *pAttributes,
            DWORD Access,
            _In_opt_ LPCWSTR Name,
            _Out_ HANDLE *pHandle);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedHandle )(
            ID3D12Device2 * This,
            _In_ HANDLE NTHandle,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvObj);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedHandleByName )(
            ID3D12Device2 * This,
            _In_ LPCWSTR Name,
            DWORD Access,
            _Out_ HANDLE *pNTHandle);
        HRESULT ( STDMETHODCALLTYPE *MakeResident )(
            ID3D12Device2 * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects);
        HRESULT ( STDMETHODCALLTYPE *Evict )(
            ID3D12Device2 * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects);
        HRESULT ( STDMETHODCALLTYPE *CreateFence )(
            ID3D12Device2 * This,
            UINT64 InitialValue,
            D3D12_FENCE_FLAGS Flags,
            REFIID riid,
            _COM_Outptr_ void **ppFence);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceRemovedReason )(
            ID3D12Device2 * This);
        void ( STDMETHODCALLTYPE *GetCopyableFootprints )(
            ID3D12Device2 * This,
            _In_ const D3D12_RESOURCE_DESC *pResourceDesc,
            _In_range_(0,D3D12_REQ_SUBRESOURCES) UINT FirstSubresource,
            _In_range_(0,D3D12_REQ_SUBRESOURCES-FirstSubresource) UINT NumSubresources,
            UINT64 BaseOffset,
            _Out_writes_opt_(NumSubresources) D3D12_PLACED_SUBRESOURCE_FOOTPRINT *pLayouts,
            _Out_writes_opt_(NumSubresources) UINT *pNumRows,
            _Out_writes_opt_(NumSubresources) UINT64 *pRowSizeInBytes,
            _Out_opt_ UINT64 *pTotalBytes);
        HRESULT ( STDMETHODCALLTYPE *CreateQueryHeap )(
            ID3D12Device2 * This,
            _In_ const D3D12_QUERY_HEAP_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *SetStablePowerState )(
            ID3D12Device2 * This,
            BOOL Enable);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandSignature )(
            ID3D12Device2 * This,
            _In_ const D3D12_COMMAND_SIGNATURE_DESC *pDesc,
            _In_opt_ ID3D12RootSignature *pRootSignature,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvCommandSignature);
        void ( STDMETHODCALLTYPE *GetResourceTiling )(
            ID3D12Device2 * This,
            _In_ ID3D12Resource *pTiledResource,
            _Out_opt_ UINT *pNumTilesForEntireResource,
            _Out_opt_ D3D12_PACKED_MIP_INFO *pPackedMipDesc,
            _Out_opt_ D3D12_TILE_SHAPE *pStandardTileShapeForNonPackedMips,
            _Inout_opt_ UINT *pNumSubresourceTilings,
            _In_ UINT FirstSubresourceTilingToGet,
            _Out_writes_(*pNumSubresourceTilings) D3D12_SUBRESOURCE_TILING *pSubresourceTilingsForNonPackedMips);
        LUID ( STDMETHODCALLTYPE *GetAdapterLuid )(
            ID3D12Device2 * This);
        HRESULT ( STDMETHODCALLTYPE *CreatePipelineLibrary )(
            ID3D12Device2 * This,
            _In_reads_(BlobLength) const void *pLibraryBlob,
            SIZE_T BlobLength,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineLibrary);
        HRESULT ( STDMETHODCALLTYPE *SetEventOnMultipleFenceCompletion )(
            ID3D12Device2 * This,
            _In_reads_(NumFences) ID3D12Fence *const *ppFences,
            _In_reads_(NumFences) const UINT64 *pFenceValues,
            UINT NumFences,
            D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags,
            HANDLE hEvent);
        HRESULT ( STDMETHODCALLTYPE *SetResidencyPriority )(
            ID3D12Device2 * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects,
            _In_reads_(NumObjects) const D3D12_RESIDENCY_PRIORITY *pPriorities);
        HRESULT ( STDMETHODCALLTYPE *CreatePipelineState )(
            ID3D12Device2 * This,
            const D3D12_PIPELINE_STATE_STREAM_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        END_INTERFACE
    } ID3D12Device2Vtbl;
    interface ID3D12Device2
    {
        CONST_VTBL struct ID3D12Device2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetNodeCount(This) )
    ( (This)->lpVtbl -> CreateCommandQueue(This,pDesc,riid,ppCommandQueue) )
    ( (This)->lpVtbl -> CreateCommandAllocator(This,type,riid,ppCommandAllocator) )
    ( (This)->lpVtbl -> CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> CreateComputePipelineState(This,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) )
    ( (This)->lpVtbl -> CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) )
    ( (This)->lpVtbl -> CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> GetDescriptorHandleIncrementSize(This,DescriptorHeapType) )
    ( (This)->lpVtbl -> CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) )
    ( (This)->lpVtbl -> CreateConstantBufferView(This,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateRenderTargetView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateDepthStencilView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateSampler(This,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) )
    ( (This)->lpVtbl -> CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) )
    ( (This)->lpVtbl -> GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs) )
    ( (This)->lpVtbl -> GetCustomHeapProperties(This,nodeMask,heapType) )
    ( (This)->lpVtbl -> CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) )
    ( (This)->lpVtbl -> CreateHeap(This,pDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) )
    ( (This)->lpVtbl -> CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) )
    ( (This)->lpVtbl -> CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle) )
    ( (This)->lpVtbl -> OpenSharedHandle(This,NTHandle,riid,ppvObj) )
    ( (This)->lpVtbl -> OpenSharedHandleByName(This,Name,Access,pNTHandle) )
    ( (This)->lpVtbl -> MakeResident(This,NumObjects,ppObjects) )
    ( (This)->lpVtbl -> Evict(This,NumObjects,ppObjects) )
    ( (This)->lpVtbl -> CreateFence(This,InitialValue,Flags,riid,ppFence) )
    ( (This)->lpVtbl -> GetDeviceRemovedReason(This) )
    ( (This)->lpVtbl -> GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) )
    ( (This)->lpVtbl -> CreateQueryHeap(This,pDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> SetStablePowerState(This,Enable) )
    ( (This)->lpVtbl -> CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature) )
    ( (This)->lpVtbl -> GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) )
    ( (This)->lpVtbl -> GetAdapterLuid(This) )
    ( (This)->lpVtbl -> CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary) )
    ( (This)->lpVtbl -> SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent) )
    ( (This)->lpVtbl -> SetResidencyPriority(This,NumObjects,ppObjects,pPriorities) )
    ( (This)->lpVtbl -> CreatePipelineState(This,pDesc,riid,ppPipelineState) )
typedef
enum D3D12_RESIDENCY_FLAGS
    {
        D3D12_RESIDENCY_FLAG_NONE = 0,
        D3D12_RESIDENCY_FLAG_DENY_OVERBUDGET = 0x1
    } D3D12_RESIDENCY_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_RESIDENCY_FLAGS );
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0025_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D12Device3;
    typedef struct ID3D12Device3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12Device3 * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12Device3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12Device3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12Device3 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12Device3 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12Device3 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12Device3 * This,
            _In_z_ LPCWSTR Name);
        UINT ( STDMETHODCALLTYPE *GetNodeCount )(
            ID3D12Device3 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandQueue )(
            ID3D12Device3 * This,
            _In_ const D3D12_COMMAND_QUEUE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppCommandQueue);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandAllocator )(
            ID3D12Device3 * This,
            _In_ D3D12_COMMAND_LIST_TYPE type,
            REFIID riid,
            _COM_Outptr_ void **ppCommandAllocator);
        HRESULT ( STDMETHODCALLTYPE *CreateGraphicsPipelineState )(
            ID3D12Device3 * This,
            _In_ const D3D12_GRAPHICS_PIPELINE_STATE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *CreateComputePipelineState )(
            ID3D12Device3 * This,
            _In_ const D3D12_COMPUTE_PIPELINE_STATE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandList )(
            ID3D12Device3 * This,
            _In_ UINT nodeMask,
            _In_ D3D12_COMMAND_LIST_TYPE type,
            _In_ ID3D12CommandAllocator *pCommandAllocator,
            _In_opt_ ID3D12PipelineState *pInitialState,
            REFIID riid,
            _COM_Outptr_ void **ppCommandList);
        HRESULT ( STDMETHODCALLTYPE *CheckFeatureSupport )(
            ID3D12Device3 * This,
            D3D12_FEATURE Feature,
            _Inout_updates_bytes_(FeatureSupportDataSize) void *pFeatureSupportData,
            UINT FeatureSupportDataSize);
        HRESULT ( STDMETHODCALLTYPE *CreateDescriptorHeap )(
            ID3D12Device3 * This,
            _In_ const D3D12_DESCRIPTOR_HEAP_DESC *pDescriptorHeapDesc,
            REFIID riid,
            _COM_Outptr_ void **ppvHeap);
        UINT ( STDMETHODCALLTYPE *GetDescriptorHandleIncrementSize )(
            ID3D12Device3 * This,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType);
        HRESULT ( STDMETHODCALLTYPE *CreateRootSignature )(
            ID3D12Device3 * This,
            _In_ UINT nodeMask,
            _In_reads_(blobLengthInBytes) const void *pBlobWithRootSignature,
            _In_ SIZE_T blobLengthInBytes,
            REFIID riid,
            _COM_Outptr_ void **ppvRootSignature);
        void ( STDMETHODCALLTYPE *CreateConstantBufferView )(
            ID3D12Device3 * This,
            _In_opt_ const D3D12_CONSTANT_BUFFER_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateShaderResourceView )(
            ID3D12Device3 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_SHADER_RESOURCE_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateUnorderedAccessView )(
            ID3D12Device3 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ ID3D12Resource *pCounterResource,
            _In_opt_ const D3D12_UNORDERED_ACCESS_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateRenderTargetView )(
            ID3D12Device3 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_RENDER_TARGET_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateDepthStencilView )(
            ID3D12Device3 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_DEPTH_STENCIL_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateSampler )(
            ID3D12Device3 * This,
            _In_ const D3D12_SAMPLER_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CopyDescriptors )(
            ID3D12Device3 * This,
            _In_ UINT NumDestDescriptorRanges,
            _In_reads_(NumDestDescriptorRanges) const D3D12_CPU_DESCRIPTOR_HANDLE *pDestDescriptorRangeStarts,
            _In_reads_opt_(NumDestDescriptorRanges) const UINT *pDestDescriptorRangeSizes,
            _In_ UINT NumSrcDescriptorRanges,
            _In_reads_(NumSrcDescriptorRanges) const D3D12_CPU_DESCRIPTOR_HANDLE *pSrcDescriptorRangeStarts,
            _In_reads_opt_(NumSrcDescriptorRanges) const UINT *pSrcDescriptorRangeSizes,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
        void ( STDMETHODCALLTYPE *CopyDescriptorsSimple )(
            ID3D12Device3 * This,
            _In_ UINT NumDescriptors,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
        D3D12_RESOURCE_ALLOCATION_INFO ( STDMETHODCALLTYPE *GetResourceAllocationInfo )(
            ID3D12Device3 * This,
            _In_ UINT visibleMask,
            _In_ UINT numResourceDescs,
            _In_reads_(numResourceDescs) const D3D12_RESOURCE_DESC *pResourceDescs);
        D3D12_HEAP_PROPERTIES ( STDMETHODCALLTYPE *GetCustomHeapProperties )(
            ID3D12Device3 * This,
            _In_ UINT nodeMask,
            D3D12_HEAP_TYPE heapType);
        HRESULT ( STDMETHODCALLTYPE *CreateCommittedResource )(
            ID3D12Device3 * This,
            _In_ const D3D12_HEAP_PROPERTIES *pHeapProperties,
            D3D12_HEAP_FLAGS HeapFlags,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialResourceState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riidResource,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateHeap )(
            ID3D12Device3 * This,
            _In_ const D3D12_HEAP_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *CreatePlacedResource )(
            ID3D12Device3 * This,
            _In_ ID3D12Heap *pHeap,
            UINT64 HeapOffset,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateReservedResource )(
            ID3D12Device3 * This,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateSharedHandle )(
            ID3D12Device3 * This,
            _In_ ID3D12DeviceChild *pObject,
            _In_opt_ const SECURITY_ATTRIBUTES *pAttributes,
            DWORD Access,
            _In_opt_ LPCWSTR Name,
            _Out_ HANDLE *pHandle);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedHandle )(
            ID3D12Device3 * This,
            _In_ HANDLE NTHandle,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvObj);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedHandleByName )(
            ID3D12Device3 * This,
            _In_ LPCWSTR Name,
            DWORD Access,
            _Out_ HANDLE *pNTHandle);
        HRESULT ( STDMETHODCALLTYPE *MakeResident )(
            ID3D12Device3 * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects);
        HRESULT ( STDMETHODCALLTYPE *Evict )(
            ID3D12Device3 * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects);
        HRESULT ( STDMETHODCALLTYPE *CreateFence )(
            ID3D12Device3 * This,
            UINT64 InitialValue,
            D3D12_FENCE_FLAGS Flags,
            REFIID riid,
            _COM_Outptr_ void **ppFence);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceRemovedReason )(
            ID3D12Device3 * This);
        void ( STDMETHODCALLTYPE *GetCopyableFootprints )(
            ID3D12Device3 * This,
            _In_ const D3D12_RESOURCE_DESC *pResourceDesc,
            _In_range_(0,D3D12_REQ_SUBRESOURCES) UINT FirstSubresource,
            _In_range_(0,D3D12_REQ_SUBRESOURCES-FirstSubresource) UINT NumSubresources,
            UINT64 BaseOffset,
            _Out_writes_opt_(NumSubresources) D3D12_PLACED_SUBRESOURCE_FOOTPRINT *pLayouts,
            _Out_writes_opt_(NumSubresources) UINT *pNumRows,
            _Out_writes_opt_(NumSubresources) UINT64 *pRowSizeInBytes,
            _Out_opt_ UINT64 *pTotalBytes);
        HRESULT ( STDMETHODCALLTYPE *CreateQueryHeap )(
            ID3D12Device3 * This,
            _In_ const D3D12_QUERY_HEAP_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *SetStablePowerState )(
            ID3D12Device3 * This,
            BOOL Enable);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandSignature )(
            ID3D12Device3 * This,
            _In_ const D3D12_COMMAND_SIGNATURE_DESC *pDesc,
            _In_opt_ ID3D12RootSignature *pRootSignature,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvCommandSignature);
        void ( STDMETHODCALLTYPE *GetResourceTiling )(
            ID3D12Device3 * This,
            _In_ ID3D12Resource *pTiledResource,
            _Out_opt_ UINT *pNumTilesForEntireResource,
            _Out_opt_ D3D12_PACKED_MIP_INFO *pPackedMipDesc,
            _Out_opt_ D3D12_TILE_SHAPE *pStandardTileShapeForNonPackedMips,
            _Inout_opt_ UINT *pNumSubresourceTilings,
            _In_ UINT FirstSubresourceTilingToGet,
            _Out_writes_(*pNumSubresourceTilings) D3D12_SUBRESOURCE_TILING *pSubresourceTilingsForNonPackedMips);
        LUID ( STDMETHODCALLTYPE *GetAdapterLuid )(
            ID3D12Device3 * This);
        HRESULT ( STDMETHODCALLTYPE *CreatePipelineLibrary )(
            ID3D12Device3 * This,
            _In_reads_(BlobLength) const void *pLibraryBlob,
            SIZE_T BlobLength,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineLibrary);
        HRESULT ( STDMETHODCALLTYPE *SetEventOnMultipleFenceCompletion )(
            ID3D12Device3 * This,
            _In_reads_(NumFences) ID3D12Fence *const *ppFences,
            _In_reads_(NumFences) const UINT64 *pFenceValues,
            UINT NumFences,
            D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags,
            HANDLE hEvent);
        HRESULT ( STDMETHODCALLTYPE *SetResidencyPriority )(
            ID3D12Device3 * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects,
            _In_reads_(NumObjects) const D3D12_RESIDENCY_PRIORITY *pPriorities);
        HRESULT ( STDMETHODCALLTYPE *CreatePipelineState )(
            ID3D12Device3 * This,
            const D3D12_PIPELINE_STATE_STREAM_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *OpenExistingHeapFromAddress )(
            ID3D12Device3 * This,
            _In_ const void *pAddress,
            REFIID riid,
            _COM_Outptr_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *OpenExistingHeapFromFileMapping )(
            ID3D12Device3 * This,
            _In_ HANDLE hFileMapping,
            REFIID riid,
            _COM_Outptr_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *EnqueueMakeResident )(
            ID3D12Device3 * This,
            D3D12_RESIDENCY_FLAGS Flags,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects,
            _In_ ID3D12Fence *pFenceToSignal,
            UINT64 FenceValueToSignal);
        END_INTERFACE
    } ID3D12Device3Vtbl;
    interface ID3D12Device3
    {
        CONST_VTBL struct ID3D12Device3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetNodeCount(This) )
    ( (This)->lpVtbl -> CreateCommandQueue(This,pDesc,riid,ppCommandQueue) )
    ( (This)->lpVtbl -> CreateCommandAllocator(This,type,riid,ppCommandAllocator) )
    ( (This)->lpVtbl -> CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> CreateComputePipelineState(This,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) )
    ( (This)->lpVtbl -> CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) )
    ( (This)->lpVtbl -> CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> GetDescriptorHandleIncrementSize(This,DescriptorHeapType) )
    ( (This)->lpVtbl -> CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) )
    ( (This)->lpVtbl -> CreateConstantBufferView(This,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateRenderTargetView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateDepthStencilView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateSampler(This,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) )
    ( (This)->lpVtbl -> CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) )
    ( (This)->lpVtbl -> GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs) )
    ( (This)->lpVtbl -> GetCustomHeapProperties(This,nodeMask,heapType) )
    ( (This)->lpVtbl -> CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) )
    ( (This)->lpVtbl -> CreateHeap(This,pDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) )
    ( (This)->lpVtbl -> CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) )
    ( (This)->lpVtbl -> CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle) )
    ( (This)->lpVtbl -> OpenSharedHandle(This,NTHandle,riid,ppvObj) )
    ( (This)->lpVtbl -> OpenSharedHandleByName(This,Name,Access,pNTHandle) )
    ( (This)->lpVtbl -> MakeResident(This,NumObjects,ppObjects) )
    ( (This)->lpVtbl -> Evict(This,NumObjects,ppObjects) )
    ( (This)->lpVtbl -> CreateFence(This,InitialValue,Flags,riid,ppFence) )
    ( (This)->lpVtbl -> GetDeviceRemovedReason(This) )
    ( (This)->lpVtbl -> GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) )
    ( (This)->lpVtbl -> CreateQueryHeap(This,pDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> SetStablePowerState(This,Enable) )
    ( (This)->lpVtbl -> CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature) )
    ( (This)->lpVtbl -> GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) )
    ( (This)->lpVtbl -> GetAdapterLuid(This) )
    ( (This)->lpVtbl -> CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary) )
    ( (This)->lpVtbl -> SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent) )
    ( (This)->lpVtbl -> SetResidencyPriority(This,NumObjects,ppObjects,pPriorities) )
    ( (This)->lpVtbl -> CreatePipelineState(This,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap) )
    ( (This)->lpVtbl -> OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap) )
    ( (This)->lpVtbl -> EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal) )
typedef
enum D3D12_COMMAND_LIST_FLAGS
    {
        D3D12_COMMAND_LIST_FLAG_NONE = 0
    } D3D12_COMMAND_LIST_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_COMMAND_LIST_FLAGS );
typedef
enum D3D12_COMMAND_POOL_FLAGS
    {
        D3D12_COMMAND_POOL_FLAG_NONE = 0
    } D3D12_COMMAND_POOL_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_COMMAND_POOL_FLAGS );
typedef
enum D3D12_COMMAND_RECORDER_FLAGS
    {
        D3D12_COMMAND_RECORDER_FLAG_NONE = 0
    } D3D12_COMMAND_RECORDER_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_COMMAND_RECORDER_FLAGS );
typedef
enum D3D12_PROTECTED_SESSION_STATUS
    {
        D3D12_PROTECTED_SESSION_STATUS_OK = 0,
        D3D12_PROTECTED_SESSION_STATUS_INVALID = 1
    } D3D12_PROTECTED_SESSION_STATUS;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0026_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D12ProtectedSession;
    typedef struct ID3D12ProtectedSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12ProtectedSession * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12ProtectedSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12ProtectedSession * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12ProtectedSession * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12ProtectedSession * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12ProtectedSession * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12ProtectedSession * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12ProtectedSession * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        HRESULT ( STDMETHODCALLTYPE *GetStatusFence )(
            ID3D12ProtectedSession * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppFence);
        D3D12_PROTECTED_SESSION_STATUS ( STDMETHODCALLTYPE *GetSessionStatus )(
            ID3D12ProtectedSession * This);
        END_INTERFACE
    } ID3D12ProtectedSessionVtbl;
    interface ID3D12ProtectedSession
    {
        CONST_VTBL struct ID3D12ProtectedSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> GetStatusFence(This,riid,ppFence) )
    ( (This)->lpVtbl -> GetSessionStatus(This) )
typedef
enum D3D12_PROTECTED_RESOURCE_SESSION_SUPPORT_FLAGS
    {
        D3D12_PROTECTED_RESOURCE_SESSION_SUPPORT_FLAG_NONE = 0,
        D3D12_PROTECTED_RESOURCE_SESSION_SUPPORT_FLAG_SUPPORTED = 0x1
    } D3D12_PROTECTED_RESOURCE_SESSION_SUPPORT_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_PROTECTED_RESOURCE_SESSION_SUPPORT_FLAGS );
typedef struct D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_SUPPORT
    {
    UINT NodeIndex;
    D3D12_PROTECTED_RESOURCE_SESSION_SUPPORT_FLAGS Support;
    } D3D12_FEATURE_DATA_PROTECTED_RESOURCE_SESSION_SUPPORT;
typedef
enum D3D12_PROTECTED_RESOURCE_SESSION_FLAGS
    {
        D3D12_PROTECTED_RESOURCE_SESSION_FLAG_NONE = 0
    } D3D12_PROTECTED_RESOURCE_SESSION_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_PROTECTED_RESOURCE_SESSION_FLAGS );
typedef struct D3D12_PROTECTED_RESOURCE_SESSION_DESC
    {
    UINT NodeMask;
    D3D12_PROTECTED_RESOURCE_SESSION_FLAGS Flags;
    } D3D12_PROTECTED_RESOURCE_SESSION_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0027_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D12ProtectedResourceSession;
    typedef struct ID3D12ProtectedResourceSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12ProtectedResourceSession * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12ProtectedResourceSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12ProtectedResourceSession * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12ProtectedResourceSession * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12ProtectedResourceSession * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12ProtectedResourceSession * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12ProtectedResourceSession * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12ProtectedResourceSession * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        HRESULT ( STDMETHODCALLTYPE *GetStatusFence )(
            ID3D12ProtectedResourceSession * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppFence);
        D3D12_PROTECTED_SESSION_STATUS ( STDMETHODCALLTYPE *GetSessionStatus )(
            ID3D12ProtectedResourceSession * This);
        D3D12_PROTECTED_RESOURCE_SESSION_DESC ( STDMETHODCALLTYPE *GetDesc )(
            ID3D12ProtectedResourceSession * This);
        END_INTERFACE
    } ID3D12ProtectedResourceSessionVtbl;
    interface ID3D12ProtectedResourceSession
    {
        CONST_VTBL struct ID3D12ProtectedResourceSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> GetStatusFence(This,riid,ppFence) )
    ( (This)->lpVtbl -> GetSessionStatus(This) )
    ( (This)->lpVtbl -> GetDesc(This) )
EXTERN_C const IID IID_ID3D12Device4;
    typedef struct ID3D12Device4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12Device4 * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12Device4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12Device4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12Device4 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12Device4 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12Device4 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12Device4 * This,
            _In_z_ LPCWSTR Name);
        UINT ( STDMETHODCALLTYPE *GetNodeCount )(
            ID3D12Device4 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandQueue )(
            ID3D12Device4 * This,
            _In_ const D3D12_COMMAND_QUEUE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppCommandQueue);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandAllocator )(
            ID3D12Device4 * This,
            _In_ D3D12_COMMAND_LIST_TYPE type,
            REFIID riid,
            _COM_Outptr_ void **ppCommandAllocator);
        HRESULT ( STDMETHODCALLTYPE *CreateGraphicsPipelineState )(
            ID3D12Device4 * This,
            _In_ const D3D12_GRAPHICS_PIPELINE_STATE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *CreateComputePipelineState )(
            ID3D12Device4 * This,
            _In_ const D3D12_COMPUTE_PIPELINE_STATE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandList )(
            ID3D12Device4 * This,
            _In_ UINT nodeMask,
            _In_ D3D12_COMMAND_LIST_TYPE type,
            _In_ ID3D12CommandAllocator *pCommandAllocator,
            _In_opt_ ID3D12PipelineState *pInitialState,
            REFIID riid,
            _COM_Outptr_ void **ppCommandList);
        HRESULT ( STDMETHODCALLTYPE *CheckFeatureSupport )(
            ID3D12Device4 * This,
            D3D12_FEATURE Feature,
            _Inout_updates_bytes_(FeatureSupportDataSize) void *pFeatureSupportData,
            UINT FeatureSupportDataSize);
        HRESULT ( STDMETHODCALLTYPE *CreateDescriptorHeap )(
            ID3D12Device4 * This,
            _In_ const D3D12_DESCRIPTOR_HEAP_DESC *pDescriptorHeapDesc,
            REFIID riid,
            _COM_Outptr_ void **ppvHeap);
        UINT ( STDMETHODCALLTYPE *GetDescriptorHandleIncrementSize )(
            ID3D12Device4 * This,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType);
        HRESULT ( STDMETHODCALLTYPE *CreateRootSignature )(
            ID3D12Device4 * This,
            _In_ UINT nodeMask,
            _In_reads_(blobLengthInBytes) const void *pBlobWithRootSignature,
            _In_ SIZE_T blobLengthInBytes,
            REFIID riid,
            _COM_Outptr_ void **ppvRootSignature);
        void ( STDMETHODCALLTYPE *CreateConstantBufferView )(
            ID3D12Device4 * This,
            _In_opt_ const D3D12_CONSTANT_BUFFER_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateShaderResourceView )(
            ID3D12Device4 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_SHADER_RESOURCE_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateUnorderedAccessView )(
            ID3D12Device4 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ ID3D12Resource *pCounterResource,
            _In_opt_ const D3D12_UNORDERED_ACCESS_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateRenderTargetView )(
            ID3D12Device4 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_RENDER_TARGET_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateDepthStencilView )(
            ID3D12Device4 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_DEPTH_STENCIL_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateSampler )(
            ID3D12Device4 * This,
            _In_ const D3D12_SAMPLER_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CopyDescriptors )(
            ID3D12Device4 * This,
            _In_ UINT NumDestDescriptorRanges,
            _In_reads_(NumDestDescriptorRanges) const D3D12_CPU_DESCRIPTOR_HANDLE *pDestDescriptorRangeStarts,
            _In_reads_opt_(NumDestDescriptorRanges) const UINT *pDestDescriptorRangeSizes,
            _In_ UINT NumSrcDescriptorRanges,
            _In_reads_(NumSrcDescriptorRanges) const D3D12_CPU_DESCRIPTOR_HANDLE *pSrcDescriptorRangeStarts,
            _In_reads_opt_(NumSrcDescriptorRanges) const UINT *pSrcDescriptorRangeSizes,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
        void ( STDMETHODCALLTYPE *CopyDescriptorsSimple )(
            ID3D12Device4 * This,
            _In_ UINT NumDescriptors,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
        D3D12_RESOURCE_ALLOCATION_INFO ( STDMETHODCALLTYPE *GetResourceAllocationInfo )(
            ID3D12Device4 * This,
            _In_ UINT visibleMask,
            _In_ UINT numResourceDescs,
            _In_reads_(numResourceDescs) const D3D12_RESOURCE_DESC *pResourceDescs);
        D3D12_HEAP_PROPERTIES ( STDMETHODCALLTYPE *GetCustomHeapProperties )(
            ID3D12Device4 * This,
            _In_ UINT nodeMask,
            D3D12_HEAP_TYPE heapType);
        HRESULT ( STDMETHODCALLTYPE *CreateCommittedResource )(
            ID3D12Device4 * This,
            _In_ const D3D12_HEAP_PROPERTIES *pHeapProperties,
            D3D12_HEAP_FLAGS HeapFlags,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialResourceState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riidResource,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateHeap )(
            ID3D12Device4 * This,
            _In_ const D3D12_HEAP_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *CreatePlacedResource )(
            ID3D12Device4 * This,
            _In_ ID3D12Heap *pHeap,
            UINT64 HeapOffset,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateReservedResource )(
            ID3D12Device4 * This,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateSharedHandle )(
            ID3D12Device4 * This,
            _In_ ID3D12DeviceChild *pObject,
            _In_opt_ const SECURITY_ATTRIBUTES *pAttributes,
            DWORD Access,
            _In_opt_ LPCWSTR Name,
            _Out_ HANDLE *pHandle);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedHandle )(
            ID3D12Device4 * This,
            _In_ HANDLE NTHandle,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvObj);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedHandleByName )(
            ID3D12Device4 * This,
            _In_ LPCWSTR Name,
            DWORD Access,
            _Out_ HANDLE *pNTHandle);
        HRESULT ( STDMETHODCALLTYPE *MakeResident )(
            ID3D12Device4 * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects);
        HRESULT ( STDMETHODCALLTYPE *Evict )(
            ID3D12Device4 * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects);
        HRESULT ( STDMETHODCALLTYPE *CreateFence )(
            ID3D12Device4 * This,
            UINT64 InitialValue,
            D3D12_FENCE_FLAGS Flags,
            REFIID riid,
            _COM_Outptr_ void **ppFence);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceRemovedReason )(
            ID3D12Device4 * This);
        void ( STDMETHODCALLTYPE *GetCopyableFootprints )(
            ID3D12Device4 * This,
            _In_ const D3D12_RESOURCE_DESC *pResourceDesc,
            _In_range_(0,D3D12_REQ_SUBRESOURCES) UINT FirstSubresource,
            _In_range_(0,D3D12_REQ_SUBRESOURCES-FirstSubresource) UINT NumSubresources,
            UINT64 BaseOffset,
            _Out_writes_opt_(NumSubresources) D3D12_PLACED_SUBRESOURCE_FOOTPRINT *pLayouts,
            _Out_writes_opt_(NumSubresources) UINT *pNumRows,
            _Out_writes_opt_(NumSubresources) UINT64 *pRowSizeInBytes,
            _Out_opt_ UINT64 *pTotalBytes);
        HRESULT ( STDMETHODCALLTYPE *CreateQueryHeap )(
            ID3D12Device4 * This,
            _In_ const D3D12_QUERY_HEAP_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *SetStablePowerState )(
            ID3D12Device4 * This,
            BOOL Enable);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandSignature )(
            ID3D12Device4 * This,
            _In_ const D3D12_COMMAND_SIGNATURE_DESC *pDesc,
            _In_opt_ ID3D12RootSignature *pRootSignature,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvCommandSignature);
        void ( STDMETHODCALLTYPE *GetResourceTiling )(
            ID3D12Device4 * This,
            _In_ ID3D12Resource *pTiledResource,
            _Out_opt_ UINT *pNumTilesForEntireResource,
            _Out_opt_ D3D12_PACKED_MIP_INFO *pPackedMipDesc,
            _Out_opt_ D3D12_TILE_SHAPE *pStandardTileShapeForNonPackedMips,
            _Inout_opt_ UINT *pNumSubresourceTilings,
            _In_ UINT FirstSubresourceTilingToGet,
            _Out_writes_(*pNumSubresourceTilings) D3D12_SUBRESOURCE_TILING *pSubresourceTilingsForNonPackedMips);
        LUID ( STDMETHODCALLTYPE *GetAdapterLuid )(
            ID3D12Device4 * This);
        HRESULT ( STDMETHODCALLTYPE *CreatePipelineLibrary )(
            ID3D12Device4 * This,
            _In_reads_(BlobLength) const void *pLibraryBlob,
            SIZE_T BlobLength,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineLibrary);
        HRESULT ( STDMETHODCALLTYPE *SetEventOnMultipleFenceCompletion )(
            ID3D12Device4 * This,
            _In_reads_(NumFences) ID3D12Fence *const *ppFences,
            _In_reads_(NumFences) const UINT64 *pFenceValues,
            UINT NumFences,
            D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags,
            HANDLE hEvent);
        HRESULT ( STDMETHODCALLTYPE *SetResidencyPriority )(
            ID3D12Device4 * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects,
            _In_reads_(NumObjects) const D3D12_RESIDENCY_PRIORITY *pPriorities);
        HRESULT ( STDMETHODCALLTYPE *CreatePipelineState )(
            ID3D12Device4 * This,
            const D3D12_PIPELINE_STATE_STREAM_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *OpenExistingHeapFromAddress )(
            ID3D12Device4 * This,
            _In_ const void *pAddress,
            REFIID riid,
            _COM_Outptr_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *OpenExistingHeapFromFileMapping )(
            ID3D12Device4 * This,
            _In_ HANDLE hFileMapping,
            REFIID riid,
            _COM_Outptr_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *EnqueueMakeResident )(
            ID3D12Device4 * This,
            D3D12_RESIDENCY_FLAGS Flags,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects,
            _In_ ID3D12Fence *pFenceToSignal,
            UINT64 FenceValueToSignal);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandList1 )(
            ID3D12Device4 * This,
            _In_ UINT nodeMask,
            _In_ D3D12_COMMAND_LIST_TYPE type,
            _In_ D3D12_COMMAND_LIST_FLAGS flags,
            REFIID riid,
            _COM_Outptr_ void **ppCommandList);
        HRESULT ( STDMETHODCALLTYPE *CreateProtectedResourceSession )(
            ID3D12Device4 * This,
            _In_ const D3D12_PROTECTED_RESOURCE_SESSION_DESC *pDesc,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppSession);
        HRESULT ( STDMETHODCALLTYPE *CreateCommittedResource1 )(
            ID3D12Device4 * This,
            _In_ const D3D12_HEAP_PROPERTIES *pHeapProperties,
            D3D12_HEAP_FLAGS HeapFlags,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialResourceState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            _In_opt_ ID3D12ProtectedResourceSession *pProtectedSession,
            REFIID riidResource,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateHeap1 )(
            ID3D12Device4 * This,
            _In_ const D3D12_HEAP_DESC *pDesc,
            _In_opt_ ID3D12ProtectedResourceSession *pProtectedSession,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *CreateReservedResource1 )(
            ID3D12Device4 * This,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            _In_opt_ ID3D12ProtectedResourceSession *pProtectedSession,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvResource);
        D3D12_RESOURCE_ALLOCATION_INFO ( STDMETHODCALLTYPE *GetResourceAllocationInfo1 )(
            ID3D12Device4 * This,
            UINT visibleMask,
            UINT numResourceDescs,
            _In_reads_(numResourceDescs) const D3D12_RESOURCE_DESC *pResourceDescs,
            _Out_writes_opt_(numResourceDescs) D3D12_RESOURCE_ALLOCATION_INFO1 *pResourceAllocationInfo1);
        END_INTERFACE
    } ID3D12Device4Vtbl;
    interface ID3D12Device4
    {
        CONST_VTBL struct ID3D12Device4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetNodeCount(This) )
    ( (This)->lpVtbl -> CreateCommandQueue(This,pDesc,riid,ppCommandQueue) )
    ( (This)->lpVtbl -> CreateCommandAllocator(This,type,riid,ppCommandAllocator) )
    ( (This)->lpVtbl -> CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> CreateComputePipelineState(This,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) )
    ( (This)->lpVtbl -> CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) )
    ( (This)->lpVtbl -> CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> GetDescriptorHandleIncrementSize(This,DescriptorHeapType) )
    ( (This)->lpVtbl -> CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) )
    ( (This)->lpVtbl -> CreateConstantBufferView(This,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateRenderTargetView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateDepthStencilView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateSampler(This,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) )
    ( (This)->lpVtbl -> CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) )
    ( (This)->lpVtbl -> GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs) )
    ( (This)->lpVtbl -> GetCustomHeapProperties(This,nodeMask,heapType) )
    ( (This)->lpVtbl -> CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) )
    ( (This)->lpVtbl -> CreateHeap(This,pDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) )
    ( (This)->lpVtbl -> CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) )
    ( (This)->lpVtbl -> CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle) )
    ( (This)->lpVtbl -> OpenSharedHandle(This,NTHandle,riid,ppvObj) )
    ( (This)->lpVtbl -> OpenSharedHandleByName(This,Name,Access,pNTHandle) )
    ( (This)->lpVtbl -> MakeResident(This,NumObjects,ppObjects) )
    ( (This)->lpVtbl -> Evict(This,NumObjects,ppObjects) )
    ( (This)->lpVtbl -> CreateFence(This,InitialValue,Flags,riid,ppFence) )
    ( (This)->lpVtbl -> GetDeviceRemovedReason(This) )
    ( (This)->lpVtbl -> GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) )
    ( (This)->lpVtbl -> CreateQueryHeap(This,pDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> SetStablePowerState(This,Enable) )
    ( (This)->lpVtbl -> CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature) )
    ( (This)->lpVtbl -> GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) )
    ( (This)->lpVtbl -> GetAdapterLuid(This) )
    ( (This)->lpVtbl -> CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary) )
    ( (This)->lpVtbl -> SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent) )
    ( (This)->lpVtbl -> SetResidencyPriority(This,NumObjects,ppObjects,pPriorities) )
    ( (This)->lpVtbl -> CreatePipelineState(This,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap) )
    ( (This)->lpVtbl -> OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap) )
    ( (This)->lpVtbl -> EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal) )
    ( (This)->lpVtbl -> CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList) )
    ( (This)->lpVtbl -> CreateProtectedResourceSession(This,pDesc,riid,ppSession) )
    ( (This)->lpVtbl -> CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource) )
    ( (This)->lpVtbl -> CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap) )
    ( (This)->lpVtbl -> CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource) )
    ( (This)->lpVtbl -> GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) )
typedef
enum D3D12_LIFETIME_STATE
    {
        D3D12_LIFETIME_STATE_IN_USE = 0,
        D3D12_LIFETIME_STATE_NOT_IN_USE = ( D3D12_LIFETIME_STATE_IN_USE + 1 )
    } D3D12_LIFETIME_STATE;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0029_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D12LifetimeOwner;
    typedef struct ID3D12LifetimeOwnerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12LifetimeOwner * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12LifetimeOwner * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12LifetimeOwner * This);
        void ( STDMETHODCALLTYPE *LifetimeStateUpdated )(
            ID3D12LifetimeOwner * This,
            D3D12_LIFETIME_STATE NewState);
        END_INTERFACE
    } ID3D12LifetimeOwnerVtbl;
    interface ID3D12LifetimeOwner
    {
        CONST_VTBL struct ID3D12LifetimeOwnerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LifetimeStateUpdated(This,NewState) )
EXTERN_C const IID IID_ID3D12SwapChainAssistant;
    typedef struct ID3D12SwapChainAssistantVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12SwapChainAssistant * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12SwapChainAssistant * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12SwapChainAssistant * This);
        LUID ( STDMETHODCALLTYPE *GetLUID )(
            ID3D12SwapChainAssistant * This);
        HRESULT ( STDMETHODCALLTYPE *GetSwapChainObject )(
            ID3D12SwapChainAssistant * This,
            REFIID riid,
            _COM_Outptr_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentResourceAndCommandQueue )(
            ID3D12SwapChainAssistant * This,
            REFIID riidResource,
            _COM_Outptr_ void **ppvResource,
            REFIID riidQueue,
            _COM_Outptr_ void **ppvQueue);
        HRESULT ( STDMETHODCALLTYPE *InsertImplicitSync )(
            ID3D12SwapChainAssistant * This);
        END_INTERFACE
    } ID3D12SwapChainAssistantVtbl;
    interface ID3D12SwapChainAssistant
    {
        CONST_VTBL struct ID3D12SwapChainAssistantVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLUID(This) )
    ( (This)->lpVtbl -> GetSwapChainObject(This,riid,ppv) )
    ( (This)->lpVtbl -> GetCurrentResourceAndCommandQueue(This,riidResource,ppvResource,riidQueue,ppvQueue) )
    ( (This)->lpVtbl -> InsertImplicitSync(This) )
EXTERN_C const IID IID_ID3D12LifetimeTracker;
    typedef struct ID3D12LifetimeTrackerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12LifetimeTracker * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12LifetimeTracker * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12LifetimeTracker * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12LifetimeTracker * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12LifetimeTracker * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12LifetimeTracker * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12LifetimeTracker * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12LifetimeTracker * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        HRESULT ( STDMETHODCALLTYPE *DestroyOwnedObject )(
            ID3D12LifetimeTracker * This,
            _In_ ID3D12DeviceChild *pObject);
        END_INTERFACE
    } ID3D12LifetimeTrackerVtbl;
    interface ID3D12LifetimeTracker
    {
        CONST_VTBL struct ID3D12LifetimeTrackerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> DestroyOwnedObject(This,pObject) )
typedef
enum D3D12_META_COMMAND_PARAMETER_TYPE
    {
        D3D12_META_COMMAND_PARAMETER_TYPE_FLOAT = 0,
        D3D12_META_COMMAND_PARAMETER_TYPE_UINT64 = 1,
        D3D12_META_COMMAND_PARAMETER_TYPE_GPU_VIRTUAL_ADDRESS = 2,
        D3D12_META_COMMAND_PARAMETER_TYPE_CPU_DESCRIPTOR_HANDLE_HEAP_TYPE_CBV_SRV_UAV = 3,
        D3D12_META_COMMAND_PARAMETER_TYPE_GPU_DESCRIPTOR_HANDLE_HEAP_TYPE_CBV_SRV_UAV = 4
    } D3D12_META_COMMAND_PARAMETER_TYPE;
typedef
enum D3D12_META_COMMAND_PARAMETER_FLAGS
    {
        D3D12_META_COMMAND_PARAMETER_FLAG_INPUT = 0x1,
        D3D12_META_COMMAND_PARAMETER_FLAG_OUTPUT = 0x2
    } D3D12_META_COMMAND_PARAMETER_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_META_COMMAND_PARAMETER_FLAGS );
typedef
enum D3D12_META_COMMAND_PARAMETER_STAGE
    {
        D3D12_META_COMMAND_PARAMETER_STAGE_CREATION = 0,
        D3D12_META_COMMAND_PARAMETER_STAGE_INITIALIZATION = 1,
        D3D12_META_COMMAND_PARAMETER_STAGE_EXECUTION = 2
    } D3D12_META_COMMAND_PARAMETER_STAGE;
typedef struct D3D12_META_COMMAND_PARAMETER_DESC
    {
    LPCWSTR Name;
    D3D12_META_COMMAND_PARAMETER_TYPE Type;
    D3D12_META_COMMAND_PARAMETER_FLAGS Flags;
    D3D12_RESOURCE_STATES RequiredResourceState;
    UINT StructureOffset;
    } D3D12_META_COMMAND_PARAMETER_DESC;
typedef
enum D3D12_GRAPHICS_STATES
    {
        D3D12_GRAPHICS_STATE_NONE = 0,
        D3D12_GRAPHICS_STATE_IA_VERTEX_BUFFERS = ( 1 << 0 ) ,
        D3D12_GRAPHICS_STATE_IA_INDEX_BUFFER = ( 1 << 1 ) ,
        D3D12_GRAPHICS_STATE_IA_PRIMITIVE_TOPOLOGY = ( 1 << 2 ) ,
        D3D12_GRAPHICS_STATE_DESCRIPTOR_HEAP = ( 1 << 3 ) ,
        D3D12_GRAPHICS_STATE_GRAPHICS_ROOT_SIGNATURE = ( 1 << 4 ) ,
        D3D12_GRAPHICS_STATE_COMPUTE_ROOT_SIGNATURE = ( 1 << 5 ) ,
        D3D12_GRAPHICS_STATE_RS_VIEWPORTS = ( 1 << 6 ) ,
        D3D12_GRAPHICS_STATE_RS_SCISSOR_RECTS = ( 1 << 7 ) ,
        D3D12_GRAPHICS_STATE_PREDICATION = ( 1 << 8 ) ,
        D3D12_GRAPHICS_STATE_OM_RENDER_TARGETS = ( 1 << 9 ) ,
        D3D12_GRAPHICS_STATE_OM_STENCIL_REF = ( 1 << 10 ) ,
        D3D12_GRAPHICS_STATE_OM_BLEND_FACTOR = ( 1 << 11 ) ,
        D3D12_GRAPHICS_STATE_PIPELINE_STATE = ( 1 << 12 ) ,
        D3D12_GRAPHICS_STATE_SO_TARGETS = ( 1 << 13 ) ,
        D3D12_GRAPHICS_STATE_OM_DEPTH_BOUNDS = ( 1 << 14 ) ,
        D3D12_GRAPHICS_STATE_SAMPLE_POSITIONS = ( 1 << 15 ) ,
        D3D12_GRAPHICS_STATE_VIEW_INSTANCE_MASK = ( 1 << 16 )
    } D3D12_GRAPHICS_STATES;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_GRAPHICS_STATES );
typedef struct D3D12_META_COMMAND_DESC
    {
    GUID Id;
    LPCWSTR Name;
    D3D12_GRAPHICS_STATES InitializationDirtyState;
    D3D12_GRAPHICS_STATES ExecutionDirtyState;
    } D3D12_META_COMMAND_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0032_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D12StateObject;
    typedef struct ID3D12StateObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12StateObject * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12StateObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12StateObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12StateObject * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12StateObject * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12StateObject * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12StateObject * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12StateObject * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        END_INTERFACE
    } ID3D12StateObjectVtbl;
    interface ID3D12StateObject
    {
        CONST_VTBL struct ID3D12StateObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
EXTERN_C const IID IID_ID3D12StateObjectProperties;
    typedef struct ID3D12StateObjectPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12StateObjectProperties * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12StateObjectProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12StateObjectProperties * This);
        void *( STDMETHODCALLTYPE *GetShaderIdentifier )(
            ID3D12StateObjectProperties * This,
            _In_ LPCWSTR pExportName);
        UINT64 ( STDMETHODCALLTYPE *GetShaderStackSize )(
            ID3D12StateObjectProperties * This,
            _In_ LPCWSTR pExportName);
        UINT64 ( STDMETHODCALLTYPE *GetPipelineStackSize )(
            ID3D12StateObjectProperties * This);
        void ( STDMETHODCALLTYPE *SetPipelineStackSize )(
            ID3D12StateObjectProperties * This,
            UINT64 PipelineStackSizeInBytes);
        END_INTERFACE
    } ID3D12StateObjectPropertiesVtbl;
    interface ID3D12StateObjectProperties
    {
        CONST_VTBL struct ID3D12StateObjectPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetShaderIdentifier(This,pExportName) )
    ( (This)->lpVtbl -> GetShaderStackSize(This,pExportName) )
    ( (This)->lpVtbl -> GetPipelineStackSize(This) )
    ( (This)->lpVtbl -> SetPipelineStackSize(This,PipelineStackSizeInBytes) )
typedef
enum D3D12_STATE_SUBOBJECT_TYPE
    {
        D3D12_STATE_SUBOBJECT_TYPE_STATE_OBJECT_CONFIG = 0,
        D3D12_STATE_SUBOBJECT_TYPE_GLOBAL_ROOT_SIGNATURE = 1,
        D3D12_STATE_SUBOBJECT_TYPE_LOCAL_ROOT_SIGNATURE = 2,
        D3D12_STATE_SUBOBJECT_TYPE_NODE_MASK = 3,
        D3D12_STATE_SUBOBJECT_TYPE_DXIL_LIBRARY = 5,
        D3D12_STATE_SUBOBJECT_TYPE_EXISTING_COLLECTION = 6,
        D3D12_STATE_SUBOBJECT_TYPE_SUBOBJECT_TO_EXPORTS_ASSOCIATION = 7,
        D3D12_STATE_SUBOBJECT_TYPE_DXIL_SUBOBJECT_TO_EXPORTS_ASSOCIATION = 8,
        D3D12_STATE_SUBOBJECT_TYPE_RAYTRACING_SHADER_CONFIG = 9,
        D3D12_STATE_SUBOBJECT_TYPE_RAYTRACING_PIPELINE_CONFIG = 10,
        D3D12_STATE_SUBOBJECT_TYPE_HIT_GROUP = 11,
        D3D12_STATE_SUBOBJECT_TYPE_MAX_VALID = ( D3D12_STATE_SUBOBJECT_TYPE_HIT_GROUP + 1 )
    } D3D12_STATE_SUBOBJECT_TYPE;
typedef struct D3D12_STATE_SUBOBJECT
    {
    D3D12_STATE_SUBOBJECT_TYPE Type;
    const void *pDesc;
    } D3D12_STATE_SUBOBJECT;
typedef
enum D3D12_STATE_OBJECT_FLAGS
    {
        D3D12_STATE_OBJECT_FLAG_NONE = 0,
        D3D12_STATE_OBJECT_FLAG_ALLOW_LOCAL_DEPENDENCIES_ON_EXTERNAL_DEFINITIONS = 0x1,
        D3D12_STATE_OBJECT_FLAG_ALLOW_EXTERNAL_DEPENDENCIES_ON_LOCAL_DEFINITIONS = 0x2
    } D3D12_STATE_OBJECT_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_STATE_OBJECT_FLAGS );
typedef struct D3D12_STATE_OBJECT_CONFIG
    {
    D3D12_STATE_OBJECT_FLAGS Flags;
    } D3D12_STATE_OBJECT_CONFIG;
typedef struct D3D12_GLOBAL_ROOT_SIGNATURE
    {
    ID3D12RootSignature *pGlobalRootSignature;
    } D3D12_GLOBAL_ROOT_SIGNATURE;
typedef struct D3D12_LOCAL_ROOT_SIGNATURE
    {
    ID3D12RootSignature *pLocalRootSignature;
    } D3D12_LOCAL_ROOT_SIGNATURE;
typedef struct D3D12_NODE_MASK
    {
    UINT NodeMask;
    } D3D12_NODE_MASK;
typedef
enum D3D12_EXPORT_FLAGS
    {
        D3D12_EXPORT_FLAG_NONE = 0
    } D3D12_EXPORT_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_EXPORT_FLAGS );
typedef struct D3D12_EXPORT_DESC
    {
    LPCWSTR Name;
    _In_opt_ LPCWSTR ExportToRename;
    D3D12_EXPORT_FLAGS Flags;
    } D3D12_EXPORT_DESC;
typedef struct D3D12_DXIL_LIBRARY_DESC
    {
    D3D12_SHADER_BYTECODE DXILLibrary;
    UINT NumExports;
    _In_reads_(NumExports) D3D12_EXPORT_DESC *pExports;
    } D3D12_DXIL_LIBRARY_DESC;
typedef struct D3D12_EXISTING_COLLECTION_DESC
    {
    ID3D12StateObject *pExistingCollection;
    UINT NumExports;
    _In_reads_(NumExports) D3D12_EXPORT_DESC *pExports;
    } D3D12_EXISTING_COLLECTION_DESC;
typedef struct D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION
    {
    const D3D12_STATE_SUBOBJECT *pSubobjectToAssociate;
    UINT NumExports;
    _In_reads_(NumExports) LPCWSTR *pExports;
    } D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION;
typedef struct D3D12_DXIL_SUBOBJECT_TO_EXPORTS_ASSOCIATION
    {
    LPCWSTR SubobjectToAssociate;
    UINT NumExports;
    _In_reads_(NumExports) LPCWSTR *pExports;
    } D3D12_DXIL_SUBOBJECT_TO_EXPORTS_ASSOCIATION;
typedef
enum D3D12_HIT_GROUP_TYPE
    {
        D3D12_HIT_GROUP_TYPE_TRIANGLES = 0,
        D3D12_HIT_GROUP_TYPE_PROCEDURAL_PRIMITIVE = 0x1
    } D3D12_HIT_GROUP_TYPE;
typedef struct D3D12_HIT_GROUP_DESC
    {
    LPCWSTR HitGroupExport;
    D3D12_HIT_GROUP_TYPE Type;
    _In_opt_ LPCWSTR AnyHitShaderImport;
    _In_opt_ LPCWSTR ClosestHitShaderImport;
    _In_opt_ LPCWSTR IntersectionShaderImport;
    } D3D12_HIT_GROUP_DESC;
typedef struct D3D12_RAYTRACING_SHADER_CONFIG
    {
    UINT MaxPayloadSizeInBytes;
    UINT MaxAttributeSizeInBytes;
    } D3D12_RAYTRACING_SHADER_CONFIG;
typedef struct D3D12_RAYTRACING_PIPELINE_CONFIG
    {
    UINT MaxTraceRecursionDepth;
    } D3D12_RAYTRACING_PIPELINE_CONFIG;
typedef
enum D3D12_STATE_OBJECT_TYPE
    {
        D3D12_STATE_OBJECT_TYPE_COLLECTION = 0,
        D3D12_STATE_OBJECT_TYPE_RAYTRACING_PIPELINE = 3
    } D3D12_STATE_OBJECT_TYPE;
typedef struct D3D12_STATE_OBJECT_DESC
    {
    D3D12_STATE_OBJECT_TYPE Type;
    UINT NumSubobjects;
    _In_reads_(NumSubobjects) const D3D12_STATE_SUBOBJECT *pSubobjects;
    } D3D12_STATE_OBJECT_DESC;
typedef
enum D3D12_RAYTRACING_GEOMETRY_FLAGS
    {
        D3D12_RAYTRACING_GEOMETRY_FLAG_NONE = 0,
        D3D12_RAYTRACING_GEOMETRY_FLAG_OPAQUE = 0x1,
        D3D12_RAYTRACING_GEOMETRY_FLAG_NO_DUPLICATE_ANYHIT_INVOCATION = 0x2
    } D3D12_RAYTRACING_GEOMETRY_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_RAYTRACING_GEOMETRY_FLAGS );
typedef
enum D3D12_RAYTRACING_GEOMETRY_TYPE
    {
        D3D12_RAYTRACING_GEOMETRY_TYPE_TRIANGLES = 0,
        D3D12_RAYTRACING_GEOMETRY_TYPE_PROCEDURAL_PRIMITIVE_AABBS = ( D3D12_RAYTRACING_GEOMETRY_TYPE_TRIANGLES + 1 )
    } D3D12_RAYTRACING_GEOMETRY_TYPE;
typedef
enum D3D12_RAYTRACING_INSTANCE_FLAGS
    {
        D3D12_RAYTRACING_INSTANCE_FLAG_NONE = 0,
        D3D12_RAYTRACING_INSTANCE_FLAG_TRIANGLE_CULL_DISABLE = 0x1,
        D3D12_RAYTRACING_INSTANCE_FLAG_TRIANGLE_FRONT_COUNTERCLOCKWISE = 0x2,
        D3D12_RAYTRACING_INSTANCE_FLAG_FORCE_OPAQUE = 0x4,
        D3D12_RAYTRACING_INSTANCE_FLAG_FORCE_NON_OPAQUE = 0x8
    } D3D12_RAYTRACING_INSTANCE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_RAYTRACING_INSTANCE_FLAGS );
typedef struct D3D12_GPU_VIRTUAL_ADDRESS_AND_STRIDE
    {
    D3D12_GPU_VIRTUAL_ADDRESS StartAddress;
    UINT64 StrideInBytes;
    } D3D12_GPU_VIRTUAL_ADDRESS_AND_STRIDE;
typedef struct D3D12_GPU_VIRTUAL_ADDRESS_RANGE
    {
    D3D12_GPU_VIRTUAL_ADDRESS StartAddress;
    UINT64 SizeInBytes;
    } D3D12_GPU_VIRTUAL_ADDRESS_RANGE;
typedef struct D3D12_GPU_VIRTUAL_ADDRESS_RANGE_AND_STRIDE
    {
    D3D12_GPU_VIRTUAL_ADDRESS StartAddress;
    UINT64 SizeInBytes;
    UINT64 StrideInBytes;
    } D3D12_GPU_VIRTUAL_ADDRESS_RANGE_AND_STRIDE;
typedef struct D3D12_RAYTRACING_GEOMETRY_TRIANGLES_DESC
    {
    D3D12_GPU_VIRTUAL_ADDRESS Transform3x4;
    DXGI_FORMAT IndexFormat;
    DXGI_FORMAT VertexFormat;
    UINT IndexCount;
    UINT VertexCount;
    D3D12_GPU_VIRTUAL_ADDRESS IndexBuffer;
    D3D12_GPU_VIRTUAL_ADDRESS_AND_STRIDE VertexBuffer;
    } D3D12_RAYTRACING_GEOMETRY_TRIANGLES_DESC;
typedef struct D3D12_RAYTRACING_AABB
    {
    FLOAT MinX;
    FLOAT MinY;
    FLOAT MinZ;
    FLOAT MaxX;
    FLOAT MaxY;
    FLOAT MaxZ;
    } D3D12_RAYTRACING_AABB;
typedef struct D3D12_RAYTRACING_GEOMETRY_AABBS_DESC
    {
    UINT64 AABBCount;
    D3D12_GPU_VIRTUAL_ADDRESS_AND_STRIDE AABBs;
    } D3D12_RAYTRACING_GEOMETRY_AABBS_DESC;
typedef
enum D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAGS
    {
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_NONE = 0,
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_ALLOW_UPDATE = 0x1,
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_ALLOW_COMPACTION = 0x2,
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_PREFER_FAST_TRACE = 0x4,
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_PREFER_FAST_BUILD = 0x8,
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_MINIMIZE_MEMORY = 0x10,
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_PERFORM_UPDATE = 0x20
    } D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAGS );
typedef
enum D3D12_RAYTRACING_ACCELERATION_STRUCTURE_COPY_MODE
    {
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_COPY_MODE_CLONE = 0,
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_COPY_MODE_COMPACT = 0x1,
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_COPY_MODE_VISUALIZATION_DECODE_FOR_TOOLS = 0x2,
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_COPY_MODE_SERIALIZE = 0x3,
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_COPY_MODE_DESERIALIZE = 0x4
    } D3D12_RAYTRACING_ACCELERATION_STRUCTURE_COPY_MODE;
typedef
enum D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE
    {
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL = 0,
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL = 0x1
    } D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE;
typedef
enum D3D12_ELEMENTS_LAYOUT
    {
        D3D12_ELEMENTS_LAYOUT_ARRAY = 0,
        D3D12_ELEMENTS_LAYOUT_ARRAY_OF_POINTERS = 0x1
    } D3D12_ELEMENTS_LAYOUT;
typedef
enum D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_TYPE
    {
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_COMPACTED_SIZE = 0,
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_TOOLS_VISUALIZATION = 0x1,
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_SERIALIZATION = 0x2,
        D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_CURRENT_SIZE = 0x3
    } D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_TYPE;
typedef struct D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC
    {
    D3D12_GPU_VIRTUAL_ADDRESS DestBuffer;
    D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_TYPE InfoType;
    } D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC;
typedef struct D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_COMPACTED_SIZE_DESC
    {
    UINT64 CompactedSizeInBytes;
    } D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_COMPACTED_SIZE_DESC;
typedef struct D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_TOOLS_VISUALIZATION_DESC
    {
    UINT64 DecodedSizeInBytes;
    } D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_TOOLS_VISUALIZATION_DESC;
typedef struct D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_TOOLS_VISUALIZATION_HEADER
    {
    D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE Type;
    UINT NumDescs;
    } D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_TOOLS_VISUALIZATION_HEADER;
typedef struct D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_SERIALIZATION_DESC
    {
    UINT64 SerializedSizeInBytes;
    UINT64 NumBottomLevelAccelerationStructurePointers;
    } D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_SERIALIZATION_DESC;
typedef struct D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER
    {
    GUID DriverOpaqueGUID;
    BYTE DriverOpaqueVersioningData[ 16 ];
    } D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER;
typedef
enum D3D12_SERIALIZED_DATA_TYPE
    {
        D3D12_SERIALIZED_DATA_RAYTRACING_ACCELERATION_STRUCTURE = 0
    } D3D12_SERIALIZED_DATA_TYPE;
typedef
enum D3D12_DRIVER_MATCHING_IDENTIFIER_STATUS
    {
        D3D12_DRIVER_MATCHING_IDENTIFIER_COMPATIBLE_WITH_DEVICE = 0,
        D3D12_DRIVER_MATCHING_IDENTIFIER_UNSUPPORTED_TYPE = 0x1,
        D3D12_DRIVER_MATCHING_IDENTIFIER_UNRECOGNIZED = 0x2,
        D3D12_DRIVER_MATCHING_IDENTIFIER_INCOMPATIBLE_VERSION = 0x3,
        D3D12_DRIVER_MATCHING_IDENTIFIER_INCOMPATIBLE_TYPE = 0x4
    } D3D12_DRIVER_MATCHING_IDENTIFIER_STATUS;
typedef struct D3D12_SERIALIZED_RAYTRACING_ACCELERATION_STRUCTURE_HEADER
    {
    D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER DriverMatchingIdentifier;
    UINT64 SerializedSizeInBytesIncludingHeader;
    UINT64 DeserializedSizeInBytes;
    UINT64 NumBottomLevelAccelerationStructurePointersAfterHeader;
    } D3D12_SERIALIZED_RAYTRACING_ACCELERATION_STRUCTURE_HEADER;
typedef struct D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_CURRENT_SIZE_DESC
    {
    UINT64 CurrentSizeInBytes;
    } D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_CURRENT_SIZE_DESC;
typedef struct D3D12_RAYTRACING_INSTANCE_DESC
    {
    FLOAT Transform[ 3 ][ 4 ];
    UINT InstanceID : 24;
    UINT InstanceMask : 8;
    UINT InstanceContributionToHitGroupIndex : 24;
    UINT Flags : 8;
    D3D12_GPU_VIRTUAL_ADDRESS AccelerationStructure;
    } D3D12_RAYTRACING_INSTANCE_DESC;
typedef struct D3D12_RAYTRACING_GEOMETRY_DESC
    {
    D3D12_RAYTRACING_GEOMETRY_TYPE Type;
    D3D12_RAYTRACING_GEOMETRY_FLAGS Flags;
    union
        {
        D3D12_RAYTRACING_GEOMETRY_TRIANGLES_DESC Triangles;
        D3D12_RAYTRACING_GEOMETRY_AABBS_DESC AABBs;
        } ;
    } D3D12_RAYTRACING_GEOMETRY_DESC;
typedef struct D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS
    {
    D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE Type;
    D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAGS Flags;
    UINT NumDescs;
    D3D12_ELEMENTS_LAYOUT DescsLayout;
    union
        {
        D3D12_GPU_VIRTUAL_ADDRESS InstanceDescs;
        const D3D12_RAYTRACING_GEOMETRY_DESC *pGeometryDescs;
        const D3D12_RAYTRACING_GEOMETRY_DESC *const *ppGeometryDescs;
        } ;
    } D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS;
typedef struct D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC
    {
    D3D12_GPU_VIRTUAL_ADDRESS DestAccelerationStructureData;
    D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS Inputs;
    _In_opt_ D3D12_GPU_VIRTUAL_ADDRESS SourceAccelerationStructureData;
    D3D12_GPU_VIRTUAL_ADDRESS ScratchAccelerationStructureData;
    } D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC;
typedef struct D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO
    {
    UINT64 ResultDataMaxSizeInBytes;
    UINT64 ScratchDataSizeInBytes;
    UINT64 UpdateScratchDataSizeInBytes;
    } D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO;
typedef
enum D3D12_RAY_FLAGS
    {
        D3D12_RAY_FLAG_NONE = 0,
        D3D12_RAY_FLAG_FORCE_OPAQUE = 0x1,
        D3D12_RAY_FLAG_FORCE_NON_OPAQUE = 0x2,
        D3D12_RAY_FLAG_ACCEPT_FIRST_HIT_AND_END_SEARCH = 0x4,
        D3D12_RAY_FLAG_SKIP_CLOSEST_HIT_SHADER = 0x8,
        D3D12_RAY_FLAG_CULL_BACK_FACING_TRIANGLES = 0x10,
        D3D12_RAY_FLAG_CULL_FRONT_FACING_TRIANGLES = 0x20,
        D3D12_RAY_FLAG_CULL_OPAQUE = 0x40,
        D3D12_RAY_FLAG_CULL_NON_OPAQUE = 0x80
    } D3D12_RAY_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_RAY_FLAGS );
typedef
enum D3D12_HIT_KIND
    {
        D3D12_HIT_KIND_TRIANGLE_FRONT_FACE = 0xfe,
        D3D12_HIT_KIND_TRIANGLE_BACK_FACE = 0xff
    } D3D12_HIT_KIND;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0034_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D12Device5;
    typedef struct ID3D12Device5Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12Device5 * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12Device5 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12Device5 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12Device5 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12Device5 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12Device5 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12Device5 * This,
            _In_z_ LPCWSTR Name);
        UINT ( STDMETHODCALLTYPE *GetNodeCount )(
            ID3D12Device5 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandQueue )(
            ID3D12Device5 * This,
            _In_ const D3D12_COMMAND_QUEUE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppCommandQueue);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandAllocator )(
            ID3D12Device5 * This,
            _In_ D3D12_COMMAND_LIST_TYPE type,
            REFIID riid,
            _COM_Outptr_ void **ppCommandAllocator);
        HRESULT ( STDMETHODCALLTYPE *CreateGraphicsPipelineState )(
            ID3D12Device5 * This,
            _In_ const D3D12_GRAPHICS_PIPELINE_STATE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *CreateComputePipelineState )(
            ID3D12Device5 * This,
            _In_ const D3D12_COMPUTE_PIPELINE_STATE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandList )(
            ID3D12Device5 * This,
            _In_ UINT nodeMask,
            _In_ D3D12_COMMAND_LIST_TYPE type,
            _In_ ID3D12CommandAllocator *pCommandAllocator,
            _In_opt_ ID3D12PipelineState *pInitialState,
            REFIID riid,
            _COM_Outptr_ void **ppCommandList);
        HRESULT ( STDMETHODCALLTYPE *CheckFeatureSupport )(
            ID3D12Device5 * This,
            D3D12_FEATURE Feature,
            _Inout_updates_bytes_(FeatureSupportDataSize) void *pFeatureSupportData,
            UINT FeatureSupportDataSize);
        HRESULT ( STDMETHODCALLTYPE *CreateDescriptorHeap )(
            ID3D12Device5 * This,
            _In_ const D3D12_DESCRIPTOR_HEAP_DESC *pDescriptorHeapDesc,
            REFIID riid,
            _COM_Outptr_ void **ppvHeap);
        UINT ( STDMETHODCALLTYPE *GetDescriptorHandleIncrementSize )(
            ID3D12Device5 * This,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType);
        HRESULT ( STDMETHODCALLTYPE *CreateRootSignature )(
            ID3D12Device5 * This,
            _In_ UINT nodeMask,
            _In_reads_(blobLengthInBytes) const void *pBlobWithRootSignature,
            _In_ SIZE_T blobLengthInBytes,
            REFIID riid,
            _COM_Outptr_ void **ppvRootSignature);
        void ( STDMETHODCALLTYPE *CreateConstantBufferView )(
            ID3D12Device5 * This,
            _In_opt_ const D3D12_CONSTANT_BUFFER_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateShaderResourceView )(
            ID3D12Device5 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_SHADER_RESOURCE_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateUnorderedAccessView )(
            ID3D12Device5 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ ID3D12Resource *pCounterResource,
            _In_opt_ const D3D12_UNORDERED_ACCESS_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateRenderTargetView )(
            ID3D12Device5 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_RENDER_TARGET_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateDepthStencilView )(
            ID3D12Device5 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_DEPTH_STENCIL_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateSampler )(
            ID3D12Device5 * This,
            _In_ const D3D12_SAMPLER_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CopyDescriptors )(
            ID3D12Device5 * This,
            _In_ UINT NumDestDescriptorRanges,
            _In_reads_(NumDestDescriptorRanges) const D3D12_CPU_DESCRIPTOR_HANDLE *pDestDescriptorRangeStarts,
            _In_reads_opt_(NumDestDescriptorRanges) const UINT *pDestDescriptorRangeSizes,
            _In_ UINT NumSrcDescriptorRanges,
            _In_reads_(NumSrcDescriptorRanges) const D3D12_CPU_DESCRIPTOR_HANDLE *pSrcDescriptorRangeStarts,
            _In_reads_opt_(NumSrcDescriptorRanges) const UINT *pSrcDescriptorRangeSizes,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
        void ( STDMETHODCALLTYPE *CopyDescriptorsSimple )(
            ID3D12Device5 * This,
            _In_ UINT NumDescriptors,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
        D3D12_RESOURCE_ALLOCATION_INFO ( STDMETHODCALLTYPE *GetResourceAllocationInfo )(
            ID3D12Device5 * This,
            _In_ UINT visibleMask,
            _In_ UINT numResourceDescs,
            _In_reads_(numResourceDescs) const D3D12_RESOURCE_DESC *pResourceDescs);
        D3D12_HEAP_PROPERTIES ( STDMETHODCALLTYPE *GetCustomHeapProperties )(
            ID3D12Device5 * This,
            _In_ UINT nodeMask,
            D3D12_HEAP_TYPE heapType);
        HRESULT ( STDMETHODCALLTYPE *CreateCommittedResource )(
            ID3D12Device5 * This,
            _In_ const D3D12_HEAP_PROPERTIES *pHeapProperties,
            D3D12_HEAP_FLAGS HeapFlags,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialResourceState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riidResource,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateHeap )(
            ID3D12Device5 * This,
            _In_ const D3D12_HEAP_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *CreatePlacedResource )(
            ID3D12Device5 * This,
            _In_ ID3D12Heap *pHeap,
            UINT64 HeapOffset,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateReservedResource )(
            ID3D12Device5 * This,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateSharedHandle )(
            ID3D12Device5 * This,
            _In_ ID3D12DeviceChild *pObject,
            _In_opt_ const SECURITY_ATTRIBUTES *pAttributes,
            DWORD Access,
            _In_opt_ LPCWSTR Name,
            _Out_ HANDLE *pHandle);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedHandle )(
            ID3D12Device5 * This,
            _In_ HANDLE NTHandle,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvObj);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedHandleByName )(
            ID3D12Device5 * This,
            _In_ LPCWSTR Name,
            DWORD Access,
            _Out_ HANDLE *pNTHandle);
        HRESULT ( STDMETHODCALLTYPE *MakeResident )(
            ID3D12Device5 * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects);
        HRESULT ( STDMETHODCALLTYPE *Evict )(
            ID3D12Device5 * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects);
        HRESULT ( STDMETHODCALLTYPE *CreateFence )(
            ID3D12Device5 * This,
            UINT64 InitialValue,
            D3D12_FENCE_FLAGS Flags,
            REFIID riid,
            _COM_Outptr_ void **ppFence);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceRemovedReason )(
            ID3D12Device5 * This);
        void ( STDMETHODCALLTYPE *GetCopyableFootprints )(
            ID3D12Device5 * This,
            _In_ const D3D12_RESOURCE_DESC *pResourceDesc,
            _In_range_(0,D3D12_REQ_SUBRESOURCES) UINT FirstSubresource,
            _In_range_(0,D3D12_REQ_SUBRESOURCES-FirstSubresource) UINT NumSubresources,
            UINT64 BaseOffset,
            _Out_writes_opt_(NumSubresources) D3D12_PLACED_SUBRESOURCE_FOOTPRINT *pLayouts,
            _Out_writes_opt_(NumSubresources) UINT *pNumRows,
            _Out_writes_opt_(NumSubresources) UINT64 *pRowSizeInBytes,
            _Out_opt_ UINT64 *pTotalBytes);
        HRESULT ( STDMETHODCALLTYPE *CreateQueryHeap )(
            ID3D12Device5 * This,
            _In_ const D3D12_QUERY_HEAP_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *SetStablePowerState )(
            ID3D12Device5 * This,
            BOOL Enable);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandSignature )(
            ID3D12Device5 * This,
            _In_ const D3D12_COMMAND_SIGNATURE_DESC *pDesc,
            _In_opt_ ID3D12RootSignature *pRootSignature,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvCommandSignature);
        void ( STDMETHODCALLTYPE *GetResourceTiling )(
            ID3D12Device5 * This,
            _In_ ID3D12Resource *pTiledResource,
            _Out_opt_ UINT *pNumTilesForEntireResource,
            _Out_opt_ D3D12_PACKED_MIP_INFO *pPackedMipDesc,
            _Out_opt_ D3D12_TILE_SHAPE *pStandardTileShapeForNonPackedMips,
            _Inout_opt_ UINT *pNumSubresourceTilings,
            _In_ UINT FirstSubresourceTilingToGet,
            _Out_writes_(*pNumSubresourceTilings) D3D12_SUBRESOURCE_TILING *pSubresourceTilingsForNonPackedMips);
        LUID ( STDMETHODCALLTYPE *GetAdapterLuid )(
            ID3D12Device5 * This);
        HRESULT ( STDMETHODCALLTYPE *CreatePipelineLibrary )(
            ID3D12Device5 * This,
            _In_reads_(BlobLength) const void *pLibraryBlob,
            SIZE_T BlobLength,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineLibrary);
        HRESULT ( STDMETHODCALLTYPE *SetEventOnMultipleFenceCompletion )(
            ID3D12Device5 * This,
            _In_reads_(NumFences) ID3D12Fence *const *ppFences,
            _In_reads_(NumFences) const UINT64 *pFenceValues,
            UINT NumFences,
            D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags,
            HANDLE hEvent);
        HRESULT ( STDMETHODCALLTYPE *SetResidencyPriority )(
            ID3D12Device5 * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects,
            _In_reads_(NumObjects) const D3D12_RESIDENCY_PRIORITY *pPriorities);
        HRESULT ( STDMETHODCALLTYPE *CreatePipelineState )(
            ID3D12Device5 * This,
            const D3D12_PIPELINE_STATE_STREAM_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *OpenExistingHeapFromAddress )(
            ID3D12Device5 * This,
            _In_ const void *pAddress,
            REFIID riid,
            _COM_Outptr_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *OpenExistingHeapFromFileMapping )(
            ID3D12Device5 * This,
            _In_ HANDLE hFileMapping,
            REFIID riid,
            _COM_Outptr_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *EnqueueMakeResident )(
            ID3D12Device5 * This,
            D3D12_RESIDENCY_FLAGS Flags,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects,
            _In_ ID3D12Fence *pFenceToSignal,
            UINT64 FenceValueToSignal);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandList1 )(
            ID3D12Device5 * This,
            _In_ UINT nodeMask,
            _In_ D3D12_COMMAND_LIST_TYPE type,
            _In_ D3D12_COMMAND_LIST_FLAGS flags,
            REFIID riid,
            _COM_Outptr_ void **ppCommandList);
        HRESULT ( STDMETHODCALLTYPE *CreateProtectedResourceSession )(
            ID3D12Device5 * This,
            _In_ const D3D12_PROTECTED_RESOURCE_SESSION_DESC *pDesc,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppSession);
        HRESULT ( STDMETHODCALLTYPE *CreateCommittedResource1 )(
            ID3D12Device5 * This,
            _In_ const D3D12_HEAP_PROPERTIES *pHeapProperties,
            D3D12_HEAP_FLAGS HeapFlags,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialResourceState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            _In_opt_ ID3D12ProtectedResourceSession *pProtectedSession,
            REFIID riidResource,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateHeap1 )(
            ID3D12Device5 * This,
            _In_ const D3D12_HEAP_DESC *pDesc,
            _In_opt_ ID3D12ProtectedResourceSession *pProtectedSession,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *CreateReservedResource1 )(
            ID3D12Device5 * This,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            _In_opt_ ID3D12ProtectedResourceSession *pProtectedSession,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvResource);
        D3D12_RESOURCE_ALLOCATION_INFO ( STDMETHODCALLTYPE *GetResourceAllocationInfo1 )(
            ID3D12Device5 * This,
            UINT visibleMask,
            UINT numResourceDescs,
            _In_reads_(numResourceDescs) const D3D12_RESOURCE_DESC *pResourceDescs,
            _Out_writes_opt_(numResourceDescs) D3D12_RESOURCE_ALLOCATION_INFO1 *pResourceAllocationInfo1);
        HRESULT ( STDMETHODCALLTYPE *CreateLifetimeTracker )(
            ID3D12Device5 * This,
            _In_ ID3D12LifetimeOwner *pOwner,
            REFIID riid,
            _COM_Outptr_ void **ppvTracker);
        void ( STDMETHODCALLTYPE *RemoveDevice )(
            ID3D12Device5 * This);
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetaCommands )(
            ID3D12Device5 * This,
            _Inout_ UINT *pNumMetaCommands,
            _Out_writes_opt_(*pNumMetaCommands) D3D12_META_COMMAND_DESC *pDescs);
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetaCommandParameters )(
            ID3D12Device5 * This,
            _In_ REFGUID CommandId,
            _In_ D3D12_META_COMMAND_PARAMETER_STAGE Stage,
            _Out_opt_ UINT *pTotalStructureSizeInBytes,
            _Inout_ UINT *pParameterCount,
            _Out_writes_opt_(*pParameterCount) D3D12_META_COMMAND_PARAMETER_DESC *pParameterDescs);
        HRESULT ( STDMETHODCALLTYPE *CreateMetaCommand )(
            ID3D12Device5 * This,
            _In_ REFGUID CommandId,
            _In_ UINT NodeMask,
            _In_reads_bytes_opt_(CreationParametersDataSizeInBytes) const void *pCreationParametersData,
            _In_ SIZE_T CreationParametersDataSizeInBytes,
            REFIID riid,
            _COM_Outptr_ void **ppMetaCommand);
        HRESULT ( STDMETHODCALLTYPE *CreateStateObject )(
            ID3D12Device5 * This,
            const D3D12_STATE_OBJECT_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppStateObject);
        void ( STDMETHODCALLTYPE *GetRaytracingAccelerationStructurePrebuildInfo )(
            ID3D12Device5 * This,
            _In_ const D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS *pDesc,
            _Out_ D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO *pInfo);
        D3D12_DRIVER_MATCHING_IDENTIFIER_STATUS ( STDMETHODCALLTYPE *CheckDriverMatchingIdentifier )(
            ID3D12Device5 * This,
            _In_ D3D12_SERIALIZED_DATA_TYPE SerializedDataType,
            _In_ const D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER *pIdentifierToCheck);
        END_INTERFACE
    } ID3D12Device5Vtbl;
    interface ID3D12Device5
    {
        CONST_VTBL struct ID3D12Device5Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetNodeCount(This) )
    ( (This)->lpVtbl -> CreateCommandQueue(This,pDesc,riid,ppCommandQueue) )
    ( (This)->lpVtbl -> CreateCommandAllocator(This,type,riid,ppCommandAllocator) )
    ( (This)->lpVtbl -> CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> CreateComputePipelineState(This,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) )
    ( (This)->lpVtbl -> CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) )
    ( (This)->lpVtbl -> CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> GetDescriptorHandleIncrementSize(This,DescriptorHeapType) )
    ( (This)->lpVtbl -> CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) )
    ( (This)->lpVtbl -> CreateConstantBufferView(This,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateRenderTargetView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateDepthStencilView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateSampler(This,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) )
    ( (This)->lpVtbl -> CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) )
    ( (This)->lpVtbl -> GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs) )
    ( (This)->lpVtbl -> GetCustomHeapProperties(This,nodeMask,heapType) )
    ( (This)->lpVtbl -> CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) )
    ( (This)->lpVtbl -> CreateHeap(This,pDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) )
    ( (This)->lpVtbl -> CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) )
    ( (This)->lpVtbl -> CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle) )
    ( (This)->lpVtbl -> OpenSharedHandle(This,NTHandle,riid,ppvObj) )
    ( (This)->lpVtbl -> OpenSharedHandleByName(This,Name,Access,pNTHandle) )
    ( (This)->lpVtbl -> MakeResident(This,NumObjects,ppObjects) )
    ( (This)->lpVtbl -> Evict(This,NumObjects,ppObjects) )
    ( (This)->lpVtbl -> CreateFence(This,InitialValue,Flags,riid,ppFence) )
    ( (This)->lpVtbl -> GetDeviceRemovedReason(This) )
    ( (This)->lpVtbl -> GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) )
    ( (This)->lpVtbl -> CreateQueryHeap(This,pDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> SetStablePowerState(This,Enable) )
    ( (This)->lpVtbl -> CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature) )
    ( (This)->lpVtbl -> GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) )
    ( (This)->lpVtbl -> GetAdapterLuid(This) )
    ( (This)->lpVtbl -> CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary) )
    ( (This)->lpVtbl -> SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent) )
    ( (This)->lpVtbl -> SetResidencyPriority(This,NumObjects,ppObjects,pPriorities) )
    ( (This)->lpVtbl -> CreatePipelineState(This,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap) )
    ( (This)->lpVtbl -> OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap) )
    ( (This)->lpVtbl -> EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal) )
    ( (This)->lpVtbl -> CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList) )
    ( (This)->lpVtbl -> CreateProtectedResourceSession(This,pDesc,riid,ppSession) )
    ( (This)->lpVtbl -> CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource) )
    ( (This)->lpVtbl -> CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap) )
    ( (This)->lpVtbl -> CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource) )
    ( (This)->lpVtbl -> GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) )
    ( (This)->lpVtbl -> CreateLifetimeTracker(This,pOwner,riid,ppvTracker) )
    ( (This)->lpVtbl -> RemoveDevice(This) )
    ( (This)->lpVtbl -> EnumerateMetaCommands(This,pNumMetaCommands,pDescs) )
    ( (This)->lpVtbl -> EnumerateMetaCommandParameters(This,CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs) )
    ( (This)->lpVtbl -> CreateMetaCommand(This,CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand) )
    ( (This)->lpVtbl -> CreateStateObject(This,pDesc,riid,ppStateObject) )
    ( (This)->lpVtbl -> GetRaytracingAccelerationStructurePrebuildInfo(This,pDesc,pInfo) )
    ( (This)->lpVtbl -> CheckDriverMatchingIdentifier(This,SerializedDataType,pIdentifierToCheck) )
typedef
enum D3D12_AUTO_BREADCRUMB_OP
    {
        D3D12_AUTO_BREADCRUMB_OP_SETMARKER = 0,
        D3D12_AUTO_BREADCRUMB_OP_BEGINEVENT = 1,
        D3D12_AUTO_BREADCRUMB_OP_ENDEVENT = 2,
        D3D12_AUTO_BREADCRUMB_OP_DRAWINSTANCED = 3,
        D3D12_AUTO_BREADCRUMB_OP_DRAWINDEXEDINSTANCED = 4,
        D3D12_AUTO_BREADCRUMB_OP_EXECUTEINDIRECT = 5,
        D3D12_AUTO_BREADCRUMB_OP_DISPATCH = 6,
        D3D12_AUTO_BREADCRUMB_OP_COPYBUFFERREGION = 7,
        D3D12_AUTO_BREADCRUMB_OP_COPYTEXTUREREGION = 8,
        D3D12_AUTO_BREADCRUMB_OP_COPYRESOURCE = 9,
        D3D12_AUTO_BREADCRUMB_OP_COPYTILES = 10,
        D3D12_AUTO_BREADCRUMB_OP_RESOLVESUBRESOURCE = 11,
        D3D12_AUTO_BREADCRUMB_OP_CLEARRENDERTARGETVIEW = 12,
        D3D12_AUTO_BREADCRUMB_OP_CLEARUNORDEREDACCESSVIEW = 13,
        D3D12_AUTO_BREADCRUMB_OP_CLEARDEPTHSTENCILVIEW = 14,
        D3D12_AUTO_BREADCRUMB_OP_RESOURCEBARRIER = 15,
        D3D12_AUTO_BREADCRUMB_OP_EXECUTEBUNDLE = 16,
        D3D12_AUTO_BREADCRUMB_OP_PRESENT = 17,
        D3D12_AUTO_BREADCRUMB_OP_RESOLVEQUERYDATA = 18,
        D3D12_AUTO_BREADCRUMB_OP_BEGINSUBMISSION = 19,
        D3D12_AUTO_BREADCRUMB_OP_ENDSUBMISSION = 20,
        D3D12_AUTO_BREADCRUMB_OP_DECODEFRAME = 21,
        D3D12_AUTO_BREADCRUMB_OP_PROCESSFRAMES = 22,
        D3D12_AUTO_BREADCRUMB_OP_ATOMICCOPYBUFFERUINT = 23,
        D3D12_AUTO_BREADCRUMB_OP_ATOMICCOPYBUFFERUINT64 = 24,
        D3D12_AUTO_BREADCRUMB_OP_RESOLVESUBRESOURCEREGION = 25,
        D3D12_AUTO_BREADCRUMB_OP_WRITEBUFFERIMMEDIATE = 26,
        D3D12_AUTO_BREADCRUMB_OP_DECODEFRAME1 = 27,
        D3D12_AUTO_BREADCRUMB_OP_SETPROTECTEDRESOURCESESSION = 28,
        D3D12_AUTO_BREADCRUMB_OP_DECODEFRAME2 = 29,
        D3D12_AUTO_BREADCRUMB_OP_PROCESSFRAMES1 = 30,
        D3D12_AUTO_BREADCRUMB_OP_BUILDRAYTRACINGACCELERATIONSTRUCTURE = 31,
        D3D12_AUTO_BREADCRUMB_OP_EMITRAYTRACINGACCELERATIONSTRUCTUREPOSTBUILDINFO = 32,
        D3D12_AUTO_BREADCRUMB_OP_COPYRAYTRACINGACCELERATIONSTRUCTURE = 33,
        D3D12_AUTO_BREADCRUMB_OP_DISPATCHRAYS = 34,
        D3D12_AUTO_BREADCRUMB_OP_INITIALIZEMETACOMMAND = 35,
        D3D12_AUTO_BREADCRUMB_OP_EXECUTEMETACOMMAND = 36,
        D3D12_AUTO_BREADCRUMB_OP_ESTIMATEMOTION = 37,
        D3D12_AUTO_BREADCRUMB_OP_RESOLVEMOTIONVECTORHEAP = 38,
        D3D12_AUTO_BREADCRUMB_OP_SETPIPELINESTATE1 = 39,
        D3D12_AUTO_BREADCRUMB_OP_INITIALIZEEXTENSIONCOMMAND = 40,
        D3D12_AUTO_BREADCRUMB_OP_EXECUTEEXTENSIONCOMMAND = 41
    } D3D12_AUTO_BREADCRUMB_OP;
typedef struct D3D12_AUTO_BREADCRUMB_NODE
    {
    const char *pCommandListDebugNameA;
    const wchar_t *pCommandListDebugNameW;
    const char *pCommandQueueDebugNameA;
    const wchar_t *pCommandQueueDebugNameW;
    ID3D12GraphicsCommandList *pCommandList;
    ID3D12CommandQueue *pCommandQueue;
    UINT32 BreadcrumbCount;
    const UINT32 *pLastBreadcrumbValue;
    const D3D12_AUTO_BREADCRUMB_OP *pCommandHistory;
    const struct D3D12_AUTO_BREADCRUMB_NODE *pNext;
    } D3D12_AUTO_BREADCRUMB_NODE;
typedef
enum D3D12_DRED_VERSION
    {
        D3D12_DRED_VERSION_1_0 = 0x1,
        D3D12_DRED_VERSION_1_1 = 0x2
    } D3D12_DRED_VERSION;
typedef
enum D3D12_DRED_FLAGS
    {
        D3D12_DRED_FLAG_NONE = 0,
        D3D12_DRED_FLAG_FORCE_ENABLE = 1,
        D3D12_DRED_FLAG_DISABLE_AUTOBREADCRUMBS = 2
    } D3D12_DRED_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_DRED_FLAGS );
typedef
enum D3D12_DRED_ENABLEMENT
    {
        D3D12_DRED_ENABLEMENT_SYSTEM_CONTROLLED = 0,
        D3D12_DRED_ENABLEMENT_FORCED_OFF = 1,
        D3D12_DRED_ENABLEMENT_FORCED_ON = 2
    } D3D12_DRED_ENABLEMENT;
typedef struct D3D12_DEVICE_REMOVED_EXTENDED_DATA
    {
    _In_ D3D12_DRED_FLAGS Flags;
    _Out_ D3D12_AUTO_BREADCRUMB_NODE *pHeadAutoBreadcrumbNode;
    } D3D12_DEVICE_REMOVED_EXTENDED_DATA;
typedef
enum D3D12_DRED_ALLOCATION_TYPE
    {
        D3D12_DRED_ALLOCATION_TYPE_COMMAND_QUEUE = 19,
        D3D12_DRED_ALLOCATION_TYPE_COMMAND_ALLOCATOR = 20,
        D3D12_DRED_ALLOCATION_TYPE_PIPELINE_STATE = 21,
        D3D12_DRED_ALLOCATION_TYPE_COMMAND_LIST = 22,
        D3D12_DRED_ALLOCATION_TYPE_FENCE = 23,
        D3D12_DRED_ALLOCATION_TYPE_DESCRIPTOR_HEAP = 24,
        D3D12_DRED_ALLOCATION_TYPE_HEAP = 25,
        D3D12_DRED_ALLOCATION_TYPE_QUERY_HEAP = 27,
        D3D12_DRED_ALLOCATION_TYPE_COMMAND_SIGNATURE = 28,
        D3D12_DRED_ALLOCATION_TYPE_PIPELINE_LIBRARY = 29,
        D3D12_DRED_ALLOCATION_TYPE_VIDEO_DECODER = 30,
        D3D12_DRED_ALLOCATION_TYPE_VIDEO_PROCESSOR = 32,
        D3D12_DRED_ALLOCATION_TYPE_RESOURCE = 34,
        D3D12_DRED_ALLOCATION_TYPE_PASS = 35,
        D3D12_DRED_ALLOCATION_TYPE_CRYPTOSESSION = 36,
        D3D12_DRED_ALLOCATION_TYPE_CRYPTOSESSIONPOLICY = 37,
        D3D12_DRED_ALLOCATION_TYPE_PROTECTEDRESOURCESESSION = 38,
        D3D12_DRED_ALLOCATION_TYPE_VIDEO_DECODER_HEAP = 39,
        D3D12_DRED_ALLOCATION_TYPE_COMMAND_POOL = 40,
        D3D12_DRED_ALLOCATION_TYPE_COMMAND_RECORDER = 41,
        D3D12_DRED_ALLOCATION_TYPE_STATE_OBJECT = 42,
        D3D12_DRED_ALLOCATION_TYPE_METACOMMAND = 43,
        D3D12_DRED_ALLOCATION_TYPE_SCHEDULINGGROUP = 44,
        D3D12_DRED_ALLOCATION_TYPE_VIDEO_MOTION_ESTIMATOR = 45,
        D3D12_DRED_ALLOCATION_TYPE_VIDEO_MOTION_VECTOR_HEAP = 46,
        D3D12_DRED_ALLOCATION_TYPE_VIDEO_EXTENSION_COMMAND = 47,
        D3D12_DRED_ALLOCATION_TYPE_INVALID = 0xffffffff
    } D3D12_DRED_ALLOCATION_TYPE;
typedef struct D3D12_DRED_ALLOCATION_NODE
    {
    const char *ObjectNameA;
    const wchar_t *ObjectNameW;
    D3D12_DRED_ALLOCATION_TYPE AllocationType;
    const struct D3D12_DRED_ALLOCATION_NODE *pNext;
    } D3D12_DRED_ALLOCATION_NODE;
typedef struct D3D12_DRED_AUTO_BREADCRUMBS_OUTPUT
    {
    _Out_ const D3D12_AUTO_BREADCRUMB_NODE *pHeadAutoBreadcrumbNode;
    } D3D12_DRED_AUTO_BREADCRUMBS_OUTPUT;
typedef struct D3D12_DRED_PAGE_FAULT_OUTPUT
    {
    D3D12_GPU_VIRTUAL_ADDRESS PageFaultVA;
    _Out_ const D3D12_DRED_ALLOCATION_NODE *pHeadExistingAllocationNode;
    _Out_ const D3D12_DRED_ALLOCATION_NODE *pHeadRecentFreedAllocationNode;
    } D3D12_DRED_PAGE_FAULT_OUTPUT;
typedef struct D3D12_DEVICE_REMOVED_EXTENDED_DATA1
    {
    HRESULT DeviceRemovedReason;
    D3D12_DRED_AUTO_BREADCRUMBS_OUTPUT AutoBreadcrumbsOutput;
    D3D12_DRED_PAGE_FAULT_OUTPUT PageFaultOutput;
    } D3D12_DEVICE_REMOVED_EXTENDED_DATA1;
typedef struct D3D12_VERSIONED_DEVICE_REMOVED_EXTENDED_DATA
    {
    D3D12_DRED_VERSION Version;
    union
        {
        D3D12_DEVICE_REMOVED_EXTENDED_DATA Dred_1_0;
        D3D12_DEVICE_REMOVED_EXTENDED_DATA1 Dred_1_1;
        } ;
    } D3D12_VERSIONED_DEVICE_REMOVED_EXTENDED_DATA;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0035_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D12DeviceRemovedExtendedDataSettings;
    typedef struct ID3D12DeviceRemovedExtendedDataSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12DeviceRemovedExtendedDataSettings * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12DeviceRemovedExtendedDataSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12DeviceRemovedExtendedDataSettings * This);
        void ( STDMETHODCALLTYPE *SetAutoBreadcrumbsEnablement )(
            ID3D12DeviceRemovedExtendedDataSettings * This,
            D3D12_DRED_ENABLEMENT __MIDL__ID3D12DeviceRemovedExtendedDataSettings0000);
        void ( STDMETHODCALLTYPE *SetPageFaultEnablement )(
            ID3D12DeviceRemovedExtendedDataSettings * This,
            D3D12_DRED_ENABLEMENT __MIDL__ID3D12DeviceRemovedExtendedDataSettings0001);
        void ( STDMETHODCALLTYPE *SetWatsonDumpEnablement )(
            ID3D12DeviceRemovedExtendedDataSettings * This,
            D3D12_DRED_ENABLEMENT __MIDL__ID3D12DeviceRemovedExtendedDataSettings0002);
        END_INTERFACE
    } ID3D12DeviceRemovedExtendedDataSettingsVtbl;
    interface ID3D12DeviceRemovedExtendedDataSettings
    {
        CONST_VTBL struct ID3D12DeviceRemovedExtendedDataSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAutoBreadcrumbsEnablement(This,__MIDL__ID3D12DeviceRemovedExtendedDataSettings0000) )
    ( (This)->lpVtbl -> SetPageFaultEnablement(This,__MIDL__ID3D12DeviceRemovedExtendedDataSettings0001) )
    ( (This)->lpVtbl -> SetWatsonDumpEnablement(This,__MIDL__ID3D12DeviceRemovedExtendedDataSettings0002) )
EXTERN_C const IID IID_ID3D12DeviceRemovedExtendedData;
    typedef struct ID3D12DeviceRemovedExtendedDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12DeviceRemovedExtendedData * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12DeviceRemovedExtendedData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12DeviceRemovedExtendedData * This);
        HRESULT ( STDMETHODCALLTYPE *GetAutoBreadcrumbsOutput )(
            ID3D12DeviceRemovedExtendedData * This,
            D3D12_DRED_AUTO_BREADCRUMBS_OUTPUT *pOutput);
        HRESULT ( STDMETHODCALLTYPE *GetPageFaultAllocationOutput )(
            ID3D12DeviceRemovedExtendedData * This,
            D3D12_DRED_PAGE_FAULT_OUTPUT *pOutput);
        END_INTERFACE
    } ID3D12DeviceRemovedExtendedDataVtbl;
    interface ID3D12DeviceRemovedExtendedData
    {
        CONST_VTBL struct ID3D12DeviceRemovedExtendedDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAutoBreadcrumbsOutput(This,pOutput) )
    ( (This)->lpVtbl -> GetPageFaultAllocationOutput(This,pOutput) )
typedef
enum D3D12_BACKGROUND_PROCESSING_MODE
    {
        D3D12_BACKGROUND_PROCESSING_MODE_ALLOWED = 0,
        D3D12_BACKGROUND_PROCESSING_MODE_ALLOW_INTRUSIVE_MEASUREMENTS = ( D3D12_BACKGROUND_PROCESSING_MODE_ALLOWED + 1 ) ,
        D3D12_BACKGROUND_PROCESSING_MODE_DISABLE_BACKGROUND_WORK = ( D3D12_BACKGROUND_PROCESSING_MODE_ALLOW_INTRUSIVE_MEASUREMENTS + 1 ) ,
        D3D12_BACKGROUND_PROCESSING_MODE_DISABLE_PROFILING_BY_SYSTEM = ( D3D12_BACKGROUND_PROCESSING_MODE_DISABLE_BACKGROUND_WORK + 1 )
    } D3D12_BACKGROUND_PROCESSING_MODE;
typedef
enum D3D12_MEASUREMENTS_ACTION
    {
        D3D12_MEASUREMENTS_ACTION_KEEP_ALL = 0,
        D3D12_MEASUREMENTS_ACTION_COMMIT_RESULTS = ( D3D12_MEASUREMENTS_ACTION_KEEP_ALL + 1 ) ,
        D3D12_MEASUREMENTS_ACTION_COMMIT_RESULTS_HIGH_PRIORITY = ( D3D12_MEASUREMENTS_ACTION_COMMIT_RESULTS + 1 ) ,
        D3D12_MEASUREMENTS_ACTION_DISCARD_PREVIOUS = ( D3D12_MEASUREMENTS_ACTION_COMMIT_RESULTS_HIGH_PRIORITY + 1 )
    } D3D12_MEASUREMENTS_ACTION;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0037_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D12Device6;
    typedef struct ID3D12Device6Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12Device6 * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12Device6 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12Device6 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12Device6 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12Device6 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12Device6 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12Device6 * This,
            _In_z_ LPCWSTR Name);
        UINT ( STDMETHODCALLTYPE *GetNodeCount )(
            ID3D12Device6 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandQueue )(
            ID3D12Device6 * This,
            _In_ const D3D12_COMMAND_QUEUE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppCommandQueue);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandAllocator )(
            ID3D12Device6 * This,
            _In_ D3D12_COMMAND_LIST_TYPE type,
            REFIID riid,
            _COM_Outptr_ void **ppCommandAllocator);
        HRESULT ( STDMETHODCALLTYPE *CreateGraphicsPipelineState )(
            ID3D12Device6 * This,
            _In_ const D3D12_GRAPHICS_PIPELINE_STATE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *CreateComputePipelineState )(
            ID3D12Device6 * This,
            _In_ const D3D12_COMPUTE_PIPELINE_STATE_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandList )(
            ID3D12Device6 * This,
            _In_ UINT nodeMask,
            _In_ D3D12_COMMAND_LIST_TYPE type,
            _In_ ID3D12CommandAllocator *pCommandAllocator,
            _In_opt_ ID3D12PipelineState *pInitialState,
            REFIID riid,
            _COM_Outptr_ void **ppCommandList);
        HRESULT ( STDMETHODCALLTYPE *CheckFeatureSupport )(
            ID3D12Device6 * This,
            D3D12_FEATURE Feature,
            _Inout_updates_bytes_(FeatureSupportDataSize) void *pFeatureSupportData,
            UINT FeatureSupportDataSize);
        HRESULT ( STDMETHODCALLTYPE *CreateDescriptorHeap )(
            ID3D12Device6 * This,
            _In_ const D3D12_DESCRIPTOR_HEAP_DESC *pDescriptorHeapDesc,
            REFIID riid,
            _COM_Outptr_ void **ppvHeap);
        UINT ( STDMETHODCALLTYPE *GetDescriptorHandleIncrementSize )(
            ID3D12Device6 * This,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType);
        HRESULT ( STDMETHODCALLTYPE *CreateRootSignature )(
            ID3D12Device6 * This,
            _In_ UINT nodeMask,
            _In_reads_(blobLengthInBytes) const void *pBlobWithRootSignature,
            _In_ SIZE_T blobLengthInBytes,
            REFIID riid,
            _COM_Outptr_ void **ppvRootSignature);
        void ( STDMETHODCALLTYPE *CreateConstantBufferView )(
            ID3D12Device6 * This,
            _In_opt_ const D3D12_CONSTANT_BUFFER_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateShaderResourceView )(
            ID3D12Device6 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_SHADER_RESOURCE_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateUnorderedAccessView )(
            ID3D12Device6 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ ID3D12Resource *pCounterResource,
            _In_opt_ const D3D12_UNORDERED_ACCESS_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateRenderTargetView )(
            ID3D12Device6 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_RENDER_TARGET_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateDepthStencilView )(
            ID3D12Device6 * This,
            _In_opt_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_DEPTH_STENCIL_VIEW_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CreateSampler )(
            ID3D12Device6 * This,
            _In_ const D3D12_SAMPLER_DESC *pDesc,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
        void ( STDMETHODCALLTYPE *CopyDescriptors )(
            ID3D12Device6 * This,
            _In_ UINT NumDestDescriptorRanges,
            _In_reads_(NumDestDescriptorRanges) const D3D12_CPU_DESCRIPTOR_HANDLE *pDestDescriptorRangeStarts,
            _In_reads_opt_(NumDestDescriptorRanges) const UINT *pDestDescriptorRangeSizes,
            _In_ UINT NumSrcDescriptorRanges,
            _In_reads_(NumSrcDescriptorRanges) const D3D12_CPU_DESCRIPTOR_HANDLE *pSrcDescriptorRangeStarts,
            _In_reads_opt_(NumSrcDescriptorRanges) const UINT *pSrcDescriptorRangeSizes,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
        void ( STDMETHODCALLTYPE *CopyDescriptorsSimple )(
            ID3D12Device6 * This,
            _In_ UINT NumDescriptors,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart,
            _In_ D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
        D3D12_RESOURCE_ALLOCATION_INFO ( STDMETHODCALLTYPE *GetResourceAllocationInfo )(
            ID3D12Device6 * This,
            _In_ UINT visibleMask,
            _In_ UINT numResourceDescs,
            _In_reads_(numResourceDescs) const D3D12_RESOURCE_DESC *pResourceDescs);
        D3D12_HEAP_PROPERTIES ( STDMETHODCALLTYPE *GetCustomHeapProperties )(
            ID3D12Device6 * This,
            _In_ UINT nodeMask,
            D3D12_HEAP_TYPE heapType);
        HRESULT ( STDMETHODCALLTYPE *CreateCommittedResource )(
            ID3D12Device6 * This,
            _In_ const D3D12_HEAP_PROPERTIES *pHeapProperties,
            D3D12_HEAP_FLAGS HeapFlags,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialResourceState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riidResource,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateHeap )(
            ID3D12Device6 * This,
            _In_ const D3D12_HEAP_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *CreatePlacedResource )(
            ID3D12Device6 * This,
            _In_ ID3D12Heap *pHeap,
            UINT64 HeapOffset,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateReservedResource )(
            ID3D12Device6 * This,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateSharedHandle )(
            ID3D12Device6 * This,
            _In_ ID3D12DeviceChild *pObject,
            _In_opt_ const SECURITY_ATTRIBUTES *pAttributes,
            DWORD Access,
            _In_opt_ LPCWSTR Name,
            _Out_ HANDLE *pHandle);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedHandle )(
            ID3D12Device6 * This,
            _In_ HANDLE NTHandle,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvObj);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedHandleByName )(
            ID3D12Device6 * This,
            _In_ LPCWSTR Name,
            DWORD Access,
            _Out_ HANDLE *pNTHandle);
        HRESULT ( STDMETHODCALLTYPE *MakeResident )(
            ID3D12Device6 * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects);
        HRESULT ( STDMETHODCALLTYPE *Evict )(
            ID3D12Device6 * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects);
        HRESULT ( STDMETHODCALLTYPE *CreateFence )(
            ID3D12Device6 * This,
            UINT64 InitialValue,
            D3D12_FENCE_FLAGS Flags,
            REFIID riid,
            _COM_Outptr_ void **ppFence);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceRemovedReason )(
            ID3D12Device6 * This);
        void ( STDMETHODCALLTYPE *GetCopyableFootprints )(
            ID3D12Device6 * This,
            _In_ const D3D12_RESOURCE_DESC *pResourceDesc,
            _In_range_(0,D3D12_REQ_SUBRESOURCES) UINT FirstSubresource,
            _In_range_(0,D3D12_REQ_SUBRESOURCES-FirstSubresource) UINT NumSubresources,
            UINT64 BaseOffset,
            _Out_writes_opt_(NumSubresources) D3D12_PLACED_SUBRESOURCE_FOOTPRINT *pLayouts,
            _Out_writes_opt_(NumSubresources) UINT *pNumRows,
            _Out_writes_opt_(NumSubresources) UINT64 *pRowSizeInBytes,
            _Out_opt_ UINT64 *pTotalBytes);
        HRESULT ( STDMETHODCALLTYPE *CreateQueryHeap )(
            ID3D12Device6 * This,
            _In_ const D3D12_QUERY_HEAP_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *SetStablePowerState )(
            ID3D12Device6 * This,
            BOOL Enable);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandSignature )(
            ID3D12Device6 * This,
            _In_ const D3D12_COMMAND_SIGNATURE_DESC *pDesc,
            _In_opt_ ID3D12RootSignature *pRootSignature,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvCommandSignature);
        void ( STDMETHODCALLTYPE *GetResourceTiling )(
            ID3D12Device6 * This,
            _In_ ID3D12Resource *pTiledResource,
            _Out_opt_ UINT *pNumTilesForEntireResource,
            _Out_opt_ D3D12_PACKED_MIP_INFO *pPackedMipDesc,
            _Out_opt_ D3D12_TILE_SHAPE *pStandardTileShapeForNonPackedMips,
            _Inout_opt_ UINT *pNumSubresourceTilings,
            _In_ UINT FirstSubresourceTilingToGet,
            _Out_writes_(*pNumSubresourceTilings) D3D12_SUBRESOURCE_TILING *pSubresourceTilingsForNonPackedMips);
        LUID ( STDMETHODCALLTYPE *GetAdapterLuid )(
            ID3D12Device6 * This);
        HRESULT ( STDMETHODCALLTYPE *CreatePipelineLibrary )(
            ID3D12Device6 * This,
            _In_reads_(BlobLength) const void *pLibraryBlob,
            SIZE_T BlobLength,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineLibrary);
        HRESULT ( STDMETHODCALLTYPE *SetEventOnMultipleFenceCompletion )(
            ID3D12Device6 * This,
            _In_reads_(NumFences) ID3D12Fence *const *ppFences,
            _In_reads_(NumFences) const UINT64 *pFenceValues,
            UINT NumFences,
            D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags,
            HANDLE hEvent);
        HRESULT ( STDMETHODCALLTYPE *SetResidencyPriority )(
            ID3D12Device6 * This,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects,
            _In_reads_(NumObjects) const D3D12_RESIDENCY_PRIORITY *pPriorities);
        HRESULT ( STDMETHODCALLTYPE *CreatePipelineState )(
            ID3D12Device6 * This,
            const D3D12_PIPELINE_STATE_STREAM_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppPipelineState);
        HRESULT ( STDMETHODCALLTYPE *OpenExistingHeapFromAddress )(
            ID3D12Device6 * This,
            _In_ const void *pAddress,
            REFIID riid,
            _COM_Outptr_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *OpenExistingHeapFromFileMapping )(
            ID3D12Device6 * This,
            _In_ HANDLE hFileMapping,
            REFIID riid,
            _COM_Outptr_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *EnqueueMakeResident )(
            ID3D12Device6 * This,
            D3D12_RESIDENCY_FLAGS Flags,
            UINT NumObjects,
            _In_reads_(NumObjects) ID3D12Pageable *const *ppObjects,
            _In_ ID3D12Fence *pFenceToSignal,
            UINT64 FenceValueToSignal);
        HRESULT ( STDMETHODCALLTYPE *CreateCommandList1 )(
            ID3D12Device6 * This,
            _In_ UINT nodeMask,
            _In_ D3D12_COMMAND_LIST_TYPE type,
            _In_ D3D12_COMMAND_LIST_FLAGS flags,
            REFIID riid,
            _COM_Outptr_ void **ppCommandList);
        HRESULT ( STDMETHODCALLTYPE *CreateProtectedResourceSession )(
            ID3D12Device6 * This,
            _In_ const D3D12_PROTECTED_RESOURCE_SESSION_DESC *pDesc,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppSession);
        HRESULT ( STDMETHODCALLTYPE *CreateCommittedResource1 )(
            ID3D12Device6 * This,
            _In_ const D3D12_HEAP_PROPERTIES *pHeapProperties,
            D3D12_HEAP_FLAGS HeapFlags,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialResourceState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            _In_opt_ ID3D12ProtectedResourceSession *pProtectedSession,
            REFIID riidResource,
            _COM_Outptr_opt_ void **ppvResource);
        HRESULT ( STDMETHODCALLTYPE *CreateHeap1 )(
            ID3D12Device6 * This,
            _In_ const D3D12_HEAP_DESC *pDesc,
            _In_opt_ ID3D12ProtectedResourceSession *pProtectedSession,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvHeap);
        HRESULT ( STDMETHODCALLTYPE *CreateReservedResource1 )(
            ID3D12Device6 * This,
            _In_ const D3D12_RESOURCE_DESC *pDesc,
            D3D12_RESOURCE_STATES InitialState,
            _In_opt_ const D3D12_CLEAR_VALUE *pOptimizedClearValue,
            _In_opt_ ID3D12ProtectedResourceSession *pProtectedSession,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvResource);
        D3D12_RESOURCE_ALLOCATION_INFO ( STDMETHODCALLTYPE *GetResourceAllocationInfo1 )(
            ID3D12Device6 * This,
            UINT visibleMask,
            UINT numResourceDescs,
            _In_reads_(numResourceDescs) const D3D12_RESOURCE_DESC *pResourceDescs,
            _Out_writes_opt_(numResourceDescs) D3D12_RESOURCE_ALLOCATION_INFO1 *pResourceAllocationInfo1);
        HRESULT ( STDMETHODCALLTYPE *CreateLifetimeTracker )(
            ID3D12Device6 * This,
            _In_ ID3D12LifetimeOwner *pOwner,
            REFIID riid,
            _COM_Outptr_ void **ppvTracker);
        void ( STDMETHODCALLTYPE *RemoveDevice )(
            ID3D12Device6 * This);
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetaCommands )(
            ID3D12Device6 * This,
            _Inout_ UINT *pNumMetaCommands,
            _Out_writes_opt_(*pNumMetaCommands) D3D12_META_COMMAND_DESC *pDescs);
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetaCommandParameters )(
            ID3D12Device6 * This,
            _In_ REFGUID CommandId,
            _In_ D3D12_META_COMMAND_PARAMETER_STAGE Stage,
            _Out_opt_ UINT *pTotalStructureSizeInBytes,
            _Inout_ UINT *pParameterCount,
            _Out_writes_opt_(*pParameterCount) D3D12_META_COMMAND_PARAMETER_DESC *pParameterDescs);
        HRESULT ( STDMETHODCALLTYPE *CreateMetaCommand )(
            ID3D12Device6 * This,
            _In_ REFGUID CommandId,
            _In_ UINT NodeMask,
            _In_reads_bytes_opt_(CreationParametersDataSizeInBytes) const void *pCreationParametersData,
            _In_ SIZE_T CreationParametersDataSizeInBytes,
            REFIID riid,
            _COM_Outptr_ void **ppMetaCommand);
        HRESULT ( STDMETHODCALLTYPE *CreateStateObject )(
            ID3D12Device6 * This,
            const D3D12_STATE_OBJECT_DESC *pDesc,
            REFIID riid,
            _COM_Outptr_ void **ppStateObject);
        void ( STDMETHODCALLTYPE *GetRaytracingAccelerationStructurePrebuildInfo )(
            ID3D12Device6 * This,
            _In_ const D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS *pDesc,
            _Out_ D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO *pInfo);
        D3D12_DRIVER_MATCHING_IDENTIFIER_STATUS ( STDMETHODCALLTYPE *CheckDriverMatchingIdentifier )(
            ID3D12Device6 * This,
            _In_ D3D12_SERIALIZED_DATA_TYPE SerializedDataType,
            _In_ const D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER *pIdentifierToCheck);
        HRESULT ( STDMETHODCALLTYPE *SetBackgroundProcessingMode )(
            ID3D12Device6 * This,
            D3D12_BACKGROUND_PROCESSING_MODE Mode,
            D3D12_MEASUREMENTS_ACTION MeasurementsAction,
            _In_opt_ HANDLE hEventToSignalUponCompletion,
            _Out_opt_ BOOL *pbFurtherMeasurementsDesired);
        END_INTERFACE
    } ID3D12Device6Vtbl;
    interface ID3D12Device6
    {
        CONST_VTBL struct ID3D12Device6Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetNodeCount(This) )
    ( (This)->lpVtbl -> CreateCommandQueue(This,pDesc,riid,ppCommandQueue) )
    ( (This)->lpVtbl -> CreateCommandAllocator(This,type,riid,ppCommandAllocator) )
    ( (This)->lpVtbl -> CreateGraphicsPipelineState(This,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> CreateComputePipelineState(This,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> CreateCommandList(This,nodeMask,type,pCommandAllocator,pInitialState,riid,ppCommandList) )
    ( (This)->lpVtbl -> CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) )
    ( (This)->lpVtbl -> CreateDescriptorHeap(This,pDescriptorHeapDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> GetDescriptorHandleIncrementSize(This,DescriptorHeapType) )
    ( (This)->lpVtbl -> CreateRootSignature(This,nodeMask,pBlobWithRootSignature,blobLengthInBytes,riid,ppvRootSignature) )
    ( (This)->lpVtbl -> CreateConstantBufferView(This,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateShaderResourceView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateUnorderedAccessView(This,pResource,pCounterResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateRenderTargetView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateDepthStencilView(This,pResource,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CreateSampler(This,pDesc,DestDescriptor) )
    ( (This)->lpVtbl -> CopyDescriptors(This,NumDestDescriptorRanges,pDestDescriptorRangeStarts,pDestDescriptorRangeSizes,NumSrcDescriptorRanges,pSrcDescriptorRangeStarts,pSrcDescriptorRangeSizes,DescriptorHeapsType) )
    ( (This)->lpVtbl -> CopyDescriptorsSimple(This,NumDescriptors,DestDescriptorRangeStart,SrcDescriptorRangeStart,DescriptorHeapsType) )
    ( (This)->lpVtbl -> GetResourceAllocationInfo(This,visibleMask,numResourceDescs,pResourceDescs) )
    ( (This)->lpVtbl -> GetCustomHeapProperties(This,nodeMask,heapType) )
    ( (This)->lpVtbl -> CreateCommittedResource(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,riidResource,ppvResource) )
    ( (This)->lpVtbl -> CreateHeap(This,pDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> CreatePlacedResource(This,pHeap,HeapOffset,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) )
    ( (This)->lpVtbl -> CreateReservedResource(This,pDesc,InitialState,pOptimizedClearValue,riid,ppvResource) )
    ( (This)->lpVtbl -> CreateSharedHandle(This,pObject,pAttributes,Access,Name,pHandle) )
    ( (This)->lpVtbl -> OpenSharedHandle(This,NTHandle,riid,ppvObj) )
    ( (This)->lpVtbl -> OpenSharedHandleByName(This,Name,Access,pNTHandle) )
    ( (This)->lpVtbl -> MakeResident(This,NumObjects,ppObjects) )
    ( (This)->lpVtbl -> Evict(This,NumObjects,ppObjects) )
    ( (This)->lpVtbl -> CreateFence(This,InitialValue,Flags,riid,ppFence) )
    ( (This)->lpVtbl -> GetDeviceRemovedReason(This) )
    ( (This)->lpVtbl -> GetCopyableFootprints(This,pResourceDesc,FirstSubresource,NumSubresources,BaseOffset,pLayouts,pNumRows,pRowSizeInBytes,pTotalBytes) )
    ( (This)->lpVtbl -> CreateQueryHeap(This,pDesc,riid,ppvHeap) )
    ( (This)->lpVtbl -> SetStablePowerState(This,Enable) )
    ( (This)->lpVtbl -> CreateCommandSignature(This,pDesc,pRootSignature,riid,ppvCommandSignature) )
    ( (This)->lpVtbl -> GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) )
    ( (This)->lpVtbl -> GetAdapterLuid(This) )
    ( (This)->lpVtbl -> CreatePipelineLibrary(This,pLibraryBlob,BlobLength,riid,ppPipelineLibrary) )
    ( (This)->lpVtbl -> SetEventOnMultipleFenceCompletion(This,ppFences,pFenceValues,NumFences,Flags,hEvent) )
    ( (This)->lpVtbl -> SetResidencyPriority(This,NumObjects,ppObjects,pPriorities) )
    ( (This)->lpVtbl -> CreatePipelineState(This,pDesc,riid,ppPipelineState) )
    ( (This)->lpVtbl -> OpenExistingHeapFromAddress(This,pAddress,riid,ppvHeap) )
    ( (This)->lpVtbl -> OpenExistingHeapFromFileMapping(This,hFileMapping,riid,ppvHeap) )
    ( (This)->lpVtbl -> EnqueueMakeResident(This,Flags,NumObjects,ppObjects,pFenceToSignal,FenceValueToSignal) )
    ( (This)->lpVtbl -> CreateCommandList1(This,nodeMask,type,flags,riid,ppCommandList) )
    ( (This)->lpVtbl -> CreateProtectedResourceSession(This,pDesc,riid,ppSession) )
    ( (This)->lpVtbl -> CreateCommittedResource1(This,pHeapProperties,HeapFlags,pDesc,InitialResourceState,pOptimizedClearValue,pProtectedSession,riidResource,ppvResource) )
    ( (This)->lpVtbl -> CreateHeap1(This,pDesc,pProtectedSession,riid,ppvHeap) )
    ( (This)->lpVtbl -> CreateReservedResource1(This,pDesc,InitialState,pOptimizedClearValue,pProtectedSession,riid,ppvResource) )
    ( (This)->lpVtbl -> GetResourceAllocationInfo1(This,visibleMask,numResourceDescs,pResourceDescs,pResourceAllocationInfo1) )
    ( (This)->lpVtbl -> CreateLifetimeTracker(This,pOwner,riid,ppvTracker) )
    ( (This)->lpVtbl -> RemoveDevice(This) )
    ( (This)->lpVtbl -> EnumerateMetaCommands(This,pNumMetaCommands,pDescs) )
    ( (This)->lpVtbl -> EnumerateMetaCommandParameters(This,CommandId,Stage,pTotalStructureSizeInBytes,pParameterCount,pParameterDescs) )
    ( (This)->lpVtbl -> CreateMetaCommand(This,CommandId,NodeMask,pCreationParametersData,CreationParametersDataSizeInBytes,riid,ppMetaCommand) )
    ( (This)->lpVtbl -> CreateStateObject(This,pDesc,riid,ppStateObject) )
    ( (This)->lpVtbl -> GetRaytracingAccelerationStructurePrebuildInfo(This,pDesc,pInfo) )
    ( (This)->lpVtbl -> CheckDriverMatchingIdentifier(This,SerializedDataType,pIdentifierToCheck) )
    ( (This)->lpVtbl -> SetBackgroundProcessingMode(This,Mode,MeasurementsAction,hEventToSignalUponCompletion,pbFurtherMeasurementsDesired) )
EXTERN_C const IID IID_ID3D12Resource1;
    typedef struct ID3D12Resource1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12Resource1 * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12Resource1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12Resource1 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12Resource1 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12Resource1 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12Resource1 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12Resource1 * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12Resource1 * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        HRESULT ( STDMETHODCALLTYPE *Map )(
            ID3D12Resource1 * This,
            UINT Subresource,
            _In_opt_ const D3D12_RANGE *pReadRange,
            _Outptr_opt_result_bytebuffer_(_Inexpressible_("Dependent on resource")) void **ppData);
        void ( STDMETHODCALLTYPE *Unmap )(
            ID3D12Resource1 * This,
            UINT Subresource,
            _In_opt_ const D3D12_RANGE *pWrittenRange);
        D3D12_RESOURCE_DESC ( STDMETHODCALLTYPE *GetDesc )(
            ID3D12Resource1 * This);
        D3D12_GPU_VIRTUAL_ADDRESS ( STDMETHODCALLTYPE *GetGPUVirtualAddress )(
            ID3D12Resource1 * This);
        HRESULT ( STDMETHODCALLTYPE *WriteToSubresource )(
            ID3D12Resource1 * This,
            UINT DstSubresource,
            _In_opt_ const D3D12_BOX *pDstBox,
            _In_ const void *pSrcData,
            UINT SrcRowPitch,
            UINT SrcDepthPitch);
        HRESULT ( STDMETHODCALLTYPE *ReadFromSubresource )(
            ID3D12Resource1 * This,
            _Out_ void *pDstData,
            UINT DstRowPitch,
            UINT DstDepthPitch,
            UINT SrcSubresource,
            _In_opt_ const D3D12_BOX *pSrcBox);
        HRESULT ( STDMETHODCALLTYPE *GetHeapProperties )(
            ID3D12Resource1 * This,
            _Out_opt_ D3D12_HEAP_PROPERTIES *pHeapProperties,
            _Out_opt_ D3D12_HEAP_FLAGS *pHeapFlags);
        HRESULT ( STDMETHODCALLTYPE *GetProtectedResourceSession )(
            ID3D12Resource1 * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppProtectedSession);
        END_INTERFACE
    } ID3D12Resource1Vtbl;
    interface ID3D12Resource1
    {
        CONST_VTBL struct ID3D12Resource1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> Map(This,Subresource,pReadRange,ppData) )
    ( (This)->lpVtbl -> Unmap(This,Subresource,pWrittenRange) )
    ( (This)->lpVtbl -> GetDesc(This) )
    ( (This)->lpVtbl -> GetGPUVirtualAddress(This) )
    ( (This)->lpVtbl -> WriteToSubresource(This,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch) )
    ( (This)->lpVtbl -> ReadFromSubresource(This,pDstData,DstRowPitch,DstDepthPitch,SrcSubresource,pSrcBox) )
    ( (This)->lpVtbl -> GetHeapProperties(This,pHeapProperties,pHeapFlags) )
    ( (This)->lpVtbl -> GetProtectedResourceSession(This,riid,ppProtectedSession) )
EXTERN_C const IID IID_ID3D12Heap1;
    typedef struct ID3D12Heap1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12Heap1 * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12Heap1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12Heap1 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12Heap1 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12Heap1 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12Heap1 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12Heap1 * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12Heap1 * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        D3D12_HEAP_DESC ( STDMETHODCALLTYPE *GetDesc )(
            ID3D12Heap1 * This);
        HRESULT ( STDMETHODCALLTYPE *GetProtectedResourceSession )(
            ID3D12Heap1 * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppProtectedSession);
        END_INTERFACE
    } ID3D12Heap1Vtbl;
    interface ID3D12Heap1
    {
        CONST_VTBL struct ID3D12Heap1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> GetDesc(This) )
    ( (This)->lpVtbl -> GetProtectedResourceSession(This,riid,ppProtectedSession) )
EXTERN_C const IID IID_ID3D12GraphicsCommandList3;
    typedef struct ID3D12GraphicsCommandList3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12GraphicsCommandList3 * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12GraphicsCommandList3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12GraphicsCommandList3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12GraphicsCommandList3 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12GraphicsCommandList3 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12GraphicsCommandList3 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12GraphicsCommandList3 * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12GraphicsCommandList3 * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        D3D12_COMMAND_LIST_TYPE ( STDMETHODCALLTYPE *GetType )(
            ID3D12GraphicsCommandList3 * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            ID3D12GraphicsCommandList3 * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            ID3D12GraphicsCommandList3 * This,
            _In_ ID3D12CommandAllocator *pAllocator,
            _In_opt_ ID3D12PipelineState *pInitialState);
        void ( STDMETHODCALLTYPE *ClearState )(
            ID3D12GraphicsCommandList3 * This,
            _In_opt_ ID3D12PipelineState *pPipelineState);
        void ( STDMETHODCALLTYPE *DrawInstanced )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT VertexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *DrawIndexedInstanced )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT IndexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartIndexLocation,
            _In_ INT BaseVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *Dispatch )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT ThreadGroupCountX,
            _In_ UINT ThreadGroupCountY,
            _In_ UINT ThreadGroupCountZ);
        void ( STDMETHODCALLTYPE *CopyBufferRegion )(
            ID3D12GraphicsCommandList3 * This,
            _In_ ID3D12Resource *pDstBuffer,
            UINT64 DstOffset,
            _In_ ID3D12Resource *pSrcBuffer,
            UINT64 SrcOffset,
            UINT64 NumBytes);
        void ( STDMETHODCALLTYPE *CopyTextureRegion )(
            ID3D12GraphicsCommandList3 * This,
            _In_ const D3D12_TEXTURE_COPY_LOCATION *pDst,
            UINT DstX,
            UINT DstY,
            UINT DstZ,
            _In_ const D3D12_TEXTURE_COPY_LOCATION *pSrc,
            _In_opt_ const D3D12_BOX *pSrcBox);
        void ( STDMETHODCALLTYPE *CopyResource )(
            ID3D12GraphicsCommandList3 * This,
            _In_ ID3D12Resource *pDstResource,
            _In_ ID3D12Resource *pSrcResource);
        void ( STDMETHODCALLTYPE *CopyTiles )(
            ID3D12GraphicsCommandList3 * This,
            _In_ ID3D12Resource *pTiledResource,
            _In_ const D3D12_TILED_RESOURCE_COORDINATE *pTileRegionStartCoordinate,
            _In_ const D3D12_TILE_REGION_SIZE *pTileRegionSize,
            _In_ ID3D12Resource *pBuffer,
            UINT64 BufferStartOffsetInBytes,
            D3D12_TILE_COPY_FLAGS Flags);
        void ( STDMETHODCALLTYPE *ResolveSubresource )(
            ID3D12GraphicsCommandList3 * This,
            _In_ ID3D12Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ ID3D12Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_ DXGI_FORMAT Format);
        void ( STDMETHODCALLTYPE *IASetPrimitiveTopology )(
            ID3D12GraphicsCommandList3 * This,
            _In_ D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology);
        void ( STDMETHODCALLTYPE *RSSetViewports )(
            ID3D12GraphicsCommandList3 * This,
            _In_range_(0, D3D12_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumViewports,
            _In_reads_( NumViewports) const D3D12_VIEWPORT *pViewports);
        void ( STDMETHODCALLTYPE *RSSetScissorRects )(
            ID3D12GraphicsCommandList3 * This,
            _In_range_(0, D3D12_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumRects,
            _In_reads_( NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *OMSetBlendFactor )(
            ID3D12GraphicsCommandList3 * This,
            _In_reads_opt_(4) const FLOAT BlendFactor[ 4 ]);
        void ( STDMETHODCALLTYPE *OMSetStencilRef )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT StencilRef);
        void ( STDMETHODCALLTYPE *SetPipelineState )(
            ID3D12GraphicsCommandList3 * This,
            _In_ ID3D12PipelineState *pPipelineState);
        void ( STDMETHODCALLTYPE *ResourceBarrier )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT NumBarriers,
            _In_reads_(NumBarriers) const D3D12_RESOURCE_BARRIER *pBarriers);
        void ( STDMETHODCALLTYPE *ExecuteBundle )(
            ID3D12GraphicsCommandList3 * This,
            _In_ ID3D12GraphicsCommandList *pCommandList);
        void ( STDMETHODCALLTYPE *SetDescriptorHeaps )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT NumDescriptorHeaps,
            _In_reads_(NumDescriptorHeaps) ID3D12DescriptorHeap *const *ppDescriptorHeaps);
        void ( STDMETHODCALLTYPE *SetComputeRootSignature )(
            ID3D12GraphicsCommandList3 * This,
            _In_opt_ ID3D12RootSignature *pRootSignature);
        void ( STDMETHODCALLTYPE *SetGraphicsRootSignature )(
            ID3D12GraphicsCommandList3 * This,
            _In_opt_ ID3D12RootSignature *pRootSignature);
        void ( STDMETHODCALLTYPE *SetComputeRootDescriptorTable )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
        void ( STDMETHODCALLTYPE *SetGraphicsRootDescriptorTable )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
        void ( STDMETHODCALLTYPE *SetComputeRoot32BitConstant )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT SrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetGraphicsRoot32BitConstant )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT SrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetComputeRoot32BitConstants )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT Num32BitValuesToSet,
            _In_reads_(Num32BitValuesToSet*sizeof(UINT)) const void *pSrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetGraphicsRoot32BitConstants )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT Num32BitValuesToSet,
            _In_reads_(Num32BitValuesToSet*sizeof(UINT)) const void *pSrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetComputeRootConstantBufferView )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetGraphicsRootConstantBufferView )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetComputeRootShaderResourceView )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetGraphicsRootShaderResourceView )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetComputeRootUnorderedAccessView )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetGraphicsRootUnorderedAccessView )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *IASetIndexBuffer )(
            ID3D12GraphicsCommandList3 * This,
            _In_opt_ const D3D12_INDEX_BUFFER_VIEW *pView);
        void ( STDMETHODCALLTYPE *IASetVertexBuffers )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT StartSlot,
            _In_ UINT NumViews,
            _In_reads_opt_(NumViews) const D3D12_VERTEX_BUFFER_VIEW *pViews);
        void ( STDMETHODCALLTYPE *SOSetTargets )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT StartSlot,
            _In_ UINT NumViews,
            _In_reads_opt_(NumViews) const D3D12_STREAM_OUTPUT_BUFFER_VIEW *pViews);
        void ( STDMETHODCALLTYPE *OMSetRenderTargets )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT NumRenderTargetDescriptors,
            _In_opt_ const D3D12_CPU_DESCRIPTOR_HANDLE *pRenderTargetDescriptors,
            _In_ BOOL RTsSingleHandleToDescriptorRange,
            _In_opt_ const D3D12_CPU_DESCRIPTOR_HANDLE *pDepthStencilDescriptor);
        void ( STDMETHODCALLTYPE *ClearDepthStencilView )(
            ID3D12GraphicsCommandList3 * This,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView,
            _In_ D3D12_CLEAR_FLAGS ClearFlags,
            _In_ FLOAT Depth,
            _In_ UINT8 Stencil,
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *ClearRenderTargetView )(
            ID3D12GraphicsCommandList3 * This,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView,
            _In_ const FLOAT ColorRGBA[ 4 ],
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *ClearUnorderedAccessViewUint )(
            ID3D12GraphicsCommandList3 * This,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
            _In_ ID3D12Resource *pResource,
            _In_ const UINT Values[ 4 ],
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *ClearUnorderedAccessViewFloat )(
            ID3D12GraphicsCommandList3 * This,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
            _In_ ID3D12Resource *pResource,
            _In_ const FLOAT Values[ 4 ],
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *DiscardResource )(
            ID3D12GraphicsCommandList3 * This,
            _In_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_DISCARD_REGION *pRegion);
        void ( STDMETHODCALLTYPE *BeginQuery )(
            ID3D12GraphicsCommandList3 * This,
            _In_ ID3D12QueryHeap *pQueryHeap,
            _In_ D3D12_QUERY_TYPE Type,
            _In_ UINT Index);
        void ( STDMETHODCALLTYPE *EndQuery )(
            ID3D12GraphicsCommandList3 * This,
            _In_ ID3D12QueryHeap *pQueryHeap,
            _In_ D3D12_QUERY_TYPE Type,
            _In_ UINT Index);
        void ( STDMETHODCALLTYPE *ResolveQueryData )(
            ID3D12GraphicsCommandList3 * This,
            _In_ ID3D12QueryHeap *pQueryHeap,
            _In_ D3D12_QUERY_TYPE Type,
            _In_ UINT StartIndex,
            _In_ UINT NumQueries,
            _In_ ID3D12Resource *pDestinationBuffer,
            _In_ UINT64 AlignedDestinationBufferOffset);
        void ( STDMETHODCALLTYPE *SetPredication )(
            ID3D12GraphicsCommandList3 * This,
            _In_opt_ ID3D12Resource *pBuffer,
            _In_ UINT64 AlignedBufferOffset,
            _In_ D3D12_PREDICATION_OP Operation);
        void ( STDMETHODCALLTYPE *SetMarker )(
            ID3D12GraphicsCommandList3 * This,
            UINT Metadata,
            _In_reads_bytes_opt_(Size) const void *pData,
            UINT Size);
        void ( STDMETHODCALLTYPE *BeginEvent )(
            ID3D12GraphicsCommandList3 * This,
            UINT Metadata,
            _In_reads_bytes_opt_(Size) const void *pData,
            UINT Size);
        void ( STDMETHODCALLTYPE *EndEvent )(
            ID3D12GraphicsCommandList3 * This);
        void ( STDMETHODCALLTYPE *ExecuteIndirect )(
            ID3D12GraphicsCommandList3 * This,
            _In_ ID3D12CommandSignature *pCommandSignature,
            _In_ UINT MaxCommandCount,
            _In_ ID3D12Resource *pArgumentBuffer,
            _In_ UINT64 ArgumentBufferOffset,
            _In_opt_ ID3D12Resource *pCountBuffer,
            _In_ UINT64 CountBufferOffset);
        void ( STDMETHODCALLTYPE *AtomicCopyBufferUINT )(
            ID3D12GraphicsCommandList3 * This,
            _In_ ID3D12Resource *pDstBuffer,
            UINT64 DstOffset,
            _In_ ID3D12Resource *pSrcBuffer,
            UINT64 SrcOffset,
            UINT Dependencies,
            _In_reads_(Dependencies) ID3D12Resource *const *ppDependentResources,
            _In_reads_(Dependencies) const D3D12_SUBRESOURCE_RANGE_UINT64 *pDependentSubresourceRanges);
        void ( STDMETHODCALLTYPE *AtomicCopyBufferUINT64 )(
            ID3D12GraphicsCommandList3 * This,
            _In_ ID3D12Resource *pDstBuffer,
            UINT64 DstOffset,
            _In_ ID3D12Resource *pSrcBuffer,
            UINT64 SrcOffset,
            UINT Dependencies,
            _In_reads_(Dependencies) ID3D12Resource *const *ppDependentResources,
            _In_reads_(Dependencies) const D3D12_SUBRESOURCE_RANGE_UINT64 *pDependentSubresourceRanges);
        void ( STDMETHODCALLTYPE *OMSetDepthBounds )(
            ID3D12GraphicsCommandList3 * This,
            _In_ FLOAT Min,
            _In_ FLOAT Max);
        void ( STDMETHODCALLTYPE *SetSamplePositions )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT NumSamplesPerPixel,
            _In_ UINT NumPixels,
            _In_reads_(NumSamplesPerPixel*NumPixels) D3D12_SAMPLE_POSITION *pSamplePositions);
        void ( STDMETHODCALLTYPE *ResolveSubresourceRegion )(
            ID3D12GraphicsCommandList3 * This,
            _In_ ID3D12Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ UINT DstX,
            _In_ UINT DstY,
            _In_ ID3D12Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_opt_ D3D12_RECT *pSrcRect,
            _In_ DXGI_FORMAT Format,
            _In_ D3D12_RESOLVE_MODE ResolveMode);
        void ( STDMETHODCALLTYPE *SetViewInstanceMask )(
            ID3D12GraphicsCommandList3 * This,
            _In_ UINT Mask);
        void ( STDMETHODCALLTYPE *WriteBufferImmediate )(
            ID3D12GraphicsCommandList3 * This,
            UINT Count,
            _In_reads_(Count) const D3D12_WRITEBUFFERIMMEDIATE_PARAMETER *pParams,
            _In_reads_opt_(Count) const D3D12_WRITEBUFFERIMMEDIATE_MODE *pModes);
        void ( STDMETHODCALLTYPE *SetProtectedResourceSession )(
            ID3D12GraphicsCommandList3 * This,
            _In_opt_ ID3D12ProtectedResourceSession *pProtectedResourceSession);
        END_INTERFACE
    } ID3D12GraphicsCommandList3Vtbl;
    interface ID3D12GraphicsCommandList3
    {
        CONST_VTBL struct ID3D12GraphicsCommandList3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> GetType(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Reset(This,pAllocator,pInitialState) )
    ( (This)->lpVtbl -> ClearState(This,pPipelineState) )
    ( (This)->lpVtbl -> DrawInstanced(This,VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation) )
    ( (This)->lpVtbl -> DrawIndexedInstanced(This,IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation) )
    ( (This)->lpVtbl -> Dispatch(This,ThreadGroupCountX,ThreadGroupCountY,ThreadGroupCountZ) )
    ( (This)->lpVtbl -> CopyBufferRegion(This,pDstBuffer,DstOffset,pSrcBuffer,SrcOffset,NumBytes) )
    ( (This)->lpVtbl -> CopyTextureRegion(This,pDst,DstX,DstY,DstZ,pSrc,pSrcBox) )
    ( (This)->lpVtbl -> CopyResource(This,pDstResource,pSrcResource) )
    ( (This)->lpVtbl -> CopyTiles(This,pTiledResource,pTileRegionStartCoordinate,pTileRegionSize,pBuffer,BufferStartOffsetInBytes,Flags) )
    ( (This)->lpVtbl -> ResolveSubresource(This,pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format) )
    ( (This)->lpVtbl -> IASetPrimitiveTopology(This,PrimitiveTopology) )
    ( (This)->lpVtbl -> RSSetViewports(This,NumViewports,pViewports) )
    ( (This)->lpVtbl -> RSSetScissorRects(This,NumRects,pRects) )
    ( (This)->lpVtbl -> OMSetBlendFactor(This,BlendFactor) )
    ( (This)->lpVtbl -> OMSetStencilRef(This,StencilRef) )
    ( (This)->lpVtbl -> SetPipelineState(This,pPipelineState) )
    ( (This)->lpVtbl -> ResourceBarrier(This,NumBarriers,pBarriers) )
    ( (This)->lpVtbl -> ExecuteBundle(This,pCommandList) )
    ( (This)->lpVtbl -> SetDescriptorHeaps(This,NumDescriptorHeaps,ppDescriptorHeaps) )
    ( (This)->lpVtbl -> SetComputeRootSignature(This,pRootSignature) )
    ( (This)->lpVtbl -> SetGraphicsRootSignature(This,pRootSignature) )
    ( (This)->lpVtbl -> SetComputeRootDescriptorTable(This,RootParameterIndex,BaseDescriptor) )
    ( (This)->lpVtbl -> SetGraphicsRootDescriptorTable(This,RootParameterIndex,BaseDescriptor) )
    ( (This)->lpVtbl -> SetComputeRoot32BitConstant(This,RootParameterIndex,SrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetGraphicsRoot32BitConstant(This,RootParameterIndex,SrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetComputeRoot32BitConstants(This,RootParameterIndex,Num32BitValuesToSet,pSrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetGraphicsRoot32BitConstants(This,RootParameterIndex,Num32BitValuesToSet,pSrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetComputeRootConstantBufferView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetGraphicsRootConstantBufferView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetComputeRootShaderResourceView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetGraphicsRootShaderResourceView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetComputeRootUnorderedAccessView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetGraphicsRootUnorderedAccessView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> IASetIndexBuffer(This,pView) )
    ( (This)->lpVtbl -> IASetVertexBuffers(This,StartSlot,NumViews,pViews) )
    ( (This)->lpVtbl -> SOSetTargets(This,StartSlot,NumViews,pViews) )
    ( (This)->lpVtbl -> OMSetRenderTargets(This,NumRenderTargetDescriptors,pRenderTargetDescriptors,RTsSingleHandleToDescriptorRange,pDepthStencilDescriptor) )
    ( (This)->lpVtbl -> ClearDepthStencilView(This,DepthStencilView,ClearFlags,Depth,Stencil,NumRects,pRects) )
    ( (This)->lpVtbl -> ClearRenderTargetView(This,RenderTargetView,ColorRGBA,NumRects,pRects) )
    ( (This)->lpVtbl -> ClearUnorderedAccessViewUint(This,ViewGPUHandleInCurrentHeap,ViewCPUHandle,pResource,Values,NumRects,pRects) )
    ( (This)->lpVtbl -> ClearUnorderedAccessViewFloat(This,ViewGPUHandleInCurrentHeap,ViewCPUHandle,pResource,Values,NumRects,pRects) )
    ( (This)->lpVtbl -> DiscardResource(This,pResource,pRegion) )
    ( (This)->lpVtbl -> BeginQuery(This,pQueryHeap,Type,Index) )
    ( (This)->lpVtbl -> EndQuery(This,pQueryHeap,Type,Index) )
    ( (This)->lpVtbl -> ResolveQueryData(This,pQueryHeap,Type,StartIndex,NumQueries,pDestinationBuffer,AlignedDestinationBufferOffset) )
    ( (This)->lpVtbl -> SetPredication(This,pBuffer,AlignedBufferOffset,Operation) )
    ( (This)->lpVtbl -> SetMarker(This,Metadata,pData,Size) )
    ( (This)->lpVtbl -> BeginEvent(This,Metadata,pData,Size) )
    ( (This)->lpVtbl -> EndEvent(This) )
    ( (This)->lpVtbl -> ExecuteIndirect(This,pCommandSignature,MaxCommandCount,pArgumentBuffer,ArgumentBufferOffset,pCountBuffer,CountBufferOffset) )
    ( (This)->lpVtbl -> AtomicCopyBufferUINT(This,pDstBuffer,DstOffset,pSrcBuffer,SrcOffset,Dependencies,ppDependentResources,pDependentSubresourceRanges) )
    ( (This)->lpVtbl -> AtomicCopyBufferUINT64(This,pDstBuffer,DstOffset,pSrcBuffer,SrcOffset,Dependencies,ppDependentResources,pDependentSubresourceRanges) )
    ( (This)->lpVtbl -> OMSetDepthBounds(This,Min,Max) )
    ( (This)->lpVtbl -> SetSamplePositions(This,NumSamplesPerPixel,NumPixels,pSamplePositions) )
    ( (This)->lpVtbl -> ResolveSubresourceRegion(This,pDstResource,DstSubresource,DstX,DstY,pSrcResource,SrcSubresource,pSrcRect,Format,ResolveMode) )
    ( (This)->lpVtbl -> SetViewInstanceMask(This,Mask) )
    ( (This)->lpVtbl -> WriteBufferImmediate(This,Count,pParams,pModes) )
    ( (This)->lpVtbl -> SetProtectedResourceSession(This,pProtectedResourceSession) )
typedef
enum D3D12_RENDER_PASS_BEGINNING_ACCESS_TYPE
    {
        D3D12_RENDER_PASS_BEGINNING_ACCESS_TYPE_DISCARD = 0,
        D3D12_RENDER_PASS_BEGINNING_ACCESS_TYPE_PRESERVE = ( D3D12_RENDER_PASS_BEGINNING_ACCESS_TYPE_DISCARD + 1 ) ,
        D3D12_RENDER_PASS_BEGINNING_ACCESS_TYPE_CLEAR = ( D3D12_RENDER_PASS_BEGINNING_ACCESS_TYPE_PRESERVE + 1 ) ,
        D3D12_RENDER_PASS_BEGINNING_ACCESS_TYPE_NO_ACCESS = ( D3D12_RENDER_PASS_BEGINNING_ACCESS_TYPE_CLEAR + 1 )
    } D3D12_RENDER_PASS_BEGINNING_ACCESS_TYPE;
typedef struct D3D12_RENDER_PASS_BEGINNING_ACCESS_CLEAR_PARAMETERS
    {
    D3D12_CLEAR_VALUE ClearValue;
    } D3D12_RENDER_PASS_BEGINNING_ACCESS_CLEAR_PARAMETERS;
typedef struct D3D12_RENDER_PASS_BEGINNING_ACCESS
    {
    D3D12_RENDER_PASS_BEGINNING_ACCESS_TYPE Type;
    union
        {
        D3D12_RENDER_PASS_BEGINNING_ACCESS_CLEAR_PARAMETERS Clear;
        } ;
    } D3D12_RENDER_PASS_BEGINNING_ACCESS;
typedef
enum D3D12_RENDER_PASS_ENDING_ACCESS_TYPE
    {
        D3D12_RENDER_PASS_ENDING_ACCESS_TYPE_DISCARD = 0,
        D3D12_RENDER_PASS_ENDING_ACCESS_TYPE_PRESERVE = ( D3D12_RENDER_PASS_ENDING_ACCESS_TYPE_DISCARD + 1 ) ,
        D3D12_RENDER_PASS_ENDING_ACCESS_TYPE_RESOLVE = ( D3D12_RENDER_PASS_ENDING_ACCESS_TYPE_PRESERVE + 1 ) ,
        D3D12_RENDER_PASS_ENDING_ACCESS_TYPE_NO_ACCESS = ( D3D12_RENDER_PASS_ENDING_ACCESS_TYPE_RESOLVE + 1 )
    } D3D12_RENDER_PASS_ENDING_ACCESS_TYPE;
typedef struct D3D12_RENDER_PASS_ENDING_ACCESS_RESOLVE_SUBRESOURCE_PARAMETERS
    {
    UINT SrcSubresource;
    UINT DstSubresource;
    UINT DstX;
    UINT DstY;
    D3D12_RECT SrcRect;
    } D3D12_RENDER_PASS_ENDING_ACCESS_RESOLVE_SUBRESOURCE_PARAMETERS;
typedef struct D3D12_RENDER_PASS_ENDING_ACCESS_RESOLVE_PARAMETERS
    {
    ID3D12Resource *pSrcResource;
    ID3D12Resource *pDstResource;
    UINT SubresourceCount;
    _Field_size_full_(SubresourceCount) const D3D12_RENDER_PASS_ENDING_ACCESS_RESOLVE_SUBRESOURCE_PARAMETERS *pSubresourceParameters;
    DXGI_FORMAT Format;
    D3D12_RESOLVE_MODE ResolveMode;
    BOOL PreserveResolveSource;
    } D3D12_RENDER_PASS_ENDING_ACCESS_RESOLVE_PARAMETERS;
typedef struct D3D12_RENDER_PASS_ENDING_ACCESS
    {
    D3D12_RENDER_PASS_ENDING_ACCESS_TYPE Type;
    union
        {
        D3D12_RENDER_PASS_ENDING_ACCESS_RESOLVE_PARAMETERS Resolve;
        } ;
    } D3D12_RENDER_PASS_ENDING_ACCESS;
typedef struct D3D12_RENDER_PASS_RENDER_TARGET_DESC
    {
    D3D12_CPU_DESCRIPTOR_HANDLE cpuDescriptor;
    D3D12_RENDER_PASS_BEGINNING_ACCESS BeginningAccess;
    D3D12_RENDER_PASS_ENDING_ACCESS EndingAccess;
    } D3D12_RENDER_PASS_RENDER_TARGET_DESC;
typedef struct D3D12_RENDER_PASS_DEPTH_STENCIL_DESC
    {
    D3D12_CPU_DESCRIPTOR_HANDLE cpuDescriptor;
    D3D12_RENDER_PASS_BEGINNING_ACCESS DepthBeginningAccess;
    D3D12_RENDER_PASS_BEGINNING_ACCESS StencilBeginningAccess;
    D3D12_RENDER_PASS_ENDING_ACCESS DepthEndingAccess;
    D3D12_RENDER_PASS_ENDING_ACCESS StencilEndingAccess;
    } D3D12_RENDER_PASS_DEPTH_STENCIL_DESC;
typedef
enum D3D12_RENDER_PASS_FLAGS
    {
        D3D12_RENDER_PASS_FLAG_NONE = 0,
        D3D12_RENDER_PASS_FLAG_ALLOW_UAV_WRITES = 0x1,
        D3D12_RENDER_PASS_FLAG_SUSPENDING_PASS = 0x2,
        D3D12_RENDER_PASS_FLAG_RESUMING_PASS = 0x4
    } D3D12_RENDER_PASS_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12_RENDER_PASS_FLAGS );
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0041_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D12MetaCommand;
    typedef struct ID3D12MetaCommandVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12MetaCommand * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12MetaCommand * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12MetaCommand * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12MetaCommand * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12MetaCommand * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12MetaCommand * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12MetaCommand * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12MetaCommand * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        UINT64 ( STDMETHODCALLTYPE *GetRequiredParameterResourceSize )(
            ID3D12MetaCommand * This,
            _In_ D3D12_META_COMMAND_PARAMETER_STAGE Stage,
            _In_ UINT ParameterIndex);
        END_INTERFACE
    } ID3D12MetaCommandVtbl;
    interface ID3D12MetaCommand
    {
        CONST_VTBL struct ID3D12MetaCommandVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> GetRequiredParameterResourceSize(This,Stage,ParameterIndex) )
typedef struct D3D12_DISPATCH_RAYS_DESC
    {
    D3D12_GPU_VIRTUAL_ADDRESS_RANGE RayGenerationShaderRecord;
    D3D12_GPU_VIRTUAL_ADDRESS_RANGE_AND_STRIDE MissShaderTable;
    D3D12_GPU_VIRTUAL_ADDRESS_RANGE_AND_STRIDE HitGroupTable;
    D3D12_GPU_VIRTUAL_ADDRESS_RANGE_AND_STRIDE CallableShaderTable;
    UINT Width;
    UINT Height;
    UINT Depth;
    } D3D12_DISPATCH_RAYS_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0042_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0042_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D12GraphicsCommandList4;
    typedef struct ID3D12GraphicsCommandList4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12GraphicsCommandList4 * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12GraphicsCommandList4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12GraphicsCommandList4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12GraphicsCommandList4 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12GraphicsCommandList4 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12GraphicsCommandList4 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12GraphicsCommandList4 * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12GraphicsCommandList4 * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        D3D12_COMMAND_LIST_TYPE ( STDMETHODCALLTYPE *GetType )(
            ID3D12GraphicsCommandList4 * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            ID3D12GraphicsCommandList4 * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            ID3D12GraphicsCommandList4 * This,
            _In_ ID3D12CommandAllocator *pAllocator,
            _In_opt_ ID3D12PipelineState *pInitialState);
        void ( STDMETHODCALLTYPE *ClearState )(
            ID3D12GraphicsCommandList4 * This,
            _In_opt_ ID3D12PipelineState *pPipelineState);
        void ( STDMETHODCALLTYPE *DrawInstanced )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT VertexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *DrawIndexedInstanced )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT IndexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartIndexLocation,
            _In_ INT BaseVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *Dispatch )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT ThreadGroupCountX,
            _In_ UINT ThreadGroupCountY,
            _In_ UINT ThreadGroupCountZ);
        void ( STDMETHODCALLTYPE *CopyBufferRegion )(
            ID3D12GraphicsCommandList4 * This,
            _In_ ID3D12Resource *pDstBuffer,
            UINT64 DstOffset,
            _In_ ID3D12Resource *pSrcBuffer,
            UINT64 SrcOffset,
            UINT64 NumBytes);
        void ( STDMETHODCALLTYPE *CopyTextureRegion )(
            ID3D12GraphicsCommandList4 * This,
            _In_ const D3D12_TEXTURE_COPY_LOCATION *pDst,
            UINT DstX,
            UINT DstY,
            UINT DstZ,
            _In_ const D3D12_TEXTURE_COPY_LOCATION *pSrc,
            _In_opt_ const D3D12_BOX *pSrcBox);
        void ( STDMETHODCALLTYPE *CopyResource )(
            ID3D12GraphicsCommandList4 * This,
            _In_ ID3D12Resource *pDstResource,
            _In_ ID3D12Resource *pSrcResource);
        void ( STDMETHODCALLTYPE *CopyTiles )(
            ID3D12GraphicsCommandList4 * This,
            _In_ ID3D12Resource *pTiledResource,
            _In_ const D3D12_TILED_RESOURCE_COORDINATE *pTileRegionStartCoordinate,
            _In_ const D3D12_TILE_REGION_SIZE *pTileRegionSize,
            _In_ ID3D12Resource *pBuffer,
            UINT64 BufferStartOffsetInBytes,
            D3D12_TILE_COPY_FLAGS Flags);
        void ( STDMETHODCALLTYPE *ResolveSubresource )(
            ID3D12GraphicsCommandList4 * This,
            _In_ ID3D12Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ ID3D12Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_ DXGI_FORMAT Format);
        void ( STDMETHODCALLTYPE *IASetPrimitiveTopology )(
            ID3D12GraphicsCommandList4 * This,
            _In_ D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology);
        void ( STDMETHODCALLTYPE *RSSetViewports )(
            ID3D12GraphicsCommandList4 * This,
            _In_range_(0, D3D12_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumViewports,
            _In_reads_( NumViewports) const D3D12_VIEWPORT *pViewports);
        void ( STDMETHODCALLTYPE *RSSetScissorRects )(
            ID3D12GraphicsCommandList4 * This,
            _In_range_(0, D3D12_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumRects,
            _In_reads_( NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *OMSetBlendFactor )(
            ID3D12GraphicsCommandList4 * This,
            _In_reads_opt_(4) const FLOAT BlendFactor[ 4 ]);
        void ( STDMETHODCALLTYPE *OMSetStencilRef )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT StencilRef);
        void ( STDMETHODCALLTYPE *SetPipelineState )(
            ID3D12GraphicsCommandList4 * This,
            _In_ ID3D12PipelineState *pPipelineState);
        void ( STDMETHODCALLTYPE *ResourceBarrier )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT NumBarriers,
            _In_reads_(NumBarriers) const D3D12_RESOURCE_BARRIER *pBarriers);
        void ( STDMETHODCALLTYPE *ExecuteBundle )(
            ID3D12GraphicsCommandList4 * This,
            _In_ ID3D12GraphicsCommandList *pCommandList);
        void ( STDMETHODCALLTYPE *SetDescriptorHeaps )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT NumDescriptorHeaps,
            _In_reads_(NumDescriptorHeaps) ID3D12DescriptorHeap *const *ppDescriptorHeaps);
        void ( STDMETHODCALLTYPE *SetComputeRootSignature )(
            ID3D12GraphicsCommandList4 * This,
            _In_opt_ ID3D12RootSignature *pRootSignature);
        void ( STDMETHODCALLTYPE *SetGraphicsRootSignature )(
            ID3D12GraphicsCommandList4 * This,
            _In_opt_ ID3D12RootSignature *pRootSignature);
        void ( STDMETHODCALLTYPE *SetComputeRootDescriptorTable )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
        void ( STDMETHODCALLTYPE *SetGraphicsRootDescriptorTable )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
        void ( STDMETHODCALLTYPE *SetComputeRoot32BitConstant )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT SrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetGraphicsRoot32BitConstant )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT SrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetComputeRoot32BitConstants )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT Num32BitValuesToSet,
            _In_reads_(Num32BitValuesToSet*sizeof(UINT)) const void *pSrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetGraphicsRoot32BitConstants )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT Num32BitValuesToSet,
            _In_reads_(Num32BitValuesToSet*sizeof(UINT)) const void *pSrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetComputeRootConstantBufferView )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetGraphicsRootConstantBufferView )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetComputeRootShaderResourceView )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetGraphicsRootShaderResourceView )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetComputeRootUnorderedAccessView )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetGraphicsRootUnorderedAccessView )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *IASetIndexBuffer )(
            ID3D12GraphicsCommandList4 * This,
            _In_opt_ const D3D12_INDEX_BUFFER_VIEW *pView);
        void ( STDMETHODCALLTYPE *IASetVertexBuffers )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT StartSlot,
            _In_ UINT NumViews,
            _In_reads_opt_(NumViews) const D3D12_VERTEX_BUFFER_VIEW *pViews);
        void ( STDMETHODCALLTYPE *SOSetTargets )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT StartSlot,
            _In_ UINT NumViews,
            _In_reads_opt_(NumViews) const D3D12_STREAM_OUTPUT_BUFFER_VIEW *pViews);
        void ( STDMETHODCALLTYPE *OMSetRenderTargets )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT NumRenderTargetDescriptors,
            _In_opt_ const D3D12_CPU_DESCRIPTOR_HANDLE *pRenderTargetDescriptors,
            _In_ BOOL RTsSingleHandleToDescriptorRange,
            _In_opt_ const D3D12_CPU_DESCRIPTOR_HANDLE *pDepthStencilDescriptor);
        void ( STDMETHODCALLTYPE *ClearDepthStencilView )(
            ID3D12GraphicsCommandList4 * This,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView,
            _In_ D3D12_CLEAR_FLAGS ClearFlags,
            _In_ FLOAT Depth,
            _In_ UINT8 Stencil,
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *ClearRenderTargetView )(
            ID3D12GraphicsCommandList4 * This,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView,
            _In_ const FLOAT ColorRGBA[ 4 ],
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *ClearUnorderedAccessViewUint )(
            ID3D12GraphicsCommandList4 * This,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
            _In_ ID3D12Resource *pResource,
            _In_ const UINT Values[ 4 ],
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *ClearUnorderedAccessViewFloat )(
            ID3D12GraphicsCommandList4 * This,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
            _In_ ID3D12Resource *pResource,
            _In_ const FLOAT Values[ 4 ],
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *DiscardResource )(
            ID3D12GraphicsCommandList4 * This,
            _In_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_DISCARD_REGION *pRegion);
        void ( STDMETHODCALLTYPE *BeginQuery )(
            ID3D12GraphicsCommandList4 * This,
            _In_ ID3D12QueryHeap *pQueryHeap,
            _In_ D3D12_QUERY_TYPE Type,
            _In_ UINT Index);
        void ( STDMETHODCALLTYPE *EndQuery )(
            ID3D12GraphicsCommandList4 * This,
            _In_ ID3D12QueryHeap *pQueryHeap,
            _In_ D3D12_QUERY_TYPE Type,
            _In_ UINT Index);
        void ( STDMETHODCALLTYPE *ResolveQueryData )(
            ID3D12GraphicsCommandList4 * This,
            _In_ ID3D12QueryHeap *pQueryHeap,
            _In_ D3D12_QUERY_TYPE Type,
            _In_ UINT StartIndex,
            _In_ UINT NumQueries,
            _In_ ID3D12Resource *pDestinationBuffer,
            _In_ UINT64 AlignedDestinationBufferOffset);
        void ( STDMETHODCALLTYPE *SetPredication )(
            ID3D12GraphicsCommandList4 * This,
            _In_opt_ ID3D12Resource *pBuffer,
            _In_ UINT64 AlignedBufferOffset,
            _In_ D3D12_PREDICATION_OP Operation);
        void ( STDMETHODCALLTYPE *SetMarker )(
            ID3D12GraphicsCommandList4 * This,
            UINT Metadata,
            _In_reads_bytes_opt_(Size) const void *pData,
            UINT Size);
        void ( STDMETHODCALLTYPE *BeginEvent )(
            ID3D12GraphicsCommandList4 * This,
            UINT Metadata,
            _In_reads_bytes_opt_(Size) const void *pData,
            UINT Size);
        void ( STDMETHODCALLTYPE *EndEvent )(
            ID3D12GraphicsCommandList4 * This);
        void ( STDMETHODCALLTYPE *ExecuteIndirect )(
            ID3D12GraphicsCommandList4 * This,
            _In_ ID3D12CommandSignature *pCommandSignature,
            _In_ UINT MaxCommandCount,
            _In_ ID3D12Resource *pArgumentBuffer,
            _In_ UINT64 ArgumentBufferOffset,
            _In_opt_ ID3D12Resource *pCountBuffer,
            _In_ UINT64 CountBufferOffset);
        void ( STDMETHODCALLTYPE *AtomicCopyBufferUINT )(
            ID3D12GraphicsCommandList4 * This,
            _In_ ID3D12Resource *pDstBuffer,
            UINT64 DstOffset,
            _In_ ID3D12Resource *pSrcBuffer,
            UINT64 SrcOffset,
            UINT Dependencies,
            _In_reads_(Dependencies) ID3D12Resource *const *ppDependentResources,
            _In_reads_(Dependencies) const D3D12_SUBRESOURCE_RANGE_UINT64 *pDependentSubresourceRanges);
        void ( STDMETHODCALLTYPE *AtomicCopyBufferUINT64 )(
            ID3D12GraphicsCommandList4 * This,
            _In_ ID3D12Resource *pDstBuffer,
            UINT64 DstOffset,
            _In_ ID3D12Resource *pSrcBuffer,
            UINT64 SrcOffset,
            UINT Dependencies,
            _In_reads_(Dependencies) ID3D12Resource *const *ppDependentResources,
            _In_reads_(Dependencies) const D3D12_SUBRESOURCE_RANGE_UINT64 *pDependentSubresourceRanges);
        void ( STDMETHODCALLTYPE *OMSetDepthBounds )(
            ID3D12GraphicsCommandList4 * This,
            _In_ FLOAT Min,
            _In_ FLOAT Max);
        void ( STDMETHODCALLTYPE *SetSamplePositions )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT NumSamplesPerPixel,
            _In_ UINT NumPixels,
            _In_reads_(NumSamplesPerPixel*NumPixels) D3D12_SAMPLE_POSITION *pSamplePositions);
        void ( STDMETHODCALLTYPE *ResolveSubresourceRegion )(
            ID3D12GraphicsCommandList4 * This,
            _In_ ID3D12Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ UINT DstX,
            _In_ UINT DstY,
            _In_ ID3D12Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_opt_ D3D12_RECT *pSrcRect,
            _In_ DXGI_FORMAT Format,
            _In_ D3D12_RESOLVE_MODE ResolveMode);
        void ( STDMETHODCALLTYPE *SetViewInstanceMask )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT Mask);
        void ( STDMETHODCALLTYPE *WriteBufferImmediate )(
            ID3D12GraphicsCommandList4 * This,
            UINT Count,
            _In_reads_(Count) const D3D12_WRITEBUFFERIMMEDIATE_PARAMETER *pParams,
            _In_reads_opt_(Count) const D3D12_WRITEBUFFERIMMEDIATE_MODE *pModes);
        void ( STDMETHODCALLTYPE *SetProtectedResourceSession )(
            ID3D12GraphicsCommandList4 * This,
            _In_opt_ ID3D12ProtectedResourceSession *pProtectedResourceSession);
        void ( STDMETHODCALLTYPE *BeginRenderPass )(
            ID3D12GraphicsCommandList4 * This,
            _In_ UINT NumRenderTargets,
            _In_reads_opt_(NumRenderTargets) const D3D12_RENDER_PASS_RENDER_TARGET_DESC *pRenderTargets,
            _In_opt_ const D3D12_RENDER_PASS_DEPTH_STENCIL_DESC *pDepthStencil,
            D3D12_RENDER_PASS_FLAGS Flags);
        void ( STDMETHODCALLTYPE *EndRenderPass )(
            ID3D12GraphicsCommandList4 * This);
        void ( STDMETHODCALLTYPE *InitializeMetaCommand )(
            ID3D12GraphicsCommandList4 * This,
            _In_ ID3D12MetaCommand *pMetaCommand,
            _In_reads_bytes_opt_(InitializationParametersDataSizeInBytes) const void *pInitializationParametersData,
            _In_ SIZE_T InitializationParametersDataSizeInBytes);
        void ( STDMETHODCALLTYPE *ExecuteMetaCommand )(
            ID3D12GraphicsCommandList4 * This,
            _In_ ID3D12MetaCommand *pMetaCommand,
            _In_reads_bytes_opt_(ExecutionParametersDataSizeInBytes) const void *pExecutionParametersData,
            _In_ SIZE_T ExecutionParametersDataSizeInBytes);
        void ( STDMETHODCALLTYPE *BuildRaytracingAccelerationStructure )(
            ID3D12GraphicsCommandList4 * This,
            _In_ const D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC *pDesc,
            _In_ UINT NumPostbuildInfoDescs,
            _In_reads_opt_(NumPostbuildInfoDescs) const D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC *pPostbuildInfoDescs);
        void ( STDMETHODCALLTYPE *EmitRaytracingAccelerationStructurePostbuildInfo )(
            ID3D12GraphicsCommandList4 * This,
            _In_ const D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC *pDesc,
            _In_ UINT NumSourceAccelerationStructures,
            _In_reads_( NumSourceAccelerationStructures ) const D3D12_GPU_VIRTUAL_ADDRESS *pSourceAccelerationStructureData);
        void ( STDMETHODCALLTYPE *CopyRaytracingAccelerationStructure )(
            ID3D12GraphicsCommandList4 * This,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS DestAccelerationStructureData,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS SourceAccelerationStructureData,
            _In_ D3D12_RAYTRACING_ACCELERATION_STRUCTURE_COPY_MODE Mode);
        void ( STDMETHODCALLTYPE *SetPipelineState1 )(
            ID3D12GraphicsCommandList4 * This,
            _In_ ID3D12StateObject *pStateObject);
        void ( STDMETHODCALLTYPE *DispatchRays )(
            ID3D12GraphicsCommandList4 * This,
            _In_ const D3D12_DISPATCH_RAYS_DESC *pDesc);
        END_INTERFACE
    } ID3D12GraphicsCommandList4Vtbl;
    interface ID3D12GraphicsCommandList4
    {
        CONST_VTBL struct ID3D12GraphicsCommandList4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> GetType(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Reset(This,pAllocator,pInitialState) )
    ( (This)->lpVtbl -> ClearState(This,pPipelineState) )
    ( (This)->lpVtbl -> DrawInstanced(This,VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation) )
    ( (This)->lpVtbl -> DrawIndexedInstanced(This,IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation) )
    ( (This)->lpVtbl -> Dispatch(This,ThreadGroupCountX,ThreadGroupCountY,ThreadGroupCountZ) )
    ( (This)->lpVtbl -> CopyBufferRegion(This,pDstBuffer,DstOffset,pSrcBuffer,SrcOffset,NumBytes) )
    ( (This)->lpVtbl -> CopyTextureRegion(This,pDst,DstX,DstY,DstZ,pSrc,pSrcBox) )
    ( (This)->lpVtbl -> CopyResource(This,pDstResource,pSrcResource) )
    ( (This)->lpVtbl -> CopyTiles(This,pTiledResource,pTileRegionStartCoordinate,pTileRegionSize,pBuffer,BufferStartOffsetInBytes,Flags) )
    ( (This)->lpVtbl -> ResolveSubresource(This,pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format) )
    ( (This)->lpVtbl -> IASetPrimitiveTopology(This,PrimitiveTopology) )
    ( (This)->lpVtbl -> RSSetViewports(This,NumViewports,pViewports) )
    ( (This)->lpVtbl -> RSSetScissorRects(This,NumRects,pRects) )
    ( (This)->lpVtbl -> OMSetBlendFactor(This,BlendFactor) )
    ( (This)->lpVtbl -> OMSetStencilRef(This,StencilRef) )
    ( (This)->lpVtbl -> SetPipelineState(This,pPipelineState) )
    ( (This)->lpVtbl -> ResourceBarrier(This,NumBarriers,pBarriers) )
    ( (This)->lpVtbl -> ExecuteBundle(This,pCommandList) )
    ( (This)->lpVtbl -> SetDescriptorHeaps(This,NumDescriptorHeaps,ppDescriptorHeaps) )
    ( (This)->lpVtbl -> SetComputeRootSignature(This,pRootSignature) )
    ( (This)->lpVtbl -> SetGraphicsRootSignature(This,pRootSignature) )
    ( (This)->lpVtbl -> SetComputeRootDescriptorTable(This,RootParameterIndex,BaseDescriptor) )
    ( (This)->lpVtbl -> SetGraphicsRootDescriptorTable(This,RootParameterIndex,BaseDescriptor) )
    ( (This)->lpVtbl -> SetComputeRoot32BitConstant(This,RootParameterIndex,SrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetGraphicsRoot32BitConstant(This,RootParameterIndex,SrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetComputeRoot32BitConstants(This,RootParameterIndex,Num32BitValuesToSet,pSrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetGraphicsRoot32BitConstants(This,RootParameterIndex,Num32BitValuesToSet,pSrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetComputeRootConstantBufferView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetGraphicsRootConstantBufferView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetComputeRootShaderResourceView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetGraphicsRootShaderResourceView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetComputeRootUnorderedAccessView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetGraphicsRootUnorderedAccessView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> IASetIndexBuffer(This,pView) )
    ( (This)->lpVtbl -> IASetVertexBuffers(This,StartSlot,NumViews,pViews) )
    ( (This)->lpVtbl -> SOSetTargets(This,StartSlot,NumViews,pViews) )
    ( (This)->lpVtbl -> OMSetRenderTargets(This,NumRenderTargetDescriptors,pRenderTargetDescriptors,RTsSingleHandleToDescriptorRange,pDepthStencilDescriptor) )
    ( (This)->lpVtbl -> ClearDepthStencilView(This,DepthStencilView,ClearFlags,Depth,Stencil,NumRects,pRects) )
    ( (This)->lpVtbl -> ClearRenderTargetView(This,RenderTargetView,ColorRGBA,NumRects,pRects) )
    ( (This)->lpVtbl -> ClearUnorderedAccessViewUint(This,ViewGPUHandleInCurrentHeap,ViewCPUHandle,pResource,Values,NumRects,pRects) )
    ( (This)->lpVtbl -> ClearUnorderedAccessViewFloat(This,ViewGPUHandleInCurrentHeap,ViewCPUHandle,pResource,Values,NumRects,pRects) )
    ( (This)->lpVtbl -> DiscardResource(This,pResource,pRegion) )
    ( (This)->lpVtbl -> BeginQuery(This,pQueryHeap,Type,Index) )
    ( (This)->lpVtbl -> EndQuery(This,pQueryHeap,Type,Index) )
    ( (This)->lpVtbl -> ResolveQueryData(This,pQueryHeap,Type,StartIndex,NumQueries,pDestinationBuffer,AlignedDestinationBufferOffset) )
    ( (This)->lpVtbl -> SetPredication(This,pBuffer,AlignedBufferOffset,Operation) )
    ( (This)->lpVtbl -> SetMarker(This,Metadata,pData,Size) )
    ( (This)->lpVtbl -> BeginEvent(This,Metadata,pData,Size) )
    ( (This)->lpVtbl -> EndEvent(This) )
    ( (This)->lpVtbl -> ExecuteIndirect(This,pCommandSignature,MaxCommandCount,pArgumentBuffer,ArgumentBufferOffset,pCountBuffer,CountBufferOffset) )
    ( (This)->lpVtbl -> AtomicCopyBufferUINT(This,pDstBuffer,DstOffset,pSrcBuffer,SrcOffset,Dependencies,ppDependentResources,pDependentSubresourceRanges) )
    ( (This)->lpVtbl -> AtomicCopyBufferUINT64(This,pDstBuffer,DstOffset,pSrcBuffer,SrcOffset,Dependencies,ppDependentResources,pDependentSubresourceRanges) )
    ( (This)->lpVtbl -> OMSetDepthBounds(This,Min,Max) )
    ( (This)->lpVtbl -> SetSamplePositions(This,NumSamplesPerPixel,NumPixels,pSamplePositions) )
    ( (This)->lpVtbl -> ResolveSubresourceRegion(This,pDstResource,DstSubresource,DstX,DstY,pSrcResource,SrcSubresource,pSrcRect,Format,ResolveMode) )
    ( (This)->lpVtbl -> SetViewInstanceMask(This,Mask) )
    ( (This)->lpVtbl -> WriteBufferImmediate(This,Count,pParams,pModes) )
    ( (This)->lpVtbl -> SetProtectedResourceSession(This,pProtectedResourceSession) )
    ( (This)->lpVtbl -> BeginRenderPass(This,NumRenderTargets,pRenderTargets,pDepthStencil,Flags) )
    ( (This)->lpVtbl -> EndRenderPass(This) )
    ( (This)->lpVtbl -> InitializeMetaCommand(This,pMetaCommand,pInitializationParametersData,InitializationParametersDataSizeInBytes) )
    ( (This)->lpVtbl -> ExecuteMetaCommand(This,pMetaCommand,pExecutionParametersData,ExecutionParametersDataSizeInBytes) )
    ( (This)->lpVtbl -> BuildRaytracingAccelerationStructure(This,pDesc,NumPostbuildInfoDescs,pPostbuildInfoDescs) )
    ( (This)->lpVtbl -> EmitRaytracingAccelerationStructurePostbuildInfo(This,pDesc,NumSourceAccelerationStructures,pSourceAccelerationStructureData) )
    ( (This)->lpVtbl -> CopyRaytracingAccelerationStructure(This,DestAccelerationStructureData,SourceAccelerationStructureData,Mode) )
    ( (This)->lpVtbl -> SetPipelineState1(This,pStateObject) )
    ( (This)->lpVtbl -> DispatchRays(This,pDesc) )
EXTERN_C const IID IID_ID3D12Tools;
    typedef struct ID3D12ToolsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12Tools * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12Tools * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12Tools * This);
        void ( STDMETHODCALLTYPE *EnableShaderInstrumentation )(
            ID3D12Tools * This,
            BOOL bEnable);
        BOOL ( STDMETHODCALLTYPE *ShaderInstrumentationEnabled )(
            ID3D12Tools * This);
        END_INTERFACE
    } ID3D12ToolsVtbl;
    interface ID3D12Tools
    {
        CONST_VTBL struct ID3D12ToolsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnableShaderInstrumentation(This,bEnable) )
    ( (This)->lpVtbl -> ShaderInstrumentationEnabled(This) )
typedef struct D3D12_SUBRESOURCE_DATA
    {
    const void *pData;
    LONG_PTR RowPitch;
    LONG_PTR SlicePitch;
    } D3D12_SUBRESOURCE_DATA;
typedef struct D3D12_MEMCPY_DEST
    {
    void *pData;
    SIZE_T RowPitch;
    SIZE_T SlicePitch;
    } D3D12_MEMCPY_DEST;
#include "d3d12sdklayers.h"
typedef HRESULT (WINAPI* PFN_D3D12_CREATE_DEVICE)( _In_opt_ IUnknown*,
    D3D_FEATURE_LEVEL,
    _In_ REFIID, _COM_Outptr_opt_ void** );
HRESULT WINAPI D3D12CreateDevice(
    _In_opt_ IUnknown* pAdapter,
    D3D_FEATURE_LEVEL MinimumFeatureLevel,
    _In_ REFIID riid,
    _COM_Outptr_opt_ void** ppDevice );
typedef HRESULT (WINAPI* PFN_D3D12_GET_DEBUG_INTERFACE)( _In_ REFIID, _COM_Outptr_opt_ void** );
HRESULT WINAPI D3D12GetDebugInterface( _In_ REFIID riid, _COM_Outptr_opt_ void** ppvDebug );
HRESULT WINAPI D3D12EnableExperimentalFeatures(
    UINT NumFeatures,
    __in_ecount(NumFeatures) const IID* pIIDs,
    __in_ecount_opt(NumFeatures) void* pConfigurationStructs,
    __in_ecount_opt(NumFeatures) UINT* pConfigurationStructSizes);
static const UUID D3D12ExperimentalShaderModels = {
    0x76f5573e,
    0xf13a,
    0x40f5,
    { 0xb2, 0x97, 0x81, 0xce, 0x9e, 0x18, 0x93, 0x3f }
};
static const UUID D3D12TiledResourceTier4 = {
    0xc9c4725f,
    0xa81a,
    0x4f56,
    { 0x8c, 0x5b, 0xc5, 0x10, 0x39, 0xd6, 0x94, 0xfb }
};
static const UUID D3D12MetaCommand = {
    0xc734c97e,
    0x8077,
    0x48c8,
    { 0x9f, 0xdc, 0xd9, 0xd1, 0xdd, 0x31, 0xdd, 0x77 }
};
static const UUID D3D12ComputeOnlyDevices = {
    0x50f7ab08,
    0x4b6d,
    0x4e14,
    {0x89, 0xa5, 0x5d, 0x16, 0xcd, 0x27, 0x25, 0x94}
};
typedef
enum D3D12_AXIS_SHADING_RATE
    {
        D3D12_AXIS_SHADING_RATE_1X = 0,
        D3D12_AXIS_SHADING_RATE_2X = 0x1,
        D3D12_AXIS_SHADING_RATE_4X = 0x2
    } D3D12_AXIS_SHADING_RATE;
typedef
enum D3D12_SHADING_RATE
    {
        D3D12_SHADING_RATE_1X1 = 0,
        D3D12_SHADING_RATE_1X2 = 0x1,
        D3D12_SHADING_RATE_2X1 = 0x4,
        D3D12_SHADING_RATE_2X2 = 0x5,
        D3D12_SHADING_RATE_2X4 = 0x6,
        D3D12_SHADING_RATE_4X2 = 0x9,
        D3D12_SHADING_RATE_4X4 = 0xa
    } D3D12_SHADING_RATE;
typedef
enum D3D12_SHADING_RATE_COMBINER
    {
        D3D12_SHADING_RATE_COMBINER_PASSTHROUGH = 0,
        D3D12_SHADING_RATE_COMBINER_OVERRIDE = 1,
        D3D12_SHADING_RATE_COMBINER_MIN = 2,
        D3D12_SHADING_RATE_COMBINER_MAX = 3,
        D3D12_SHADING_RATE_COMBINER_SUM = 4
    } D3D12_SHADING_RATE_COMBINER;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0044_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0044_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D12GraphicsCommandList5;
    typedef struct ID3D12GraphicsCommandList5Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D12GraphicsCommandList5 * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D12GraphicsCommandList5 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D12GraphicsCommandList5 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D12GraphicsCommandList5 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D12GraphicsCommandList5 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D12GraphicsCommandList5 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            ID3D12GraphicsCommandList5 * This,
            _In_z_ LPCWSTR Name);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            ID3D12GraphicsCommandList5 * This,
            REFIID riid,
            _COM_Outptr_opt_ void **ppvDevice);
        D3D12_COMMAND_LIST_TYPE ( STDMETHODCALLTYPE *GetType )(
            ID3D12GraphicsCommandList5 * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            ID3D12GraphicsCommandList5 * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            ID3D12GraphicsCommandList5 * This,
            _In_ ID3D12CommandAllocator *pAllocator,
            _In_opt_ ID3D12PipelineState *pInitialState);
        void ( STDMETHODCALLTYPE *ClearState )(
            ID3D12GraphicsCommandList5 * This,
            _In_opt_ ID3D12PipelineState *pPipelineState);
        void ( STDMETHODCALLTYPE *DrawInstanced )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT VertexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *DrawIndexedInstanced )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT IndexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartIndexLocation,
            _In_ INT BaseVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *Dispatch )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT ThreadGroupCountX,
            _In_ UINT ThreadGroupCountY,
            _In_ UINT ThreadGroupCountZ);
        void ( STDMETHODCALLTYPE *CopyBufferRegion )(
            ID3D12GraphicsCommandList5 * This,
            _In_ ID3D12Resource *pDstBuffer,
            UINT64 DstOffset,
            _In_ ID3D12Resource *pSrcBuffer,
            UINT64 SrcOffset,
            UINT64 NumBytes);
        void ( STDMETHODCALLTYPE *CopyTextureRegion )(
            ID3D12GraphicsCommandList5 * This,
            _In_ const D3D12_TEXTURE_COPY_LOCATION *pDst,
            UINT DstX,
            UINT DstY,
            UINT DstZ,
            _In_ const D3D12_TEXTURE_COPY_LOCATION *pSrc,
            _In_opt_ const D3D12_BOX *pSrcBox);
        void ( STDMETHODCALLTYPE *CopyResource )(
            ID3D12GraphicsCommandList5 * This,
            _In_ ID3D12Resource *pDstResource,
            _In_ ID3D12Resource *pSrcResource);
        void ( STDMETHODCALLTYPE *CopyTiles )(
            ID3D12GraphicsCommandList5 * This,
            _In_ ID3D12Resource *pTiledResource,
            _In_ const D3D12_TILED_RESOURCE_COORDINATE *pTileRegionStartCoordinate,
            _In_ const D3D12_TILE_REGION_SIZE *pTileRegionSize,
            _In_ ID3D12Resource *pBuffer,
            UINT64 BufferStartOffsetInBytes,
            D3D12_TILE_COPY_FLAGS Flags);
        void ( STDMETHODCALLTYPE *ResolveSubresource )(
            ID3D12GraphicsCommandList5 * This,
            _In_ ID3D12Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ ID3D12Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_ DXGI_FORMAT Format);
        void ( STDMETHODCALLTYPE *IASetPrimitiveTopology )(
            ID3D12GraphicsCommandList5 * This,
            _In_ D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology);
        void ( STDMETHODCALLTYPE *RSSetViewports )(
            ID3D12GraphicsCommandList5 * This,
            _In_range_(0, D3D12_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumViewports,
            _In_reads_( NumViewports) const D3D12_VIEWPORT *pViewports);
        void ( STDMETHODCALLTYPE *RSSetScissorRects )(
            ID3D12GraphicsCommandList5 * This,
            _In_range_(0, D3D12_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumRects,
            _In_reads_( NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *OMSetBlendFactor )(
            ID3D12GraphicsCommandList5 * This,
            _In_reads_opt_(4) const FLOAT BlendFactor[ 4 ]);
        void ( STDMETHODCALLTYPE *OMSetStencilRef )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT StencilRef);
        void ( STDMETHODCALLTYPE *SetPipelineState )(
            ID3D12GraphicsCommandList5 * This,
            _In_ ID3D12PipelineState *pPipelineState);
        void ( STDMETHODCALLTYPE *ResourceBarrier )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT NumBarriers,
            _In_reads_(NumBarriers) const D3D12_RESOURCE_BARRIER *pBarriers);
        void ( STDMETHODCALLTYPE *ExecuteBundle )(
            ID3D12GraphicsCommandList5 * This,
            _In_ ID3D12GraphicsCommandList *pCommandList);
        void ( STDMETHODCALLTYPE *SetDescriptorHeaps )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT NumDescriptorHeaps,
            _In_reads_(NumDescriptorHeaps) ID3D12DescriptorHeap *const *ppDescriptorHeaps);
        void ( STDMETHODCALLTYPE *SetComputeRootSignature )(
            ID3D12GraphicsCommandList5 * This,
            _In_opt_ ID3D12RootSignature *pRootSignature);
        void ( STDMETHODCALLTYPE *SetGraphicsRootSignature )(
            ID3D12GraphicsCommandList5 * This,
            _In_opt_ ID3D12RootSignature *pRootSignature);
        void ( STDMETHODCALLTYPE *SetComputeRootDescriptorTable )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
        void ( STDMETHODCALLTYPE *SetGraphicsRootDescriptorTable )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
        void ( STDMETHODCALLTYPE *SetComputeRoot32BitConstant )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT SrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetGraphicsRoot32BitConstant )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT SrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetComputeRoot32BitConstants )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT Num32BitValuesToSet,
            _In_reads_(Num32BitValuesToSet*sizeof(UINT)) const void *pSrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetGraphicsRoot32BitConstants )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT RootParameterIndex,
            _In_ UINT Num32BitValuesToSet,
            _In_reads_(Num32BitValuesToSet*sizeof(UINT)) const void *pSrcData,
            _In_ UINT DestOffsetIn32BitValues);
        void ( STDMETHODCALLTYPE *SetComputeRootConstantBufferView )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetGraphicsRootConstantBufferView )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetComputeRootShaderResourceView )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetGraphicsRootShaderResourceView )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetComputeRootUnorderedAccessView )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *SetGraphicsRootUnorderedAccessView )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT RootParameterIndex,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
        void ( STDMETHODCALLTYPE *IASetIndexBuffer )(
            ID3D12GraphicsCommandList5 * This,
            _In_opt_ const D3D12_INDEX_BUFFER_VIEW *pView);
        void ( STDMETHODCALLTYPE *IASetVertexBuffers )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT StartSlot,
            _In_ UINT NumViews,
            _In_reads_opt_(NumViews) const D3D12_VERTEX_BUFFER_VIEW *pViews);
        void ( STDMETHODCALLTYPE *SOSetTargets )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT StartSlot,
            _In_ UINT NumViews,
            _In_reads_opt_(NumViews) const D3D12_STREAM_OUTPUT_BUFFER_VIEW *pViews);
        void ( STDMETHODCALLTYPE *OMSetRenderTargets )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT NumRenderTargetDescriptors,
            _In_opt_ const D3D12_CPU_DESCRIPTOR_HANDLE *pRenderTargetDescriptors,
            _In_ BOOL RTsSingleHandleToDescriptorRange,
            _In_opt_ const D3D12_CPU_DESCRIPTOR_HANDLE *pDepthStencilDescriptor);
        void ( STDMETHODCALLTYPE *ClearDepthStencilView )(
            ID3D12GraphicsCommandList5 * This,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView,
            _In_ D3D12_CLEAR_FLAGS ClearFlags,
            _In_ FLOAT Depth,
            _In_ UINT8 Stencil,
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *ClearRenderTargetView )(
            ID3D12GraphicsCommandList5 * This,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView,
            _In_ const FLOAT ColorRGBA[ 4 ],
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *ClearUnorderedAccessViewUint )(
            ID3D12GraphicsCommandList5 * This,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
            _In_ ID3D12Resource *pResource,
            _In_ const UINT Values[ 4 ],
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *ClearUnorderedAccessViewFloat )(
            ID3D12GraphicsCommandList5 * This,
            _In_ D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
            _In_ D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
            _In_ ID3D12Resource *pResource,
            _In_ const FLOAT Values[ 4 ],
            _In_ UINT NumRects,
            _In_reads_(NumRects) const D3D12_RECT *pRects);
        void ( STDMETHODCALLTYPE *DiscardResource )(
            ID3D12GraphicsCommandList5 * This,
            _In_ ID3D12Resource *pResource,
            _In_opt_ const D3D12_DISCARD_REGION *pRegion);
        void ( STDMETHODCALLTYPE *BeginQuery )(
            ID3D12GraphicsCommandList5 * This,
            _In_ ID3D12QueryHeap *pQueryHeap,
            _In_ D3D12_QUERY_TYPE Type,
            _In_ UINT Index);
        void ( STDMETHODCALLTYPE *EndQuery )(
            ID3D12GraphicsCommandList5 * This,
            _In_ ID3D12QueryHeap *pQueryHeap,
            _In_ D3D12_QUERY_TYPE Type,
            _In_ UINT Index);
        void ( STDMETHODCALLTYPE *ResolveQueryData )(
            ID3D12GraphicsCommandList5 * This,
            _In_ ID3D12QueryHeap *pQueryHeap,
            _In_ D3D12_QUERY_TYPE Type,
            _In_ UINT StartIndex,
            _In_ UINT NumQueries,
            _In_ ID3D12Resource *pDestinationBuffer,
            _In_ UINT64 AlignedDestinationBufferOffset);
        void ( STDMETHODCALLTYPE *SetPredication )(
            ID3D12GraphicsCommandList5 * This,
            _In_opt_ ID3D12Resource *pBuffer,
            _In_ UINT64 AlignedBufferOffset,
            _In_ D3D12_PREDICATION_OP Operation);
        void ( STDMETHODCALLTYPE *SetMarker )(
            ID3D12GraphicsCommandList5 * This,
            UINT Metadata,
            _In_reads_bytes_opt_(Size) const void *pData,
            UINT Size);
        void ( STDMETHODCALLTYPE *BeginEvent )(
            ID3D12GraphicsCommandList5 * This,
            UINT Metadata,
            _In_reads_bytes_opt_(Size) const void *pData,
            UINT Size);
        void ( STDMETHODCALLTYPE *EndEvent )(
            ID3D12GraphicsCommandList5 * This);
        void ( STDMETHODCALLTYPE *ExecuteIndirect )(
            ID3D12GraphicsCommandList5 * This,
            _In_ ID3D12CommandSignature *pCommandSignature,
            _In_ UINT MaxCommandCount,
            _In_ ID3D12Resource *pArgumentBuffer,
            _In_ UINT64 ArgumentBufferOffset,
            _In_opt_ ID3D12Resource *pCountBuffer,
            _In_ UINT64 CountBufferOffset);
        void ( STDMETHODCALLTYPE *AtomicCopyBufferUINT )(
            ID3D12GraphicsCommandList5 * This,
            _In_ ID3D12Resource *pDstBuffer,
            UINT64 DstOffset,
            _In_ ID3D12Resource *pSrcBuffer,
            UINT64 SrcOffset,
            UINT Dependencies,
            _In_reads_(Dependencies) ID3D12Resource *const *ppDependentResources,
            _In_reads_(Dependencies) const D3D12_SUBRESOURCE_RANGE_UINT64 *pDependentSubresourceRanges);
        void ( STDMETHODCALLTYPE *AtomicCopyBufferUINT64 )(
            ID3D12GraphicsCommandList5 * This,
            _In_ ID3D12Resource *pDstBuffer,
            UINT64 DstOffset,
            _In_ ID3D12Resource *pSrcBuffer,
            UINT64 SrcOffset,
            UINT Dependencies,
            _In_reads_(Dependencies) ID3D12Resource *const *ppDependentResources,
            _In_reads_(Dependencies) const D3D12_SUBRESOURCE_RANGE_UINT64 *pDependentSubresourceRanges);
        void ( STDMETHODCALLTYPE *OMSetDepthBounds )(
            ID3D12GraphicsCommandList5 * This,
            _In_ FLOAT Min,
            _In_ FLOAT Max);
        void ( STDMETHODCALLTYPE *SetSamplePositions )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT NumSamplesPerPixel,
            _In_ UINT NumPixels,
            _In_reads_(NumSamplesPerPixel*NumPixels) D3D12_SAMPLE_POSITION *pSamplePositions);
        void ( STDMETHODCALLTYPE *ResolveSubresourceRegion )(
            ID3D12GraphicsCommandList5 * This,
            _In_ ID3D12Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ UINT DstX,
            _In_ UINT DstY,
            _In_ ID3D12Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_opt_ D3D12_RECT *pSrcRect,
            _In_ DXGI_FORMAT Format,
            _In_ D3D12_RESOLVE_MODE ResolveMode);
        void ( STDMETHODCALLTYPE *SetViewInstanceMask )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT Mask);
        void ( STDMETHODCALLTYPE *WriteBufferImmediate )(
            ID3D12GraphicsCommandList5 * This,
            UINT Count,
            _In_reads_(Count) const D3D12_WRITEBUFFERIMMEDIATE_PARAMETER *pParams,
            _In_reads_opt_(Count) const D3D12_WRITEBUFFERIMMEDIATE_MODE *pModes);
        void ( STDMETHODCALLTYPE *SetProtectedResourceSession )(
            ID3D12GraphicsCommandList5 * This,
            _In_opt_ ID3D12ProtectedResourceSession *pProtectedResourceSession);
        void ( STDMETHODCALLTYPE *BeginRenderPass )(
            ID3D12GraphicsCommandList5 * This,
            _In_ UINT NumRenderTargets,
            _In_reads_opt_(NumRenderTargets) const D3D12_RENDER_PASS_RENDER_TARGET_DESC *pRenderTargets,
            _In_opt_ const D3D12_RENDER_PASS_DEPTH_STENCIL_DESC *pDepthStencil,
            D3D12_RENDER_PASS_FLAGS Flags);
        void ( STDMETHODCALLTYPE *EndRenderPass )(
            ID3D12GraphicsCommandList5 * This);
        void ( STDMETHODCALLTYPE *InitializeMetaCommand )(
            ID3D12GraphicsCommandList5 * This,
            _In_ ID3D12MetaCommand *pMetaCommand,
            _In_reads_bytes_opt_(InitializationParametersDataSizeInBytes) const void *pInitializationParametersData,
            _In_ SIZE_T InitializationParametersDataSizeInBytes);
        void ( STDMETHODCALLTYPE *ExecuteMetaCommand )(
            ID3D12GraphicsCommandList5 * This,
            _In_ ID3D12MetaCommand *pMetaCommand,
            _In_reads_bytes_opt_(ExecutionParametersDataSizeInBytes) const void *pExecutionParametersData,
            _In_ SIZE_T ExecutionParametersDataSizeInBytes);
        void ( STDMETHODCALLTYPE *BuildRaytracingAccelerationStructure )(
            ID3D12GraphicsCommandList5 * This,
            _In_ const D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC *pDesc,
            _In_ UINT NumPostbuildInfoDescs,
            _In_reads_opt_(NumPostbuildInfoDescs) const D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC *pPostbuildInfoDescs);
        void ( STDMETHODCALLTYPE *EmitRaytracingAccelerationStructurePostbuildInfo )(
            ID3D12GraphicsCommandList5 * This,
            _In_ const D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC *pDesc,
            _In_ UINT NumSourceAccelerationStructures,
            _In_reads_( NumSourceAccelerationStructures ) const D3D12_GPU_VIRTUAL_ADDRESS *pSourceAccelerationStructureData);
        void ( STDMETHODCALLTYPE *CopyRaytracingAccelerationStructure )(
            ID3D12GraphicsCommandList5 * This,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS DestAccelerationStructureData,
            _In_ D3D12_GPU_VIRTUAL_ADDRESS SourceAccelerationStructureData,
            _In_ D3D12_RAYTRACING_ACCELERATION_STRUCTURE_COPY_MODE Mode);
        void ( STDMETHODCALLTYPE *SetPipelineState1 )(
            ID3D12GraphicsCommandList5 * This,
            _In_ ID3D12StateObject *pStateObject);
        void ( STDMETHODCALLTYPE *DispatchRays )(
            ID3D12GraphicsCommandList5 * This,
            _In_ const D3D12_DISPATCH_RAYS_DESC *pDesc);
        void ( STDMETHODCALLTYPE *RSSetShadingRate )(
            ID3D12GraphicsCommandList5 * This,
            _In_ D3D12_SHADING_RATE baseShadingRate,
            _In_reads_opt_(D3D12_RS_SET_SHADING_RATE_COMBINER_COUNT) const D3D12_SHADING_RATE_COMBINER *combiners);
        void ( STDMETHODCALLTYPE *RSSetShadingRateImage )(
            ID3D12GraphicsCommandList5 * This,
            _In_opt_ ID3D12Resource *shadingRateImage);
        END_INTERFACE
    } ID3D12GraphicsCommandList5Vtbl;
    interface ID3D12GraphicsCommandList5
    {
        CONST_VTBL struct ID3D12GraphicsCommandList5Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> SetName(This,Name) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppvDevice) )
    ( (This)->lpVtbl -> GetType(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Reset(This,pAllocator,pInitialState) )
    ( (This)->lpVtbl -> ClearState(This,pPipelineState) )
    ( (This)->lpVtbl -> DrawInstanced(This,VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation) )
    ( (This)->lpVtbl -> DrawIndexedInstanced(This,IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation) )
    ( (This)->lpVtbl -> Dispatch(This,ThreadGroupCountX,ThreadGroupCountY,ThreadGroupCountZ) )
    ( (This)->lpVtbl -> CopyBufferRegion(This,pDstBuffer,DstOffset,pSrcBuffer,SrcOffset,NumBytes) )
    ( (This)->lpVtbl -> CopyTextureRegion(This,pDst,DstX,DstY,DstZ,pSrc,pSrcBox) )
    ( (This)->lpVtbl -> CopyResource(This,pDstResource,pSrcResource) )
    ( (This)->lpVtbl -> CopyTiles(This,pTiledResource,pTileRegionStartCoordinate,pTileRegionSize,pBuffer,BufferStartOffsetInBytes,Flags) )
    ( (This)->lpVtbl -> ResolveSubresource(This,pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format) )
    ( (This)->lpVtbl -> IASetPrimitiveTopology(This,PrimitiveTopology) )
    ( (This)->lpVtbl -> RSSetViewports(This,NumViewports,pViewports) )
    ( (This)->lpVtbl -> RSSetScissorRects(This,NumRects,pRects) )
    ( (This)->lpVtbl -> OMSetBlendFactor(This,BlendFactor) )
    ( (This)->lpVtbl -> OMSetStencilRef(This,StencilRef) )
    ( (This)->lpVtbl -> SetPipelineState(This,pPipelineState) )
    ( (This)->lpVtbl -> ResourceBarrier(This,NumBarriers,pBarriers) )
    ( (This)->lpVtbl -> ExecuteBundle(This,pCommandList) )
    ( (This)->lpVtbl -> SetDescriptorHeaps(This,NumDescriptorHeaps,ppDescriptorHeaps) )
    ( (This)->lpVtbl -> SetComputeRootSignature(This,pRootSignature) )
    ( (This)->lpVtbl -> SetGraphicsRootSignature(This,pRootSignature) )
    ( (This)->lpVtbl -> SetComputeRootDescriptorTable(This,RootParameterIndex,BaseDescriptor) )
    ( (This)->lpVtbl -> SetGraphicsRootDescriptorTable(This,RootParameterIndex,BaseDescriptor) )
    ( (This)->lpVtbl -> SetComputeRoot32BitConstant(This,RootParameterIndex,SrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetGraphicsRoot32BitConstant(This,RootParameterIndex,SrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetComputeRoot32BitConstants(This,RootParameterIndex,Num32BitValuesToSet,pSrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetGraphicsRoot32BitConstants(This,RootParameterIndex,Num32BitValuesToSet,pSrcData,DestOffsetIn32BitValues) )
    ( (This)->lpVtbl -> SetComputeRootConstantBufferView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetGraphicsRootConstantBufferView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetComputeRootShaderResourceView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetGraphicsRootShaderResourceView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetComputeRootUnorderedAccessView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> SetGraphicsRootUnorderedAccessView(This,RootParameterIndex,BufferLocation) )
    ( (This)->lpVtbl -> IASetIndexBuffer(This,pView) )
    ( (This)->lpVtbl -> IASetVertexBuffers(This,StartSlot,NumViews,pViews) )
    ( (This)->lpVtbl -> SOSetTargets(This,StartSlot,NumViews,pViews) )
    ( (This)->lpVtbl -> OMSetRenderTargets(This,NumRenderTargetDescriptors,pRenderTargetDescriptors,RTsSingleHandleToDescriptorRange,pDepthStencilDescriptor) )
    ( (This)->lpVtbl -> ClearDepthStencilView(This,DepthStencilView,ClearFlags,Depth,Stencil,NumRects,pRects) )
    ( (This)->lpVtbl -> ClearRenderTargetView(This,RenderTargetView,ColorRGBA,NumRects,pRects) )
    ( (This)->lpVtbl -> ClearUnorderedAccessViewUint(This,ViewGPUHandleInCurrentHeap,ViewCPUHandle,pResource,Values,NumRects,pRects) )
    ( (This)->lpVtbl -> ClearUnorderedAccessViewFloat(This,ViewGPUHandleInCurrentHeap,ViewCPUHandle,pResource,Values,NumRects,pRects) )
    ( (This)->lpVtbl -> DiscardResource(This,pResource,pRegion) )
    ( (This)->lpVtbl -> BeginQuery(This,pQueryHeap,Type,Index) )
    ( (This)->lpVtbl -> EndQuery(This,pQueryHeap,Type,Index) )
    ( (This)->lpVtbl -> ResolveQueryData(This,pQueryHeap,Type,StartIndex,NumQueries,pDestinationBuffer,AlignedDestinationBufferOffset) )
    ( (This)->lpVtbl -> SetPredication(This,pBuffer,AlignedBufferOffset,Operation) )
    ( (This)->lpVtbl -> SetMarker(This,Metadata,pData,Size) )
    ( (This)->lpVtbl -> BeginEvent(This,Metadata,pData,Size) )
    ( (This)->lpVtbl -> EndEvent(This) )
    ( (This)->lpVtbl -> ExecuteIndirect(This,pCommandSignature,MaxCommandCount,pArgumentBuffer,ArgumentBufferOffset,pCountBuffer,CountBufferOffset) )
    ( (This)->lpVtbl -> AtomicCopyBufferUINT(This,pDstBuffer,DstOffset,pSrcBuffer,SrcOffset,Dependencies,ppDependentResources,pDependentSubresourceRanges) )
    ( (This)->lpVtbl -> AtomicCopyBufferUINT64(This,pDstBuffer,DstOffset,pSrcBuffer,SrcOffset,Dependencies,ppDependentResources,pDependentSubresourceRanges) )
    ( (This)->lpVtbl -> OMSetDepthBounds(This,Min,Max) )
    ( (This)->lpVtbl -> SetSamplePositions(This,NumSamplesPerPixel,NumPixels,pSamplePositions) )
    ( (This)->lpVtbl -> ResolveSubresourceRegion(This,pDstResource,DstSubresource,DstX,DstY,pSrcResource,SrcSubresource,pSrcRect,Format,ResolveMode) )
    ( (This)->lpVtbl -> SetViewInstanceMask(This,Mask) )
    ( (This)->lpVtbl -> WriteBufferImmediate(This,Count,pParams,pModes) )
    ( (This)->lpVtbl -> SetProtectedResourceSession(This,pProtectedResourceSession) )
    ( (This)->lpVtbl -> BeginRenderPass(This,NumRenderTargets,pRenderTargets,pDepthStencil,Flags) )
    ( (This)->lpVtbl -> EndRenderPass(This) )
    ( (This)->lpVtbl -> InitializeMetaCommand(This,pMetaCommand,pInitializationParametersData,InitializationParametersDataSizeInBytes) )
    ( (This)->lpVtbl -> ExecuteMetaCommand(This,pMetaCommand,pExecutionParametersData,ExecutionParametersDataSizeInBytes) )
    ( (This)->lpVtbl -> BuildRaytracingAccelerationStructure(This,pDesc,NumPostbuildInfoDescs,pPostbuildInfoDescs) )
    ( (This)->lpVtbl -> EmitRaytracingAccelerationStructurePostbuildInfo(This,pDesc,NumSourceAccelerationStructures,pSourceAccelerationStructureData) )
    ( (This)->lpVtbl -> CopyRaytracingAccelerationStructure(This,DestAccelerationStructureData,SourceAccelerationStructureData,Mode) )
    ( (This)->lpVtbl -> SetPipelineState1(This,pStateObject) )
    ( (This)->lpVtbl -> DispatchRays(This,pDesc) )
    ( (This)->lpVtbl -> RSSetShadingRate(This,baseShadingRate,combiners) )
    ( (This)->lpVtbl -> RSSetShadingRateImage(This,shadingRateImage) )
#endif
#pragma endregion
DEFINE_GUID(IID_ID3D12Object,0xc4fec28f,0x7966,0x4e95,0x9f,0x94,0xf4,0x31,0xcb,0x56,0xc3,0xb8);
DEFINE_GUID(IID_ID3D12DeviceChild,0x905db94b,0xa00c,0x4140,0x9d,0xf5,0x2b,0x64,0xca,0x9e,0xa3,0x57);
DEFINE_GUID(IID_ID3D12RootSignature,0xc54a6b66,0x72df,0x4ee8,0x8b,0xe5,0xa9,0x46,0xa1,0x42,0x92,0x14);
DEFINE_GUID(IID_ID3D12RootSignatureDeserializer,0x34AB647B,0x3CC8,0x46AC,0x84,0x1B,0xC0,0x96,0x56,0x45,0xC0,0x46);
DEFINE_GUID(IID_ID3D12VersionedRootSignatureDeserializer,0x7F91CE67,0x090C,0x4BB7,0xB7,0x8E,0xED,0x8F,0xF2,0xE3,0x1D,0xA0);
DEFINE_GUID(IID_ID3D12Pageable,0x63ee58fb,0x1268,0x4835,0x86,0xda,0xf0,0x08,0xce,0x62,0xf0,0xd6);
DEFINE_GUID(IID_ID3D12Heap,0x6b3b2502,0x6e51,0x45b3,0x90,0xee,0x98,0x84,0x26,0x5e,0x8d,0xf3);
DEFINE_GUID(IID_ID3D12Resource,0x696442be,0xa72e,0x4059,0xbc,0x79,0x5b,0x5c,0x98,0x04,0x0f,0xad);
DEFINE_GUID(IID_ID3D12CommandAllocator,0x6102dee4,0xaf59,0x4b09,0xb9,0x99,0xb4,0x4d,0x73,0xf0,0x9b,0x24);
DEFINE_GUID(IID_ID3D12Fence,0x0a753dcf,0xc4d8,0x4b91,0xad,0xf6,0xbe,0x5a,0x60,0xd9,0x5a,0x76);
DEFINE_GUID(IID_ID3D12Fence1,0x433685fe,0xe22b,0x4ca0,0xa8,0xdb,0xb5,0xb4,0xf4,0xdd,0x0e,0x4a);
DEFINE_GUID(IID_ID3D12PipelineState,0x765a30f3,0xf624,0x4c6f,0xa8,0x28,0xac,0xe9,0x48,0x62,0x24,0x45);
DEFINE_GUID(IID_ID3D12DescriptorHeap,0x8efb471d,0x616c,0x4f49,0x90,0xf7,0x12,0x7b,0xb7,0x63,0xfa,0x51);
DEFINE_GUID(IID_ID3D12QueryHeap,0x0d9658ae,0xed45,0x469e,0xa6,0x1d,0x97,0x0e,0xc5,0x83,0xca,0xb4);
DEFINE_GUID(IID_ID3D12CommandSignature,0xc36a797c,0xec80,0x4f0a,0x89,0x85,0xa7,0xb2,0x47,0x50,0x82,0xd1);
DEFINE_GUID(IID_ID3D12CommandList,0x7116d91c,0xe7e4,0x47ce,0xb8,0xc6,0xec,0x81,0x68,0xf4,0x37,0xe5);
DEFINE_GUID(IID_ID3D12GraphicsCommandList,0x5b160d0f,0xac1b,0x4185,0x8b,0xa8,0xb3,0xae,0x42,0xa5,0xa4,0x55);
DEFINE_GUID(IID_ID3D12GraphicsCommandList1,0x553103fb,0x1fe7,0x4557,0xbb,0x38,0x94,0x6d,0x7d,0x0e,0x7c,0xa7);
DEFINE_GUID(IID_ID3D12GraphicsCommandList2,0x38C3E585,0xFF17,0x412C,0x91,0x50,0x4F,0xC6,0xF9,0xD7,0x2A,0x28);
DEFINE_GUID(IID_ID3D12CommandQueue,0x0ec870a6,0x5d7e,0x4c22,0x8c,0xfc,0x5b,0xaa,0xe0,0x76,0x16,0xed);
DEFINE_GUID(IID_ID3D12Device,0x189819f1,0x1db6,0x4b57,0xbe,0x54,0x18,0x21,0x33,0x9b,0x85,0xf7);
DEFINE_GUID(IID_ID3D12PipelineLibrary,0xc64226a8,0x9201,0x46af,0xb4,0xcc,0x53,0xfb,0x9f,0xf7,0x41,0x4f);
DEFINE_GUID(IID_ID3D12PipelineLibrary1,0x80eabf42,0x2568,0x4e5e,0xbd,0x82,0xc3,0x7f,0x86,0x96,0x1d,0xc3);
DEFINE_GUID(IID_ID3D12Device1,0x77acce80,0x638e,0x4e65,0x88,0x95,0xc1,0xf2,0x33,0x86,0x86,0x3e);
DEFINE_GUID(IID_ID3D12Device2,0x30baa41e,0xb15b,0x475c,0xa0,0xbb,0x1a,0xf5,0xc5,0xb6,0x43,0x28);
DEFINE_GUID(IID_ID3D12Device3,0x81dadc15,0x2bad,0x4392,0x93,0xc5,0x10,0x13,0x45,0xc4,0xaa,0x98);
DEFINE_GUID(IID_ID3D12ProtectedSession,0xA1533D18,0x0AC1,0x4084,0x85,0xB9,0x89,0xA9,0x61,0x16,0x80,0x6B);
DEFINE_GUID(IID_ID3D12ProtectedResourceSession,0x6CD696F4,0xF289,0x40CC,0x80,0x91,0x5A,0x6C,0x0A,0x09,0x9C,0x3D);
DEFINE_GUID(IID_ID3D12Device4,0xe865df17,0xa9ee,0x46f9,0xa4,0x63,0x30,0x98,0x31,0x5a,0xa2,0xe5);
DEFINE_GUID(IID_ID3D12LifetimeOwner,0xe667af9f,0xcd56,0x4f46,0x83,0xce,0x03,0x2e,0x59,0x5d,0x70,0xa8);
DEFINE_GUID(IID_ID3D12SwapChainAssistant,0xf1df64b6,0x57fd,0x49cd,0x88,0x07,0xc0,0xeb,0x88,0xb4,0x5c,0x8f);
DEFINE_GUID(IID_ID3D12LifetimeTracker,0x3fd03d36,0x4eb1,0x424a,0xa5,0x82,0x49,0x4e,0xcb,0x8b,0xa8,0x13);
DEFINE_GUID(IID_ID3D12StateObject,0x47016943,0xfca8,0x4594,0x93,0xea,0xaf,0x25,0x8b,0x55,0x34,0x6d);
DEFINE_GUID(IID_ID3D12StateObjectProperties,0xde5fa827,0x9bf9,0x4f26,0x89,0xff,0xd7,0xf5,0x6f,0xde,0x38,0x60);
DEFINE_GUID(IID_ID3D12Device5,0x8b4f173b,0x2fea,0x4b80,0x8f,0x58,0x43,0x07,0x19,0x1a,0xb9,0x5d);
DEFINE_GUID(IID_ID3D12DeviceRemovedExtendedDataSettings,0x82BC481C,0x6B9B,0x4030,0xAE,0xDB,0x7E,0xE3,0xD1,0xDF,0x1E,0x63);
DEFINE_GUID(IID_ID3D12DeviceRemovedExtendedData,0x98931D33,0x5AE8,0x4791,0xAA,0x3C,0x1A,0x73,0xA2,0x93,0x4E,0x71);
DEFINE_GUID(IID_ID3D12Device6,0xc70b221b,0x40e4,0x4a17,0x89,0xaf,0x02,0x5a,0x07,0x27,0xa6,0xdc);
DEFINE_GUID(IID_ID3D12Resource1,0x9D5E227A,0x4430,0x4161,0x88,0xB3,0x3E,0xCA,0x6B,0xB1,0x6E,0x19);
DEFINE_GUID(IID_ID3D12Heap1,0x572F7389,0x2168,0x49E3,0x96,0x93,0xD6,0xDF,0x58,0x71,0xBF,0x6D);
DEFINE_GUID(IID_ID3D12GraphicsCommandList3,0x6FDA83A7,0xB84C,0x4E38,0x9A,0xC8,0xC7,0xBD,0x22,0x01,0x6B,0x3D);
DEFINE_GUID(IID_ID3D12MetaCommand,0xDBB84C27,0x36CE,0x4FC9,0xB8,0x01,0xF0,0x48,0xC4,0x6A,0xC5,0x70);
DEFINE_GUID(IID_ID3D12GraphicsCommandList4,0x8754318e,0xd3a9,0x4541,0x98,0xcf,0x64,0x5b,0x50,0xdc,0x48,0x74);
DEFINE_GUID(IID_ID3D12Tools,0x7071e1f0,0xe84b,0x4b33,0x97,0x4f,0x12,0xfa,0x49,0xde,0x65,0xc5);
DEFINE_GUID(IID_ID3D12GraphicsCommandList5,0x55050859,0x4024,0x474c,0x87,0xf5,0x64,0x72,0xea,0xee,0x44,0xea);
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d12_0000_0045_v0_0_s_ifspec;
}
