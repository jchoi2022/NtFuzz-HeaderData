#pragma warning( disable: 4049 )
#include <rpc.h>
#include <rpcndr.h>
#error this stub requires an updated version of <rpcndr.h>
#include <windows.h>
#include <ole2.h>
       
       
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.Management.Deployment.h"
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem4 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem4;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager7 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager7;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus3 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus3;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions2 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions2;
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult;
typedef interface __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;
typedef struct __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;
typedef struct __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                       __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallState __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallState;
typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallType __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallType;
typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallationToastNotificationMode __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallationToastNotificationMode;
typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAutoUpdateSetting __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAutoUpdateSetting;
typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CGetEntitlementStatus __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CGetEntitlementStatus;
enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallState
{
    AppInstallState_Pending = 0,
    AppInstallState_Starting = 1,
    AppInstallState_AcquiringLicense = 2,
    AppInstallState_Downloading = 3,
    AppInstallState_RestoringData = 4,
    AppInstallState_Installing = 5,
    AppInstallState_Completed = 6,
    AppInstallState_Canceled = 7,
    AppInstallState_Paused = 8,
    AppInstallState_Error = 9,
    AppInstallState_PausedLowBattery = 10,
    AppInstallState_PausedWiFiRecommended = 11,
    AppInstallState_PausedWiFiRequired = 12,
    AppInstallState_ReadyToDownload = 13,
};
enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallType
{
    AppInstallType_Install = 0,
    AppInstallType_Update = 1,
    AppInstallType_Repair = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallationToastNotificationMode
{
    AppInstallationToastNotificationMode_Default = 0,
    AppInstallationToastNotificationMode_Toast = 1,
    AppInstallationToastNotificationMode_ToastWithoutPopup = 2,
    AppInstallationToastNotificationMode_NoToast = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAutoUpdateSetting
{
    AutoUpdateSetting_Disabled = 0,
    AutoUpdateSetting_Enabled = 1,
    AutoUpdateSetting_DisabledByPolicy = 2,
    AutoUpdateSetting_EnabledByPolicy = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CGetEntitlementStatus
{
    GetEntitlementStatus_Succeeded = 0,
    GetEntitlementStatus_NoStoreAccount = 1,
    GetEntitlementStatus_NetworkError = 2,
    GetEntitlementStatus_ServerError = 3,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PackageFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InstallType )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsUserInitiated )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentStatus )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *Cancel )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This
        );
    HRESULT ( STDMETHODCALLTYPE *Pause )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This
        );
    HRESULT ( STDMETHODCALLTYPE *Restart )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Completed )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Completed )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItemVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProductId(This,value) )
    ( (This)->lpVtbl->get_PackageFamilyName(This,value) )
    ( (This)->lpVtbl->get_InstallType(This,value) )
    ( (This)->lpVtbl->get_IsUserInitiated(This,value) )
    ( (This)->lpVtbl->GetCurrentStatus(This,result) )
    ( (This)->lpVtbl->Cancel(This) )
    ( (This)->lpVtbl->Pause(This) )
    ( (This)->lpVtbl->Restart(This) )
    ( (This)->lpVtbl->add_Completed(This,handler,token) )
    ( (This)->lpVtbl->remove_Completed(This,token) )
    ( (This)->lpVtbl->add_StatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_StatusChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem2[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem2";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CancelWithTelemetry )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 * This,
                  __RPC__in HSTRING correlationVector
        );
                    HRESULT ( STDMETHODCALLTYPE *PauseWithTelemetry )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 * This,
                  __RPC__in HSTRING correlationVector
        );
                    HRESULT ( STDMETHODCALLTYPE *RestartWithTelemetry )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 * This,
                  __RPC__in HSTRING correlationVector
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CancelWithTelemetry(This,correlationVector) )
    ( (This)->lpVtbl->PauseWithTelemetry(This,correlationVector) )
    ( (This)->lpVtbl->RestartWithTelemetry(This,correlationVector) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem3[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem3";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Children )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemOperationsMightAffectOtherItems )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Children(This,value) )
    ( (This)->lpVtbl->get_ItemOperationsMightAffectOtherItems(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem4[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem4";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LaunchAfterInstall )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem4 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LaunchAfterInstall )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem4 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem4Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem4
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LaunchAfterInstall(This,value) )
    ( (This)->lpVtbl->put_LaunchAfterInstall(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem5[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem5";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PinToDesktopAfterInstall )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PinToDesktopAfterInstall )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PinToStartAfterInstall )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PinToStartAfterInstall )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PinToTaskbarAfterInstall )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PinToTaskbarAfterInstall )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CompletedInstallToastNotificationMode )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallationToastNotificationMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CompletedInstallToastNotificationMode )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5 * This,
                  __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallationToastNotificationMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InstallInProgressToastNotificationMode )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallationToastNotificationMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InstallInProgressToastNotificationMode )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5 * This,
                  __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallationToastNotificationMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PinToDesktopAfterInstall(This,value) )
    ( (This)->lpVtbl->put_PinToDesktopAfterInstall(This,value) )
    ( (This)->lpVtbl->get_PinToStartAfterInstall(This,value) )
    ( (This)->lpVtbl->put_PinToStartAfterInstall(This,value) )
    ( (This)->lpVtbl->get_PinToTaskbarAfterInstall(This,value) )
    ( (This)->lpVtbl->put_PinToTaskbarAfterInstall(This,value) )
    ( (This)->lpVtbl->get_CompletedInstallToastNotificationMode(This,value) )
    ( (This)->lpVtbl->put_CompletedInstallToastNotificationMode(This,value) )
    ( (This)->lpVtbl->get_InstallInProgressToastNotificationMode(This,value) )
    ( (This)->lpVtbl->put_InstallInProgressToastNotificationMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppInstallItems )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Cancel )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                  __RPC__in HSTRING productId
        );
    HRESULT ( STDMETHODCALLTYPE *Pause )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                  __RPC__in HSTRING productId
        );
    HRESULT ( STDMETHODCALLTYPE *Restart )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                  __RPC__in HSTRING productId
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ItemCompleted )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ItemCompleted )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ItemStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ItemStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoUpdateSetting )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAutoUpdateSetting * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutoUpdateSetting )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                  __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAutoUpdateSetting value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AcquisitionIdentity )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AcquisitionIdentity )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsApplicableAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING skuId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StartAppInstallAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING skuId,
                  boolean repair,
                  boolean forceUseOfNonRemovableStorage,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateAppByPackageFamilyNameAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                  __RPC__in HSTRING packageFamilyName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SearchForUpdatesAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING skuId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SearchForAllUpdatesAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *IsStoreBlockedByPolicyAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                  __RPC__in HSTRING storeClientName,
                  __RPC__in HSTRING storeClientPublisher,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsAppAllowedToInstallAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
                  __RPC__in HSTRING productId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppInstallItems(This,value) )
    ( (This)->lpVtbl->Cancel(This,productId) )
    ( (This)->lpVtbl->Pause(This,productId) )
    ( (This)->lpVtbl->Restart(This,productId) )
    ( (This)->lpVtbl->add_ItemCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_ItemCompleted(This,token) )
    ( (This)->lpVtbl->add_ItemStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ItemStatusChanged(This,token) )
    ( (This)->lpVtbl->get_AutoUpdateSetting(This,value) )
    ( (This)->lpVtbl->put_AutoUpdateSetting(This,value) )
    ( (This)->lpVtbl->get_AcquisitionIdentity(This,value) )
    ( (This)->lpVtbl->put_AcquisitionIdentity(This,value) )
    ( (This)->lpVtbl->GetIsApplicableAsync(This,productId,skuId,operation) )
    ( (This)->lpVtbl->StartAppInstallAsync(This,productId,skuId,repair,forceUseOfNonRemovableStorage,operation) )
    ( (This)->lpVtbl->UpdateAppByPackageFamilyNameAsync(This,packageFamilyName,operation) )
    ( (This)->lpVtbl->SearchForUpdatesAsync(This,productId,skuId,operation) )
    ( (This)->lpVtbl->SearchForAllUpdatesAsync(This,operation) )
    ( (This)->lpVtbl->IsStoreBlockedByPolicyAsync(This,storeClientName,storeClientPublisher,operation) )
    ( (This)->lpVtbl->GetIsAppAllowedToInstallAsync(This,productId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager2[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager2";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *StartAppInstallWithTelemetryAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING skuId,
                  boolean repair,
                  boolean forceUseOfNonRemovableStorage,
                  __RPC__in HSTRING catalogId,
                  __RPC__in HSTRING bundleId,
                  __RPC__in HSTRING correlationVector,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *UpdateAppByPackageFamilyNameWithTelemetryAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
                  __RPC__in HSTRING packageFamilyName,
                  __RPC__in HSTRING correlationVector,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *SearchForUpdatesWithTelemetryAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING skuId,
                  __RPC__in HSTRING catalogId,
                  __RPC__in HSTRING correlationVector,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *SearchForAllUpdatesWithTelemetryAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
                  __RPC__in HSTRING correlationVector,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetIsAppAllowedToInstallWithTelemetryAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING skuId,
                  __RPC__in HSTRING catalogId,
                  __RPC__in HSTRING correlationVector,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CancelWithTelemetry )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING correlationVector
        );
                    HRESULT ( STDMETHODCALLTYPE *PauseWithTelemetry )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING correlationVector
        );
                    HRESULT ( STDMETHODCALLTYPE *RestartWithTelemetry )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING correlationVector
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StartAppInstallWithTelemetryAsync(This,productId,skuId,repair,forceUseOfNonRemovableStorage,catalogId,bundleId,correlationVector,operation) )
    ( (This)->lpVtbl->UpdateAppByPackageFamilyNameWithTelemetryAsync(This,packageFamilyName,correlationVector,operation) )
    ( (This)->lpVtbl->SearchForUpdatesWithTelemetryAsync(This,productId,skuId,catalogId,correlationVector,operation) )
    ( (This)->lpVtbl->SearchForAllUpdatesWithTelemetryAsync(This,correlationVector,operation) )
    ( (This)->lpVtbl->GetIsAppAllowedToInstallWithTelemetryAsync(This,productId,skuId,catalogId,correlationVector,operation) )
    ( (This)->lpVtbl->CancelWithTelemetry(This,productId,correlationVector) )
    ( (This)->lpVtbl->PauseWithTelemetry(This,productId,correlationVector) )
    ( (This)->lpVtbl->RestartWithTelemetry(This,productId,correlationVector) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager3[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager3";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StartProductInstallAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING catalogId,
                  __RPC__in HSTRING flightId,
                  __RPC__in HSTRING clientId,
                  boolean repair,
                  boolean forceUseOfNonRemovableStorage,
                  __RPC__in HSTRING correlationVector,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StartProductInstallForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING catalogId,
                  __RPC__in HSTRING flightId,
                  __RPC__in HSTRING clientId,
                  boolean repair,
                  boolean forceUseOfNonRemovableStorage,
                  __RPC__in HSTRING correlationVector,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateAppByPackageFamilyNameForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING packageFamilyName,
                  __RPC__in HSTRING correlationVector,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SearchForUpdatesForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING skuId,
                  __RPC__in HSTRING catalogId,
                  __RPC__in HSTRING correlationVector,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SearchForAllUpdatesForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING correlationVector,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsAppAllowedToInstallForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING skuId,
                  __RPC__in HSTRING catalogId,
                  __RPC__in HSTRING correlationVector,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsApplicableForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING skuId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *MoveToFrontOfDownloadQueue )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING correlationVector
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StartProductInstallAsync(This,productId,catalogId,flightId,clientId,repair,forceUseOfNonRemovableStorage,correlationVector,targetVolume,operation) )
    ( (This)->lpVtbl->StartProductInstallForUserAsync(This,user,productId,catalogId,flightId,clientId,repair,forceUseOfNonRemovableStorage,correlationVector,targetVolume,operation) )
    ( (This)->lpVtbl->UpdateAppByPackageFamilyNameForUserAsync(This,user,packageFamilyName,correlationVector,operation) )
    ( (This)->lpVtbl->SearchForUpdatesForUserAsync(This,user,productId,skuId,catalogId,correlationVector,operation) )
    ( (This)->lpVtbl->SearchForAllUpdatesForUserAsync(This,user,correlationVector,operation) )
    ( (This)->lpVtbl->GetIsAppAllowedToInstallForUserAsync(This,user,productId,skuId,catalogId,correlationVector,operation) )
    ( (This)->lpVtbl->GetIsApplicableForUserAsync(This,user,productId,skuId,operation) )
    ( (This)->lpVtbl->MoveToFrontOfDownloadQueue(This,productId,correlationVector) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager4[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager4";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetFreeUserEntitlementAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 * This,
                  __RPC__in HSTRING storeId,
                  __RPC__in HSTRING campaignId,
                  __RPC__in HSTRING correlationVector,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * * ppAsyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetFreeUserEntitlementForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING storeId,
                  __RPC__in HSTRING campaignId,
                  __RPC__in HSTRING correlationVector,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * * ppAsyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetFreeDeviceEntitlementAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 * This,
                  __RPC__in HSTRING storeId,
                  __RPC__in HSTRING campaignId,
                  __RPC__in HSTRING correlationVector,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * * ppAsyncOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetFreeUserEntitlementAsync(This,storeId,campaignId,correlationVector,ppAsyncOperation) )
    ( (This)->lpVtbl->GetFreeUserEntitlementForUserAsync(This,user,storeId,campaignId,correlationVector,ppAsyncOperation) )
    ( (This)->lpVtbl->GetFreeDeviceEntitlementAsync(This,storeId,campaignId,correlationVector,ppAsyncOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager5[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager5";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppInstallItemsWithGroupSupport )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppInstallItemsWithGroupSupport(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager6[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager6";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *SearchForAllUpdatesWithUpdateOptionsAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6 * This,
                  __RPC__in HSTRING correlationVector,
                  __RPC__in HSTRING clientId,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions * updateOptions,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *SearchForAllUpdatesWithUpdateOptionsForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING correlationVector,
                  __RPC__in HSTRING clientId,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions * updateOptions,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *SearchForUpdatesWithUpdateOptionsAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6 * This,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING skuId,
                  __RPC__in HSTRING correlationVector,
                  __RPC__in HSTRING clientId,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions * updateOptions,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *SearchForUpdatesWithUpdateOptionsForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING skuId,
                  __RPC__in HSTRING correlationVector,
                  __RPC__in HSTRING clientId,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions * updateOptions,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *StartProductInstallWithOptionsAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6 * This,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING flightId,
                  __RPC__in HSTRING clientId,
                  __RPC__in HSTRING correlationVector,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * installOptions,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *StartProductInstallWithOptionsForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING productId,
                  __RPC__in HSTRING flightId,
                  __RPC__in HSTRING clientId,
                  __RPC__in HSTRING correlationVector,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * installOptions,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsPackageIdentityAllowedToInstallAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6 * This,
                  __RPC__in HSTRING correlationVector,
                  __RPC__in HSTRING packageIdentityName,
                  __RPC__in HSTRING publisherCertificateName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsPackageIdentityAllowedToInstallForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING correlationVector,
                  __RPC__in HSTRING packageIdentityName,
                  __RPC__in HSTRING publisherCertificateName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SearchForAllUpdatesWithUpdateOptionsAsync(This,correlationVector,clientId,updateOptions,operation) )
    ( (This)->lpVtbl->SearchForAllUpdatesWithUpdateOptionsForUserAsync(This,user,correlationVector,clientId,updateOptions,operation) )
    ( (This)->lpVtbl->SearchForUpdatesWithUpdateOptionsAsync(This,productId,skuId,correlationVector,clientId,updateOptions,operation) )
    ( (This)->lpVtbl->SearchForUpdatesWithUpdateOptionsForUserAsync(This,user,productId,skuId,correlationVector,clientId,updateOptions,operation) )
    ( (This)->lpVtbl->StartProductInstallWithOptionsAsync(This,productId,flightId,clientId,correlationVector,installOptions,operation) )
    ( (This)->lpVtbl->StartProductInstallWithOptionsForUserAsync(This,user,productId,flightId,clientId,correlationVector,installOptions,operation) )
    ( (This)->lpVtbl->GetIsPackageIdentityAllowedToInstallAsync(This,correlationVector,packageIdentityName,publisherCertificateName,operation) )
    ( (This)->lpVtbl->GetIsPackageIdentityAllowedToInstallForUserAsync(This,user,correlationVector,packageIdentityName,publisherCertificateName,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager7[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager7";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager7Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager7 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager7 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager7 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager7 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager7 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager7 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanInstallForAllUsers )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager7 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager7Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager7
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager7Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanInstallForAllUsers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager7;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManagerItemEventArgs[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManagerItemEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Item )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Item(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallOptions[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallOptions";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CatalogId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CatalogId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ForceUseOfNonRemovableStorage )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ForceUseOfNonRemovableStorage )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowForcedAppRestart )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowForcedAppRestart )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Repair )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Repair )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TargetVolume )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TargetVolume )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * This,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LaunchAfterInstall )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LaunchAfterInstall )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptionsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CatalogId(This,value) )
    ( (This)->lpVtbl->put_CatalogId(This,value) )
    ( (This)->lpVtbl->get_ForceUseOfNonRemovableStorage(This,value) )
    ( (This)->lpVtbl->put_ForceUseOfNonRemovableStorage(This,value) )
    ( (This)->lpVtbl->get_AllowForcedAppRestart(This,value) )
    ( (This)->lpVtbl->put_AllowForcedAppRestart(This,value) )
    ( (This)->lpVtbl->get_Repair(This,value) )
    ( (This)->lpVtbl->put_Repair(This,value) )
    ( (This)->lpVtbl->get_TargetVolume(This,value) )
    ( (This)->lpVtbl->put_TargetVolume(This,value) )
    ( (This)->lpVtbl->get_LaunchAfterInstall(This,value) )
    ( (This)->lpVtbl->put_LaunchAfterInstall(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallOptions2[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallOptions2";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PinToDesktopAfterInstall )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PinToDesktopAfterInstall )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PinToStartAfterInstall )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PinToStartAfterInstall )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PinToTaskbarAfterInstall )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PinToTaskbarAfterInstall )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CompletedInstallToastNotificationMode )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallationToastNotificationMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CompletedInstallToastNotificationMode )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                  __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallationToastNotificationMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InstallInProgressToastNotificationMode )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallationToastNotificationMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InstallInProgressToastNotificationMode )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                  __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallationToastNotificationMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InstallForAllUsers )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InstallForAllUsers )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StageButDoNotInstall )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StageButDoNotInstall )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CampaignId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CampaignId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedCampaignId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExtendedCampaignId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2 * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PinToDesktopAfterInstall(This,value) )
    ( (This)->lpVtbl->put_PinToDesktopAfterInstall(This,value) )
    ( (This)->lpVtbl->get_PinToStartAfterInstall(This,value) )
    ( (This)->lpVtbl->put_PinToStartAfterInstall(This,value) )
    ( (This)->lpVtbl->get_PinToTaskbarAfterInstall(This,value) )
    ( (This)->lpVtbl->put_PinToTaskbarAfterInstall(This,value) )
    ( (This)->lpVtbl->get_CompletedInstallToastNotificationMode(This,value) )
    ( (This)->lpVtbl->put_CompletedInstallToastNotificationMode(This,value) )
    ( (This)->lpVtbl->get_InstallInProgressToastNotificationMode(This,value) )
    ( (This)->lpVtbl->put_InstallInProgressToastNotificationMode(This,value) )
    ( (This)->lpVtbl->get_InstallForAllUsers(This,value) )
    ( (This)->lpVtbl->put_InstallForAllUsers(This,value) )
    ( (This)->lpVtbl->get_StageButDoNotInstall(This,value) )
    ( (This)->lpVtbl->put_StageButDoNotInstall(This,value) )
    ( (This)->lpVtbl->get_CampaignId(This,value) )
    ( (This)->lpVtbl->put_CampaignId(This,value) )
    ( (This)->lpVtbl->get_ExtendedCampaignId(This,value) )
    ( (This)->lpVtbl->put_ExtendedCampaignId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallOptions2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InstallState )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DownloadSizeInBytes )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BytesDownloaded )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PercentComplete )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatusVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatusVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InstallState(This,value) )
    ( (This)->lpVtbl->get_DownloadSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_BytesDownloaded(This,value) )
    ( (This)->lpVtbl->get_PercentComplete(This,value) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus2[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus2";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadyForLaunch )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_User(This,value) )
    ( (This)->lpVtbl->get_ReadyForLaunch(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus3[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus3";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsStaged )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus3 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsStaged(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppUpdateOptions[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppUpdateOptions";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CatalogId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CatalogId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowForcedAppRestart )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowForcedAppRestart )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptionsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CatalogId(This,value) )
    ( (This)->lpVtbl->put_CatalogId(This,value) )
    ( (This)->lpVtbl->get_AllowForcedAppRestart(This,value) )
    ( (This)->lpVtbl->put_AllowForcedAppRestart(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppUpdateOptions2[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppUpdateOptions2";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AutomaticallyDownloadAndInstallUpdateIfFound )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutomaticallyDownloadAndInstallUpdateIfFound )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions2 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AutomaticallyDownloadAndInstallUpdateIfFound(This,value) )
    ( (This)->lpVtbl->put_AutomaticallyDownloadAndInstallUpdateIfFound(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppUpdateOptions2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IGetEntitlementResult[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IGetEntitlementResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CGetEntitlementStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallItem[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallManager[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallManagerItemEventArgs[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManagerItemEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallOptions[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallStatus[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallStatus";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_InstallControl_AppUpdateOptions[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppUpdateOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_InstallControl_GetEntitlementResult[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.GetEntitlementResult";
       
