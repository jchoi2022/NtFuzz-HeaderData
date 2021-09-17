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
typedef interface __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings;
typedef interface __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettingsFactory __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettingsFactory;
typedef interface __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider;
typedef interface __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProvider __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProvider;
typedef interface __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider;
typedef interface __FIIterator_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider __FIIterator_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider;
typedef struct __FIIterator_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This, __RPC__out __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProviderVtbl;
interface __FIIterator_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProviderVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider __FIIterable_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider;
typedef struct __FIIterable_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProviderVtbl;
interface __FIIterable_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProviderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider __FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider;
typedef struct __FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This,
                       __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProviderVtbl;
interface __FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProviderVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProviderVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProviderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * This, __RPC__out __FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProviderVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProviderVtbl *lpVtbl;
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
typedef enum __x_ABI_CWindows_CDevices_CSpi_CProvider_CProviderSpiMode __x_ABI_CWindows_CDevices_CSpi_CProvider_CProviderSpiMode;
typedef enum __x_ABI_CWindows_CDevices_CSpi_CProvider_CProviderSpiSharingMode __x_ABI_CWindows_CDevices_CSpi_CProvider_CProviderSpiSharingMode;
enum __x_ABI_CWindows_CDevices_CSpi_CProvider_CProviderSpiMode
{
    ProviderSpiMode_Mode0 = 0,
    ProviderSpiMode_Mode1 = 1,
    ProviderSpiMode_Mode2 = 2,
    ProviderSpiMode_Mode3 = 3,
};
enum __x_ABI_CWindows_CDevices_CSpi_CProvider_CProviderSpiSharingMode
{
    ProviderSpiSharingMode_Exclusive = 0,
    ProviderSpiSharingMode_Shared = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettings[] = L"Windows.Devices.Spi.Provider.IProviderSpiConnectionSettings";
typedef struct __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChipSelectLine )(
        __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChipSelectLine )(
        __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSpi_CProvider_CProviderSpiMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings * This,
                  __x_ABI_CWindows_CDevices_CSpi_CProvider_CProviderSpiMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DataBitLength )(
        __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DataBitLength )(
        __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ClockFrequency )(
        __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ClockFrequency )(
        __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SharingMode )(
        __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSpi_CProvider_CProviderSpiSharingMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SharingMode )(
        __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings * This,
                  __x_ABI_CWindows_CDevices_CSpi_CProvider_CProviderSpiSharingMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettingsVtbl;
interface __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettingsVtbl *lpVtbl;
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
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_Provider_IProviderSpiConnectionSettingsFactory[] = L"Windows.Devices.Spi.Provider.IProviderSpiConnectionSettingsFactory";
typedef struct __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettingsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettingsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettingsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettingsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettingsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettingsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettingsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettingsFactory * This,
                  INT32 chipSelectLine,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettingsFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettingsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettingsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,chipSelectLine,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettingsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_Provider_ISpiControllerProvider[] = L"Windows.Devices.Spi.Provider.ISpiControllerProvider";
typedef struct __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceProvider )(
        __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings * settings,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProvider * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProviderVtbl;
interface __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceProvider(This,settings,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_Provider_ISpiDeviceProvider[] = L"Windows.Devices.Spi.Provider.ISpiDeviceProvider";
typedef struct __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionSettings )(
        __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSpi_CProvider_CIProviderSpiConnectionSettings * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Write )(
        __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProvider * This,
                  UINT32 __bufferSize,
                                         __RPC__in_ecount_full(__bufferSize) BYTE * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *Read )(
        __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProvider * This,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __bufferSize,
                                          __RPC__out_ecount_full(__bufferSize) BYTE * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *TransferSequential )(
        __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProvider * This,
                  UINT32 __writeBufferSize,
                                              __RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
                                              __RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *TransferFullDuplex )(
        __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProvider * This,
                  UINT32 __writeBufferSize,
                                              __RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
                                              __RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProviderVtbl;
interface __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProviderVtbl *lpVtbl;
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
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiDeviceProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_Provider_ISpiProvider[] = L"Windows.Devices.Spi.Provider.ISpiProvider";
typedef struct __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetControllersAsync )(
        __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CProvider__CISpiControllerProvider * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProviderVtbl;
interface __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetControllersAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Spi_Provider_ProviderSpiConnectionSettings[] = L"Windows.Devices.Spi.Provider.ProviderSpiConnectionSettings";
       
       
#pragma clang diagnostic pop
