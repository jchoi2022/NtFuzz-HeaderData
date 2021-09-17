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
#include "Windows.Devices.Adc.Provider.h"
#include "Windows.Devices.Gpio.Provider.h"
#include "Windows.Devices.I2c.Provider.h"
#include "Windows.Devices.Pwm.Provider.h"
#include "Windows.Devices.Spi.Provider.h"
typedef interface __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider;
typedef interface __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory;
typedef interface __x_ABI_CWindows_CDevices_CILowLevelDevicesController __x_ABI_CWindows_CDevices_CILowLevelDevicesController;
typedef interface __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics;
typedef interface __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider;
typedef interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider;
typedef interface __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider;
typedef interface __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider;
typedef interface __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_ILowLevelDevicesAggregateProvider[] = L"Windows.Devices.ILowLevelDevicesAggregateProvider";
typedef struct __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AdcControllerProvider )(
        __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PwmControllerProvider )(
        __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GpioControllerProvider )(
        __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_I2cControllerProvider )(
        __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SpiControllerProvider )(
        __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderVtbl;
interface __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AdcControllerProvider(This,value) )
    ( (This)->lpVtbl->get_PwmControllerProvider(This,value) )
    ( (This)->lpVtbl->get_GpioControllerProvider(This,value) )
    ( (This)->lpVtbl->get_I2cControllerProvider(This,value) )
    ( (This)->lpVtbl->get_SpiControllerProvider(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_ILowLevelDevicesAggregateProviderFactory[] = L"Windows.Devices.ILowLevelDevicesAggregateProviderFactory";
typedef struct __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * adc,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * pwm,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * gpio,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * i2c,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider * spi,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,adc,pwm,gpio,i2c,spi,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_ILowLevelDevicesController[] = L"Windows.Devices.ILowLevelDevicesController";
typedef struct __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesController * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerVtbl;
interface __x_ABI_CWindows_CDevices_CILowLevelDevicesController
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CILowLevelDevicesController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_ILowLevelDevicesControllerStatics[] = L"Windows.Devices.ILowLevelDevicesControllerStatics";
typedef struct __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DefaultProvider )(
        __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DefaultProvider )(
        __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DefaultProvider(This,value) )
    ( (This)->lpVtbl->put_DefaultProvider(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_LowLevelDevicesAggregateProvider[] = L"Windows.Devices.LowLevelDevicesAggregateProvider";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_LowLevelDevicesController[] = L"Windows.Devices.LowLevelDevicesController";
       
       
#pragma clang diagnostic pop
