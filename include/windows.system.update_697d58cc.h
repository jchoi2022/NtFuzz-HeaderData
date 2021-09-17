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
typedef interface __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem;
typedef interface __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateLastErrorInfo __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateLastErrorInfo;
typedef interface __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics;
typedef interface __FIIterator_1_Windows__CSystem__CUpdate__CSystemUpdateItem __FIIterator_1_Windows__CSystem__CUpdate__CSystemUpdateItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CUpdate__CSystemUpdateItem;
typedef struct __FIIterator_1_Windows__CSystem__CUpdate__CSystemUpdateItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This, __RPC__out __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CUpdate__CSystemUpdateItemVtbl;
interface __FIIterator_1_Windows__CSystem__CUpdate__CSystemUpdateItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CUpdate__CSystemUpdateItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSystem__CUpdate__CSystemUpdateItem __FIIterable_1_Windows__CSystem__CUpdate__CSystemUpdateItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CUpdate__CSystemUpdateItem;
typedef struct __FIIterable_1_Windows__CSystem__CUpdate__CSystemUpdateItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CUpdate__CSystemUpdateItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CUpdate__CSystemUpdateItemVtbl;
interface __FIIterable_1_Windows__CSystem__CUpdate__CSystemUpdateItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CUpdate__CSystemUpdateItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSystem__CUpdate__CSystemUpdateItem __FIVectorView_1_Windows__CSystem__CUpdate__CSystemUpdateItem;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSystem__CUpdate__CSystemUpdateItem;
typedef struct __FIVectorView_1_Windows__CSystem__CUpdate__CSystemUpdateItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This,
                       __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CUpdate__CSystemUpdateItem * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSystem__CUpdate__CSystemUpdateItemVtbl;
interface __FIVectorView_1_Windows__CSystem__CUpdate__CSystemUpdateItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSystem__CUpdate__CSystemUpdateItemVtbl *lpVtbl;
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
typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;
typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;
interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CSystem_CUpdate_CSystemUpdateAttentionRequiredReason __x_ABI_CWindows_CSystem_CUpdate_CSystemUpdateAttentionRequiredReason;
typedef enum __x_ABI_CWindows_CSystem_CUpdate_CSystemUpdateItemState __x_ABI_CWindows_CSystem_CUpdate_CSystemUpdateItemState;
typedef enum __x_ABI_CWindows_CSystem_CUpdate_CSystemUpdateManagerState __x_ABI_CWindows_CSystem_CUpdate_CSystemUpdateManagerState;
typedef enum __x_ABI_CWindows_CSystem_CUpdate_CSystemUpdateStartInstallAction __x_ABI_CWindows_CSystem_CUpdate_CSystemUpdateStartInstallAction;
enum __x_ABI_CWindows_CSystem_CUpdate_CSystemUpdateAttentionRequiredReason
{
    SystemUpdateAttentionRequiredReason_None = 0,
    SystemUpdateAttentionRequiredReason_NetworkRequired = 1,
    SystemUpdateAttentionRequiredReason_InsufficientDiskSpace = 2,
    SystemUpdateAttentionRequiredReason_InsufficientBattery = 3,
    SystemUpdateAttentionRequiredReason_UpdateBlocked = 4,
};
enum __x_ABI_CWindows_CSystem_CUpdate_CSystemUpdateItemState
{
    SystemUpdateItemState_NotStarted = 0,
    SystemUpdateItemState_Initializing = 1,
    SystemUpdateItemState_Preparing = 2,
    SystemUpdateItemState_Calculating = 3,
    SystemUpdateItemState_Downloading = 4,
    SystemUpdateItemState_Installing = 5,
    SystemUpdateItemState_Completed = 6,
    SystemUpdateItemState_RebootRequired = 7,
    SystemUpdateItemState_Error = 8,
};
enum __x_ABI_CWindows_CSystem_CUpdate_CSystemUpdateManagerState
{
    SystemUpdateManagerState_Idle = 0,
    SystemUpdateManagerState_Detecting = 1,
    SystemUpdateManagerState_ReadyToDownload = 2,
    SystemUpdateManagerState_Downloading = 3,
    SystemUpdateManagerState_ReadyToInstall = 4,
    SystemUpdateManagerState_Installing = 5,
    SystemUpdateManagerState_RebootRequired = 6,
    SystemUpdateManagerState_ReadyToFinalize = 7,
    SystemUpdateManagerState_Finalizing = 8,
    SystemUpdateManagerState_Completed = 9,
    SystemUpdateManagerState_AttentionRequired = 10,
    SystemUpdateManagerState_Error = 11,
};
enum __x_ABI_CWindows_CSystem_CUpdate_CSystemUpdateStartInstallAction
{
    SystemUpdateStartInstallAction_UpToReboot = 0,
    SystemUpdateStartInstallAction_AllowReboot = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Update_ISystemUpdateItem[] = L"Windows.System.Update.ISystemUpdateItem";
typedef struct __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CUpdate_CSystemUpdateItemState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Revision )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DownloadProgress )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InstallProgress )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItemVtbl;
interface __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Revision(This,value) )
    ( (This)->lpVtbl->get_DownloadProgress(This,value) )
    ( (This)->lpVtbl->get_InstallProgress(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Update_ISystemUpdateLastErrorInfo[] = L"Windows.System.Update.ISystemUpdateLastErrorInfo";
typedef struct __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateLastErrorInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateLastErrorInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateLastErrorInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateLastErrorInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateLastErrorInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateLastErrorInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateLastErrorInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateLastErrorInfo * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CUpdate_CSystemUpdateManagerState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateLastErrorInfo * This,
                           __RPC__out HRESULT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInteractive )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateLastErrorInfo * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateLastErrorInfoVtbl;
interface __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateLastErrorInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateLastErrorInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
    ( (This)->lpVtbl->get_IsInteractive(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateLastErrorInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Update_ISystemUpdateManagerStatics[] = L"Windows.System.Update.ISystemUpdateManagerStatics";
typedef struct __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CUpdate_CSystemUpdateManagerState * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StateChanged )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StateChanged )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DownloadProgress )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InstallProgress )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserActiveHoursStart )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserActiveHoursEnd )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserActiveHoursMax )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetUserActiveHours )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan start,
                  __x_ABI_CWindows_CFoundation_CTimeSpan end,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastUpdateCheckTime )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastUpdateInstallTime )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastErrorInfo )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateLastErrorInfo * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAutomaticRebootBlockIds )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * result
        );
    HRESULT ( STDMETHODCALLTYPE *BlockAutomaticRebootAsync )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                  __RPC__in HSTRING lockId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UnblockAutomaticRebootAsync )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                  __RPC__in HSTRING lockId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                           __RPC__out HRESULT * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetUpdateItems )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CUpdate__CSystemUpdateItem * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AttentionRequiredReason )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CUpdate_CSystemUpdateAttentionRequiredReason * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetFlightRing )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                  __RPC__in HSTRING flightRing,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetFlightRing )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *StartInstall )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This,
                  __x_ABI_CWindows_CSystem_CUpdate_CSystemUpdateStartInstallAction action
        );
    HRESULT ( STDMETHODCALLTYPE *RebootToCompleteInstall )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This
        );
    HRESULT ( STDMETHODCALLTYPE *StartCancelUpdates )(
        __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsSupported(This,result) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->add_StateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_StateChanged(This,token) )
    ( (This)->lpVtbl->get_DownloadProgress(This,value) )
    ( (This)->lpVtbl->get_InstallProgress(This,value) )
    ( (This)->lpVtbl->get_UserActiveHoursStart(This,value) )
    ( (This)->lpVtbl->get_UserActiveHoursEnd(This,value) )
    ( (This)->lpVtbl->get_UserActiveHoursMax(This,value) )
    ( (This)->lpVtbl->TrySetUserActiveHours(This,start,end,result) )
    ( (This)->lpVtbl->get_LastUpdateCheckTime(This,value) )
    ( (This)->lpVtbl->get_LastUpdateInstallTime(This,value) )
    ( (This)->lpVtbl->get_LastErrorInfo(This,value) )
    ( (This)->lpVtbl->GetAutomaticRebootBlockIds(This,result) )
    ( (This)->lpVtbl->BlockAutomaticRebootAsync(This,lockId,operation) )
    ( (This)->lpVtbl->UnblockAutomaticRebootAsync(This,lockId,operation) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
    ( (This)->lpVtbl->GetUpdateItems(This,result) )
    ( (This)->lpVtbl->get_AttentionRequiredReason(This,value) )
    ( (This)->lpVtbl->SetFlightRing(This,flightRing,result) )
    ( (This)->lpVtbl->GetFlightRing(This,result) )
    ( (This)->lpVtbl->StartInstall(This,action) )
    ( (This)->lpVtbl->RebootToCompleteInstall(This) )
    ( (This)->lpVtbl->StartCancelUpdates(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CUpdate_CISystemUpdateManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Update_SystemUpdateItem[] = L"Windows.System.Update.SystemUpdateItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Update_SystemUpdateLastErrorInfo[] = L"Windows.System.Update.SystemUpdateLastErrorInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Update_SystemUpdateManager[] = L"Windows.System.Update.SystemUpdateManager";
       
       
#pragma clang diagnostic pop
