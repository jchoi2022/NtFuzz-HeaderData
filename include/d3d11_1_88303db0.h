#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ID3D11BlendState1 ID3D11BlendState1;
typedef interface ID3D11RasterizerState1 ID3D11RasterizerState1;
typedef interface ID3DDeviceContextState ID3DDeviceContextState;
typedef interface ID3D11DeviceContext1 ID3D11DeviceContext1;
typedef interface ID3D11VideoContext1 ID3D11VideoContext1;
typedef interface ID3D11VideoDevice1 ID3D11VideoDevice1;
typedef interface ID3D11VideoProcessorEnumerator1 ID3D11VideoProcessorEnumerator1;
typedef interface ID3D11Device1 ID3D11Device1;
typedef interface ID3DUserDefinedAnnotation ID3DUserDefinedAnnotation;
#include "oaidl.h"
#include "ocidl.h"
#include "dxgi1_2.h"
#include "d3dcommon.h"
extern "C"{
}
#include "d3d11.h"
extern "C"{
typedef
enum D3D11_COPY_FLAGS
    {
        D3D11_COPY_NO_OVERWRITE = 0x1,
        D3D11_COPY_DISCARD = 0x2
    } D3D11_COPY_FLAGS;
typedef
enum D3D11_LOGIC_OP
    {
        D3D11_LOGIC_OP_CLEAR = 0,
        D3D11_LOGIC_OP_SET = ( D3D11_LOGIC_OP_CLEAR + 1 ) ,
        D3D11_LOGIC_OP_COPY = ( D3D11_LOGIC_OP_SET + 1 ) ,
        D3D11_LOGIC_OP_COPY_INVERTED = ( D3D11_LOGIC_OP_COPY + 1 ) ,
        D3D11_LOGIC_OP_NOOP = ( D3D11_LOGIC_OP_COPY_INVERTED + 1 ) ,
        D3D11_LOGIC_OP_INVERT = ( D3D11_LOGIC_OP_NOOP + 1 ) ,
        D3D11_LOGIC_OP_AND = ( D3D11_LOGIC_OP_INVERT + 1 ) ,
        D3D11_LOGIC_OP_NAND = ( D3D11_LOGIC_OP_AND + 1 ) ,
        D3D11_LOGIC_OP_OR = ( D3D11_LOGIC_OP_NAND + 1 ) ,
        D3D11_LOGIC_OP_NOR = ( D3D11_LOGIC_OP_OR + 1 ) ,
        D3D11_LOGIC_OP_XOR = ( D3D11_LOGIC_OP_NOR + 1 ) ,
        D3D11_LOGIC_OP_EQUIV = ( D3D11_LOGIC_OP_XOR + 1 ) ,
        D3D11_LOGIC_OP_AND_REVERSE = ( D3D11_LOGIC_OP_EQUIV + 1 ) ,
        D3D11_LOGIC_OP_AND_INVERTED = ( D3D11_LOGIC_OP_AND_REVERSE + 1 ) ,
        D3D11_LOGIC_OP_OR_REVERSE = ( D3D11_LOGIC_OP_AND_INVERTED + 1 ) ,
        D3D11_LOGIC_OP_OR_INVERTED = ( D3D11_LOGIC_OP_OR_REVERSE + 1 )
    } D3D11_LOGIC_OP;
typedef struct D3D11_RENDER_TARGET_BLEND_DESC1
    {
    BOOL BlendEnable;
    BOOL LogicOpEnable;
    D3D11_BLEND SrcBlend;
    D3D11_BLEND DestBlend;
    D3D11_BLEND_OP BlendOp;
    D3D11_BLEND SrcBlendAlpha;
    D3D11_BLEND DestBlendAlpha;
    D3D11_BLEND_OP BlendOpAlpha;
    D3D11_LOGIC_OP LogicOp;
    UINT8 RenderTargetWriteMask;
    } D3D11_RENDER_TARGET_BLEND_DESC1;
typedef struct D3D11_BLEND_DESC1
    {
    BOOL AlphaToCoverageEnable;
    BOOL IndependentBlendEnable;
    D3D11_RENDER_TARGET_BLEND_DESC1 RenderTarget[ 8 ];
    } D3D11_BLEND_DESC1;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_1_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_1_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11BlendState1;
    typedef struct ID3D11BlendState1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11BlendState1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11BlendState1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11BlendState1 * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11BlendState1 * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11BlendState1 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11BlendState1 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11BlendState1 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11BlendState1 * This,
            _Out_ D3D11_BLEND_DESC *pDesc);
        void ( STDMETHODCALLTYPE *GetDesc1 )(
            ID3D11BlendState1 * This,
            _Out_ D3D11_BLEND_DESC1 *pDesc);
        END_INTERFACE
    } ID3D11BlendState1Vtbl;
    interface ID3D11BlendState1
    {
        CONST_VTBL struct ID3D11BlendState1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
    ( (This)->lpVtbl -> GetDesc1(This,pDesc) )
typedef struct D3D11_RASTERIZER_DESC1
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
    UINT ForcedSampleCount;
    } D3D11_RASTERIZER_DESC1;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_1_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_1_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11RasterizerState1;
    typedef struct ID3D11RasterizerState1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11RasterizerState1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11RasterizerState1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11RasterizerState1 * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11RasterizerState1 * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11RasterizerState1 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11RasterizerState1 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11RasterizerState1 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D11RasterizerState1 * This,
            _Out_ D3D11_RASTERIZER_DESC *pDesc);
        void ( STDMETHODCALLTYPE *GetDesc1 )(
            ID3D11RasterizerState1 * This,
            _Out_ D3D11_RASTERIZER_DESC1 *pDesc);
        END_INTERFACE
    } ID3D11RasterizerState1Vtbl;
    interface ID3D11RasterizerState1
    {
        CONST_VTBL struct ID3D11RasterizerState1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
    ( (This)->lpVtbl -> GetDesc1(This,pDesc) )
typedef
enum D3D11_1_CREATE_DEVICE_CONTEXT_STATE_FLAG
    {
        D3D11_1_CREATE_DEVICE_CONTEXT_STATE_SINGLETHREADED = 0x1
    } D3D11_1_CREATE_DEVICE_CONTEXT_STATE_FLAG;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_1_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_1_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3DDeviceContextState;
    typedef struct ID3DDeviceContextStateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3DDeviceContextState * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3DDeviceContextState * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3DDeviceContextState * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3DDeviceContextState * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3DDeviceContextState * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3DDeviceContextState * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3DDeviceContextState * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        END_INTERFACE
    } ID3DDeviceContextStateVtbl;
    interface ID3DDeviceContextState
    {
        CONST_VTBL struct ID3DDeviceContextStateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
EXTERN_C const IID IID_ID3D11DeviceContext1;
    typedef struct ID3D11DeviceContext1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11DeviceContext1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11DeviceContext1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11DeviceContext1 * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11DeviceContext1 * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11DeviceContext1 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11DeviceContext1 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11DeviceContext1 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *VSSetConstantBuffers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *PSSetShaderResources )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *PSSetShader )(
            ID3D11DeviceContext1 * This,
            _In_opt_ ID3D11PixelShader *pPixelShader,
            _In_reads_opt_(NumClassInstances) ID3D11ClassInstance *const *ppClassInstances,
            UINT NumClassInstances);
        void ( STDMETHODCALLTYPE *PSSetSamplers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D11SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *VSSetShader )(
            ID3D11DeviceContext1 * This,
            _In_opt_ ID3D11VertexShader *pVertexShader,
            _In_reads_opt_(NumClassInstances) ID3D11ClassInstance *const *ppClassInstances,
            UINT NumClassInstances);
        void ( STDMETHODCALLTYPE *DrawIndexed )(
            ID3D11DeviceContext1 * This,
            _In_ UINT IndexCount,
            _In_ UINT StartIndexLocation,
            _In_ INT BaseVertexLocation);
        void ( STDMETHODCALLTYPE *Draw )(
            ID3D11DeviceContext1 * This,
            _In_ UINT VertexCount,
            _In_ UINT StartVertexLocation);
        HRESULT ( STDMETHODCALLTYPE *Map )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11Resource *pResource,
            _In_ UINT Subresource,
            _In_ D3D11_MAP MapType,
            _In_ UINT MapFlags,
            _Out_opt_ D3D11_MAPPED_SUBRESOURCE *pMappedResource);
        void ( STDMETHODCALLTYPE *Unmap )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11Resource *pResource,
            _In_ UINT Subresource);
        void ( STDMETHODCALLTYPE *PSSetConstantBuffers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *IASetInputLayout )(
            ID3D11DeviceContext1 * This,
            _In_opt_ ID3D11InputLayout *pInputLayout);
        void ( STDMETHODCALLTYPE *IASetVertexBuffers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppVertexBuffers,
            _In_reads_opt_(NumBuffers) const UINT *pStrides,
            _In_reads_opt_(NumBuffers) const UINT *pOffsets);
        void ( STDMETHODCALLTYPE *IASetIndexBuffer )(
            ID3D11DeviceContext1 * This,
            _In_opt_ ID3D11Buffer *pIndexBuffer,
            _In_ DXGI_FORMAT Format,
            _In_ UINT Offset);
        void ( STDMETHODCALLTYPE *DrawIndexedInstanced )(
            ID3D11DeviceContext1 * This,
            _In_ UINT IndexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartIndexLocation,
            _In_ INT BaseVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *DrawInstanced )(
            ID3D11DeviceContext1 * This,
            _In_ UINT VertexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *GSSetConstantBuffers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *GSSetShader )(
            ID3D11DeviceContext1 * This,
            _In_opt_ ID3D11GeometryShader *pShader,
            _In_reads_opt_(NumClassInstances) ID3D11ClassInstance *const *ppClassInstances,
            UINT NumClassInstances);
        void ( STDMETHODCALLTYPE *IASetPrimitiveTopology )(
            ID3D11DeviceContext1 * This,
            _In_ D3D11_PRIMITIVE_TOPOLOGY Topology);
        void ( STDMETHODCALLTYPE *VSSetShaderResources )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *VSSetSamplers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D11SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *Begin )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11Asynchronous *pAsync);
        void ( STDMETHODCALLTYPE *End )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11Asynchronous *pAsync);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11Asynchronous *pAsync,
            _Out_writes_bytes_opt_( DataSize ) void *pData,
            _In_ UINT DataSize,
            _In_ UINT GetDataFlags);
        void ( STDMETHODCALLTYPE *SetPredication )(
            ID3D11DeviceContext1 * This,
            _In_opt_ ID3D11Predicate *pPredicate,
            _In_ BOOL PredicateValue);
        void ( STDMETHODCALLTYPE *GSSetShaderResources )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *GSSetSamplers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D11SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *OMSetRenderTargets )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11RenderTargetView *const *ppRenderTargetViews,
            _In_opt_ ID3D11DepthStencilView *pDepthStencilView);
        void ( STDMETHODCALLTYPE *OMSetRenderTargetsAndUnorderedAccessViews )(
            ID3D11DeviceContext1 * This,
            _In_ UINT NumRTVs,
            _In_reads_opt_(NumRTVs) ID3D11RenderTargetView *const *ppRenderTargetViews,
            _In_opt_ ID3D11DepthStencilView *pDepthStencilView,
            _In_range_( 0, D3D11_1_UAV_SLOT_COUNT - 1 ) UINT UAVStartSlot,
            _In_ UINT NumUAVs,
            _In_reads_opt_(NumUAVs) ID3D11UnorderedAccessView *const *ppUnorderedAccessViews,
            _In_reads_opt_(NumUAVs) const UINT *pUAVInitialCounts);
        void ( STDMETHODCALLTYPE *OMSetBlendState )(
            ID3D11DeviceContext1 * This,
            _In_opt_ ID3D11BlendState *pBlendState,
            _In_opt_ const FLOAT BlendFactor[ 4 ],
            _In_ UINT SampleMask);
        void ( STDMETHODCALLTYPE *OMSetDepthStencilState )(
            ID3D11DeviceContext1 * This,
            _In_opt_ ID3D11DepthStencilState *pDepthStencilState,
            _In_ UINT StencilRef);
        void ( STDMETHODCALLTYPE *SOSetTargets )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_SO_BUFFER_SLOT_COUNT) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppSOTargets,
            _In_reads_opt_(NumBuffers) const UINT *pOffsets);
        void ( STDMETHODCALLTYPE *DrawAuto )(
            ID3D11DeviceContext1 * This);
        void ( STDMETHODCALLTYPE *DrawIndexedInstancedIndirect )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11Buffer *pBufferForArgs,
            _In_ UINT AlignedByteOffsetForArgs);
        void ( STDMETHODCALLTYPE *DrawInstancedIndirect )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11Buffer *pBufferForArgs,
            _In_ UINT AlignedByteOffsetForArgs);
        void ( STDMETHODCALLTYPE *Dispatch )(
            ID3D11DeviceContext1 * This,
            _In_ UINT ThreadGroupCountX,
            _In_ UINT ThreadGroupCountY,
            _In_ UINT ThreadGroupCountZ);
        void ( STDMETHODCALLTYPE *DispatchIndirect )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11Buffer *pBufferForArgs,
            _In_ UINT AlignedByteOffsetForArgs);
        void ( STDMETHODCALLTYPE *RSSetState )(
            ID3D11DeviceContext1 * This,
            _In_opt_ ID3D11RasterizerState *pRasterizerState);
        void ( STDMETHODCALLTYPE *RSSetViewports )(
            ID3D11DeviceContext1 * This,
            _In_range_(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumViewports,
            _In_reads_opt_(NumViewports) const D3D11_VIEWPORT *pViewports);
        void ( STDMETHODCALLTYPE *RSSetScissorRects )(
            ID3D11DeviceContext1 * This,
            _In_range_(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumRects,
            _In_reads_opt_(NumRects) const D3D11_RECT *pRects);
        void ( STDMETHODCALLTYPE *CopySubresourceRegion )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ UINT DstX,
            _In_ UINT DstY,
            _In_ UINT DstZ,
            _In_ ID3D11Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_opt_ const D3D11_BOX *pSrcBox);
        void ( STDMETHODCALLTYPE *CopyResource )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11Resource *pDstResource,
            _In_ ID3D11Resource *pSrcResource);
        void ( STDMETHODCALLTYPE *UpdateSubresource )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_opt_ const D3D11_BOX *pDstBox,
            _In_ const void *pSrcData,
            _In_ UINT SrcRowPitch,
            _In_ UINT SrcDepthPitch);
        void ( STDMETHODCALLTYPE *CopyStructureCount )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11Buffer *pDstBuffer,
            _In_ UINT DstAlignedByteOffset,
            _In_ ID3D11UnorderedAccessView *pSrcView);
        void ( STDMETHODCALLTYPE *ClearRenderTargetView )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11RenderTargetView *pRenderTargetView,
            _In_ const FLOAT ColorRGBA[ 4 ]);
        void ( STDMETHODCALLTYPE *ClearUnorderedAccessViewUint )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11UnorderedAccessView *pUnorderedAccessView,
            _In_ const UINT Values[ 4 ]);
        void ( STDMETHODCALLTYPE *ClearUnorderedAccessViewFloat )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11UnorderedAccessView *pUnorderedAccessView,
            _In_ const FLOAT Values[ 4 ]);
        void ( STDMETHODCALLTYPE *ClearDepthStencilView )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11DepthStencilView *pDepthStencilView,
            _In_ UINT ClearFlags,
            _In_ FLOAT Depth,
            _In_ UINT8 Stencil);
        void ( STDMETHODCALLTYPE *GenerateMips )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11ShaderResourceView *pShaderResourceView);
        void ( STDMETHODCALLTYPE *SetResourceMinLOD )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11Resource *pResource,
            FLOAT MinLOD);
        FLOAT ( STDMETHODCALLTYPE *GetResourceMinLOD )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11Resource *pResource);
        void ( STDMETHODCALLTYPE *ResolveSubresource )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ ID3D11Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_ DXGI_FORMAT Format);
        void ( STDMETHODCALLTYPE *ExecuteCommandList )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11CommandList *pCommandList,
            BOOL RestoreContextState);
        void ( STDMETHODCALLTYPE *HSSetShaderResources )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *HSSetShader )(
            ID3D11DeviceContext1 * This,
            _In_opt_ ID3D11HullShader *pHullShader,
            _In_reads_opt_(NumClassInstances) ID3D11ClassInstance *const *ppClassInstances,
            UINT NumClassInstances);
        void ( STDMETHODCALLTYPE *HSSetSamplers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D11SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *HSSetConstantBuffers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *DSSetShaderResources )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *DSSetShader )(
            ID3D11DeviceContext1 * This,
            _In_opt_ ID3D11DomainShader *pDomainShader,
            _In_reads_opt_(NumClassInstances) ID3D11ClassInstance *const *ppClassInstances,
            UINT NumClassInstances);
        void ( STDMETHODCALLTYPE *DSSetSamplers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D11SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *DSSetConstantBuffers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *CSSetShaderResources )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *CSSetUnorderedAccessViews )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_1_UAV_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_1_UAV_SLOT_COUNT - StartSlot ) UINT NumUAVs,
            _In_reads_opt_(NumUAVs) ID3D11UnorderedAccessView *const *ppUnorderedAccessViews,
            _In_reads_opt_(NumUAVs) const UINT *pUAVInitialCounts);
        void ( STDMETHODCALLTYPE *CSSetShader )(
            ID3D11DeviceContext1 * This,
            _In_opt_ ID3D11ComputeShader *pComputeShader,
            _In_reads_opt_(NumClassInstances) ID3D11ClassInstance *const *ppClassInstances,
            UINT NumClassInstances);
        void ( STDMETHODCALLTYPE *CSSetSamplers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D11SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *CSSetConstantBuffers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *VSGetConstantBuffers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *PSGetShaderResources )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *PSGetShader )(
            ID3D11DeviceContext1 * This,
            _Outptr_result_maybenull_ ID3D11PixelShader **ppPixelShader,
            _Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance **ppClassInstances,
            _Inout_opt_ UINT *pNumClassInstances);
        void ( STDMETHODCALLTYPE *PSGetSamplers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D11SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *VSGetShader )(
            ID3D11DeviceContext1 * This,
            _Outptr_result_maybenull_ ID3D11VertexShader **ppVertexShader,
            _Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance **ppClassInstances,
            _Inout_opt_ UINT *pNumClassInstances);
        void ( STDMETHODCALLTYPE *PSGetConstantBuffers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *IAGetInputLayout )(
            ID3D11DeviceContext1 * This,
            _Outptr_result_maybenull_ ID3D11InputLayout **ppInputLayout);
        void ( STDMETHODCALLTYPE *IAGetVertexBuffers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppVertexBuffers,
            _Out_writes_opt_(NumBuffers) UINT *pStrides,
            _Out_writes_opt_(NumBuffers) UINT *pOffsets);
        void ( STDMETHODCALLTYPE *IAGetIndexBuffer )(
            ID3D11DeviceContext1 * This,
            _Outptr_opt_result_maybenull_ ID3D11Buffer **pIndexBuffer,
            _Out_opt_ DXGI_FORMAT *Format,
            _Out_opt_ UINT *Offset);
        void ( STDMETHODCALLTYPE *GSGetConstantBuffers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *GSGetShader )(
            ID3D11DeviceContext1 * This,
            _Outptr_result_maybenull_ ID3D11GeometryShader **ppGeometryShader,
            _Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance **ppClassInstances,
            _Inout_opt_ UINT *pNumClassInstances);
        void ( STDMETHODCALLTYPE *IAGetPrimitiveTopology )(
            ID3D11DeviceContext1 * This,
            _Out_ D3D11_PRIMITIVE_TOPOLOGY *pTopology);
        void ( STDMETHODCALLTYPE *VSGetShaderResources )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *VSGetSamplers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D11SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *GetPredication )(
            ID3D11DeviceContext1 * This,
            _Outptr_opt_result_maybenull_ ID3D11Predicate **ppPredicate,
            _Out_opt_ BOOL *pPredicateValue);
        void ( STDMETHODCALLTYPE *GSGetShaderResources )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *GSGetSamplers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D11SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *OMGetRenderTargets )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11RenderTargetView **ppRenderTargetViews,
            _Outptr_opt_result_maybenull_ ID3D11DepthStencilView **ppDepthStencilView);
        void ( STDMETHODCALLTYPE *OMGetRenderTargetsAndUnorderedAccessViews )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT ) UINT NumRTVs,
            _Out_writes_opt_(NumRTVs) ID3D11RenderTargetView **ppRenderTargetViews,
            _Outptr_opt_result_maybenull_ ID3D11DepthStencilView **ppDepthStencilView,
            _In_range_( 0, D3D11_PS_CS_UAV_REGISTER_COUNT - 1 ) UINT UAVStartSlot,
            _In_range_( 0, D3D11_PS_CS_UAV_REGISTER_COUNT - UAVStartSlot ) UINT NumUAVs,
            _Out_writes_opt_(NumUAVs) ID3D11UnorderedAccessView **ppUnorderedAccessViews);
        void ( STDMETHODCALLTYPE *OMGetBlendState )(
            ID3D11DeviceContext1 * This,
            _Outptr_opt_result_maybenull_ ID3D11BlendState **ppBlendState,
            _Out_opt_ FLOAT BlendFactor[ 4 ],
            _Out_opt_ UINT *pSampleMask);
        void ( STDMETHODCALLTYPE *OMGetDepthStencilState )(
            ID3D11DeviceContext1 * This,
            _Outptr_opt_result_maybenull_ ID3D11DepthStencilState **ppDepthStencilState,
            _Out_opt_ UINT *pStencilRef);
        void ( STDMETHODCALLTYPE *SOGetTargets )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_SO_BUFFER_SLOT_COUNT ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppSOTargets);
        void ( STDMETHODCALLTYPE *RSGetState )(
            ID3D11DeviceContext1 * This,
            _Outptr_result_maybenull_ ID3D11RasterizerState **ppRasterizerState);
        void ( STDMETHODCALLTYPE *RSGetViewports )(
            ID3D11DeviceContext1 * This,
            _Inout_ UINT *pNumViewports,
            _Out_writes_opt_(*pNumViewports) D3D11_VIEWPORT *pViewports);
        void ( STDMETHODCALLTYPE *RSGetScissorRects )(
            ID3D11DeviceContext1 * This,
            _Inout_ UINT *pNumRects,
            _Out_writes_opt_(*pNumRects) D3D11_RECT *pRects);
        void ( STDMETHODCALLTYPE *HSGetShaderResources )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *HSGetShader )(
            ID3D11DeviceContext1 * This,
            _Outptr_result_maybenull_ ID3D11HullShader **ppHullShader,
            _Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance **ppClassInstances,
            _Inout_opt_ UINT *pNumClassInstances);
        void ( STDMETHODCALLTYPE *HSGetSamplers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D11SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *HSGetConstantBuffers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *DSGetShaderResources )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *DSGetShader )(
            ID3D11DeviceContext1 * This,
            _Outptr_result_maybenull_ ID3D11DomainShader **ppDomainShader,
            _Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance **ppClassInstances,
            _Inout_opt_ UINT *pNumClassInstances);
        void ( STDMETHODCALLTYPE *DSGetSamplers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D11SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *DSGetConstantBuffers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *CSGetShaderResources )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *CSGetUnorderedAccessViews )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_1_UAV_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_1_UAV_SLOT_COUNT - StartSlot ) UINT NumUAVs,
            _Out_writes_opt_(NumUAVs) ID3D11UnorderedAccessView **ppUnorderedAccessViews);
        void ( STDMETHODCALLTYPE *CSGetShader )(
            ID3D11DeviceContext1 * This,
            _Outptr_result_maybenull_ ID3D11ComputeShader **ppComputeShader,
            _Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance **ppClassInstances,
            _Inout_opt_ UINT *pNumClassInstances);
        void ( STDMETHODCALLTYPE *CSGetSamplers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D11SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *CSGetConstantBuffers )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *ClearState )(
            ID3D11DeviceContext1 * This);
        void ( STDMETHODCALLTYPE *Flush )(
            ID3D11DeviceContext1 * This);
        D3D11_DEVICE_CONTEXT_TYPE ( STDMETHODCALLTYPE *GetType )(
            ID3D11DeviceContext1 * This);
        UINT ( STDMETHODCALLTYPE *GetContextFlags )(
            ID3D11DeviceContext1 * This);
        HRESULT ( STDMETHODCALLTYPE *FinishCommandList )(
            ID3D11DeviceContext1 * This,
            BOOL RestoreDeferredContextState,
            _COM_Outptr_opt_ ID3D11CommandList **ppCommandList);
        void ( STDMETHODCALLTYPE *CopySubresourceRegion1 )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ UINT DstX,
            _In_ UINT DstY,
            _In_ UINT DstZ,
            _In_ ID3D11Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_opt_ const D3D11_BOX *pSrcBox,
            _In_ UINT CopyFlags);
        void ( STDMETHODCALLTYPE *UpdateSubresource1 )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_opt_ const D3D11_BOX *pDstBox,
            _In_ const void *pSrcData,
            _In_ UINT SrcRowPitch,
            _In_ UINT SrcDepthPitch,
            _In_ UINT CopyFlags);
        void ( STDMETHODCALLTYPE *DiscardResource )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11Resource *pResource);
        void ( STDMETHODCALLTYPE *DiscardView )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11View *pResourceView);
        void ( STDMETHODCALLTYPE *VSSetConstantBuffers1 )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers,
            _In_reads_opt_(NumBuffers) const UINT *pFirstConstant,
            _In_reads_opt_(NumBuffers) const UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *HSSetConstantBuffers1 )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers,
            _In_reads_opt_(NumBuffers) const UINT *pFirstConstant,
            _In_reads_opt_(NumBuffers) const UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *DSSetConstantBuffers1 )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers,
            _In_reads_opt_(NumBuffers) const UINT *pFirstConstant,
            _In_reads_opt_(NumBuffers) const UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *GSSetConstantBuffers1 )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers,
            _In_reads_opt_(NumBuffers) const UINT *pFirstConstant,
            _In_reads_opt_(NumBuffers) const UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *PSSetConstantBuffers1 )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers,
            _In_reads_opt_(NumBuffers) const UINT *pFirstConstant,
            _In_reads_opt_(NumBuffers) const UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *CSSetConstantBuffers1 )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers,
            _In_reads_opt_(NumBuffers) const UINT *pFirstConstant,
            _In_reads_opt_(NumBuffers) const UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *VSGetConstantBuffers1 )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers,
            _Out_writes_opt_(NumBuffers) UINT *pFirstConstant,
            _Out_writes_opt_(NumBuffers) UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *HSGetConstantBuffers1 )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers,
            _Out_writes_opt_(NumBuffers) UINT *pFirstConstant,
            _Out_writes_opt_(NumBuffers) UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *DSGetConstantBuffers1 )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers,
            _Out_writes_opt_(NumBuffers) UINT *pFirstConstant,
            _Out_writes_opt_(NumBuffers) UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *GSGetConstantBuffers1 )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers,
            _Out_writes_opt_(NumBuffers) UINT *pFirstConstant,
            _Out_writes_opt_(NumBuffers) UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *PSGetConstantBuffers1 )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers,
            _Out_writes_opt_(NumBuffers) UINT *pFirstConstant,
            _Out_writes_opt_(NumBuffers) UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *CSGetConstantBuffers1 )(
            ID3D11DeviceContext1 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers,
            _Out_writes_opt_(NumBuffers) UINT *pFirstConstant,
            _Out_writes_opt_(NumBuffers) UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *SwapDeviceContextState )(
            ID3D11DeviceContext1 * This,
            _In_ ID3DDeviceContextState *pState,
            _Outptr_opt_ ID3DDeviceContextState **ppPreviousState);
        void ( STDMETHODCALLTYPE *ClearView )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11View *pView,
            _In_ const FLOAT Color[ 4 ],
            _In_reads_opt_(NumRects) const D3D11_RECT *pRect,
            UINT NumRects);
        void ( STDMETHODCALLTYPE *DiscardView1 )(
            ID3D11DeviceContext1 * This,
            _In_ ID3D11View *pResourceView,
            _In_reads_opt_(NumRects) const D3D11_RECT *pRects,
            UINT NumRects);
        END_INTERFACE
    } ID3D11DeviceContext1Vtbl;
    interface ID3D11DeviceContext1
    {
        CONST_VTBL struct ID3D11DeviceContext1Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> CopySubresourceRegion1(This,pDstResource,DstSubresource,DstX,DstY,DstZ,pSrcResource,SrcSubresource,pSrcBox,CopyFlags) )
    ( (This)->lpVtbl -> UpdateSubresource1(This,pDstResource,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch,CopyFlags) )
    ( (This)->lpVtbl -> DiscardResource(This,pResource) )
    ( (This)->lpVtbl -> DiscardView(This,pResourceView) )
    ( (This)->lpVtbl -> VSSetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
    ( (This)->lpVtbl -> HSSetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
    ( (This)->lpVtbl -> DSSetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
    ( (This)->lpVtbl -> GSSetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
    ( (This)->lpVtbl -> PSSetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
    ( (This)->lpVtbl -> CSSetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
    ( (This)->lpVtbl -> VSGetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
    ( (This)->lpVtbl -> HSGetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
    ( (This)->lpVtbl -> DSGetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
    ( (This)->lpVtbl -> GSGetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
    ( (This)->lpVtbl -> PSGetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
    ( (This)->lpVtbl -> CSGetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
    ( (This)->lpVtbl -> SwapDeviceContextState(This,pState,ppPreviousState) )
    ( (This)->lpVtbl -> ClearView(This,pView,Color,pRect,NumRects) )
    ( (This)->lpVtbl -> DiscardView1(This,pResourceView,pRects,NumRects) )
typedef struct D3D11_VIDEO_DECODER_SUB_SAMPLE_MAPPING_BLOCK
    {
    UINT ClearSize;
    UINT EncryptedSize;
    } D3D11_VIDEO_DECODER_SUB_SAMPLE_MAPPING_BLOCK;
typedef struct D3D11_VIDEO_DECODER_BUFFER_DESC1
    {
    D3D11_VIDEO_DECODER_BUFFER_TYPE BufferType;
    UINT DataOffset;
    UINT DataSize;
    _Field_size_opt_(IVSize) void *pIV;
    UINT IVSize;
    _Field_size_opt_(SubSampleMappingCount) D3D11_VIDEO_DECODER_SUB_SAMPLE_MAPPING_BLOCK *pSubSampleMappingBlock;
    UINT SubSampleMappingCount;
    } D3D11_VIDEO_DECODER_BUFFER_DESC1;
typedef struct D3D11_VIDEO_DECODER_BEGIN_FRAME_CRYPTO_SESSION
    {
    ID3D11CryptoSession *pCryptoSession;
    UINT BlobSize;
    _Field_size_opt_(BlobSize) void *pBlob;
    GUID *pKeyInfoId;
    UINT PrivateDataSize;
    _Field_size_opt_(PrivateDataSize) void *pPrivateData;
    } D3D11_VIDEO_DECODER_BEGIN_FRAME_CRYPTO_SESSION;
typedef
enum D3D11_VIDEO_DECODER_CAPS
    {
        D3D11_VIDEO_DECODER_CAPS_DOWNSAMPLE = 0x1,
        D3D11_VIDEO_DECODER_CAPS_NON_REAL_TIME = 0x2,
        D3D11_VIDEO_DECODER_CAPS_DOWNSAMPLE_DYNAMIC = 0x4,
        D3D11_VIDEO_DECODER_CAPS_DOWNSAMPLE_REQUIRED = 0x8,
        D3D11_VIDEO_DECODER_CAPS_UNSUPPORTED = 0x10
    } D3D11_VIDEO_DECODER_CAPS;
typedef
enum D3D11_VIDEO_PROCESSOR_BEHAVIOR_HINTS
    {
        D3D11_VIDEO_PROCESSOR_BEHAVIOR_HINT_MULTIPLANE_OVERLAY_ROTATION = 0x1,
        D3D11_VIDEO_PROCESSOR_BEHAVIOR_HINT_MULTIPLANE_OVERLAY_RESIZE = 0x2,
        D3D11_VIDEO_PROCESSOR_BEHAVIOR_HINT_MULTIPLANE_OVERLAY_COLOR_SPACE_CONVERSION = 0x4,
        D3D11_VIDEO_PROCESSOR_BEHAVIOR_HINT_TRIPLE_BUFFER_OUTPUT = 0x8
    } D3D11_VIDEO_PROCESSOR_BEHAVIOR_HINTS;
typedef struct D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT
    {
    BOOL Enable;
    UINT Width;
    UINT Height;
    DXGI_FORMAT Format;
    } D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT;
typedef
enum D3D11_CRYPTO_SESSION_STATUS
    {
        D3D11_CRYPTO_SESSION_STATUS_OK = 0,
        D3D11_CRYPTO_SESSION_STATUS_KEY_LOST = 1,
        D3D11_CRYPTO_SESSION_STATUS_KEY_AND_CONTENT_LOST = 2
    } D3D11_CRYPTO_SESSION_STATUS;
typedef struct D3D11_KEY_EXCHANGE_HW_PROTECTION_INPUT_DATA
    {
    UINT PrivateDataSize;
    UINT HWProtectionDataSize;
    BYTE pbInput[ 4 ];
    } D3D11_KEY_EXCHANGE_HW_PROTECTION_INPUT_DATA;
typedef struct D3D11_KEY_EXCHANGE_HW_PROTECTION_OUTPUT_DATA
    {
    UINT PrivateDataSize;
    UINT MaxHWProtectionDataSize;
    UINT HWProtectionDataSize;
    UINT64 TransportTime;
    UINT64 ExecutionTime;
    BYTE pbOutput[ 4 ];
    } D3D11_KEY_EXCHANGE_HW_PROTECTION_OUTPUT_DATA;
typedef struct D3D11_KEY_EXCHANGE_HW_PROTECTION_DATA
    {
    UINT HWProtectionFunctionID;
    D3D11_KEY_EXCHANGE_HW_PROTECTION_INPUT_DATA *pInputData;
    D3D11_KEY_EXCHANGE_HW_PROTECTION_OUTPUT_DATA *pOutputData;
    HRESULT Status;
    } D3D11_KEY_EXCHANGE_HW_PROTECTION_DATA;
typedef struct D3D11_VIDEO_SAMPLE_DESC
    {
    UINT Width;
    UINT Height;
    DXGI_FORMAT Format;
    DXGI_COLOR_SPACE_TYPE ColorSpace;
    } D3D11_VIDEO_SAMPLE_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_1_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_1_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11VideoContext1;
    typedef struct ID3D11VideoContext1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11VideoContext1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11VideoContext1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11VideoContext1 * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11VideoContext1 * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11VideoContext1 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11VideoContext1 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11VideoContext1 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *GetDecoderBuffer )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            D3D11_VIDEO_DECODER_BUFFER_TYPE Type,
            _Out_ UINT *pBufferSize,
            _Outptr_result_bytebuffer_(*pBufferSize) void **ppBuffer);
        HRESULT ( STDMETHODCALLTYPE *ReleaseDecoderBuffer )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ D3D11_VIDEO_DECODER_BUFFER_TYPE Type);
        HRESULT ( STDMETHODCALLTYPE *DecoderBeginFrame )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ ID3D11VideoDecoderOutputView *pView,
            UINT ContentKeySize,
            _In_reads_bytes_opt_(ContentKeySize) const void *pContentKey);
        HRESULT ( STDMETHODCALLTYPE *DecoderEndFrame )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoDecoder *pDecoder);
        HRESULT ( STDMETHODCALLTYPE *SubmitDecoderBuffers )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ UINT NumBuffers,
            _In_reads_(NumBuffers) const D3D11_VIDEO_DECODER_BUFFER_DESC *pBufferDesc);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *DecoderExtension )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ const D3D11_VIDEO_DECODER_EXTENSION *pExtensionData);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputTargetRect )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ BOOL Enable,
            _In_opt_ const RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputBackgroundColor )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ BOOL YCbCr,
            _In_ const D3D11_VIDEO_COLOR *pColor);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputColorSpace )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ const D3D11_VIDEO_PROCESSOR_COLOR_SPACE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputAlphaFillMode )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode,
            _In_ UINT StreamIndex);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputConstriction )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ BOOL Enable,
            _In_ SIZE Size);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputStereoMode )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ BOOL Enable);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *VideoProcessorSetOutputExtension )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ const GUID *pExtensionGuid,
            _In_ UINT DataSize,
            _In_ void *pData);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputTargetRect )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ BOOL *Enabled,
            _Out_ RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputBackgroundColor )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ BOOL *pYCbCr,
            _Out_ D3D11_VIDEO_COLOR *pColor);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputColorSpace )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ D3D11_VIDEO_PROCESSOR_COLOR_SPACE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputAlphaFillMode )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE *pAlphaFillMode,
            _Out_ UINT *pStreamIndex);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputConstriction )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ BOOL *pEnabled,
            _Out_ SIZE *pSize);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputStereoMode )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ BOOL *pEnabled);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *VideoProcessorGetOutputExtension )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ const GUID *pExtensionGuid,
            _In_ UINT DataSize,
            _Out_writes_bytes_(DataSize) void *pData);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamFrameFormat )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ D3D11_VIDEO_FRAME_FORMAT FrameFormat);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamColorSpace )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ const D3D11_VIDEO_PROCESSOR_COLOR_SPACE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamOutputRate )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate,
            _In_ BOOL RepeatFrame,
            _In_opt_ const DXGI_RATIONAL *pCustomRate);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamSourceRect )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_opt_ const RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamDestRect )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_opt_ const RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamAlpha )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_ FLOAT Alpha);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamPalette )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ UINT Count,
            _In_reads_opt_(Count) const UINT *pEntries);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamPixelAspectRatio )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_opt_ const DXGI_RATIONAL *pSourceAspectRatio,
            _In_opt_ const DXGI_RATIONAL *pDestinationAspectRatio);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamLumaKey )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_ FLOAT Lower,
            _In_ FLOAT Upper);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamStereoFormat )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_ D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format,
            _In_ BOOL LeftViewFrame0,
            _In_ BOOL BaseViewFrame0,
            _In_ D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode,
            _In_ int MonoOffset);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamAutoProcessingMode )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamFilter )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ D3D11_VIDEO_PROCESSOR_FILTER Filter,
            _In_ BOOL Enable,
            _In_ int Level);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *VideoProcessorSetStreamExtension )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ const GUID *pExtensionGuid,
            _In_ UINT DataSize,
            _In_ void *pData);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamFrameFormat )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ D3D11_VIDEO_FRAME_FORMAT *pFrameFormat);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamColorSpace )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ D3D11_VIDEO_PROCESSOR_COLOR_SPACE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamOutputRate )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ D3D11_VIDEO_PROCESSOR_OUTPUT_RATE *pOutputRate,
            _Out_ BOOL *pRepeatFrame,
            _Out_ DXGI_RATIONAL *pCustomRate);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamSourceRect )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamDestRect )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamAlpha )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ FLOAT *pAlpha);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamPalette )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ UINT Count,
            _Out_writes_(Count) UINT *pEntries);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamPixelAspectRatio )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ DXGI_RATIONAL *pSourceAspectRatio,
            _Out_ DXGI_RATIONAL *pDestinationAspectRatio);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamLumaKey )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ FLOAT *pLower,
            _Out_ FLOAT *pUpper);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamStereoFormat )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnable,
            _Out_ D3D11_VIDEO_PROCESSOR_STEREO_FORMAT *pFormat,
            _Out_ BOOL *pLeftViewFrame0,
            _Out_ BOOL *pBaseViewFrame0,
            _Out_ D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE *pFlipMode,
            _Out_ int *MonoOffset);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamAutoProcessingMode )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamFilter )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ D3D11_VIDEO_PROCESSOR_FILTER Filter,
            _Out_ BOOL *pEnabled,
            _Out_ int *pLevel);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *VideoProcessorGetStreamExtension )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ const GUID *pExtensionGuid,
            _In_ UINT DataSize,
            _Out_writes_bytes_(DataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *VideoProcessorBlt )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ ID3D11VideoProcessorOutputView *pView,
            _In_ UINT OutputFrame,
            _In_ UINT StreamCount,
            _In_reads_(StreamCount) const D3D11_VIDEO_PROCESSOR_STREAM *pStreams);
        HRESULT ( STDMETHODCALLTYPE *NegotiateCryptoSessionKeyExchange )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ UINT DataSize,
            _Inout_updates_bytes_(DataSize) void *pData);
        void ( STDMETHODCALLTYPE *EncryptionBlt )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ ID3D11Texture2D *pSrcSurface,
            _In_ ID3D11Texture2D *pDstSurface,
            _In_ UINT IVSize,
            _Inout_opt_bytecount_(IVSize) void *pIV);
        void ( STDMETHODCALLTYPE *DecryptionBlt )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ ID3D11Texture2D *pSrcSurface,
            _In_ ID3D11Texture2D *pDstSurface,
            _In_opt_ D3D11_ENCRYPTED_BLOCK_INFO *pEncryptedBlockInfo,
            _In_ UINT ContentKeySize,
            _In_reads_bytes_opt_(ContentKeySize) const void *pContentKey,
            _In_ UINT IVSize,
            _Inout_opt_bytecount_(IVSize) void *pIV);
        void ( STDMETHODCALLTYPE *StartSessionKeyRefresh )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ UINT RandomNumberSize,
            _Out_writes_bytes_(RandomNumberSize) void *pRandomNumber);
        void ( STDMETHODCALLTYPE *FinishSessionKeyRefresh )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11CryptoSession *pCryptoSession);
        HRESULT ( STDMETHODCALLTYPE *GetEncryptionBltKey )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ UINT KeySize,
            _Out_writes_bytes_(KeySize) void *pReadbackKey);
        HRESULT ( STDMETHODCALLTYPE *NegotiateAuthenticatedChannelKeyExchange )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11AuthenticatedChannel *pChannel,
            _In_ UINT DataSize,
            _Inout_updates_bytes_(DataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *QueryAuthenticatedChannel )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11AuthenticatedChannel *pChannel,
            _In_ UINT InputSize,
            _In_reads_bytes_(InputSize) const void *pInput,
            _In_ UINT OutputSize,
            _Out_writes_bytes_(OutputSize) void *pOutput);
        HRESULT ( STDMETHODCALLTYPE *ConfigureAuthenticatedChannel )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11AuthenticatedChannel *pChannel,
            _In_ UINT InputSize,
            _In_reads_bytes_(InputSize) const void *pInput,
            _Out_ D3D11_AUTHENTICATED_CONFIGURE_OUTPUT *pOutput);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamRotation )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_ D3D11_VIDEO_PROCESSOR_ROTATION Rotation);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamRotation )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnable,
            _Out_ D3D11_VIDEO_PROCESSOR_ROTATION *pRotation);
        HRESULT ( STDMETHODCALLTYPE *SubmitDecoderBuffers1 )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ UINT NumBuffers,
            _In_reads_(NumBuffers) const D3D11_VIDEO_DECODER_BUFFER_DESC1 *pBufferDesc);
        HRESULT ( STDMETHODCALLTYPE *GetDataForNewHardwareKey )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ UINT PrivateInputSize,
            _In_reads_(PrivateInputSize) const void *pPrivatInputData,
            _Out_ UINT64 *pPrivateOutputData);
        HRESULT ( STDMETHODCALLTYPE *CheckCryptoSessionStatus )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _Out_ D3D11_CRYPTO_SESSION_STATUS *pStatus);
        HRESULT ( STDMETHODCALLTYPE *DecoderEnableDownsampling )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ DXGI_COLOR_SPACE_TYPE InputColorSpace,
            _In_ const D3D11_VIDEO_SAMPLE_DESC *pOutputDesc,
            _In_ UINT ReferenceFrameCount);
        HRESULT ( STDMETHODCALLTYPE *DecoderUpdateDownsampling )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ const D3D11_VIDEO_SAMPLE_DESC *pOutputDesc);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputColorSpace1 )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ DXGI_COLOR_SPACE_TYPE ColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputShaderUsage )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ BOOL ShaderUsage);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputColorSpace1 )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ DXGI_COLOR_SPACE_TYPE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputShaderUsage )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ BOOL *pShaderUsage);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamColorSpace1 )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ DXGI_COLOR_SPACE_TYPE ColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamMirror )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_ BOOL FlipHorizontal,
            _In_ BOOL FlipVertical);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamColorSpace1 )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ DXGI_COLOR_SPACE_TYPE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamMirror )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnable,
            _Out_ BOOL *pFlipHorizontal,
            _Out_ BOOL *pFlipVertical);
        HRESULT ( STDMETHODCALLTYPE *VideoProcessorGetBehaviorHints )(
            ID3D11VideoContext1 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT OutputWidth,
            _In_ UINT OutputHeight,
            _In_ DXGI_FORMAT OutputFormat,
            _In_ UINT StreamCount,
            _In_reads_(StreamCount) const D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT *pStreams,
            _Out_ UINT *pBehaviorHints);
        END_INTERFACE
    } ID3D11VideoContext1Vtbl;
    interface ID3D11VideoContext1
    {
        CONST_VTBL struct ID3D11VideoContext1Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> SubmitDecoderBuffers1(This,pDecoder,NumBuffers,pBufferDesc) )
    ( (This)->lpVtbl -> GetDataForNewHardwareKey(This,pCryptoSession,PrivateInputSize,pPrivatInputData,pPrivateOutputData) )
    ( (This)->lpVtbl -> CheckCryptoSessionStatus(This,pCryptoSession,pStatus) )
    ( (This)->lpVtbl -> DecoderEnableDownsampling(This,pDecoder,InputColorSpace,pOutputDesc,ReferenceFrameCount) )
    ( (This)->lpVtbl -> DecoderUpdateDownsampling(This,pDecoder,pOutputDesc) )
    ( (This)->lpVtbl -> VideoProcessorSetOutputColorSpace1(This,pVideoProcessor,ColorSpace) )
    ( (This)->lpVtbl -> VideoProcessorSetOutputShaderUsage(This,pVideoProcessor,ShaderUsage) )
    ( (This)->lpVtbl -> VideoProcessorGetOutputColorSpace1(This,pVideoProcessor,pColorSpace) )
    ( (This)->lpVtbl -> VideoProcessorGetOutputShaderUsage(This,pVideoProcessor,pShaderUsage) )
    ( (This)->lpVtbl -> VideoProcessorSetStreamColorSpace1(This,pVideoProcessor,StreamIndex,ColorSpace) )
    ( (This)->lpVtbl -> VideoProcessorSetStreamMirror(This,pVideoProcessor,StreamIndex,Enable,FlipHorizontal,FlipVertical) )
    ( (This)->lpVtbl -> VideoProcessorGetStreamColorSpace1(This,pVideoProcessor,StreamIndex,pColorSpace) )
    ( (This)->lpVtbl -> VideoProcessorGetStreamMirror(This,pVideoProcessor,StreamIndex,pEnable,pFlipHorizontal,pFlipVertical) )
    ( (This)->lpVtbl -> VideoProcessorGetBehaviorHints(This,pVideoProcessor,OutputWidth,OutputHeight,OutputFormat,StreamCount,pStreams,pBehaviorHints) )
EXTERN_C const IID IID_ID3D11VideoDevice1;
    typedef struct ID3D11VideoDevice1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11VideoDevice1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11VideoDevice1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11VideoDevice1 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoDecoder )(
            ID3D11VideoDevice1 * This,
            _In_ const D3D11_VIDEO_DECODER_DESC *pVideoDesc,
            _In_ const D3D11_VIDEO_DECODER_CONFIG *pConfig,
            _COM_Outptr_ ID3D11VideoDecoder **ppDecoder);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoProcessor )(
            ID3D11VideoDevice1 * This,
            _In_ ID3D11VideoProcessorEnumerator *pEnum,
            _In_ UINT RateConversionIndex,
            _COM_Outptr_ ID3D11VideoProcessor **ppVideoProcessor);
        HRESULT ( STDMETHODCALLTYPE *CreateAuthenticatedChannel )(
            ID3D11VideoDevice1 * This,
            _In_ D3D11_AUTHENTICATED_CHANNEL_TYPE ChannelType,
            _COM_Outptr_ ID3D11AuthenticatedChannel **ppAuthenticatedChannel);
        HRESULT ( STDMETHODCALLTYPE *CreateCryptoSession )(
            ID3D11VideoDevice1 * This,
            _In_ const GUID *pCryptoType,
            _In_opt_ const GUID *pDecoderProfile,
            _In_ const GUID *pKeyExchangeType,
            _COM_Outptr_ ID3D11CryptoSession **ppCryptoSession);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoDecoderOutputView )(
            ID3D11VideoDevice1 * This,
            _In_ ID3D11Resource *pResource,
            _In_ const D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11VideoDecoderOutputView **ppVDOVView);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoProcessorInputView )(
            ID3D11VideoDevice1 * This,
            _In_ ID3D11Resource *pResource,
            _In_ ID3D11VideoProcessorEnumerator *pEnum,
            _In_ const D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11VideoProcessorInputView **ppVPIView);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoProcessorOutputView )(
            ID3D11VideoDevice1 * This,
            _In_ ID3D11Resource *pResource,
            _In_ ID3D11VideoProcessorEnumerator *pEnum,
            _In_ const D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11VideoProcessorOutputView **ppVPOView);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoProcessorEnumerator )(
            ID3D11VideoDevice1 * This,
            _In_ const D3D11_VIDEO_PROCESSOR_CONTENT_DESC *pDesc,
            _COM_Outptr_ ID3D11VideoProcessorEnumerator **ppEnum);
        UINT ( STDMETHODCALLTYPE *GetVideoDecoderProfileCount )(
            ID3D11VideoDevice1 * This);
        HRESULT ( STDMETHODCALLTYPE *GetVideoDecoderProfile )(
            ID3D11VideoDevice1 * This,
            _In_ UINT Index,
            _Out_ GUID *pDecoderProfile);
        HRESULT ( STDMETHODCALLTYPE *CheckVideoDecoderFormat )(
            ID3D11VideoDevice1 * This,
            _In_ const GUID *pDecoderProfile,
            _In_ DXGI_FORMAT Format,
            _Out_ BOOL *pSupported);
        HRESULT ( STDMETHODCALLTYPE *GetVideoDecoderConfigCount )(
            ID3D11VideoDevice1 * This,
            _In_ const D3D11_VIDEO_DECODER_DESC *pDesc,
            _Out_ UINT *pCount);
        HRESULT ( STDMETHODCALLTYPE *GetVideoDecoderConfig )(
            ID3D11VideoDevice1 * This,
            _In_ const D3D11_VIDEO_DECODER_DESC *pDesc,
            _In_ UINT Index,
            _Out_ D3D11_VIDEO_DECODER_CONFIG *pConfig);
        HRESULT ( STDMETHODCALLTYPE *GetContentProtectionCaps )(
            ID3D11VideoDevice1 * This,
            _In_opt_ const GUID *pCryptoType,
            _In_opt_ const GUID *pDecoderProfile,
            _Out_ D3D11_VIDEO_CONTENT_PROTECTION_CAPS *pCaps);
        HRESULT ( STDMETHODCALLTYPE *CheckCryptoKeyExchange )(
            ID3D11VideoDevice1 * This,
            _In_ const GUID *pCryptoType,
            _In_opt_ const GUID *pDecoderProfile,
            _In_ UINT Index,
            _Out_ GUID *pKeyExchangeType);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11VideoDevice1 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11VideoDevice1 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *GetCryptoSessionPrivateDataSize )(
            ID3D11VideoDevice1 * This,
            _In_ const GUID *pCryptoType,
            _In_opt_ const GUID *pDecoderProfile,
            _In_ const GUID *pKeyExchangeType,
            _Out_ UINT *pPrivateInputSize,
            _Out_ UINT *pPrivateOutputSize);
        HRESULT ( STDMETHODCALLTYPE *GetVideoDecoderCaps )(
            ID3D11VideoDevice1 * This,
            _In_ const GUID *pDecoderProfile,
            _In_ UINT SampleWidth,
            _In_ UINT SampleHeight,
            _In_ const DXGI_RATIONAL *pFrameRate,
            _In_ UINT BitRate,
            _In_opt_ const GUID *pCryptoType,
            _Out_ UINT *pDecoderCaps);
        HRESULT ( STDMETHODCALLTYPE *CheckVideoDecoderDownsampling )(
            ID3D11VideoDevice1 * This,
            _In_ const D3D11_VIDEO_DECODER_DESC *pInputDesc,
            _In_ DXGI_COLOR_SPACE_TYPE InputColorSpace,
            _In_ const D3D11_VIDEO_DECODER_CONFIG *pInputConfig,
            _In_ const DXGI_RATIONAL *pFrameRate,
            _In_ const D3D11_VIDEO_SAMPLE_DESC *pOutputDesc,
            _Out_ BOOL *pSupported,
            _Out_ BOOL *pRealTimeHint);
        HRESULT ( STDMETHODCALLTYPE *RecommendVideoDecoderDownsampleParameters )(
            ID3D11VideoDevice1 * This,
            _In_ const D3D11_VIDEO_DECODER_DESC *pInputDesc,
            _In_ DXGI_COLOR_SPACE_TYPE InputColorSpace,
            _In_ const D3D11_VIDEO_DECODER_CONFIG *pInputConfig,
            _In_ const DXGI_RATIONAL *pFrameRate,
            _Out_ D3D11_VIDEO_SAMPLE_DESC *pRecommendedOutputDesc);
        END_INTERFACE
    } ID3D11VideoDevice1Vtbl;
    interface ID3D11VideoDevice1
    {
        CONST_VTBL struct ID3D11VideoDevice1Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetCryptoSessionPrivateDataSize(This,pCryptoType,pDecoderProfile,pKeyExchangeType,pPrivateInputSize,pPrivateOutputSize) )
    ( (This)->lpVtbl -> GetVideoDecoderCaps(This,pDecoderProfile,SampleWidth,SampleHeight,pFrameRate,BitRate,pCryptoType,pDecoderCaps) )
    ( (This)->lpVtbl -> CheckVideoDecoderDownsampling(This,pInputDesc,InputColorSpace,pInputConfig,pFrameRate,pOutputDesc,pSupported,pRealTimeHint) )
    ( (This)->lpVtbl -> RecommendVideoDecoderDownsampleParameters(This,pInputDesc,InputColorSpace,pInputConfig,pFrameRate,pRecommendedOutputDesc) )
EXTERN_C const IID IID_ID3D11VideoProcessorEnumerator1;
    typedef struct ID3D11VideoProcessorEnumerator1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11VideoProcessorEnumerator1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11VideoProcessorEnumerator1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11VideoProcessorEnumerator1 * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11VideoProcessorEnumerator1 * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11VideoProcessorEnumerator1 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11VideoProcessorEnumerator1 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11VideoProcessorEnumerator1 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessorContentDesc )(
            ID3D11VideoProcessorEnumerator1 * This,
            _Out_ D3D11_VIDEO_PROCESSOR_CONTENT_DESC *pContentDesc);
        HRESULT ( STDMETHODCALLTYPE *CheckVideoProcessorFormat )(
            ID3D11VideoProcessorEnumerator1 * This,
            _In_ DXGI_FORMAT Format,
            _Out_ UINT *pFlags);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessorCaps )(
            ID3D11VideoProcessorEnumerator1 * This,
            _Out_ D3D11_VIDEO_PROCESSOR_CAPS *pCaps);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessorRateConversionCaps )(
            ID3D11VideoProcessorEnumerator1 * This,
            _In_ UINT TypeIndex,
            _Out_ D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS *pCaps);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessorCustomRate )(
            ID3D11VideoProcessorEnumerator1 * This,
            _In_ UINT TypeIndex,
            _In_ UINT CustomRateIndex,
            _Out_ D3D11_VIDEO_PROCESSOR_CUSTOM_RATE *pRate);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessorFilterRange )(
            ID3D11VideoProcessorEnumerator1 * This,
            _In_ D3D11_VIDEO_PROCESSOR_FILTER Filter,
            _Out_ D3D11_VIDEO_PROCESSOR_FILTER_RANGE *pRange);
        HRESULT ( STDMETHODCALLTYPE *CheckVideoProcessorFormatConversion )(
            ID3D11VideoProcessorEnumerator1 * This,
            _In_ DXGI_FORMAT InputFormat,
            _In_ DXGI_COLOR_SPACE_TYPE InputColorSpace,
            _In_ DXGI_FORMAT OutputFormat,
            _In_ DXGI_COLOR_SPACE_TYPE OutputColorSpace,
            _Out_ BOOL *pSupported);
        END_INTERFACE
    } ID3D11VideoProcessorEnumerator1Vtbl;
    interface ID3D11VideoProcessorEnumerator1
    {
        CONST_VTBL struct ID3D11VideoProcessorEnumerator1Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> CheckVideoProcessorFormatConversion(This,InputFormat,InputColorSpace,OutputFormat,OutputColorSpace,pSupported) )
EXTERN_C const IID IID_ID3D11Device1;
    typedef struct ID3D11Device1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11Device1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11Device1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11Device1 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateBuffer )(
            ID3D11Device1 * This,
            _In_ const D3D11_BUFFER_DESC *pDesc,
            _In_opt_ const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Buffer **ppBuffer);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture1D )(
            ID3D11Device1 * This,
            _In_ const D3D11_TEXTURE1D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels * pDesc->ArraySize)) const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Texture1D **ppTexture1D);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture2D )(
            ID3D11Device1 * This,
            _In_ const D3D11_TEXTURE2D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels * pDesc->ArraySize)) const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Texture2D **ppTexture2D);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture3D )(
            ID3D11Device1 * This,
            _In_ const D3D11_TEXTURE3D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels)) const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Texture3D **ppTexture3D);
        HRESULT ( STDMETHODCALLTYPE *CreateShaderResourceView )(
            ID3D11Device1 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_SHADER_RESOURCE_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11ShaderResourceView **ppSRView);
        HRESULT ( STDMETHODCALLTYPE *CreateUnorderedAccessView )(
            ID3D11Device1 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_UNORDERED_ACCESS_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11UnorderedAccessView **ppUAView);
        HRESULT ( STDMETHODCALLTYPE *CreateRenderTargetView )(
            ID3D11Device1 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_RENDER_TARGET_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11RenderTargetView **ppRTView);
        HRESULT ( STDMETHODCALLTYPE *CreateDepthStencilView )(
            ID3D11Device1 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_DEPTH_STENCIL_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11DepthStencilView **ppDepthStencilView);
        HRESULT ( STDMETHODCALLTYPE *CreateInputLayout )(
            ID3D11Device1 * This,
            _In_reads_(NumElements) const D3D11_INPUT_ELEMENT_DESC *pInputElementDescs,
            _In_range_( 0, D3D11_IA_VERTEX_INPUT_STRUCTURE_ELEMENT_COUNT ) UINT NumElements,
            _In_reads_(BytecodeLength) const void *pShaderBytecodeWithInputSignature,
            _In_ SIZE_T BytecodeLength,
            _COM_Outptr_opt_ ID3D11InputLayout **ppInputLayout);
        HRESULT ( STDMETHODCALLTYPE *CreateVertexShader )(
            ID3D11Device1 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11VertexShader **ppVertexShader);
        HRESULT ( STDMETHODCALLTYPE *CreateGeometryShader )(
            ID3D11Device1 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11GeometryShader **ppGeometryShader);
        HRESULT ( STDMETHODCALLTYPE *CreateGeometryShaderWithStreamOutput )(
            ID3D11Device1 * This,
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
            ID3D11Device1 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11PixelShader **ppPixelShader);
        HRESULT ( STDMETHODCALLTYPE *CreateHullShader )(
            ID3D11Device1 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11HullShader **ppHullShader);
        HRESULT ( STDMETHODCALLTYPE *CreateDomainShader )(
            ID3D11Device1 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11DomainShader **ppDomainShader);
        HRESULT ( STDMETHODCALLTYPE *CreateComputeShader )(
            ID3D11Device1 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11ComputeShader **ppComputeShader);
        HRESULT ( STDMETHODCALLTYPE *CreateClassLinkage )(
            ID3D11Device1 * This,
            _COM_Outptr_ ID3D11ClassLinkage **ppLinkage);
        HRESULT ( STDMETHODCALLTYPE *CreateBlendState )(
            ID3D11Device1 * This,
            _In_ const D3D11_BLEND_DESC *pBlendStateDesc,
            _COM_Outptr_opt_ ID3D11BlendState **ppBlendState);
        HRESULT ( STDMETHODCALLTYPE *CreateDepthStencilState )(
            ID3D11Device1 * This,
            _In_ const D3D11_DEPTH_STENCIL_DESC *pDepthStencilDesc,
            _COM_Outptr_opt_ ID3D11DepthStencilState **ppDepthStencilState);
        HRESULT ( STDMETHODCALLTYPE *CreateRasterizerState )(
            ID3D11Device1 * This,
            _In_ const D3D11_RASTERIZER_DESC *pRasterizerDesc,
            _COM_Outptr_opt_ ID3D11RasterizerState **ppRasterizerState);
        HRESULT ( STDMETHODCALLTYPE *CreateSamplerState )(
            ID3D11Device1 * This,
            _In_ const D3D11_SAMPLER_DESC *pSamplerDesc,
            _COM_Outptr_opt_ ID3D11SamplerState **ppSamplerState);
        HRESULT ( STDMETHODCALLTYPE *CreateQuery )(
            ID3D11Device1 * This,
            _In_ const D3D11_QUERY_DESC *pQueryDesc,
            _COM_Outptr_opt_ ID3D11Query **ppQuery);
        HRESULT ( STDMETHODCALLTYPE *CreatePredicate )(
            ID3D11Device1 * This,
            _In_ const D3D11_QUERY_DESC *pPredicateDesc,
            _COM_Outptr_opt_ ID3D11Predicate **ppPredicate);
        HRESULT ( STDMETHODCALLTYPE *CreateCounter )(
            ID3D11Device1 * This,
            _In_ const D3D11_COUNTER_DESC *pCounterDesc,
            _COM_Outptr_opt_ ID3D11Counter **ppCounter);
        HRESULT ( STDMETHODCALLTYPE *CreateDeferredContext )(
            ID3D11Device1 * This,
            UINT ContextFlags,
            _COM_Outptr_opt_ ID3D11DeviceContext **ppDeferredContext);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedResource )(
            ID3D11Device1 * This,
            _In_ HANDLE hResource,
            _In_ REFIID ReturnedInterface,
            _COM_Outptr_opt_ void **ppResource);
        HRESULT ( STDMETHODCALLTYPE *CheckFormatSupport )(
            ID3D11Device1 * This,
            _In_ DXGI_FORMAT Format,
            _Out_ UINT *pFormatSupport);
        HRESULT ( STDMETHODCALLTYPE *CheckMultisampleQualityLevels )(
            ID3D11Device1 * This,
            _In_ DXGI_FORMAT Format,
            _In_ UINT SampleCount,
            _Out_ UINT *pNumQualityLevels);
        void ( STDMETHODCALLTYPE *CheckCounterInfo )(
            ID3D11Device1 * This,
            _Out_ D3D11_COUNTER_INFO *pCounterInfo);
        HRESULT ( STDMETHODCALLTYPE *CheckCounter )(
            ID3D11Device1 * This,
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
            ID3D11Device1 * This,
            D3D11_FEATURE Feature,
            _Out_writes_bytes_(FeatureSupportDataSize) void *pFeatureSupportData,
            UINT FeatureSupportDataSize);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11Device1 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11Device1 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11Device1 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        D3D_FEATURE_LEVEL ( STDMETHODCALLTYPE *GetFeatureLevel )(
            ID3D11Device1 * This);
        UINT ( STDMETHODCALLTYPE *GetCreationFlags )(
            ID3D11Device1 * This);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceRemovedReason )(
            ID3D11Device1 * This);
        void ( STDMETHODCALLTYPE *GetImmediateContext )(
            ID3D11Device1 * This,
            _Outptr_ ID3D11DeviceContext **ppImmediateContext);
        HRESULT ( STDMETHODCALLTYPE *SetExceptionMode )(
            ID3D11Device1 * This,
            UINT RaiseFlags);
        UINT ( STDMETHODCALLTYPE *GetExceptionMode )(
            ID3D11Device1 * This);
        void ( STDMETHODCALLTYPE *GetImmediateContext1 )(
            ID3D11Device1 * This,
            _Outptr_ ID3D11DeviceContext1 **ppImmediateContext);
        HRESULT ( STDMETHODCALLTYPE *CreateDeferredContext1 )(
            ID3D11Device1 * This,
            UINT ContextFlags,
            _COM_Outptr_opt_ ID3D11DeviceContext1 **ppDeferredContext);
        HRESULT ( STDMETHODCALLTYPE *CreateBlendState1 )(
            ID3D11Device1 * This,
            _In_ const D3D11_BLEND_DESC1 *pBlendStateDesc,
            _COM_Outptr_opt_ ID3D11BlendState1 **ppBlendState);
        HRESULT ( STDMETHODCALLTYPE *CreateRasterizerState1 )(
            ID3D11Device1 * This,
            _In_ const D3D11_RASTERIZER_DESC1 *pRasterizerDesc,
            _COM_Outptr_opt_ ID3D11RasterizerState1 **ppRasterizerState);
        HRESULT ( STDMETHODCALLTYPE *CreateDeviceContextState )(
            ID3D11Device1 * This,
            UINT Flags,
            _In_reads_( FeatureLevels ) const D3D_FEATURE_LEVEL *pFeatureLevels,
            UINT FeatureLevels,
            UINT SDKVersion,
            REFIID EmulatedInterface,
            _Out_opt_ D3D_FEATURE_LEVEL *pChosenFeatureLevel,
            _Out_opt_ ID3DDeviceContextState **ppContextState);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedResource1 )(
            ID3D11Device1 * This,
            _In_ HANDLE hResource,
            _In_ REFIID returnedInterface,
            _COM_Outptr_ void **ppResource);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedResourceByName )(
            ID3D11Device1 * This,
            _In_ LPCWSTR lpName,
            _In_ DWORD dwDesiredAccess,
            _In_ REFIID returnedInterface,
            _COM_Outptr_ void **ppResource);
        END_INTERFACE
    } ID3D11Device1Vtbl;
    interface ID3D11Device1
    {
        CONST_VTBL struct ID3D11Device1Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetImmediateContext1(This,ppImmediateContext) )
    ( (This)->lpVtbl -> CreateDeferredContext1(This,ContextFlags,ppDeferredContext) )
    ( (This)->lpVtbl -> CreateBlendState1(This,pBlendStateDesc,ppBlendState) )
    ( (This)->lpVtbl -> CreateRasterizerState1(This,pRasterizerDesc,ppRasterizerState) )
    ( (This)->lpVtbl -> CreateDeviceContextState(This,Flags,pFeatureLevels,FeatureLevels,SDKVersion,EmulatedInterface,pChosenFeatureLevel,ppContextState) )
    ( (This)->lpVtbl -> OpenSharedResource1(This,hResource,returnedInterface,ppResource) )
    ( (This)->lpVtbl -> OpenSharedResourceByName(This,lpName,dwDesiredAccess,returnedInterface,ppResource) )
EXTERN_C const IID IID_ID3DUserDefinedAnnotation;
    typedef struct ID3DUserDefinedAnnotationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3DUserDefinedAnnotation * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3DUserDefinedAnnotation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3DUserDefinedAnnotation * This);
        INT ( STDMETHODCALLTYPE *BeginEvent )(
            ID3DUserDefinedAnnotation * This,
            _In_ LPCWSTR Name);
        INT ( STDMETHODCALLTYPE *EndEvent )(
            ID3DUserDefinedAnnotation * This);
        void ( STDMETHODCALLTYPE *SetMarker )(
            ID3DUserDefinedAnnotation * This,
            _In_ LPCWSTR Name);
        BOOL ( STDMETHODCALLTYPE *GetStatus )(
            ID3DUserDefinedAnnotation * This);
        END_INTERFACE
    } ID3DUserDefinedAnnotationVtbl;
    interface ID3DUserDefinedAnnotation
    {
        CONST_VTBL struct ID3DUserDefinedAnnotationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginEvent(This,Name) )
    ( (This)->lpVtbl -> EndEvent(This) )
    ( (This)->lpVtbl -> SetMarker(This,Name) )
    ( (This)->lpVtbl -> GetStatus(This) )
DEFINE_GUID(IID_ID3D11BlendState1,0xcc86fabe,0xda55,0x401d,0x85,0xe7,0xe3,0xc9,0xde,0x28,0x77,0xe9);
DEFINE_GUID(IID_ID3D11RasterizerState1,0x1217d7a6,0x5039,0x418c,0xb0,0x42,0x9c,0xbe,0x25,0x6a,0xfd,0x6e);
DEFINE_GUID(IID_ID3DDeviceContextState,0x5c1e0d8a,0x7c23,0x48f9,0x8c,0x59,0xa9,0x29,0x58,0xce,0xff,0x11);
DEFINE_GUID(IID_ID3D11DeviceContext1,0xbb2c6faa,0xb5fb,0x4082,0x8e,0x6b,0x38,0x8b,0x8c,0xfa,0x90,0xe1);
DEFINE_GUID(IID_ID3D11VideoContext1,0xA7F026DA,0xA5F8,0x4487,0xA5,0x64,0x15,0xE3,0x43,0x57,0x65,0x1E);
DEFINE_GUID(IID_ID3D11VideoDevice1,0x29DA1D51,0x1321,0x4454,0x80,0x4B,0xF5,0xFC,0x9F,0x86,0x1F,0x0F);
DEFINE_GUID(IID_ID3D11VideoProcessorEnumerator1,0x465217F2,0x5568,0x43CF,0xB5,0xB9,0xF6,0x1D,0x54,0x53,0x1C,0xA1);
DEFINE_GUID(IID_ID3D11Device1,0xa04bfb29,0x08ef,0x43d6,0xa4,0x9c,0xa9,0xbd,0xbd,0xcb,0xe6,0x86);
DEFINE_GUID(IID_ID3DUserDefinedAnnotation,0xb2daad8b,0x03d4,0x4dbf,0x95,0xeb,0x32,0xab,0x4b,0x63,0xd0,0xab);
extern RPC_IF_HANDLE __MIDL_itf_d3d11_1_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_1_0000_0009_v0_0_s_ifspec;
}
