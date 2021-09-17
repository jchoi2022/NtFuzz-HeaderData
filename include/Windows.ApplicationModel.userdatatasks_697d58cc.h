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
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskBatch __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskBatch;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListLimitedWriteOperations __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListLimitedWriteOperations;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManager __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManager;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManagerStatics __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskQueryOptions __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskQueryOptions;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskReader __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskReader;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskStore __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskStore;
typedef interface __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask;
typedef struct __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask;
typedef struct __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This,
                       __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatchVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatchVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatchVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatchVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskBatch * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatchVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatchVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStoreVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStoreVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskStore * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStoreVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStoreVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskDaysOfWeek;
typedef interface __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskDaysOfWeek __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskDaysOfWeek;
EXTERN_C const IID IID___FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskDaysOfWeek;
typedef struct __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskDaysOfWeekVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskDaysOfWeek * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskDaysOfWeek * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskDaysOfWeek * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskDaysOfWeek * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskDaysOfWeek * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskDaysOfWeek * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskDaysOfWeek * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskDaysOfWeek *value);
    END_INTERFACE
} __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskDaysOfWeekVtbl;
interface __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskDaysOfWeek
{
    CONST_VTBL struct __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskDaysOfWeekVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskWeekOfMonth;
typedef interface __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskWeekOfMonth __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskWeekOfMonth;
EXTERN_C const IID IID___FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskWeekOfMonth;
typedef struct __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskWeekOfMonthVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskWeekOfMonth * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskWeekOfMonth * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskWeekOfMonth * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskWeekOfMonth * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskWeekOfMonth * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskWeekOfMonth * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskWeekOfMonth * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskWeekOfMonth *value);
    END_INTERFACE
} __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskWeekOfMonthVtbl;
interface __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskWeekOfMonth
{
    CONST_VTBL struct __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskWeekOfMonthVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListSyncManager_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListSyncManager_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListSyncManager_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListSyncManager_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListSyncManager_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListSyncManager_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListSyncManager_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListSyncManager_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListSyncManager_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListSyncManager_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListSyncManager_IInspectableVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_boolean __FIAsyncOperationCompletedHandler_1_boolean;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_boolean;
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperationCompletedHandler_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This, __RPC__in_opt __FIAsyncOperation_1_boolean *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_booleanVtbl;
interface __FIAsyncOperationCompletedHandler_1_boolean
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_booleanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
EXTERN_C const IID IID___FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperation_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_boolean * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_boolean *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_boolean **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out boolean *results);
    END_INTERFACE
} __FIAsyncOperation_1_booleanVtbl;
interface __FIAsyncOperation_1_boolean
{
    CONST_VTBL struct __FIAsyncOperation_1_booleanVtbl *lpVtbl;
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
typedef interface __FIReference_1_int __FIReference_1_int;
EXTERN_C const IID IID___FIReference_1_int;
typedef struct __FIReference_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_int * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_int * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_int * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_int * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_int * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_int * This, __RPC__out int *value);
    END_INTERFACE
} __FIReference_1_intVtbl;
interface __FIReference_1_int
{
    CONST_VTBL struct __FIReference_1_intVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskDaysOfWeek __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskDaysOfWeek;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskDetailsKind __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskDetailsKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskKind __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskListOtherAppReadAccess __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskListOtherAppReadAccess;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskListOtherAppWriteAccess __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskListOtherAppWriteAccess;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskListSyncStatus __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskListSyncStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskPriority __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskPriority;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskQueryKind __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskQueryKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskQuerySortProperty __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskQuerySortProperty;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskRecurrenceUnit __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskRecurrenceUnit;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskRegenerationUnit __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskRegenerationUnit;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskSensitivity __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskSensitivity;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskStoreAccessType __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskStoreAccessType;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskWeekOfMonth __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskWeekOfMonth;
enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskDaysOfWeek
{
    UserDataTaskDaysOfWeek_None = 0,
    UserDataTaskDaysOfWeek_Sunday = 0x1,
    UserDataTaskDaysOfWeek_Monday = 0x2,
    UserDataTaskDaysOfWeek_Tuesday = 0x4,
    UserDataTaskDaysOfWeek_Wednesday = 0x8,
    UserDataTaskDaysOfWeek_Thursday = 0x10,
    UserDataTaskDaysOfWeek_Friday = 0x20,
    UserDataTaskDaysOfWeek_Saturday = 0x40,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskDetailsKind
{
    UserDataTaskDetailsKind_PlainText = 0,
    UserDataTaskDetailsKind_Html = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskKind
{
    UserDataTaskKind_Single = 0,
    UserDataTaskKind_Recurring = 1,
    UserDataTaskKind_Regenerating = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskListOtherAppReadAccess
{
    UserDataTaskListOtherAppReadAccess_Full = 0,
    UserDataTaskListOtherAppReadAccess_SystemOnly = 1,
    UserDataTaskListOtherAppReadAccess_None = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskListOtherAppWriteAccess
{
    UserDataTaskListOtherAppWriteAccess_Limited = 0,
    UserDataTaskListOtherAppWriteAccess_None = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskListSyncStatus
{
    UserDataTaskListSyncStatus_Idle = 0,
    UserDataTaskListSyncStatus_Syncing = 1,
    UserDataTaskListSyncStatus_UpToDate = 2,
    UserDataTaskListSyncStatus_AuthenticationError = 3,
    UserDataTaskListSyncStatus_PolicyError = 4,
    UserDataTaskListSyncStatus_UnknownError = 5,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskPriority
{
    UserDataTaskPriority_Normal = 0,
    UserDataTaskPriority_Low = -1,
    UserDataTaskPriority_High = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskQueryKind
{
    UserDataTaskQueryKind_All = 0,
    UserDataTaskQueryKind_Incomplete = 1,
    UserDataTaskQueryKind_Complete = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskQuerySortProperty
{
    UserDataTaskQuerySortProperty_DueDate = 0,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskRecurrenceUnit
{
    UserDataTaskRecurrenceUnit_Daily = 0,
    UserDataTaskRecurrenceUnit_Weekly = 1,
    UserDataTaskRecurrenceUnit_Monthly = 2,
    UserDataTaskRecurrenceUnit_MonthlyOnDay = 3,
    UserDataTaskRecurrenceUnit_Yearly = 4,
    UserDataTaskRecurrenceUnit_YearlyOnDay = 5,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskRegenerationUnit
{
    UserDataTaskRegenerationUnit_Daily = 0,
    UserDataTaskRegenerationUnit_Weekly = 1,
    UserDataTaskRegenerationUnit_Monthly = 2,
    UserDataTaskRegenerationUnit_Yearly = 4,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskSensitivity
{
    UserDataTaskSensitivity_Public = 0,
    UserDataTaskSensitivity_Private = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskStoreAccessType
{
    UserDataTaskStoreAccessType_AppTasksReadWrite = 0,
    UserDataTaskStoreAccessType_AllTasksLimitedReadWrite = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskWeekOfMonth
{
    UserDataTaskWeekOfMonth_First = 0,
    UserDataTaskWeekOfMonth_Second = 1,
    UserDataTaskWeekOfMonth_Third = 2,
    UserDataTaskWeekOfMonth_Fourth = 3,
    UserDataTaskWeekOfMonth_Last = 4,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_IUserDataTask[] = L"Windows.ApplicationModel.UserDataTasks.IUserDataTask";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ListId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CompletedDate )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CompletedDate )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Details )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Details )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DetailsKind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskDetailsKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DetailsKind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskDetailsKind value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DueDate )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DueDate )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Priority )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskPriority * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Priority )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskPriority value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RecurrenceProperties )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RecurrenceProperties )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RegenerationProperties )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RegenerationProperties )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Reminder )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Reminder )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sensitivity )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskSensitivity * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Sensitivity )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskSensitivity value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Subject )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartDate )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartDate )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_ListId(This,value) )
    ( (This)->lpVtbl->get_RemoteId(This,value) )
    ( (This)->lpVtbl->put_RemoteId(This,value) )
    ( (This)->lpVtbl->get_CompletedDate(This,value) )
    ( (This)->lpVtbl->put_CompletedDate(This,value) )
    ( (This)->lpVtbl->get_Details(This,value) )
    ( (This)->lpVtbl->put_Details(This,value) )
    ( (This)->lpVtbl->get_DetailsKind(This,value) )
    ( (This)->lpVtbl->put_DetailsKind(This,value) )
    ( (This)->lpVtbl->get_DueDate(This,value) )
    ( (This)->lpVtbl->put_DueDate(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_Priority(This,value) )
    ( (This)->lpVtbl->put_Priority(This,value) )
    ( (This)->lpVtbl->get_RecurrenceProperties(This,value) )
    ( (This)->lpVtbl->put_RecurrenceProperties(This,value) )
    ( (This)->lpVtbl->get_RegenerationProperties(This,value) )
    ( (This)->lpVtbl->put_RegenerationProperties(This,value) )
    ( (This)->lpVtbl->get_Reminder(This,value) )
    ( (This)->lpVtbl->put_Reminder(This,value) )
    ( (This)->lpVtbl->get_Sensitivity(This,value) )
    ( (This)->lpVtbl->put_Sensitivity(This,value) )
    ( (This)->lpVtbl->get_Subject(This,value) )
    ( (This)->lpVtbl->put_Subject(This,value) )
    ( (This)->lpVtbl->get_StartDate(This,value) )
    ( (This)->lpVtbl->put_StartDate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_IUserDataTaskBatch[] = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskBatch";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskBatchVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskBatch * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskBatch * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskBatch * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskBatch * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskBatch * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskBatch * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Tasks )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskBatch * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskBatchVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskBatch
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskBatchVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Tasks(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskBatch;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList[] = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskList";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserDataAccountId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceDisplayName )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OtherAppReadAccess )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskListOtherAppReadAccess * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OtherAppReadAccess )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskListOtherAppReadAccess value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OtherAppWriteAccess )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskListOtherAppWriteAccess * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OtherAppWriteAccess )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskListOtherAppWriteAccess value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LimitedWriteOperations )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListLimitedWriteOperations * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SyncManager )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager * * value
        );
    HRESULT ( STDMETHODCALLTYPE *RegisterSyncManagerAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetTaskReader )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskReader * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetTaskReaderWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskQueryOptions * options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskReader * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetTaskAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                  __RPC__in HSTRING userDataTask,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTask * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SaveTaskAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * userDataTask,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteTaskAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                  __RPC__in HSTRING userDataTaskId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_UserDataAccountId(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->put_DisplayName(This,value) )
    ( (This)->lpVtbl->get_SourceDisplayName(This,value) )
    ( (This)->lpVtbl->get_OtherAppReadAccess(This,value) )
    ( (This)->lpVtbl->put_OtherAppReadAccess(This,value) )
    ( (This)->lpVtbl->get_OtherAppWriteAccess(This,value) )
    ( (This)->lpVtbl->put_OtherAppWriteAccess(This,value) )
    ( (This)->lpVtbl->get_LimitedWriteOperations(This,value) )
    ( (This)->lpVtbl->get_SyncManager(This,value) )
    ( (This)->lpVtbl->RegisterSyncManagerAsync(This,result) )
    ( (This)->lpVtbl->GetTaskReader(This,result) )
    ( (This)->lpVtbl->GetTaskReaderWithOptions(This,options,value) )
    ( (This)->lpVtbl->GetTaskAsync(This,userDataTask,operation) )
    ( (This)->lpVtbl->SaveTaskAsync(This,userDataTask,action) )
    ( (This)->lpVtbl->DeleteTaskAsync(This,userDataTaskId,action) )
    ( (This)->lpVtbl->DeleteAsync(This,asyncAction) )
    ( (This)->lpVtbl->SaveAsync(This,asyncAction) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskList;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListLimitedWriteOperations[] = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskListLimitedWriteOperations";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListLimitedWriteOperationsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListLimitedWriteOperations * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListLimitedWriteOperations * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListLimitedWriteOperations * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListLimitedWriteOperations * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListLimitedWriteOperations * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListLimitedWriteOperations * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryCompleteTaskAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListLimitedWriteOperations * This,
                  __RPC__in HSTRING userDataTaskId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryCreateOrUpdateTaskAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListLimitedWriteOperations * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTask * userDataTask,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryDeleteTaskAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListLimitedWriteOperations * This,
                  __RPC__in HSTRING userDataTaskId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TrySkipOccurrenceAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListLimitedWriteOperations * This,
                  __RPC__in HSTRING userDataTaskId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListLimitedWriteOperationsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListLimitedWriteOperations
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListLimitedWriteOperationsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryCompleteTaskAsync(This,userDataTaskId,operation) )
    ( (This)->lpVtbl->TryCreateOrUpdateTaskAsync(This,userDataTask,operation) )
    ( (This)->lpVtbl->TryDeleteTaskAsync(This,userDataTaskId,operation) )
    ( (This)->lpVtbl->TrySkipOccurrenceAsync(This,userDataTaskId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListLimitedWriteOperations;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListSyncManager[] = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskListSyncManager";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LastAttemptedSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LastAttemptedSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastSuccessfulSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LastSuccessfulSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskListSyncStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Status )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskListSyncStatus value
        );
    HRESULT ( STDMETHODCALLTYPE *SyncAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SyncStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskListSyncManager_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SyncStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManagerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LastAttemptedSyncTime(This,value) )
    ( (This)->lpVtbl->put_LastAttemptedSyncTime(This,value) )
    ( (This)->lpVtbl->get_LastSuccessfulSyncTime(This,value) )
    ( (This)->lpVtbl->put_LastSuccessfulSyncTime(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->put_Status(This,value) )
    ( (This)->lpVtbl->SyncAsync(This,result) )
    ( (This)->lpVtbl->add_SyncStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SyncStatusChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskListSyncManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_IUserDataTaskManager[] = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskManager";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManager * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskStoreAccessType accessType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskStore * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManagerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestStoreAsync(This,accessType,operation) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_IUserDataTaskManagerStatics[] = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManager * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManager * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_IUserDataTaskQueryOptions[] = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskQueryOptions";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskQueryOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskQueryOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskQueryOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskQueryOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskQueryOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskQueryOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskQueryOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SortProperty )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskQueryOptions * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskQuerySortProperty * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SortProperty )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskQueryOptions * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskQuerySortProperty value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskQueryOptions * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskQueryKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Kind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskQueryOptions * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskQueryKind value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskQueryOptionsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskQueryOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskQueryOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SortProperty(This,value) )
    ( (This)->lpVtbl->put_SortProperty(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->put_Kind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskQueryOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_IUserDataTaskReader[] = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskReader";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReadBatchAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskReader * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskBatch * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskReaderVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskReader
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReadBatchAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties[] = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskRecurrenceProperties";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrencePropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Unit )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskRecurrenceUnit * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Unit )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskRecurrenceUnit value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Occurrences )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Occurrences )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Until )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Until )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Interval )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Interval )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DaysOfWeek )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskDaysOfWeek * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DaysOfWeek )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
                  __RPC__in_opt __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskDaysOfWeek * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WeekOfMonth )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskWeekOfMonth * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_WeekOfMonth )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
                  __RPC__in_opt __FIReference_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskWeekOfMonth * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Month )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Month )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Day )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Day )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrencePropertiesVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrencePropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Unit(This,value) )
    ( (This)->lpVtbl->put_Unit(This,value) )
    ( (This)->lpVtbl->get_Occurrences(This,value) )
    ( (This)->lpVtbl->put_Occurrences(This,value) )
    ( (This)->lpVtbl->get_Until(This,value) )
    ( (This)->lpVtbl->put_Until(This,value) )
    ( (This)->lpVtbl->get_Interval(This,value) )
    ( (This)->lpVtbl->put_Interval(This,value) )
    ( (This)->lpVtbl->get_DaysOfWeek(This,value) )
    ( (This)->lpVtbl->put_DaysOfWeek(This,value) )
    ( (This)->lpVtbl->get_WeekOfMonth(This,value) )
    ( (This)->lpVtbl->put_WeekOfMonth(This,value) )
    ( (This)->lpVtbl->get_Month(This,value) )
    ( (This)->lpVtbl->put_Month(This,value) )
    ( (This)->lpVtbl->get_Day(This,value) )
    ( (This)->lpVtbl->put_Day(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRecurrenceProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRegenerationProperties[] = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskRegenerationProperties";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Unit )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskRegenerationUnit * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Unit )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties * This,
                  __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CUserDataTaskRegenerationUnit value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Occurrences )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Occurrences )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Until )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Until )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Interval )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Interval )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties * This,
                  INT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationPropertiesVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Unit(This,value) )
    ( (This)->lpVtbl->put_Unit(This,value) )
    ( (This)->lpVtbl->get_Occurrences(This,value) )
    ( (This)->lpVtbl->put_Occurrences(This,value) )
    ( (This)->lpVtbl->get_Until(This,value) )
    ( (This)->lpVtbl->put_Until(This,value) )
    ( (This)->lpVtbl->get_Interval(This,value) )
    ( (This)->lpVtbl->put_Interval(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskRegenerationProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataTasks_IUserDataTaskStore[] = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskStore";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskStore * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskStore * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskStore * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskStore * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskStore * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskStore * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateListAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskStore * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateListInAccountAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskStore * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING userDataAccountId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FindListsAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskStore * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetListAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskStore * This,
                  __RPC__in HSTRING taskListId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserDataTasks__CUserDataTaskList * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskStoreVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskStore
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskStoreVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateListAsync(This,name,operation) )
    ( (This)->lpVtbl->CreateListInAccountAsync(This,name,userDataAccountId,result) )
    ( (This)->lpVtbl->FindListsAsync(This,operation) )
    ( (This)->lpVtbl->GetListAsync(This,taskListId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataTasks_CIUserDataTaskStore;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_UserDataTask[] = L"Windows.ApplicationModel.UserDataTasks.UserDataTask";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_UserDataTaskBatch[] = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskBatch";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_UserDataTaskList[] = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskList";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_UserDataTaskListLimitedWriteOperations[] = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskListLimitedWriteOperations";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_UserDataTaskListSyncManager[] = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskListSyncManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_UserDataTaskManager[] = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_UserDataTaskQueryOptions[] = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskQueryOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_UserDataTaskReader[] = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_UserDataTaskRecurrenceProperties[] = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskRecurrenceProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_UserDataTaskRegenerationProperties[] = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskRegenerationProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataTasks_UserDataTaskStore[] = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskStore";
       
       
#pragma clang diagnostic pop
