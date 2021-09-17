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
#include "Windows.Devices.Pwm.Provider.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CPwm_CIPwmController __x_ABI_CWindows_CDevices_CPwm_CIPwmController;
typedef interface __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics;
typedef interface __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics2 __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics2;
typedef interface __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics3 __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics3;
typedef interface __x_ABI_CWindows_CDevices_CPwm_CIPwmPin __x_ABI_CWindows_CDevices_CPwm_CIPwmPin;
typedef interface __FIIterator_1_Windows__CDevices__CPwm__CPwmController __FIIterator_1_Windows__CDevices__CPwm__CPwmController;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CPwm__CPwmController;
typedef struct __FIIterator_1_Windows__CDevices__CPwm__CPwmControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CPwm__CPwmController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CPwmController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CPwmController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CPwmController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__out __x_ABI_CWindows_CDevices_CPwm_CIPwmController * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CPwmController * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CPwm_CIPwmController * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CPwm__CPwmControllerVtbl;
interface __FIIterator_1_Windows__CDevices__CPwm__CPwmController
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CPwm__CPwmControllerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CPwm__CPwmController __FIIterable_1_Windows__CDevices__CPwm__CPwmController;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CPwm__CPwmController;
typedef struct __FIIterable_1_Windows__CDevices__CPwm__CPwmControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CPwm__CPwmController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CPwm__CPwmController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CPwm__CPwmController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CPwm__CPwmController * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CPwm__CPwmController **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CPwm__CPwmControllerVtbl;
interface __FIIterable_1_Windows__CDevices__CPwm__CPwmController
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CPwm__CPwmControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CPwm__CPwmController __FIVectorView_1_Windows__CDevices__CPwm__CPwmController;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CPwm__CPwmController;
typedef struct __FIVectorView_1_Windows__CDevices__CPwm__CPwmControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CPwm_CIPwmController * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This,
                       __x_ABI_CWindows_CDevices_CPwm_CIPwmController * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CPwm_CIPwmController * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CPwm__CPwmControllerVtbl;
interface __FIVectorView_1_Windows__CDevices__CPwm__CPwmController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CPwm__CPwmControllerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPwm__CPwmController __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPwm__CPwmController;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPwm__CPwmController;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmController __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmController;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPwm__CPwmControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPwm__CPwmController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPwm__CPwmController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPwm__CPwmController * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmController *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPwm__CPwmControllerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPwm__CPwmController
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPwm__CPwmControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmController __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmController;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmController;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPwm__CPwmController *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPwm__CPwmController **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__out __x_ABI_CWindows_CDevices_CPwm_CIPwmController * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmControllerVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmController
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmControllerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmControllerVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController * This, __RPC__out __FIVectorView_1_Windows__CDevices__CPwm__CPwmController * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmControllerVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmControllerVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef enum __x_ABI_CWindows_CDevices_CPwm_CPwmPulsePolarity __x_ABI_CWindows_CDevices_CPwm_CPwmPulsePolarity;
enum __x_ABI_CWindows_CDevices_CPwm_CPwmPulsePolarity
{
    PwmPulsePolarity_ActiveHigh = 0,
    PwmPulsePolarity_ActiveLow = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Pwm_IPwmController[] = L"Windows.Devices.Pwm.IPwmController";
typedef struct __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmController * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PinCount )(
        __x_ABI_CWindows_CDevices_CPwm_CIPwmController * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActualFrequency )(
        __x_ABI_CWindows_CDevices_CPwm_CIPwmController * This,
                           __RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDesiredFrequency )(
        __x_ABI_CWindows_CDevices_CPwm_CIPwmController * This,
                  DOUBLE desiredFrequency,
                           __RPC__out DOUBLE * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinFrequency )(
        __x_ABI_CWindows_CDevices_CPwm_CIPwmController * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxFrequency )(
        __x_ABI_CWindows_CDevices_CPwm_CIPwmController * This,
                           __RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *OpenPin )(
        __x_ABI_CWindows_CDevices_CPwm_CIPwmController * This,
                  INT32 pinNumber,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPwm_CIPwmPin * * pin
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerVtbl;
interface __x_ABI_CWindows_CDevices_CPwm_CIPwmController
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PinCount(This,value) )
    ( (This)->lpVtbl->get_ActualFrequency(This,value) )
    ( (This)->lpVtbl->SetDesiredFrequency(This,desiredFrequency,result) )
    ( (This)->lpVtbl->get_MinFrequency(This,value) )
    ( (This)->lpVtbl->get_MaxFrequency(This,value) )
    ( (This)->lpVtbl->OpenPin(This,pinNumber,pin) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPwm_CIPwmController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Pwm_IPwmControllerStatics[] = L"Windows.Devices.Pwm.IPwmControllerStatics";
typedef struct __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetControllersAsync )(
        __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider * provider,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CPwm__CPwmController * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetControllersAsync(This,provider,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Pwm_IPwmControllerStatics2[] = L"Windows.Devices.Pwm.IPwmControllerStatics2";
typedef struct __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmController * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefaultAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Pwm_IPwmControllerStatics3[] = L"Windows.Devices.Pwm.IPwmControllerStatics3";
typedef struct __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics3 * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromFriendlyName )(
        __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics3 * This,
                  __RPC__in HSTRING friendlyName,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics3 * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPwm__CPwmController * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics3Vtbl;
interface __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,result) )
    ( (This)->lpVtbl->GetDeviceSelectorFromFriendlyName(This,friendlyName,result) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPwm_CIPwmControllerStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Pwm_IPwmPin[] = L"Windows.Devices.Pwm.IPwmPin";
typedef struct __x_ABI_CWindows_CDevices_CPwm_CIPwmPinVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmPin * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmPin * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmPin * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmPin * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmPin * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CIPwmPin * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Controller )(
        __x_ABI_CWindows_CDevices_CPwm_CIPwmPin * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPwm_CIPwmController * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetActiveDutyCyclePercentage )(
        __x_ABI_CWindows_CDevices_CPwm_CIPwmPin * This,
                           __RPC__out DOUBLE * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetActiveDutyCyclePercentage )(
        __x_ABI_CWindows_CDevices_CPwm_CIPwmPin * This,
                  DOUBLE dutyCyclePercentage
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Polarity )(
        __x_ABI_CWindows_CDevices_CPwm_CIPwmPin * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPwm_CPwmPulsePolarity * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Polarity )(
        __x_ABI_CWindows_CDevices_CPwm_CIPwmPin * This,
                  __x_ABI_CWindows_CDevices_CPwm_CPwmPulsePolarity value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CPwm_CIPwmPin * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CPwm_CIPwmPin * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStarted )(
        __x_ABI_CWindows_CDevices_CPwm_CIPwmPin * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPwm_CIPwmPinVtbl;
interface __x_ABI_CWindows_CDevices_CPwm_CIPwmPin
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPwm_CIPwmPinVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Controller(This,value) )
    ( (This)->lpVtbl->GetActiveDutyCyclePercentage(This,result) )
    ( (This)->lpVtbl->SetActiveDutyCyclePercentage(This,dutyCyclePercentage) )
    ( (This)->lpVtbl->get_Polarity(This,value) )
    ( (This)->lpVtbl->put_Polarity(This,value) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->get_IsStarted(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPwm_CIPwmPin;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Pwm_PwmController[] = L"Windows.Devices.Pwm.PwmController";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Pwm_PwmPin[] = L"Windows.Devices.Pwm.PwmPin";
       
       
#pragma clang diagnostic pop
