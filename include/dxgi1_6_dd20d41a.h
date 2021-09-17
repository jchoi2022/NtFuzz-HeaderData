#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDXGIAdapter4 IDXGIAdapter4;
typedef interface IDXGIOutput6 IDXGIOutput6;
typedef interface IDXGIFactory6 IDXGIFactory6;
typedef interface IDXGIFactory7 IDXGIFactory7;
#include "dxgi1_5.h"
extern "C"{
#include <winapifamily.h>
#pragma region App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
HRESULT WINAPI DXGIDeclareAdapterRemovalSupport();
typedef
enum DXGI_ADAPTER_FLAG3
    {
        DXGI_ADAPTER_FLAG3_NONE = 0,
        DXGI_ADAPTER_FLAG3_REMOTE = 1,
        DXGI_ADAPTER_FLAG3_SOFTWARE = 2,
        DXGI_ADAPTER_FLAG3_ACG_COMPATIBLE = 4,
        DXGI_ADAPTER_FLAG3_SUPPORT_MONITORED_FENCES = 8,
        DXGI_ADAPTER_FLAG3_SUPPORT_NON_MONITORED_FENCES = 0x10,
        DXGI_ADAPTER_FLAG3_KEYED_MUTEX_CONFORMANCE = 0x20,
        DXGI_ADAPTER_FLAG3_FORCE_DWORD = 0xffffffff
    } DXGI_ADAPTER_FLAG3;
DEFINE_ENUM_FLAG_OPERATORS( DXGI_ADAPTER_FLAG3 );
typedef struct DXGI_ADAPTER_DESC3
    {
    WCHAR Description[ 128 ];
    UINT VendorId;
    UINT DeviceId;
    UINT SubSysId;
    UINT Revision;
    SIZE_T DedicatedVideoMemory;
    SIZE_T DedicatedSystemMemory;
    SIZE_T SharedSystemMemory;
    LUID AdapterLuid;
    DXGI_ADAPTER_FLAG3 Flags;
    DXGI_GRAPHICS_PREEMPTION_GRANULARITY GraphicsPreemptionGranularity;
    DXGI_COMPUTE_PREEMPTION_GRANULARITY ComputePreemptionGranularity;
    } DXGI_ADAPTER_DESC3;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_6_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_6_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIAdapter4;
    typedef struct IDXGIAdapter4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIAdapter4 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIAdapter4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIAdapter4 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIAdapter4 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIAdapter4 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIAdapter4 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIAdapter4 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *EnumOutputs )(
            IDXGIAdapter4 * This,
                       UINT Output,
            _COM_Outptr_ IDXGIOutput **ppOutput);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGIAdapter4 * This,
            _Out_ DXGI_ADAPTER_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *CheckInterfaceSupport )(
            IDXGIAdapter4 * This,
            _In_ REFGUID InterfaceName,
            _Out_ LARGE_INTEGER *pUMDVersion);
        HRESULT ( STDMETHODCALLTYPE *GetDesc1 )(
            IDXGIAdapter4 * This,
            _Out_ DXGI_ADAPTER_DESC1 *pDesc);
        HRESULT ( STDMETHODCALLTYPE *GetDesc2 )(
            IDXGIAdapter4 * This,
            _Out_ DXGI_ADAPTER_DESC2 *pDesc);
        HRESULT ( STDMETHODCALLTYPE *RegisterHardwareContentProtectionTeardownStatusEvent )(
            IDXGIAdapter4 * This,
            _In_ HANDLE hEvent,
            _Out_ DWORD *pdwCookie);
        void ( STDMETHODCALLTYPE *UnregisterHardwareContentProtectionTeardownStatus )(
            IDXGIAdapter4 * This,
            _In_ DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *QueryVideoMemoryInfo )(
            IDXGIAdapter4 * This,
            _In_ UINT NodeIndex,
            _In_ DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup,
            _Out_ DXGI_QUERY_VIDEO_MEMORY_INFO *pVideoMemoryInfo);
        HRESULT ( STDMETHODCALLTYPE *SetVideoMemoryReservation )(
            IDXGIAdapter4 * This,
            _In_ UINT NodeIndex,
            _In_ DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup,
            _In_ UINT64 Reservation);
        HRESULT ( STDMETHODCALLTYPE *RegisterVideoMemoryBudgetChangeNotificationEvent )(
            IDXGIAdapter4 * This,
            _In_ HANDLE hEvent,
            _Out_ DWORD *pdwCookie);
        void ( STDMETHODCALLTYPE *UnregisterVideoMemoryBudgetChangeNotification )(
            IDXGIAdapter4 * This,
            _In_ DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *GetDesc3 )(
            IDXGIAdapter4 * This,
            _Out_ DXGI_ADAPTER_DESC3 *pDesc);
        END_INTERFACE
    } IDXGIAdapter4Vtbl;
    interface IDXGIAdapter4
    {
        CONST_VTBL struct IDXGIAdapter4Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetDesc3(This,pDesc) )
typedef struct DXGI_OUTPUT_DESC1
    {
    WCHAR DeviceName[ 32 ];
    RECT DesktopCoordinates;
    BOOL AttachedToDesktop;
    DXGI_MODE_ROTATION Rotation;
    HMONITOR Monitor;
    UINT BitsPerColor;
    DXGI_COLOR_SPACE_TYPE ColorSpace;
    FLOAT RedPrimary[ 2 ];
    FLOAT GreenPrimary[ 2 ];
    FLOAT BluePrimary[ 2 ];
    FLOAT WhitePoint[ 2 ];
    FLOAT MinLuminance;
    FLOAT MaxLuminance;
    FLOAT MaxFullFrameLuminance;
    } DXGI_OUTPUT_DESC1;
typedef
enum DXGI_HARDWARE_COMPOSITION_SUPPORT_FLAGS
    {
        DXGI_HARDWARE_COMPOSITION_SUPPORT_FLAG_FULLSCREEN = 1,
        DXGI_HARDWARE_COMPOSITION_SUPPORT_FLAG_WINDOWED = 2,
        DXGI_HARDWARE_COMPOSITION_SUPPORT_FLAG_CURSOR_STRETCHED = 4
    } DXGI_HARDWARE_COMPOSITION_SUPPORT_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( DXGI_HARDWARE_COMPOSITION_SUPPORT_FLAGS );
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_6_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_6_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIOutput6;
    typedef struct IDXGIOutput6Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIOutput6 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIOutput6 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIOutput6 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIOutput6 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIOutput6 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIOutput6 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIOutput6 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGIOutput6 * This,
            _Out_ DXGI_OUTPUT_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayModeList )(
            IDXGIOutput6 * This,
                       DXGI_FORMAT EnumFormat,
                       UINT Flags,
            _Inout_ UINT *pNumModes,
            _Out_writes_to_opt_(*pNumModes,*pNumModes) DXGI_MODE_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *FindClosestMatchingMode )(
            IDXGIOutput6 * This,
            _In_ const DXGI_MODE_DESC *pModeToMatch,
            _Out_ DXGI_MODE_DESC *pClosestMatch,
            _In_opt_ IUnknown *pConcernedDevice);
        HRESULT ( STDMETHODCALLTYPE *WaitForVBlank )(
            IDXGIOutput6 * This);
        HRESULT ( STDMETHODCALLTYPE *TakeOwnership )(
            IDXGIOutput6 * This,
            _In_ IUnknown *pDevice,
            BOOL Exclusive);
        void ( STDMETHODCALLTYPE *ReleaseOwnership )(
            IDXGIOutput6 * This);
        HRESULT ( STDMETHODCALLTYPE *GetGammaControlCapabilities )(
            IDXGIOutput6 * This,
            _Out_ DXGI_GAMMA_CONTROL_CAPABILITIES *pGammaCaps);
        HRESULT ( STDMETHODCALLTYPE *SetGammaControl )(
            IDXGIOutput6 * This,
            _In_ const DXGI_GAMMA_CONTROL *pArray);
        HRESULT ( STDMETHODCALLTYPE *GetGammaControl )(
            IDXGIOutput6 * This,
            _Out_ DXGI_GAMMA_CONTROL *pArray);
        HRESULT ( STDMETHODCALLTYPE *SetDisplaySurface )(
            IDXGIOutput6 * This,
            _In_ IDXGISurface *pScanoutSurface);
        HRESULT ( STDMETHODCALLTYPE *GetDisplaySurfaceData )(
            IDXGIOutput6 * This,
            _In_ IDXGISurface *pDestination);
        HRESULT ( STDMETHODCALLTYPE *GetFrameStatistics )(
            IDXGIOutput6 * This,
            _Out_ DXGI_FRAME_STATISTICS *pStats);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayModeList1 )(
            IDXGIOutput6 * This,
                       DXGI_FORMAT EnumFormat,
                       UINT Flags,
            _Inout_ UINT *pNumModes,
            _Out_writes_to_opt_(*pNumModes,*pNumModes) DXGI_MODE_DESC1 *pDesc);
        HRESULT ( STDMETHODCALLTYPE *FindClosestMatchingMode1 )(
            IDXGIOutput6 * This,
            _In_ const DXGI_MODE_DESC1 *pModeToMatch,
            _Out_ DXGI_MODE_DESC1 *pClosestMatch,
            _In_opt_ IUnknown *pConcernedDevice);
        HRESULT ( STDMETHODCALLTYPE *GetDisplaySurfaceData1 )(
            IDXGIOutput6 * This,
            _In_ IDXGIResource *pDestination);
        HRESULT ( STDMETHODCALLTYPE *DuplicateOutput )(
            IDXGIOutput6 * This,
            _In_ IUnknown *pDevice,
            _COM_Outptr_ IDXGIOutputDuplication **ppOutputDuplication);
        BOOL ( STDMETHODCALLTYPE *SupportsOverlays )(
            IDXGIOutput6 * This);
        HRESULT ( STDMETHODCALLTYPE *CheckOverlaySupport )(
            IDXGIOutput6 * This,
            _In_ DXGI_FORMAT EnumFormat,
            _In_ IUnknown *pConcernedDevice,
            _Out_ UINT *pFlags);
        HRESULT ( STDMETHODCALLTYPE *CheckOverlayColorSpaceSupport )(
            IDXGIOutput6 * This,
            _In_ DXGI_FORMAT Format,
            _In_ DXGI_COLOR_SPACE_TYPE ColorSpace,
            _In_ IUnknown *pConcernedDevice,
            _Out_ UINT *pFlags);
        HRESULT ( STDMETHODCALLTYPE *DuplicateOutput1 )(
            IDXGIOutput6 * This,
            _In_ IUnknown *pDevice,
                       UINT Flags,
            _In_ UINT SupportedFormatsCount,
            _In_reads_(SupportedFormatsCount) const DXGI_FORMAT *pSupportedFormats,
            _COM_Outptr_ IDXGIOutputDuplication **ppOutputDuplication);
        HRESULT ( STDMETHODCALLTYPE *GetDesc1 )(
            IDXGIOutput6 * This,
            _Out_ DXGI_OUTPUT_DESC1 *pDesc);
        HRESULT ( STDMETHODCALLTYPE *CheckHardwareCompositionSupport )(
            IDXGIOutput6 * This,
            _Out_ UINT *pFlags);
        END_INTERFACE
    } IDXGIOutput6Vtbl;
    interface IDXGIOutput6
    {
        CONST_VTBL struct IDXGIOutput6Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetDesc1(This,pDesc) )
    ( (This)->lpVtbl -> CheckHardwareCompositionSupport(This,pFlags) )
typedef
enum DXGI_GPU_PREFERENCE
    {
        DXGI_GPU_PREFERENCE_UNSPECIFIED = 0,
        DXGI_GPU_PREFERENCE_MINIMUM_POWER = ( DXGI_GPU_PREFERENCE_UNSPECIFIED + 1 ) ,
        DXGI_GPU_PREFERENCE_HIGH_PERFORMANCE = ( DXGI_GPU_PREFERENCE_MINIMUM_POWER + 1 )
    } DXGI_GPU_PREFERENCE;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_6_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_6_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIFactory6;
    typedef struct IDXGIFactory6Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIFactory6 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIFactory6 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIFactory6 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIFactory6 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIFactory6 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIFactory6 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIFactory6 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapters )(
            IDXGIFactory6 * This,
                       UINT Adapter,
            _COM_Outptr_ IDXGIAdapter **ppAdapter);
        HRESULT ( STDMETHODCALLTYPE *MakeWindowAssociation )(
            IDXGIFactory6 * This,
            HWND WindowHandle,
            UINT Flags);
        HRESULT ( STDMETHODCALLTYPE *GetWindowAssociation )(
            IDXGIFactory6 * This,
            _Out_ HWND *pWindowHandle);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChain )(
            IDXGIFactory6 * This,
            _In_ IUnknown *pDevice,
            _In_ DXGI_SWAP_CHAIN_DESC *pDesc,
            _COM_Outptr_ IDXGISwapChain **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *CreateSoftwareAdapter )(
            IDXGIFactory6 * This,
                       HMODULE Module,
            _COM_Outptr_ IDXGIAdapter **ppAdapter);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapters1 )(
            IDXGIFactory6 * This,
                       UINT Adapter,
            _COM_Outptr_ IDXGIAdapter1 **ppAdapter);
        BOOL ( STDMETHODCALLTYPE *IsCurrent )(
            IDXGIFactory6 * This);
        BOOL ( STDMETHODCALLTYPE *IsWindowedStereoEnabled )(
            IDXGIFactory6 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChainForHwnd )(
            IDXGIFactory6 * This,
            _In_ IUnknown *pDevice,
            _In_ HWND hWnd,
            _In_ const DXGI_SWAP_CHAIN_DESC1 *pDesc,
            _In_opt_ const DXGI_SWAP_CHAIN_FULLSCREEN_DESC *pFullscreenDesc,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGISwapChain1 **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChainForCoreWindow )(
            IDXGIFactory6 * This,
            _In_ IUnknown *pDevice,
            _In_ IUnknown *pWindow,
            _In_ const DXGI_SWAP_CHAIN_DESC1 *pDesc,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGISwapChain1 **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *GetSharedResourceAdapterLuid )(
            IDXGIFactory6 * This,
            _In_ HANDLE hResource,
            _Out_ LUID *pLuid);
        HRESULT ( STDMETHODCALLTYPE *RegisterStereoStatusWindow )(
            IDXGIFactory6 * This,
            _In_ HWND WindowHandle,
            _In_ UINT wMsg,
            _Out_ DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *RegisterStereoStatusEvent )(
            IDXGIFactory6 * This,
            _In_ HANDLE hEvent,
            _Out_ DWORD *pdwCookie);
        void ( STDMETHODCALLTYPE *UnregisterStereoStatus )(
            IDXGIFactory6 * This,
            _In_ DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *RegisterOcclusionStatusWindow )(
            IDXGIFactory6 * This,
            _In_ HWND WindowHandle,
            _In_ UINT wMsg,
            _Out_ DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *RegisterOcclusionStatusEvent )(
            IDXGIFactory6 * This,
            _In_ HANDLE hEvent,
            _Out_ DWORD *pdwCookie);
        void ( STDMETHODCALLTYPE *UnregisterOcclusionStatus )(
            IDXGIFactory6 * This,
            _In_ DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChainForComposition )(
            IDXGIFactory6 * This,
            _In_ IUnknown *pDevice,
            _In_ const DXGI_SWAP_CHAIN_DESC1 *pDesc,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGISwapChain1 **ppSwapChain);
        UINT ( STDMETHODCALLTYPE *GetCreationFlags )(
            IDXGIFactory6 * This);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapterByLuid )(
            IDXGIFactory6 * This,
            _In_ LUID AdapterLuid,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppvAdapter);
        HRESULT ( STDMETHODCALLTYPE *EnumWarpAdapter )(
            IDXGIFactory6 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppvAdapter);
        HRESULT ( STDMETHODCALLTYPE *CheckFeatureSupport )(
            IDXGIFactory6 * This,
            DXGI_FEATURE Feature,
            _Inout_updates_bytes_(FeatureSupportDataSize) void *pFeatureSupportData,
            UINT FeatureSupportDataSize);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapterByGpuPreference )(
            IDXGIFactory6 * This,
            _In_ UINT Adapter,
            _In_ DXGI_GPU_PREFERENCE GpuPreference,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppvAdapter);
        END_INTERFACE
    } IDXGIFactory6Vtbl;
    interface IDXGIFactory6
    {
        CONST_VTBL struct IDXGIFactory6Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> EnumAdapterByGpuPreference(This,Adapter,GpuPreference,riid,ppvAdapter) )
EXTERN_C const IID IID_IDXGIFactory7;
    typedef struct IDXGIFactory7Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIFactory7 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIFactory7 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIFactory7 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIFactory7 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIFactory7 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIFactory7 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIFactory7 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapters )(
            IDXGIFactory7 * This,
                       UINT Adapter,
            _COM_Outptr_ IDXGIAdapter **ppAdapter);
        HRESULT ( STDMETHODCALLTYPE *MakeWindowAssociation )(
            IDXGIFactory7 * This,
            HWND WindowHandle,
            UINT Flags);
        HRESULT ( STDMETHODCALLTYPE *GetWindowAssociation )(
            IDXGIFactory7 * This,
            _Out_ HWND *pWindowHandle);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChain )(
            IDXGIFactory7 * This,
            _In_ IUnknown *pDevice,
            _In_ DXGI_SWAP_CHAIN_DESC *pDesc,
            _COM_Outptr_ IDXGISwapChain **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *CreateSoftwareAdapter )(
            IDXGIFactory7 * This,
                       HMODULE Module,
            _COM_Outptr_ IDXGIAdapter **ppAdapter);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapters1 )(
            IDXGIFactory7 * This,
                       UINT Adapter,
            _COM_Outptr_ IDXGIAdapter1 **ppAdapter);
        BOOL ( STDMETHODCALLTYPE *IsCurrent )(
            IDXGIFactory7 * This);
        BOOL ( STDMETHODCALLTYPE *IsWindowedStereoEnabled )(
            IDXGIFactory7 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChainForHwnd )(
            IDXGIFactory7 * This,
            _In_ IUnknown *pDevice,
            _In_ HWND hWnd,
            _In_ const DXGI_SWAP_CHAIN_DESC1 *pDesc,
            _In_opt_ const DXGI_SWAP_CHAIN_FULLSCREEN_DESC *pFullscreenDesc,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGISwapChain1 **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChainForCoreWindow )(
            IDXGIFactory7 * This,
            _In_ IUnknown *pDevice,
            _In_ IUnknown *pWindow,
            _In_ const DXGI_SWAP_CHAIN_DESC1 *pDesc,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGISwapChain1 **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *GetSharedResourceAdapterLuid )(
            IDXGIFactory7 * This,
            _In_ HANDLE hResource,
            _Out_ LUID *pLuid);
        HRESULT ( STDMETHODCALLTYPE *RegisterStereoStatusWindow )(
            IDXGIFactory7 * This,
            _In_ HWND WindowHandle,
            _In_ UINT wMsg,
            _Out_ DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *RegisterStereoStatusEvent )(
            IDXGIFactory7 * This,
            _In_ HANDLE hEvent,
            _Out_ DWORD *pdwCookie);
        void ( STDMETHODCALLTYPE *UnregisterStereoStatus )(
            IDXGIFactory7 * This,
            _In_ DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *RegisterOcclusionStatusWindow )(
            IDXGIFactory7 * This,
            _In_ HWND WindowHandle,
            _In_ UINT wMsg,
            _Out_ DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *RegisterOcclusionStatusEvent )(
            IDXGIFactory7 * This,
            _In_ HANDLE hEvent,
            _Out_ DWORD *pdwCookie);
        void ( STDMETHODCALLTYPE *UnregisterOcclusionStatus )(
            IDXGIFactory7 * This,
            _In_ DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChainForComposition )(
            IDXGIFactory7 * This,
            _In_ IUnknown *pDevice,
            _In_ const DXGI_SWAP_CHAIN_DESC1 *pDesc,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGISwapChain1 **ppSwapChain);
        UINT ( STDMETHODCALLTYPE *GetCreationFlags )(
            IDXGIFactory7 * This);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapterByLuid )(
            IDXGIFactory7 * This,
            _In_ LUID AdapterLuid,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppvAdapter);
        HRESULT ( STDMETHODCALLTYPE *EnumWarpAdapter )(
            IDXGIFactory7 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppvAdapter);
        HRESULT ( STDMETHODCALLTYPE *CheckFeatureSupport )(
            IDXGIFactory7 * This,
            DXGI_FEATURE Feature,
            _Inout_updates_bytes_(FeatureSupportDataSize) void *pFeatureSupportData,
            UINT FeatureSupportDataSize);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapterByGpuPreference )(
            IDXGIFactory7 * This,
            _In_ UINT Adapter,
            _In_ DXGI_GPU_PREFERENCE GpuPreference,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppvAdapter);
        HRESULT ( STDMETHODCALLTYPE *RegisterAdaptersChangedEvent )(
            IDXGIFactory7 * This,
            _In_ HANDLE hEvent,
            _Out_ DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *UnregisterAdaptersChangedEvent )(
            IDXGIFactory7 * This,
            _In_ DWORD dwCookie);
        END_INTERFACE
    } IDXGIFactory7Vtbl;
    interface IDXGIFactory7
    {
        CONST_VTBL struct IDXGIFactory7Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> EnumAdapterByGpuPreference(This,Adapter,GpuPreference,riid,ppvAdapter) )
    ( (This)->lpVtbl -> RegisterAdaptersChangedEvent(This,hEvent,pdwCookie) )
    ( (This)->lpVtbl -> UnregisterAdaptersChangedEvent(This,dwCookie) )
#endif
#pragma endregion
DEFINE_GUID(IID_IDXGIAdapter4,0x3c8d99d1,0x4fbf,0x4181,0xa8,0x2c,0xaf,0x66,0xbf,0x7b,0xd2,0x4e);
DEFINE_GUID(IID_IDXGIOutput6,0x068346e8,0xaaec,0x4b84,0xad,0xd7,0x13,0x7f,0x51,0x3f,0x77,0xa1);
DEFINE_GUID(IID_IDXGIFactory6,0xc1b6694f,0xff09,0x44a9,0xb0,0x3c,0x77,0x90,0x0a,0x0a,0x1d,0x17);
DEFINE_GUID(IID_IDXGIFactory7,0xa4966eed,0x76db,0x44da,0x84,0xc1,0xee,0x9a,0x7a,0xfb,0x20,0xa8);
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_6_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_6_0000_0004_v0_0_s_ifspec;
}
