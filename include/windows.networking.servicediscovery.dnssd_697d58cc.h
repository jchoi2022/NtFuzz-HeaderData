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
#include "Windows.Networking.h"
#include "Windows.Networking.Connectivity.h"
#include "Windows.Networking.Sockets.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult;
typedef interface __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance;
typedef interface __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory;
typedef interface __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher;
typedef interface __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance;
typedef struct __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This, __RPC__out __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl;
interface __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance;
typedef struct __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl;
interface __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance;
typedef struct __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
                       __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl;
interface __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * This, __RPC__out __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResultVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResultVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstanceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;
typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt HSTRING *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;
interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING_HSTRING __FIMap_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIMap_2_HSTRING_HSTRING;
typedef struct __FIMap_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   HSTRING key,
                            __RPC__deref_out_opt HSTRING **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   HSTRING key,
                   __RPC__in_opt HSTRING *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    END_INTERFACE
} __FIMap_2_HSTRING_HSTRINGVtbl;
interface __FIMap_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMap_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) )
    ( (This)->lpVtbl -> Remove(This,key) )
    ( (This)->lpVtbl -> Clear(This) )
typedef interface __x_ABI_CWindows_CFoundation_CIStringable __x_ABI_CWindows_CFoundation_CIStringable;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter;
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener;
typedef enum __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CDnssdRegistrationStatus __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CDnssdRegistrationStatus;
typedef enum __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CDnssdServiceWatcherStatus __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CDnssdServiceWatcherStatus;
enum __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CDnssdRegistrationStatus
{
    DnssdRegistrationStatus_Success = 0,
    DnssdRegistrationStatus_InvalidServiceName = 1,
    DnssdRegistrationStatus_ServerError = 2,
    DnssdRegistrationStatus_SecurityError = 3,
};
enum __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CDnssdServiceWatcherStatus
{
    DnssdServiceWatcherStatus_Created = 0,
    DnssdServiceWatcherStatus_Started = 1,
    DnssdServiceWatcherStatus_EnumerationCompleted = 2,
    DnssdServiceWatcherStatus_Stopping = 3,
    DnssdServiceWatcherStatus_Stopped = 4,
    DnssdServiceWatcherStatus_Aborted = 5,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdRegistrationResult[] = L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdRegistrationResult";
typedef struct __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CDnssdRegistrationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IPAddress )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasInstanceNameChanged )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResultVtbl;
interface __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_IPAddress(This,value) )
    ( (This)->lpVtbl->get_HasInstanceNameChanged(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdRegistrationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance[] = L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstance";
typedef struct __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DnssdServiceInstanceName )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DnssdServiceInstanceName )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HostName )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HostName )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Port )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Port )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
                  UINT16 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Priority )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Priority )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
                  UINT16 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Weight )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Weight )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
                  UINT16 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TextAttributes )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *RegisterStreamSocketListenerAsync1 )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * socket,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RegisterStreamSocketListenerAsync2 )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * socket,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * adapter,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RegisterDatagramSocketAsync1 )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * socket,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RegisterDatagramSocketAsync2 )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * socket,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * adapter,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdRegistrationResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceVtbl;
interface __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DnssdServiceInstanceName(This,value) )
    ( (This)->lpVtbl->put_DnssdServiceInstanceName(This,value) )
    ( (This)->lpVtbl->get_HostName(This,value) )
    ( (This)->lpVtbl->put_HostName(This,value) )
    ( (This)->lpVtbl->get_Port(This,value) )
    ( (This)->lpVtbl->put_Port(This,value) )
    ( (This)->lpVtbl->get_Priority(This,value) )
    ( (This)->lpVtbl->put_Priority(This,value) )
    ( (This)->lpVtbl->get_Weight(This,value) )
    ( (This)->lpVtbl->put_Weight(This,value) )
    ( (This)->lpVtbl->get_TextAttributes(This,value) )
    ( (This)->lpVtbl->RegisterStreamSocketListenerAsync1(This,socket,result) )
    ( (This)->lpVtbl->RegisterStreamSocketListenerAsync2(This,socket,adapter,result) )
    ( (This)->lpVtbl->RegisterDatagramSocketAsync1(This,socket,result) )
    ( (This)->lpVtbl->RegisterDatagramSocketAsync2(This,socket,adapter,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstanceFactory[] = L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstanceFactory";
typedef struct __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory * This,
                  __RPC__in HSTRING dnssdServiceInstanceName,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * hostName,
                  UINT16 port,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstance * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactoryVtbl;
interface __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,dnssdServiceInstanceName,hostName,port,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceInstanceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher[] = L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceWatcher";
typedef struct __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Added )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceInstance * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Added )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CServiceDiscovery__CDnssd__CDnssdServiceWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CDnssdServiceWatcherStatus * status
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcherVtbl;
interface __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Added(This,handler,token) )
    ( (This)->lpVtbl->remove_Added(This,token) )
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )
    ( (This)->lpVtbl->remove_Stopped(This,token) )
    ( (This)->lpVtbl->get_Status(This,status) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CServiceDiscovery_CDnssd_CIDnssdServiceWatcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_ServiceDiscovery_Dnssd_DnssdRegistrationResult[] = L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdRegistrationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceInstance[] = L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceInstanceCollection[] = L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstanceCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_ServiceDiscovery_Dnssd_DnssdServiceWatcher[] = L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceWatcher";
       
       
#pragma clang diagnostic pop
