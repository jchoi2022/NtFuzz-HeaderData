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
#include "Windows.ApplicationModel.UserDataTasks.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskDataProviderConnection[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskDataProviderConnection";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_CreateOrUpdateTaskRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCreateOrUpdateTaskRequestEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CreateOrUpdateTaskRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SyncRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSyncManagerSyncRequestEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SyncRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SkipOccurrenceRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListSkipOccurrenceRequestEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SkipOccurrenceRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CompleteTaskRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListCompleteTaskRequestEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CompleteTaskRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DeleteTaskRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskDataProviderConnection_Windows__CApplicationModel__CUserDataTasks__CDataProvider__CUserDataTaskListDeleteTaskRequestEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DeleteTaskRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnectionVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_CreateOrUpdateTaskRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_CreateOrUpdateTaskRequested(This,token) )
    ( (This)->lpVtbl->add_SyncRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_SyncRequested(This,token) )
    ( (This)->lpVtbl->add_SkipOccurrenceRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_SkipOccurrenceRequested(This,token) )
    ( (This)->lpVtbl->add_CompleteTaskRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_CompleteTaskRequested(This,token) )
    ( (This)->lpVtbl->add_DeleteTaskRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_DeleteTaskRequested(This,token) )
    ( (This)->lpVtbl->Start(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskDataProviderTriggerDetails[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskDataProviderTriggerDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Connection )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderConnection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Connection(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskDataProviderTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCompleteTaskRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCompleteTaskRequest";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TaskListId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TaskId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This,
                  __RPC__in HSTRING completedTaskId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TaskListId(This,value) )
    ( (This)->lpVtbl->get_TaskId(This,value) )
    ( (This)->lpVtbl->ReportCompletedAsync(This,completedTaskId,result) )
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCompleteTaskRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCompleteTaskRequestEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCompleteTaskRequestEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCreateOrUpdateTaskRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCreateOrUpdateTaskRequest";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TaskListId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Task )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * createdOrUpdatedUserDataTask,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TaskListId(This,value) )
    ( (This)->lpVtbl->get_Task(This,value) )
    ( (This)->lpVtbl->ReportCompletedAsync(This,createdOrUpdatedUserDataTask,result) )
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCreateOrUpdateTaskRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCreateOrUpdateTaskRequestEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListCreateOrUpdateTaskRequestEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListDeleteTaskRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListDeleteTaskRequest";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TaskListId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TaskId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TaskListId(This,value) )
    ( (This)->lpVtbl->get_TaskId(This,value) )
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListDeleteTaskRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListDeleteTaskRequestEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListDeleteTaskRequestEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSkipOccurrenceRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSkipOccurrenceRequest";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TaskListId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TaskId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TaskListId(This,value) )
    ( (This)->lpVtbl->get_TaskId(This,value) )
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSkipOccurrenceRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSkipOccurrenceRequestEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSkipOccurrenceRequestEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSyncManagerSyncRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSyncManagerSyncRequest";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TaskListId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TaskListId(This,value) )
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSyncManagerSyncRequestEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CDataProvider_CIUserDataTaskListSyncManagerSyncRequestEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskDataProviderConnection[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderConnection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskDataProviderTriggerDetails[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCompleteTaskRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCompleteTaskRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCompleteTaskRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCompleteTaskRequestEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCreateOrUpdateTaskRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCreateOrUpdateTaskRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListCreateOrUpdateTaskRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCreateOrUpdateTaskRequestEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListDeleteTaskRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListDeleteTaskRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListDeleteTaskRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListDeleteTaskRequestEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSkipOccurrenceRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSkipOccurrenceRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSkipOccurrenceRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSkipOccurrenceRequestEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSyncManagerSyncRequest[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSyncManagerSyncRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_DataProvider_UserDataTaskListSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSyncManagerSyncRequestEventArgs";
       
       
#pragma clang diagnostic pop
