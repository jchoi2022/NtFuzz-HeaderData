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
typedef interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider;
typedef interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider;
typedef interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory;
typedef interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider;
typedef interface __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider;
typedef struct __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This, __RPC__out __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProviderVtbl;
interface __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProviderVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider;
typedef struct __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProviderVtbl;
interface __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProviderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider;
typedef struct __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
                       __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProviderVtbl;
interface __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProviderVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinDriveMode __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinDriveMode;
typedef enum __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinEdge __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinEdge;
typedef enum __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinValue __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinValue;
typedef enum __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioSharingMode __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioSharingMode;
enum __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinDriveMode
{
    ProviderGpioPinDriveMode_Input = 0,
    ProviderGpioPinDriveMode_Output = 1,
    ProviderGpioPinDriveMode_InputPullUp = 2,
    ProviderGpioPinDriveMode_InputPullDown = 3,
    ProviderGpioPinDriveMode_OutputOpenDrain = 4,
    ProviderGpioPinDriveMode_OutputOpenDrainPullUp = 5,
    ProviderGpioPinDriveMode_OutputOpenSource = 6,
    ProviderGpioPinDriveMode_OutputOpenSourcePullDown = 7,
};
enum __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinEdge
{
    ProviderGpioPinEdge_FallingEdge = 0,
    ProviderGpioPinEdge_RisingEdge = 1,
};
enum __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinValue
{
    ProviderGpioPinValue_Low = 0,
    ProviderGpioPinValue_High = 1,
};
enum __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioSharingMode
{
    ProviderGpioSharingMode_Exclusive = 0,
    ProviderGpioSharingMode_SharedReadOnly = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_Provider_IGpioControllerProvider[] = L"Windows.Devices.Gpio.Provider.IGpioControllerProvider";
typedef struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PinCount )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * This,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *OpenPinProvider )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * This,
                  INT32 pin,
                  __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioSharingMode sharingMode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * * gpioPinProvider
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProviderVtbl;
interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PinCount(This,value) )
    ( (This)->lpVtbl->OpenPinProvider(This,pin,sharingMode,gpioPinProvider) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_Provider_IGpioPinProvider[] = L"Windows.Devices.Gpio.Provider.IGpioPinProvider";
typedef struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_ValueChanged )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ValueChanged )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DebounceTimeout )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DebounceTimeout )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PinNumber )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SharingMode )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioSharingMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsDriveModeSupported )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
                  __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinDriveMode driveMode,
                           __RPC__out boolean * supported
        );
    HRESULT ( STDMETHODCALLTYPE *GetDriveMode )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinDriveMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDriveMode )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
                  __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinDriveMode value
        );
    HRESULT ( STDMETHODCALLTYPE *Write )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
                  __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinValue value
        );
    HRESULT ( STDMETHODCALLTYPE *Read )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinValue * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderVtbl;
interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_ValueChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ValueChanged(This,token) )
    ( (This)->lpVtbl->get_DebounceTimeout(This,value) )
    ( (This)->lpVtbl->put_DebounceTimeout(This,value) )
    ( (This)->lpVtbl->get_PinNumber(This,value) )
    ( (This)->lpVtbl->get_SharingMode(This,value) )
    ( (This)->lpVtbl->IsDriveModeSupported(This,driveMode,supported) )
    ( (This)->lpVtbl->GetDriveMode(This,value) )
    ( (This)->lpVtbl->SetDriveMode(This,value) )
    ( (This)->lpVtbl->Write(This,value) )
    ( (This)->lpVtbl->Read(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_Provider_IGpioPinProviderValueChangedEventArgs[] = L"Windows.Devices.Gpio.Provider.IGpioPinProviderValueChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Edge )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinEdge * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Edge(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_Provider_IGpioPinProviderValueChangedEventArgsFactory[] = L"Windows.Devices.Gpio.Provider.IGpioPinProviderValueChangedEventArgsFactory";
typedef struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory * This,
                  __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinEdge edge,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,edge,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_Provider_IGpioProvider[] = L"Windows.Devices.Gpio.Provider.IGpioProvider";
typedef struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetControllers )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProviderVtbl;
interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetControllers(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Gpio_Provider_GpioPinProviderValueChangedEventArgs[] = L"Windows.Devices.Gpio.Provider.GpioPinProviderValueChangedEventArgs";
       
       
#pragma clang diagnostic pop
