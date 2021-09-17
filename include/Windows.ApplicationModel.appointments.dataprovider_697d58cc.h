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
#include "Windows.ApplicationModel.Appointments.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails;
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
struct __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __FIReference_1_Windows__CFoundation__CDateTime __FIReference_1_Windows__CFoundation__CDateTime;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CDateTime;
typedef struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CDateTime *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CDateTimeVtbl;
interface __FIReference_1_Windows__CFoundation__CDateTime
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;
EXTERN_C const IID IID___FIIterator_1_HSTRING;
typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out HSTRING *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;
interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;
EXTERN_C const IID IID___FIIterable_1_HSTRING;
typedef struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt __FIIterator_1_HSTRING **first);
    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;
interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIVectorView_1_HSTRING;
typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                                    unsigned int index,
                                                             __RPC__out HSTRING *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_HSTRING * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       HSTRING item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;
interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee;
typedef interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;
typedef struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;
typedef struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                       __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment;
typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCancelMeetingRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCancelMeetingRequest";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppointmentCalendarLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppointmentLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppointmentOriginalStartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Comment )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NotifyInvitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppointmentCalendarLocalId(This,value) )
    ( (This)->lpVtbl->get_AppointmentLocalId(This,value) )
    ( (This)->lpVtbl->get_AppointmentOriginalStartTime(This,value) )
    ( (This)->lpVtbl->get_Subject(This,value) )
    ( (This)->lpVtbl->get_Comment(This,value) )
    ( (This)->lpVtbl->get_NotifyInvitees(This,value) )
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCancelMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCancelMeetingRequestEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCreateOrUpdateAppointmentRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCreateOrUpdateAppointmentRequest";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppointmentCalendarLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Appointment )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NotifyInvitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChangedProperties )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * createdOrUpdatedAppointment,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppointmentCalendarLocalId(This,value) )
    ( (This)->lpVtbl->get_Appointment(This,value) )
    ( (This)->lpVtbl->get_NotifyInvitees(This,value) )
    ( (This)->lpVtbl->get_ChangedProperties(This,value) )
    ( (This)->lpVtbl->ReportCompletedAsync(This,createdOrUpdatedAppointment,result) )
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarForwardMeetingRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarForwardMeetingRequest";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppointmentCalendarLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppointmentLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppointmentOriginalStartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Invitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ForwardHeader )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Comment )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppointmentCalendarLocalId(This,value) )
    ( (This)->lpVtbl->get_AppointmentLocalId(This,value) )
    ( (This)->lpVtbl->get_AppointmentOriginalStartTime(This,value) )
    ( (This)->lpVtbl->get_Invitees(This,value) )
    ( (This)->lpVtbl->get_Subject(This,value) )
    ( (This)->lpVtbl->get_ForwardHeader(This,value) )
    ( (This)->lpVtbl->get_Comment(This,value) )
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarForwardMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarForwardMeetingRequestEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarProposeNewTimeForMeetingRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarProposeNewTimeForMeetingRequest";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppointmentCalendarLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppointmentLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppointmentOriginalStartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewStartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewDuration )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Comment )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppointmentCalendarLocalId(This,value) )
    ( (This)->lpVtbl->get_AppointmentLocalId(This,value) )
    ( (This)->lpVtbl->get_AppointmentOriginalStartTime(This,value) )
    ( (This)->lpVtbl->get_NewStartTime(This,value) )
    ( (This)->lpVtbl->get_NewDuration(This,value) )
    ( (This)->lpVtbl->get_Subject(This,value) )
    ( (This)->lpVtbl->get_Comment(This,value) )
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarSyncManagerSyncRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarSyncManagerSyncRequest";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppointmentCalendarLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppointmentCalendarLocalId(This,value) )
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarSyncManagerSyncRequestEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarUpdateMeetingResponseRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarUpdateMeetingResponseRequest";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppointmentCalendarLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppointmentLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppointmentOriginalStartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Response )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse * response
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Comment )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SendUpdate )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppointmentCalendarLocalId(This,value) )
    ( (This)->lpVtbl->get_AppointmentLocalId(This,value) )
    ( (This)->lpVtbl->get_AppointmentOriginalStartTime(This,value) )
    ( (This)->lpVtbl->get_Response(This,response) )
    ( (This)->lpVtbl->get_Subject(This,value) )
    ( (This)->lpVtbl->get_Comment(This,value) )
    ( (This)->lpVtbl->get_SendUpdate(This,value) )
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarUpdateMeetingResponseRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarUpdateMeetingResponseRequestEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentDataProviderConnection[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentDataProviderConnection";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_SyncRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SyncRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CreateOrUpdateAppointmentRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CreateOrUpdateAppointmentRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CancelMeetingRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CancelMeetingRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ForwardMeetingRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ForwardMeetingRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ProposeNewTimeForMeetingRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ProposeNewTimeForMeetingRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_UpdateMeetingResponseRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UpdateMeetingResponseRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnectionVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_SyncRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_SyncRequested(This,token) )
    ( (This)->lpVtbl->add_CreateOrUpdateAppointmentRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_CreateOrUpdateAppointmentRequested(This,token) )
    ( (This)->lpVtbl->add_CancelMeetingRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_CancelMeetingRequested(This,token) )
    ( (This)->lpVtbl->add_ForwardMeetingRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_ForwardMeetingRequested(This,token) )
    ( (This)->lpVtbl->add_ProposeNewTimeForMeetingRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_ProposeNewTimeForMeetingRequested(This,token) )
    ( (This)->lpVtbl->add_UpdateMeetingResponseRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_UpdateMeetingResponseRequested(This,token) )
    ( (This)->lpVtbl->Start(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentDataProviderTriggerDetails[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentDataProviderTriggerDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Connection )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Connection(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCancelMeetingRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCancelMeetingRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCancelMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCancelMeetingRequestEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCreateOrUpdateAppointmentRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCreateOrUpdateAppointmentRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarForwardMeetingRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarForwardMeetingRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarForwardMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarForwardMeetingRequestEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarProposeNewTimeForMeetingRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarProposeNewTimeForMeetingRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarSyncManagerSyncRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarSyncManagerSyncRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarSyncManagerSyncRequestEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarUpdateMeetingResponseRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarUpdateMeetingResponseRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarUpdateMeetingResponseRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarUpdateMeetingResponseRequestEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentDataProviderConnection[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderConnection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentDataProviderTriggerDetails[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderTriggerDetails";
       
       
#pragma clang diagnostic pop
