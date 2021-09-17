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
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider;
typedef interface __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider;
typedef interface __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider;
typedef interface __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings;
typedef interface __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;
typedef struct __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, __RPC__out __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl;
interface __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;
typedef struct __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl;
interface __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;
typedef struct __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
                       __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl;
interface __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, __RPC__out __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef enum __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cBusSpeed __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cBusSpeed;
typedef enum __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cSharingMode __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cSharingMode;
typedef enum __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferStatus __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferStatus;
typedef struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferResult __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferResult;
enum __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cBusSpeed
{
    ProviderI2cBusSpeed_StandardMode = 0,
    ProviderI2cBusSpeed_FastMode = 1,
};
enum __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cSharingMode
{
    ProviderI2cSharingMode_Exclusive = 0,
    ProviderI2cSharingMode_Shared = 1,
};
enum __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferStatus
{
    ProviderI2cTransferStatus_FullTransfer = 0,
    ProviderI2cTransferStatus_PartialTransfer = 1,
    ProviderI2cTransferStatus_SlaveAddressNotAcknowledged = 2,
};
struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferResult
{
    __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferStatus Status;
    UINT32 BytesTransferred;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_Provider_II2cControllerProvider[] = L"Windows.Devices.I2c.Provider.II2cControllerProvider";
typedef struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceProvider )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * settings,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * * device
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProviderVtbl;
interface __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceProvider(This,settings,device) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_Provider_II2cDeviceProvider[] = L"Windows.Devices.I2c.Provider.II2cDeviceProvider";
typedef struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *Write )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
                  UINT32 __bufferSize,
                                         __RPC__in_ecount_full(__bufferSize) BYTE * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *WritePartial )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
                  UINT32 __bufferSize,
                                         __RPC__in_ecount_full(__bufferSize) BYTE * buffer,
                           __RPC__out __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferResult * result
        );
    HRESULT ( STDMETHODCALLTYPE *Read )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __bufferSize,
                                          __RPC__out_ecount_full(__bufferSize) BYTE * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *ReadPartial )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __bufferSize,
                                          __RPC__out_ecount_full(__bufferSize) BYTE * buffer,
                           __RPC__out __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferResult * result
        );
    HRESULT ( STDMETHODCALLTYPE *WriteRead )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
                  UINT32 __writeBufferSize,
                                              __RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
                                              __RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *WriteReadPartial )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
                  UINT32 __writeBufferSize,
                                              __RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
                                              __RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer,
                           __RPC__out __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferResult * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProviderVtbl;
interface __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->Write(This,__bufferSize,buffer) )
    ( (This)->lpVtbl->WritePartial(This,__bufferSize,buffer,result) )
    ( (This)->lpVtbl->Read(This,__bufferSize,buffer) )
    ( (This)->lpVtbl->ReadPartial(This,__bufferSize,buffer,result) )
    ( (This)->lpVtbl->WriteRead(This,__writeBufferSize,writeBuffer,__readBufferSize,readBuffer) )
    ( (This)->lpVtbl->WriteReadPartial(This,__writeBufferSize,writeBuffer,__readBufferSize,readBuffer,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_Provider_II2cProvider[] = L"Windows.Devices.I2c.Provider.II2cProvider";
typedef struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetControllersAsync )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProviderVtbl;
interface __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetControllersAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_Provider_IProviderI2cConnectionSettings[] = L"Windows.Devices.I2c.Provider.IProviderI2cConnectionSettings";
typedef struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SlaveAddress )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SlaveAddress )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BusSpeed )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cBusSpeed * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BusSpeed )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
                  __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cBusSpeed value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SharingMode )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cSharingMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SharingMode )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
                  __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cSharingMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettingsVtbl;
interface __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettingsVtbl *lpVtbl;
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
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_I2c_Provider_ProviderI2cConnectionSettings[] = L"Windows.Devices.I2c.Provider.ProviderI2cConnectionSettings";
       
       
#pragma clang diagnostic pop
