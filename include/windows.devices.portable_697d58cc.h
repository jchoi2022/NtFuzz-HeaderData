#pragma warning( disable: 4049 )
#include <rpc.h>
#include <rpcndr.h>
#error this stub requires an updated version of <rpcndr.h>
#include <windows.h>
#include <ole2.h>
       
       
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
       
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.h"
typedef interface __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics;
typedef interface __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;
typedef enum __x_ABI_CWindows_CDevices_CPortable_CServiceDeviceType __x_ABI_CWindows_CDevices_CPortable_CServiceDeviceType;
enum __x_ABI_CWindows_CDevices_CPortable_CServiceDeviceType
{
    ServiceDeviceType_CalendarService = 0,
    ServiceDeviceType_ContactsService = 1,
    ServiceDeviceType_DeviceStatusService = 2,
    ServiceDeviceType_NotesService = 3,
    ServiceDeviceType_RingtonesService = 4,
    ServiceDeviceType_SmsService = 5,
    ServiceDeviceType_TasksService = 6,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Portable_IServiceDeviceStatics[] = L"Windows.Devices.Portable.IServiceDeviceStatics";
typedef struct __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This,
                  __x_ABI_CWindows_CDevices_CPortable_CServiceDeviceType serviceType,
                           __RPC__deref_out_opt HSTRING * selector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromServiceId )(
        __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This,
                  GUID serviceId,
                           __RPC__deref_out_opt HSTRING * selector
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,serviceType,selector) )
    ( (This)->lpVtbl->GetDeviceSelectorFromServiceId(This,serviceId,selector) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Portable_IStorageDeviceStatics[] = L"Windows.Devices.Portable.IStorageDeviceStatics";
typedef struct __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromId )(
        __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * deviceRoot
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This,
                           __RPC__deref_out_opt HSTRING * selector
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromId(This,deviceId,deviceRoot) )
    ( (This)->lpVtbl->GetDeviceSelector(This,selector) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Portable_ServiceDevice[] = L"Windows.Devices.Portable.ServiceDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Portable_StorageDevice[] = L"Windows.Devices.Portable.StorageDevice";
       
       
#pragma clang diagnostic pop
