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
#include "Windows.Devices.Bluetooth.h"
#include "Windows.Devices.Enumeration.h"
#include "Windows.Networking.h"
#include "Windows.Networking.Sockets.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService2 __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService3 __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService3;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics2 __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStatics __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider2 __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProviderStatics __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProviderStatics;
typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;
typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl;
interface __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;
typedef struct __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl;
interface __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;
typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                       __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl;
interface __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProviderVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProviderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProviderVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProviderVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out unsigned int *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *value);
    END_INTERFACE
} __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in unsigned int key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__in unsigned int key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer **secondPartition);
    END_INTERFACE
} __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer;
typedef interface __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__in_opt __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__out enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl *lpVtbl;
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
typedef interface __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
                   unsigned int key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, unsigned int key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
                   unsigned int key,
                   __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, unsigned int key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    END_INTERFACE
} __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
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
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation;
typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;
typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService[] = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommDeviceService";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ConnectionHostName )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionServiceName )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtectionLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxProtectionLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetSdpRawAttributesAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * * asyncOp
        );
                    HRESULT ( STDMETHODCALLTYPE *GetSdpRawAttributesWithCacheModeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * * asyncOp
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ConnectionHostName(This,value) )
    ( (This)->lpVtbl->get_ConnectionServiceName(This,value) )
    ( (This)->lpVtbl->get_ServiceId(This,value) )
    ( (This)->lpVtbl->get_ProtectionLevel(This,value) )
    ( (This)->lpVtbl->get_MaxProtectionLevel(This,value) )
    ( (This)->lpVtbl->GetSdpRawAttributesAsync(This,asyncOp) )
    ( (This)->lpVtbl->GetSdpRawAttributesWithCacheModeAsync(This,cacheMode,asyncOp) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService2[] = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommDeviceService2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Device )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Device(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService3[] = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommDeviceService3";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceAccessInformation )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService3 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService3Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceAccessInformation(This,value) )
    ( (This)->lpVtbl->RequestAccessAsync(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServiceStatics[] = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommDeviceServiceStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * * asyncOp
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * serviceId,
                           __RPC__deref_out_opt HSTRING * selector
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,asyncOp) )
    ( (This)->lpVtbl->GetDeviceSelector(This,serviceId,selector) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServiceStatics2[] = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommDeviceServiceStatics2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorForBluetoothDevice )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * bluetoothDevice,
                           __RPC__deref_out_opt HSTRING * selector
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorForBluetoothDeviceWithCacheMode )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * bluetoothDevice,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
                           __RPC__deref_out_opt HSTRING * selector
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorForBluetoothDeviceAndServiceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * bluetoothDevice,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * serviceId,
                           __RPC__deref_out_opt HSTRING * selector
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorForBluetoothDeviceAndServiceIdWithCacheMode )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * bluetoothDevice,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * serviceId,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
                           __RPC__deref_out_opt HSTRING * selector
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelectorForBluetoothDevice(This,bluetoothDevice,selector) )
    ( (This)->lpVtbl->GetDeviceSelectorForBluetoothDeviceWithCacheMode(This,bluetoothDevice,cacheMode,selector) )
    ( (This)->lpVtbl->GetDeviceSelectorForBluetoothDeviceAndServiceId(This,bluetoothDevice,serviceId,selector) )
    ( (This)->lpVtbl->GetDeviceSelectorForBluetoothDeviceAndServiceIdWithCacheMode(This,bluetoothDevice,serviceId,cacheMode,selector) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServiceStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServicesResult[] = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommDeviceServicesResult";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Services )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * * services
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResultVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Error(This,value) )
    ( (This)->lpVtbl->get_Services(This,services) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceId[] = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommServiceId";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uuid )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * This,
                           __RPC__out GUID * value
        );
    HRESULT ( STDMETHODCALLTYPE *AsShortId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * This,
                           __RPC__out UINT32 * shortId
        );
    HRESULT ( STDMETHODCALLTYPE *AsString )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * This,
                           __RPC__deref_out_opt HSTRING * id
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uuid(This,value) )
    ( (This)->lpVtbl->AsShortId(This,shortId) )
    ( (This)->lpVtbl->AsString(This,id) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceIdStatics[] = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommServiceIdStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromUuid )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStatics * This,
                  GUID uuid,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * * serviceId
        );
    HRESULT ( STDMETHODCALLTYPE *FromShortId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStatics * This,
                  UINT32 shortId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * * serviceId
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SerialPort )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * * serviceId
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ObexObjectPush )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * * serviceId
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ObexFileTransfer )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * * serviceId
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhoneBookAccessPce )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * * serviceId
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhoneBookAccessPse )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * * serviceId
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GenericFileTransfer )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * * serviceId
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromUuid(This,uuid,serviceId) )
    ( (This)->lpVtbl->FromShortId(This,shortId,serviceId) )
    ( (This)->lpVtbl->get_SerialPort(This,serviceId) )
    ( (This)->lpVtbl->get_ObexObjectPush(This,serviceId) )
    ( (This)->lpVtbl->get_ObexFileTransfer(This,serviceId) )
    ( (This)->lpVtbl->get_PhoneBookAccessPce(This,serviceId) )
    ( (This)->lpVtbl->get_PhoneBookAccessPse(This,serviceId) )
    ( (This)->lpVtbl->get_GenericFileTransfer(This,serviceId) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceIdStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProvider[] = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommServiceProvider";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServiceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SdpRawAttributes )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider * This,
                           __RPC__deref_out_opt __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *StartAdvertising )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * listener
        );
    HRESULT ( STDMETHODCALLTYPE *StopAdvertising )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProviderVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServiceId(This,value) )
    ( (This)->lpVtbl->get_SdpRawAttributes(This,value) )
    ( (This)->lpVtbl->StartAdvertising(This,listener) )
    ( (This)->lpVtbl->StopAdvertising(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProvider2[] = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommServiceProvider2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *StartAdvertisingWithRadioDiscoverability )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * listener,
                  boolean radioDiscoverable
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StartAdvertisingWithRadioDiscoverability(This,listener,radioDiscoverable) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProvider2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProviderStatics[] = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommServiceProviderStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProviderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProviderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProviderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProviderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProviderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProviderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProviderStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * serviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommServiceProvider * * asyncOp
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProviderStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProviderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProviderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateAsync(This,serviceId,asyncOp) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceProviderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Rfcomm_RfcommDeviceService[] = L"Windows.Devices.Bluetooth.Rfcomm.RfcommDeviceService";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Rfcomm_RfcommDeviceServicesResult[] = L"Windows.Devices.Bluetooth.Rfcomm.RfcommDeviceServicesResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Rfcomm_RfcommServiceId[] = L"Windows.Devices.Bluetooth.Rfcomm.RfcommServiceId";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Rfcomm_RfcommServiceProvider[] = L"Windows.Devices.Bluetooth.Rfcomm.RfcommServiceProvider";
       
       
#pragma clang diagnostic pop
