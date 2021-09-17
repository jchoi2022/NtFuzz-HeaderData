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
#include "Windows.Devices.Enumeration.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher;
typedef interface __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;
typedef struct __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl;
interface __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;
typedef struct __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl;
interface __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;
typedef struct __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                       __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl;
interface __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollectionVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollectionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This, __RPC__out __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollectionVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollectionVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdateVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIKeyValuePair_2_HSTRING_IInspectable __FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out __FIKeyValuePair_2_HSTRING_IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_IInspectable __FIMapView_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMapView_2_HSTRING_IInspectable;
typedef struct __FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt IInspectable * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_IInspectableVtbl;
interface __FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> Lookup(This,key,value) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> HasKey(This,key,found) )
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) )
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
typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherStatus __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherStatus;
typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType;
enum __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType
{
    PnpObjectType_Unknown = 0,
    PnpObjectType_DeviceInterface = 1,
    PnpObjectType_DeviceContainer = 2,
    PnpObjectType_Device = 3,
    PnpObjectType_DeviceInterfaceClass = 4,
    PnpObjectType_AssociationEndpoint = 5,
    PnpObjectType_AssociationEndpointContainer = 6,
    PnpObjectType_AssociationEndpointService = 7,
    PnpObjectType_DevicePanel = 8,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_Pnp_IPnpObject[] = L"Windows.Devices.Enumeration.Pnp.IPnpObject";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Update )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * updateInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->Update(This,updateInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_Pnp_IPnpObjectStatics[] = L"Windows.Devices.Enumeration.Pnp.IPnpObjectStatics";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromIdAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This,
                  __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType type,
                  __RPC__in HSTRING id,
                  __RPC__in_opt __FIIterable_1_HSTRING * requestedProperties,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * * asyncOp
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This,
                  __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType type,
                  __RPC__in_opt __FIIterable_1_HSTRING * requestedProperties,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * * asyncOp
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAllAsyncAqsFilter )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This,
                  __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType type,
                  __RPC__in_opt __FIIterable_1_HSTRING * requestedProperties,
                  __RPC__in HSTRING aqsFilter,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * * asyncOp
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateWatcher )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This,
                  __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType type,
                  __RPC__in_opt __FIIterable_1_HSTRING * requestedProperties,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * * watcher
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateWatcherAqsFilter )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This,
                  __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType type,
                  __RPC__in_opt __FIIterable_1_HSTRING * requestedProperties,
                  __RPC__in HSTRING aqsFilter,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * * watcher
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromIdAsync(This,type,id,requestedProperties,asyncOp) )
    ( (This)->lpVtbl->FindAllAsync(This,type,requestedProperties,asyncOp) )
    ( (This)->lpVtbl->FindAllAsyncAqsFilter(This,type,requestedProperties,aqsFilter,asyncOp) )
    ( (This)->lpVtbl->CreateWatcher(This,type,requestedProperties,watcher) )
    ( (This)->lpVtbl->CreateWatcherAqsFilter(This,type,requestedProperties,aqsFilter,watcher) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_Pnp_IPnpObjectUpdate[] = L"Windows.Devices.Enumeration.Pnp.IPnpObjectUpdate";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdateVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdateVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher[] = L"Windows.Devices.Enumeration.Pnp.IPnpObjectWatcher";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Added )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Added )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Updated )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Updated )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Removed )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Removed )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherStatus * status
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcherVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Added(This,handler,token) )
    ( (This)->lpVtbl->remove_Added(This,token) )
    ( (This)->lpVtbl->add_Updated(This,handler,token) )
    ( (This)->lpVtbl->remove_Updated(This,token) )
    ( (This)->lpVtbl->add_Removed(This,handler,token) )
    ( (This)->lpVtbl->remove_Removed(This,token) )
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )
    ( (This)->lpVtbl->remove_Stopped(This,token) )
    ( (This)->lpVtbl->get_Status(This,status) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_Pnp_PnpObject[] = L"Windows.Devices.Enumeration.Pnp.PnpObject";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_Pnp_PnpObjectCollection[] = L"Windows.Devices.Enumeration.Pnp.PnpObjectCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_Pnp_PnpObjectUpdate[] = L"Windows.Devices.Enumeration.Pnp.PnpObjectUpdate";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_Pnp_PnpObjectWatcher[] = L"Windows.Devices.Enumeration.Pnp.PnpObjectWatcher";
       
       
#pragma clang diagnostic pop
