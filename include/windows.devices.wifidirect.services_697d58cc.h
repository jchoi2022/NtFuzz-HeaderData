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
#include "Windows.Networking.h"
#include "Windows.Networking.Sockets.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiserFactory __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiserFactory;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAutoAcceptSessionConnectedEventArgs __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAutoAcceptSessionConnectedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceProvisioningInfo __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceProvisioningInfo;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceRemotePortAddedEventArgs __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceRemotePortAddedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionDeferredEventArgs __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionDeferredEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequest __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequest;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequestedEventArgs __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequestedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceStatics __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceStatics;
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceConfigurationMethod;
typedef interface __FIIterator_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod __FIIterator_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod;
typedef struct __FIIterator_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethodVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This, __RPC__out enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceConfigurationMethod *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceConfigurationMethod *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethodVtbl;
interface __FIIterator_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethodVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod __FIIterable_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod;
typedef struct __FIIterable_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethodVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethodVtbl;
interface __FIIterable_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethodVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod __FIVectorView_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod;
typedef struct __FIVectorView_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethodVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceConfigurationMethod *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                       enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceConfigurationMethod item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceConfigurationMethod *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethodVtbl;
interface __FIVectorView_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethodVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod;
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod;
typedef struct __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethodVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This, __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceConfigurationMethod *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                   unsigned int index,
                            __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceConfigurationMethod *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceConfigurationMethod item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceConfigurationMethod item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceConfigurationMethod item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This, __RPC__in enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceConfigurationMethod item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceConfigurationMethod *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceConfigurationMethod *value);
    END_INTERFACE
} __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethodVtbl;
interface __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethodVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService * This, __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfoVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo * This, __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceProvisioningInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfoVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession * This, __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionDeferredEventArgs __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionDeferredEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionDeferredEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionDeferredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionDeferredEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionDeferredEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionDeferredEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionDeferredEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionDeferredEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionDeferredEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionDeferredEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionDeferredEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_IInspectable __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAutoAcceptSessionConnectedEventArgs __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAutoAcceptSessionConnectedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAutoAcceptSessionConnectedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAutoAcceptSessionConnectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAutoAcceptSessionConnectedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAutoAcceptSessionConnectedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAutoAcceptSessionConnectedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAutoAcceptSessionConnectedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAutoAcceptSessionConnectedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAutoAcceptSessionConnectedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAutoAcceptSessionConnectedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAutoAcceptSessionConnectedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionRequestedEventArgs __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_IInspectable __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceRemotePortAddedEventArgs __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceRemotePortAddedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceRemotePortAddedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceRemotePortAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceRemotePortAddedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceRemotePortAddedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceRemotePortAddedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceRemotePortAddedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceRemotePortAddedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceRemotePortAddedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceRemotePortAddedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceRemotePortAddedEventArgsVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CNetworking_CIEndpointPair __x_ABI_CWindows_CNetworking_CIEndpointPair;
typedef interface __FIIterator_1_Windows__CNetworking__CEndpointPair __FIIterator_1_Windows__CNetworking__CEndpointPair;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CEndpointPair;
typedef struct __FIIterator_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, __RPC__out __x_ABI_CWindows_CNetworking_CIEndpointPair * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIEndpointPair * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CEndpointPairVtbl;
interface __FIIterator_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CEndpointPair __FIIterable_1_Windows__CNetworking__CEndpointPair;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CEndpointPair;
typedef struct __FIIterable_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CEndpointPair **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CEndpointPairVtbl;
interface __FIIterable_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CNetworking__CEndpointPair __FIVectorView_1_Windows__CNetworking__CEndpointPair;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CEndpointPair;
typedef struct __FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CIEndpointPair * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                       __x_ABI_CWindows_CNetworking_CIEndpointPair * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIEndpointPair * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl;
interface __FIVectorView_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceAdvertisementStatus __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceAdvertisementStatus;
typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceConfigurationMethod __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceConfigurationMethod;
typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceError __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceError;
typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceIPProtocol __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceIPProtocol;
typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceSessionErrorStatus __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceSessionErrorStatus;
typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceSessionStatus __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceSessionStatus;
typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceStatus __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceStatus;
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceAdvertisementStatus
{
    WiFiDirectServiceAdvertisementStatus_Created = 0,
    WiFiDirectServiceAdvertisementStatus_Started = 1,
    WiFiDirectServiceAdvertisementStatus_Stopped = 2,
    WiFiDirectServiceAdvertisementStatus_Aborted = 3,
};
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceConfigurationMethod
{
    WiFiDirectServiceConfigurationMethod_Default = 0,
    WiFiDirectServiceConfigurationMethod_PinDisplay = 1,
    WiFiDirectServiceConfigurationMethod_PinEntry = 2,
};
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceError
{
    WiFiDirectServiceError_Success = 0,
    WiFiDirectServiceError_RadioNotAvailable = 1,
    WiFiDirectServiceError_ResourceInUse = 2,
    WiFiDirectServiceError_UnsupportedHardware = 3,
    WiFiDirectServiceError_NoHardware = 4,
};
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceIPProtocol
{
    WiFiDirectServiceIPProtocol_Tcp = 6,
    WiFiDirectServiceIPProtocol_Udp = 17,
};
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceSessionErrorStatus
{
    WiFiDirectServiceSessionErrorStatus_Ok = 0,
    WiFiDirectServiceSessionErrorStatus_Disassociated = 1,
    WiFiDirectServiceSessionErrorStatus_LocalClose = 2,
    WiFiDirectServiceSessionErrorStatus_RemoteClose = 3,
    WiFiDirectServiceSessionErrorStatus_SystemFailure = 4,
    WiFiDirectServiceSessionErrorStatus_NoResponseFromRemote = 5,
};
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceSessionStatus
{
    WiFiDirectServiceSessionStatus_Closed = 0,
    WiFiDirectServiceSessionStatus_Initiated = 1,
    WiFiDirectServiceSessionStatus_Requested = 2,
    WiFiDirectServiceSessionStatus_Open = 3,
};
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceStatus
{
    WiFiDirectServiceStatus_Available = 0,
    WiFiDirectServiceStatus_Busy = 1,
    WiFiDirectServiceStatus_Custom = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_Services_IWiFiDirectService[] = L"Windows.Devices.WiFiDirect.Services.IWiFiDirectService";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RemoteServiceInfo )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedConfigurationMethods )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreferGroupOwnerMode )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PreferGroupOwnerMode )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SessionInfo )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SessionInfo )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceError )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceError * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SessionDeferred )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionDeferredEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SessionDeferred )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetProvisioningInfoAsync )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * This,
                  __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceConfigurationMethod selectedConfigurationMethod,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceProvisioningInfo * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *ConnectAsync )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *ConnectAsyncWithPin )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService * This,
                  __RPC__in HSTRING pin,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RemoteServiceInfo(This,value) )
    ( (This)->lpVtbl->get_SupportedConfigurationMethods(This,value) )
    ( (This)->lpVtbl->get_PreferGroupOwnerMode(This,value) )
    ( (This)->lpVtbl->put_PreferGroupOwnerMode(This,value) )
    ( (This)->lpVtbl->get_SessionInfo(This,value) )
    ( (This)->lpVtbl->put_SessionInfo(This,value) )
    ( (This)->lpVtbl->get_ServiceError(This,value) )
    ( (This)->lpVtbl->add_SessionDeferred(This,handler,token) )
    ( (This)->lpVtbl->remove_SessionDeferred(This,token) )
    ( (This)->lpVtbl->GetProvisioningInfoAsync(This,selectedConfigurationMethod,result) )
    ( (This)->lpVtbl->ConnectAsync(This,result) )
    ( (This)->lpVtbl->ConnectAsyncWithPin(This,pin,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectService;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiser[] = L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceAdvertiser";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServiceName )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceNamePrefixes )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceInfo )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ServiceInfo )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoAcceptSession )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutoAcceptSession )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreferGroupOwnerMode )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PreferGroupOwnerMode )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreferredConfigurationMethods )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceConfigurationMethod * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceStatus )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ServiceStatus )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                  __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceStatus value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomServiceStatusCode )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CustomServiceStatusCode )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeferredSessionInfo )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DeferredSessionInfo )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AdvertisementStatus )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceAdvertisementStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceError )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceError * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SessionRequested )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSessionRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SessionRequested )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AutoAcceptSessionConnected )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAutoAcceptSessionConnectedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AutoAcceptSessionConnected )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AdvertisementStatusChanged )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceAdvertiser_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AdvertisementStatusChanged )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *ConnectAsync )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * deviceInfo,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *ConnectAsyncWithPin )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * deviceInfo,
                  __RPC__in HSTRING pin,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession * * result
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiserVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiserVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServiceName(This,value) )
    ( (This)->lpVtbl->get_ServiceNamePrefixes(This,value) )
    ( (This)->lpVtbl->get_ServiceInfo(This,value) )
    ( (This)->lpVtbl->put_ServiceInfo(This,value) )
    ( (This)->lpVtbl->get_AutoAcceptSession(This,value) )
    ( (This)->lpVtbl->put_AutoAcceptSession(This,value) )
    ( (This)->lpVtbl->get_PreferGroupOwnerMode(This,value) )
    ( (This)->lpVtbl->put_PreferGroupOwnerMode(This,value) )
    ( (This)->lpVtbl->get_PreferredConfigurationMethods(This,value) )
    ( (This)->lpVtbl->get_ServiceStatus(This,value) )
    ( (This)->lpVtbl->put_ServiceStatus(This,value) )
    ( (This)->lpVtbl->get_CustomServiceStatusCode(This,value) )
    ( (This)->lpVtbl->put_CustomServiceStatusCode(This,value) )
    ( (This)->lpVtbl->get_DeferredSessionInfo(This,value) )
    ( (This)->lpVtbl->put_DeferredSessionInfo(This,value) )
    ( (This)->lpVtbl->get_AdvertisementStatus(This,value) )
    ( (This)->lpVtbl->get_ServiceError(This,value) )
    ( (This)->lpVtbl->add_SessionRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_SessionRequested(This,token) )
    ( (This)->lpVtbl->add_AutoAcceptSessionConnected(This,handler,token) )
    ( (This)->lpVtbl->remove_AutoAcceptSessionConnected(This,token) )
    ( (This)->lpVtbl->add_AdvertisementStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_AdvertisementStatusChanged(This,token) )
    ( (This)->lpVtbl->ConnectAsync(This,deviceInfo,result) )
    ( (This)->lpVtbl->ConnectAsyncWithPin(This,deviceInfo,pin,result) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAdvertiserFactory[] = L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceAdvertiserFactory";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiserFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiserFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiserFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiserFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiserFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiserFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiserFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWiFiDirectServiceAdvertiser )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiserFactory * This,
                  __RPC__in HSTRING serviceName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiser * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiserFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiserFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiserFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWiFiDirectServiceAdvertiser(This,serviceName,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAdvertiserFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs[] = L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAutoAcceptSessionConnectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAutoAcceptSessionConnectedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAutoAcceptSessionConnectedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAutoAcceptSessionConnectedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAutoAcceptSessionConnectedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAutoAcceptSessionConnectedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAutoAcceptSessionConnectedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAutoAcceptSessionConnectedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SessionInfo )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAutoAcceptSessionConnectedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAutoAcceptSessionConnectedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAutoAcceptSessionConnectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAutoAcceptSessionConnectedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Session(This,value) )
    ( (This)->lpVtbl->get_SessionInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceAutoAcceptSessionConnectedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceProvisioningInfo[] = L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceProvisioningInfo";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceProvisioningInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceProvisioningInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceProvisioningInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceProvisioningInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceProvisioningInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceProvisioningInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceProvisioningInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SelectedConfigurationMethod )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceProvisioningInfo * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceConfigurationMethod * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsGroupFormationNeeded )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceProvisioningInfo * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceProvisioningInfoVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceProvisioningInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceProvisioningInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SelectedConfigurationMethod(This,value) )
    ( (This)->lpVtbl->get_IsGroupFormationNeeded(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceProvisioningInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceRemotePortAddedEventArgs[] = L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceRemotePortAddedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceRemotePortAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceRemotePortAddedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceRemotePortAddedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceRemotePortAddedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceRemotePortAddedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceRemotePortAddedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceRemotePortAddedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EndpointPairs )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceRemotePortAddedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CEndpointPair * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Protocol )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceRemotePortAddedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceIPProtocol * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceRemotePortAddedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceRemotePortAddedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceRemotePortAddedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EndpointPairs(This,value) )
    ( (This)->lpVtbl->get_Protocol(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceRemotePortAddedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSession[] = L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceSession";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServiceName )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceSessionStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorStatus )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CWiFiDirectServiceSessionErrorStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SessionId )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AdvertisementId )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceAddress )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SessionAddress )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetConnectionEndpointPairs )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CEndpointPair * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SessionStatusChanged )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SessionStatusChanged )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *AddStreamSocketListenerAsync )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *AddDatagramSocketAsync )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RemotePortAdded )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceSession_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectServiceRemotePortAddedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RemotePortAdded )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServiceName(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_ErrorStatus(This,value) )
    ( (This)->lpVtbl->get_SessionId(This,value) )
    ( (This)->lpVtbl->get_AdvertisementId(This,value) )
    ( (This)->lpVtbl->get_ServiceAddress(This,value) )
    ( (This)->lpVtbl->get_SessionAddress(This,value) )
    ( (This)->lpVtbl->GetConnectionEndpointPairs(This,value) )
    ( (This)->lpVtbl->add_SessionStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SessionStatusChanged(This,token) )
    ( (This)->lpVtbl->AddStreamSocketListenerAsync(This,value,result) )
    ( (This)->lpVtbl->AddDatagramSocketAsync(This,value,result) )
    ( (This)->lpVtbl->add_RemotePortAdded(This,handler,token) )
    ( (This)->lpVtbl->remove_RemotePortAdded(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionDeferredEventArgs[] = L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceSessionDeferredEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionDeferredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionDeferredEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionDeferredEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionDeferredEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionDeferredEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionDeferredEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionDeferredEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeferredSessionInfo )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionDeferredEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionDeferredEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionDeferredEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionDeferredEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeferredSessionInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionDeferredEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionRequest[] = L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceSessionRequest";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceInformation )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProvisioningInfo )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceProvisioningInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SessionInfo )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequestVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceInformation(This,value) )
    ( (This)->lpVtbl->get_ProvisioningInfo(This,value) )
    ( (This)->lpVtbl->get_SessionInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceSessionRequestedEventArgs[] = L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceSessionRequestedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetSessionRequest )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetSessionRequest(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceSessionRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_Services_IWiFiDirectServiceStatics[] = L"Windows.Devices.WiFiDirect.Services.IWiFiDirectServiceStatics";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetSelector )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceStatics * This,
                  __RPC__in HSTRING serviceName,
                           __RPC__deref_out_opt HSTRING * serviceSelector
        );
                    HRESULT ( STDMETHODCALLTYPE *GetSelectorWithFilter )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceStatics * This,
                  __RPC__in HSTRING serviceName,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * serviceInfoFilter,
                           __RPC__deref_out_opt HSTRING * serviceSelector
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CServices__CWiFiDirectService * * asyncOp
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetSelector(This,serviceName,serviceSelector) )
    ( (This)->lpVtbl->GetSelectorWithFilter(This,serviceName,serviceInfoFilter,serviceSelector) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,asyncOp) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CServices_CIWiFiDirectServiceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_Services_WiFiDirectService[] = L"Windows.Devices.WiFiDirect.Services.WiFiDirectService";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_Services_WiFiDirectServiceAdvertiser[] = L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceAdvertiser";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_Services_WiFiDirectServiceAutoAcceptSessionConnectedEventArgs[] = L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceAutoAcceptSessionConnectedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_Services_WiFiDirectServiceProvisioningInfo[] = L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceProvisioningInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_Services_WiFiDirectServiceRemotePortAddedEventArgs[] = L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceRemotePortAddedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_Services_WiFiDirectServiceSession[] = L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_Services_WiFiDirectServiceSessionDeferredEventArgs[] = L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSessionDeferredEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_Services_WiFiDirectServiceSessionRequest[] = L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSessionRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_Services_WiFiDirectServiceSessionRequestedEventArgs[] = L"Windows.Devices.WiFiDirect.Services.WiFiDirectServiceSessionRequestedEventArgs";
       
       
#pragma clang diagnostic pop
