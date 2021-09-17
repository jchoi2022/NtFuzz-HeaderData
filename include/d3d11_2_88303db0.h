#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ID3D11DeviceContext2 ID3D11DeviceContext2;
typedef interface ID3D11Device2 ID3D11Device2;
#include "oaidl.h"
#include "ocidl.h"
#include "dxgi1_3.h"
#include "d3dcommon.h"
#include "d3d11_1.h"
extern "C"{
}
#include "d3d11_1.h"
extern "C"{
typedef struct D3D11_TILED_RESOURCE_COORDINATE
    {
    UINT X;
    UINT Y;
    UINT Z;
    UINT Subresource;
    } D3D11_TILED_RESOURCE_COORDINATE;
typedef struct D3D11_TILE_REGION_SIZE
    {
    UINT NumTiles;
    BOOL bUseBox;
    UINT Width;
    UINT16 Height;
    UINT16 Depth;
    } D3D11_TILE_REGION_SIZE;
typedef
enum D3D11_TILE_MAPPING_FLAG
    {
        D3D11_TILE_MAPPING_NO_OVERWRITE = 0x1
    } D3D11_TILE_MAPPING_FLAG;
typedef
enum D3D11_TILE_RANGE_FLAG
    {
        D3D11_TILE_RANGE_NULL = 0x1,
        D3D11_TILE_RANGE_SKIP = 0x2,
        D3D11_TILE_RANGE_REUSE_SINGLE_TILE = 0x4
    } D3D11_TILE_RANGE_FLAG;
typedef struct D3D11_SUBRESOURCE_TILING
    {
    UINT WidthInTiles;
    UINT16 HeightInTiles;
    UINT16 DepthInTiles;
    UINT StartTileIndexInOverallResource;
    } D3D11_SUBRESOURCE_TILING;
typedef struct D3D11_TILE_SHAPE
    {
    UINT WidthInTexels;
    UINT HeightInTexels;
    UINT DepthInTexels;
    } D3D11_TILE_SHAPE;
typedef struct D3D11_PACKED_MIP_DESC
    {
    UINT8 NumStandardMips;
    UINT8 NumPackedMips;
    UINT NumTilesForPackedMips;
    UINT StartTileIndexInOverallResource;
    } D3D11_PACKED_MIP_DESC;
typedef
enum D3D11_CHECK_MULTISAMPLE_QUALITY_LEVELS_FLAG
    {
        D3D11_CHECK_MULTISAMPLE_QUALITY_LEVELS_TILED_RESOURCE = 0x1
    } D3D11_CHECK_MULTISAMPLE_QUALITY_LEVELS_FLAG;
typedef
enum D3D11_TILE_COPY_FLAG
    {
        D3D11_TILE_COPY_NO_OVERWRITE = 0x1,
        D3D11_TILE_COPY_LINEAR_BUFFER_TO_SWIZZLED_TILED_RESOURCE = 0x2,
        D3D11_TILE_COPY_SWIZZLED_TILED_RESOURCE_TO_LINEAR_BUFFER = 0x4
    } D3D11_TILE_COPY_FLAG;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_2_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_2_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11DeviceContext2;
    typedef struct ID3D11DeviceContext2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11DeviceContext2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11DeviceContext2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11DeviceContext2 * This);
        void ( STDMETHODCALLTYPE *GetDevice )(
            ID3D11DeviceContext2 * This,
            _Outptr_ ID3D11Device **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11DeviceContext2 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_( *pDataSize ) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11DeviceContext2 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_( DataSize ) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11DeviceContext2 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        void ( STDMETHODCALLTYPE *VSSetConstantBuffers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *PSSetShaderResources )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *PSSetShader )(
            ID3D11DeviceContext2 * This,
            _In_opt_ ID3D11PixelShader *pPixelShader,
            _In_reads_opt_(NumClassInstances) ID3D11ClassInstance *const *ppClassInstances,
            UINT NumClassInstances);
        void ( STDMETHODCALLTYPE *PSSetSamplers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D11SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *VSSetShader )(
            ID3D11DeviceContext2 * This,
            _In_opt_ ID3D11VertexShader *pVertexShader,
            _In_reads_opt_(NumClassInstances) ID3D11ClassInstance *const *ppClassInstances,
            UINT NumClassInstances);
        void ( STDMETHODCALLTYPE *DrawIndexed )(
            ID3D11DeviceContext2 * This,
            _In_ UINT IndexCount,
            _In_ UINT StartIndexLocation,
            _In_ INT BaseVertexLocation);
        void ( STDMETHODCALLTYPE *Draw )(
            ID3D11DeviceContext2 * This,
            _In_ UINT VertexCount,
            _In_ UINT StartVertexLocation);
        HRESULT ( STDMETHODCALLTYPE *Map )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Resource *pResource,
            _In_ UINT Subresource,
            _In_ D3D11_MAP MapType,
            _In_ UINT MapFlags,
            _Out_opt_ D3D11_MAPPED_SUBRESOURCE *pMappedResource);
        void ( STDMETHODCALLTYPE *Unmap )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Resource *pResource,
            _In_ UINT Subresource);
        void ( STDMETHODCALLTYPE *PSSetConstantBuffers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *IASetInputLayout )(
            ID3D11DeviceContext2 * This,
            _In_opt_ ID3D11InputLayout *pInputLayout);
        void ( STDMETHODCALLTYPE *IASetVertexBuffers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppVertexBuffers,
            _In_reads_opt_(NumBuffers) const UINT *pStrides,
            _In_reads_opt_(NumBuffers) const UINT *pOffsets);
        void ( STDMETHODCALLTYPE *IASetIndexBuffer )(
            ID3D11DeviceContext2 * This,
            _In_opt_ ID3D11Buffer *pIndexBuffer,
            _In_ DXGI_FORMAT Format,
            _In_ UINT Offset);
        void ( STDMETHODCALLTYPE *DrawIndexedInstanced )(
            ID3D11DeviceContext2 * This,
            _In_ UINT IndexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartIndexLocation,
            _In_ INT BaseVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *DrawInstanced )(
            ID3D11DeviceContext2 * This,
            _In_ UINT VertexCountPerInstance,
            _In_ UINT InstanceCount,
            _In_ UINT StartVertexLocation,
            _In_ UINT StartInstanceLocation);
        void ( STDMETHODCALLTYPE *GSSetConstantBuffers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *GSSetShader )(
            ID3D11DeviceContext2 * This,
            _In_opt_ ID3D11GeometryShader *pShader,
            _In_reads_opt_(NumClassInstances) ID3D11ClassInstance *const *ppClassInstances,
            UINT NumClassInstances);
        void ( STDMETHODCALLTYPE *IASetPrimitiveTopology )(
            ID3D11DeviceContext2 * This,
            _In_ D3D11_PRIMITIVE_TOPOLOGY Topology);
        void ( STDMETHODCALLTYPE *VSSetShaderResources )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *VSSetSamplers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D11SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *Begin )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Asynchronous *pAsync);
        void ( STDMETHODCALLTYPE *End )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Asynchronous *pAsync);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Asynchronous *pAsync,
            _Out_writes_bytes_opt_( DataSize ) void *pData,
            _In_ UINT DataSize,
            _In_ UINT GetDataFlags);
        void ( STDMETHODCALLTYPE *SetPredication )(
            ID3D11DeviceContext2 * This,
            _In_opt_ ID3D11Predicate *pPredicate,
            _In_ BOOL PredicateValue);
        void ( STDMETHODCALLTYPE *GSSetShaderResources )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *GSSetSamplers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D11SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *OMSetRenderTargets )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11RenderTargetView *const *ppRenderTargetViews,
            _In_opt_ ID3D11DepthStencilView *pDepthStencilView);
        void ( STDMETHODCALLTYPE *OMSetRenderTargetsAndUnorderedAccessViews )(
            ID3D11DeviceContext2 * This,
            _In_ UINT NumRTVs,
            _In_reads_opt_(NumRTVs) ID3D11RenderTargetView *const *ppRenderTargetViews,
            _In_opt_ ID3D11DepthStencilView *pDepthStencilView,
            _In_range_( 0, D3D11_1_UAV_SLOT_COUNT - 1 ) UINT UAVStartSlot,
            _In_ UINT NumUAVs,
            _In_reads_opt_(NumUAVs) ID3D11UnorderedAccessView *const *ppUnorderedAccessViews,
            _In_reads_opt_(NumUAVs) const UINT *pUAVInitialCounts);
        void ( STDMETHODCALLTYPE *OMSetBlendState )(
            ID3D11DeviceContext2 * This,
            _In_opt_ ID3D11BlendState *pBlendState,
            _In_opt_ const FLOAT BlendFactor[ 4 ],
            _In_ UINT SampleMask);
        void ( STDMETHODCALLTYPE *OMSetDepthStencilState )(
            ID3D11DeviceContext2 * This,
            _In_opt_ ID3D11DepthStencilState *pDepthStencilState,
            _In_ UINT StencilRef);
        void ( STDMETHODCALLTYPE *SOSetTargets )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_SO_BUFFER_SLOT_COUNT) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppSOTargets,
            _In_reads_opt_(NumBuffers) const UINT *pOffsets);
        void ( STDMETHODCALLTYPE *DrawAuto )(
            ID3D11DeviceContext2 * This);
        void ( STDMETHODCALLTYPE *DrawIndexedInstancedIndirect )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Buffer *pBufferForArgs,
            _In_ UINT AlignedByteOffsetForArgs);
        void ( STDMETHODCALLTYPE *DrawInstancedIndirect )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Buffer *pBufferForArgs,
            _In_ UINT AlignedByteOffsetForArgs);
        void ( STDMETHODCALLTYPE *Dispatch )(
            ID3D11DeviceContext2 * This,
            _In_ UINT ThreadGroupCountX,
            _In_ UINT ThreadGroupCountY,
            _In_ UINT ThreadGroupCountZ);
        void ( STDMETHODCALLTYPE *DispatchIndirect )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Buffer *pBufferForArgs,
            _In_ UINT AlignedByteOffsetForArgs);
        void ( STDMETHODCALLTYPE *RSSetState )(
            ID3D11DeviceContext2 * This,
            _In_opt_ ID3D11RasterizerState *pRasterizerState);
        void ( STDMETHODCALLTYPE *RSSetViewports )(
            ID3D11DeviceContext2 * This,
            _In_range_(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumViewports,
            _In_reads_opt_(NumViewports) const D3D11_VIEWPORT *pViewports);
        void ( STDMETHODCALLTYPE *RSSetScissorRects )(
            ID3D11DeviceContext2 * This,
            _In_range_(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumRects,
            _In_reads_opt_(NumRects) const D3D11_RECT *pRects);
        void ( STDMETHODCALLTYPE *CopySubresourceRegion )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ UINT DstX,
            _In_ UINT DstY,
            _In_ UINT DstZ,
            _In_ ID3D11Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_opt_ const D3D11_BOX *pSrcBox);
        void ( STDMETHODCALLTYPE *CopyResource )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Resource *pDstResource,
            _In_ ID3D11Resource *pSrcResource);
        void ( STDMETHODCALLTYPE *UpdateSubresource )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_opt_ const D3D11_BOX *pDstBox,
            _In_ const void *pSrcData,
            _In_ UINT SrcRowPitch,
            _In_ UINT SrcDepthPitch);
        void ( STDMETHODCALLTYPE *CopyStructureCount )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Buffer *pDstBuffer,
            _In_ UINT DstAlignedByteOffset,
            _In_ ID3D11UnorderedAccessView *pSrcView);
        void ( STDMETHODCALLTYPE *ClearRenderTargetView )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11RenderTargetView *pRenderTargetView,
            _In_ const FLOAT ColorRGBA[ 4 ]);
        void ( STDMETHODCALLTYPE *ClearUnorderedAccessViewUint )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11UnorderedAccessView *pUnorderedAccessView,
            _In_ const UINT Values[ 4 ]);
        void ( STDMETHODCALLTYPE *ClearUnorderedAccessViewFloat )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11UnorderedAccessView *pUnorderedAccessView,
            _In_ const FLOAT Values[ 4 ]);
        void ( STDMETHODCALLTYPE *ClearDepthStencilView )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11DepthStencilView *pDepthStencilView,
            _In_ UINT ClearFlags,
            _In_ FLOAT Depth,
            _In_ UINT8 Stencil);
        void ( STDMETHODCALLTYPE *GenerateMips )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11ShaderResourceView *pShaderResourceView);
        void ( STDMETHODCALLTYPE *SetResourceMinLOD )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Resource *pResource,
            FLOAT MinLOD);
        FLOAT ( STDMETHODCALLTYPE *GetResourceMinLOD )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Resource *pResource);
        void ( STDMETHODCALLTYPE *ResolveSubresource )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_ ID3D11Resource *pSrcResource,
            _In_ UINT SrcSubresource,
            _In_ DXGI_FORMAT Format);
        void ( STDMETHODCALLTYPE *ExecuteCommandList )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11CommandList *pCommandList,
            BOOL RestoreContextState);
        void ( STDMETHODCALLTYPE *HSSetShaderResources )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *HSSetShader )(
            ID3D11DeviceContext2 * This,
            _In_opt_ ID3D11HullShader *pHullShader,
            _In_reads_opt_(NumClassInstances) ID3D11ClassInstance *const *ppClassInstances,
            UINT NumClassInstances);
        void ( STDMETHODCALLTYPE *HSSetSamplers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D11SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *HSSetConstantBuffers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *DSSetShaderResources )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *DSSetShader )(
            ID3D11DeviceContext2 * This,
            _In_opt_ ID3D11DomainShader *pDomainShader,
            _In_reads_opt_(NumClassInstances) ID3D11ClassInstance *const *ppClassInstances,
            UINT NumClassInstances);
        void ( STDMETHODCALLTYPE *DSSetSamplers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D11SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *DSSetConstantBuffers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *CSSetShaderResources )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _In_reads_opt_(NumViews) ID3D11ShaderResourceView *const *ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *CSSetUnorderedAccessViews )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_1_UAV_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_1_UAV_SLOT_COUNT - StartSlot ) UINT NumUAVs,
            _In_reads_opt_(NumUAVs) ID3D11UnorderedAccessView *const *ppUnorderedAccessViews,
            _In_reads_opt_(NumUAVs) const UINT *pUAVInitialCounts);
        void ( STDMETHODCALLTYPE *CSSetShader )(
            ID3D11DeviceContext2 * This,
            _In_opt_ ID3D11ComputeShader *pComputeShader,
            _In_reads_opt_(NumClassInstances) ID3D11ClassInstance *const *ppClassInstances,
            UINT NumClassInstances);
        void ( STDMETHODCALLTYPE *CSSetSamplers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _In_reads_opt_(NumSamplers) ID3D11SamplerState *const *ppSamplers);
        void ( STDMETHODCALLTYPE *CSSetConstantBuffers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers);
        void ( STDMETHODCALLTYPE *VSGetConstantBuffers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *PSGetShaderResources )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *PSGetShader )(
            ID3D11DeviceContext2 * This,
            _Outptr_result_maybenull_ ID3D11PixelShader **ppPixelShader,
            _Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance **ppClassInstances,
            _Inout_opt_ UINT *pNumClassInstances);
        void ( STDMETHODCALLTYPE *PSGetSamplers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D11SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *VSGetShader )(
            ID3D11DeviceContext2 * This,
            _Outptr_result_maybenull_ ID3D11VertexShader **ppVertexShader,
            _Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance **ppClassInstances,
            _Inout_opt_ UINT *pNumClassInstances);
        void ( STDMETHODCALLTYPE *PSGetConstantBuffers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *IAGetInputLayout )(
            ID3D11DeviceContext2 * This,
            _Outptr_result_maybenull_ ID3D11InputLayout **ppInputLayout);
        void ( STDMETHODCALLTYPE *IAGetVertexBuffers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppVertexBuffers,
            _Out_writes_opt_(NumBuffers) UINT *pStrides,
            _Out_writes_opt_(NumBuffers) UINT *pOffsets);
        void ( STDMETHODCALLTYPE *IAGetIndexBuffer )(
            ID3D11DeviceContext2 * This,
            _Outptr_opt_result_maybenull_ ID3D11Buffer **pIndexBuffer,
            _Out_opt_ DXGI_FORMAT *Format,
            _Out_opt_ UINT *Offset);
        void ( STDMETHODCALLTYPE *GSGetConstantBuffers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *GSGetShader )(
            ID3D11DeviceContext2 * This,
            _Outptr_result_maybenull_ ID3D11GeometryShader **ppGeometryShader,
            _Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance **ppClassInstances,
            _Inout_opt_ UINT *pNumClassInstances);
        void ( STDMETHODCALLTYPE *IAGetPrimitiveTopology )(
            ID3D11DeviceContext2 * This,
            _Out_ D3D11_PRIMITIVE_TOPOLOGY *pTopology);
        void ( STDMETHODCALLTYPE *VSGetShaderResources )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *VSGetSamplers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D11SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *GetPredication )(
            ID3D11DeviceContext2 * This,
            _Outptr_opt_result_maybenull_ ID3D11Predicate **ppPredicate,
            _Out_opt_ BOOL *pPredicateValue);
        void ( STDMETHODCALLTYPE *GSGetShaderResources )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *GSGetSamplers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D11SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *OMGetRenderTargets )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11RenderTargetView **ppRenderTargetViews,
            _Outptr_opt_result_maybenull_ ID3D11DepthStencilView **ppDepthStencilView);
        void ( STDMETHODCALLTYPE *OMGetRenderTargetsAndUnorderedAccessViews )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT ) UINT NumRTVs,
            _Out_writes_opt_(NumRTVs) ID3D11RenderTargetView **ppRenderTargetViews,
            _Outptr_opt_result_maybenull_ ID3D11DepthStencilView **ppDepthStencilView,
            _In_range_( 0, D3D11_PS_CS_UAV_REGISTER_COUNT - 1 ) UINT UAVStartSlot,
            _In_range_( 0, D3D11_PS_CS_UAV_REGISTER_COUNT - UAVStartSlot ) UINT NumUAVs,
            _Out_writes_opt_(NumUAVs) ID3D11UnorderedAccessView **ppUnorderedAccessViews);
        void ( STDMETHODCALLTYPE *OMGetBlendState )(
            ID3D11DeviceContext2 * This,
            _Outptr_opt_result_maybenull_ ID3D11BlendState **ppBlendState,
            _Out_opt_ FLOAT BlendFactor[ 4 ],
            _Out_opt_ UINT *pSampleMask);
        void ( STDMETHODCALLTYPE *OMGetDepthStencilState )(
            ID3D11DeviceContext2 * This,
            _Outptr_opt_result_maybenull_ ID3D11DepthStencilState **ppDepthStencilState,
            _Out_opt_ UINT *pStencilRef);
        void ( STDMETHODCALLTYPE *SOGetTargets )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_SO_BUFFER_SLOT_COUNT ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppSOTargets);
        void ( STDMETHODCALLTYPE *RSGetState )(
            ID3D11DeviceContext2 * This,
            _Outptr_result_maybenull_ ID3D11RasterizerState **ppRasterizerState);
        void ( STDMETHODCALLTYPE *RSGetViewports )(
            ID3D11DeviceContext2 * This,
            _Inout_ UINT *pNumViewports,
            _Out_writes_opt_(*pNumViewports) D3D11_VIEWPORT *pViewports);
        void ( STDMETHODCALLTYPE *RSGetScissorRects )(
            ID3D11DeviceContext2 * This,
            _Inout_ UINT *pNumRects,
            _Out_writes_opt_(*pNumRects) D3D11_RECT *pRects);
        void ( STDMETHODCALLTYPE *HSGetShaderResources )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *HSGetShader )(
            ID3D11DeviceContext2 * This,
            _Outptr_result_maybenull_ ID3D11HullShader **ppHullShader,
            _Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance **ppClassInstances,
            _Inout_opt_ UINT *pNumClassInstances);
        void ( STDMETHODCALLTYPE *HSGetSamplers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D11SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *HSGetConstantBuffers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *DSGetShaderResources )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *DSGetShader )(
            ID3D11DeviceContext2 * This,
            _Outptr_result_maybenull_ ID3D11DomainShader **ppDomainShader,
            _Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance **ppClassInstances,
            _Inout_opt_ UINT *pNumClassInstances);
        void ( STDMETHODCALLTYPE *DSGetSamplers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D11SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *DSGetConstantBuffers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *CSGetShaderResources )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot ) UINT NumViews,
            _Out_writes_opt_(NumViews) ID3D11ShaderResourceView **ppShaderResourceViews);
        void ( STDMETHODCALLTYPE *CSGetUnorderedAccessViews )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_1_UAV_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_1_UAV_SLOT_COUNT - StartSlot ) UINT NumUAVs,
            _Out_writes_opt_(NumUAVs) ID3D11UnorderedAccessView **ppUnorderedAccessViews);
        void ( STDMETHODCALLTYPE *CSGetShader )(
            ID3D11DeviceContext2 * This,
            _Outptr_result_maybenull_ ID3D11ComputeShader **ppComputeShader,
            _Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance **ppClassInstances,
            _Inout_opt_ UINT *pNumClassInstances);
        void ( STDMETHODCALLTYPE *CSGetSamplers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot ) UINT NumSamplers,
            _Out_writes_opt_(NumSamplers) ID3D11SamplerState **ppSamplers);
        void ( STDMETHODCALLTYPE *CSGetConstantBuffers )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers);
        void ( STDMETHODCALLTYPE *ClearState )(
            ID3D11DeviceContext2 * This);
        void ( STDMETHODCALLTYPE *Flush )(
            ID3D11DeviceContext2 * This);
        D3D11_DEVICE_CONTEXT_TYPE ( STDMETHODCALLTYPE *GetType )(
            ID3D11DeviceContext2 * This);
        UINT ( STDMETHODCALLTYPE *GetContextFlags )(
            ID3D11DeviceContext2 * This);
        HRESULT ( STDMETHODCALLTYPE *FinishCommandList )(
            ID3D11DeviceContext2 * This,
            BOOL RestoreDeferredContextState,
            _COM_Outptr_opt_ ID3D11CommandList **ppCommandList);
        void ( STDMETHODCALLTYPE *CopySubresourceRegion1 )(
            ID3D11DeviceContext2 * This,
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
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Resource *pDstResource,
            _In_ UINT DstSubresource,
            _In_opt_ const D3D11_BOX *pDstBox,
            _In_ const void *pSrcData,
            _In_ UINT SrcRowPitch,
            _In_ UINT SrcDepthPitch,
            _In_ UINT CopyFlags);
        void ( STDMETHODCALLTYPE *DiscardResource )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Resource *pResource);
        void ( STDMETHODCALLTYPE *DiscardView )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11View *pResourceView);
        void ( STDMETHODCALLTYPE *VSSetConstantBuffers1 )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers,
            _In_reads_opt_(NumBuffers) const UINT *pFirstConstant,
            _In_reads_opt_(NumBuffers) const UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *HSSetConstantBuffers1 )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers,
            _In_reads_opt_(NumBuffers) const UINT *pFirstConstant,
            _In_reads_opt_(NumBuffers) const UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *DSSetConstantBuffers1 )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers,
            _In_reads_opt_(NumBuffers) const UINT *pFirstConstant,
            _In_reads_opt_(NumBuffers) const UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *GSSetConstantBuffers1 )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers,
            _In_reads_opt_(NumBuffers) const UINT *pFirstConstant,
            _In_reads_opt_(NumBuffers) const UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *PSSetConstantBuffers1 )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers,
            _In_reads_opt_(NumBuffers) const UINT *pFirstConstant,
            _In_reads_opt_(NumBuffers) const UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *CSSetConstantBuffers1 )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _In_reads_opt_(NumBuffers) ID3D11Buffer *const *ppConstantBuffers,
            _In_reads_opt_(NumBuffers) const UINT *pFirstConstant,
            _In_reads_opt_(NumBuffers) const UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *VSGetConstantBuffers1 )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers,
            _Out_writes_opt_(NumBuffers) UINT *pFirstConstant,
            _Out_writes_opt_(NumBuffers) UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *HSGetConstantBuffers1 )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers,
            _Out_writes_opt_(NumBuffers) UINT *pFirstConstant,
            _Out_writes_opt_(NumBuffers) UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *DSGetConstantBuffers1 )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers,
            _Out_writes_opt_(NumBuffers) UINT *pFirstConstant,
            _Out_writes_opt_(NumBuffers) UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *GSGetConstantBuffers1 )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers,
            _Out_writes_opt_(NumBuffers) UINT *pFirstConstant,
            _Out_writes_opt_(NumBuffers) UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *PSGetConstantBuffers1 )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers,
            _Out_writes_opt_(NumBuffers) UINT *pFirstConstant,
            _Out_writes_opt_(NumBuffers) UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *CSGetConstantBuffers1 )(
            ID3D11DeviceContext2 * This,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1 ) UINT StartSlot,
            _In_range_( 0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot ) UINT NumBuffers,
            _Out_writes_opt_(NumBuffers) ID3D11Buffer **ppConstantBuffers,
            _Out_writes_opt_(NumBuffers) UINT *pFirstConstant,
            _Out_writes_opt_(NumBuffers) UINT *pNumConstants);
        void ( STDMETHODCALLTYPE *SwapDeviceContextState )(
            ID3D11DeviceContext2 * This,
            _In_ ID3DDeviceContextState *pState,
            _Outptr_opt_ ID3DDeviceContextState **ppPreviousState);
        void ( STDMETHODCALLTYPE *ClearView )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11View *pView,
            _In_ const FLOAT Color[ 4 ],
            _In_reads_opt_(NumRects) const D3D11_RECT *pRect,
            UINT NumRects);
        void ( STDMETHODCALLTYPE *DiscardView1 )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11View *pResourceView,
            _In_reads_opt_(NumRects) const D3D11_RECT *pRects,
            UINT NumRects);
        HRESULT ( STDMETHODCALLTYPE *UpdateTileMappings )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Resource *pTiledResource,
            _In_ UINT NumTiledResourceRegions,
            _In_reads_opt_(NumTiledResourceRegions) const D3D11_TILED_RESOURCE_COORDINATE *pTiledResourceRegionStartCoordinates,
            _In_reads_opt_(NumTiledResourceRegions) const D3D11_TILE_REGION_SIZE *pTiledResourceRegionSizes,
            _In_opt_ ID3D11Buffer *pTilePool,
            _In_ UINT NumRanges,
            _In_reads_opt_(NumRanges) const UINT *pRangeFlags,
            _In_reads_opt_(NumRanges) const UINT *pTilePoolStartOffsets,
            _In_reads_opt_(NumRanges) const UINT *pRangeTileCounts,
            _In_ UINT Flags);
        HRESULT ( STDMETHODCALLTYPE *CopyTileMappings )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Resource *pDestTiledResource,
            _In_ const D3D11_TILED_RESOURCE_COORDINATE *pDestRegionStartCoordinate,
            _In_ ID3D11Resource *pSourceTiledResource,
            _In_ const D3D11_TILED_RESOURCE_COORDINATE *pSourceRegionStartCoordinate,
            _In_ const D3D11_TILE_REGION_SIZE *pTileRegionSize,
            _In_ UINT Flags);
        void ( STDMETHODCALLTYPE *CopyTiles )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Resource *pTiledResource,
            _In_ const D3D11_TILED_RESOURCE_COORDINATE *pTileRegionStartCoordinate,
            _In_ const D3D11_TILE_REGION_SIZE *pTileRegionSize,
            _In_ ID3D11Buffer *pBuffer,
            _In_ UINT64 BufferStartOffsetInBytes,
            _In_ UINT Flags);
        void ( STDMETHODCALLTYPE *UpdateTiles )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Resource *pDestTiledResource,
            _In_ const D3D11_TILED_RESOURCE_COORDINATE *pDestTileRegionStartCoordinate,
            _In_ const D3D11_TILE_REGION_SIZE *pDestTileRegionSize,
            _In_ const void *pSourceTileData,
            _In_ UINT Flags);
        HRESULT ( STDMETHODCALLTYPE *ResizeTilePool )(
            ID3D11DeviceContext2 * This,
            _In_ ID3D11Buffer *pTilePool,
            _In_ UINT64 NewSizeInBytes);
        void ( STDMETHODCALLTYPE *TiledResourceBarrier )(
            ID3D11DeviceContext2 * This,
            _In_opt_ ID3D11DeviceChild *pTiledResourceOrViewAccessBeforeBarrier,
            _In_opt_ ID3D11DeviceChild *pTiledResourceOrViewAccessAfterBarrier);
        BOOL ( STDMETHODCALLTYPE *IsAnnotationEnabled )(
            ID3D11DeviceContext2 * This);
        void ( STDMETHODCALLTYPE *SetMarkerInt )(
            ID3D11DeviceContext2 * This,
            _In_ LPCWSTR pLabel,
            INT Data);
        void ( STDMETHODCALLTYPE *BeginEventInt )(
            ID3D11DeviceContext2 * This,
            _In_ LPCWSTR pLabel,
            INT Data);
        void ( STDMETHODCALLTYPE *EndEvent )(
            ID3D11DeviceContext2 * This);
        END_INTERFACE
    } ID3D11DeviceContext2Vtbl;
    interface ID3D11DeviceContext2
    {
        CONST_VTBL struct ID3D11DeviceContext2Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> UpdateTileMappings(This,pTiledResource,NumTiledResourceRegions,pTiledResourceRegionStartCoordinates,pTiledResourceRegionSizes,pTilePool,NumRanges,pRangeFlags,pTilePoolStartOffsets,pRangeTileCounts,Flags) )
    ( (This)->lpVtbl -> CopyTileMappings(This,pDestTiledResource,pDestRegionStartCoordinate,pSourceTiledResource,pSourceRegionStartCoordinate,pTileRegionSize,Flags) )
    ( (This)->lpVtbl -> CopyTiles(This,pTiledResource,pTileRegionStartCoordinate,pTileRegionSize,pBuffer,BufferStartOffsetInBytes,Flags) )
    ( (This)->lpVtbl -> UpdateTiles(This,pDestTiledResource,pDestTileRegionStartCoordinate,pDestTileRegionSize,pSourceTileData,Flags) )
    ( (This)->lpVtbl -> ResizeTilePool(This,pTilePool,NewSizeInBytes) )
    ( (This)->lpVtbl -> TiledResourceBarrier(This,pTiledResourceOrViewAccessBeforeBarrier,pTiledResourceOrViewAccessAfterBarrier) )
    ( (This)->lpVtbl -> IsAnnotationEnabled(This) )
    ( (This)->lpVtbl -> SetMarkerInt(This,pLabel,Data) )
    ( (This)->lpVtbl -> BeginEventInt(This,pLabel,Data) )
    ( (This)->lpVtbl -> EndEvent(This) )
EXTERN_C const IID IID_ID3D11Device2;
    typedef struct ID3D11Device2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11Device2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11Device2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11Device2 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateBuffer )(
            ID3D11Device2 * This,
            _In_ const D3D11_BUFFER_DESC *pDesc,
            _In_opt_ const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Buffer **ppBuffer);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture1D )(
            ID3D11Device2 * This,
            _In_ const D3D11_TEXTURE1D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels * pDesc->ArraySize)) const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Texture1D **ppTexture1D);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture2D )(
            ID3D11Device2 * This,
            _In_ const D3D11_TEXTURE2D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels * pDesc->ArraySize)) const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Texture2D **ppTexture2D);
        HRESULT ( STDMETHODCALLTYPE *CreateTexture3D )(
            ID3D11Device2 * This,
            _In_ const D3D11_TEXTURE3D_DESC *pDesc,
            _In_reads_opt_(_Inexpressible_(pDesc->MipLevels)) const D3D11_SUBRESOURCE_DATA *pInitialData,
            _COM_Outptr_opt_ ID3D11Texture3D **ppTexture3D);
        HRESULT ( STDMETHODCALLTYPE *CreateShaderResourceView )(
            ID3D11Device2 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_SHADER_RESOURCE_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11ShaderResourceView **ppSRView);
        HRESULT ( STDMETHODCALLTYPE *CreateUnorderedAccessView )(
            ID3D11Device2 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_UNORDERED_ACCESS_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11UnorderedAccessView **ppUAView);
        HRESULT ( STDMETHODCALLTYPE *CreateRenderTargetView )(
            ID3D11Device2 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_RENDER_TARGET_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11RenderTargetView **ppRTView);
        HRESULT ( STDMETHODCALLTYPE *CreateDepthStencilView )(
            ID3D11Device2 * This,
            _In_ ID3D11Resource *pResource,
            _In_opt_ const D3D11_DEPTH_STENCIL_VIEW_DESC *pDesc,
            _COM_Outptr_opt_ ID3D11DepthStencilView **ppDepthStencilView);
        HRESULT ( STDMETHODCALLTYPE *CreateInputLayout )(
            ID3D11Device2 * This,
            _In_reads_(NumElements) const D3D11_INPUT_ELEMENT_DESC *pInputElementDescs,
            _In_range_( 0, D3D11_IA_VERTEX_INPUT_STRUCTURE_ELEMENT_COUNT ) UINT NumElements,
            _In_reads_(BytecodeLength) const void *pShaderBytecodeWithInputSignature,
            _In_ SIZE_T BytecodeLength,
            _COM_Outptr_opt_ ID3D11InputLayout **ppInputLayout);
        HRESULT ( STDMETHODCALLTYPE *CreateVertexShader )(
            ID3D11Device2 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11VertexShader **ppVertexShader);
        HRESULT ( STDMETHODCALLTYPE *CreateGeometryShader )(
            ID3D11Device2 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11GeometryShader **ppGeometryShader);
        HRESULT ( STDMETHODCALLTYPE *CreateGeometryShaderWithStreamOutput )(
            ID3D11Device2 * This,
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
            ID3D11Device2 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11PixelShader **ppPixelShader);
        HRESULT ( STDMETHODCALLTYPE *CreateHullShader )(
            ID3D11Device2 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11HullShader **ppHullShader);
        HRESULT ( STDMETHODCALLTYPE *CreateDomainShader )(
            ID3D11Device2 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11DomainShader **ppDomainShader);
        HRESULT ( STDMETHODCALLTYPE *CreateComputeShader )(
            ID3D11Device2 * This,
            _In_reads_(BytecodeLength) const void *pShaderBytecode,
            _In_ SIZE_T BytecodeLength,
            _In_opt_ ID3D11ClassLinkage *pClassLinkage,
            _COM_Outptr_opt_ ID3D11ComputeShader **ppComputeShader);
        HRESULT ( STDMETHODCALLTYPE *CreateClassLinkage )(
            ID3D11Device2 * This,
            _COM_Outptr_ ID3D11ClassLinkage **ppLinkage);
        HRESULT ( STDMETHODCALLTYPE *CreateBlendState )(
            ID3D11Device2 * This,
            _In_ const D3D11_BLEND_DESC *pBlendStateDesc,
            _COM_Outptr_opt_ ID3D11BlendState **ppBlendState);
        HRESULT ( STDMETHODCALLTYPE *CreateDepthStencilState )(
            ID3D11Device2 * This,
            _In_ const D3D11_DEPTH_STENCIL_DESC *pDepthStencilDesc,
            _COM_Outptr_opt_ ID3D11DepthStencilState **ppDepthStencilState);
        HRESULT ( STDMETHODCALLTYPE *CreateRasterizerState )(
            ID3D11Device2 * This,
            _In_ const D3D11_RASTERIZER_DESC *pRasterizerDesc,
            _COM_Outptr_opt_ ID3D11RasterizerState **ppRasterizerState);
        HRESULT ( STDMETHODCALLTYPE *CreateSamplerState )(
            ID3D11Device2 * This,
            _In_ const D3D11_SAMPLER_DESC *pSamplerDesc,
            _COM_Outptr_opt_ ID3D11SamplerState **ppSamplerState);
        HRESULT ( STDMETHODCALLTYPE *CreateQuery )(
            ID3D11Device2 * This,
            _In_ const D3D11_QUERY_DESC *pQueryDesc,
            _COM_Outptr_opt_ ID3D11Query **ppQuery);
        HRESULT ( STDMETHODCALLTYPE *CreatePredicate )(
            ID3D11Device2 * This,
            _In_ const D3D11_QUERY_DESC *pPredicateDesc,
            _COM_Outptr_opt_ ID3D11Predicate **ppPredicate);
        HRESULT ( STDMETHODCALLTYPE *CreateCounter )(
            ID3D11Device2 * This,
            _In_ const D3D11_COUNTER_DESC *pCounterDesc,
            _COM_Outptr_opt_ ID3D11Counter **ppCounter);
        HRESULT ( STDMETHODCALLTYPE *CreateDeferredContext )(
            ID3D11Device2 * This,
            UINT ContextFlags,
            _COM_Outptr_opt_ ID3D11DeviceContext **ppDeferredContext);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedResource )(
            ID3D11Device2 * This,
            _In_ HANDLE hResource,
            _In_ REFIID ReturnedInterface,
            _COM_Outptr_opt_ void **ppResource);
        HRESULT ( STDMETHODCALLTYPE *CheckFormatSupport )(
            ID3D11Device2 * This,
            _In_ DXGI_FORMAT Format,
            _Out_ UINT *pFormatSupport);
        HRESULT ( STDMETHODCALLTYPE *CheckMultisampleQualityLevels )(
            ID3D11Device2 * This,
            _In_ DXGI_FORMAT Format,
            _In_ UINT SampleCount,
            _Out_ UINT *pNumQualityLevels);
        void ( STDMETHODCALLTYPE *CheckCounterInfo )(
            ID3D11Device2 * This,
            _Out_ D3D11_COUNTER_INFO *pCounterInfo);
        HRESULT ( STDMETHODCALLTYPE *CheckCounter )(
            ID3D11Device2 * This,
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
            ID3D11Device2 * This,
            D3D11_FEATURE Feature,
            _Out_writes_bytes_(FeatureSupportDataSize) void *pFeatureSupportData,
            UINT FeatureSupportDataSize);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            ID3D11Device2 * This,
            _In_ REFGUID guid,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_opt_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            ID3D11Device2 * This,
            _In_ REFGUID guid,
            _In_ UINT DataSize,
            _In_reads_bytes_opt_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            ID3D11Device2 * This,
            _In_ REFGUID guid,
            _In_opt_ const IUnknown *pData);
        D3D_FEATURE_LEVEL ( STDMETHODCALLTYPE *GetFeatureLevel )(
            ID3D11Device2 * This);
        UINT ( STDMETHODCALLTYPE *GetCreationFlags )(
            ID3D11Device2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceRemovedReason )(
            ID3D11Device2 * This);
        void ( STDMETHODCALLTYPE *GetImmediateContext )(
            ID3D11Device2 * This,
            _Outptr_ ID3D11DeviceContext **ppImmediateContext);
        HRESULT ( STDMETHODCALLTYPE *SetExceptionMode )(
            ID3D11Device2 * This,
            UINT RaiseFlags);
        UINT ( STDMETHODCALLTYPE *GetExceptionMode )(
            ID3D11Device2 * This);
        void ( STDMETHODCALLTYPE *GetImmediateContext1 )(
            ID3D11Device2 * This,
            _Outptr_ ID3D11DeviceContext1 **ppImmediateContext);
        HRESULT ( STDMETHODCALLTYPE *CreateDeferredContext1 )(
            ID3D11Device2 * This,
            UINT ContextFlags,
            _COM_Outptr_opt_ ID3D11DeviceContext1 **ppDeferredContext);
        HRESULT ( STDMETHODCALLTYPE *CreateBlendState1 )(
            ID3D11Device2 * This,
            _In_ const D3D11_BLEND_DESC1 *pBlendStateDesc,
            _COM_Outptr_opt_ ID3D11BlendState1 **ppBlendState);
        HRESULT ( STDMETHODCALLTYPE *CreateRasterizerState1 )(
            ID3D11Device2 * This,
            _In_ const D3D11_RASTERIZER_DESC1 *pRasterizerDesc,
            _COM_Outptr_opt_ ID3D11RasterizerState1 **ppRasterizerState);
        HRESULT ( STDMETHODCALLTYPE *CreateDeviceContextState )(
            ID3D11Device2 * This,
            UINT Flags,
            _In_reads_( FeatureLevels ) const D3D_FEATURE_LEVEL *pFeatureLevels,
            UINT FeatureLevels,
            UINT SDKVersion,
            REFIID EmulatedInterface,
            _Out_opt_ D3D_FEATURE_LEVEL *pChosenFeatureLevel,
            _Out_opt_ ID3DDeviceContextState **ppContextState);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedResource1 )(
            ID3D11Device2 * This,
            _In_ HANDLE hResource,
            _In_ REFIID returnedInterface,
            _COM_Outptr_ void **ppResource);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedResourceByName )(
            ID3D11Device2 * This,
            _In_ LPCWSTR lpName,
            _In_ DWORD dwDesiredAccess,
            _In_ REFIID returnedInterface,
            _COM_Outptr_ void **ppResource);
        void ( STDMETHODCALLTYPE *GetImmediateContext2 )(
            ID3D11Device2 * This,
            _Outptr_ ID3D11DeviceContext2 **ppImmediateContext);
        HRESULT ( STDMETHODCALLTYPE *CreateDeferredContext2 )(
            ID3D11Device2 * This,
            UINT ContextFlags,
            _COM_Outptr_opt_ ID3D11DeviceContext2 **ppDeferredContext);
        void ( STDMETHODCALLTYPE *GetResourceTiling )(
            ID3D11Device2 * This,
            _In_ ID3D11Resource *pTiledResource,
            _Out_opt_ UINT *pNumTilesForEntireResource,
            _Out_opt_ D3D11_PACKED_MIP_DESC *pPackedMipDesc,
            _Out_opt_ D3D11_TILE_SHAPE *pStandardTileShapeForNonPackedMips,
            _Inout_opt_ UINT *pNumSubresourceTilings,
            _In_ UINT FirstSubresourceTilingToGet,
            _Out_writes_(*pNumSubresourceTilings) D3D11_SUBRESOURCE_TILING *pSubresourceTilingsForNonPackedMips);
        HRESULT ( STDMETHODCALLTYPE *CheckMultisampleQualityLevels1 )(
            ID3D11Device2 * This,
            _In_ DXGI_FORMAT Format,
            _In_ UINT SampleCount,
            _In_ UINT Flags,
            _Out_ UINT *pNumQualityLevels);
        END_INTERFACE
    } ID3D11Device2Vtbl;
    interface ID3D11Device2
    {
        CONST_VTBL struct ID3D11Device2Vtbl *lpVtbl;
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
DEFINE_GUID(IID_ID3D11DeviceContext2,0x420d5b32,0xb90c,0x4da4,0xbe,0xf0,0x35,0x9f,0x6a,0x24,0xa8,0x3a);
DEFINE_GUID(IID_ID3D11Device2,0x9d06dffa,0xd1e5,0x4d07,0x83,0xa8,0x1b,0xb1,0x23,0xf2,0xf8,0x41);
extern RPC_IF_HANDLE __MIDL_itf_d3d11_2_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_2_0000_0002_v0_0_s_ifspec;
}
