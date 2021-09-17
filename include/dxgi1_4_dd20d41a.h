#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDXGISwapChain3 IDXGISwapChain3;
typedef interface IDXGIOutput4 IDXGIOutput4;
typedef interface IDXGIFactory4 IDXGIFactory4;
typedef interface IDXGIAdapter3 IDXGIAdapter3;
#include "dxgi1_3.h"
extern "C"{
#include <winapifamily.h>
#pragma region App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
typedef
enum DXGI_SWAP_CHAIN_COLOR_SPACE_SUPPORT_FLAG
    {
        DXGI_SWAP_CHAIN_COLOR_SPACE_SUPPORT_FLAG_PRESENT = 0x1,
        DXGI_SWAP_CHAIN_COLOR_SPACE_SUPPORT_FLAG_OVERLAY_PRESENT = 0x2
    } DXGI_SWAP_CHAIN_COLOR_SPACE_SUPPORT_FLAG;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_4_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_4_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGISwapChain3;
    typedef struct IDXGISwapChain3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGISwapChain3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGISwapChain3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGISwapChain3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGISwapChain3 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGISwapChain3 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGISwapChain3 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGISwapChain3 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            IDXGISwapChain3 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *Present )(
            IDXGISwapChain3 * This,
                       UINT SyncInterval,
                       UINT Flags);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            IDXGISwapChain3 * This,
                       UINT Buffer,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppSurface);
        HRESULT ( STDMETHODCALLTYPE *SetFullscreenState )(
            IDXGISwapChain3 * This,
                       BOOL Fullscreen,
            _In_opt_ IDXGIOutput *pTarget);
        HRESULT ( STDMETHODCALLTYPE *GetFullscreenState )(
            IDXGISwapChain3 * This,
            _Out_opt_ BOOL *pFullscreen,
            _COM_Outptr_opt_result_maybenull_ IDXGIOutput **ppTarget);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGISwapChain3 * This,
            _Out_ DXGI_SWAP_CHAIN_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *ResizeBuffers )(
            IDXGISwapChain3 * This,
                       UINT BufferCount,
                       UINT Width,
                       UINT Height,
                       DXGI_FORMAT NewFormat,
                       UINT SwapChainFlags);
        HRESULT ( STDMETHODCALLTYPE *ResizeTarget )(
            IDXGISwapChain3 * This,
            _In_ const DXGI_MODE_DESC *pNewTargetParameters);
        HRESULT ( STDMETHODCALLTYPE *GetContainingOutput )(
            IDXGISwapChain3 * This,
            _COM_Outptr_ IDXGIOutput **ppOutput);
        HRESULT ( STDMETHODCALLTYPE *GetFrameStatistics )(
            IDXGISwapChain3 * This,
            _Out_ DXGI_FRAME_STATISTICS *pStats);
        HRESULT ( STDMETHODCALLTYPE *GetLastPresentCount )(
            IDXGISwapChain3 * This,
            _Out_ UINT *pLastPresentCount);
        HRESULT ( STDMETHODCALLTYPE *GetDesc1 )(
            IDXGISwapChain3 * This,
            _Out_ DXGI_SWAP_CHAIN_DESC1 *pDesc);
        HRESULT ( STDMETHODCALLTYPE *GetFullscreenDesc )(
            IDXGISwapChain3 * This,
            _Out_ DXGI_SWAP_CHAIN_FULLSCREEN_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *GetHwnd )(
            IDXGISwapChain3 * This,
            _Out_ HWND *pHwnd);
        HRESULT ( STDMETHODCALLTYPE *GetCoreWindow )(
            IDXGISwapChain3 * This,
            _In_ REFIID refiid,
            _COM_Outptr_ void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *Present1 )(
            IDXGISwapChain3 * This,
                       UINT SyncInterval,
                       UINT PresentFlags,
            _In_ const DXGI_PRESENT_PARAMETERS *pPresentParameters);
        BOOL ( STDMETHODCALLTYPE *IsTemporaryMonoSupported )(
            IDXGISwapChain3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRestrictToOutput )(
            IDXGISwapChain3 * This,
            _Out_ IDXGIOutput **ppRestrictToOutput);
        HRESULT ( STDMETHODCALLTYPE *SetBackgroundColor )(
            IDXGISwapChain3 * This,
            _In_ const DXGI_RGBA *pColor);
        HRESULT ( STDMETHODCALLTYPE *GetBackgroundColor )(
            IDXGISwapChain3 * This,
            _Out_ DXGI_RGBA *pColor);
        HRESULT ( STDMETHODCALLTYPE *SetRotation )(
            IDXGISwapChain3 * This,
            _In_ DXGI_MODE_ROTATION Rotation);
        HRESULT ( STDMETHODCALLTYPE *GetRotation )(
            IDXGISwapChain3 * This,
            _Out_ DXGI_MODE_ROTATION *pRotation);
        HRESULT ( STDMETHODCALLTYPE *SetSourceSize )(
            IDXGISwapChain3 * This,
            UINT Width,
            UINT Height);
        HRESULT ( STDMETHODCALLTYPE *GetSourceSize )(
            IDXGISwapChain3 * This,
            _Out_ UINT *pWidth,
            _Out_ UINT *pHeight);
        HRESULT ( STDMETHODCALLTYPE *SetMaximumFrameLatency )(
            IDXGISwapChain3 * This,
            UINT MaxLatency);
        HRESULT ( STDMETHODCALLTYPE *GetMaximumFrameLatency )(
            IDXGISwapChain3 * This,
            _Out_ UINT *pMaxLatency);
        HANDLE ( STDMETHODCALLTYPE *GetFrameLatencyWaitableObject )(
            IDXGISwapChain3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetMatrixTransform )(
            IDXGISwapChain3 * This,
            const DXGI_MATRIX_3X2_F *pMatrix);
        HRESULT ( STDMETHODCALLTYPE *GetMatrixTransform )(
            IDXGISwapChain3 * This,
            _Out_ DXGI_MATRIX_3X2_F *pMatrix);
        UINT ( STDMETHODCALLTYPE *GetCurrentBackBufferIndex )(
            IDXGISwapChain3 * This);
        HRESULT ( STDMETHODCALLTYPE *CheckColorSpaceSupport )(
            IDXGISwapChain3 * This,
            _In_ DXGI_COLOR_SPACE_TYPE ColorSpace,
            _Out_ UINT *pColorSpaceSupport);
        HRESULT ( STDMETHODCALLTYPE *SetColorSpace1 )(
            IDXGISwapChain3 * This,
            _In_ DXGI_COLOR_SPACE_TYPE ColorSpace);
        HRESULT ( STDMETHODCALLTYPE *ResizeBuffers1 )(
            IDXGISwapChain3 * This,
            _In_ UINT BufferCount,
            _In_ UINT Width,
            _In_ UINT Height,
            _In_ DXGI_FORMAT Format,
            _In_ UINT SwapChainFlags,
            _In_reads_(BufferCount) const UINT *pCreationNodeMask,
            _In_reads_(BufferCount) IUnknown *const *ppPresentQueue);
        END_INTERFACE
    } IDXGISwapChain3Vtbl;
    interface IDXGISwapChain3
    {
        CONST_VTBL struct IDXGISwapChain3Vtbl *lpVtbl;
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
typedef
enum DXGI_OVERLAY_COLOR_SPACE_SUPPORT_FLAG
    {
        DXGI_OVERLAY_COLOR_SPACE_SUPPORT_FLAG_PRESENT = 0x1
    } DXGI_OVERLAY_COLOR_SPACE_SUPPORT_FLAG;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_4_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_4_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIOutput4;
    typedef struct IDXGIOutput4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIOutput4 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIOutput4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIOutput4 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIOutput4 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIOutput4 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIOutput4 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIOutput4 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGIOutput4 * This,
            _Out_ DXGI_OUTPUT_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayModeList )(
            IDXGIOutput4 * This,
                       DXGI_FORMAT EnumFormat,
                       UINT Flags,
            _Inout_ UINT *pNumModes,
            _Out_writes_to_opt_(*pNumModes,*pNumModes) DXGI_MODE_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *FindClosestMatchingMode )(
            IDXGIOutput4 * This,
            _In_ const DXGI_MODE_DESC *pModeToMatch,
            _Out_ DXGI_MODE_DESC *pClosestMatch,
            _In_opt_ IUnknown *pConcernedDevice);
        HRESULT ( STDMETHODCALLTYPE *WaitForVBlank )(
            IDXGIOutput4 * This);
        HRESULT ( STDMETHODCALLTYPE *TakeOwnership )(
            IDXGIOutput4 * This,
            _In_ IUnknown *pDevice,
            BOOL Exclusive);
        void ( STDMETHODCALLTYPE *ReleaseOwnership )(
            IDXGIOutput4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetGammaControlCapabilities )(
            IDXGIOutput4 * This,
            _Out_ DXGI_GAMMA_CONTROL_CAPABILITIES *pGammaCaps);
        HRESULT ( STDMETHODCALLTYPE *SetGammaControl )(
            IDXGIOutput4 * This,
            _In_ const DXGI_GAMMA_CONTROL *pArray);
        HRESULT ( STDMETHODCALLTYPE *GetGammaControl )(
            IDXGIOutput4 * This,
            _Out_ DXGI_GAMMA_CONTROL *pArray);
        HRESULT ( STDMETHODCALLTYPE *SetDisplaySurface )(
            IDXGIOutput4 * This,
            _In_ IDXGISurface *pScanoutSurface);
        HRESULT ( STDMETHODCALLTYPE *GetDisplaySurfaceData )(
            IDXGIOutput4 * This,
            _In_ IDXGISurface *pDestination);
        HRESULT ( STDMETHODCALLTYPE *GetFrameStatistics )(
            IDXGIOutput4 * This,
            _Out_ DXGI_FRAME_STATISTICS *pStats);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayModeList1 )(
            IDXGIOutput4 * This,
                       DXGI_FORMAT EnumFormat,
                       UINT Flags,
            _Inout_ UINT *pNumModes,
            _Out_writes_to_opt_(*pNumModes,*pNumModes) DXGI_MODE_DESC1 *pDesc);
        HRESULT ( STDMETHODCALLTYPE *FindClosestMatchingMode1 )(
            IDXGIOutput4 * This,
            _In_ const DXGI_MODE_DESC1 *pModeToMatch,
            _Out_ DXGI_MODE_DESC1 *pClosestMatch,
            _In_opt_ IUnknown *pConcernedDevice);
        HRESULT ( STDMETHODCALLTYPE *GetDisplaySurfaceData1 )(
            IDXGIOutput4 * This,
            _In_ IDXGIResource *pDestination);
        HRESULT ( STDMETHODCALLTYPE *DuplicateOutput )(
            IDXGIOutput4 * This,
            _In_ IUnknown *pDevice,
            _COM_Outptr_ IDXGIOutputDuplication **ppOutputDuplication);
        BOOL ( STDMETHODCALLTYPE *SupportsOverlays )(
            IDXGIOutput4 * This);
        HRESULT ( STDMETHODCALLTYPE *CheckOverlaySupport )(
            IDXGIOutput4 * This,
            _In_ DXGI_FORMAT EnumFormat,
            _In_ IUnknown *pConcernedDevice,
            _Out_ UINT *pFlags);
        HRESULT ( STDMETHODCALLTYPE *CheckOverlayColorSpaceSupport )(
            IDXGIOutput4 * This,
            _In_ DXGI_FORMAT Format,
            _In_ DXGI_COLOR_SPACE_TYPE ColorSpace,
            _In_ IUnknown *pConcernedDevice,
            _Out_ UINT *pFlags);
        END_INTERFACE
    } IDXGIOutput4Vtbl;
    interface IDXGIOutput4
    {
        CONST_VTBL struct IDXGIOutput4Vtbl *lpVtbl;
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
EXTERN_C const IID IID_IDXGIFactory4;
    typedef struct IDXGIFactory4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIFactory4 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIFactory4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIFactory4 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIFactory4 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIFactory4 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIFactory4 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIFactory4 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapters )(
            IDXGIFactory4 * This,
                       UINT Adapter,
            _COM_Outptr_ IDXGIAdapter **ppAdapter);
        HRESULT ( STDMETHODCALLTYPE *MakeWindowAssociation )(
            IDXGIFactory4 * This,
            HWND WindowHandle,
            UINT Flags);
        HRESULT ( STDMETHODCALLTYPE *GetWindowAssociation )(
            IDXGIFactory4 * This,
            _Out_ HWND *pWindowHandle);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChain )(
            IDXGIFactory4 * This,
            _In_ IUnknown *pDevice,
            _In_ DXGI_SWAP_CHAIN_DESC *pDesc,
            _COM_Outptr_ IDXGISwapChain **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *CreateSoftwareAdapter )(
            IDXGIFactory4 * This,
                       HMODULE Module,
            _COM_Outptr_ IDXGIAdapter **ppAdapter);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapters1 )(
            IDXGIFactory4 * This,
                       UINT Adapter,
            _COM_Outptr_ IDXGIAdapter1 **ppAdapter);
        BOOL ( STDMETHODCALLTYPE *IsCurrent )(
            IDXGIFactory4 * This);
        BOOL ( STDMETHODCALLTYPE *IsWindowedStereoEnabled )(
            IDXGIFactory4 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChainForHwnd )(
            IDXGIFactory4 * This,
            _In_ IUnknown *pDevice,
            _In_ HWND hWnd,
            _In_ const DXGI_SWAP_CHAIN_DESC1 *pDesc,
            _In_opt_ const DXGI_SWAP_CHAIN_FULLSCREEN_DESC *pFullscreenDesc,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGISwapChain1 **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChainForCoreWindow )(
            IDXGIFactory4 * This,
            _In_ IUnknown *pDevice,
            _In_ IUnknown *pWindow,
            _In_ const DXGI_SWAP_CHAIN_DESC1 *pDesc,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGISwapChain1 **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *GetSharedResourceAdapterLuid )(
            IDXGIFactory4 * This,
            _In_ HANDLE hResource,
            _Out_ LUID *pLuid);
        HRESULT ( STDMETHODCALLTYPE *RegisterStereoStatusWindow )(
            IDXGIFactory4 * This,
            _In_ HWND WindowHandle,
            _In_ UINT wMsg,
            _Out_ DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *RegisterStereoStatusEvent )(
            IDXGIFactory4 * This,
            _In_ HANDLE hEvent,
            _Out_ DWORD *pdwCookie);
        void ( STDMETHODCALLTYPE *UnregisterStereoStatus )(
            IDXGIFactory4 * This,
            _In_ DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *RegisterOcclusionStatusWindow )(
            IDXGIFactory4 * This,
            _In_ HWND WindowHandle,
            _In_ UINT wMsg,
            _Out_ DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *RegisterOcclusionStatusEvent )(
            IDXGIFactory4 * This,
            _In_ HANDLE hEvent,
            _Out_ DWORD *pdwCookie);
        void ( STDMETHODCALLTYPE *UnregisterOcclusionStatus )(
            IDXGIFactory4 * This,
            _In_ DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChainForComposition )(
            IDXGIFactory4 * This,
            _In_ IUnknown *pDevice,
            _In_ const DXGI_SWAP_CHAIN_DESC1 *pDesc,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGISwapChain1 **ppSwapChain);
        UINT ( STDMETHODCALLTYPE *GetCreationFlags )(
            IDXGIFactory4 * This);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapterByLuid )(
            IDXGIFactory4 * This,
            _In_ LUID AdapterLuid,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppvAdapter);
        HRESULT ( STDMETHODCALLTYPE *EnumWarpAdapter )(
            IDXGIFactory4 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppvAdapter);
        END_INTERFACE
    } IDXGIFactory4Vtbl;
    interface IDXGIFactory4
    {
        CONST_VTBL struct IDXGIFactory4Vtbl *lpVtbl;
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
typedef
enum DXGI_MEMORY_SEGMENT_GROUP
    {
        DXGI_MEMORY_SEGMENT_GROUP_LOCAL = 0,
        DXGI_MEMORY_SEGMENT_GROUP_NON_LOCAL = 1
    } DXGI_MEMORY_SEGMENT_GROUP;
typedef struct DXGI_QUERY_VIDEO_MEMORY_INFO
    {
    UINT64 Budget;
    UINT64 CurrentUsage;
    UINT64 AvailableForReservation;
    UINT64 CurrentReservation;
    } DXGI_QUERY_VIDEO_MEMORY_INFO;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_4_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_4_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIAdapter3;
    typedef struct IDXGIAdapter3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIAdapter3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIAdapter3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIAdapter3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIAdapter3 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIAdapter3 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIAdapter3 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIAdapter3 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *EnumOutputs )(
            IDXGIAdapter3 * This,
                       UINT Output,
            _COM_Outptr_ IDXGIOutput **ppOutput);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGIAdapter3 * This,
            _Out_ DXGI_ADAPTER_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *CheckInterfaceSupport )(
            IDXGIAdapter3 * This,
            _In_ REFGUID InterfaceName,
            _Out_ LARGE_INTEGER *pUMDVersion);
        HRESULT ( STDMETHODCALLTYPE *GetDesc1 )(
            IDXGIAdapter3 * This,
            _Out_ DXGI_ADAPTER_DESC1 *pDesc);
        HRESULT ( STDMETHODCALLTYPE *GetDesc2 )(
            IDXGIAdapter3 * This,
            _Out_ DXGI_ADAPTER_DESC2 *pDesc);
        HRESULT ( STDMETHODCALLTYPE *RegisterHardwareContentProtectionTeardownStatusEvent )(
            IDXGIAdapter3 * This,
            _In_ HANDLE hEvent,
            _Out_ DWORD *pdwCookie);
        void ( STDMETHODCALLTYPE *UnregisterHardwareContentProtectionTeardownStatus )(
            IDXGIAdapter3 * This,
            _In_ DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *QueryVideoMemoryInfo )(
            IDXGIAdapter3 * This,
            _In_ UINT NodeIndex,
            _In_ DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup,
            _Out_ DXGI_QUERY_VIDEO_MEMORY_INFO *pVideoMemoryInfo);
        HRESULT ( STDMETHODCALLTYPE *SetVideoMemoryReservation )(
            IDXGIAdapter3 * This,
            _In_ UINT NodeIndex,
            _In_ DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup,
            _In_ UINT64 Reservation);
        HRESULT ( STDMETHODCALLTYPE *RegisterVideoMemoryBudgetChangeNotificationEvent )(
            IDXGIAdapter3 * This,
            _In_ HANDLE hEvent,
            _Out_ DWORD *pdwCookie);
        void ( STDMETHODCALLTYPE *UnregisterVideoMemoryBudgetChangeNotification )(
            IDXGIAdapter3 * This,
            _In_ DWORD dwCookie);
        END_INTERFACE
    } IDXGIAdapter3Vtbl;
    interface IDXGIAdapter3
    {
        CONST_VTBL struct IDXGIAdapter3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
    ( (This)->lpVtbl -> EnumOutputs(This,Output,ppOutput) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
    ( (This)->lpVtbl -> CheckInterfaceSupport(This,InterfaceName,pUMDVersion) )
    ( (This)->lpVtbl -> GetDesc1(This,pDesc) )
    ( (This)->lpVtbl -> GetDesc2(This,pDesc) )
    ( (This)->lpVtbl -> RegisterHardwareContentProtectionTeardownStatusEvent(This,hEvent,pdwCookie) )
    ( (This)->lpVtbl -> UnregisterHardwareContentProtectionTeardownStatus(This,dwCookie) )
    ( (This)->lpVtbl -> QueryVideoMemoryInfo(This,NodeIndex,MemorySegmentGroup,pVideoMemoryInfo) )
    ( (This)->lpVtbl -> SetVideoMemoryReservation(This,NodeIndex,MemorySegmentGroup,Reservation) )
    ( (This)->lpVtbl -> RegisterVideoMemoryBudgetChangeNotificationEvent(This,hEvent,pdwCookie) )
    ( (This)->lpVtbl -> UnregisterVideoMemoryBudgetChangeNotification(This,dwCookie) )
#endif
#pragma endregion
DEFINE_GUID(IID_IDXGISwapChain3,0x94d99bdb,0xf1f8,0x4ab0,0xb2,0x36,0x7d,0xa0,0x17,0x0e,0xda,0xb1);
DEFINE_GUID(IID_IDXGIOutput4,0xdc7dca35,0x2196,0x414d,0x9F,0x53,0x61,0x78,0x84,0x03,0x2a,0x60);
DEFINE_GUID(IID_IDXGIFactory4,0x1bc6ea02,0xef36,0x464f,0xbf,0x0c,0x21,0xca,0x39,0xe5,0x16,0x8a);
DEFINE_GUID(IID_IDXGIAdapter3,0x645967A4,0x1392,0x4310,0xA7,0x98,0x80,0x53,0xCE,0x3E,0x93,0xFD);
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_4_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_4_0000_0004_v0_0_s_ifspec;
}
