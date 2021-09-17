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
#include "Windows.Devices.h"
#include "Windows.Devices.Spi.Provider.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo;
typedef interface __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings;
typedef interface __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory;
typedef interface __x_ABI_CWindows_CDevices_CSpi_CISpiController __x_ABI_CWindows_CDevices_CSpi_CISpiController;
typedef interface __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics;
typedef interface __x_ABI_CWindows_CDevices_CSpi_CISpiDevice __x_ABI_CWindows_CDevices_CSpi_CISpiDevice;
typedef interface __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics;
typedef interface __FIIterator_1_Windows__CDevices__CSpi__CSpiController __FIIterator_1_Windows__CDevices__CSpi__CSpiController;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSpi__CSpiController;
typedef struct __FIIterator_1_Windows__CDevices__CSpi__CSpiControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__out __x_ABI_CWindows_CDevices_CSpi_CISpiController * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSpi_CISpiController * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSpi__CSpiControllerVtbl;
interface __FIIterator_1_Windows__CDevices__CSpi__CSpiController
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSpi__CSpiControllerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSpi__CSpiController __FIIterable_1_Windows__CDevices__CSpi__CSpiController;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSpi__CSpiController;
typedef struct __FIIterable_1_Windows__CDevices__CSpi__CSpiControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSpi__CSpiController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSpi__CSpiController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSpi__CSpiController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSpi__CSpiController * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSpi__CSpiController **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSpi__CSpiControllerVtbl;
interface __FIIterable_1_Windows__CDevices__CSpi__CSpiController
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSpi__CSpiControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CSpi__CSpiController __FIVectorView_1_Windows__CDevices__CSpi__CSpiController;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSpi__CSpiController;
typedef struct __FIVectorView_1_Windows__CDevices__CSpi__CSpiControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CSpi_CISpiController * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
                       __x_ABI_CWindows_CDevices_CSpi_CISpiController * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSpi_CISpiController * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSpi__CSpiControllerVtbl;
interface __FIVectorView_1_Windows__CDevices__CSpi__CSpiController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSpi__CSpiControllerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiControllerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__out __x_ABI_CWindows_CDevices_CSpi_CISpiController * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiControllerVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiControllerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDeviceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDeviceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * This, __RPC__out __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDeviceVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDeviceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiControllerVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This, __RPC__out __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiControllerVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiControllerVtbl *lpVtbl;
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
typedef interface __FIIterator_1_int __FIIterator_1_int;
EXTERN_C const IID IID___FIIterator_1_int;
typedef struct __FIIterator_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_int * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_int * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_int * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_int * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_int * This, __RPC__out int *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_int * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_int * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_int * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) int *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_intVtbl;
interface __FIIterator_1_int
{
    CONST_VTBL struct __FIIterator_1_intVtbl *lpVtbl;
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
typedef interface __FIIterable_1_int __FIIterable_1_int;
EXTERN_C const IID IID___FIIterable_1_int;
typedef struct __FIIterable_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_int * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_int * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_int * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_int * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_int * This, __RPC__deref_out_opt __FIIterator_1_int **first);
    END_INTERFACE
} __FIIterable_1_intVtbl;
interface __FIIterable_1_int
{
    CONST_VTBL struct __FIIterable_1_intVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_int __FIVectorView_1_int;
EXTERN_C const IID IID___FIVectorView_1_int;
typedef struct __FIVectorView_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_int * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_int * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_int * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_int * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_int * This,
                                                    unsigned int index,
                                                             __RPC__out int *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_int * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_int * This,
                       int item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_int * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) int *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_intVtbl;
interface __FIVectorView_1_int
{
    CONST_VTBL struct __FIVectorView_1_intVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef enum __x_ABI_CWindows_CDevices_CSpi_CSpiMode __x_ABI_CWindows_CDevices_CSpi_CSpiMode;
typedef enum __x_ABI_CWindows_CDevices_CSpi_CSpiSharingMode __x_ABI_CWindows_CDevices_CSpi_CSpiSharingMode;
enum __x_ABI_CWindows_CDevices_CSpi_CSpiMode
{
    SpiMode_Mode0 = 0,
    SpiMode_Mode1 = 1,
    SpiMode_Mode2 = 2,
    SpiMode_Mode3 = 3,
};
enum __x_ABI_CWindows_CDevices_CSpi_CSpiSharingMode
{
    SpiSharingMode_Exclusive = 0,
    SpiSharingMode_Shared = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiBusInfo[] = L"Windows.Devices.Spi.ISpiBusInfo";
typedef struct __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChipSelectLineCount )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinClockFrequency )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxClockFrequency )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedDataBitLengths )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_int * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfoVtbl;
interface __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChipSelectLineCount(This,value) )
    ( (This)->lpVtbl->get_MinClockFrequency(This,value) )
    ( (This)->lpVtbl->get_MaxClockFrequency(This,value) )
    ( (This)->lpVtbl->get_SupportedDataBitLengths(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiConnectionSettings[] = L"Windows.Devices.Spi.ISpiConnectionSettings";
typedef struct __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChipSelectLine )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChipSelectLine )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSpi_CSpiMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
                  __x_ABI_CWindows_CDevices_CSpi_CSpiMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DataBitLength )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DataBitLength )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ClockFrequency )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ClockFrequency )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SharingMode )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSpi_CSpiSharingMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SharingMode )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
                  __x_ABI_CWindows_CDevices_CSpi_CSpiSharingMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsVtbl;
interface __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChipSelectLine(This,value) )
    ( (This)->lpVtbl->put_ChipSelectLine(This,value) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->put_Mode(This,value) )
    ( (This)->lpVtbl->get_DataBitLength(This,value) )
    ( (This)->lpVtbl->put_DataBitLength(This,value) )
    ( (This)->lpVtbl->get_ClockFrequency(This,value) )
    ( (This)->lpVtbl->put_ClockFrequency(This,value) )
    ( (This)->lpVtbl->get_SharingMode(This,value) )
    ( (This)->lpVtbl->put_SharingMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiConnectionSettingsFactory[] = L"Windows.Devices.Spi.ISpiConnectionSettingsFactory";
typedef struct __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory * This,
                  INT32 chipSelectLine,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,chipSelectLine,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiController[] = L"Windows.Devices.Spi.ISpiController";
typedef struct __x_ABI_CWindows_CDevices_CSpi_CISpiControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiController * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDevice )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiController * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * settings,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * * device
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSpi_CISpiControllerVtbl;
interface __x_ABI_CWindows_CDevices_CSpi_CISpiController
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSpi_CISpiControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDevice(This,settings,device) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiControllerStatics[] = L"Windows.Devices.Spi.ISpiControllerStatics";
typedef struct __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetControllersAsync )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider * provider,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefaultAsync(This,operation) )
    ( (This)->lpVtbl->GetControllersAsync(This,provider,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiDevice[] = L"Windows.Devices.Spi.ISpiDevice";
typedef struct __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionSettings )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Write )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
                  UINT32 __bufferSize,
                                         __RPC__in_ecount_full(__bufferSize) BYTE * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *Read )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __bufferSize,
                                          __RPC__out_ecount_full(__bufferSize) BYTE * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *TransferSequential )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
                  UINT32 __writeBufferSize,
                                              __RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
                                              __RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *TransferFullDuplex )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
                  UINT32 __writeBufferSize,
                                              __RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
                                              __RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceVtbl;
interface __x_ABI_CWindows_CDevices_CSpi_CISpiDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_ConnectionSettings(This,value) )
    ( (This)->lpVtbl->Write(This,__bufferSize,buffer) )
    ( (This)->lpVtbl->Read(This,__bufferSize,buffer) )
    ( (This)->lpVtbl->TransferSequential(This,__writeBufferSize,writeBuffer,__readBufferSize,readBuffer) )
    ( (This)->lpVtbl->TransferFullDuplex(This,__writeBufferSize,writeBuffer,__readBufferSize,readBuffer) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiDeviceStatics[] = L"Windows.Devices.Spi.ISpiDeviceStatics";
typedef struct __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromFriendlyName )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This,
                  __RPC__in HSTRING friendlyName,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBusInfo )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This,
                  __RPC__in HSTRING busId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * * busInfo
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This,
                  __RPC__in HSTRING busId,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * settings,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )
    ( (This)->lpVtbl->GetDeviceSelectorFromFriendlyName(This,friendlyName,value) )
    ( (This)->lpVtbl->GetBusInfo(This,busId,busInfo) )
    ( (This)->lpVtbl->FromIdAsync(This,busId,settings,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Spi_SpiBusInfo[] = L"Windows.Devices.Spi.SpiBusInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Spi_SpiConnectionSettings[] = L"Windows.Devices.Spi.SpiConnectionSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Spi_SpiController[] = L"Windows.Devices.Spi.SpiController";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Spi_SpiDevice[] = L"Windows.Devices.Spi.SpiDevice";
       
       
#pragma clang diagnostic pop
