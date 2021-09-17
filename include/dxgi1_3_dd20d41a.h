#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDXGIDevice3 IDXGIDevice3;
typedef interface IDXGISwapChain2 IDXGISwapChain2;
typedef interface IDXGIOutput2 IDXGIOutput2;
typedef interface IDXGIFactory3 IDXGIFactory3;
typedef interface IDXGIDecodeSwapChain IDXGIDecodeSwapChain;
typedef interface IDXGIFactoryMedia IDXGIFactoryMedia;
typedef interface IDXGISwapChainMedia IDXGISwapChainMedia;
typedef interface IDXGIOutput3 IDXGIOutput3;
#include "dxgi1_2.h"
extern "C"{
#include <winapifamily.h>
#pragma region App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
HRESULT WINAPI CreateDXGIFactory2(UINT Flags, REFIID riid, _COM_Outptr_ void **ppFactory);
HRESULT WINAPI DXGIGetDebugInterface1(UINT Flags, REFIID riid, _COM_Outptr_ void **pDebug);
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_3_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_3_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIDevice3;
    typedef struct IDXGIDevice3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIDevice3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIDevice3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIDevice3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIDevice3 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIDevice3 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIDevice3 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIDevice3 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetAdapter )(
            IDXGIDevice3 * This,
            _COM_Outptr_ IDXGIAdapter **pAdapter);
        HRESULT ( STDMETHODCALLTYPE *CreateSurface )(
            IDXGIDevice3 * This,
            _In_ const DXGI_SURFACE_DESC *pDesc,
                       UINT NumSurfaces,
                       DXGI_USAGE Usage,
            _In_opt_ const DXGI_SHARED_RESOURCE *pSharedResource,
            _COM_Outptr_ IDXGISurface **ppSurface);
        HRESULT ( STDMETHODCALLTYPE *QueryResourceResidency )(
            IDXGIDevice3 * This,
            _In_reads_(NumResources) IUnknown *const *ppResources,
            _Out_writes_(NumResources) DXGI_RESIDENCY *pResidencyStatus,
                       UINT NumResources);
        HRESULT ( STDMETHODCALLTYPE *SetGPUThreadPriority )(
            IDXGIDevice3 * This,
                       INT Priority);
        HRESULT ( STDMETHODCALLTYPE *GetGPUThreadPriority )(
            IDXGIDevice3 * This,
            _Out_ INT *pPriority);
        HRESULT ( STDMETHODCALLTYPE *SetMaximumFrameLatency )(
            IDXGIDevice3 * This,
                       UINT MaxLatency);
        HRESULT ( STDMETHODCALLTYPE *GetMaximumFrameLatency )(
            IDXGIDevice3 * This,
            _Out_ UINT *pMaxLatency);
        HRESULT ( STDMETHODCALLTYPE *OfferResources )(
            IDXGIDevice3 * This,
            _In_ UINT NumResources,
            _In_reads_(NumResources) IDXGIResource *const *ppResources,
            _In_ DXGI_OFFER_RESOURCE_PRIORITY Priority);
        HRESULT ( STDMETHODCALLTYPE *ReclaimResources )(
            IDXGIDevice3 * This,
            _In_ UINT NumResources,
            _In_reads_(NumResources) IDXGIResource *const *ppResources,
            _Out_writes_all_opt_(NumResources) BOOL *pDiscarded);
        HRESULT ( STDMETHODCALLTYPE *EnqueueSetEvent )(
            IDXGIDevice3 * This,
            _In_ HANDLE hEvent);
        void ( STDMETHODCALLTYPE *Trim )(
            IDXGIDevice3 * This);
        END_INTERFACE
    } IDXGIDevice3Vtbl;
    interface IDXGIDevice3
    {
        CONST_VTBL struct IDXGIDevice3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
    ( (This)->lpVtbl -> GetAdapter(This,pAdapter) )
    ( (This)->lpVtbl -> CreateSurface(This,pDesc,NumSurfaces,Usage,pSharedResource,ppSurface) )
    ( (This)->lpVtbl -> QueryResourceResidency(This,ppResources,pResidencyStatus,NumResources) )
    ( (This)->lpVtbl -> SetGPUThreadPriority(This,Priority) )
    ( (This)->lpVtbl -> GetGPUThreadPriority(This,pPriority) )
    ( (This)->lpVtbl -> SetMaximumFrameLatency(This,MaxLatency) )
    ( (This)->lpVtbl -> GetMaximumFrameLatency(This,pMaxLatency) )
    ( (This)->lpVtbl -> OfferResources(This,NumResources,ppResources,Priority) )
    ( (This)->lpVtbl -> ReclaimResources(This,NumResources,ppResources,pDiscarded) )
    ( (This)->lpVtbl -> EnqueueSetEvent(This,hEvent) )
    ( (This)->lpVtbl -> Trim(This) )
typedef struct DXGI_MATRIX_3X2_F
    {
    FLOAT _11;
    FLOAT _12;
    FLOAT _21;
    FLOAT _22;
    FLOAT _31;
    FLOAT _32;
    } DXGI_MATRIX_3X2_F;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_3_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_3_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGISwapChain2;
    typedef struct IDXGISwapChain2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGISwapChain2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGISwapChain2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGISwapChain2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGISwapChain2 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGISwapChain2 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGISwapChain2 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGISwapChain2 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            IDXGISwapChain2 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *Present )(
            IDXGISwapChain2 * This,
                       UINT SyncInterval,
                       UINT Flags);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            IDXGISwapChain2 * This,
                       UINT Buffer,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppSurface);
        HRESULT ( STDMETHODCALLTYPE *SetFullscreenState )(
            IDXGISwapChain2 * This,
                       BOOL Fullscreen,
            _In_opt_ IDXGIOutput *pTarget);
        HRESULT ( STDMETHODCALLTYPE *GetFullscreenState )(
            IDXGISwapChain2 * This,
            _Out_opt_ BOOL *pFullscreen,
            _COM_Outptr_opt_result_maybenull_ IDXGIOutput **ppTarget);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGISwapChain2 * This,
            _Out_ DXGI_SWAP_CHAIN_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *ResizeBuffers )(
            IDXGISwapChain2 * This,
                       UINT BufferCount,
                       UINT Width,
                       UINT Height,
                       DXGI_FORMAT NewFormat,
                       UINT SwapChainFlags);
        HRESULT ( STDMETHODCALLTYPE *ResizeTarget )(
            IDXGISwapChain2 * This,
            _In_ const DXGI_MODE_DESC *pNewTargetParameters);
        HRESULT ( STDMETHODCALLTYPE *GetContainingOutput )(
            IDXGISwapChain2 * This,
            _COM_Outptr_ IDXGIOutput **ppOutput);
        HRESULT ( STDMETHODCALLTYPE *GetFrameStatistics )(
            IDXGISwapChain2 * This,
            _Out_ DXGI_FRAME_STATISTICS *pStats);
        HRESULT ( STDMETHODCALLTYPE *GetLastPresentCount )(
            IDXGISwapChain2 * This,
            _Out_ UINT *pLastPresentCount);
        HRESULT ( STDMETHODCALLTYPE *GetDesc1 )(
            IDXGISwapChain2 * This,
            _Out_ DXGI_SWAP_CHAIN_DESC1 *pDesc);
        HRESULT ( STDMETHODCALLTYPE *GetFullscreenDesc )(
            IDXGISwapChain2 * This,
            _Out_ DXGI_SWAP_CHAIN_FULLSCREEN_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *GetHwnd )(
            IDXGISwapChain2 * This,
            _Out_ HWND *pHwnd);
        HRESULT ( STDMETHODCALLTYPE *GetCoreWindow )(
            IDXGISwapChain2 * This,
            _In_ REFIID refiid,
            _COM_Outptr_ void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *Present1 )(
            IDXGISwapChain2 * This,
                       UINT SyncInterval,
                       UINT PresentFlags,
            _In_ const DXGI_PRESENT_PARAMETERS *pPresentParameters);
        BOOL ( STDMETHODCALLTYPE *IsTemporaryMonoSupported )(
            IDXGISwapChain2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRestrictToOutput )(
            IDXGISwapChain2 * This,
            _Out_ IDXGIOutput **ppRestrictToOutput);
        HRESULT ( STDMETHODCALLTYPE *SetBackgroundColor )(
            IDXGISwapChain2 * This,
            _In_ const DXGI_RGBA *pColor);
        HRESULT ( STDMETHODCALLTYPE *GetBackgroundColor )(
            IDXGISwapChain2 * This,
            _Out_ DXGI_RGBA *pColor);
        HRESULT ( STDMETHODCALLTYPE *SetRotation )(
            IDXGISwapChain2 * This,
            _In_ DXGI_MODE_ROTATION Rotation);
        HRESULT ( STDMETHODCALLTYPE *GetRotation )(
            IDXGISwapChain2 * This,
            _Out_ DXGI_MODE_ROTATION *pRotation);
        HRESULT ( STDMETHODCALLTYPE *SetSourceSize )(
            IDXGISwapChain2 * This,
            UINT Width,
            UINT Height);
        HRESULT ( STDMETHODCALLTYPE *GetSourceSize )(
            IDXGISwapChain2 * This,
            _Out_ UINT *pWidth,
            _Out_ UINT *pHeight);
        HRESULT ( STDMETHODCALLTYPE *SetMaximumFrameLatency )(
            IDXGISwapChain2 * This,
            UINT MaxLatency);
        HRESULT ( STDMETHODCALLTYPE *GetMaximumFrameLatency )(
            IDXGISwapChain2 * This,
            _Out_ UINT *pMaxLatency);
        HANDLE ( STDMETHODCALLTYPE *GetFrameLatencyWaitableObject )(
            IDXGISwapChain2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetMatrixTransform )(
            IDXGISwapChain2 * This,
            const DXGI_MATRIX_3X2_F *pMatrix);
        HRESULT ( STDMETHODCALLTYPE *GetMatrixTransform )(
            IDXGISwapChain2 * This,
            _Out_ DXGI_MATRIX_3X2_F *pMatrix);
        END_INTERFACE
    } IDXGISwapChain2Vtbl;
    interface IDXGISwapChain2
    {
        CONST_VTBL struct IDXGISwapChain2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppDevice) )
    ( (This)->lpVtbl -> Present(This,SyncInterval,Flags) )
    ( (This)->lpVtbl -> GetBuffer(This,Buffer,riid,ppSurface) )
    ( (This)->lpVtbl -> SetFullscreenState(This,Fullscreen,pTarget) )
    ( (This)->lpVtbl -> GetFullscreenState(This,pFullscreen,ppTarget) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
    ( (This)->lpVtbl -> ResizeBuffers(This,BufferCount,Width,Height,NewFormat,SwapChainFlags) )
    ( (This)->lpVtbl -> ResizeTarget(This,pNewTargetParameters) )
    ( (This)->lpVtbl -> GetContainingOutput(This,ppOutput) )
    ( (This)->lpVtbl -> GetFrameStatistics(This,pStats) )
    ( (This)->lpVtbl -> GetLastPresentCount(This,pLastPresentCount) )
    ( (This)->lpVtbl -> GetDesc1(This,pDesc) )
    ( (This)->lpVtbl -> GetFullscreenDesc(This,pDesc) )
    ( (This)->lpVtbl -> GetHwnd(This,pHwnd) )
    ( (This)->lpVtbl -> GetCoreWindow(This,refiid,ppUnk) )
    ( (This)->lpVtbl -> Present1(This,SyncInterval,PresentFlags,pPresentParameters) )
    ( (This)->lpVtbl -> IsTemporaryMonoSupported(This) )
    ( (This)->lpVtbl -> GetRestrictToOutput(This,ppRestrictToOutput) )
    ( (This)->lpVtbl -> SetBackgroundColor(This,pColor) )
    ( (This)->lpVtbl -> GetBackgroundColor(This,pColor) )
    ( (This)->lpVtbl -> SetRotation(This,Rotation) )
    ( (This)->lpVtbl -> GetRotation(This,pRotation) )
    ( (This)->lpVtbl -> SetSourceSize(This,Width,Height) )
    ( (This)->lpVtbl -> GetSourceSize(This,pWidth,pHeight) )
    ( (This)->lpVtbl -> SetMaximumFrameLatency(This,MaxLatency) )
    ( (This)->lpVtbl -> GetMaximumFrameLatency(This,pMaxLatency) )
    ( (This)->lpVtbl -> GetFrameLatencyWaitableObject(This) )
    ( (This)->lpVtbl -> SetMatrixTransform(This,pMatrix) )
    ( (This)->lpVtbl -> GetMatrixTransform(This,pMatrix) )
EXTERN_C const IID IID_IDXGIOutput2;
    typedef struct IDXGIOutput2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIOutput2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIOutput2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIOutput2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIOutput2 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIOutput2 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIOutput2 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIOutput2 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGIOutput2 * This,
            _Out_ DXGI_OUTPUT_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayModeList )(
            IDXGIOutput2 * This,
                       DXGI_FORMAT EnumFormat,
                       UINT Flags,
            _Inout_ UINT *pNumModes,
            _Out_writes_to_opt_(*pNumModes,*pNumModes) DXGI_MODE_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *FindClosestMatchingMode )(
            IDXGIOutput2 * This,
            _In_ const DXGI_MODE_DESC *pModeToMatch,
            _Out_ DXGI_MODE_DESC *pClosestMatch,
            _In_opt_ IUnknown *pConcernedDevice);
        HRESULT ( STDMETHODCALLTYPE *WaitForVBlank )(
            IDXGIOutput2 * This);
        HRESULT ( STDMETHODCALLTYPE *TakeOwnership )(
            IDXGIOutput2 * This,
            _In_ IUnknown *pDevice,
            BOOL Exclusive);
        void ( STDMETHODCALLTYPE *ReleaseOwnership )(
            IDXGIOutput2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetGammaControlCapabilities )(
            IDXGIOutput2 * This,
            _Out_ DXGI_GAMMA_CONTROL_CAPABILITIES *pGammaCaps);
        HRESULT ( STDMETHODCALLTYPE *SetGammaControl )(
            IDXGIOutput2 * This,
            _In_ const DXGI_GAMMA_CONTROL *pArray);
        HRESULT ( STDMETHODCALLTYPE *GetGammaControl )(
            IDXGIOutput2 * This,
            _Out_ DXGI_GAMMA_CONTROL *pArray);
        HRESULT ( STDMETHODCALLTYPE *SetDisplaySurface )(
            IDXGIOutput2 * This,
            _In_ IDXGISurface *pScanoutSurface);
        HRESULT ( STDMETHODCALLTYPE *GetDisplaySurfaceData )(
            IDXGIOutput2 * This,
            _In_ IDXGISurface *pDestination);
        HRESULT ( STDMETHODCALLTYPE *GetFrameStatistics )(
            IDXGIOutput2 * This,
            _Out_ DXGI_FRAME_STATISTICS *pStats);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayModeList1 )(
            IDXGIOutput2 * This,
                       DXGI_FORMAT EnumFormat,
                       UINT Flags,
            _Inout_ UINT *pNumModes,
            _Out_writes_to_opt_(*pNumModes,*pNumModes) DXGI_MODE_DESC1 *pDesc);
        HRESULT ( STDMETHODCALLTYPE *FindClosestMatchingMode1 )(
            IDXGIOutput2 * This,
            _In_ const DXGI_MODE_DESC1 *pModeToMatch,
            _Out_ DXGI_MODE_DESC1 *pClosestMatch,
            _In_opt_ IUnknown *pConcernedDevice);
        HRESULT ( STDMETHODCALLTYPE *GetDisplaySurfaceData1 )(
            IDXGIOutput2 * This,
            _In_ IDXGIResource *pDestination);
        HRESULT ( STDMETHODCALLTYPE *DuplicateOutput )(
            IDXGIOutput2 * This,
            _In_ IUnknown *pDevice,
            _COM_Outptr_ IDXGIOutputDuplication **ppOutputDuplication);
        BOOL ( STDMETHODCALLTYPE *SupportsOverlays )(
            IDXGIOutput2 * This);
        END_INTERFACE
    } IDXGIOutput2Vtbl;
    interface IDXGIOutput2
    {
        CONST_VTBL struct IDXGIOutput2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
    ( (This)->lpVtbl -> GetDisplayModeList(This,EnumFormat,Flags,pNumModes,pDesc) )
    ( (This)->lpVtbl -> FindClosestMatchingMode(This,pModeToMatch,pClosestMatch,pConcernedDevice) )
    ( (This)->lpVtbl -> WaitForVBlank(This) )
    ( (This)->lpVtbl -> TakeOwnership(This,pDevice,Exclusive) )
    ( (This)->lpVtbl -> ReleaseOwnership(This) )
    ( (This)->lpVtbl -> GetGammaControlCapabilities(This,pGammaCaps) )
    ( (This)->lpVtbl -> SetGammaControl(This,pArray) )
    ( (This)->lpVtbl -> GetGammaControl(This,pArray) )
    ( (This)->lpVtbl -> SetDisplaySurface(This,pScanoutSurface) )
    ( (This)->lpVtbl -> GetDisplaySurfaceData(This,pDestination) )
    ( (This)->lpVtbl -> GetFrameStatistics(This,pStats) )
    ( (This)->lpVtbl -> GetDisplayModeList1(This,EnumFormat,Flags,pNumModes,pDesc) )
    ( (This)->lpVtbl -> FindClosestMatchingMode1(This,pModeToMatch,pClosestMatch,pConcernedDevice) )
    ( (This)->lpVtbl -> GetDisplaySurfaceData1(This,pDestination) )
    ( (This)->lpVtbl -> DuplicateOutput(This,pDevice,ppOutputDuplication) )
    ( (This)->lpVtbl -> SupportsOverlays(This) )
EXTERN_C const IID IID_IDXGIFactory3;
    typedef struct IDXGIFactory3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIFactory3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIFactory3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIFactory3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIFactory3 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIFactory3 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIFactory3 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIFactory3 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapters )(
            IDXGIFactory3 * This,
                       UINT Adapter,
            _COM_Outptr_ IDXGIAdapter **ppAdapter);
        HRESULT ( STDMETHODCALLTYPE *MakeWindowAssociation )(
            IDXGIFactory3 * This,
            HWND WindowHandle,
            UINT Flags);
        HRESULT ( STDMETHODCALLTYPE *GetWindowAssociation )(
            IDXGIFactory3 * This,
            _Out_ HWND *pWindowHandle);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChain )(
            IDXGIFactory3 * This,
            _In_ IUnknown *pDevice,
            _In_ DXGI_SWAP_CHAIN_DESC *pDesc,
            _COM_Outptr_ IDXGISwapChain **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *CreateSoftwareAdapter )(
            IDXGIFactory3 * This,
                       HMODULE Module,
            _COM_Outptr_ IDXGIAdapter **ppAdapter);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapters1 )(
            IDXGIFactory3 * This,
                       UINT Adapter,
            _COM_Outptr_ IDXGIAdapter1 **ppAdapter);
        BOOL ( STDMETHODCALLTYPE *IsCurrent )(
            IDXGIFactory3 * This);
        BOOL ( STDMETHODCALLTYPE *IsWindowedStereoEnabled )(
            IDXGIFactory3 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChainForHwnd )(
            IDXGIFactory3 * This,
            _In_ IUnknown *pDevice,
            _In_ HWND hWnd,
            _In_ const DXGI_SWAP_CHAIN_DESC1 *pDesc,
            _In_opt_ const DXGI_SWAP_CHAIN_FULLSCREEN_DESC *pFullscreenDesc,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGISwapChain1 **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChainForCoreWindow )(
            IDXGIFactory3 * This,
            _In_ IUnknown *pDevice,
            _In_ IUnknown *pWindow,
            _In_ const DXGI_SWAP_CHAIN_DESC1 *pDesc,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGISwapChain1 **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *GetSharedResourceAdapterLuid )(
            IDXGIFactory3 * This,
            _In_ HANDLE hResource,
            _Out_ LUID *pLuid);
        HRESULT ( STDMETHODCALLTYPE *RegisterStereoStatusWindow )(
            IDXGIFactory3 * This,
            _In_ HWND WindowHandle,
            _In_ UINT wMsg,
            _Out_ DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *RegisterStereoStatusEvent )(
            IDXGIFactory3 * This,
            _In_ HANDLE hEvent,
            _Out_ DWORD *pdwCookie);
        void ( STDMETHODCALLTYPE *UnregisterStereoStatus )(
            IDXGIFactory3 * This,
            _In_ DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *RegisterOcclusionStatusWindow )(
            IDXGIFactory3 * This,
            _In_ HWND WindowHandle,
            _In_ UINT wMsg,
            _Out_ DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *RegisterOcclusionStatusEvent )(
            IDXGIFactory3 * This,
            _In_ HANDLE hEvent,
            _Out_ DWORD *pdwCookie);
        void ( STDMETHODCALLTYPE *UnregisterOcclusionStatus )(
            IDXGIFactory3 * This,
            _In_ DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChainForComposition )(
            IDXGIFactory3 * This,
            _In_ IUnknown *pDevice,
            _In_ const DXGI_SWAP_CHAIN_DESC1 *pDesc,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGISwapChain1 **ppSwapChain);
        UINT ( STDMETHODCALLTYPE *GetCreationFlags )(
            IDXGIFactory3 * This);
        END_INTERFACE
    } IDXGIFactory3Vtbl;
    interface IDXGIFactory3
    {
        CONST_VTBL struct IDXGIFactory3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
    ( (This)->lpVtbl -> EnumAdapters(This,Adapter,ppAdapter) )
    ( (This)->lpVtbl -> MakeWindowAssociation(This,WindowHandle,Flags) )
    ( (This)->lpVtbl -> GetWindowAssociation(This,pWindowHandle) )
    ( (This)->lpVtbl -> CreateSwapChain(This,pDevice,pDesc,ppSwapChain) )
    ( (This)->lpVtbl -> CreateSoftwareAdapter(This,Module,ppAdapter) )
    ( (This)->lpVtbl -> EnumAdapters1(This,Adapter,ppAdapter) )
    ( (This)->lpVtbl -> IsCurrent(This) )
    ( (This)->lpVtbl -> IsWindowedStereoEnabled(This) )
    ( (This)->lpVtbl -> CreateSwapChainForHwnd(This,pDevice,hWnd,pDesc,pFullscreenDesc,pRestrictToOutput,ppSwapChain) )
    ( (This)->lpVtbl -> CreateSwapChainForCoreWindow(This,pDevice,pWindow,pDesc,pRestrictToOutput,ppSwapChain) )
    ( (This)->lpVtbl -> GetSharedResourceAdapterLuid(This,hResource,pLuid) )
    ( (This)->lpVtbl -> RegisterStereoStatusWindow(This,WindowHandle,wMsg,pdwCookie) )
    ( (This)->lpVtbl -> RegisterStereoStatusEvent(This,hEvent,pdwCookie) )
    ( (This)->lpVtbl -> UnregisterStereoStatus(This,dwCookie) )
    ( (This)->lpVtbl -> RegisterOcclusionStatusWindow(This,WindowHandle,wMsg,pdwCookie) )
    ( (This)->lpVtbl -> RegisterOcclusionStatusEvent(This,hEvent,pdwCookie) )
    ( (This)->lpVtbl -> UnregisterOcclusionStatus(This,dwCookie) )
    ( (This)->lpVtbl -> CreateSwapChainForComposition(This,pDevice,pDesc,pRestrictToOutput,ppSwapChain) )
    ( (This)->lpVtbl -> GetCreationFlags(This) )
#endif
#pragma endregion
#pragma region App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct DXGI_DECODE_SWAP_CHAIN_DESC
    {
    UINT Flags;
    } DXGI_DECODE_SWAP_CHAIN_DESC;
typedef
enum DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS
    {
        DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAG_NOMINAL_RANGE = 0x1,
        DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAG_BT709 = 0x2,
        DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAG_xvYCC = 0x4
    } DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_3_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_3_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIDecodeSwapChain;
    typedef struct IDXGIDecodeSwapChainVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIDecodeSwapChain * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIDecodeSwapChain * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIDecodeSwapChain * This);
        HRESULT ( STDMETHODCALLTYPE *PresentBuffer )(
            IDXGIDecodeSwapChain * This,
            UINT BufferToPresent,
            UINT SyncInterval,
            UINT Flags);
        HRESULT ( STDMETHODCALLTYPE *SetSourceRect )(
            IDXGIDecodeSwapChain * This,
            const RECT *pRect);
        HRESULT ( STDMETHODCALLTYPE *SetTargetRect )(
            IDXGIDecodeSwapChain * This,
            const RECT *pRect);
        HRESULT ( STDMETHODCALLTYPE *SetDestSize )(
            IDXGIDecodeSwapChain * This,
            UINT Width,
            UINT Height);
        HRESULT ( STDMETHODCALLTYPE *GetSourceRect )(
            IDXGIDecodeSwapChain * This,
            _Out_ RECT *pRect);
        HRESULT ( STDMETHODCALLTYPE *GetTargetRect )(
            IDXGIDecodeSwapChain * This,
            _Out_ RECT *pRect);
        HRESULT ( STDMETHODCALLTYPE *GetDestSize )(
            IDXGIDecodeSwapChain * This,
            _Out_ UINT *pWidth,
            _Out_ UINT *pHeight);
        HRESULT ( STDMETHODCALLTYPE *SetColorSpace )(
            IDXGIDecodeSwapChain * This,
            DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS ColorSpace);
        DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS ( STDMETHODCALLTYPE *GetColorSpace )(
            IDXGIDecodeSwapChain * This);
        END_INTERFACE
    } IDXGIDecodeSwapChainVtbl;
    interface IDXGIDecodeSwapChain
    {
        CONST_VTBL struct IDXGIDecodeSwapChainVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PresentBuffer(This,BufferToPresent,SyncInterval,Flags) )
    ( (This)->lpVtbl -> SetSourceRect(This,pRect) )
    ( (This)->lpVtbl -> SetTargetRect(This,pRect) )
    ( (This)->lpVtbl -> SetDestSize(This,Width,Height) )
    ( (This)->lpVtbl -> GetSourceRect(This,pRect) )
    ( (This)->lpVtbl -> GetTargetRect(This,pRect) )
    ( (This)->lpVtbl -> GetDestSize(This,pWidth,pHeight) )
    ( (This)->lpVtbl -> SetColorSpace(This,ColorSpace) )
    ( (This)->lpVtbl -> GetColorSpace(This) )
EXTERN_C const IID IID_IDXGIFactoryMedia;
    typedef struct IDXGIFactoryMediaVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIFactoryMedia * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIFactoryMedia * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIFactoryMedia * This);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChainForCompositionSurfaceHandle )(
            IDXGIFactoryMedia * This,
            _In_ IUnknown *pDevice,
            _In_opt_ HANDLE hSurface,
            _In_ const DXGI_SWAP_CHAIN_DESC1 *pDesc,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGISwapChain1 **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *CreateDecodeSwapChainForCompositionSurfaceHandle )(
            IDXGIFactoryMedia * This,
            _In_ IUnknown *pDevice,
            _In_opt_ HANDLE hSurface,
            _In_ DXGI_DECODE_SWAP_CHAIN_DESC *pDesc,
            _In_ IDXGIResource *pYuvDecodeBuffers,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGIDecodeSwapChain **ppSwapChain);
        END_INTERFACE
    } IDXGIFactoryMediaVtbl;
    interface IDXGIFactoryMedia
    {
        CONST_VTBL struct IDXGIFactoryMediaVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateSwapChainForCompositionSurfaceHandle(This,pDevice,hSurface,pDesc,pRestrictToOutput,ppSwapChain) )
    ( (This)->lpVtbl -> CreateDecodeSwapChainForCompositionSurfaceHandle(This,pDevice,hSurface,pDesc,pYuvDecodeBuffers,pRestrictToOutput,ppSwapChain) )
typedef
enum DXGI_FRAME_PRESENTATION_MODE
    {
        DXGI_FRAME_PRESENTATION_MODE_COMPOSED = 0,
        DXGI_FRAME_PRESENTATION_MODE_OVERLAY = 1,
        DXGI_FRAME_PRESENTATION_MODE_NONE = 2,
        DXGI_FRAME_PRESENTATION_MODE_COMPOSITION_FAILURE = 3
    } DXGI_FRAME_PRESENTATION_MODE;
typedef struct DXGI_FRAME_STATISTICS_MEDIA
    {
    UINT PresentCount;
    UINT PresentRefreshCount;
    UINT SyncRefreshCount;
    LARGE_INTEGER SyncQPCTime;
    LARGE_INTEGER SyncGPUTime;
    DXGI_FRAME_PRESENTATION_MODE CompositionMode;
    UINT ApprovedPresentDuration;
    } DXGI_FRAME_STATISTICS_MEDIA;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_3_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_3_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGISwapChainMedia;
    typedef struct IDXGISwapChainMediaVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGISwapChainMedia * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGISwapChainMedia * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGISwapChainMedia * This);
        HRESULT ( STDMETHODCALLTYPE *GetFrameStatisticsMedia )(
            IDXGISwapChainMedia * This,
            _Out_ DXGI_FRAME_STATISTICS_MEDIA *pStats);
        HRESULT ( STDMETHODCALLTYPE *SetPresentDuration )(
            IDXGISwapChainMedia * This,
            UINT Duration);
        HRESULT ( STDMETHODCALLTYPE *CheckPresentDurationSupport )(
            IDXGISwapChainMedia * This,
            UINT DesiredPresentDuration,
            _Out_ UINT *pClosestSmallerPresentDuration,
            _Out_ UINT *pClosestLargerPresentDuration);
        END_INTERFACE
    } IDXGISwapChainMediaVtbl;
    interface IDXGISwapChainMedia
    {
        CONST_VTBL struct IDXGISwapChainMediaVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFrameStatisticsMedia(This,pStats) )
    ( (This)->lpVtbl -> SetPresentDuration(This,Duration) )
    ( (This)->lpVtbl -> CheckPresentDurationSupport(This,DesiredPresentDuration,pClosestSmallerPresentDuration,pClosestLargerPresentDuration) )
typedef
enum DXGI_OVERLAY_SUPPORT_FLAG
    {
        DXGI_OVERLAY_SUPPORT_FLAG_DIRECT = 0x1,
        DXGI_OVERLAY_SUPPORT_FLAG_SCALING = 0x2
    } DXGI_OVERLAY_SUPPORT_FLAG;
#endif
#pragma endregion
#pragma region App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_3_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_3_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIOutput3;
    typedef struct IDXGIOutput3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIOutput3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIOutput3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIOutput3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIOutput3 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIOutput3 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIOutput3 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIOutput3 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGIOutput3 * This,
            _Out_ DXGI_OUTPUT_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayModeList )(
            IDXGIOutput3 * This,
                       DXGI_FORMAT EnumFormat,
                       UINT Flags,
            _Inout_ UINT *pNumModes,
            _Out_writes_to_opt_(*pNumModes,*pNumModes) DXGI_MODE_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *FindClosestMatchingMode )(
            IDXGIOutput3 * This,
            _In_ const DXGI_MODE_DESC *pModeToMatch,
            _Out_ DXGI_MODE_DESC *pClosestMatch,
            _In_opt_ IUnknown *pConcernedDevice);
        HRESULT ( STDMETHODCALLTYPE *WaitForVBlank )(
            IDXGIOutput3 * This);
        HRESULT ( STDMETHODCALLTYPE *TakeOwnership )(
            IDXGIOutput3 * This,
            _In_ IUnknown *pDevice,
            BOOL Exclusive);
        void ( STDMETHODCALLTYPE *ReleaseOwnership )(
            IDXGIOutput3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetGammaControlCapabilities )(
            IDXGIOutput3 * This,
            _Out_ DXGI_GAMMA_CONTROL_CAPABILITIES *pGammaCaps);
        HRESULT ( STDMETHODCALLTYPE *SetGammaControl )(
            IDXGIOutput3 * This,
            _In_ const DXGI_GAMMA_CONTROL *pArray);
        HRESULT ( STDMETHODCALLTYPE *GetGammaControl )(
            IDXGIOutput3 * This,
            _Out_ DXGI_GAMMA_CONTROL *pArray);
        HRESULT ( STDMETHODCALLTYPE *SetDisplaySurface )(
            IDXGIOutput3 * This,
            _In_ IDXGISurface *pScanoutSurface);
        HRESULT ( STDMETHODCALLTYPE *GetDisplaySurfaceData )(
            IDXGIOutput3 * This,
            _In_ IDXGISurface *pDestination);
        HRESULT ( STDMETHODCALLTYPE *GetFrameStatistics )(
            IDXGIOutput3 * This,
            _Out_ DXGI_FRAME_STATISTICS *pStats);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayModeList1 )(
            IDXGIOutput3 * This,
                       DXGI_FORMAT EnumFormat,
                       UINT Flags,
            _Inout_ UINT *pNumModes,
            _Out_writes_to_opt_(*pNumModes,*pNumModes) DXGI_MODE_DESC1 *pDesc);
        HRESULT ( STDMETHODCALLTYPE *FindClosestMatchingMode1 )(
            IDXGIOutput3 * This,
            _In_ const DXGI_MODE_DESC1 *pModeToMatch,
            _Out_ DXGI_MODE_DESC1 *pClosestMatch,
            _In_opt_ IUnknown *pConcernedDevice);
        HRESULT ( STDMETHODCALLTYPE *GetDisplaySurfaceData1 )(
            IDXGIOutput3 * This,
            _In_ IDXGIResource *pDestination);
        HRESULT ( STDMETHODCALLTYPE *DuplicateOutput )(
            IDXGIOutput3 * This,
            _In_ IUnknown *pDevice,
            _COM_Outptr_ IDXGIOutputDuplication **ppOutputDuplication);
        BOOL ( STDMETHODCALLTYPE *SupportsOverlays )(
            IDXGIOutput3 * This);
        HRESULT ( STDMETHODCALLTYPE *CheckOverlaySupport )(
            IDXGIOutput3 * This,
            _In_ DXGI_FORMAT EnumFormat,
            _In_ IUnknown *pConcernedDevice,
            _Out_ UINT *pFlags);
        END_INTERFACE
    } IDXGIOutput3Vtbl;
    interface IDXGIOutput3
    {
        CONST_VTBL struct IDXGIOutput3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
    ( (This)->lpVtbl -> GetDisplayModeList(This,EnumFormat,Flags,pNumModes,pDesc) )
    ( (This)->lpVtbl -> FindClosestMatchingMode(This,pModeToMatch,pClosestMatch,pConcernedDevice) )
    ( (This)->lpVtbl -> WaitForVBlank(This) )
    ( (This)->lpVtbl -> TakeOwnership(This,pDevice,Exclusive) )
    ( (This)->lpVtbl -> ReleaseOwnership(This) )
    ( (This)->lpVtbl -> GetGammaControlCapabilities(This,pGammaCaps) )
    ( (This)->lpVtbl -> SetGammaControl(This,pArray) )
    ( (This)->lpVtbl -> GetGammaControl(This,pArray) )
    ( (This)->lpVtbl -> SetDisplaySurface(This,pScanoutSurface) )
    ( (This)->lpVtbl -> GetDisplaySurfaceData(This,pDestination) )
    ( (This)->lpVtbl -> GetFrameStatistics(This,pStats) )
    ( (This)->lpVtbl -> GetDisplayModeList1(This,EnumFormat,Flags,pNumModes,pDesc) )
    ( (This)->lpVtbl -> FindClosestMatchingMode1(This,pModeToMatch,pClosestMatch,pConcernedDevice) )
    ( (This)->lpVtbl -> GetDisplaySurfaceData1(This,pDestination) )
    ( (This)->lpVtbl -> DuplicateOutput(This,pDevice,ppOutputDuplication) )
    ( (This)->lpVtbl -> SupportsOverlays(This) )
    ( (This)->lpVtbl -> CheckOverlaySupport(This,EnumFormat,pConcernedDevice,pFlags) )
#endif
#pragma endregion
DEFINE_GUID(IID_IDXGIDevice3,0x6007896c,0x3244,0x4afd,0xbf,0x18,0xa6,0xd3,0xbe,0xda,0x50,0x23);
DEFINE_GUID(IID_IDXGISwapChain2,0xa8be2ac4,0x199f,0x4946,0xb3,0x31,0x79,0x59,0x9f,0xb9,0x8d,0xe7);
DEFINE_GUID(IID_IDXGIOutput2,0x595e39d1,0x2724,0x4663,0x99,0xb1,0xda,0x96,0x9d,0xe2,0x83,0x64);
DEFINE_GUID(IID_IDXGIFactory3,0x25483823,0xcd46,0x4c7d,0x86,0xca,0x47,0xaa,0x95,0xb8,0x37,0xbd);
DEFINE_GUID(IID_IDXGIDecodeSwapChain,0x2633066b,0x4514,0x4c7a,0x8f,0xd8,0x12,0xea,0x98,0x05,0x9d,0x18);
DEFINE_GUID(IID_IDXGIFactoryMedia,0x41e7d1f2,0xa591,0x4f7b,0xa2,0xe5,0xfa,0x9c,0x84,0x3e,0x1c,0x12);
DEFINE_GUID(IID_IDXGISwapChainMedia,0xdd95b90b,0xf05f,0x4f6a,0xbd,0x65,0x25,0xbf,0xb2,0x64,0xbd,0x84);
DEFINE_GUID(IID_IDXGIOutput3,0x8a6bb301,0x7e7e,0x41F4,0xa8,0xe0,0x5b,0x32,0xf7,0xf9,0x9b,0x18);
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_3_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_3_0000_0008_v0_0_s_ifspec;
}
