#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDXGIOutput5 IDXGIOutput5;
typedef interface IDXGISwapChain4 IDXGISwapChain4;
typedef interface IDXGIDevice4 IDXGIDevice4;
typedef interface IDXGIFactory5 IDXGIFactory5;
#include "dxgi1_4.h"
extern "C"{
#include <winapifamily.h>
#pragma region App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
typedef
enum DXGI_OUTDUPL_FLAG
    {
        DXGI_OUTDUPL_COMPOSITED_UI_CAPTURE_ONLY = 1
    } DXGI_OUTDUPL_FLAG;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_5_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_5_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIOutput5;
    typedef struct IDXGIOutput5Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIOutput5 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIOutput5 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIOutput5 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIOutput5 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIOutput5 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIOutput5 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIOutput5 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGIOutput5 * This,
            _Out_ DXGI_OUTPUT_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayModeList )(
            IDXGIOutput5 * This,
                       DXGI_FORMAT EnumFormat,
                       UINT Flags,
            _Inout_ UINT *pNumModes,
            _Out_writes_to_opt_(*pNumModes,*pNumModes) DXGI_MODE_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *FindClosestMatchingMode )(
            IDXGIOutput5 * This,
            _In_ const DXGI_MODE_DESC *pModeToMatch,
            _Out_ DXGI_MODE_DESC *pClosestMatch,
            _In_opt_ IUnknown *pConcernedDevice);
        HRESULT ( STDMETHODCALLTYPE *WaitForVBlank )(
            IDXGIOutput5 * This);
        HRESULT ( STDMETHODCALLTYPE *TakeOwnership )(
            IDXGIOutput5 * This,
            _In_ IUnknown *pDevice,
            BOOL Exclusive);
        void ( STDMETHODCALLTYPE *ReleaseOwnership )(
            IDXGIOutput5 * This);
        HRESULT ( STDMETHODCALLTYPE *GetGammaControlCapabilities )(
            IDXGIOutput5 * This,
            _Out_ DXGI_GAMMA_CONTROL_CAPABILITIES *pGammaCaps);
        HRESULT ( STDMETHODCALLTYPE *SetGammaControl )(
            IDXGIOutput5 * This,
            _In_ const DXGI_GAMMA_CONTROL *pArray);
        HRESULT ( STDMETHODCALLTYPE *GetGammaControl )(
            IDXGIOutput5 * This,
            _Out_ DXGI_GAMMA_CONTROL *pArray);
        HRESULT ( STDMETHODCALLTYPE *SetDisplaySurface )(
            IDXGIOutput5 * This,
            _In_ IDXGISurface *pScanoutSurface);
        HRESULT ( STDMETHODCALLTYPE *GetDisplaySurfaceData )(
            IDXGIOutput5 * This,
            _In_ IDXGISurface *pDestination);
        HRESULT ( STDMETHODCALLTYPE *GetFrameStatistics )(
            IDXGIOutput5 * This,
            _Out_ DXGI_FRAME_STATISTICS *pStats);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayModeList1 )(
            IDXGIOutput5 * This,
                       DXGI_FORMAT EnumFormat,
                       UINT Flags,
            _Inout_ UINT *pNumModes,
            _Out_writes_to_opt_(*pNumModes,*pNumModes) DXGI_MODE_DESC1 *pDesc);
        HRESULT ( STDMETHODCALLTYPE *FindClosestMatchingMode1 )(
            IDXGIOutput5 * This,
            _In_ const DXGI_MODE_DESC1 *pModeToMatch,
            _Out_ DXGI_MODE_DESC1 *pClosestMatch,
            _In_opt_ IUnknown *pConcernedDevice);
        HRESULT ( STDMETHODCALLTYPE *GetDisplaySurfaceData1 )(
            IDXGIOutput5 * This,
            _In_ IDXGIResource *pDestination);
        HRESULT ( STDMETHODCALLTYPE *DuplicateOutput )(
            IDXGIOutput5 * This,
            _In_ IUnknown *pDevice,
            _COM_Outptr_ IDXGIOutputDuplication **ppOutputDuplication);
        BOOL ( STDMETHODCALLTYPE *SupportsOverlays )(
            IDXGIOutput5 * This);
        HRESULT ( STDMETHODCALLTYPE *CheckOverlaySupport )(
            IDXGIOutput5 * This,
            _In_ DXGI_FORMAT EnumFormat,
            _In_ IUnknown *pConcernedDevice,
            _Out_ UINT *pFlags);
        HRESULT ( STDMETHODCALLTYPE *CheckOverlayColorSpaceSupport )(
            IDXGIOutput5 * This,
            _In_ DXGI_FORMAT Format,
            _In_ DXGI_COLOR_SPACE_TYPE ColorSpace,
            _In_ IUnknown *pConcernedDevice,
            _Out_ UINT *pFlags);
        HRESULT ( STDMETHODCALLTYPE *DuplicateOutput1 )(
            IDXGIOutput5 * This,
            _In_ IUnknown *pDevice,
                       UINT Flags,
            _In_ UINT SupportedFormatsCount,
            _In_reads_(SupportedFormatsCount) const DXGI_FORMAT *pSupportedFormats,
            _COM_Outptr_ IDXGIOutputDuplication **ppOutputDuplication);
        END_INTERFACE
    } IDXGIOutput5Vtbl;
    interface IDXGIOutput5
    {
        CONST_VTBL struct IDXGIOutput5Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> CheckOverlayColorSpaceSupport(This,Format,ColorSpace,pConcernedDevice,pFlags) )
    ( (This)->lpVtbl -> DuplicateOutput1(This,pDevice,Flags,SupportedFormatsCount,pSupportedFormats,ppOutputDuplication) )
typedef
enum DXGI_HDR_METADATA_TYPE
    {
        DXGI_HDR_METADATA_TYPE_NONE = 0,
        DXGI_HDR_METADATA_TYPE_HDR10 = 1,
        DXGI_HDR_METADATA_TYPE_HDR10PLUS = 2
    } DXGI_HDR_METADATA_TYPE;
typedef struct DXGI_HDR_METADATA_HDR10
    {
    UINT16 RedPrimary[ 2 ];
    UINT16 GreenPrimary[ 2 ];
    UINT16 BluePrimary[ 2 ];
    UINT16 WhitePoint[ 2 ];
    UINT MaxMasteringLuminance;
    UINT MinMasteringLuminance;
    UINT16 MaxContentLightLevel;
    UINT16 MaxFrameAverageLightLevel;
    } DXGI_HDR_METADATA_HDR10;
typedef struct DXGI_HDR_METADATA_HDR10PLUS
    {
    BYTE Data[ 72 ];
    } DXGI_HDR_METADATA_HDR10PLUS;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_5_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_5_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGISwapChain4;
    typedef struct IDXGISwapChain4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGISwapChain4 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGISwapChain4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGISwapChain4 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGISwapChain4 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGISwapChain4 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGISwapChain4 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGISwapChain4 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            IDXGISwapChain4 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *Present )(
            IDXGISwapChain4 * This,
                       UINT SyncInterval,
                       UINT Flags);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            IDXGISwapChain4 * This,
                       UINT Buffer,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppSurface);
        HRESULT ( STDMETHODCALLTYPE *SetFullscreenState )(
            IDXGISwapChain4 * This,
                       BOOL Fullscreen,
            _In_opt_ IDXGIOutput *pTarget);
        HRESULT ( STDMETHODCALLTYPE *GetFullscreenState )(
            IDXGISwapChain4 * This,
            _Out_opt_ BOOL *pFullscreen,
            _COM_Outptr_opt_result_maybenull_ IDXGIOutput **ppTarget);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGISwapChain4 * This,
            _Out_ DXGI_SWAP_CHAIN_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *ResizeBuffers )(
            IDXGISwapChain4 * This,
                       UINT BufferCount,
                       UINT Width,
                       UINT Height,
                       DXGI_FORMAT NewFormat,
                       UINT SwapChainFlags);
        HRESULT ( STDMETHODCALLTYPE *ResizeTarget )(
            IDXGISwapChain4 * This,
            _In_ const DXGI_MODE_DESC *pNewTargetParameters);
        HRESULT ( STDMETHODCALLTYPE *GetContainingOutput )(
            IDXGISwapChain4 * This,
            _COM_Outptr_ IDXGIOutput **ppOutput);
        HRESULT ( STDMETHODCALLTYPE *GetFrameStatistics )(
            IDXGISwapChain4 * This,
            _Out_ DXGI_FRAME_STATISTICS *pStats);
        HRESULT ( STDMETHODCALLTYPE *GetLastPresentCount )(
            IDXGISwapChain4 * This,
            _Out_ UINT *pLastPresentCount);
        HRESULT ( STDMETHODCALLTYPE *GetDesc1 )(
            IDXGISwapChain4 * This,
            _Out_ DXGI_SWAP_CHAIN_DESC1 *pDesc);
        HRESULT ( STDMETHODCALLTYPE *GetFullscreenDesc )(
            IDXGISwapChain4 * This,
            _Out_ DXGI_SWAP_CHAIN_FULLSCREEN_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *GetHwnd )(
            IDXGISwapChain4 * This,
            _Out_ HWND *pHwnd);
        HRESULT ( STDMETHODCALLTYPE *GetCoreWindow )(
            IDXGISwapChain4 * This,
            _In_ REFIID refiid,
            _COM_Outptr_ void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *Present1 )(
            IDXGISwapChain4 * This,
                       UINT SyncInterval,
                       UINT PresentFlags,
            _In_ const DXGI_PRESENT_PARAMETERS *pPresentParameters);
        BOOL ( STDMETHODCALLTYPE *IsTemporaryMonoSupported )(
            IDXGISwapChain4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRestrictToOutput )(
            IDXGISwapChain4 * This,
            _Out_ IDXGIOutput **ppRestrictToOutput);
        HRESULT ( STDMETHODCALLTYPE *SetBackgroundColor )(
            IDXGISwapChain4 * This,
            _In_ const DXGI_RGBA *pColor);
        HRESULT ( STDMETHODCALLTYPE *GetBackgroundColor )(
            IDXGISwapChain4 * This,
            _Out_ DXGI_RGBA *pColor);
        HRESULT ( STDMETHODCALLTYPE *SetRotation )(
            IDXGISwapChain4 * This,
            _In_ DXGI_MODE_ROTATION Rotation);
        HRESULT ( STDMETHODCALLTYPE *GetRotation )(
            IDXGISwapChain4 * This,
            _Out_ DXGI_MODE_ROTATION *pRotation);
        HRESULT ( STDMETHODCALLTYPE *SetSourceSize )(
            IDXGISwapChain4 * This,
            UINT Width,
            UINT Height);
        HRESULT ( STDMETHODCALLTYPE *GetSourceSize )(
            IDXGISwapChain4 * This,
            _Out_ UINT *pWidth,
            _Out_ UINT *pHeight);
        HRESULT ( STDMETHODCALLTYPE *SetMaximumFrameLatency )(
            IDXGISwapChain4 * This,
            UINT MaxLatency);
        HRESULT ( STDMETHODCALLTYPE *GetMaximumFrameLatency )(
            IDXGISwapChain4 * This,
            _Out_ UINT *pMaxLatency);
        HANDLE ( STDMETHODCALLTYPE *GetFrameLatencyWaitableObject )(
            IDXGISwapChain4 * This);
        HRESULT ( STDMETHODCALLTYPE *SetMatrixTransform )(
            IDXGISwapChain4 * This,
            const DXGI_MATRIX_3X2_F *pMatrix);
        HRESULT ( STDMETHODCALLTYPE *GetMatrixTransform )(
            IDXGISwapChain4 * This,
            _Out_ DXGI_MATRIX_3X2_F *pMatrix);
        UINT ( STDMETHODCALLTYPE *GetCurrentBackBufferIndex )(
            IDXGISwapChain4 * This);
        HRESULT ( STDMETHODCALLTYPE *CheckColorSpaceSupport )(
            IDXGISwapChain4 * This,
            _In_ DXGI_COLOR_SPACE_TYPE ColorSpace,
            _Out_ UINT *pColorSpaceSupport);
        HRESULT ( STDMETHODCALLTYPE *SetColorSpace1 )(
            IDXGISwapChain4 * This,
            _In_ DXGI_COLOR_SPACE_TYPE ColorSpace);
        HRESULT ( STDMETHODCALLTYPE *ResizeBuffers1 )(
            IDXGISwapChain4 * This,
            _In_ UINT BufferCount,
            _In_ UINT Width,
            _In_ UINT Height,
            _In_ DXGI_FORMAT Format,
            _In_ UINT SwapChainFlags,
            _In_reads_(BufferCount) const UINT *pCreationNodeMask,
            _In_reads_(BufferCount) IUnknown *const *ppPresentQueue);
        HRESULT ( STDMETHODCALLTYPE *SetHDRMetaData )(
            IDXGISwapChain4 * This,
            _In_ DXGI_HDR_METADATA_TYPE Type,
            _In_ UINT Size,
            _In_reads_opt_(Size) void *pMetaData);
        END_INTERFACE
    } IDXGISwapChain4Vtbl;
    interface IDXGISwapChain4
    {
        CONST_VTBL struct IDXGISwapChain4Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetCurrentBackBufferIndex(This) )
    ( (This)->lpVtbl -> CheckColorSpaceSupport(This,ColorSpace,pColorSpaceSupport) )
    ( (This)->lpVtbl -> SetColorSpace1(This,ColorSpace) )
    ( (This)->lpVtbl -> ResizeBuffers1(This,BufferCount,Width,Height,Format,SwapChainFlags,pCreationNodeMask,ppPresentQueue) )
    ( (This)->lpVtbl -> SetHDRMetaData(This,Type,Size,pMetaData) )
typedef
enum _DXGI_OFFER_RESOURCE_FLAGS
    {
        DXGI_OFFER_RESOURCE_FLAG_ALLOW_DECOMMIT = 0x1
    } DXGI_OFFER_RESOURCE_FLAGS;
typedef
enum _DXGI_RECLAIM_RESOURCE_RESULTS
    {
        DXGI_RECLAIM_RESOURCE_RESULT_OK = 0,
        DXGI_RECLAIM_RESOURCE_RESULT_DISCARDED = 1,
        DXGI_RECLAIM_RESOURCE_RESULT_NOT_COMMITTED = 2
    } DXGI_RECLAIM_RESOURCE_RESULTS;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_5_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_5_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIDevice4;
    typedef struct IDXGIDevice4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIDevice4 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIDevice4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIDevice4 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIDevice4 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIDevice4 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIDevice4 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIDevice4 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetAdapter )(
            IDXGIDevice4 * This,
            _COM_Outptr_ IDXGIAdapter **pAdapter);
        HRESULT ( STDMETHODCALLTYPE *CreateSurface )(
            IDXGIDevice4 * This,
            _In_ const DXGI_SURFACE_DESC *pDesc,
                       UINT NumSurfaces,
                       DXGI_USAGE Usage,
            _In_opt_ const DXGI_SHARED_RESOURCE *pSharedResource,
            _COM_Outptr_ IDXGISurface **ppSurface);
        HRESULT ( STDMETHODCALLTYPE *QueryResourceResidency )(
            IDXGIDevice4 * This,
            _In_reads_(NumResources) IUnknown *const *ppResources,
            _Out_writes_(NumResources) DXGI_RESIDENCY *pResidencyStatus,
                       UINT NumResources);
        HRESULT ( STDMETHODCALLTYPE *SetGPUThreadPriority )(
            IDXGIDevice4 * This,
                       INT Priority);
        HRESULT ( STDMETHODCALLTYPE *GetGPUThreadPriority )(
            IDXGIDevice4 * This,
            _Out_ INT *pPriority);
        HRESULT ( STDMETHODCALLTYPE *SetMaximumFrameLatency )(
            IDXGIDevice4 * This,
                       UINT MaxLatency);
        HRESULT ( STDMETHODCALLTYPE *GetMaximumFrameLatency )(
            IDXGIDevice4 * This,
            _Out_ UINT *pMaxLatency);
        HRESULT ( STDMETHODCALLTYPE *OfferResources )(
            IDXGIDevice4 * This,
            _In_ UINT NumResources,
            _In_reads_(NumResources) IDXGIResource *const *ppResources,
            _In_ DXGI_OFFER_RESOURCE_PRIORITY Priority);
        HRESULT ( STDMETHODCALLTYPE *ReclaimResources )(
            IDXGIDevice4 * This,
            _In_ UINT NumResources,
            _In_reads_(NumResources) IDXGIResource *const *ppResources,
            _Out_writes_all_opt_(NumResources) BOOL *pDiscarded);
        HRESULT ( STDMETHODCALLTYPE *EnqueueSetEvent )(
            IDXGIDevice4 * This,
            _In_ HANDLE hEvent);
        void ( STDMETHODCALLTYPE *Trim )(
            IDXGIDevice4 * This);
        HRESULT ( STDMETHODCALLTYPE *OfferResources1 )(
            IDXGIDevice4 * This,
            _In_ UINT NumResources,
            _In_reads_(NumResources) IDXGIResource *const *ppResources,
            _In_ DXGI_OFFER_RESOURCE_PRIORITY Priority,
            _In_ UINT Flags);
        HRESULT ( STDMETHODCALLTYPE *ReclaimResources1 )(
            IDXGIDevice4 * This,
            _In_ UINT NumResources,
            _In_reads_(NumResources) IDXGIResource *const *ppResources,
            _Out_writes_all_(NumResources) DXGI_RECLAIM_RESOURCE_RESULTS *pResults);
        END_INTERFACE
    } IDXGIDevice4Vtbl;
    interface IDXGIDevice4
    {
        CONST_VTBL struct IDXGIDevice4Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> OfferResources1(This,NumResources,ppResources,Priority,Flags) )
    ( (This)->lpVtbl -> ReclaimResources1(This,NumResources,ppResources,pResults) )
typedef
enum DXGI_FEATURE
    {
        DXGI_FEATURE_PRESENT_ALLOW_TEARING = 0
    } DXGI_FEATURE;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_5_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_5_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIFactory5;
    typedef struct IDXGIFactory5Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIFactory5 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIFactory5 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIFactory5 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIFactory5 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIFactory5 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIFactory5 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIFactory5 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapters )(
            IDXGIFactory5 * This,
                       UINT Adapter,
            _COM_Outptr_ IDXGIAdapter **ppAdapter);
        HRESULT ( STDMETHODCALLTYPE *MakeWindowAssociation )(
            IDXGIFactory5 * This,
            HWND WindowHandle,
            UINT Flags);
        HRESULT ( STDMETHODCALLTYPE *GetWindowAssociation )(
            IDXGIFactory5 * This,
            _Out_ HWND *pWindowHandle);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChain )(
            IDXGIFactory5 * This,
            _In_ IUnknown *pDevice,
            _In_ DXGI_SWAP_CHAIN_DESC *pDesc,
            _COM_Outptr_ IDXGISwapChain **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *CreateSoftwareAdapter )(
            IDXGIFactory5 * This,
                       HMODULE Module,
            _COM_Outptr_ IDXGIAdapter **ppAdapter);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapters1 )(
            IDXGIFactory5 * This,
                       UINT Adapter,
            _COM_Outptr_ IDXGIAdapter1 **ppAdapter);
        BOOL ( STDMETHODCALLTYPE *IsCurrent )(
            IDXGIFactory5 * This);
        BOOL ( STDMETHODCALLTYPE *IsWindowedStereoEnabled )(
            IDXGIFactory5 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChainForHwnd )(
            IDXGIFactory5 * This,
            _In_ IUnknown *pDevice,
            _In_ HWND hWnd,
            _In_ const DXGI_SWAP_CHAIN_DESC1 *pDesc,
            _In_opt_ const DXGI_SWAP_CHAIN_FULLSCREEN_DESC *pFullscreenDesc,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGISwapChain1 **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChainForCoreWindow )(
            IDXGIFactory5 * This,
            _In_ IUnknown *pDevice,
            _In_ IUnknown *pWindow,
            _In_ const DXGI_SWAP_CHAIN_DESC1 *pDesc,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGISwapChain1 **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *GetSharedResourceAdapterLuid )(
            IDXGIFactory5 * This,
            _In_ HANDLE hResource,
            _Out_ LUID *pLuid);
        HRESULT ( STDMETHODCALLTYPE *RegisterStereoStatusWindow )(
            IDXGIFactory5 * This,
            _In_ HWND WindowHandle,
            _In_ UINT wMsg,
            _Out_ DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *RegisterStereoStatusEvent )(
            IDXGIFactory5 * This,
            _In_ HANDLE hEvent,
            _Out_ DWORD *pdwCookie);
        void ( STDMETHODCALLTYPE *UnregisterStereoStatus )(
            IDXGIFactory5 * This,
            _In_ DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *RegisterOcclusionStatusWindow )(
            IDXGIFactory5 * This,
            _In_ HWND WindowHandle,
            _In_ UINT wMsg,
            _Out_ DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *RegisterOcclusionStatusEvent )(
            IDXGIFactory5 * This,
            _In_ HANDLE hEvent,
            _Out_ DWORD *pdwCookie);
        void ( STDMETHODCALLTYPE *UnregisterOcclusionStatus )(
            IDXGIFactory5 * This,
            _In_ DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChainForComposition )(
            IDXGIFactory5 * This,
            _In_ IUnknown *pDevice,
            _In_ const DXGI_SWAP_CHAIN_DESC1 *pDesc,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGISwapChain1 **ppSwapChain);
        UINT ( STDMETHODCALLTYPE *GetCreationFlags )(
            IDXGIFactory5 * This);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapterByLuid )(
            IDXGIFactory5 * This,
            _In_ LUID AdapterLuid,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppvAdapter);
        HRESULT ( STDMETHODCALLTYPE *EnumWarpAdapter )(
            IDXGIFactory5 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppvAdapter);
        HRESULT ( STDMETHODCALLTYPE *CheckFeatureSupport )(
            IDXGIFactory5 * This,
            DXGI_FEATURE Feature,
            _Inout_updates_bytes_(FeatureSupportDataSize) void *pFeatureSupportData,
            UINT FeatureSupportDataSize);
        END_INTERFACE
    } IDXGIFactory5Vtbl;
    interface IDXGIFactory5
    {
        CONST_VTBL struct IDXGIFactory5Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> EnumAdapterByLuid(This,AdapterLuid,riid,ppvAdapter) )
    ( (This)->lpVtbl -> EnumWarpAdapter(This,riid,ppvAdapter) )
    ( (This)->lpVtbl -> CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) )
#endif
#pragma endregion
DEFINE_GUID(IID_IDXGIOutput5,0x80A07424,0xAB52,0x42EB,0x83,0x3C,0x0C,0x42,0xFD,0x28,0x2D,0x98);
DEFINE_GUID(IID_IDXGISwapChain4,0x3D585D5A,0xBD4A,0x489E,0xB1,0xF4,0x3D,0xBC,0xB6,0x45,0x2F,0xFB);
DEFINE_GUID(IID_IDXGIDevice4,0x95B4F95F,0xD8DA,0x4CA4,0x9E,0xE6,0x3B,0x76,0xD5,0x96,0x8A,0x10);
DEFINE_GUID(IID_IDXGIFactory5,0x7632e1f5,0xee65,0x4dca,0x87,0xfd,0x84,0xcd,0x75,0xf8,0x83,0x8d);
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_5_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_5_0000_0004_v0_0_s_ifspec;
}
