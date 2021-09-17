#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ID3D11On12Device ID3D11On12Device;
typedef interface ID3D11On12Device1 ID3D11On12Device1;
#include "oaidl.h"
#include "ocidl.h"
#include "d3d11.h"
#include "d3d12.h"
extern "C"{
#include <winapifamily.h>
#pragma region App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
typedef HRESULT (WINAPI* PFN_D3D11ON12_CREATE_DEVICE)( _In_ IUnknown*, UINT,
    _In_reads_opt_( FeatureLevels ) CONST D3D_FEATURE_LEVEL*, UINT FeatureLevels,
    _In_reads_opt_( NumQueues ) IUnknown* CONST*, UINT NumQueues,
    UINT, _COM_Outptr_opt_ ID3D11Device**, _COM_Outptr_opt_ ID3D11DeviceContext**,
    _Out_opt_ D3D_FEATURE_LEVEL* );
HRESULT WINAPI D3D11On12CreateDevice(
    _In_ IUnknown* pDevice,
    UINT Flags,
    _In_reads_opt_( FeatureLevels ) CONST D3D_FEATURE_LEVEL* pFeatureLevels,
    UINT FeatureLevels,
    _In_reads_opt_( NumQueues ) IUnknown* CONST* ppCommandQueues,
    UINT NumQueues,
    UINT NodeMask,
    _COM_Outptr_opt_ ID3D11Device** ppDevice,
    _COM_Outptr_opt_ ID3D11DeviceContext** ppImmediateContext,
    _Out_opt_ D3D_FEATURE_LEVEL* pChosenFeatureLevel );
typedef struct D3D11_RESOURCE_FLAGS
    {
    UINT BindFlags;
    UINT MiscFlags;
    UINT CPUAccessFlags;
    UINT StructureByteStride;
    } D3D11_RESOURCE_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_d3d11on12_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11on12_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ID3D11On12Device;
    typedef struct ID3D11On12DeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11On12Device * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11On12Device * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11On12Device * This);
        HRESULT ( STDMETHODCALLTYPE *CreateWrappedResource )(
            ID3D11On12Device * This,
            _In_ IUnknown *pResource12,
            _In_ const D3D11_RESOURCE_FLAGS *pFlags11,
            D3D12_RESOURCE_STATES InState,
            D3D12_RESOURCE_STATES OutState,
            REFIID riid,
            _COM_Outptr_opt_ void **ppResource11);
        void ( STDMETHODCALLTYPE *ReleaseWrappedResources )(
            ID3D11On12Device * This,
            _In_reads_( NumResources ) ID3D11Resource *const *ppResources,
            UINT NumResources);
        void ( STDMETHODCALLTYPE *AcquireWrappedResources )(
            ID3D11On12Device * This,
            _In_reads_( NumResources ) ID3D11Resource *const *ppResources,
            UINT NumResources);
        END_INTERFACE
    } ID3D11On12DeviceVtbl;
    interface ID3D11On12Device
    {
        CONST_VTBL struct ID3D11On12DeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateWrappedResource(This,pResource12,pFlags11,InState,OutState,riid,ppResource11) )
    ( (This)->lpVtbl -> ReleaseWrappedResources(This,ppResources,NumResources) )
    ( (This)->lpVtbl -> AcquireWrappedResources(This,ppResources,NumResources) )
EXTERN_C const IID IID_ID3D11On12Device1;
    typedef struct ID3D11On12Device1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ID3D11On12Device1 * This,
            REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ID3D11On12Device1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ID3D11On12Device1 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateWrappedResource )(
            ID3D11On12Device1 * This,
            _In_ IUnknown *pResource12,
            _In_ const D3D11_RESOURCE_FLAGS *pFlags11,
            D3D12_RESOURCE_STATES InState,
            D3D12_RESOURCE_STATES OutState,
            REFIID riid,
            _COM_Outptr_opt_ void **ppResource11);
        void ( STDMETHODCALLTYPE *ReleaseWrappedResources )(
            ID3D11On12Device1 * This,
            _In_reads_( NumResources ) ID3D11Resource *const *ppResources,
            UINT NumResources);
        void ( STDMETHODCALLTYPE *AcquireWrappedResources )(
            ID3D11On12Device1 * This,
            _In_reads_( NumResources ) ID3D11Resource *const *ppResources,
            UINT NumResources);
        HRESULT ( STDMETHODCALLTYPE *GetD3D12Device )(
            ID3D11On12Device1 * This,
            REFIID riid,
            _COM_Outptr_ void **ppvDevice);
        END_INTERFACE
    } ID3D11On12Device1Vtbl;
    interface ID3D11On12Device1
    {
        CONST_VTBL struct ID3D11On12Device1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateWrappedResource(This,pResource12,pFlags11,InState,OutState,riid,ppResource11) )
    ( (This)->lpVtbl -> ReleaseWrappedResources(This,ppResources,NumResources) )
    ( (This)->lpVtbl -> AcquireWrappedResources(This,ppResources,NumResources) )
    ( (This)->lpVtbl -> GetD3D12Device(This,riid,ppvDevice) )
#endif
#pragma endregion
DEFINE_GUID(IID_ID3D11On12Device,0x85611e73,0x70a9,0x490e,0x96,0x14,0xa9,0xe3,0x02,0x77,0x79,0x04);
DEFINE_GUID(IID_ID3D11On12Device1,0xbdb64df4,0xea2f,0x4c70,0xb8,0x61,0xaa,0xab,0x12,0x58,0xbb,0x5d);
extern RPC_IF_HANDLE __MIDL_itf_d3d11on12_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11on12_0000_0002_v0_0_s_ifspec;
}
