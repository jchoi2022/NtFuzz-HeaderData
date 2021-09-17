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
typedef interface __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails;
typedef interface __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Background_IDeviceServicingDetails[] = L"Windows.Devices.Background.IDeviceServicingDetails";
typedef struct __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
        __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpectedDuration )(
        __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetailsVtbl;
interface __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_Arguments(This,value) )
    ( (This)->lpVtbl->get_ExpectedDuration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Background_IDeviceUseDetails[] = L"Windows.Devices.Background.IDeviceUseDetails";
typedef struct __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
        __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetailsVtbl;
interface __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_Arguments(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Background_DeviceServicingDetails[] = L"Windows.Devices.Background.DeviceServicingDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Background_DeviceUseDetails[] = L"Windows.Devices.Background.DeviceUseDetails";
       
       
#pragma clang diagnostic pop
