#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ID3D10BlendState1 ID3D10BlendState1;
typedef interface ID3D10ShaderResourceView1 ID3D10ShaderResourceView1;
typedef interface ID3D10Device1 ID3D10Device1;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#include "d3d10.h"
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum D3D10_FEATURE_LEVEL1
    {
        D3D10_FEATURE_LEVEL_10_0 = 0xa000,
        D3D10_FEATURE_LEVEL_10_1 = 0xa100,
        D3D10_FEATURE_LEVEL_9_1 = 0x9100,
        D3D10_FEATURE_LEVEL_9_2 = 0x9200,
        D3D10_FEATURE_LEVEL_9_3 = 0x9300
    } D3D10_FEATURE_LEVEL1;
typedef struct D3D10_RENDER_TARGET_BLEND_DESC1
    {
    BOOL BlendEnable;
    D3D10_BLEND SrcBlend;
    D3D10_BLEND DestBlend;
    D3D10_BLEND_OP BlendOp;
    D3D10_BLEND SrcBlendAlpha;
    D3D10_BLEND DestBlendAlpha;
    D3D10_BLEND_OP BlendOpAlpha;
    UINT8 RenderTargetWriteMask;
    } D3D10_RENDER_TARGET_BLEND_DESC1;
typedef struct D3D10_BLEND_DESC1
    {
    BOOL AlphaToCoverageEnable;
    BOOL IndependentBlendEnable;
    D3D10_RENDER_TARGET_BLEND_DESC1 RenderTarget[ 8 ];
    } D3D10_BLEND_DESC1;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_1_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_1_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10BlendState1;
    typedef struct ID3D10BlendState1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10BlendState1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10BlendState1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10BlendState1 * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10BlendState1 * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10BlendState1 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10BlendState1 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10BlendState1 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D10BlendState1 * This,
            _Out_ D3D10_BLEND_DESC *pDesc);
        void ( STDMETHODCALLTYPE *GetDesc1 )(
            ID3D10BlendState1 * This,
            _Out_ D3D10_BLEND_DESC1 *pDesc);
        END_INTERFACE
    } ID3D10BlendState1Vtbl;
    interface ID3D10BlendState1
    {
        CONST_VTBL struct ID3D10BlendState1Vtbl *lpVtbl;
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
typedef struct D3D10_TEXCUBE_ARRAY_SRV1
    {
    UINT MostDetailedMip;
    UINT MipLevels;
    UINT First2DArrayFace;
    UINT NumCubes;
    } D3D10_TEXCUBE_ARRAY_SRV1;
typedef D3D_SRV_DIMENSION D3D10_SRV_DIMENSION1;
typedef struct D3D10_SHADER_RESOURCE_VIEW_DESC1
    {
    DXGI_FORMAT Format;
    D3D10_SRV_DIMENSION1 ViewDimension;
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
        D3D10_TEXCUBE_ARRAY_SRV1 TextureCubeArray;
        } ;
    } D3D10_SHADER_RESOURCE_VIEW_DESC1;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_1_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_1_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10ShaderResourceView1;
    typedef struct ID3D10ShaderResourceView1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10ShaderResourceView1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10ShaderResourceView1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10ShaderResourceView1 * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D10ShaderResourceView1 * This,
            _Out_ ID3D10Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10ShaderResourceView1 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10ShaderResourceView1 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10ShaderResourceView1 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *GetResource )(
            ID3D10ShaderResourceView1 * This,
            _Out_ ID3D10Resource **ppResource);
        void ( STDMETHODCALLTYPE *GetDesc )(
            ID3D10ShaderResourceView1 * This,
            _Out_ D3D10_SHADER_RESOURCE_VIEW_DESC *pDesc);
        void ( STDMETHODCALLTYPE *GetDesc1 )(
            ID3D10ShaderResourceView1 * This,
            _Out_ D3D10_SHADER_RESOURCE_VIEW_DESC1 *pDesc);
        END_INTERFACE
    } ID3D10ShaderResourceView1Vtbl;
    interface ID3D10ShaderResourceView1
    {
        CONST_VTBL struct ID3D10ShaderResourceView1Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetDesc1(This,pDesc) )
typedef
enum D3D10_STANDARD_MULTISAMPLE_QUALITY_LEVELS
    {
        D3D10_STANDARD_MULTISAMPLE_PATTERN = 0xffffffff,
        D3D10_CENTER_MULTISAMPLE_PATTERN = 0xfffffffe
    } D3D10_STANDARD_MULTISAMPLE_QUALITY_LEVELS;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_1_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_1_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D10Device1;
    typedef struct ID3D10Device1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D10Device1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D10Device1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D10Device1 * This);
        void ( STDMETHODCALLTYPE *VSSetConstantBuffers )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D10Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *PSSetShaderResources )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D10ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *PSSetShader )(
            ID3D10Device1 * This,
            _In_opt_ ID3D10PixelShader *pPixelShader);
        void ( STDMETHODCALLTYPE *PSSetSamplers )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D10SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *VSSetShader )(
            ID3D10Device1 * This,
            _In_opt_ ID3D10VertexShader *pVertexShader);
        void ( STDMETHODCALLTYPE *DrawIndexed )(
            ID3D10Device1 * This,
            _In_ UINT IndexCount,
            _In_ UINT StartIndexLocation,
            _In_ INT BaseVertexLocation);
        void ( STDMETHODCALLTYPE *Draw )(
            ID3D10Device1 * This,
            _In_ UINT VertexCount,
            _In_ UINT StartVertexLocation);
        void ( STDMETHODCALLTYPE *PSSetConstantBuffers )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D10Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *IASetInputLayout )(
            ID3D10Device1 * This,
            _In_opt_ ID3D10InputLayout *pInputLayout);
        void ( STDMETHODCALLTYPE *IASetVertexBuffers )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_1_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_1_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D10Buffer *const *ppVertexBuffers,
            _In_reads_opt_(NumBuffers) const UINT *pStrides,
            _In_reads_opt_(NumBuffers) const UINT *pOffsets);
        void ( STDMETHODCALLTYPE *IASetIndexBuffer )(
            ID3D10Device1 * This,
            _In_opt_ ID3D10Buffer *pIndexBuffer,
            _In_ DXGI_FORMAT Format,
            _In_ UINT Offset);
        void ( STDMETHODCALLTYPE *DrawIndexedInstanced )(
            ID3D10Device1 * This,
            _In_ UINT IndexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartIndexLocation,
            _In_ INT BaseVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *DrawInstanced )(
            ID3D10Device1 * This,
            _In_ UINT VertexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *GSSetConstantBuffers )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D10Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *GSSetShader )(
            ID3D10Device1 * This,
            _In_opt_ ID3D10GeometryShader *pShader);
        void ( STDMETHODCALLTYPE *IASetPrimitiveTopology )(
            ID3D10Device1 * This,
            _In_ D3D10_PRIMITIVE_TOPOLOGY Topology);
        void ( STDMETHODCALLTYPE *VSSetShaderResources )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D10ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *VSSetSamplers )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D10SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *SetPredication )(
            ID3D10Device1 * This,
            _In_opt_ ID3D10Predicate *pPredicate,
            _In_ BOOL PredicateValue);
        void ( STDMETHODCALLTYPE *GSSetShaderResources )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D10ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *GSSetSamplers )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D10SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *OMSetRenderTargets )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_SIMULTANEOUS_RENDER_TARGET_COUNT ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D10RenderTargetView *const *ppRenderTargetViews,
            _In_opt_ ID3D10DepthStencilView *pDepthStencilView);
        void ( STDMETHODCALLTYPE *OMSetBlendState )(
            ID3D10Device1 * This,
            _In_opt_ ID3D10BlendState *pBlendState,
            _In_ const FLOAT BlendFactor[ 4 ],
            _In_ UINT SampleMask);
        void ( STDMETHODCALLTYPE *OMSetDepthStencilState )(
            ID3D10Device1 * This,
            _In_opt_ ID3D10DepthStencilState *pDepthStencilState,
            _In_ UINT StencilRef);
        void ( STDMETHODCALLTYPE *SOSetTargets )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_SO_BUFFER_SLOT_COUNT) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D10Buffer *const *ppSOTargets,
            _In_reads_opt_(NumBuffers) const UINT *pOffsets);
        void ( STDMETHODCALLTYPE *DrawAuto )(
            ID3D10Device1 * This);
        void ( STDMETHODCALLTYPE *RSSetState )(
            ID3D10Device1 * This,
            _In_opt_ ID3D10RasterizerState *pRasterizerState);
        void ( STDMETHODCALLTYPE *RSSetViewports )(
            ID3D10Device1 * This,
            _In_range_(0, D3D10_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumViewports,
            _In_reads_opt_(NumViewports) const D3D10_VIEWPORT *pViewports);
        void ( STDMETHODCALLTYPE *RSSetScissorRects )(
            ID3D10Device1 * This,
            _In_range_(0, D3D10_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumRects,
            _In_reads_opt_(NumRects) const D3D10_RECT *pRects);
        void ( STDMETHODCALLTYPE *CopySubresourceRegion )(
            ID3D10Device1 * This,
            _In_ ID3D10Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ UINT DstX,
            _In_ UINT DstY,
            _In_ UINT DstZ,
            _In_ ID3D10Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_opt_ const D3D10_BOX *pSrcBox);
        void ( STDMETHODCALLTYPE *CopyResource )(
            ID3D10Device1 * This,
            _In_ ID3D10Resource *pDstResource,
            _In_ ID3D10Resource *pSrcResource);
        void ( STDMETHODCALLTYPE *UpdateSubresource )(
            ID3D10Device1 * This,
            _In_ ID3D10Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_opt_ const D3D10_BOX *pDstBox,
            _In_ const void *pSrcData,
            _In_ UINT SrcRowPitch,
            _In_ UINT SrcDepthPitch);
        void ( STDMETHODCALLTYPE *ClearRenderTargetView )(
            ID3D10Device1 * This,
            _In_ ID3D10RenderTargetView *pRenderTargetView,
            _In_ const FLOAT ColorRGBA[ 4 ]);
        void ( STDMETHODCALLTYPE *ClearDepthStencilView )(
            ID3D10Device1 * This,
            _In_ ID3D10DepthStencilView *pDepthStencilView,
            _In_ UINT ClearFlags,
            _In_ FLOAT Depth,
            _In_ UINT8 Stencil);
        void ( STDMETHODCALLTYPE *GenerateMips )(
            ID3D10Device1 * This,
            _In_ ID3D10ShaderResourceView *pShaderResourceView);
        void ( STDMETHODCALLTYPE *ResolveSubresource )(
            ID3D10Device1 * This,
            _In_ ID3D10Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ ID3D10Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_ DXGI_FORMAT Format);
        void ( STDMETHODCALLTYPE *VSGetConstantBuffers )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D10Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *PSGetShaderResources )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D10ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *PSGetShader )(
            ID3D10Device1 * This,
            _Out_ ID3D10PixelShader **ppPixelShader);
        void ( STDMETHODCALLTYPE *PSGetSamplers )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D10SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *VSGetShader )(
            ID3D10Device1 * This,
            _Out_ ID3D10VertexShader **ppVertexShader);
        void ( STDMETHODCALLTYPE *PSGetConstantBuffers )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D10Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *IAGetInputLayout )(
            ID3D10Device1 * This,
            _Out_ ID3D10InputLayout **ppInputLayout);
        void ( STDMETHODCALLTYPE *IAGetVertexBuffers )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_1_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_1_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D10Buffer **ppVertexBuffers,
            _Out_writes_opt_(NumBuffers) UINT *pStrides,
            _Out_writes_opt_(NumBuffers) UINT *pOffsets);
        void ( STDMETHODCALLTYPE *IAGetIndexBuffer )(
            ID3D10Device1 * This,
            _Out_opt_ ID3D10Buffer **pIndexBuffer,
            _Out_opt_ DXGI_FORMAT *Format,
            _Out_opt_ UINT *Offset);
        void ( STDMETHODCALLTYPE *GSGetConstantBuffers )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D10Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *GSGetShader )(
            ID3D10Device1 * This,
            _Out_ ID3D10GeometryShader **ppGeometryShader);
        void ( STDMETHODCALLTYPE *IAGetPrimitiveTopology )(
            ID3D10Device1 * This,
            _Out_ D3D10_PRIMITIVE_TOPOLOGY *pTopology);
        void ( STDMETHODCALLTYPE *VSGetShaderResources )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D10ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *VSGetSamplers )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D10SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *GetPredication )(
            ID3D10Device1 * This,
            _Out_opt_ ID3D10Predicate **ppPredicate,
            _Out_opt_ BOOL *pPredicateValue);
        void ( STDMETHODCALLTYPE *GSGetShaderResources )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D10ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *GSGetSamplers )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D10SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *OMGetRenderTargets )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_SIMULTANEOUS_RENDER_TARGET_COUNT ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D10RenderTargetView **ppRenderTargetViews,
            _Out_opt_ ID3D10DepthStencilView **ppDepthStencilView);
        void ( STDMETHODCALLTYPE *OMGetBlendState )(
            ID3D10Device1 * This,
            _Out_opt_ ID3D10BlendState **ppBlendState,
            _Out_opt_ FLOAT BlendFactor[ 4 ],
            _Out_opt_ UINT *pSampleMask);
        void ( STDMETHODCALLTYPE *OMGetDepthStencilState )(
            ID3D10Device1 * This,
            _Out_opt_ ID3D10DepthStencilState **ppDepthStencilState,
            _Out_opt_ UINT *pStencilRef);
        void ( STDMETHODCALLTYPE *SOGetTargets )(
            ID3D10Device1 * This,
            _In_range_( 0, D3D10_SO_BUFFER_SLOT_COUNT ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D10Buffer **ppSOTargets,
            _Out_writes_opt_(NumBuffers) UINT *pOffsets);
        void ( STDMETHODCALLTYPE *RSGetState )(
            ID3D10Device1 * This,
            _Out_ ID3D10RasterizerState **ppRasterizerState);
        void ( STDMETHODCALLTYPE *RSGetViewports )(
            ID3D10Device1 * This,
            _Inout_ UINT *NumViewports,
            _Out_writes_opt_(*NumViewports) D3D10_VIEWPORT *pViewports);
        void ( STDMETHODCALLTYPE *RSGetScissorRects )(
            ID3D10Device1 * This,
            _Inout_ UINT *NumRects,
            _Out_writes_opt_(*NumRects) D3D10_RECT *pRects);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceRemovedReason )(
            ID3D10Device1 * This);
        HRESULT ( STDMETHODCALLTYPE *SetExceptionMode )(
            ID3D10Device1 * This,
            UINT RaiseFlags);
        UINT ( STDMETHODCALLTYPE *GetExceptionMode )(
            ID3D10Device1 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D10Device1 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D10Device1 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D10Device1 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *ClearState )(
            ID3D10Device1 * This);
        void ( STDMETHODCALLTYPE *Flush )(
            ID3D10Device1 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateBuffer )(
            ID3D10Device1 * This,
            _In_ const D3D10_BUFFER_DESC *pDesc,
            _In_opt_ const D3D10_SUBRESOURCE_DATA *pInitialData,
            _Out_opt_ ID3D10Buffer **ppBuffer);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture1D )(
            ID3D10Device1 * This,
            _In_ const D3D10_TEXTURE1D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels * pDesc->ArraySize)) const D3D10_SUBRESOURCE_DATA *pInitialData,
            _Out_ ID3D10Texture1D **ppTexture1D);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture2D )(
            ID3D10Device1 * This,
            _In_ const D3D10_TEXTURE2D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels * pDesc->ArraySize)) const D3D10_SUBRESOURCE_DATA *pInitialData,
            _Out_ ID3D10Texture2D **ppTexture2D);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture3D )(
            ID3D10Device1 * This,
            _In_ const D3D10_TEXTURE3D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels)) const D3D10_SUBRESOURCE_DATA *pInitialData,
            _Out_ ID3D10Texture3D **ppTexture3D);
        HRESULT ( STDMETHODCALLTYPE *CreateShaderResourceView )(
            ID3D10Device1 * This,
            _In_ ID3D10Resource *pResource,
            _In_opt_ const D3D10_SHADER_RESOURCE_VIEW_DESC *pDesc,
            _Out_opt_ ID3D10ShaderResourceView **ppSRView);
        HRESULT ( STDMETHODCALLTYPE *CreateRenderTargetView )(
            ID3D10Device1 * This,
            _In_ ID3D10Resource *pResource,
            _In_opt_ const D3D10_RENDER_TARGET_VIEW_DESC *pDesc,
            _Out_opt_ ID3D10RenderTargetView **ppRTView);
        HRESULT ( STDMETHODCALLTYPE *CreateDepthStencilView )(
            ID3D10Device1 * This,
            _In_ ID3D10Resource *pResource,
            _In_opt_ const D3D10_DEPTH_STENCIL_VIEW_DESC *pDesc,
            _Out_opt_ ID3D10DepthStencilView **ppDepthStencilView);
        HRESULT ( STDMETHODCALLTYPE *CreateInputLayout )(
            ID3D10Device1 * This,
            _In_reads_(NumElements) const D3D10_INPUT_ELEMENT_DESC *pInputElementDescs,
            _In_range_( 0, D3D10_1_IA_VERTEX_INPUT_STRUCTURE_ELEMENT_COUNT ) UINT NumElements,
            _In_reads_(BytecodeLength) const void *pShaderBytecodeWithInputSignature,
            _In_ SIZE_T BytecodeLength,
            _Out_opt_ ID3D10InputLayout **ppInputLayout);
        HRESULT ( STDMETHODCALLTYPE *CreateVertexShader )(
            ID3D10Device1 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _Out_opt_ ID3D10VertexShader **ppVertexShader);
        HRESULT ( STDMETHODCALLTYPE *CreateGeometryShader )(
            ID3D10Device1 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _Out_opt_ ID3D10GeometryShader **ppGeometryShader);
        HRESULT ( STDMETHODCALLTYPE *CreateGeometryShaderWithStreamOutput )(
            ID3D10Device1 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_reads_opt_(NumEntries) const D3D10_SO_DECLARATION_ENTRY *pSODeclaration,
            _In_range_( 0, D3D10_SO_SINGLE_BUFFER_COMPONENT_LIMIT ) UINT NumEntries,
            _In_ UINT OutputStreamStride,
            _Out_opt_ ID3D10GeometryShader **ppGeometryShader);
        HRESULT ( STDMETHODCALLTYPE *CreatePixelShader )(
            ID3D10Device1 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _Out_opt_ ID3D10PixelShader **ppPixelShader);
        HRESULT ( STDMETHODCALLTYPE *CreateBlendState )(
            ID3D10Device1 * This,
            _In_ const D3D10_BLEND_DESC *pBlendStateDesc,
            _Out_opt_ ID3D10BlendState **ppBlendState);
        HRESULT ( STDMETHODCALLTYPE *CreateDepthStencilState )(
            ID3D10Device1 * This,
            _In_ const D3D10_DEPTH_STENCIL_DESC *pDepthStencilDesc,
            _Out_opt_ ID3D10DepthStencilState **ppDepthStencilState);
        HRESULT ( STDMETHODCALLTYPE *CreateRasterizerState )(
            ID3D10Device1 * This,
            _In_ const D3D10_RASTERIZER_DESC *pRasterizerDesc,
            _Out_opt_ ID3D10RasterizerState **ppRasterizerState);
        HRESULT ( STDMETHODCALLTYPE *CreateSamplerState )(
            ID3D10Device1 * This,
            _In_ const D3D10_SAMPLER_DESC *pSamplerDesc,
            _Out_opt_ ID3D10SamplerState **ppSamplerState);
        HRESULT ( STDMETHODCALLTYPE *CreateQuery )(
            ID3D10Device1 * This,
            _In_ const D3D10_QUERY_DESC *pQueryDesc,
            _Out_opt_ ID3D10Query **ppQuery);
        HRESULT ( STDMETHODCALLTYPE *CreatePredicate )(
            ID3D10Device1 * This,
            _In_ const D3D10_QUERY_DESC *pPredicateDesc,
            _Out_opt_ ID3D10Predicate **ppPredicate);
        HRESULT ( STDMETHODCALLTYPE *CreateCounter )(
            ID3D10Device1 * This,
            _In_ const D3D10_COUNTER_DESC *pCounterDesc,
            _Out_opt_ ID3D10Counter **ppCounter);
        HRESULT ( STDMETHODCALLTYPE *CheckFormatSupport )(
            ID3D10Device1 * This,
            _In_ DXGI_FORMAT Format,
            _Out_ UINT *pFormatSupport);
        HRESULT ( STDMETHODCALLTYPE *CheckMultisampleQualityLevels )(
            ID3D10Device1 * This,
            _In_ DXGI_FORMAT Format,
            _In_ UINT SampleCount,
            _Out_ UINT *pNumQualityLevels);
        void ( STDMETHODCALLTYPE *CheckCounterInfo )(
            ID3D10Device1 * This,
            _Out_ D3D10_COUNTER_INFO *pCounterInfo);
        HRESULT ( STDMETHODCALLTYPE *CheckCounter )(
            ID3D10Device1 * This,
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
            ID3D10Device1 * This);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedResource )(
            ID3D10Device1 * This,
            _In_ HANDLE hResource,
            _In_ REFIID ReturnedInterface,
            _Out_opt_ void **ppResource);
        void ( STDMETHODCALLTYPE *SetTextFilterSize )(
            ID3D10Device1 * This,
            _In_ UINT Width,
            _In_ UINT Height);
        void ( STDMETHODCALLTYPE *GetTextFilterSize )(
            ID3D10Device1 * This,
            _Out_opt_ UINT *pWidth,
            _Out_opt_ UINT *pHeight);
        HRESULT ( STDMETHODCALLTYPE *CreateShaderResourceView1 )(
            ID3D10Device1 * This,
            _In_ ID3D10Resource *pResource,
            _In_opt_ const D3D10_SHADER_RESOURCE_VIEW_DESC1 *pDesc,
            _Out_opt_ ID3D10ShaderResourceView1 **ppSRView);
        HRESULT ( STDMETHODCALLTYPE *CreateBlendState1 )(
            ID3D10Device1 * This,
            _In_ const D3D10_BLEND_DESC1 *pBlendStateDesc,
            _Out_opt_ ID3D10BlendState1 **ppBlendState);
        D3D10_FEATURE_LEVEL1 ( STDMETHODCALLTYPE *GetFeatureLevel )(
            ID3D10Device1 * This);
        END_INTERFACE
    } ID3D10Device1Vtbl;
    interface ID3D10Device1
    {
        CONST_VTBL struct ID3D10Device1Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> CreateShaderResourceView1(This,pResource,pDesc,ppSRView) )
    ( (This)->lpVtbl -> CreateBlendState1(This,pBlendStateDesc,ppBlendState) )
    ( (This)->lpVtbl -> GetFeatureLevel(This) )
#include "d3d10_1shader.h"
typedef HRESULT (WINAPI* PFN_D3D10_CREATE_DEVICE1)(IDXGIAdapter *,
    D3D10_DRIVER_TYPE, HMODULE, UINT, D3D10_FEATURE_LEVEL1, UINT, ID3D10Device1**);
HRESULT WINAPI D3D10CreateDevice1(
    _In_opt_ IDXGIAdapter *pAdapter,
    D3D10_DRIVER_TYPE DriverType,
    HMODULE Software,
    UINT Flags,
    D3D10_FEATURE_LEVEL1 HardwareLevel,
    UINT SDKVersion,
    _Out_opt_ ID3D10Device1 **ppDevice);
typedef HRESULT (WINAPI* PFN_D3D10_CREATE_DEVICE_AND_SWAP_CHAIN1)(IDXGIAdapter *,
    D3D10_DRIVER_TYPE, HMODULE, UINT, D3D10_FEATURE_LEVEL1, UINT, DXGI_SWAP_CHAIN_DESC *, IDXGISwapChain **, ID3D10Device1 **);
HRESULT WINAPI D3D10CreateDeviceAndSwapChain1(
    _In_opt_ IDXGIAdapter *pAdapter,
    D3D10_DRIVER_TYPE DriverType,
    HMODULE Software,
    UINT Flags,
    D3D10_FEATURE_LEVEL1 HardwareLevel,
    UINT SDKVersion,
    _In_opt_ DXGI_SWAP_CHAIN_DESC *pSwapChainDesc,
    _Out_opt_ IDXGISwapChain **ppSwapChain,
    _Out_opt_ ID3D10Device1 **ppDevice);
#endif
#pragma endregion
DEFINE_GUID(IID_ID3D10BlendState1,0xEDAD8D99,0x8A35,0x4d6d,0x85,0x66,0x2E,0xA2,0x76,0xCD,0xE1,0x61);
DEFINE_GUID(IID_ID3D10ShaderResourceView1,0x9B7E4C87,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
DEFINE_GUID(IID_ID3D10Device1,0x9B7E4C8F,0x342C,0x4106,0xA1,0x9F,0x4F,0x27,0x04,0xF6,0x89,0xF0);
extern RPC_IF_HANDLE __MIDL_itf_d3d10_1_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_1_0000_0003_v0_0_s_ifspec;
}
