#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDXGIObject IDXGIObject;
typedef interface IDXGIDeviceSubObject IDXGIDeviceSubObject;
typedef interface IDXGIResource IDXGIResource;
typedef interface IDXGIKeyedMutex IDXGIKeyedMutex;
typedef interface IDXGISurface IDXGISurface;
typedef interface IDXGISurface1 IDXGISurface1;
typedef interface IDXGIAdapter IDXGIAdapter;
typedef interface IDXGIOutput IDXGIOutput;
typedef interface IDXGISwapChain IDXGISwapChain;
typedef interface IDXGIFactory IDXGIFactory;
typedef interface IDXGIDevice IDXGIDevice;
typedef interface IDXGIFactory1 IDXGIFactory1;
typedef interface IDXGIAdapter1 IDXGIAdapter1;
typedef interface IDXGIDevice1 IDXGIDevice1;
#include "oaidl.h"
#include "ocidl.h"
#include "dxgicommon.h"
#include "dxgitype.h"
extern "C"{
#include <winapifamily.h>
typedef UINT DXGI_USAGE;
typedef struct DXGI_FRAME_STATISTICS
    {
    UINT PresentCount;
    UINT PresentRefreshCount;
    UINT SyncRefreshCount;
    LARGE_INTEGER SyncQPCTime;
    LARGE_INTEGER SyncGPUTime;
    } DXGI_FRAME_STATISTICS;
typedef struct DXGI_MAPPED_RECT
    {
    INT Pitch;
    BYTE *pBits;
    } DXGI_MAPPED_RECT;
typedef struct _LUID
    {
    DWORD LowPart;
    LONG HighPart;
    } LUID;
typedef struct _LUID *PLUID;
typedef struct DXGI_ADAPTER_DESC
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
    } DXGI_ADAPTER_DESC;
typedef struct DXGI_OUTPUT_DESC
    {
    WCHAR DeviceName[ 32 ];
    RECT DesktopCoordinates;
    BOOL AttachedToDesktop;
    DXGI_MODE_ROTATION Rotation;
    HMONITOR Monitor;
    } DXGI_OUTPUT_DESC;
typedef struct DXGI_SHARED_RESOURCE
    {
    HANDLE Handle;
    } DXGI_SHARED_RESOURCE;
typedef
enum DXGI_RESIDENCY
    {
        DXGI_RESIDENCY_FULLY_RESIDENT = 1,
        DXGI_RESIDENCY_RESIDENT_IN_SHARED_MEMORY = 2,
        DXGI_RESIDENCY_EVICTED_TO_DISK = 3
    } DXGI_RESIDENCY;
typedef struct DXGI_SURFACE_DESC
    {
    UINT Width;
    UINT Height;
    DXGI_FORMAT Format;
    DXGI_SAMPLE_DESC SampleDesc;
    } DXGI_SURFACE_DESC;
typedef
enum DXGI_SWAP_EFFECT
    {
        DXGI_SWAP_EFFECT_DISCARD = 0,
        DXGI_SWAP_EFFECT_SEQUENTIAL = 1,
        DXGI_SWAP_EFFECT_FLIP_SEQUENTIAL = 3,
        DXGI_SWAP_EFFECT_FLIP_DISCARD = 4
    } DXGI_SWAP_EFFECT;
typedef
enum DXGI_SWAP_CHAIN_FLAG
    {
        DXGI_SWAP_CHAIN_FLAG_NONPREROTATED = 1,
        DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH = 2,
        DXGI_SWAP_CHAIN_FLAG_GDI_COMPATIBLE = 4,
        DXGI_SWAP_CHAIN_FLAG_RESTRICTED_CONTENT = 8,
        DXGI_SWAP_CHAIN_FLAG_RESTRICT_SHARED_RESOURCE_DRIVER = 16,
        DXGI_SWAP_CHAIN_FLAG_DISPLAY_ONLY = 32,
        DXGI_SWAP_CHAIN_FLAG_FRAME_LATENCY_WAITABLE_OBJECT = 64,
        DXGI_SWAP_CHAIN_FLAG_FOREGROUND_LAYER = 128,
        DXGI_SWAP_CHAIN_FLAG_FULLSCREEN_VIDEO = 256,
        DXGI_SWAP_CHAIN_FLAG_YUV_VIDEO = 512,
        DXGI_SWAP_CHAIN_FLAG_HW_PROTECTED = 1024,
        DXGI_SWAP_CHAIN_FLAG_ALLOW_TEARING = 2048,
        DXGI_SWAP_CHAIN_FLAG_RESTRICTED_TO_ALL_HOLOGRAPHIC_DISPLAYS = 4096
    } DXGI_SWAP_CHAIN_FLAG;
typedef struct DXGI_SWAP_CHAIN_DESC
    {
    DXGI_MODE_DESC BufferDesc;
    DXGI_SAMPLE_DESC SampleDesc;
    DXGI_USAGE BufferUsage;
    UINT BufferCount;
    HWND OutputWindow;
    BOOL Windowed;
    DXGI_SWAP_EFFECT SwapEffect;
    UINT Flags;
    } DXGI_SWAP_CHAIN_DESC;
extern RPC_IF_HANDLE __MIDL_itf_dxgi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIObject;
    typedef struct IDXGIObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIObject * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIObject * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIObject * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIObject * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIObject * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIObject * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        END_INTERFACE
    } IDXGIObjectVtbl;
    interface IDXGIObject
    {
        CONST_VTBL struct IDXGIObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
EXTERN_C const IID IID_IDXGIDeviceSubObject;
    typedef struct IDXGIDeviceSubObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIDeviceSubObject * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIDeviceSubObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIDeviceSubObject * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIDeviceSubObject * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIDeviceSubObject * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIDeviceSubObject * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIDeviceSubObject * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            IDXGIDeviceSubObject * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppDevice);
        END_INTERFACE
    } IDXGIDeviceSubObjectVtbl;
    interface IDXGIDeviceSubObject
    {
        CONST_VTBL struct IDXGIDeviceSubObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppDevice) )
EXTERN_C const IID IID_IDXGIResource;
    typedef struct IDXGIResourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIResource * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIResource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIResource * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIResource * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIResource * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIResource * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIResource * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            IDXGIResource * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetSharedHandle )(
            IDXGIResource * This,
            _Out_ HANDLE *pSharedHandle);
        HRESULT ( STDMETHODCALLTYPE *GetUsage )(
            IDXGIResource * This,
                        DXGI_USAGE *pUsage);
        HRESULT ( STDMETHODCALLTYPE *SetEvictionPriority )(
            IDXGIResource * This,
                       UINT EvictionPriority);
        HRESULT ( STDMETHODCALLTYPE *GetEvictionPriority )(
            IDXGIResource * This,
            _Out_ UINT *pEvictionPriority);
        END_INTERFACE
    } IDXGIResourceVtbl;
    interface IDXGIResource
    {
        CONST_VTBL struct IDXGIResourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppDevice) )
    ( (This)->lpVtbl -> GetSharedHandle(This,pSharedHandle) )
    ( (This)->lpVtbl -> GetUsage(This,pUsage) )
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) )
    ( (This)->lpVtbl -> GetEvictionPriority(This,pEvictionPriority) )
EXTERN_C const IID IID_IDXGIKeyedMutex;
    typedef struct IDXGIKeyedMutexVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIKeyedMutex * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIKeyedMutex * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIKeyedMutex * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIKeyedMutex * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIKeyedMutex * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIKeyedMutex * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIKeyedMutex * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            IDXGIKeyedMutex * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *AcquireSync )(
            IDXGIKeyedMutex * This,
                       UINT64 Key,
                       DWORD dwMilliseconds);
        HRESULT ( STDMETHODCALLTYPE *ReleaseSync )(
            IDXGIKeyedMutex * This,
                       UINT64 Key);
        END_INTERFACE
    } IDXGIKeyedMutexVtbl;
    interface IDXGIKeyedMutex
    {
        CONST_VTBL struct IDXGIKeyedMutexVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppDevice) )
    ( (This)->lpVtbl -> AcquireSync(This,Key,dwMilliseconds) )
    ( (This)->lpVtbl -> ReleaseSync(This,Key) )
extern RPC_IF_HANDLE __MIDL_itf_dxgi_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGISurface;
    typedef struct IDXGISurfaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGISurface * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGISurface * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGISurface * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGISurface * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGISurface * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGISurface * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGISurface * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            IDXGISurface * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGISurface * This,
            _Out_ DXGI_SURFACE_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *Map )(
            IDXGISurface * This,
            _Out_ DXGI_MAPPED_RECT *pLockedRect,
                       UINT MapFlags);
        HRESULT ( STDMETHODCALLTYPE *Unmap )(
            IDXGISurface * This);
        END_INTERFACE
    } IDXGISurfaceVtbl;
    interface IDXGISurface
    {
        CONST_VTBL struct IDXGISurfaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppDevice) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
    ( (This)->lpVtbl -> Map(This,pLockedRect,MapFlags) )
    ( (This)->lpVtbl -> Unmap(This) )
EXTERN_C const IID IID_IDXGISurface1;
    typedef struct IDXGISurface1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGISurface1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGISurface1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGISurface1 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGISurface1 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGISurface1 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGISurface1 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGISurface1 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            IDXGISurface1 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGISurface1 * This,
            _Out_ DXGI_SURFACE_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *Map )(
            IDXGISurface1 * This,
            _Out_ DXGI_MAPPED_RECT *pLockedRect,
                       UINT MapFlags);
        HRESULT ( STDMETHODCALLTYPE *Unmap )(
            IDXGISurface1 * This);
        HRESULT ( STDMETHODCALLTYPE *GetDC )(
            IDXGISurface1 * This,
                       BOOL Discard,
            _Out_ HDC *phdc);
        HRESULT ( STDMETHODCALLTYPE *ReleaseDC )(
            IDXGISurface1 * This,
            _In_opt_ RECT *pDirtyRect);
        END_INTERFACE
    } IDXGISurface1Vtbl;
    interface IDXGISurface1
    {
        CONST_VTBL struct IDXGISurface1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppDevice) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
    ( (This)->lpVtbl -> Map(This,pLockedRect,MapFlags) )
    ( (This)->lpVtbl -> Unmap(This) )
    ( (This)->lpVtbl -> GetDC(This,Discard,phdc) )
    ( (This)->lpVtbl -> ReleaseDC(This,pDirtyRect) )
extern RPC_IF_HANDLE __MIDL_itf_dxgi_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIAdapter;
    typedef struct IDXGIAdapterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIAdapter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIAdapter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIAdapter * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIAdapter * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIAdapter * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIAdapter * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIAdapter * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *EnumOutputs )(
            IDXGIAdapter * This,
                       UINT Output,
            _COM_Outptr_ IDXGIOutput **ppOutput);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGIAdapter * This,
            _Out_ DXGI_ADAPTER_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *CheckInterfaceSupport )(
            IDXGIAdapter * This,
            _In_ REFGUID InterfaceName,
            _Out_ LARGE_INTEGER *pUMDVersion);
        END_INTERFACE
    } IDXGIAdapterVtbl;
    interface IDXGIAdapter
    {
        CONST_VTBL struct IDXGIAdapterVtbl *lpVtbl;
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
extern RPC_IF_HANDLE __MIDL_itf_dxgi_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIOutput;
    typedef struct IDXGIOutputVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIOutput * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIOutput * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIOutput * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIOutput * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIOutput * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIOutput * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIOutput * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGIOutput * This,
            _Out_ DXGI_OUTPUT_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayModeList )(
            IDXGIOutput * This,
                       DXGI_FORMAT EnumFormat,
                       UINT Flags,
            _Inout_ UINT *pNumModes,
            _Out_writes_to_opt_(*pNumModes,*pNumModes) DXGI_MODE_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *FindClosestMatchingMode )(
            IDXGIOutput * This,
            _In_ const DXGI_MODE_DESC *pModeToMatch,
            _Out_ DXGI_MODE_DESC *pClosestMatch,
            _In_opt_ IUnknown *pConcernedDevice);
        HRESULT ( STDMETHODCALLTYPE *WaitForVBlank )(
            IDXGIOutput * This);
        HRESULT ( STDMETHODCALLTYPE *TakeOwnership )(
            IDXGIOutput * This,
            _In_ IUnknown *pDevice,
            BOOL Exclusive);
        void ( STDMETHODCALLTYPE *ReleaseOwnership )(
            IDXGIOutput * This);
        HRESULT ( STDMETHODCALLTYPE *GetGammaControlCapabilities )(
            IDXGIOutput * This,
            _Out_ DXGI_GAMMA_CONTROL_CAPABILITIES *pGammaCaps);
        HRESULT ( STDMETHODCALLTYPE *SetGammaControl )(
            IDXGIOutput * This,
            _In_ const DXGI_GAMMA_CONTROL *pArray);
        HRESULT ( STDMETHODCALLTYPE *GetGammaControl )(
            IDXGIOutput * This,
            _Out_ DXGI_GAMMA_CONTROL *pArray);
        HRESULT ( STDMETHODCALLTYPE *SetDisplaySurface )(
            IDXGIOutput * This,
            _In_ IDXGISurface *pScanoutSurface);
        HRESULT ( STDMETHODCALLTYPE *GetDisplaySurfaceData )(
            IDXGIOutput * This,
            _In_ IDXGISurface *pDestination);
        HRESULT ( STDMETHODCALLTYPE *GetFrameStatistics )(
            IDXGIOutput * This,
            _Out_ DXGI_FRAME_STATISTICS *pStats);
        END_INTERFACE
    } IDXGIOutputVtbl;
    interface IDXGIOutput
    {
        CONST_VTBL struct IDXGIOutputVtbl *lpVtbl;
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
extern RPC_IF_HANDLE __MIDL_itf_dxgi_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGISwapChain;
    typedef struct IDXGISwapChainVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGISwapChain * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGISwapChain * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGISwapChain * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGISwapChain * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGISwapChain * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGISwapChain * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGISwapChain * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            IDXGISwapChain * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *Present )(
            IDXGISwapChain * This,
                       UINT SyncInterval,
                       UINT Flags);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            IDXGISwapChain * This,
                       UINT Buffer,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppSurface);
        HRESULT ( STDMETHODCALLTYPE *SetFullscreenState )(
            IDXGISwapChain * This,
                       BOOL Fullscreen,
            _In_opt_ IDXGIOutput *pTarget);
        HRESULT ( STDMETHODCALLTYPE *GetFullscreenState )(
            IDXGISwapChain * This,
            _Out_opt_ BOOL *pFullscreen,
            _COM_Outptr_opt_result_maybenull_ IDXGIOutput **ppTarget);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGISwapChain * This,
            _Out_ DXGI_SWAP_CHAIN_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *ResizeBuffers )(
            IDXGISwapChain * This,
                       UINT BufferCount,
                       UINT Width,
                       UINT Height,
                       DXGI_FORMAT NewFormat,
                       UINT SwapChainFlags);
        HRESULT ( STDMETHODCALLTYPE *ResizeTarget )(
            IDXGISwapChain * This,
            _In_ const DXGI_MODE_DESC *pNewTargetParameters);
        HRESULT ( STDMETHODCALLTYPE *GetContainingOutput )(
            IDXGISwapChain * This,
            _COM_Outptr_ IDXGIOutput **ppOutput);
        HRESULT ( STDMETHODCALLTYPE *GetFrameStatistics )(
            IDXGISwapChain * This,
            _Out_ DXGI_FRAME_STATISTICS *pStats);
        HRESULT ( STDMETHODCALLTYPE *GetLastPresentCount )(
            IDXGISwapChain * This,
            _Out_ UINT *pLastPresentCount);
        END_INTERFACE
    } IDXGISwapChainVtbl;
    interface IDXGISwapChain
    {
        CONST_VTBL struct IDXGISwapChainVtbl *lpVtbl;
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
extern RPC_IF_HANDLE __MIDL_itf_dxgi_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIFactory;
    typedef struct IDXGIFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIFactory * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIFactory * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIFactory * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIFactory * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIFactory * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapters )(
            IDXGIFactory * This,
                       UINT Adapter,
            _COM_Outptr_ IDXGIAdapter **ppAdapter);
        HRESULT ( STDMETHODCALLTYPE *MakeWindowAssociation )(
            IDXGIFactory * This,
            HWND WindowHandle,
            UINT Flags);
        HRESULT ( STDMETHODCALLTYPE *GetWindowAssociation )(
            IDXGIFactory * This,
            _Out_ HWND *pWindowHandle);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChain )(
            IDXGIFactory * This,
            _In_ IUnknown *pDevice,
            _In_ DXGI_SWAP_CHAIN_DESC *pDesc,
            _COM_Outptr_ IDXGISwapChain **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *CreateSoftwareAdapter )(
            IDXGIFactory * This,
                       HMODULE Module,
            _COM_Outptr_ IDXGIAdapter **ppAdapter);
        END_INTERFACE
    } IDXGIFactoryVtbl;
    interface IDXGIFactory
    {
        CONST_VTBL struct IDXGIFactoryVtbl *lpVtbl;
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
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
HRESULT WINAPI CreateDXGIFactory(REFIID riid, _COM_Outptr_ void **ppFactory);
#endif
#pragma endregion
HRESULT WINAPI CreateDXGIFactory1(REFIID riid, _COM_Outptr_ void **ppFactory);
extern RPC_IF_HANDLE __MIDL_itf_dxgi_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi_0000_0010_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIDevice;
    typedef struct IDXGIDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIDevice * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIDevice * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIDevice * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIDevice * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIDevice * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIDevice * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetAdapter )(
            IDXGIDevice * This,
            _COM_Outptr_ IDXGIAdapter **pAdapter);
        HRESULT ( STDMETHODCALLTYPE *CreateSurface )(
            IDXGIDevice * This,
            _In_ const DXGI_SURFACE_DESC *pDesc,
                       UINT NumSurfaces,
                       DXGI_USAGE Usage,
            _In_opt_ const DXGI_SHARED_RESOURCE *pSharedResource,
            _COM_Outptr_ IDXGISurface **ppSurface);
        HRESULT ( STDMETHODCALLTYPE *QueryResourceResidency )(
            IDXGIDevice * This,
            _In_reads_(NumResources) IUnknown *const *ppResources,
            _Out_writes_(NumResources) DXGI_RESIDENCY *pResidencyStatus,
                       UINT NumResources);
        HRESULT ( STDMETHODCALLTYPE *SetGPUThreadPriority )(
            IDXGIDevice * This,
                       INT Priority);
        HRESULT ( STDMETHODCALLTYPE *GetGPUThreadPriority )(
            IDXGIDevice * This,
            _Out_ INT *pPriority);
        END_INTERFACE
    } IDXGIDeviceVtbl;
    interface IDXGIDevice
    {
        CONST_VTBL struct IDXGIDeviceVtbl *lpVtbl;
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
typedef
enum DXGI_ADAPTER_FLAG
    {
        DXGI_ADAPTER_FLAG_NONE = 0,
        DXGI_ADAPTER_FLAG_REMOTE = 1,
        DXGI_ADAPTER_FLAG_SOFTWARE = 2,
        DXGI_ADAPTER_FLAG_FORCE_DWORD = 0xffffffff
    } DXGI_ADAPTER_FLAG;
typedef struct DXGI_ADAPTER_DESC1
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
    UINT Flags;
    } DXGI_ADAPTER_DESC1;
typedef struct DXGI_DISPLAY_COLOR_SPACE
    {
    FLOAT PrimaryCoordinates[ 8 ][ 2 ];
    FLOAT WhitePoints[ 16 ][ 2 ];
    } DXGI_DISPLAY_COLOR_SPACE;
extern RPC_IF_HANDLE __MIDL_itf_dxgi_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi_0000_0011_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIFactory1;
    typedef struct IDXGIFactory1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIFactory1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIFactory1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIFactory1 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIFactory1 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIFactory1 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIFactory1 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIFactory1 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapters )(
            IDXGIFactory1 * This,
                       UINT Adapter,
            _COM_Outptr_ IDXGIAdapter **ppAdapter);
        HRESULT ( STDMETHODCALLTYPE *MakeWindowAssociation )(
            IDXGIFactory1 * This,
            HWND WindowHandle,
            UINT Flags);
        HRESULT ( STDMETHODCALLTYPE *GetWindowAssociation )(
            IDXGIFactory1 * This,
            _Out_ HWND *pWindowHandle);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChain )(
            IDXGIFactory1 * This,
            _In_ IUnknown *pDevice,
            _In_ DXGI_SWAP_CHAIN_DESC *pDesc,
            _COM_Outptr_ IDXGISwapChain **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *CreateSoftwareAdapter )(
            IDXGIFactory1 * This,
                       HMODULE Module,
            _COM_Outptr_ IDXGIAdapter **ppAdapter);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapters1 )(
            IDXGIFactory1 * This,
                       UINT Adapter,
            _COM_Outptr_ IDXGIAdapter1 **ppAdapter);
        BOOL ( STDMETHODCALLTYPE *IsCurrent )(
            IDXGIFactory1 * This);
        END_INTERFACE
    } IDXGIFactory1Vtbl;
    interface IDXGIFactory1
    {
        CONST_VTBL struct IDXGIFactory1Vtbl *lpVtbl;
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
EXTERN_C const IID IID_IDXGIAdapter1;
    typedef struct IDXGIAdapter1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIAdapter1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIAdapter1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIAdapter1 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIAdapter1 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIAdapter1 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIAdapter1 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIAdapter1 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *EnumOutputs )(
            IDXGIAdapter1 * This,
                       UINT Output,
            _COM_Outptr_ IDXGIOutput **ppOutput);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGIAdapter1 * This,
            _Out_ DXGI_ADAPTER_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *CheckInterfaceSupport )(
            IDXGIAdapter1 * This,
            _In_ REFGUID InterfaceName,
            _Out_ LARGE_INTEGER *pUMDVersion);
        HRESULT ( STDMETHODCALLTYPE *GetDesc1 )(
            IDXGIAdapter1 * This,
            _Out_ DXGI_ADAPTER_DESC1 *pDesc);
        END_INTERFACE
    } IDXGIAdapter1Vtbl;
    interface IDXGIAdapter1
    {
        CONST_VTBL struct IDXGIAdapter1Vtbl *lpVtbl;
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
EXTERN_C const IID IID_IDXGIDevice1;
    typedef struct IDXGIDevice1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIDevice1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIDevice1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIDevice1 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIDevice1 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIDevice1 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIDevice1 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIDevice1 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetAdapter )(
            IDXGIDevice1 * This,
            _COM_Outptr_ IDXGIAdapter **pAdapter);
        HRESULT ( STDMETHODCALLTYPE *CreateSurface )(
            IDXGIDevice1 * This,
            _In_ const DXGI_SURFACE_DESC *pDesc,
                       UINT NumSurfaces,
                       DXGI_USAGE Usage,
            _In_opt_ const DXGI_SHARED_RESOURCE *pSharedResource,
            _COM_Outptr_ IDXGISurface **ppSurface);
        HRESULT ( STDMETHODCALLTYPE *QueryResourceResidency )(
            IDXGIDevice1 * This,
            _In_reads_(NumResources) IUnknown *const *ppResources,
            _Out_writes_(NumResources) DXGI_RESIDENCY *pResidencyStatus,
                       UINT NumResources);
        HRESULT ( STDMETHODCALLTYPE *SetGPUThreadPriority )(
            IDXGIDevice1 * This,
                       INT Priority);
        HRESULT ( STDMETHODCALLTYPE *GetGPUThreadPriority )(
            IDXGIDevice1 * This,
            _Out_ INT *pPriority);
        HRESULT ( STDMETHODCALLTYPE *SetMaximumFrameLatency )(
            IDXGIDevice1 * This,
                       UINT MaxLatency);
        HRESULT ( STDMETHODCALLTYPE *GetMaximumFrameLatency )(
            IDXGIDevice1 * This,
            _Out_ UINT *pMaxLatency);
        END_INTERFACE
    } IDXGIDevice1Vtbl;
    interface IDXGIDevice1
    {
        CONST_VTBL struct IDXGIDevice1Vtbl *lpVtbl;
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
DEFINE_GUID(IID_IDXGIObject,0xaec22fb8,0x76f3,0x4639,0x9b,0xe0,0x28,0xeb,0x43,0xa6,0x7a,0x2e);
DEFINE_GUID(IID_IDXGIDeviceSubObject,0x3d3e0379,0xf9de,0x4d58,0xbb,0x6c,0x18,0xd6,0x29,0x92,0xf1,0xa6);
DEFINE_GUID(IID_IDXGIResource,0x035f3ab4,0x482e,0x4e50,0xb4,0x1f,0x8a,0x7f,0x8b,0xd8,0x96,0x0b);
DEFINE_GUID(IID_IDXGIKeyedMutex,0x9d8e1289,0xd7b3,0x465f,0x81,0x26,0x25,0x0e,0x34,0x9a,0xf8,0x5d);
DEFINE_GUID(IID_IDXGISurface,0xcafcb56c,0x6ac3,0x4889,0xbf,0x47,0x9e,0x23,0xbb,0xd2,0x60,0xec);
DEFINE_GUID(IID_IDXGISurface1,0x4AE63092,0x6327,0x4c1b,0x80,0xAE,0xBF,0xE1,0x2E,0xA3,0x2B,0x86);
DEFINE_GUID(IID_IDXGIAdapter,0x2411e7e1,0x12ac,0x4ccf,0xbd,0x14,0x97,0x98,0xe8,0x53,0x4d,0xc0);
DEFINE_GUID(IID_IDXGIOutput,0xae02eedb,0xc735,0x4690,0x8d,0x52,0x5a,0x8d,0xc2,0x02,0x13,0xaa);
DEFINE_GUID(IID_IDXGISwapChain,0x310d36a0,0xd2e7,0x4c0a,0xaa,0x04,0x6a,0x9d,0x23,0xb8,0x88,0x6a);
DEFINE_GUID(IID_IDXGIFactory,0x7b7166ec,0x21c7,0x44ae,0xb2,0x1a,0xc9,0xae,0x32,0x1a,0xe3,0x69);
DEFINE_GUID(IID_IDXGIDevice,0x54ec77fa,0x1377,0x44e6,0x8c,0x32,0x88,0xfd,0x5f,0x44,0xc8,0x4c);
DEFINE_GUID(IID_IDXGIFactory1,0x770aae78,0xf26f,0x4dba,0xa8,0x29,0x25,0x3c,0x83,0xd1,0xb3,0x87);
DEFINE_GUID(IID_IDXGIAdapter1,0x29038f61,0x3839,0x4626,0x91,0xfd,0x08,0x68,0x79,0x01,0x1a,0x05);
DEFINE_GUID(IID_IDXGIDevice1,0x77db970f,0x6276,0x48ba,0xba,0x28,0x07,0x01,0x43,0xb4,0x39,0x2c);
extern RPC_IF_HANDLE __MIDL_itf_dxgi_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi_0000_0014_v0_0_s_ifspec;
}
