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
#include "Windows.ApplicationModel.Contacts.h"
#include "Windows.ApplicationModel.Email.h"
#include "Windows.ApplicationModel.UserDataTasks.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount2 __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount2;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount3 __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount3;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4 __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerForUser __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerForUser;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics2 __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics2;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore2 __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore2;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore3 __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore3;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStoreChangedEventArgs __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStoreChangedEventArgs;
typedef interface __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount;
typedef struct __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount;
typedef struct __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This,
                       __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStoreVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStoreVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStoreVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStoreVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStoreChangedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStoreChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStoreChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStoreChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStoreChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStoreChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStoreChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStoreChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStoreChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStoreChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStoreChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStoreChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar;
typedef interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
typedef struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
typedef struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                       __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox;
typedef interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
typedef struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
typedef struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailMailbox **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailbox
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                       __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailbox * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailboxVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList;
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactList;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactListVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactListVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactList;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactListVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactListVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactListVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactListVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactListVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactListVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactListVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactListVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList;
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
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
typedef interface __FIVector_1_HSTRING __FIVector_1_HSTRING;
EXTERN_C const IID IID___FIVector_1_HSTRING;
typedef struct __FIVector_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_HSTRING * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                            __RPC__deref_out_opt HSTRING *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_HSTRING * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_HSTRING * This, __RPC__deref_out_opt __FIVectorView_1_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_HSTRING * This,
                   __RPC__in HSTRING item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                   __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                   __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_HSTRING * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_HSTRING * This, __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) HSTRING *value);
    END_INTERFACE
} __FIVector_1_HSTRINGVtbl;
interface __FIVector_1_HSTRING
{
    CONST_VTBL struct __FIVector_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> SetAt(This,index,item) )
    ( (This)->lpVtbl -> InsertAt(This,index,item) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> Append(This,item) )
    ( (This)->lpVtbl -> RemoveAtEnd(This) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) )
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList;
typedef interface __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList;
typedef struct __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList;
typedef struct __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This,
                       __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup;
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1_HSTRING __FIAsyncOperationCompletedHandler_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_HSTRING;
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This, __RPC__in_opt __FIAsyncOperation_1_HSTRING *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;
interface __FIAsyncOperationCompletedHandler_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperation_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_HSTRING *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out HSTRING *results);
    END_INTERFACE
} __FIAsyncOperation_1_HSTRINGVtbl;
interface __FIAsyncOperation_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountContentKinds __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountContentKinds;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountOtherAppReadAccess __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountOtherAppReadAccess;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountStoreAccessType __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountStoreAccessType;
enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountContentKinds
{
    UserDataAccountContentKinds_Email = 0x1,
    UserDataAccountContentKinds_Contact = 0x2,
    UserDataAccountContentKinds_Appointment = 0x4,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountOtherAppReadAccess
{
    UserDataAccountOtherAppReadAccess_SystemOnly = 0,
    UserDataAccountOtherAppReadAccess_Full = 1,
    UserDataAccountOtherAppReadAccess_None = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountStoreAccessType
{
    UserDataAccountStoreAccessType_AllAccountsReadOnly = 0,
    UserDataAccountStoreAccessType_AppAccountsReadWrite = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount[] = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccount";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserDisplayName )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UserDisplayName )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OtherAppReadAccess )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountOtherAppReadAccess * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OtherAppReadAccess )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountOtherAppReadAccess value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Icon )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceAccountTypeId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PackageFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FindAppointmentCalendarsAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FindEmailMailboxesAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailMailbox * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FindContactListsAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FindContactAnnotationListsAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_UserDisplayName(This,value) )
    ( (This)->lpVtbl->put_UserDisplayName(This,value) )
    ( (This)->lpVtbl->get_OtherAppReadAccess(This,value) )
    ( (This)->lpVtbl->put_OtherAppReadAccess(This,value) )
    ( (This)->lpVtbl->get_Icon(This,value) )
    ( (This)->lpVtbl->get_DeviceAccountTypeId(This,value) )
    ( (This)->lpVtbl->get_PackageFamilyName(This,value) )
    ( (This)->lpVtbl->SaveAsync(This,result) )
    ( (This)->lpVtbl->DeleteAsync(This,result) )
    ( (This)->lpVtbl->FindAppointmentCalendarsAsync(This,result) )
    ( (This)->lpVtbl->FindEmailMailboxesAsync(This,result) )
    ( (This)->lpVtbl->FindContactListsAsync(This,result) )
    ( (This)->lpVtbl->FindContactAnnotationListsAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount2[] = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccount2";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EnterpriseId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsProtectedUnderLock )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EnterpriseId(This,value) )
    ( (This)->lpVtbl->get_IsProtectedUnderLock(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount3[] = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccount3";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExplictReadAccessPackageFamilyNames )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount3 * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount3 * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExplictReadAccessPackageFamilyNames(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->put_DisplayName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount4[] = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccount4";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanShowCreateContactGroup )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanShowCreateContactGroup )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderProperties )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FindUserDataTaskListsAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FindContactGroupsAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryShowCreateContactGroupAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsProtectedUnderLock )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Icon )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanShowCreateContactGroup(This,value) )
    ( (This)->lpVtbl->put_CanShowCreateContactGroup(This,value) )
    ( (This)->lpVtbl->get_ProviderProperties(This,value) )
    ( (This)->lpVtbl->FindUserDataTaskListsAsync(This,operation) )
    ( (This)->lpVtbl->FindContactGroupsAsync(This,operation) )
    ( (This)->lpVtbl->TryShowCreateContactGroupAsync(This,operation) )
    ( (This)->lpVtbl->put_IsProtectedUnderLock(This,value) )
    ( (This)->lpVtbl->put_Icon(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccount4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerForUser[] = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountManagerForUser";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerForUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerForUser * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerForUser * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerForUser * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerForUser * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerForUser * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerForUser * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerForUser * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountStoreAccessType storeAccessType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerForUser * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerForUserVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerForUser
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerForUserVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestStoreAsync(This,storeAccessType,result) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerForUser;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerStatics[] = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountStoreAccessType storeAccessType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ShowAddAccountAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountContentKinds contentKinds,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ShowAccountSettingsAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ShowAccountErrorResolverAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestStoreAsync(This,storeAccessType,result) )
    ( (This)->lpVtbl->ShowAddAccountAsync(This,contentKinds,result) )
    ( (This)->lpVtbl->ShowAccountSettingsAsync(This,id,result) )
    ( (This)->lpVtbl->ShowAccountErrorResolverAsync(This,id,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerStatics2[] = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountManagerStatics2";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerForUser * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore[] = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountStore";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindAccountsAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAccountAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateAccountAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore * This,
                  __RPC__in HSTRING userDisplayName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStoreVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStoreVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindAccountsAsync(This,result) )
    ( (This)->lpVtbl->GetAccountAsync(This,id,result) )
    ( (This)->lpVtbl->CreateAccountAsync(This,userDisplayName,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore2[] = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountStore2";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateAccountWithPackageRelativeAppIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore2 * This,
                  __RPC__in HSTRING userDisplayName,
                  __RPC__in HSTRING packageRelativeAppId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StoreChanged )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStore_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccountStoreChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StoreChanged )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateAccountWithPackageRelativeAppIdAsync(This,userDisplayName,packageRelativeAppId,result) )
    ( (This)->lpVtbl->add_StoreChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_StoreChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore3[] = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountStore3";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateAccountWithPackageRelativeAppIdAndEnterpriseIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore3 * This,
                  __RPC__in HSTRING userDisplayName,
                  __RPC__in HSTRING packageRelativeAppId,
                  __RPC__in HSTRING enterpriseId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataAccounts__CUserDataAccount * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateAccountWithPackageRelativeAppIdAndEnterpriseIdAsync(This,userDisplayName,packageRelativeAppId,enterpriseId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStore3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStoreChangedEventArgs[] = L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountStoreChangedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStoreChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStoreChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStoreChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStoreChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStoreChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStoreChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStoreChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStoreChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStoreChangedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStoreChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStoreChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CIUserDataAccountStoreChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_UserDataAccount[] = L"Windows.ApplicationModel.UserDataAccounts.UserDataAccount";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_UserDataAccountManager[] = L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_UserDataAccountManagerForUser[] = L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountManagerForUser";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_UserDataAccountStore[] = L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountStore";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_UserDataAccountStoreChangedEventArgs[] = L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountStoreChangedEventArgs";
       
       
#pragma clang diagnostic pop
