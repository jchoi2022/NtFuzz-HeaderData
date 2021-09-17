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
typedef interface __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapability __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapability;
typedef interface __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityAccessChangedEventArgs __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityAccessChangedEventArgs;
typedef interface __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityStatics __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityStatics;
enum __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CAppCapabilityAccessStatus;
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus __FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__deref_out_opt enum __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CAppCapabilityAccessStatus *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus __FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus;
typedef struct __FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt enum __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CAppCapabilityAccessStatus *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl;
interface __FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus;
typedef interface __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus;
typedef struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__in_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus;
EXTERN_C const IID IID___FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus;
typedef struct __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__out __FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl;
interface __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus __FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus __FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * This, __RPC__out enum __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CAppCapabilityAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatusVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapability_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessChangedEventArgs __FITypedEventHandler_2_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapability_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapability_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapability_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapability_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapability_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapability_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapability_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapability * sender, __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityAccessChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapability_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapability_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapability_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessChangedEventArgsVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CAppCapabilityAccessStatus __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CAppCapabilityAccessStatus;
enum __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CAppCapabilityAccessStatus
{
    AppCapabilityAccessStatus_DeniedBySystem = 0,
    AppCapabilityAccessStatus_NotDeclaredByApp = 1,
    AppCapabilityAccessStatus_DeniedByUser = 2,
    AppCapabilityAccessStatus_UserPromptRequired = 3,
    AppCapabilityAccessStatus_Allowed = 4,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authorization_AppCapabilityAccess_IAppCapability[] = L"Windows.Security.Authorization.AppCapabilityAccess.IAppCapability";
typedef struct __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapability * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapability * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapability * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapability * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapability * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapability * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CapabilityName )(
        __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapability * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapability * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapability * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CheckAccess )(
        __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapability * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CAppCapabilityAccessStatus * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AccessChanged )(
        __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapability * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapability_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AccessChanged )(
        __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapability * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapability
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CapabilityName(This,value) )
    ( (This)->lpVtbl->get_User(This,value) )
    ( (This)->lpVtbl->RequestAccessAsync(This,operation) )
    ( (This)->lpVtbl->CheckAccess(This,result) )
    ( (This)->lpVtbl->add_AccessChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_AccessChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapability;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authorization_AppCapabilityAccess_IAppCapabilityAccessChangedEventArgs[] = L"Windows.Security.Authorization.AppCapabilityAccess.IAppCapabilityAccessChangedEventArgs";
typedef struct __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityAccessChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityAccessChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityAccessChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityAccessChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityAccessChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityAccessChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityAccessChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityAccessChangedEventArgsVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityAccessChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityAccessChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityAccessChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authorization_AppCapabilityAccess_IAppCapabilityStatics[] = L"Windows.Security.Authorization.AppCapabilityAccess.IAppCapabilityStatics";
typedef struct __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestAccessForCapabilitiesAsync )(
        __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityStatics * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * capabilityNames,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAccessForCapabilitiesForUserAsync )(
        __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in_opt __FIIterable_1_HSTRING * capabilityNames,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CSecurity__CAuthorization__CAppCapabilityAccess__CAppCapabilityAccessStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityStatics * This,
                  __RPC__in HSTRING capabilityName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapability * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithProcessIdForUser )(
        __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING capabilityName,
                  UINT32 pid,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapability * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestAccessForCapabilitiesAsync(This,capabilityNames,operation) )
    ( (This)->lpVtbl->RequestAccessForCapabilitiesForUserAsync(This,user,capabilityNames,operation) )
    ( (This)->lpVtbl->Create(This,capabilityName,result) )
    ( (This)->lpVtbl->CreateWithProcessIdForUser(This,user,capabilityName,pid,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthorization_CAppCapabilityAccess_CIAppCapabilityStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authorization_AppCapabilityAccess_AppCapability[] = L"Windows.Security.Authorization.AppCapabilityAccess.AppCapability";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authorization_AppCapabilityAccess_AppCapabilityAccessChangedEventArgs[] = L"Windows.Security.Authorization.AppCapabilityAccess.AppCapabilityAccessChangedEventArgs";
       
       
#pragma clang diagnostic pop
