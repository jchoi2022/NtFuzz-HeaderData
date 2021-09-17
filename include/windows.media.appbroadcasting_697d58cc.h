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
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor;
typedef interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus;
typedef interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails;
typedef interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI;
typedef interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics;
typedef interface __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppBroadcasting_IAppBroadcastingMonitor[] = L"Windows.Media.AppBroadcasting.IAppBroadcastingMonitor";
typedef struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsCurrentAppBroadcasting )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_IsCurrentAppBroadcastingChanged )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_IsCurrentAppBroadcastingChanged )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitorVtbl;
interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsCurrentAppBroadcasting(This,value) )
    ( (This)->lpVtbl->add_IsCurrentAppBroadcastingChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_IsCurrentAppBroadcastingChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppBroadcasting_IAppBroadcastingStatus[] = L"Windows.Media.AppBroadcasting.IAppBroadcastingStatus";
typedef struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanStartBroadcast )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Details )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusVtbl;
interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanStartBroadcast(This,value) )
    ( (This)->lpVtbl->get_Details(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppBroadcasting_IAppBroadcastingStatusDetails[] = L"Windows.Media.AppBroadcasting.IAppBroadcastingStatusDetails";
typedef struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsAnyAppBroadcasting )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCaptureResourceUnavailable )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsGameStreamInProgress )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsGpuConstrained )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAppInactive )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsBlockedForApp )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDisabledByUser )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDisabledBySystem )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetailsVtbl;
interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsAnyAppBroadcasting(This,value) )
    ( (This)->lpVtbl->get_IsCaptureResourceUnavailable(This,value) )
    ( (This)->lpVtbl->get_IsGameStreamInProgress(This,value) )
    ( (This)->lpVtbl->get_IsGpuConstrained(This,value) )
    ( (This)->lpVtbl->get_IsAppInactive(This,value) )
    ( (This)->lpVtbl->get_IsBlockedForApp(This,value) )
    ( (This)->lpVtbl->get_IsDisabledByUser(This,value) )
    ( (This)->lpVtbl->get_IsDisabledBySystem(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppBroadcasting_IAppBroadcastingUI[] = L"Windows.Media.AppBroadcasting.IAppBroadcastingUI";
typedef struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStatus )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ShowBroadcastUI )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIVtbl;
interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetStatus(This,result) )
    ( (This)->lpVtbl->ShowBroadcastUI(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppBroadcasting_IAppBroadcastingUIStatics[] = L"Windows.Media.AppBroadcasting.IAppBroadcastingUIStatics";
typedef struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppBroadcasting_AppBroadcastingMonitor[] = L"Windows.Media.AppBroadcasting.AppBroadcastingMonitor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppBroadcasting_AppBroadcastingStatus[] = L"Windows.Media.AppBroadcasting.AppBroadcastingStatus";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppBroadcasting_AppBroadcastingStatusDetails[] = L"Windows.Media.AppBroadcasting.AppBroadcastingStatusDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppBroadcasting_AppBroadcastingUI[] = L"Windows.Media.AppBroadcasting.AppBroadcastingUI";
       
       
#pragma clang diagnostic pop
