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
#include "Windows.Devices.Adc.Provider.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel;
typedef interface __x_ABI_CWindows_CDevices_CAdc_CIAdcController __x_ABI_CWindows_CDevices_CAdc_CIAdcController;
typedef interface __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics;
typedef interface __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2 __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2;
typedef interface __FIIterator_1_Windows__CDevices__CAdc__CAdcController __FIIterator_1_Windows__CDevices__CAdc__CAdcController;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CAdc__CAdcController;
typedef struct __FIIterator_1_Windows__CDevices__CAdc__CAdcControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__out __x_ABI_CWindows_CDevices_CAdc_CIAdcController * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CAdc_CIAdcController * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CAdc__CAdcControllerVtbl;
interface __FIIterator_1_Windows__CDevices__CAdc__CAdcController
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CAdc__CAdcControllerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CAdc__CAdcController __FIIterable_1_Windows__CDevices__CAdc__CAdcController;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CAdc__CAdcController;
typedef struct __FIIterable_1_Windows__CDevices__CAdc__CAdcControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CAdc__CAdcController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CAdcController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CAdcController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CAdcController * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CAdc__CAdcController **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CAdc__CAdcControllerVtbl;
interface __FIIterable_1_Windows__CDevices__CAdc__CAdcController
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CAdc__CAdcControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CAdc__CAdcController __FIVectorView_1_Windows__CDevices__CAdc__CAdcController;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CAdc__CAdcController;
typedef struct __FIVectorView_1_Windows__CDevices__CAdc__CAdcControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CAdc_CIAdcController * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
                       __x_ABI_CWindows_CDevices_CAdc_CIAdcController * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CAdc_CIAdcController * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CAdc__CAdcControllerVtbl;
interface __FIVectorView_1_Windows__CDevices__CAdc__CAdcController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CAdc__CAdcControllerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcControllerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__out __x_ABI_CWindows_CDevices_CAdc_CIAdcController * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcControllerVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcControllerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcControllerVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This, __RPC__out __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcControllerVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcControllerVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef enum __x_ABI_CWindows_CDevices_CAdc_CAdcChannelMode __x_ABI_CWindows_CDevices_CAdc_CAdcChannelMode;
enum __x_ABI_CWindows_CDevices_CAdc_CAdcChannelMode
{
    AdcChannelMode_SingleEnded = 0,
    AdcChannelMode_Differential = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Adc_IAdcChannel[] = L"Windows.Devices.Adc.IAdcChannel";
typedef struct __x_ABI_CWindows_CDevices_CAdc_CIAdcChannelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Controller )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAdc_CIAdcController * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadValue )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * This,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReadRatio )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * This,
                           __RPC__out DOUBLE * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAdc_CIAdcChannelVtbl;
interface __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAdc_CIAdcChannelVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Controller(This,value) )
    ( (This)->lpVtbl->ReadValue(This,result) )
    ( (This)->lpVtbl->ReadRatio(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAdc_CIAdcChannel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Adc_IAdcController[] = L"Windows.Devices.Adc.IAdcController";
typedef struct __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChannelCount )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResolutionInBits )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinValue )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxValue )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChannelMode )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CAdc_CAdcChannelMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChannelMode )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
                  __x_ABI_CWindows_CDevices_CAdc_CAdcChannelMode value
        );
    HRESULT ( STDMETHODCALLTYPE *IsChannelModeSupported )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
                  __x_ABI_CWindows_CDevices_CAdc_CAdcChannelMode channelMode,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *OpenChannel )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
                  INT32 channelNumber,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerVtbl;
interface __x_ABI_CWindows_CDevices_CAdc_CIAdcController
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChannelCount(This,value) )
    ( (This)->lpVtbl->get_ResolutionInBits(This,value) )
    ( (This)->lpVtbl->get_MinValue(This,value) )
    ( (This)->lpVtbl->get_MaxValue(This,value) )
    ( (This)->lpVtbl->get_ChannelMode(This,value) )
    ( (This)->lpVtbl->put_ChannelMode(This,value) )
    ( (This)->lpVtbl->IsChannelModeSupported(This,channelMode,result) )
    ( (This)->lpVtbl->OpenChannel(This,channelNumber,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAdc_CIAdcController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Adc_IAdcControllerStatics[] = L"Windows.Devices.Adc.IAdcControllerStatics";
typedef struct __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetControllersAsync )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider * provider,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetControllersAsync(This,provider,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Adc_IAdcControllerStatics2[] = L"Windows.Devices.Adc.IAdcControllerStatics2";
typedef struct __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefaultAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Adc_AdcChannel[] = L"Windows.Devices.Adc.AdcChannel";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Adc_AdcController[] = L"Windows.Devices.Adc.AdcController";
       
       
#pragma clang diagnostic pop
