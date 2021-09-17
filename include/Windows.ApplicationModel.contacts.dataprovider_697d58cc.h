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
#include "Windows.ApplicationModel.Contacts.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContact __x_ABI_CWindows_CApplicationModel_CContacts_CIContact;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactBatchStatus __x_ABI_CWindows_CApplicationModel_CContacts_CContactBatchStatus;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderConnection";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_SyncRequested )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListSyncManagerSyncRequestEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SyncRequested )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ServerSearchReadBatchRequested )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListServerSearchReadBatchRequestEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ServerSearchReadBatchRequested )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnectionVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_SyncRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_SyncRequested(This,token) )
    ( (This)->lpVtbl->add_ServerSearchReadBatchRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_ServerSearchReadBatchRequested(This,token) )
    ( (This)->lpVtbl->Start(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection2[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderConnection2";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_CreateOrUpdateContactRequested )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListCreateOrUpdateContactRequestEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CreateOrUpdateContactRequested )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DeleteContactRequested )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CDataProvider__CContactDataProviderConnection_Windows__CApplicationModel__CContacts__CDataProvider__CContactListDeleteContactRequestEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DeleteContactRequested )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_CreateOrUpdateContactRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_CreateOrUpdateContactRequested(This,token) )
    ( (This)->lpVtbl->add_DeleteContactRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_DeleteContactRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderTriggerDetails[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactDataProviderTriggerDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Connection )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderConnection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Connection(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactDataProviderTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListCreateOrUpdateContactRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListCreateOrUpdateContactRequest";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContactListId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * createdOrUpdatedContact,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContactListId(This,value) )
    ( (This)->lpVtbl->get_Contact(This,value) )
    ( (This)->lpVtbl->ReportCompletedAsync(This,createdOrUpdatedContact,result) )
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListCreateOrUpdateContactRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListCreateOrUpdateContactRequestEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListCreateOrUpdateContactRequestEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListDeleteContactRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListDeleteContactRequest";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContactListId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContactId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContactListId(This,value) )
    ( (This)->lpVtbl->get_ContactId(This,value) )
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListDeleteContactRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListDeleteContactRequestEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListDeleteContactRequestEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListServerSearchReadBatchRequest";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SessionId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContactListId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SuggestedBatchSize )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveContactAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactBatchStatus batchStatus,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SessionId(This,value) )
    ( (This)->lpVtbl->get_ContactListId(This,value) )
    ( (This)->lpVtbl->get_Options(This,value) )
    ( (This)->lpVtbl->get_SuggestedBatchSize(This,value) )
    ( (This)->lpVtbl->SaveContactAsync(This,contact,result) )
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )
    ( (This)->lpVtbl->ReportFailedAsync(This,batchStatus,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListServerSearchReadBatchRequestEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListServerSearchReadBatchRequestEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListSyncManagerSyncRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListSyncManagerSyncRequest";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContactListId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContactListId(This,value) )
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_DataProvider_IContactListSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.IContactListSyncManagerSyncRequestEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CDataProvider_CIContactListSyncManagerSyncRequestEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactDataProviderConnection[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderConnection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactDataProviderTriggerDetails[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListCreateOrUpdateContactRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListCreateOrUpdateContactRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListCreateOrUpdateContactRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListCreateOrUpdateContactRequestEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListDeleteContactRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListDeleteContactRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListDeleteContactRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListDeleteContactRequestEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListServerSearchReadBatchRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListServerSearchReadBatchRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListServerSearchReadBatchRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListServerSearchReadBatchRequestEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListSyncManagerSyncRequest[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListSyncManagerSyncRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_DataProvider_ContactListSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.Contacts.DataProvider.ContactListSyncManagerSyncRequestEventArgs";
       
       
#pragma clang diagnostic pop
