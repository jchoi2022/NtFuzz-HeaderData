#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ID3D11Device4 ID3D11Device4;
typedef interface ID3D11Device5 ID3D11Device5;
typedef interface ID3D11Multithread ID3D11Multithread;
typedef interface ID3D11VideoContext2 ID3D11VideoContext2;
typedef interface ID3D11VideoDevice2 ID3D11VideoDevice2;
typedef interface ID3D11VideoContext3 ID3D11VideoContext3;
#include "oaidl.h"
#include "ocidl.h"
#include "dxgi1_5.h"
#include "d3dcommon.h"
#include "d3d11_3.h"
extern "C"{
}
#include "d3d11_3.h"
extern "C"{
#pragma region App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_d3d11_4_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_4_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11Device4;
    typedef struct ID3D11Device4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11Device4 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11Device4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11Device4 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateBuffer )(
            ID3D11Device4 * This,
            _In_ const D3D11_BUFFER_DESC *pDesc,
            _In_opt_ const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Buffer **ppBuffer);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture1D )(
            ID3D11Device4 * This,
            _In_ const D3D11_TEXTURE1D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels * pDesc->ArraySize)) const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Texture1D **ppTexture1D);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture2D )(
            ID3D11Device4 * This,
            _In_ const D3D11_TEXTURE2D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels * pDesc->ArraySize)) const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Texture2D **ppTexture2D);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture3D )(
            ID3D11Device4 * This,
            _In_ const D3D11_TEXTURE3D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels)) const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Texture3D **ppTexture3D);
        HRESULT ( STDMETHODCALLTYPE *CreateShaderResourceView )(
            ID3D11Device4 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_SHADER_RESOURCE_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11ShaderResourceView **ppSRView);
        HRESULT ( STDMETHODCALLTYPE *CreateUnorderedAccessView )(
            ID3D11Device4 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_UNORDERED_ACCESS_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11UnorderedAccessView **ppUAView);
        HRESULT ( STDMETHODCALLTYPE *CreateRenderTargetView )(
            ID3D11Device4 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_RENDER_TARGET_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11RenderTargetView **ppRTView);
        HRESULT ( STDMETHODCALLTYPE *CreateDepthStencilView )(
            ID3D11Device4 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_DEPTH_STENCIL_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11DepthStencilView **ppDepthStencilView);
        HRESULT ( STDMETHODCALLTYPE *CreateInputLayout )(
            ID3D11Device4 * This,
            _In_reads_(NumElements) const D3D11_INPUT_ELEMENT_DESC *pInputElementDescs,
            _In_range_( 0, D3D11_IA_VERTEX_INPUT_STRUCTURE_ELEMENT_COUNT ) UINT NumElements,
            _In_reads_(BytecodeLength) const void *pShaderBytecodeWithInputSignature,
            _In_ SIZE_T BytecodeLength,
            _COM_Outptr_opt_ ID3D11InputLayout **ppInputLayout);
        HRESULT ( STDMETHODCALLTYPE *CreateVertexShader )(
            ID3D11Device4 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11VertexShader **ppVertexShader);
        HRESULT ( STDMETHODCALLTYPE *CreateGeometryShader )(
            ID3D11Device4 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11GeometryShader **ppGeometryShader);
        HRESULT ( STDMETHODCALLTYPE *CreateGeometryShaderWithStreamOutput )(
            ID3D11Device4 * This,
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
            ID3D11Device4 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11PixelShader **ppPixelShader);
        HRESULT ( STDMETHODCALLTYPE *CreateHullShader )(
            ID3D11Device4 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11HullShader **ppHullShader);
        HRESULT ( STDMETHODCALLTYPE *CreateDomainShader )(
            ID3D11Device4 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11DomainShader **ppDomainShader);
        HRESULT ( STDMETHODCALLTYPE *CreateComputeShader )(
            ID3D11Device4 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11ComputeShader **ppComputeShader);
        HRESULT ( STDMETHODCALLTYPE *CreateClassLinkage )(
            ID3D11Device4 * This,
            _COM_Outptr_ ID3D11ClassLinkage **ppLinkage);
        HRESULT ( STDMETHODCALLTYPE *CreateBlendState )(
            ID3D11Device4 * This,
            _In_ const D3D11_BLEND_DESC *pBlendStateDesc,
            _COM_Outptr_opt_ ID3D11BlendState **ppBlendState);
        HRESULT ( STDMETHODCALLTYPE *CreateDepthStencilState )(
            ID3D11Device4 * This,
            _In_ const D3D11_DEPTH_STENCIL_DESC *pDepthStencilDesc,
            _COM_Outptr_opt_ ID3D11DepthStencilState **ppDepthStencilState);
        HRESULT ( STDMETHODCALLTYPE *CreateRasterizerState )(
            ID3D11Device4 * This,
            _In_ const D3D11_RASTERIZER_DESC *pRasterizerDesc,
            _COM_Outptr_opt_ ID3D11RasterizerState **ppRasterizerState);
        HRESULT ( STDMETHODCALLTYPE *CreateSamplerState )(
            ID3D11Device4 * This,
            _In_ const D3D11_SAMPLER_DESC *pSamplerDesc,
            _COM_Outptr_opt_ ID3D11SamplerState **ppSamplerState);
        HRESULT ( STDMETHODCALLTYPE *CreateQuery )(
            ID3D11Device4 * This,
            _In_ const D3D11_QUERY_DESC *pQueryDesc,
            _COM_Outptr_opt_ ID3D11Query **ppQuery);
        HRESULT ( STDMETHODCALLTYPE *CreatePredicate )(
            ID3D11Device4 * This,
            _In_ const D3D11_QUERY_DESC *pPredicateDesc,
            _COM_Outptr_opt_ ID3D11Predicate **ppPredicate);
        HRESULT ( STDMETHODCALLTYPE *CreateCounter )(
            ID3D11Device4 * This,
            _In_ const D3D11_COUNTER_DESC *pCounterDesc,
            _COM_Outptr_opt_ ID3D11Counter **ppCounter);
        HRESULT ( STDMETHODCALLTYPE *CreateDeferredContext )(
            ID3D11Device4 * This,
            UINT ContextFlags,
            _COM_Outptr_opt_ ID3D11DeviceContext **ppDeferredContext);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedResource )(
            ID3D11Device4 * This,
            _In_ HANDLE hResource,
            _In_ REFIID ReturnedInterface,
            _COM_Outptr_opt_ void **ppResource);
        HRESULT ( STDMETHODCALLTYPE *CheckFormatSupport )(
            ID3D11Device4 * This,
            _In_ DXGI_FORMAT Format,
            _Out_ UINT *pFormatSupport);
        HRESULT ( STDMETHODCALLTYPE *CheckMultisampleQualityLevels )(
            ID3D11Device4 * This,
            _In_ DXGI_FORMAT Format,
            _In_ UINT SampleCount,
            _Out_ UINT *pNumQualityLevels);
        void ( STDMETHODCALLTYPE *CheckCounterInfo )(
            ID3D11Device4 * This,
            _Out_ D3D11_COUNTER_INFO *pCounterInfo);
        HRESULT ( STDMETHODCALLTYPE *CheckCounter )(
            ID3D11Device4 * This,
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
            ID3D11Device4 * This,
            D3D11_FEATURE Feature,
            _Out_writes_bytes_(FeatureSupportDataSize) void *pFeatureSupportData,
            UINT FeatureSupportDataSize);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11Device4 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11Device4 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11Device4 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        D3D_FEATURE_LEVEL ( STDMETHODCALLTYPE *GetFeatureLevel )(
            ID3D11Device4 * This);
        UINT ( STDMETHODCALLTYPE *GetCreationFlags )(
            ID3D11Device4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceRemovedReason )(
            ID3D11Device4 * This);
        void ( STDMETHODCALLTYPE *GetImmediateContext )(
            ID3D11Device4 * This,
            _Outptr_ ID3D11DeviceContext **ppImmediateContext);
        HRESULT ( STDMETHODCALLTYPE *SetExceptionMode )(
            ID3D11Device4 * This,
            UINT RaiseFlags);
        UINT ( STDMETHODCALLTYPE *GetExceptionMode )(
            ID3D11Device4 * This);
        void ( STDMETHODCALLTYPE *GetImmediateContext1 )(
            ID3D11Device4 * This,
            _Outptr_ ID3D11DeviceContext1 **ppImmediateContext);
        HRESULT ( STDMETHODCALLTYPE *CreateDeferredContext1 )(
            ID3D11Device4 * This,
            UINT ContextFlags,
            _COM_Outptr_opt_ ID3D11DeviceContext1 **ppDeferredContext);
        HRESULT ( STDMETHODCALLTYPE *CreateBlendState1 )(
            ID3D11Device4 * This,
            _In_ const D3D11_BLEND_DESC1 *pBlendStateDesc,
            _COM_Outptr_opt_ ID3D11BlendState1 **ppBlendState);
        HRESULT ( STDMETHODCALLTYPE *CreateRasterizerState1 )(
            ID3D11Device4 * This,
            _In_ const D3D11_RASTERIZER_DESC1 *pRasterizerDesc,
            _COM_Outptr_opt_ ID3D11RasterizerState1 **ppRasterizerState);
        HRESULT ( STDMETHODCALLTYPE *CreateDeviceContextState )(
            ID3D11Device4 * This,
            UINT Flags,
            _In_reads_( FeatureLevels ) const D3D_FEATURE_LEVEL *pFeatureLevels,
            UINT FeatureLevels,
            UINT SDKVersion,
            REFIID EmulatedInterface,
            _Out_opt_ D3D_FEATURE_LEVEL *pChosenFeatureLevel,
            _Out_opt_ ID3DDeviceContextState **ppContextState);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedResource1 )(
            ID3D11Device4 * This,
            _In_ HANDLE hResource,
            _In_ REFIID returnedInterface,
            _COM_Outptr_ void **ppResource);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedResourceByName )(
            ID3D11Device4 * This,
            _In_ LPCWSTR lpName,
            _In_ DWORD dwDesiredAccess,
            _In_ REFIID returnedInterface,
            _COM_Outptr_ void **ppResource);
        void ( STDMETHODCALLTYPE *GetImmediateContext2 )(
            ID3D11Device4 * This,
            _Outptr_ ID3D11DeviceContext2 **ppImmediateContext);
        HRESULT ( STDMETHODCALLTYPE *CreateDeferredContext2 )(
            ID3D11Device4 * This,
            UINT ContextFlags,
            _COM_Outptr_opt_ ID3D11DeviceContext2 **ppDeferredContext);
        void ( STDMETHODCALLTYPE *GetResourceTiling )(
            ID3D11Device4 * This,
            _In_ ID3D11Resource *pTiledResource,
            _Out_opt_ UINT *pNumTilesForEntireResource,
            _Out_opt_ D3D11_PACKED_MIP_DESC *pPackedMipDesc,
            _Out_opt_ D3D11_TILE_SHAPE *pStandardTileShapeForNonPackedMips,
            _Inout_opt_ UINT *pNumSubresourceTilings,
            _In_ UINT FirstSubresourceTilingToGet,
            _Out_writes_(*pNumSubresourceTilings) D3D11_SUBRESOURCE_TILING *pSubresourceTilingsForNonPackedMips);
        HRESULT ( STDMETHODCALLTYPE *CheckMultisampleQualityLevels1 )(
            ID3D11Device4 * This,
            _In_ DXGI_FORMAT Format,
            _In_ UINT SampleCount,
            _In_ UINT Flags,
            _Out_ UINT *pNumQualityLevels);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture2D1 )(
            ID3D11Device4 * This,
            _In_ const D3D11_TEXTURE2D_DESC1 *pDesc1,
            _In_reads_opt_(_Inexpressible_(pDesc1->MipLevels * pDesc1->ArraySize)) const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Texture2D1 **ppTexture2D);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture3D1 )(
            ID3D11Device4 * This,
            _In_ const D3D11_TEXTURE3D_DESC1 *pDesc1,
            _In_reads_opt_(_Inexpressible_(pDesc1->MipLevels)) const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Texture3D1 **ppTexture3D);
        HRESULT ( STDMETHODCALLTYPE *CreateRasterizerState2 )(
            ID3D11Device4 * This,
            _In_ const D3D11_RASTERIZER_DESC2 *pRasterizerDesc,
            _COM_Outptr_opt_ ID3D11RasterizerState2 **ppRasterizerState);
        HRESULT ( STDMETHODCALLTYPE *CreateShaderResourceView1 )(
            ID3D11Device4 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_SHADER_RESOURCE_VIEW_DESC1 *pDesc1,
            _COM_Outptr_opt_ ID3D11ShaderResourceView1 **ppSRView1);
        HRESULT ( STDMETHODCALLTYPE *CreateUnorderedAccessView1 )(
            ID3D11Device4 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_UNORDERED_ACCESS_VIEW_DESC1 *pDesc1,
            _COM_Outptr_opt_ ID3D11UnorderedAccessView1 **ppUAView1);
        HRESULT ( STDMETHODCALLTYPE *CreateRenderTargetView1 )(
            ID3D11Device4 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_RENDER_TARGET_VIEW_DESC1 *pDesc1,
            _COM_Outptr_opt_ ID3D11RenderTargetView1 **ppRTView1);
        HRESULT ( STDMETHODCALLTYPE *CreateQuery1 )(
            ID3D11Device4 * This,
            _In_ const D3D11_QUERY_DESC1 *pQueryDesc1,
            _COM_Outptr_opt_ ID3D11Query1 **ppQuery1);
        void ( STDMETHODCALLTYPE *GetImmediateContext3 )(
            ID3D11Device4 * This,
            _Outptr_ ID3D11DeviceContext3 **ppImmediateContext);
        HRESULT ( STDMETHODCALLTYPE *CreateDeferredContext3 )(
            ID3D11Device4 * This,
            UINT ContextFlags,
            _COM_Outptr_opt_ ID3D11DeviceContext3 **ppDeferredContext);
        void ( STDMETHODCALLTYPE *WriteToSubresource )(
            ID3D11Device4 * This,
            _In_ ID3D11Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_opt_ const D3D11_BOX *pDstBox,
            _In_ const void *pSrcData,
            _In_ UINT SrcRowPitch,
            _In_ UINT SrcDepthPitch);
        void ( STDMETHODCALLTYPE *ReadFromSubresource )(
            ID3D11Device4 * This,
            _Out_ void *pDstData,
            _In_ UINT DstRowPitch,
            _In_ UINT DstDepthPitch,
            _In_ ID3D11Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_opt_ const D3D11_BOX *pSrcBox);
        HRESULT ( STDMETHODCALLTYPE *RegisterDeviceRemovedEvent )(
            ID3D11Device4 * This,
            _In_ HANDLE hEvent,
            _Out_ DWORD *pdwCookie);
        void ( STDMETHODCALLTYPE *UnregisterDeviceRemoved )(
            ID3D11Device4 * This,
            _In_ DWORD dwCookie);
        END_INTERFACE
    } ID3D11Device4Vtbl;
    interface ID3D11Device4
    {
        CONST_VTBL struct ID3D11Device4Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetImmediateContext2(This,ppImmediateContext) )
    ( (This)->lpVtbl -> CreateDeferredContext2(This,ContextFlags,ppDeferredContext) )
    ( (This)->lpVtbl -> GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) )
    ( (This)->lpVtbl -> CheckMultisampleQualityLevels1(This,Format,SampleCount,Flags,pNumQualityLevels) )
    ( (This)->lpVtbl -> CreateTexture2D1(This,pDesc1,pInitialData,ppTexture2D) )
    ( (This)->lpVtbl -> CreateTexture3D1(This,pDesc1,pInitialData,ppTexture3D) )
    ( (This)->lpVtbl -> CreateRasterizerState2(This,pRasterizerDesc,ppRasterizerState) )
    ( (This)->lpVtbl -> CreateShaderResourceView1(This,pResource,pDesc1,ppSRView1) )
    ( (This)->lpVtbl -> CreateUnorderedAccessView1(This,pResource,pDesc1,ppUAView1) )
    ( (This)->lpVtbl -> CreateRenderTargetView1(This,pResource,pDesc1,ppRTView1) )
    ( (This)->lpVtbl -> CreateQuery1(This,pQueryDesc1,ppQuery1) )
    ( (This)->lpVtbl -> GetImmediateContext3(This,ppImmediateContext) )
    ( (This)->lpVtbl -> CreateDeferredContext3(This,ContextFlags,ppDeferredContext) )
    ( (This)->lpVtbl -> WriteToSubresource(This,pDstResource,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch) )
    ( (This)->lpVtbl -> ReadFromSubresource(This,pDstData,DstRowPitch,DstDepthPitch,pSrcResource,SrcSubresource,pSrcBox) )
    ( (This)->lpVtbl -> RegisterDeviceRemovedEvent(This,hEvent,pdwCookie) )
    ( (This)->lpVtbl -> UnregisterDeviceRemoved(This,dwCookie) )
EXTERN_C const IID IID_ID3D11Device5;
    typedef struct ID3D11Device5Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11Device5 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11Device5 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11Device5 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateBuffer )(
            ID3D11Device5 * This,
            _In_ const D3D11_BUFFER_DESC *pDesc,
            _In_opt_ const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Buffer **ppBuffer);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture1D )(
            ID3D11Device5 * This,
            _In_ const D3D11_TEXTURE1D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels * pDesc->ArraySize)) const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Texture1D **ppTexture1D);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture2D )(
            ID3D11Device5 * This,
            _In_ const D3D11_TEXTURE2D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels * pDesc->ArraySize)) const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Texture2D **ppTexture2D);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture3D )(
            ID3D11Device5 * This,
            _In_ const D3D11_TEXTURE3D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels)) const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Texture3D **ppTexture3D);
        HRESULT ( STDMETHODCALLTYPE *CreateShaderResourceView )(
            ID3D11Device5 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_SHADER_RESOURCE_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11ShaderResourceView **ppSRView);
        HRESULT ( STDMETHODCALLTYPE *CreateUnorderedAccessView )(
            ID3D11Device5 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_UNORDERED_ACCESS_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11UnorderedAccessView **ppUAView);
        HRESULT ( STDMETHODCALLTYPE *CreateRenderTargetView )(
            ID3D11Device5 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_RENDER_TARGET_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11RenderTargetView **ppRTView);
        HRESULT ( STDMETHODCALLTYPE *CreateDepthStencilView )(
            ID3D11Device5 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_DEPTH_STENCIL_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11DepthStencilView **ppDepthStencilView);
        HRESULT ( STDMETHODCALLTYPE *CreateInputLayout )(
            ID3D11Device5 * This,
            _In_reads_(NumElements) const D3D11_INPUT_ELEMENT_DESC *pInputElementDescs,
            _In_range_( 0, D3D11_IA_VERTEX_INPUT_STRUCTURE_ELEMENT_COUNT ) UINT NumElements,
            _In_reads_(BytecodeLength) const void *pShaderBytecodeWithInputSignature,
            _In_ SIZE_T BytecodeLength,
            _COM_Outptr_opt_ ID3D11InputLayout **ppInputLayout);
        HRESULT ( STDMETHODCALLTYPE *CreateVertexShader )(
            ID3D11Device5 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11VertexShader **ppVertexShader);
        HRESULT ( STDMETHODCALLTYPE *CreateGeometryShader )(
            ID3D11Device5 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11GeometryShader **ppGeometryShader);
        HRESULT ( STDMETHODCALLTYPE *CreateGeometryShaderWithStreamOutput )(
            ID3D11Device5 * This,
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
            ID3D11Device5 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11PixelShader **ppPixelShader);
        HRESULT ( STDMETHODCALLTYPE *CreateHullShader )(
            ID3D11Device5 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11HullShader **ppHullShader);
        HRESULT ( STDMETHODCALLTYPE *CreateDomainShader )(
            ID3D11Device5 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11DomainShader **ppDomainShader);
        HRESULT ( STDMETHODCALLTYPE *CreateComputeShader )(
            ID3D11Device5 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11ComputeShader **ppComputeShader);
        HRESULT ( STDMETHODCALLTYPE *CreateClassLinkage )(
            ID3D11Device5 * This,
            _COM_Outptr_ ID3D11ClassLinkage **ppLinkage);
        HRESULT ( STDMETHODCALLTYPE *CreateBlendState )(
            ID3D11Device5 * This,
            _In_ const D3D11_BLEND_DESC *pBlendStateDesc,
            _COM_Outptr_opt_ ID3D11BlendState **ppBlendState);
        HRESULT ( STDMETHODCALLTYPE *CreateDepthStencilState )(
            ID3D11Device5 * This,
            _In_ const D3D11_DEPTH_STENCIL_DESC *pDepthStencilDesc,
            _COM_Outptr_opt_ ID3D11DepthStencilState **ppDepthStencilState);
        HRESULT ( STDMETHODCALLTYPE *CreateRasterizerState )(
            ID3D11Device5 * This,
            _In_ const D3D11_RASTERIZER_DESC *pRasterizerDesc,
            _COM_Outptr_opt_ ID3D11RasterizerState **ppRasterizerState);
        HRESULT ( STDMETHODCALLTYPE *CreateSamplerState )(
            ID3D11Device5 * This,
            _In_ const D3D11_SAMPLER_DESC *pSamplerDesc,
            _COM_Outptr_opt_ ID3D11SamplerState **ppSamplerState);
        HRESULT ( STDMETHODCALLTYPE *CreateQuery )(
            ID3D11Device5 * This,
            _In_ const D3D11_QUERY_DESC *pQueryDesc,
            _COM_Outptr_opt_ ID3D11Query **ppQuery);
        HRESULT ( STDMETHODCALLTYPE *CreatePredicate )(
            ID3D11Device5 * This,
            _In_ const D3D11_QUERY_DESC *pPredicateDesc,
            _COM_Outptr_opt_ ID3D11Predicate **ppPredicate);
        HRESULT ( STDMETHODCALLTYPE *CreateCounter )(
            ID3D11Device5 * This,
            _In_ const D3D11_COUNTER_DESC *pCounterDesc,
            _COM_Outptr_opt_ ID3D11Counter **ppCounter);
        HRESULT ( STDMETHODCALLTYPE *CreateDeferredContext )(
            ID3D11Device5 * This,
            UINT ContextFlags,
            _COM_Outptr_opt_ ID3D11DeviceContext **ppDeferredContext);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedResource )(
            ID3D11Device5 * This,
            _In_ HANDLE hResource,
            _In_ REFIID ReturnedInterface,
            _COM_Outptr_opt_ void **ppResource);
        HRESULT ( STDMETHODCALLTYPE *CheckFormatSupport )(
            ID3D11Device5 * This,
            _In_ DXGI_FORMAT Format,
            _Out_ UINT *pFormatSupport);
        HRESULT ( STDMETHODCALLTYPE *CheckMultisampleQualityLevels )(
            ID3D11Device5 * This,
            _In_ DXGI_FORMAT Format,
            _In_ UINT SampleCount,
            _Out_ UINT *pNumQualityLevels);
        void ( STDMETHODCALLTYPE *CheckCounterInfo )(
            ID3D11Device5 * This,
            _Out_ D3D11_COUNTER_INFO *pCounterInfo);
        HRESULT ( STDMETHODCALLTYPE *CheckCounter )(
            ID3D11Device5 * This,
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
            ID3D11Device5 * This,
            D3D11_FEATURE Feature,
            _Out_writes_bytes_(FeatureSupportDataSize) void *pFeatureSupportData,
            UINT FeatureSupportDataSize);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11Device5 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11Device5 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11Device5 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        D3D_FEATURE_LEVEL ( STDMETHODCALLTYPE *GetFeatureLevel )(
            ID3D11Device5 * This);
        UINT ( STDMETHODCALLTYPE *GetCreationFlags )(
            ID3D11Device5 * This);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceRemovedReason )(
            ID3D11Device5 * This);
        void ( STDMETHODCALLTYPE *GetImmediateContext )(
            ID3D11Device5 * This,
            _Outptr_ ID3D11DeviceContext **ppImmediateContext);
        HRESULT ( STDMETHODCALLTYPE *SetExceptionMode )(
            ID3D11Device5 * This,
            UINT RaiseFlags);
        UINT ( STDMETHODCALLTYPE *GetExceptionMode )(
            ID3D11Device5 * This);
        void ( STDMETHODCALLTYPE *GetImmediateContext1 )(
            ID3D11Device5 * This,
            _Outptr_ ID3D11DeviceContext1 **ppImmediateContext);
        HRESULT ( STDMETHODCALLTYPE *CreateDeferredContext1 )(
            ID3D11Device5 * This,
            UINT ContextFlags,
            _COM_Outptr_opt_ ID3D11DeviceContext1 **ppDeferredContext);
        HRESULT ( STDMETHODCALLTYPE *CreateBlendState1 )(
            ID3D11Device5 * This,
            _In_ const D3D11_BLEND_DESC1 *pBlendStateDesc,
            _COM_Outptr_opt_ ID3D11BlendState1 **ppBlendState);
        HRESULT ( STDMETHODCALLTYPE *CreateRasterizerState1 )(
            ID3D11Device5 * This,
            _In_ const D3D11_RASTERIZER_DESC1 *pRasterizerDesc,
            _COM_Outptr_opt_ ID3D11RasterizerState1 **ppRasterizerState);
        HRESULT ( STDMETHODCALLTYPE *CreateDeviceContextState )(
            ID3D11Device5 * This,
            UINT Flags,
            _In_reads_( FeatureLevels ) const D3D_FEATURE_LEVEL *pFeatureLevels,
            UINT FeatureLevels,
            UINT SDKVersion,
            REFIID EmulatedInterface,
            _Out_opt_ D3D_FEATURE_LEVEL *pChosenFeatureLevel,
            _Out_opt_ ID3DDeviceContextState **ppContextState);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedResource1 )(
            ID3D11Device5 * This,
            _In_ HANDLE hResource,
            _In_ REFIID returnedInterface,
            _COM_Outptr_ void **ppResource);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedResourceByName )(
            ID3D11Device5 * This,
            _In_ LPCWSTR lpName,
            _In_ DWORD dwDesiredAccess,
            _In_ REFIID returnedInterface,
            _COM_Outptr_ void **ppResource);
        void ( STDMETHODCALLTYPE *GetImmediateContext2 )(
            ID3D11Device5 * This,
            _Outptr_ ID3D11DeviceContext2 **ppImmediateContext);
        HRESULT ( STDMETHODCALLTYPE *CreateDeferredContext2 )(
            ID3D11Device5 * This,
            UINT ContextFlags,
            _COM_Outptr_opt_ ID3D11DeviceContext2 **ppDeferredContext);
        void ( STDMETHODCALLTYPE *GetResourceTiling )(
            ID3D11Device5 * This,
            _In_ ID3D11Resource *pTiledResource,
            _Out_opt_ UINT *pNumTilesForEntireResource,
            _Out_opt_ D3D11_PACKED_MIP_DESC *pPackedMipDesc,
            _Out_opt_ D3D11_TILE_SHAPE *pStandardTileShapeForNonPackedMips,
            _Inout_opt_ UINT *pNumSubresourceTilings,
            _In_ UINT FirstSubresourceTilingToGet,
            _Out_writes_(*pNumSubresourceTilings) D3D11_SUBRESOURCE_TILING *pSubresourceTilingsForNonPackedMips);
        HRESULT ( STDMETHODCALLTYPE *CheckMultisampleQualityLevels1 )(
            ID3D11Device5 * This,
            _In_ DXGI_FORMAT Format,
            _In_ UINT SampleCount,
            _In_ UINT Flags,
            _Out_ UINT *pNumQualityLevels);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture2D1 )(
            ID3D11Device5 * This,
            _In_ const D3D11_TEXTURE2D_DESC1 *pDesc1,
            _In_reads_opt_(_Inexpressible_(pDesc1->MipLevels * pDesc1->ArraySize)) const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Texture2D1 **ppTexture2D);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture3D1 )(
            ID3D11Device5 * This,
            _In_ const D3D11_TEXTURE3D_DESC1 *pDesc1,
            _In_reads_opt_(_Inexpressible_(pDesc1->MipLevels)) const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Texture3D1 **ppTexture3D);
        HRESULT ( STDMETHODCALLTYPE *CreateRasterizerState2 )(
            ID3D11Device5 * This,
            _In_ const D3D11_RASTERIZER_DESC2 *pRasterizerDesc,
            _COM_Outptr_opt_ ID3D11RasterizerState2 **ppRasterizerState);
        HRESULT ( STDMETHODCALLTYPE *CreateShaderResourceView1 )(
            ID3D11Device5 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_SHADER_RESOURCE_VIEW_DESC1 *pDesc1,
            _COM_Outptr_opt_ ID3D11ShaderResourceView1 **ppSRView1);
        HRESULT ( STDMETHODCALLTYPE *CreateUnorderedAccessView1 )(
            ID3D11Device5 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_UNORDERED_ACCESS_VIEW_DESC1 *pDesc1,
            _COM_Outptr_opt_ ID3D11UnorderedAccessView1 **ppUAView1);
        HRESULT ( STDMETHODCALLTYPE *CreateRenderTargetView1 )(
            ID3D11Device5 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_RENDER_TARGET_VIEW_DESC1 *pDesc1,
            _COM_Outptr_opt_ ID3D11RenderTargetView1 **ppRTView1);
        HRESULT ( STDMETHODCALLTYPE *CreateQuery1 )(
            ID3D11Device5 * This,
            _In_ const D3D11_QUERY_DESC1 *pQueryDesc1,
            _COM_Outptr_opt_ ID3D11Query1 **ppQuery1);
        void ( STDMETHODCALLTYPE *GetImmediateContext3 )(
            ID3D11Device5 * This,
            _Outptr_ ID3D11DeviceContext3 **ppImmediateContext);
        HRESULT ( STDMETHODCALLTYPE *CreateDeferredContext3 )(
            ID3D11Device5 * This,
            UINT ContextFlags,
            _COM_Outptr_opt_ ID3D11DeviceContext3 **ppDeferredContext);
        void ( STDMETHODCALLTYPE *WriteToSubresource )(
            ID3D11Device5 * This,
            _In_ ID3D11Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_opt_ const D3D11_BOX *pDstBox,
            _In_ const void *pSrcData,
            _In_ UINT SrcRowPitch,
            _In_ UINT SrcDepthPitch);
        void ( STDMETHODCALLTYPE *ReadFromSubresource )(
            ID3D11Device5 * This,
            _Out_ void *pDstData,
            _In_ UINT DstRowPitch,
            _In_ UINT DstDepthPitch,
            _In_ ID3D11Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_opt_ const D3D11_BOX *pSrcBox);
        HRESULT ( STDMETHODCALLTYPE *RegisterDeviceRemovedEvent )(
            ID3D11Device5 * This,
            _In_ HANDLE hEvent,
            _Out_ DWORD *pdwCookie);
        void ( STDMETHODCALLTYPE *UnregisterDeviceRemoved )(
            ID3D11Device5 * This,
            _In_ DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedFence )(
            ID3D11Device5 * This,
            _In_ HANDLE hFence,
            _In_ REFIID ReturnedInterface,
            _COM_Outptr_opt_ void **ppFence);
        HRESULT ( STDMETHODCALLTYPE *CreateFence )(
            ID3D11Device5 * This,
            _In_ UINT64 InitialValue,
            _In_ D3D11_FENCE_FLAG Flags,
            _In_ REFIID ReturnedInterface,
            _COM_Outptr_opt_ void **ppFence);
        END_INTERFACE
    } ID3D11Device5Vtbl;
    interface ID3D11Device5
    {
        CONST_VTBL struct ID3D11Device5Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetImmediateContext2(This,ppImmediateContext) )
    ( (This)->lpVtbl -> CreateDeferredContext2(This,ContextFlags,ppDeferredContext) )
    ( (This)->lpVtbl -> GetResourceTiling(This,pTiledResource,pNumTilesForEntireResource,pPackedMipDesc,pStandardTileShapeForNonPackedMips,pNumSubresourceTilings,FirstSubresourceTilingToGet,pSubresourceTilingsForNonPackedMips) )
    ( (This)->lpVtbl -> CheckMultisampleQualityLevels1(This,Format,SampleCount,Flags,pNumQualityLevels) )
    ( (This)->lpVtbl -> CreateTexture2D1(This,pDesc1,pInitialData,ppTexture2D) )
    ( (This)->lpVtbl -> CreateTexture3D1(This,pDesc1,pInitialData,ppTexture3D) )
    ( (This)->lpVtbl -> CreateRasterizerState2(This,pRasterizerDesc,ppRasterizerState) )
    ( (This)->lpVtbl -> CreateShaderResourceView1(This,pResource,pDesc1,ppSRView1) )
    ( (This)->lpVtbl -> CreateUnorderedAccessView1(This,pResource,pDesc1,ppUAView1) )
    ( (This)->lpVtbl -> CreateRenderTargetView1(This,pResource,pDesc1,ppRTView1) )
    ( (This)->lpVtbl -> CreateQuery1(This,pQueryDesc1,ppQuery1) )
    ( (This)->lpVtbl -> GetImmediateContext3(This,ppImmediateContext) )
    ( (This)->lpVtbl -> CreateDeferredContext3(This,ContextFlags,ppDeferredContext) )
    ( (This)->lpVtbl -> WriteToSubresource(This,pDstResource,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch) )
    ( (This)->lpVtbl -> ReadFromSubresource(This,pDstData,DstRowPitch,DstDepthPitch,pSrcResource,SrcSubresource,pSrcBox) )
    ( (This)->lpVtbl -> RegisterDeviceRemovedEvent(This,hEvent,pdwCookie) )
    ( (This)->lpVtbl -> UnregisterDeviceRemoved(This,dwCookie) )
    ( (This)->lpVtbl -> OpenSharedFence(This,hFence,ReturnedInterface,ppFence) )
    ( (This)->lpVtbl -> CreateFence(This,InitialValue,Flags,ReturnedInterface,ppFence) )
EXTERN_C const IID IID_ID3D11Multithread;
    typedef struct ID3D11MultithreadVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11Multithread * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11Multithread * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11Multithread * This);
        void ( STDMETHODCALLTYPE *Enter )(
            ID3D11Multithread * This);
        void ( STDMETHODCALLTYPE *Leave )(
            ID3D11Multithread * This);
        BOOL ( STDMETHODCALLTYPE *SetMultithreadProtected )(
            ID3D11Multithread * This,
            _In_ BOOL bMTProtect);
        BOOL ( STDMETHODCALLTYPE *GetMultithreadProtected )(
            ID3D11Multithread * This);
        END_INTERFACE
    } ID3D11MultithreadVtbl;
    interface ID3D11Multithread
    {
        CONST_VTBL struct ID3D11MultithreadVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Enter(This) )
    ( (This)->lpVtbl -> Leave(This) )
    ( (This)->lpVtbl -> SetMultithreadProtected(This,bMTProtect) )
    ( (This)->lpVtbl -> GetMultithreadProtected(This) )
EXTERN_C const IID IID_ID3D11VideoContext2;
    typedef struct ID3D11VideoContext2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11VideoContext2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11VideoContext2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11VideoContext2 * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11VideoContext2 * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11VideoContext2 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11VideoContext2 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11VideoContext2 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *GetDecoderBuffer )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            D3D11_VIDEO_DECODER_BUFFER_TYPE Type,
            _Out_ UINT *pBufferSize,
            _Outptr_result_bytebuffer_(*pBufferSize) void **ppBuffer);
        HRESULT ( STDMETHODCALLTYPE *ReleaseDecoderBuffer )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ D3D11_VIDEO_DECODER_BUFFER_TYPE Type);
        HRESULT ( STDMETHODCALLTYPE *DecoderBeginFrame )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ ID3D11VideoDecoderOutputView *pView,
            UINT ContentKeySize,
            _In_reads_bytes_opt_(ContentKeySize) const void *pContentKey);
        HRESULT ( STDMETHODCALLTYPE *DecoderEndFrame )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoDecoder *pDecoder);
        HRESULT ( STDMETHODCALLTYPE *SubmitDecoderBuffers )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ UINT NumBuffers,
            _In_reads_(NumBuffers) const D3D11_VIDEO_DECODER_BUFFER_DESC *pBufferDesc);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *DecoderExtension )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ const D3D11_VIDEO_DECODER_EXTENSION *pExtensionData);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputTargetRect )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ BOOL Enable,
            _In_opt_ const RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputBackgroundColor )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ BOOL YCbCr,
            _In_ const D3D11_VIDEO_COLOR *pColor);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputColorSpace )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ const D3D11_VIDEO_PROCESSOR_COLOR_SPACE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputAlphaFillMode )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode,
            _In_ UINT StreamIndex);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputConstriction )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ BOOL Enable,
            _In_ SIZE Size);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputStereoMode )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ BOOL Enable);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *VideoProcessorSetOutputExtension )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ const GUID *pExtensionGuid,
            _In_ UINT DataSize,
            _In_ void *pData);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputTargetRect )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ BOOL *Enabled,
            _Out_ RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputBackgroundColor )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ BOOL *pYCbCr,
            _Out_ D3D11_VIDEO_COLOR *pColor);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputColorSpace )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ D3D11_VIDEO_PROCESSOR_COLOR_SPACE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputAlphaFillMode )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE *pAlphaFillMode,
            _Out_ UINT *pStreamIndex);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputConstriction )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ BOOL *pEnabled,
            _Out_ SIZE *pSize);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputStereoMode )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ BOOL *pEnabled);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *VideoProcessorGetOutputExtension )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ const GUID *pExtensionGuid,
            _In_ UINT DataSize,
            _Out_writes_bytes_(DataSize) void *pData);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamFrameFormat )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ D3D11_VIDEO_FRAME_FORMAT FrameFormat);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamColorSpace )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ const D3D11_VIDEO_PROCESSOR_COLOR_SPACE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamOutputRate )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate,
            _In_ BOOL RepeatFrame,
            _In_opt_ const DXGI_RATIONAL *pCustomRate);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamSourceRect )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_opt_ const RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamDestRect )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_opt_ const RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamAlpha )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_ FLOAT Alpha);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamPalette )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ UINT Count,
            _In_reads_opt_(Count) const UINT *pEntries);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamPixelAspectRatio )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_opt_ const DXGI_RATIONAL *pSourceAspectRatio,
            _In_opt_ const DXGI_RATIONAL *pDestinationAspectRatio);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamLumaKey )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_ FLOAT Lower,
            _In_ FLOAT Upper);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamStereoFormat )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_ D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format,
            _In_ BOOL LeftViewFrame0,
            _In_ BOOL BaseViewFrame0,
            _In_ D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode,
            _In_ int MonoOffset);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamAutoProcessingMode )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamFilter )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ D3D11_VIDEO_PROCESSOR_FILTER Filter,
            _In_ BOOL Enable,
            _In_ int Level);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *VideoProcessorSetStreamExtension )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ const GUID *pExtensionGuid,
            _In_ UINT DataSize,
            _In_ void *pData);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamFrameFormat )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ D3D11_VIDEO_FRAME_FORMAT *pFrameFormat);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamColorSpace )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ D3D11_VIDEO_PROCESSOR_COLOR_SPACE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamOutputRate )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ D3D11_VIDEO_PROCESSOR_OUTPUT_RATE *pOutputRate,
            _Out_ BOOL *pRepeatFrame,
            _Out_ DXGI_RATIONAL *pCustomRate);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamSourceRect )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamDestRect )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamAlpha )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ FLOAT *pAlpha);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamPalette )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ UINT Count,
            _Out_writes_(Count) UINT *pEntries);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamPixelAspectRatio )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ DXGI_RATIONAL *pSourceAspectRatio,
            _Out_ DXGI_RATIONAL *pDestinationAspectRatio);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamLumaKey )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ FLOAT *pLower,
            _Out_ FLOAT *pUpper);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamStereoFormat )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnable,
            _Out_ D3D11_VIDEO_PROCESSOR_STEREO_FORMAT *pFormat,
            _Out_ BOOL *pLeftViewFrame0,
            _Out_ BOOL *pBaseViewFrame0,
            _Out_ D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE *pFlipMode,
            _Out_ int *MonoOffset);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamAutoProcessingMode )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamFilter )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ D3D11_VIDEO_PROCESSOR_FILTER Filter,
            _Out_ BOOL *pEnabled,
            _Out_ int *pLevel);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *VideoProcessorGetStreamExtension )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ const GUID *pExtensionGuid,
            _In_ UINT DataSize,
            _Out_writes_bytes_(DataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *VideoProcessorBlt )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ ID3D11VideoProcessorOutputView *pView,
            _In_ UINT OutputFrame,
            _In_ UINT StreamCount,
            _In_reads_(StreamCount) const D3D11_VIDEO_PROCESSOR_STREAM *pStreams);
        HRESULT ( STDMETHODCALLTYPE *NegotiateCryptoSessionKeyExchange )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ UINT DataSize,
            _Inout_updates_bytes_(DataSize) void *pData);
        void ( STDMETHODCALLTYPE *EncryptionBlt )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ ID3D11Texture2D *pSrcSurface,
            _In_ ID3D11Texture2D *pDstSurface,
            _In_ UINT IVSize,
            _Inout_opt_bytecount_(IVSize) void *pIV);
        void ( STDMETHODCALLTYPE *DecryptionBlt )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ ID3D11Texture2D *pSrcSurface,
            _In_ ID3D11Texture2D *pDstSurface,
            _In_opt_ D3D11_ENCRYPTED_BLOCK_INFO *pEncryptedBlockInfo,
            _In_ UINT ContentKeySize,
            _In_reads_bytes_opt_(ContentKeySize) const void *pContentKey,
            _In_ UINT IVSize,
            _Inout_opt_bytecount_(IVSize) void *pIV);
        void ( STDMETHODCALLTYPE *StartSessionKeyRefresh )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ UINT RandomNumberSize,
            _Out_writes_bytes_(RandomNumberSize) void *pRandomNumber);
        void ( STDMETHODCALLTYPE *FinishSessionKeyRefresh )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11CryptoSession *pCryptoSession);
        HRESULT ( STDMETHODCALLTYPE *GetEncryptionBltKey )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ UINT KeySize,
            _Out_writes_bytes_(KeySize) void *pReadbackKey);
        HRESULT ( STDMETHODCALLTYPE *NegotiateAuthenticatedChannelKeyExchange )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11AuthenticatedChannel *pChannel,
            _In_ UINT DataSize,
            _Inout_updates_bytes_(DataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *QueryAuthenticatedChannel )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11AuthenticatedChannel *pChannel,
            _In_ UINT InputSize,
            _In_reads_bytes_(InputSize) const void *pInput,
            _In_ UINT OutputSize,
            _Out_writes_bytes_(OutputSize) void *pOutput);
        HRESULT ( STDMETHODCALLTYPE *ConfigureAuthenticatedChannel )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11AuthenticatedChannel *pChannel,
            _In_ UINT InputSize,
            _In_reads_bytes_(InputSize) const void *pInput,
            _Out_ D3D11_AUTHENTICATED_CONFIGURE_OUTPUT *pOutput);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamRotation )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_ D3D11_VIDEO_PROCESSOR_ROTATION Rotation);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamRotation )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnable,
            _Out_ D3D11_VIDEO_PROCESSOR_ROTATION *pRotation);
        HRESULT ( STDMETHODCALLTYPE *SubmitDecoderBuffers1 )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ UINT NumBuffers,
            _In_reads_(NumBuffers) const D3D11_VIDEO_DECODER_BUFFER_DESC1 *pBufferDesc);
        HRESULT ( STDMETHODCALLTYPE *GetDataForNewHardwareKey )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ UINT PrivateInputSize,
            _In_reads_(PrivateInputSize) const void *pPrivatInputData,
            _Out_ UINT64 *pPrivateOutputData);
        HRESULT ( STDMETHODCALLTYPE *CheckCryptoSessionStatus )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _Out_ D3D11_CRYPTO_SESSION_STATUS *pStatus);
        HRESULT ( STDMETHODCALLTYPE *DecoderEnableDownsampling )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ DXGI_COLOR_SPACE_TYPE InputColorSpace,
            _In_ const D3D11_VIDEO_SAMPLE_DESC *pOutputDesc,
            _In_ UINT ReferenceFrameCount);
        HRESULT ( STDMETHODCALLTYPE *DecoderUpdateDownsampling )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ const D3D11_VIDEO_SAMPLE_DESC *pOutputDesc);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputColorSpace1 )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ DXGI_COLOR_SPACE_TYPE ColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputShaderUsage )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ BOOL ShaderUsage);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputColorSpace1 )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ DXGI_COLOR_SPACE_TYPE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputShaderUsage )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ BOOL *pShaderUsage);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamColorSpace1 )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ DXGI_COLOR_SPACE_TYPE ColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamMirror )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_ BOOL FlipHorizontal,
            _In_ BOOL FlipVertical);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamColorSpace1 )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ DXGI_COLOR_SPACE_TYPE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamMirror )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnable,
            _Out_ BOOL *pFlipHorizontal,
            _Out_ BOOL *pFlipVertical);
        HRESULT ( STDMETHODCALLTYPE *VideoProcessorGetBehaviorHints )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT OutputWidth,
            _In_ UINT OutputHeight,
            _In_ DXGI_FORMAT OutputFormat,
            _In_ UINT StreamCount,
            _In_reads_(StreamCount) const D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT *pStreams,
            _Out_ UINT *pBehaviorHints);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputHDRMetaData )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ DXGI_HDR_METADATA_TYPE Type,
            _In_ UINT Size,
            _In_reads_bytes_opt_(Size) const void *pHDRMetaData);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputHDRMetaData )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ DXGI_HDR_METADATA_TYPE *pType,
            _In_ UINT Size,
            _Out_writes_bytes_opt_(Size) void *pMetaData);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamHDRMetaData )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ DXGI_HDR_METADATA_TYPE Type,
            _In_ UINT Size,
            _In_reads_bytes_opt_(Size) const void *pHDRMetaData);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamHDRMetaData )(
            ID3D11VideoContext2 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ DXGI_HDR_METADATA_TYPE *pType,
            _In_ UINT Size,
            _Out_writes_bytes_opt_(Size) void *pMetaData);
        END_INTERFACE
    } ID3D11VideoContext2Vtbl;
    interface ID3D11VideoContext2
    {
        CONST_VTBL struct ID3D11VideoContext2Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> VideoProcessorSetOutputHDRMetaData(This,pVideoProcessor,Type,Size,pHDRMetaData) )
    ( (This)->lpVtbl -> VideoProcessorGetOutputHDRMetaData(This,pVideoProcessor,pType,Size,pMetaData) )
    ( (This)->lpVtbl -> VideoProcessorSetStreamHDRMetaData(This,pVideoProcessor,StreamIndex,Type,Size,pHDRMetaData) )
    ( (This)->lpVtbl -> VideoProcessorGetStreamHDRMetaData(This,pVideoProcessor,StreamIndex,pType,Size,pMetaData) )
typedef
enum D3D11_FEATURE_VIDEO
    {
        D3D11_FEATURE_VIDEO_DECODER_HISTOGRAM = 0
    } D3D11_FEATURE_VIDEO;
typedef
enum D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT
    {
        D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_Y = 0,
        D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_U = 1,
        D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_V = 2,
        D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_R = 0,
        D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_G = 1,
        D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_B = 2,
        D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_A = 3
    } D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT;
typedef
enum D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_FLAGS
    {
        D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_FLAG_NONE = 0,
        D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_FLAG_Y = ( 1 << D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_Y ) ,
        D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_FLAG_U = ( 1 << D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_U ) ,
        D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_FLAG_V = ( 1 << D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_V ) ,
        D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_FLAG_R = ( 1 << D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_R ) ,
        D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_FLAG_G = ( 1 << D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_G ) ,
        D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_FLAG_B = ( 1 << D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_B ) ,
        D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_FLAG_A = ( 1 << D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_A )
    } D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_FLAGS );
typedef struct D3D11_FEATURE_DATA_VIDEO_DECODER_HISTOGRAM
    {
    D3D11_VIDEO_DECODER_DESC DecoderDesc;
    D3D11_VIDEO_DECODER_HISTOGRAM_COMPONENT_FLAGS Components;
    UINT BinCount;
    UINT CounterBitDepth;
    } D3D11_FEATURE_DATA_VIDEO_DECODER_HISTOGRAM;
typedef
enum D3D11_CRYPTO_SESSION_KEY_EXCHANGE_FLAGS
    {
        D3D11_CRYPTO_SESSION_KEY_EXCHANGE_FLAG_NONE = 0
    } D3D11_CRYPTO_SESSION_KEY_EXCHANGE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(D3D11_CRYPTO_SESSION_KEY_EXCHANGE_FLAGS );
extern RPC_IF_HANDLE __MIDL_itf_d3d11_4_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_4_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11VideoDevice2;
    typedef struct ID3D11VideoDevice2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11VideoDevice2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11VideoDevice2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11VideoDevice2 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoDecoder )(
            ID3D11VideoDevice2 * This,
            _In_ const D3D11_VIDEO_DECODER_DESC *pVideoDesc,
            _In_ const D3D11_VIDEO_DECODER_CONFIG *pConfig,
            _COM_Outptr_ ID3D11VideoDecoder **ppDecoder);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoProcessor )(
            ID3D11VideoDevice2 * This,
            _In_ ID3D11VideoProcessorEnumerator *pEnum,
            _In_ UINT RateConversionIndex,
            _COM_Outptr_ ID3D11VideoProcessor **ppVideoProcessor);
        HRESULT ( STDMETHODCALLTYPE *CreateAuthenticatedChannel )(
            ID3D11VideoDevice2 * This,
            _In_ D3D11_AUTHENTICATED_CHANNEL_TYPE ChannelType,
            _COM_Outptr_ ID3D11AuthenticatedChannel **ppAuthenticatedChannel);
        HRESULT ( STDMETHODCALLTYPE *CreateCryptoSession )(
            ID3D11VideoDevice2 * This,
            _In_ const GUID *pCryptoType,
            _In_opt_ const GUID *pDecoderProfile,
            _In_ const GUID *pKeyExchangeType,
            _COM_Outptr_ ID3D11CryptoSession **ppCryptoSession);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoDecoderOutputView )(
            ID3D11VideoDevice2 * This,
            _In_ ID3D11Resource *pResource,
            _In_ const D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11VideoDecoderOutputView **ppVDOVView);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoProcessorInputView )(
            ID3D11VideoDevice2 * This,
            _In_ ID3D11Resource *pResource,
            _In_ ID3D11VideoProcessorEnumerator *pEnum,
            _In_ const D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11VideoProcessorInputView **ppVPIView);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoProcessorOutputView )(
            ID3D11VideoDevice2 * This,
            _In_ ID3D11Resource *pResource,
            _In_ ID3D11VideoProcessorEnumerator *pEnum,
            _In_ const D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11VideoProcessorOutputView **ppVPOView);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoProcessorEnumerator )(
            ID3D11VideoDevice2 * This,
            _In_ const D3D11_VIDEO_PROCESSOR_CONTENT_DESC *pDesc,
            _COM_Outptr_ ID3D11VideoProcessorEnumerator **ppEnum);
        UINT ( STDMETHODCALLTYPE *GetVideoDecoderProfileCount )(
            ID3D11VideoDevice2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetVideoDecoderProfile )(
            ID3D11VideoDevice2 * This,
            _In_ UINT Index,
            _Out_ GUID *pDecoderProfile);
        HRESULT ( STDMETHODCALLTYPE *CheckVideoDecoderFormat )(
            ID3D11VideoDevice2 * This,
            _In_ const GUID *pDecoderProfile,
            _In_ DXGI_FORMAT Format,
            _Out_ BOOL *pSupported);
        HRESULT ( STDMETHODCALLTYPE *GetVideoDecoderConfigCount )(
            ID3D11VideoDevice2 * This,
            _In_ const D3D11_VIDEO_DECODER_DESC *pDesc,
            _Out_ UINT *pCount);
        HRESULT ( STDMETHODCALLTYPE *GetVideoDecoderConfig )(
            ID3D11VideoDevice2 * This,
            _In_ const D3D11_VIDEO_DECODER_DESC *pDesc,
            _In_ UINT Index,
            _Out_ D3D11_VIDEO_DECODER_CONFIG *pConfig);
        HRESULT ( STDMETHODCALLTYPE *GetContentProtectionCaps )(
            ID3D11VideoDevice2 * This,
            _In_opt_ const GUID *pCryptoType,
            _In_opt_ const GUID *pDecoderProfile,
            _Out_ D3D11_VIDEO_CONTENT_PROTECTION_CAPS *pCaps);
        HRESULT ( STDMETHODCALLTYPE *CheckCryptoKeyExchange )(
            ID3D11VideoDevice2 * This,
            _In_ const GUID *pCryptoType,
            _In_opt_ const GUID *pDecoderProfile,
            _In_ UINT Index,
            _Out_ GUID *pKeyExchangeType);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11VideoDevice2 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11VideoDevice2 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *GetCryptoSessionPrivateDataSize )(
            ID3D11VideoDevice2 * This,
            _In_ const GUID *pCryptoType,
            _In_opt_ const GUID *pDecoderProfile,
            _In_ const GUID *pKeyExchangeType,
            _Out_ UINT *pPrivateInputSize,
            _Out_ UINT *pPrivateOutputSize);
        HRESULT ( STDMETHODCALLTYPE *GetVideoDecoderCaps )(
            ID3D11VideoDevice2 * This,
            _In_ const GUID *pDecoderProfile,
            _In_ UINT SampleWidth,
            _In_ UINT SampleHeight,
            _In_ const DXGI_RATIONAL *pFrameRate,
            _In_ UINT BitRate,
            _In_opt_ const GUID *pCryptoType,
            _Out_ UINT *pDecoderCaps);
        HRESULT ( STDMETHODCALLTYPE *CheckVideoDecoderDownsampling )(
            ID3D11VideoDevice2 * This,
            _In_ const D3D11_VIDEO_DECODER_DESC *pInputDesc,
            _In_ DXGI_COLOR_SPACE_TYPE InputColorSpace,
            _In_ const D3D11_VIDEO_DECODER_CONFIG *pInputConfig,
            _In_ const DXGI_RATIONAL *pFrameRate,
            _In_ const D3D11_VIDEO_SAMPLE_DESC *pOutputDesc,
            _Out_ BOOL *pSupported,
            _Out_ BOOL *pRealTimeHint);
        HRESULT ( STDMETHODCALLTYPE *RecommendVideoDecoderDownsampleParameters )(
            ID3D11VideoDevice2 * This,
            _In_ const D3D11_VIDEO_DECODER_DESC *pInputDesc,
            _In_ DXGI_COLOR_SPACE_TYPE InputColorSpace,
            _In_ const D3D11_VIDEO_DECODER_CONFIG *pInputConfig,
            _In_ const DXGI_RATIONAL *pFrameRate,
            _Out_ D3D11_VIDEO_SAMPLE_DESC *pRecommendedOutputDesc);
        HRESULT ( STDMETHODCALLTYPE *CheckFeatureSupport )(
            ID3D11VideoDevice2 * This,
            D3D11_FEATURE_VIDEO Feature,
            _Out_writes_bytes_(FeatureSupportDataSize) void *pFeatureSupportData,
            UINT FeatureSupportDataSize);
        HRESULT ( STDMETHODCALLTYPE *NegotiateCryptoSessionKeyExchangeMT )(
            ID3D11VideoDevice2 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ D3D11_CRYPTO_SESSION_KEY_EXCHANGE_FLAGS flags,
            _In_ UINT DataSize,
            _Inout_updates_bytes_(DataSize) void *pData);
        END_INTERFACE
    } ID3D11VideoDevice2Vtbl;
    interface ID3D11VideoDevice2
    {
        CONST_VTBL struct ID3D11VideoDevice2Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) )
    ( (This)->lpVtbl -> NegotiateCryptoSessionKeyExchangeMT(This,pCryptoSession,flags,DataSize,pData) )
typedef struct D3D11_VIDEO_DECODER_BUFFER_DESC2
    {
    D3D11_VIDEO_DECODER_BUFFER_TYPE BufferType;
    UINT DataOffset;
    UINT DataSize;
    _Field_size_opt_(IVSize) void *pIV;
    UINT IVSize;
    _Field_size_opt_(SubSampleMappingCount) D3D11_VIDEO_DECODER_SUB_SAMPLE_MAPPING_BLOCK *pSubSampleMappingBlock;
    UINT SubSampleMappingCount;
    UINT cBlocksStripeEncrypted;
    UINT cBlocksStripeClear;
    } D3D11_VIDEO_DECODER_BUFFER_DESC2;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_4_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_4_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11VideoContext3;
    typedef struct ID3D11VideoContext3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11VideoContext3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11VideoContext3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11VideoContext3 * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11VideoContext3 * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11VideoContext3 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11VideoContext3 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11VideoContext3 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        HRESULT ( STDMETHODCALLTYPE *GetDecoderBuffer )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            D3D11_VIDEO_DECODER_BUFFER_TYPE Type,
            _Out_ UINT *pBufferSize,
            _Outptr_result_bytebuffer_(*pBufferSize) void **ppBuffer);
        HRESULT ( STDMETHODCALLTYPE *ReleaseDecoderBuffer )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ D3D11_VIDEO_DECODER_BUFFER_TYPE Type);
        HRESULT ( STDMETHODCALLTYPE *DecoderBeginFrame )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ ID3D11VideoDecoderOutputView *pView,
            UINT ContentKeySize,
            _In_reads_bytes_opt_(ContentKeySize) const void *pContentKey);
        HRESULT ( STDMETHODCALLTYPE *DecoderEndFrame )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoDecoder *pDecoder);
        HRESULT ( STDMETHODCALLTYPE *SubmitDecoderBuffers )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ UINT NumBuffers,
            _In_reads_(NumBuffers) const D3D11_VIDEO_DECODER_BUFFER_DESC *pBufferDesc);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *DecoderExtension )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ const D3D11_VIDEO_DECODER_EXTENSION *pExtensionData);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputTargetRect )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ BOOL Enable,
            _In_opt_ const RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputBackgroundColor )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ BOOL YCbCr,
            _In_ const D3D11_VIDEO_COLOR *pColor);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputColorSpace )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ const D3D11_VIDEO_PROCESSOR_COLOR_SPACE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputAlphaFillMode )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode,
            _In_ UINT StreamIndex);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputConstriction )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ BOOL Enable,
            _In_ SIZE Size);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputStereoMode )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ BOOL Enable);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *VideoProcessorSetOutputExtension )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ const GUID *pExtensionGuid,
            _In_ UINT DataSize,
            _In_ void *pData);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputTargetRect )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ BOOL *Enabled,
            _Out_ RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputBackgroundColor )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ BOOL *pYCbCr,
            _Out_ D3D11_VIDEO_COLOR *pColor);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputColorSpace )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ D3D11_VIDEO_PROCESSOR_COLOR_SPACE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputAlphaFillMode )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE *pAlphaFillMode,
            _Out_ UINT *pStreamIndex);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputConstriction )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ BOOL *pEnabled,
            _Out_ SIZE *pSize);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputStereoMode )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ BOOL *pEnabled);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *VideoProcessorGetOutputExtension )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ const GUID *pExtensionGuid,
            _In_ UINT DataSize,
            _Out_writes_bytes_(DataSize) void *pData);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamFrameFormat )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ D3D11_VIDEO_FRAME_FORMAT FrameFormat);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamColorSpace )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ const D3D11_VIDEO_PROCESSOR_COLOR_SPACE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamOutputRate )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate,
            _In_ BOOL RepeatFrame,
            _In_opt_ const DXGI_RATIONAL *pCustomRate);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamSourceRect )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_opt_ const RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamDestRect )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_opt_ const RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamAlpha )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_ FLOAT Alpha);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamPalette )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ UINT Count,
            _In_reads_opt_(Count) const UINT *pEntries);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamPixelAspectRatio )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_opt_ const DXGI_RATIONAL *pSourceAspectRatio,
            _In_opt_ const DXGI_RATIONAL *pDestinationAspectRatio);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamLumaKey )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_ FLOAT Lower,
            _In_ FLOAT Upper);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamStereoFormat )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_ D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format,
            _In_ BOOL LeftViewFrame0,
            _In_ BOOL BaseViewFrame0,
            _In_ D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode,
            _In_ int MonoOffset);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamAutoProcessingMode )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamFilter )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ D3D11_VIDEO_PROCESSOR_FILTER Filter,
            _In_ BOOL Enable,
            _In_ int Level);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *VideoProcessorSetStreamExtension )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ const GUID *pExtensionGuid,
            _In_ UINT DataSize,
            _In_ void *pData);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamFrameFormat )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ D3D11_VIDEO_FRAME_FORMAT *pFrameFormat);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamColorSpace )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ D3D11_VIDEO_PROCESSOR_COLOR_SPACE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamOutputRate )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ D3D11_VIDEO_PROCESSOR_OUTPUT_RATE *pOutputRate,
            _Out_ BOOL *pRepeatFrame,
            _Out_ DXGI_RATIONAL *pCustomRate);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamSourceRect )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamDestRect )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ RECT *pRect);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamAlpha )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ FLOAT *pAlpha);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamPalette )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ UINT Count,
            _Out_writes_(Count) UINT *pEntries);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamPixelAspectRatio )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ DXGI_RATIONAL *pSourceAspectRatio,
            _Out_ DXGI_RATIONAL *pDestinationAspectRatio);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamLumaKey )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled,
            _Out_ FLOAT *pLower,
            _Out_ FLOAT *pUpper);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamStereoFormat )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnable,
            _Out_ D3D11_VIDEO_PROCESSOR_STEREO_FORMAT *pFormat,
            _Out_ BOOL *pLeftViewFrame0,
            _Out_ BOOL *pBaseViewFrame0,
            _Out_ D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE *pFlipMode,
            _Out_ int *MonoOffset);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamAutoProcessingMode )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnabled);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamFilter )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ D3D11_VIDEO_PROCESSOR_FILTER Filter,
            _Out_ BOOL *pEnabled,
            _Out_ int *pLevel);
        APP_DEPRECATED_HRESULT ( STDMETHODCALLTYPE *VideoProcessorGetStreamExtension )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ const GUID *pExtensionGuid,
            _In_ UINT DataSize,
            _Out_writes_bytes_(DataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *VideoProcessorBlt )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ ID3D11VideoProcessorOutputView *pView,
            _In_ UINT OutputFrame,
            _In_ UINT StreamCount,
            _In_reads_(StreamCount) const D3D11_VIDEO_PROCESSOR_STREAM *pStreams);
        HRESULT ( STDMETHODCALLTYPE *NegotiateCryptoSessionKeyExchange )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ UINT DataSize,
            _Inout_updates_bytes_(DataSize) void *pData);
        void ( STDMETHODCALLTYPE *EncryptionBlt )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ ID3D11Texture2D *pSrcSurface,
            _In_ ID3D11Texture2D *pDstSurface,
            _In_ UINT IVSize,
            _Inout_opt_bytecount_(IVSize) void *pIV);
        void ( STDMETHODCALLTYPE *DecryptionBlt )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ ID3D11Texture2D *pSrcSurface,
            _In_ ID3D11Texture2D *pDstSurface,
            _In_opt_ D3D11_ENCRYPTED_BLOCK_INFO *pEncryptedBlockInfo,
            _In_ UINT ContentKeySize,
            _In_reads_bytes_opt_(ContentKeySize) const void *pContentKey,
            _In_ UINT IVSize,
            _Inout_opt_bytecount_(IVSize) void *pIV);
        void ( STDMETHODCALLTYPE *StartSessionKeyRefresh )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ UINT RandomNumberSize,
            _Out_writes_bytes_(RandomNumberSize) void *pRandomNumber);
        void ( STDMETHODCALLTYPE *FinishSessionKeyRefresh )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11CryptoSession *pCryptoSession);
        HRESULT ( STDMETHODCALLTYPE *GetEncryptionBltKey )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ UINT KeySize,
            _Out_writes_bytes_(KeySize) void *pReadbackKey);
        HRESULT ( STDMETHODCALLTYPE *NegotiateAuthenticatedChannelKeyExchange )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11AuthenticatedChannel *pChannel,
            _In_ UINT DataSize,
            _Inout_updates_bytes_(DataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *QueryAuthenticatedChannel )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11AuthenticatedChannel *pChannel,
            _In_ UINT InputSize,
            _In_reads_bytes_(InputSize) const void *pInput,
            _In_ UINT OutputSize,
            _Out_writes_bytes_(OutputSize) void *pOutput);
        HRESULT ( STDMETHODCALLTYPE *ConfigureAuthenticatedChannel )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11AuthenticatedChannel *pChannel,
            _In_ UINT InputSize,
            _In_reads_bytes_(InputSize) const void *pInput,
            _Out_ D3D11_AUTHENTICATED_CONFIGURE_OUTPUT *pOutput);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamRotation )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_ D3D11_VIDEO_PROCESSOR_ROTATION Rotation);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamRotation )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnable,
            _Out_ D3D11_VIDEO_PROCESSOR_ROTATION *pRotation);
        HRESULT ( STDMETHODCALLTYPE *SubmitDecoderBuffers1 )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ UINT NumBuffers,
            _In_reads_(NumBuffers) const D3D11_VIDEO_DECODER_BUFFER_DESC1 *pBufferDesc);
        HRESULT ( STDMETHODCALLTYPE *GetDataForNewHardwareKey )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _In_ UINT PrivateInputSize,
            _In_reads_(PrivateInputSize) const void *pPrivatInputData,
            _Out_ UINT64 *pPrivateOutputData);
        HRESULT ( STDMETHODCALLTYPE *CheckCryptoSessionStatus )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11CryptoSession *pCryptoSession,
            _Out_ D3D11_CRYPTO_SESSION_STATUS *pStatus);
        HRESULT ( STDMETHODCALLTYPE *DecoderEnableDownsampling )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ DXGI_COLOR_SPACE_TYPE InputColorSpace,
            _In_ const D3D11_VIDEO_SAMPLE_DESC *pOutputDesc,
            _In_ UINT ReferenceFrameCount);
        HRESULT ( STDMETHODCALLTYPE *DecoderUpdateDownsampling )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ const D3D11_VIDEO_SAMPLE_DESC *pOutputDesc);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputColorSpace1 )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ DXGI_COLOR_SPACE_TYPE ColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputShaderUsage )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ BOOL ShaderUsage);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputColorSpace1 )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ DXGI_COLOR_SPACE_TYPE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputShaderUsage )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ BOOL *pShaderUsage);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamColorSpace1 )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ DXGI_COLOR_SPACE_TYPE ColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamMirror )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ BOOL Enable,
            _In_ BOOL FlipHorizontal,
            _In_ BOOL FlipVertical);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamColorSpace1 )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ DXGI_COLOR_SPACE_TYPE *pColorSpace);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamMirror )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ BOOL *pEnable,
            _Out_ BOOL *pFlipHorizontal,
            _Out_ BOOL *pFlipVertical);
        HRESULT ( STDMETHODCALLTYPE *VideoProcessorGetBehaviorHints )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT OutputWidth,
            _In_ UINT OutputHeight,
            _In_ DXGI_FORMAT OutputFormat,
            _In_ UINT StreamCount,
            _In_reads_(StreamCount) const D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT *pStreams,
            _Out_ UINT *pBehaviorHints);
        void ( STDMETHODCALLTYPE *VideoProcessorSetOutputHDRMetaData )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ DXGI_HDR_METADATA_TYPE Type,
            _In_ UINT Size,
            _In_reads_bytes_opt_(Size) const void *pHDRMetaData);
        void ( STDMETHODCALLTYPE *VideoProcessorGetOutputHDRMetaData )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _Out_ DXGI_HDR_METADATA_TYPE *pType,
            _In_ UINT Size,
            _Out_writes_bytes_opt_(Size) void *pMetaData);
        void ( STDMETHODCALLTYPE *VideoProcessorSetStreamHDRMetaData )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _In_ DXGI_HDR_METADATA_TYPE Type,
            _In_ UINT Size,
            _In_reads_bytes_opt_(Size) const void *pHDRMetaData);
        void ( STDMETHODCALLTYPE *VideoProcessorGetStreamHDRMetaData )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoProcessor *pVideoProcessor,
            _In_ UINT StreamIndex,
            _Out_ DXGI_HDR_METADATA_TYPE *pType,
            _In_ UINT Size,
            _Out_writes_bytes_opt_(Size) void *pMetaData);
        HRESULT ( STDMETHODCALLTYPE *DecoderBeginFrame1 )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ ID3D11VideoDecoderOutputView *pView,
            UINT ContentKeySize,
            _In_reads_bytes_opt_(ContentKeySize) const void *pContentKey,
            _In_range_(0, D3D11_4_VIDEO_DECODER_MAX_HISTOGRAM_COMPONENTS) UINT NumComponentHistograms,
            _In_reads_opt_(NumComponentHistograms) const UINT *pHistogramOffsets,
            _In_reads_opt_(NumComponentHistograms) ID3D11Buffer *const *ppHistogramBuffers);
        HRESULT ( STDMETHODCALLTYPE *SubmitDecoderBuffers2 )(
            ID3D11VideoContext3 * This,
            _In_ ID3D11VideoDecoder *pDecoder,
            _In_ UINT NumBuffers,
            _In_reads_(NumBuffers) const D3D11_VIDEO_DECODER_BUFFER_DESC2 *pBufferDesc);
        END_INTERFACE
    } ID3D11VideoContext3Vtbl;
    interface ID3D11VideoContext3
    {
        CONST_VTBL struct ID3D11VideoContext3Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> VideoProcessorSetOutputHDRMetaData(This,pVideoProcessor,Type,Size,pHDRMetaData) )
    ( (This)->lpVtbl -> VideoProcessorGetOutputHDRMetaData(This,pVideoProcessor,pType,Size,pMetaData) )
    ( (This)->lpVtbl -> VideoProcessorSetStreamHDRMetaData(This,pVideoProcessor,StreamIndex,Type,Size,pHDRMetaData) )
    ( (This)->lpVtbl -> VideoProcessorGetStreamHDRMetaData(This,pVideoProcessor,StreamIndex,pType,Size,pMetaData) )
    ( (This)->lpVtbl -> DecoderBeginFrame1(This,pDecoder,pView,ContentKeySize,pContentKey,NumComponentHistograms,pHistogramOffsets,ppHistogramBuffers) )
    ( (This)->lpVtbl -> SubmitDecoderBuffers2(This,pDecoder,NumBuffers,pBufferDesc) )
typedef struct D3D11_FEATURE_DATA_D3D11_OPTIONS4
    {
    BOOL ExtendedNV12SharedTextureSupported;
    } D3D11_FEATURE_DATA_D3D11_OPTIONS4;
#endif
#pragma endregion
DEFINE_GUID(IID_ID3D11Device4,0x8992ab71,0x02e6,0x4b8d,0xba,0x48,0xb0,0x56,0xdc,0xda,0x42,0xc4);
DEFINE_GUID(IID_ID3D11Device5,0x8ffde202,0xa0e7,0x45df,0x9e,0x01,0xe8,0x37,0x80,0x1b,0x5e,0xa0);
DEFINE_GUID(IID_ID3D11Multithread,0x9B7E4E00,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
DEFINE_GUID(IID_ID3D11VideoContext2,0xC4E7374C,0x6243,0x4D1B,0xAE,0x87,0x52,0xB4,0xF7,0x40,0xE2,0x61);
DEFINE_GUID(IID_ID3D11VideoDevice2,0x59C0CB01,0x35F0,0x4A70,0x8F,0x67,0x87,0x90,0x5C,0x90,0x6A,0x53);
DEFINE_GUID(IID_ID3D11VideoContext3,0xA9E2FAA0,0xCB39,0x418F,0xA0,0xB7,0xD8,0xAA,0xD4,0xDE,0x67,0x2E);
extern RPC_IF_HANDLE __MIDL_itf_d3d11_4_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_4_0000_0006_v0_0_s_ifspec;
}
