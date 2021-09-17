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
#include "Windows.Devices.I2c.Provider.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings;
typedef interface __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory;
typedef interface __x_ABI_CWindows_CDevices_CI2c_CII2cController __x_ABI_CWindows_CDevices_CI2c_CII2cController;
typedef interface __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics;
typedef interface __x_ABI_CWindows_CDevices_CI2c_CII2cDevice __x_ABI_CWindows_CDevices_CI2c_CII2cDevice;
typedef interface __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics;
typedef interface __FIIterator_1_Windows__CDevices__CI2c__CI2cController __FIIterator_1_Windows__CDevices__CI2c__CI2cController;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CI2c__CI2cController;
typedef struct __FIIterator_1_Windows__CDevices__CI2c__CI2cControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__out __x_ABI_CWindows_CDevices_CI2c_CII2cController * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CI2c_CII2cController * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CI2c__CI2cControllerVtbl;
interface __FIIterator_1_Windows__CDevices__CI2c__CI2cController
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CI2c__CI2cControllerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CI2c__CI2cController __FIIterable_1_Windows__CDevices__CI2c__CI2cController;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CI2c__CI2cController;
typedef struct __FIIterable_1_Windows__CDevices__CI2c__CI2cControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CI2c__CI2cController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CI2cController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CI2cController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CI2cController * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CI2c__CI2cController **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CI2c__CI2cControllerVtbl;
interface __FIIterable_1_Windows__CDevices__CI2c__CI2cController
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CI2c__CI2cControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CI2c__CI2cController __FIVectorView_1_Windows__CDevices__CI2c__CI2cController;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CI2c__CI2cController;
typedef struct __FIVectorView_1_Windows__CDevices__CI2c__CI2cControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CI2c_CII2cController * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
                       __x_ABI_CWindows_CDevices_CI2c_CII2cController * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CI2c_CII2cController * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CI2c__CI2cControllerVtbl;
interface __FIVectorView_1_Windows__CDevices__CI2c__CI2cController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CI2c__CI2cControllerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cControllerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__out __x_ABI_CWindows_CDevices_CI2c_CII2cController * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cControllerVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cControllerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDeviceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDeviceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * This, __RPC__out __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDeviceVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDeviceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cControllerVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This, __RPC__out __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cControllerVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cControllerVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef enum __x_ABI_CWindows_CDevices_CI2c_CI2cBusSpeed __x_ABI_CWindows_CDevices_CI2c_CI2cBusSpeed;
typedef enum __x_ABI_CWindows_CDevices_CI2c_CI2cSharingMode __x_ABI_CWindows_CDevices_CI2c_CI2cSharingMode;
typedef enum __x_ABI_CWindows_CDevices_CI2c_CI2cTransferStatus __x_ABI_CWindows_CDevices_CI2c_CI2cTransferStatus;
typedef struct __x_ABI_CWindows_CDevices_CI2c_CI2cTransferResult __x_ABI_CWindows_CDevices_CI2c_CI2cTransferResult;
enum __x_ABI_CWindows_CDevices_CI2c_CI2cBusSpeed
{
    I2cBusSpeed_StandardMode = 0,
    I2cBusSpeed_FastMode = 1,
};
enum __x_ABI_CWindows_CDevices_CI2c_CI2cSharingMode
{
    I2cSharingMode_Exclusive = 0,
    I2cSharingMode_Shared = 1,
};
enum __x_ABI_CWindows_CDevices_CI2c_CI2cTransferStatus
{
    I2cTransferStatus_FullTransfer = 0,
    I2cTransferStatus_PartialTransfer = 1,
    I2cTransferStatus_SlaveAddressNotAcknowledged = 2,
    I2cTransferStatus_ClockStretchTimeout = 3,
    I2cTransferStatus_UnknownError = 4,
};
struct __x_ABI_CWindows_CDevices_CI2c_CI2cTransferResult
{
    __x_ABI_CWindows_CDevices_CI2c_CI2cTransferStatus Status;
    UINT32 BytesTransferred;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_II2cConnectionSettings[] = L"Windows.Devices.I2c.II2cConnectionSettings";
typedef struct __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SlaveAddress )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SlaveAddress )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BusSpeed )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CI2c_CI2cBusSpeed * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BusSpeed )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
                  __x_ABI_CWindows_CDevices_CI2c_CI2cBusSpeed value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SharingMode )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CI2c_CI2cSharingMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SharingMode )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
                  __x_ABI_CWindows_CDevices_CI2c_CI2cSharingMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsVtbl;
interface __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SlaveAddress(This,value) )
    ( (This)->lpVtbl->put_SlaveAddress(This,value) )
    ( (This)->lpVtbl->get_BusSpeed(This,value) )
    ( (This)->lpVtbl->put_BusSpeed(This,value) )
    ( (This)->lpVtbl->get_SharingMode(This,value) )
    ( (This)->lpVtbl->put_SharingMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_II2cConnectionSettingsFactory[] = L"Windows.Devices.I2c.II2cConnectionSettingsFactory";
typedef struct __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory * This,
                  INT32 slaveAddress,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,slaveAddress,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_II2cController[] = L"Windows.Devices.I2c.II2cController";
typedef struct __x_ABI_CWindows_CDevices_CI2c_CII2cControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cController * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDevice )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cController * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * settings,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * * device
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CI2c_CII2cControllerVtbl;
interface __x_ABI_CWindows_CDevices_CI2c_CII2cController
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CII2cControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDevice(This,settings,device) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CII2cController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_II2cControllerStatics[] = L"Windows.Devices.I2c.II2cControllerStatics";
typedef struct __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetControllersAsync )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider * provider,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetControllersAsync(This,provider,operation) )
    ( (This)->lpVtbl->GetDefaultAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_II2cDevice[] = L"Windows.Devices.I2c.II2cDevice";
typedef struct __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionSettings )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Write )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
                  UINT32 __bufferSize,
                                         __RPC__in_ecount_full(__bufferSize) BYTE * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *WritePartial )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
                  UINT32 __bufferSize,
                                         __RPC__in_ecount_full(__bufferSize) BYTE * buffer,
                           __RPC__out __x_ABI_CWindows_CDevices_CI2c_CI2cTransferResult * result
        );
    HRESULT ( STDMETHODCALLTYPE *Read )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __bufferSize,
                                          __RPC__out_ecount_full(__bufferSize) BYTE * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *ReadPartial )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __bufferSize,
                                          __RPC__out_ecount_full(__bufferSize) BYTE * buffer,
                           __RPC__out __x_ABI_CWindows_CDevices_CI2c_CI2cTransferResult * result
        );
    HRESULT ( STDMETHODCALLTYPE *WriteRead )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
                  UINT32 __writeBufferSize,
                                              __RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
                                              __RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *WriteReadPartial )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
                  UINT32 __writeBufferSize,
                                              __RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
                                              __RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer,
                           __RPC__out __x_ABI_CWindows_CDevices_CI2c_CI2cTransferResult * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceVtbl;
interface __x_ABI_CWindows_CDevices_CI2c_CII2cDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceVtbl *lpVtbl;
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
    ( (This)->lpVtbl->WritePartial(This,__bufferSize,buffer,result) )
    ( (This)->lpVtbl->Read(This,__bufferSize,buffer) )
    ( (This)->lpVtbl->ReadPartial(This,__bufferSize,buffer,result) )
    ( (This)->lpVtbl->WriteRead(This,__writeBufferSize,writeBuffer,__readBufferSize,readBuffer) )
    ( (This)->lpVtbl->WriteReadPartial(This,__writeBufferSize,writeBuffer,__readBufferSize,readBuffer,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CII2cDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_II2cDeviceStatics[] = L"Windows.Devices.I2c.II2cDeviceStatics";
typedef struct __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromFriendlyName )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics * This,
                  __RPC__in HSTRING friendlyName,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics * This,
                  __RPC__in HSTRING deviceId,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * settings,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )
    ( (This)->lpVtbl->GetDeviceSelectorFromFriendlyName(This,friendlyName,value) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,settings,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_I2c_I2cConnectionSettings[] = L"Windows.Devices.I2c.I2cConnectionSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_I2c_I2cController[] = L"Windows.Devices.I2c.I2cController";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_I2c_I2cDevice[] = L"Windows.Devices.I2c.I2cDevice";
       
       
#pragma clang diagnostic pop
