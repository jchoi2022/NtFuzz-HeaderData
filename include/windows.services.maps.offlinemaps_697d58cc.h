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
#include "Windows.Devices.Geolocation.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage;
typedef interface __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult;
typedef interface __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult;
typedef interface __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics;
typedef interface __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage;
typedef struct __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This, __RPC__out __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageVtbl;
interface __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage;
typedef struct __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageVtbl;
interface __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage;
typedef struct __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
                       __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageVtbl;
interface __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult;
typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult;
typedef struct __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This, __RPC__out __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResultVtbl;
interface __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult;
typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult;
typedef struct __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This, __RPC__out __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResultVtbl;
interface __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResultVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle;
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint;
typedef enum __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageQueryStatus __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageQueryStatus;
typedef enum __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageStartDownloadStatus __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageStartDownloadStatus;
typedef enum __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageStatus __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageStatus;
enum __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageQueryStatus
{
    OfflineMapPackageQueryStatus_Success = 0,
    OfflineMapPackageQueryStatus_UnknownError = 1,
    OfflineMapPackageQueryStatus_InvalidCredentials = 2,
    OfflineMapPackageQueryStatus_NetworkFailure = 3,
};
enum __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageStartDownloadStatus
{
    OfflineMapPackageStartDownloadStatus_Success = 0,
    OfflineMapPackageStartDownloadStatus_UnknownError = 1,
    OfflineMapPackageStartDownloadStatus_InvalidCredentials = 2,
    OfflineMapPackageStartDownloadStatus_DeniedWithoutCapability = 3,
};
enum __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageStatus
{
    OfflineMapPackageStatus_NotDownloaded = 0,
    OfflineMapPackageStatus_Downloading = 1,
    OfflineMapPackageStatus_Downloaded = 2,
    OfflineMapPackageStatus_Deleting = 3,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_OfflineMaps_IOfflineMapPackage[] = L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackage";
typedef struct __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EnclosingRegionName )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EstimatedSizeInBytes )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
                           __RPC__out UINT64 * value
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StatusChanged )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StatusChanged )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
    HRESULT ( STDMETHODCALLTYPE *RequestStartDownloadAsync )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageVtbl;
interface __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_EnclosingRegionName(This,value) )
    ( (This)->lpVtbl->get_EstimatedSizeInBytes(This,value) )
    ( (This)->lpVtbl->remove_StatusChanged(This,token) )
    ( (This)->lpVtbl->add_StatusChanged(This,value,token) )
    ( (This)->lpVtbl->RequestStartDownloadAsync(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageQueryResult[] = L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackageQueryResult";
typedef struct __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageQueryStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Packages )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResultVtbl;
interface __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Packages(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStartDownloadResult[] = L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStartDownloadResult";
typedef struct __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult * This,
                           __RPC__out __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageStartDownloadStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResultVtbl;
interface __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStatics[] = L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStatics";
typedef struct __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindPackagesAsync )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * queryPoint,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FindPackagesInBoundingBoxAsync )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * queryBoundingBox,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FindPackagesInGeocircleAsync )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * queryCircle,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStaticsVtbl;
interface __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindPackagesAsync(This,queryPoint,result) )
    ( (This)->lpVtbl->FindPackagesInBoundingBoxAsync(This,queryBoundingBox,result) )
    ( (This)->lpVtbl->FindPackagesInGeocircleAsync(This,queryCircle,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_OfflineMaps_OfflineMapPackage[] = L"Windows.Services.Maps.OfflineMaps.OfflineMapPackage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_OfflineMaps_OfflineMapPackageQueryResult[] = L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_OfflineMaps_OfflineMapPackageStartDownloadResult[] = L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageStartDownloadResult";
       
       
#pragma clang diagnostic pop
