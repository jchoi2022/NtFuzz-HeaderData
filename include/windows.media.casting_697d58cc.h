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
#include "Windows.Storage.Streams.h"
#include "Windows.UI.Popups.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CCasting_CICastingConnection __x_ABI_CWindows_CMedia_CCasting_CICastingConnection;
typedef interface __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCasting_CICastingDevice __x_ABI_CWindows_CMedia_CCasting_CICastingDevice;
typedef interface __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker;
typedef interface __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter;
typedef interface __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics;
typedef interface __x_ABI_CWindows_CMedia_CCasting_CICastingSource __x_ABI_CWindows_CMedia_CCasting_CICastingSource;
typedef interface __FIIterator_1_Windows__CMedia__CCasting__CCastingSource __FIIterator_1_Windows__CMedia__CCasting__CCastingSource;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCasting__CCastingSource;
typedef struct __FIIterator_1_Windows__CMedia__CCasting__CCastingSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This, __RPC__out __x_ABI_CWindows_CMedia_CCasting_CICastingSource * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCasting_CICastingSource * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCasting__CCastingSourceVtbl;
interface __FIIterator_1_Windows__CMedia__CCasting__CCastingSource
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCasting__CCastingSourceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCasting__CCastingSource __FIIterable_1_Windows__CMedia__CCasting__CCastingSource;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCasting__CCastingSource;
typedef struct __FIIterable_1_Windows__CMedia__CCasting__CCastingSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCasting__CCastingSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCasting__CCastingSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCasting__CCastingSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCasting__CCastingSource * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCasting__CCastingSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCasting__CCastingSource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCasting__CCastingSource * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCasting__CCastingSource **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCasting__CCastingSourceVtbl;
interface __FIIterable_1_Windows__CMedia__CCasting__CCastingSource
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCasting__CCastingSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCasting__CCastingSource;
typedef struct __FIVectorView_1_Windows__CMedia__CCasting__CCastingSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCasting_CICastingSource * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This,
                       __x_ABI_CWindows_CMedia_CCasting_CICastingSource * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCasting_CICastingSource * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCasting__CCastingSourceVtbl;
interface __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCasting__CCastingSourceVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CCasting__CCastingSource __FIVector_1_Windows__CMedia__CCasting__CCastingSource;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CCasting__CCastingSource;
typedef struct __FIVector_1_Windows__CMedia__CCasting__CCastingSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCasting_CICastingSource * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCasting_CICastingSource * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This, __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCasting_CICastingSource * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CCasting_CICastingSource * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CCasting__CCastingSourceVtbl;
interface __FIVector_1_Windows__CMedia__CCasting__CCastingSource
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CCasting__CCastingSourceVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This, __RPC__out enum __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatusVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDeviceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDeviceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * This, __RPC__out __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDeviceVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDeviceVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CMedia_CCasting_CCastingPlaybackTypes;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypesVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypesVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This, __RPC__out enum __x_ABI_CWindows_CMedia_CCasting_CCastingPlaybackTypes *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypesVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypesVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIAsyncOperationCompletedHandler_1_HSTRING __FIAsyncOperationCompletedHandler_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_HSTRING;
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This, __RPC__in_opt __FIAsyncOperation_1_HSTRING *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;
interface __FIAsyncOperationCompletedHandler_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperation_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_HSTRING *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out HSTRING *results);
    END_INTERFACE
} __FIAsyncOperation_1_HSTRINGVtbl;
interface __FIAsyncOperation_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;
typedef enum __x_ABI_CWindows_CUI_CPopups_CPlacement __x_ABI_CWindows_CUI_CPopups_CPlacement;
typedef enum __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus;
typedef enum __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionState __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionState;
typedef enum __x_ABI_CWindows_CMedia_CCasting_CCastingPlaybackTypes __x_ABI_CWindows_CMedia_CCasting_CCastingPlaybackTypes;
enum __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus
{
    CastingConnectionErrorStatus_Succeeded = 0,
    CastingConnectionErrorStatus_DeviceDidNotRespond = 1,
    CastingConnectionErrorStatus_DeviceError = 2,
    CastingConnectionErrorStatus_DeviceLocked = 3,
    CastingConnectionErrorStatus_ProtectedPlaybackFailed = 4,
    CastingConnectionErrorStatus_InvalidCastingSource = 5,
    CastingConnectionErrorStatus_Unknown = 6,
};
enum __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionState
{
    CastingConnectionState_Disconnected = 0,
    CastingConnectionState_Connected = 1,
    CastingConnectionState_Rendering = 2,
    CastingConnectionState_Disconnecting = 3,
    CastingConnectionState_Connecting = 4,
};
enum __x_ABI_CWindows_CMedia_CCasting_CCastingPlaybackTypes
{
    CastingPlaybackTypes_None = 0,
    CastingPlaybackTypes_Audio = 0x1,
    CastingPlaybackTypes_Video = 0x2,
    CastingPlaybackTypes_Picture = 0x4,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingConnection[] = L"Windows.Media.Casting.ICastingConnection";
typedef struct __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Device )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCasting_CICastingSource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCasting_CICastingSource * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StateChanged )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StateChanged )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ErrorOccurred )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ErrorOccurred )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *RequestStartCastingAsync )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCasting_CICastingSource * value,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DisconnectAsync )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionVtbl;
interface __x_ABI_CWindows_CMedia_CCasting_CICastingConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_Device(This,value) )
    ( (This)->lpVtbl->get_Source(This,value) )
    ( (This)->lpVtbl->put_Source(This,value) )
    ( (This)->lpVtbl->add_StateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_StateChanged(This,token) )
    ( (This)->lpVtbl->add_ErrorOccurred(This,handler,token) )
    ( (This)->lpVtbl->remove_ErrorOccurred(This,token) )
    ( (This)->lpVtbl->RequestStartCastingAsync(This,value,operation) )
    ( (This)->lpVtbl->DisconnectAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingConnection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingConnectionErrorOccurredEventArgs[] = L"Windows.Media.Casting.ICastingConnectionErrorOccurredEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ErrorStatus )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ErrorStatus(This,value) )
    ( (This)->lpVtbl->get_Message(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingDevice[] = L"Windows.Media.Casting.ICastingDevice";
typedef struct __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Icon )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSupportedCastingPlaybackTypesAsync )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCastingConnection )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceVtbl;
interface __x_ABI_CWindows_CMedia_CCasting_CICastingDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_FriendlyName(This,value) )
    ( (This)->lpVtbl->get_Icon(This,value) )
    ( (This)->lpVtbl->GetSupportedCastingPlaybackTypesAsync(This,operation) )
    ( (This)->lpVtbl->CreateCastingConnection(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingDevicePicker[] = L"Windows.Media.Casting.ICastingDevicePicker";
typedef struct __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Filter )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Appearance )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CastingDeviceSelected )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CastingDeviceSelected )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CastingDevicePickerDismissed )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CastingDevicePickerDismissed )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *Show )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
                  __x_ABI_CWindows_CFoundation_CRect selection
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowWithPlacement )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement
        );
    HRESULT ( STDMETHODCALLTYPE *Hide )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerVtbl;
interface __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Filter(This,value) )
    ( (This)->lpVtbl->get_Appearance(This,value) )
    ( (This)->lpVtbl->add_CastingDeviceSelected(This,handler,token) )
    ( (This)->lpVtbl->remove_CastingDeviceSelected(This,token) )
    ( (This)->lpVtbl->add_CastingDevicePickerDismissed(This,handler,token) )
    ( (This)->lpVtbl->remove_CastingDevicePickerDismissed(This,token) )
    ( (This)->lpVtbl->Show(This,selection) )
    ( (This)->lpVtbl->ShowWithPlacement(This,selection,preferredPlacement) )
    ( (This)->lpVtbl->Hide(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingDevicePickerFilter[] = L"Windows.Media.Casting.ICastingDevicePickerFilter";
typedef struct __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SupportsAudio )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SupportsAudio )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportsVideo )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SupportsVideo )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportsPictures )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SupportsPictures )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedCastingSources )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CCasting__CCastingSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilterVtbl;
interface __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SupportsAudio(This,value) )
    ( (This)->lpVtbl->put_SupportsAudio(This,value) )
    ( (This)->lpVtbl->get_SupportsVideo(This,value) )
    ( (This)->lpVtbl->put_SupportsVideo(This,value) )
    ( (This)->lpVtbl->get_SupportsPictures(This,value) )
    ( (This)->lpVtbl->put_SupportsPictures(This,value) )
    ( (This)->lpVtbl->get_SupportedCastingSources(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingDeviceSelectedEventArgs[] = L"Windows.Media.Casting.ICastingDeviceSelectedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SelectedCastingDevice )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SelectedCastingDevice(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingDeviceStatics[] = L"Windows.Media.Casting.ICastingDeviceStatics";
typedef struct __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This,
                  __x_ABI_CWindows_CMedia_CCasting_CCastingPlaybackTypes type,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromCastingSourceAsync )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCasting_CICastingSource * castingSource,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This,
                  __RPC__in HSTRING value,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeviceInfoSupportsCastingAsync )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * device,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,type,value) )
    ( (This)->lpVtbl->GetDeviceSelectorFromCastingSourceAsync(This,castingSource,operation) )
    ( (This)->lpVtbl->FromIdAsync(This,value,operation) )
    ( (This)->lpVtbl->DeviceInfoSupportsCastingAsync(This,device,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingSource[] = L"Windows.Media.Casting.ICastingSource";
typedef struct __x_ABI_CWindows_CMedia_CCasting_CICastingSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PreferredSourceUri )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PreferredSourceUri )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCasting_CICastingSourceVtbl;
interface __x_ABI_CWindows_CMedia_CCasting_CICastingSource
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCasting_CICastingSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PreferredSourceUri(This,value) )
    ( (This)->lpVtbl->put_PreferredSourceUri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingConnection[] = L"Windows.Media.Casting.CastingConnection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingConnectionErrorOccurredEventArgs[] = L"Windows.Media.Casting.CastingConnectionErrorOccurredEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingDevice[] = L"Windows.Media.Casting.CastingDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingDevicePicker[] = L"Windows.Media.Casting.CastingDevicePicker";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingDevicePickerFilter[] = L"Windows.Media.Casting.CastingDevicePickerFilter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingDeviceSelectedEventArgs[] = L"Windows.Media.Casting.CastingDeviceSelectedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingSource[] = L"Windows.Media.Casting.CastingSource";
       
       
#pragma clang diagnostic pop
