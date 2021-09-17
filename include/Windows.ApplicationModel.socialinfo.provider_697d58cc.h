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
#include "Windows.ApplicationModel.SocialInfo.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater;
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater;
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdaterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdaterVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdaterVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdaterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdaterVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdaterVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdaterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdaterVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdaterVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdaterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdaterVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdaterVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem;
typedef interface __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;
typedef struct __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;
typedef struct __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                       __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;
typedef struct __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl;
interface __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent;
typedef enum __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedKind __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedUpdateMode __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedUpdateMode;
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_Provider_ISocialDashboardItemUpdater[] = L"Windows.ApplicationModel.SocialInfo.Provider.ISocialDashboardItemUpdater";
typedef struct
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdaterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_OwnerRemoteId )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * * value
        );
    DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_Timestamp )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
    DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_Thumbnail )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * value
        );
    DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * * value
        );
    DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *CommitAsync )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdaterVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdaterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_OwnerRemoteId(This,value) )
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Content(This,value) )
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Timestamp(This,value) )
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_Timestamp(This,value) )
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_Thumbnail(This,value) )
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Thumbnail(This,value) )
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->CommitAsync(This,operation) )
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_TargetUri(This,value) )
DEPRECATED("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_TargetUri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialDashboardItemUpdater;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_Provider_ISocialFeedUpdater[] = L"Windows.ApplicationModel.SocialInfo.Provider.ISocialFeedUpdater";
typedef struct
DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdaterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_OwnerRemoteId )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedKind * value
        );
    DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Items )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * * value
        );
    DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *CommitAsync )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdaterVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdaterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_OwnerRemoteId(This,value) )
DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Kind(This,value) )
DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Items(This,value) )
DEPRECATED("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->CommitAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialFeedUpdater;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_Provider_ISocialInfoProviderManagerStatics[] = L"Windows.ApplicationModel.SocialInfo.Provider.ISocialInfoProviderManagerStatics";
typedef struct
DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *CreateSocialFeedUpdaterAsync )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
                  __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedKind kind,
                  __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedUpdateMode mode,
                  __RPC__in HSTRING ownerRemoteId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialFeedUpdater * * operation
        );
    DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *CreateDashboardItemUpdaterAsync )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
                  __RPC__in HSTRING ownerRemoteId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CSocialInfo__CProvider__CSocialDashboardItemUpdater * * operation
        );
    DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *UpdateBadgeCountValue )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
                  __RPC__in HSTRING itemRemoteId,
                  INT32 newCount
        );
    DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *ReportNewContentAvailable )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
                  __RPC__in HSTRING contactRemoteId,
                  __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedKind kind
        );
    DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *ProvisionAsync )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *DeprovisionAsync )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->CreateSocialFeedUpdaterAsync(This,kind,mode,ownerRemoteId,operation) )
DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->CreateDashboardItemUpdaterAsync(This,ownerRemoteId,operation) )
DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->UpdateBadgeCountValue(This,itemRemoteId,newCount) )
DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->ReportNewContentAvailable(This,contactRemoteId,kind) )
DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->ProvisionAsync(This,operation) )
DEPRECATED("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->DeprovisionAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CProvider_CISocialInfoProviderManagerStatics;
DEPRECATED("SocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_Provider_SocialDashboardItemUpdater[] = L"Windows.ApplicationModel.SocialInfo.Provider.SocialDashboardItemUpdater";
DEPRECATED("SocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_Provider_SocialFeedUpdater[] = L"Windows.ApplicationModel.SocialInfo.Provider.SocialFeedUpdater";
DEPRECATED("SocialInfoProviderManager is deprecated and might not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_Provider_SocialInfoProviderManager[] = L"Windows.ApplicationModel.SocialInfo.Provider.SocialInfoProviderManager";
       
       
#pragma clang diagnostic pop
