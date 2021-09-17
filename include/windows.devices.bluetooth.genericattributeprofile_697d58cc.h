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
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic2 __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3 __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicStatics __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicsResult __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicsResult;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult2 __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor2 __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorStatics __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorUuidsStatics __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorUuidsStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorsResult __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorsResult;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService2 __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics2 __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicResult __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicResult;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParameters __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParameters;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorResult __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorResult;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics2 __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult2 __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequest __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequest;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestedEventArgs __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult2 __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction2 __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattRequestStateChangedEventArgs __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattRequestStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProvider __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProvider;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisementStatusChangedEventArgs __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisementStatusChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters2 __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderResult __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderResult;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderStatics __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatics __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatusChangedEventArgs __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatusChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestedEventArgs __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteResult __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteResult;
typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic;
typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicVtbl;
interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic;
typedef struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicVtbl;
interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult;
typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl;
interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult;
typedef struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl;
interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor;
typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorVtbl;
interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor;
typedef struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorVtbl;
interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;
typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl;
interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;
typedef struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl;
interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic;
typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicVtbl;
interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic;
typedef struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicVtbl;
interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor;
typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorVtbl;
interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor;
typedef struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorVtbl;
interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat;
typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormatVtbl;
interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormatVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat;
typedef struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormatVtbl;
interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient;
typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClientVtbl;
interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClientVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient;
typedef struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClientVtbl;
interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClientVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs;
typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl;
interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs;
typedef struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl;
interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic;
typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This,
                       __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicVtbl;
interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult;
typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This,
                       __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl;
interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor;
typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This,
                       __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorVtbl;
interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;
typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                       __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl;
interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic;
typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This,
                       __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicVtbl;
interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor;
typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This,
                       __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorVtbl;
interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat;
typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                       __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormatVtbl;
interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormatVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient;
typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This,
                       __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClientVtbl;
interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClientVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs;
typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
                       __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl;
interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat;
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat;
typedef struct __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This, __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                   __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This, __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * *value);
    END_INTERFACE
} __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormatVtbl;
interface __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormatVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicsResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattCommunicationStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus * This, __RPC__out enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattCommunicationStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatusVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorsResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResultVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattOpenStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus * This, __RPC__out enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattOpenStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatusVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequest * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSessionVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSessionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSessionVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSessionVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * This, __RPC__out __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResultVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_IInspectable __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgs __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgs __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgs __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgs __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequest * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattRequestStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProvider_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderAdvertisementStatusChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProvider_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderAdvertisementStatusChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProvider_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderAdvertisementStatusChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProvider_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderAdvertisementStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProvider_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderAdvertisementStatusChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProvider_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderAdvertisementStatusChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProvider_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderAdvertisementStatusChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProvider_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderAdvertisementStatusChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProvider * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisementStatusChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProvider_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderAdvertisementStatusChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProvider_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderAdvertisementStatusChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProvider_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderAdvertisementStatusChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_IInspectable __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSessionStatusChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSessionStatusChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSessionStatusChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSessionStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSessionStatusChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSessionStatusChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSessionStatusChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSessionStatusChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatusChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSessionStatusChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSessionStatusChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSessionStatusChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient_IInspectable __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattRequestStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIReference_1_byte __FIReference_1_byte;
EXTERN_C const IID IID___FIReference_1_byte;
typedef struct __FIReference_1_byteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_byte * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_byte * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_byte * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_byte * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_byte * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_byte * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_byte * This, __RPC__out byte *value);
    END_INTERFACE
} __FIReference_1_byteVtbl;
interface __FIReference_1_byte
{
    CONST_VTBL struct __FIReference_1_byteVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
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
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation;
typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattCharacteristicProperties __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattCharacteristicProperties;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattClientCharacteristicConfigurationDescriptorValue __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattClientCharacteristicConfigurationDescriptorValue;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattCommunicationStatus __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattCommunicationStatus;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattOpenStatus __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattOpenStatus;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattProtectionLevel __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattProtectionLevel;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattRequestState __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattRequestState;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattServiceProviderAdvertisementStatus __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattServiceProviderAdvertisementStatus;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattSessionStatus __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattSessionStatus;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattSharingMode __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattSharingMode;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattWriteOption __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattWriteOption;
enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattCharacteristicProperties
{
    GattCharacteristicProperties_None = 0,
    GattCharacteristicProperties_Broadcast = 0x1,
    GattCharacteristicProperties_Read = 0x2,
    GattCharacteristicProperties_WriteWithoutResponse = 0x4,
    GattCharacteristicProperties_Write = 0x8,
    GattCharacteristicProperties_Notify = 0x10,
    GattCharacteristicProperties_Indicate = 0x20,
    GattCharacteristicProperties_AuthenticatedSignedWrites = 0x40,
    GattCharacteristicProperties_ExtendedProperties = 0x80,
    GattCharacteristicProperties_ReliableWrites = 0x100,
    GattCharacteristicProperties_WritableAuxiliaries = 0x200,
};
enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattClientCharacteristicConfigurationDescriptorValue
{
    GattClientCharacteristicConfigurationDescriptorValue_None = 0,
    GattClientCharacteristicConfigurationDescriptorValue_Notify = 1,
    GattClientCharacteristicConfigurationDescriptorValue_Indicate = 2,
};
enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattCommunicationStatus
{
    GattCommunicationStatus_Success = 0,
    GattCommunicationStatus_Unreachable = 1,
    GattCommunicationStatus_ProtocolError = 2,
    GattCommunicationStatus_AccessDenied = 3,
};
enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattOpenStatus
{
    GattOpenStatus_Unspecified = 0,
    GattOpenStatus_Success = 1,
    GattOpenStatus_AlreadyOpened = 2,
    GattOpenStatus_NotFound = 3,
    GattOpenStatus_SharingViolation = 4,
    GattOpenStatus_AccessDenied = 5,
};
enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattProtectionLevel
{
    GattProtectionLevel_Plain = 0,
    GattProtectionLevel_AuthenticationRequired = 1,
    GattProtectionLevel_EncryptionRequired = 2,
    GattProtectionLevel_EncryptionAndAuthenticationRequired = 3,
};
enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattRequestState
{
    GattRequestState_Pending = 0,
    GattRequestState_Completed = 1,
    GattRequestState_Canceled = 2,
};
enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattServiceProviderAdvertisementStatus
{
    GattServiceProviderAdvertisementStatus_Created = 0,
    GattServiceProviderAdvertisementStatus_Stopped = 1,
    GattServiceProviderAdvertisementStatus_Started = 2,
    GattServiceProviderAdvertisementStatus_Aborted = 3,
    GattServiceProviderAdvertisementStatus_StartedWithoutAllAdvertisementData = 4,
};
enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattSessionStatus
{
    GattSessionStatus_Closed = 0,
    GattSessionStatus_Active = 1,
};
enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattSharingMode
{
    GattSharingMode_Unspecified = 0,
    GattSharingMode_Exclusive = 1,
    GattSharingMode_SharedReadOnly = 2,
    GattSharingMode_SharedReadAndWrite = 3,
};
enum __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattWriteOption
{
    GattWriteOption_WriteWithResponse = 0,
    GattWriteOption_WriteWithoutResponse = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattCharacteristic";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use GetDescriptorsForUuidAsync instead of GetDescriptors.  For more information, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetDescriptors )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
                  GUID descriptorUuid,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CharacteristicProperties )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattCharacteristicProperties * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtectionLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattProtectionLevel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProtectionLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattProtectionLevel value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserDescription )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uuid )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AttributeHandle )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PresentationFormats )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *ReadValueAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *ReadValueWithCacheModeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *WriteValueAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus * * asyncOp
        );
                    HRESULT ( STDMETHODCALLTYPE *WriteValueWithOptionAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value,
                  __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattWriteOption writeOption,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus * * asyncOp
        );
    HRESULT ( STDMETHODCALLTYPE *ReadClientCharacteristicConfigurationDescriptorAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadClientCharacteristicConfigurationDescriptorResult * * asyncOp
        );
    HRESULT ( STDMETHODCALLTYPE *WriteClientCharacteristicConfigurationDescriptorAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattClientCharacteristicConfigurationDescriptorValue clientCharacteristicConfigurationDescriptorValue,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus * * asyncOp
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ValueChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * valueChangedHandler,
                           __RPC__out EventRegistrationToken * valueChangedEventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ValueChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * This,
                  EventRegistrationToken valueChangedEventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use GetDescriptorsForUuidAsync instead of GetDescriptors.  For more information, see MSDN.")
    ( (This)->lpVtbl->GetDescriptors(This,descriptorUuid,value) )
    ( (This)->lpVtbl->get_CharacteristicProperties(This,value) )
    ( (This)->lpVtbl->get_ProtectionLevel(This,value) )
    ( (This)->lpVtbl->put_ProtectionLevel(This,value) )
    ( (This)->lpVtbl->get_UserDescription(This,value) )
    ( (This)->lpVtbl->get_Uuid(This,value) )
    ( (This)->lpVtbl->get_AttributeHandle(This,value) )
    ( (This)->lpVtbl->get_PresentationFormats(This,value) )
    ( (This)->lpVtbl->ReadValueAsync(This,value) )
    ( (This)->lpVtbl->ReadValueWithCacheModeAsync(This,cacheMode,value) )
    ( (This)->lpVtbl->WriteValueAsync(This,value,asyncOp) )
    ( (This)->lpVtbl->WriteValueWithOptionAsync(This,value,writeOption,asyncOp) )
    ( (This)->lpVtbl->ReadClientCharacteristicConfigurationDescriptorAsync(This,asyncOp) )
    ( (This)->lpVtbl->WriteClientCharacteristicConfigurationDescriptorAsync(This,clientCharacteristicConfigurationDescriptorValue,asyncOp) )
    ( (This)->lpVtbl->add_ValueChanged(This,valueChangedHandler,valueChangedEventCookie) )
    ( (This)->lpVtbl->remove_ValueChanged(This,valueChangedEventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic2[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattCharacteristic2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Service )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * * value
        );
    DEPRECATED("Use GetDescriptorsAsync instead of GetAllDescriptors.  For more information, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetAllDescriptors )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * * descriptors
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Service(This,value) )
DEPRECATED("Use GetDescriptorsAsync instead of GetAllDescriptors.  For more information, see MSDN.")
    ( (This)->lpVtbl->GetAllDescriptors(This,descriptors) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic3[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattCharacteristic3";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDescriptorsAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDescriptorsWithCacheModeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3 * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDescriptorsForUuidAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3 * This,
                  GUID descriptorUuid,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDescriptorsForUuidWithCacheModeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3 * This,
                  GUID descriptorUuid,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptorsResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *WriteValueWithResultAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *WriteValueWithResultAndOptionAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value,
                  __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattWriteOption writeOption,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *WriteClientCharacteristicConfigurationDescriptorWithResultAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3 * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattClientCharacteristicConfigurationDescriptorValue clientCharacteristicConfigurationDescriptorValue,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDescriptorsAsync(This,operation) )
    ( (This)->lpVtbl->GetDescriptorsWithCacheModeAsync(This,cacheMode,operation) )
    ( (This)->lpVtbl->GetDescriptorsForUuidAsync(This,descriptorUuid,operation) )
    ( (This)->lpVtbl->GetDescriptorsForUuidWithCacheModeAsync(This,descriptorUuid,cacheMode,operation) )
    ( (This)->lpVtbl->WriteValueWithResultAsync(This,value,operation) )
    ( (This)->lpVtbl->WriteValueWithResultAndOptionAsync(This,value,writeOption,operation) )
    ( (This)->lpVtbl->WriteClientCharacteristicConfigurationDescriptorWithResultAsync(This,clientCharacteristicConfigurationDescriptorValue,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicStatics[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattCharacteristicStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use BluetoothUuidHelper instead of ConvertShortIdToUuid.  For more information, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *ConvertShortIdToUuid )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicStatics * This,
                  UINT16 shortId,
                           __RPC__out GUID * characteristicUuid
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use BluetoothUuidHelper instead of ConvertShortIdToUuid.  For more information, see MSDN.")
    ( (This)->lpVtbl->ConvertShortIdToUuid(This,shortId,characteristicUuid) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattCharacteristicUuidsStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BatteryLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BloodPressureFeature )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BloodPressureMeasurement )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BodySensorLocation )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CscFeature )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CscMeasurement )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GlucoseFeature )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GlucoseMeasurement )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GlucoseMeasurementContext )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeartRateControlPoint )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeartRateMeasurement )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IntermediateCuffPressure )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IntermediateTemperature )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MeasurementInterval )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RecordAccessControlPoint )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RscFeature )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RscMeasurement )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SCControlPoint )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SensorLocation )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TemperatureMeasurement )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TemperatureType )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics * This,
                           __RPC__out GUID * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BatteryLevel(This,value) )
    ( (This)->lpVtbl->get_BloodPressureFeature(This,value) )
    ( (This)->lpVtbl->get_BloodPressureMeasurement(This,value) )
    ( (This)->lpVtbl->get_BodySensorLocation(This,value) )
    ( (This)->lpVtbl->get_CscFeature(This,value) )
    ( (This)->lpVtbl->get_CscMeasurement(This,value) )
    ( (This)->lpVtbl->get_GlucoseFeature(This,value) )
    ( (This)->lpVtbl->get_GlucoseMeasurement(This,value) )
    ( (This)->lpVtbl->get_GlucoseMeasurementContext(This,value) )
    ( (This)->lpVtbl->get_HeartRateControlPoint(This,value) )
    ( (This)->lpVtbl->get_HeartRateMeasurement(This,value) )
    ( (This)->lpVtbl->get_IntermediateCuffPressure(This,value) )
    ( (This)->lpVtbl->get_IntermediateTemperature(This,value) )
    ( (This)->lpVtbl->get_MeasurementInterval(This,value) )
    ( (This)->lpVtbl->get_RecordAccessControlPoint(This,value) )
    ( (This)->lpVtbl->get_RscFeature(This,value) )
    ( (This)->lpVtbl->get_RscMeasurement(This,value) )
    ( (This)->lpVtbl->get_SCControlPoint(This,value) )
    ( (This)->lpVtbl->get_SensorLocation(This,value) )
    ( (This)->lpVtbl->get_TemperatureMeasurement(This,value) )
    ( (This)->lpVtbl->get_TemperatureType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattCharacteristicUuidsStatics2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AlertCategoryId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlertCategoryIdBitMask )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlertLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlertNotificationControlPoint )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlertStatus )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GapAppearance )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BootKeyboardInputReport )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BootKeyboardOutputReport )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BootMouseInputReport )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentTime )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CyclingPowerControlPoint )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CyclingPowerFeature )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CyclingPowerMeasurement )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CyclingPowerVector )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DateTime )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DayDateTime )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DayOfWeek )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GapDeviceName )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DstOffset )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExactTime256 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FirmwareRevisionString )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HardwareRevisionString )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HidControlPoint )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HidInformation )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ieee1107320601RegulatoryCertificationDataList )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LnControlPoint )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LnFeature )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalTimeInformation )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocationAndSpeed )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ManufacturerNameString )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ModelNumberString )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Navigation )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewAlert )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GapPeripheralPreferredConnectionParameters )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GapPeripheralPrivacyFlag )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PnpId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PositionQuality )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtocolMode )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GapReconnectionAddress )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReferenceTimeInformation )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Report )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportMap )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RingerControlPoint )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RingerSetting )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScanIntervalWindow )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScanRefresh )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SerialNumberString )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GattServiceChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SoftwareRevisionString )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedNewAlertCategory )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportUnreadAlertCategory )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimeAccuracy )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimeSource )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimeUpdateControlPoint )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimeUpdateState )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimeWithDst )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimeZone )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TxPowerLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UnreadAlertStatus )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AlertCategoryId(This,value) )
    ( (This)->lpVtbl->get_AlertCategoryIdBitMask(This,value) )
    ( (This)->lpVtbl->get_AlertLevel(This,value) )
    ( (This)->lpVtbl->get_AlertNotificationControlPoint(This,value) )
    ( (This)->lpVtbl->get_AlertStatus(This,value) )
    ( (This)->lpVtbl->get_GapAppearance(This,value) )
    ( (This)->lpVtbl->get_BootKeyboardInputReport(This,value) )
    ( (This)->lpVtbl->get_BootKeyboardOutputReport(This,value) )
    ( (This)->lpVtbl->get_BootMouseInputReport(This,value) )
    ( (This)->lpVtbl->get_CurrentTime(This,value) )
    ( (This)->lpVtbl->get_CyclingPowerControlPoint(This,value) )
    ( (This)->lpVtbl->get_CyclingPowerFeature(This,value) )
    ( (This)->lpVtbl->get_CyclingPowerMeasurement(This,value) )
    ( (This)->lpVtbl->get_CyclingPowerVector(This,value) )
    ( (This)->lpVtbl->get_DateTime(This,value) )
    ( (This)->lpVtbl->get_DayDateTime(This,value) )
    ( (This)->lpVtbl->get_DayOfWeek(This,value) )
    ( (This)->lpVtbl->get_GapDeviceName(This,value) )
    ( (This)->lpVtbl->get_DstOffset(This,value) )
    ( (This)->lpVtbl->get_ExactTime256(This,value) )
    ( (This)->lpVtbl->get_FirmwareRevisionString(This,value) )
    ( (This)->lpVtbl->get_HardwareRevisionString(This,value) )
    ( (This)->lpVtbl->get_HidControlPoint(This,value) )
    ( (This)->lpVtbl->get_HidInformation(This,value) )
    ( (This)->lpVtbl->get_Ieee1107320601RegulatoryCertificationDataList(This,value) )
    ( (This)->lpVtbl->get_LnControlPoint(This,value) )
    ( (This)->lpVtbl->get_LnFeature(This,value) )
    ( (This)->lpVtbl->get_LocalTimeInformation(This,value) )
    ( (This)->lpVtbl->get_LocationAndSpeed(This,value) )
    ( (This)->lpVtbl->get_ManufacturerNameString(This,value) )
    ( (This)->lpVtbl->get_ModelNumberString(This,value) )
    ( (This)->lpVtbl->get_Navigation(This,value) )
    ( (This)->lpVtbl->get_NewAlert(This,value) )
    ( (This)->lpVtbl->get_GapPeripheralPreferredConnectionParameters(This,value) )
    ( (This)->lpVtbl->get_GapPeripheralPrivacyFlag(This,value) )
    ( (This)->lpVtbl->get_PnpId(This,value) )
    ( (This)->lpVtbl->get_PositionQuality(This,value) )
    ( (This)->lpVtbl->get_ProtocolMode(This,value) )
    ( (This)->lpVtbl->get_GapReconnectionAddress(This,value) )
    ( (This)->lpVtbl->get_ReferenceTimeInformation(This,value) )
    ( (This)->lpVtbl->get_Report(This,value) )
    ( (This)->lpVtbl->get_ReportMap(This,value) )
    ( (This)->lpVtbl->get_RingerControlPoint(This,value) )
    ( (This)->lpVtbl->get_RingerSetting(This,value) )
    ( (This)->lpVtbl->get_ScanIntervalWindow(This,value) )
    ( (This)->lpVtbl->get_ScanRefresh(This,value) )
    ( (This)->lpVtbl->get_SerialNumberString(This,value) )
    ( (This)->lpVtbl->get_GattServiceChanged(This,value) )
    ( (This)->lpVtbl->get_SoftwareRevisionString(This,value) )
    ( (This)->lpVtbl->get_SupportedNewAlertCategory(This,value) )
    ( (This)->lpVtbl->get_SupportUnreadAlertCategory(This,value) )
    ( (This)->lpVtbl->get_SystemId(This,value) )
    ( (This)->lpVtbl->get_TimeAccuracy(This,value) )
    ( (This)->lpVtbl->get_TimeSource(This,value) )
    ( (This)->lpVtbl->get_TimeUpdateControlPoint(This,value) )
    ( (This)->lpVtbl->get_TimeUpdateState(This,value) )
    ( (This)->lpVtbl->get_TimeWithDst(This,value) )
    ( (This)->lpVtbl->get_TimeZone(This,value) )
    ( (This)->lpVtbl->get_TxPowerLevel(This,value) )
    ( (This)->lpVtbl->get_UnreadAlertStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicUuidsStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicsResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattCharacteristicsResult";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicsResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicsResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicsResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicsResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicsResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicsResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicsResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattCommunicationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtocolError )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicsResult * This,
                           __RPC__deref_out_opt __FIReference_1_byte * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Characteristics )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicsResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicsResultVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicsResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicsResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_ProtocolError(This,value) )
    ( (This)->lpVtbl->get_Characteristics(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristicsResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattClientNotificationResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattClientNotificationResult";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SubscribedClient )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattCommunicationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtocolError )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult * This,
                           __RPC__deref_out_opt __FIReference_1_byte * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResultVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SubscribedClient(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_ProtocolError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattClientNotificationResult2[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattClientNotificationResult2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BytesSent )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult2 * This,
                           __RPC__out UINT16 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BytesSent(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattClientNotificationResult2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDescriptor";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProtectionLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattProtectionLevel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProtectionLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattProtectionLevel value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uuid )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AttributeHandle )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor * This,
                           __RPC__out UINT16 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *ReadValueAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *ReadValueWithCacheModeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *WriteValueAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus * * action
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProtectionLevel(This,value) )
    ( (This)->lpVtbl->put_ProtectionLevel(This,value) )
    ( (This)->lpVtbl->get_Uuid(This,value) )
    ( (This)->lpVtbl->get_AttributeHandle(This,value) )
    ( (This)->lpVtbl->ReadValueAsync(This,value) )
    ( (This)->lpVtbl->ReadValueWithCacheModeAsync(This,cacheMode,value) )
    ( (This)->lpVtbl->WriteValueAsync(This,value,action) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor2[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDescriptor2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *WriteValueWithResultAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->WriteValueWithResultAsync(This,value,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptor2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorStatics[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDescriptorStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use BluetoothUuidHelper instead of ConvertShortIdToUuid.  For more information, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *ConvertShortIdToUuid )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorStatics * This,
                  UINT16 shortId,
                           __RPC__out GUID * descriptorUuid
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use BluetoothUuidHelper instead of ConvertShortIdToUuid.  For more information, see MSDN.")
    ( (This)->lpVtbl->ConvertShortIdToUuid(This,shortId,descriptorUuid) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorUuidsStatics[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDescriptorUuidsStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorUuidsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorUuidsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorUuidsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorUuidsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorUuidsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorUuidsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorUuidsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CharacteristicAggregateFormat )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CharacteristicExtendedProperties )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CharacteristicPresentationFormat )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CharacteristicUserDescription )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ClientCharacteristicConfiguration )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerCharacteristicConfiguration )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorUuidsStatics * This,
                           __RPC__out GUID * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorUuidsStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorUuidsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorUuidsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CharacteristicAggregateFormat(This,value) )
    ( (This)->lpVtbl->get_CharacteristicExtendedProperties(This,value) )
    ( (This)->lpVtbl->get_CharacteristicPresentationFormat(This,value) )
    ( (This)->lpVtbl->get_CharacteristicUserDescription(This,value) )
    ( (This)->lpVtbl->get_ClientCharacteristicConfiguration(This,value) )
    ( (This)->lpVtbl->get_ServerCharacteristicConfiguration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorUuidsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorsResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDescriptorsResult";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorsResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorsResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorsResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorsResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorsResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorsResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorsResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattCommunicationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtocolError )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorsResult * This,
                           __RPC__deref_out_opt __FIReference_1_byte * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Descriptors )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorsResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDescriptor * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorsResultVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorsResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorsResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_ProtocolError(This,value) )
    ( (This)->lpVtbl->get_Descriptors(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDescriptorsResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDeviceService";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use GetCharacteristicsForUuidAsync instead of GetCharacteristics.  For more information, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetCharacteristics )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * This,
                  GUID characteristicUuid,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * * value
        );
    DEPRECATED("Use GetIncludedServicesForUuidAsync instead of GetIncludedServices.  For more information, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetIncludedServices )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * This,
                  GUID serviceUuid,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uuid )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AttributeHandle )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * This,
                           __RPC__out UINT16 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use GetCharacteristicsForUuidAsync instead of GetCharacteristics.  For more information, see MSDN.")
    ( (This)->lpVtbl->GetCharacteristics(This,characteristicUuid,value) )
DEPRECATED("Use GetIncludedServicesForUuidAsync instead of GetIncludedServices.  For more information, see MSDN.")
    ( (This)->lpVtbl->GetIncludedServices(This,serviceUuid,value) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_Uuid(This,value) )
    ( (This)->lpVtbl->get_AttributeHandle(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService2[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDeviceService2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use Session instead of Device property.  For more information, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Device )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * * value
        );
    DEPRECATED("ParentServices may be altered or unavailable in future releases.  For more information, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ParentServices )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * * value
        );
    DEPRECATED("Use GetCharacteristicsAsync instead of GetAllCharacteristics.  For more information, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetAllCharacteristics )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristic * * characteristics
        );
    DEPRECATED("Use GetIncludedServicesAsync instead of GetAllIncludedServices.  For more information, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetAllIncludedServices )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * * includedServices
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use Session instead of Device property.  For more information, see MSDN.")
    ( (This)->lpVtbl->get_Device(This,value) )
DEPRECATED("ParentServices may be altered or unavailable in future releases.  For more information, see MSDN.")
    ( (This)->lpVtbl->get_ParentServices(This,value) )
DEPRECATED("Use GetCharacteristicsAsync instead of GetAllCharacteristics.  For more information, see MSDN.")
    ( (This)->lpVtbl->GetAllCharacteristics(This,characteristics) )
DEPRECATED("Use GetIncludedServicesAsync instead of GetAllIncludedServices.  For more information, see MSDN.")
    ( (This)->lpVtbl->GetAllIncludedServices(This,includedServices) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDeviceService3";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceAccessInformation )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SharingMode )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattSharingMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * * value
        );
    HRESULT ( STDMETHODCALLTYPE *OpenAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattSharingMode sharingMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattOpenStatus * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetCharacteristicsAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetCharacteristicsWithCacheModeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetCharacteristicsForUuidAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 * This,
                  GUID characteristicUuid,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetCharacteristicsForUuidWithCacheModeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 * This,
                  GUID characteristicUuid,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCharacteristicsResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetIncludedServicesAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetIncludedServicesWithCacheModeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetIncludedServicesForUuidAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 * This,
                  GUID serviceUuid,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetIncludedServicesForUuidWithCacheModeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3 * This,
                  GUID serviceUuid,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceAccessInformation(This,value) )
    ( (This)->lpVtbl->get_Session(This,value) )
    ( (This)->lpVtbl->get_SharingMode(This,value) )
    ( (This)->lpVtbl->RequestAccessAsync(This,value) )
    ( (This)->lpVtbl->OpenAsync(This,sharingMode,operation) )
    ( (This)->lpVtbl->GetCharacteristicsAsync(This,operation) )
    ( (This)->lpVtbl->GetCharacteristicsWithCacheModeAsync(This,cacheMode,operation) )
    ( (This)->lpVtbl->GetCharacteristicsForUuidAsync(This,characteristicUuid,operation) )
    ( (This)->lpVtbl->GetCharacteristicsForUuidWithCacheModeAsync(This,characteristicUuid,cacheMode,operation) )
    ( (This)->lpVtbl->GetIncludedServicesAsync(This,operation) )
    ( (This)->lpVtbl->GetIncludedServicesWithCacheModeAsync(This,cacheMode,operation) )
    ( (This)->lpVtbl->GetIncludedServicesForUuidAsync(This,serviceUuid,operation) )
    ( (This)->lpVtbl->GetIncludedServicesForUuidWithCacheModeAsync(This,serviceUuid,cacheMode,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDeviceServiceStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * * asyncOp
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromUuid )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics * This,
                  GUID serviceUuid,
                           __RPC__deref_out_opt HSTRING * selector
        );
    DEPRECATED("Use GetDeviceSelectorFromUuid instead of GetDeviceSelectorFromShortId.  For more information, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromShortId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics * This,
                  UINT16 serviceShortId,
                           __RPC__deref_out_opt HSTRING * selector
        );
    DEPRECATED("Use BluetoothUuidHelper instead of ConvertShortIdToUuid.  For more information, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *ConvertShortIdToUuid )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics * This,
                  UINT16 shortId,
                           __RPC__out GUID * serviceUuid
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,asyncOp) )
    ( (This)->lpVtbl->GetDeviceSelectorFromUuid(This,serviceUuid,selector) )
DEPRECATED("Use GetDeviceSelectorFromUuid instead of GetDeviceSelectorFromShortId.  For more information, see MSDN.")
    ( (This)->lpVtbl->GetDeviceSelectorFromShortId(This,serviceShortId,selector) )
DEPRECATED("Use BluetoothUuidHelper instead of ConvertShortIdToUuid.  For more information, see MSDN.")
    ( (This)->lpVtbl->ConvertShortIdToUuid(This,shortId,serviceUuid) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics2[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDeviceServiceStatics2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *FromIdWithSharingModeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics2 * This,
                  __RPC__in HSTRING deviceId,
                  __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattSharingMode sharingMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorForBluetoothDeviceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * bluetoothDeviceId,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorForBluetoothDeviceIdWithCacheMode )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * bluetoothDeviceId,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorForBluetoothDeviceIdAndUuid )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * bluetoothDeviceId,
                  GUID serviceUuid,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorForBluetoothDeviceIdAndUuidWithCacheMode )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * bluetoothDeviceId,
                  GUID serviceUuid,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromIdWithSharingModeAsync(This,deviceId,sharingMode,operation) )
    ( (This)->lpVtbl->GetDeviceSelectorForBluetoothDeviceId(This,bluetoothDeviceId,result) )
    ( (This)->lpVtbl->GetDeviceSelectorForBluetoothDeviceIdWithCacheMode(This,bluetoothDeviceId,cacheMode,result) )
    ( (This)->lpVtbl->GetDeviceSelectorForBluetoothDeviceIdAndUuid(This,bluetoothDeviceId,serviceUuid,result) )
    ( (This)->lpVtbl->GetDeviceSelectorForBluetoothDeviceIdAndUuidWithCacheMode(This,bluetoothDeviceId,serviceUuid,cacheMode,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServiceStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServicesResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattDeviceServicesResult";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattCommunicationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtocolError )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult * This,
                           __RPC__deref_out_opt __FIReference_1_byte * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Services )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResultVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_ProtocolError(This,value) )
    ( (This)->lpVtbl->get_Services(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattLocalCharacteristic";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uuid )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StaticValue )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CharacteristicProperties )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattCharacteristicProperties * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadProtectionLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattProtectionLevel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WriteProtectionLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattProtectionLevel * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDescriptorAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                  GUID descriptorUuid,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParameters * parameters,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptorResult * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Descriptors )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserDescription )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PresentationFormats )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SubscribedClients )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SubscribedClientsChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SubscribedClientsChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReadRequested )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReadRequested )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_WriteRequested )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_WriteRequested )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *NotifyValueAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *NotifyValueForSubscribedClientAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient * subscribedClient,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattClientNotificationResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uuid(This,value) )
    ( (This)->lpVtbl->get_StaticValue(This,value) )
    ( (This)->lpVtbl->get_CharacteristicProperties(This,value) )
    ( (This)->lpVtbl->get_ReadProtectionLevel(This,value) )
    ( (This)->lpVtbl->get_WriteProtectionLevel(This,value) )
    ( (This)->lpVtbl->CreateDescriptorAsync(This,descriptorUuid,parameters,operation) )
    ( (This)->lpVtbl->get_Descriptors(This,value) )
    ( (This)->lpVtbl->get_UserDescription(This,value) )
    ( (This)->lpVtbl->get_PresentationFormats(This,value) )
    ( (This)->lpVtbl->get_SubscribedClients(This,value) )
    ( (This)->lpVtbl->add_SubscribedClientsChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SubscribedClientsChanged(This,token) )
    ( (This)->lpVtbl->add_ReadRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_ReadRequested(This,token) )
    ( (This)->lpVtbl->add_WriteRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_WriteRequested(This,token) )
    ( (This)->lpVtbl->NotifyValueAsync(This,value,operation) )
    ( (This)->lpVtbl->NotifyValueForSubscribedClientAsync(This,value,subscribedClient,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattLocalCharacteristicParameters";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_StaticValue )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StaticValue )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CharacteristicProperties )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattCharacteristicProperties value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CharacteristicProperties )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattCharacteristicProperties * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReadProtectionLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattProtectionLevel value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadProtectionLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattProtectionLevel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_WriteProtectionLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattProtectionLevel value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WriteProtectionLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattProtectionLevel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UserDescription )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserDescription )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PresentationFormats )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattPresentationFormat * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParametersVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParametersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_StaticValue(This,value) )
    ( (This)->lpVtbl->get_StaticValue(This,value) )
    ( (This)->lpVtbl->put_CharacteristicProperties(This,value) )
    ( (This)->lpVtbl->get_CharacteristicProperties(This,value) )
    ( (This)->lpVtbl->put_ReadProtectionLevel(This,value) )
    ( (This)->lpVtbl->get_ReadProtectionLevel(This,value) )
    ( (This)->lpVtbl->put_WriteProtectionLevel(This,value) )
    ( (This)->lpVtbl->get_WriteProtectionLevel(This,value) )
    ( (This)->lpVtbl->put_UserDescription(This,value) )
    ( (This)->lpVtbl->get_UserDescription(This,value) )
    ( (This)->lpVtbl->get_PresentationFormats(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattLocalCharacteristicResult";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Characteristic )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristic * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicResultVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Characteristic(This,value) )
    ( (This)->lpVtbl->get_Error(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattLocalDescriptor";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uuid )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StaticValue )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadProtectionLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattProtectionLevel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WriteProtectionLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattProtectionLevel * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReadRequested )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReadRequested )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_WriteRequested )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalDescriptor_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_WriteRequested )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uuid(This,value) )
    ( (This)->lpVtbl->get_StaticValue(This,value) )
    ( (This)->lpVtbl->get_ReadProtectionLevel(This,value) )
    ( (This)->lpVtbl->get_WriteProtectionLevel(This,value) )
    ( (This)->lpVtbl->add_ReadRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_ReadRequested(This,token) )
    ( (This)->lpVtbl->add_WriteRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_WriteRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorParameters[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattLocalDescriptorParameters";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParameters * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParameters * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParameters * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParameters * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParameters * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParameters * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_StaticValue )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParameters * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StaticValue )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParameters * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReadProtectionLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParameters * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattProtectionLevel value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadProtectionLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParameters * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattProtectionLevel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_WriteProtectionLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParameters * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattProtectionLevel value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WriteProtectionLevel )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParameters * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattProtectionLevel * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParametersVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParametersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_StaticValue(This,value) )
    ( (This)->lpVtbl->get_StaticValue(This,value) )
    ( (This)->lpVtbl->put_ReadProtectionLevel(This,value) )
    ( (This)->lpVtbl->get_ReadProtectionLevel(This,value) )
    ( (This)->lpVtbl->put_WriteProtectionLevel(This,value) )
    ( (This)->lpVtbl->get_WriteProtectionLevel(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorParameters;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattLocalDescriptorResult";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Descriptor )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorResultVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Descriptor(This,value) )
    ( (This)->lpVtbl->get_Error(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalDescriptorResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalService[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattLocalService";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uuid )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService * This,
                           __RPC__out GUID * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCharacteristicAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService * This,
                  GUID characteristicUuid,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalCharacteristicParameters * parameters,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristicResult * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Characteristics )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattLocalCharacteristic * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalServiceVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalServiceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uuid(This,value) )
    ( (This)->lpVtbl->CreateCharacteristicAsync(This,characteristicUuid,parameters,operation) )
    ( (This)->lpVtbl->get_Characteristics(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormat[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattPresentationFormat";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FormatType )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Exponent )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Unit )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Namespace )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * This,
                           __RPC__out UINT16 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FormatType(This,value) )
    ( (This)->lpVtbl->get_Exponent(This,value) )
    ( (This)->lpVtbl->get_Unit(This,value) )
    ( (This)->lpVtbl->get_Namespace(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatStatics[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattPresentationFormatStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BluetoothSigAssignedNumbers )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics * This,
                           __RPC__out BYTE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BluetoothSigAssignedNumbers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatStatics2[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattPresentationFormatStatics2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromParts )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics2 * This,
                  BYTE formatType,
                  INT32 exponent,
                  UINT16 unit,
                  BYTE namespaceId,
                  UINT16 description,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormat * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromParts(This,formatType,exponent,unit,namespaceId,description,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattPresentationFormatTypesStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Boolean )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bit2 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Nibble )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UInt8 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UInt12 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UInt16 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UInt24 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UInt32 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UInt48 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UInt64 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UInt128 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SInt8 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SInt12 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SInt16 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SInt24 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SInt32 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SInt48 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SInt64 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SInt128 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Float32 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Float64 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SFloat )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Float )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DUInt16 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Utf8 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Utf16 )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Struct )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics * This,
                           __RPC__out BYTE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Boolean(This,value) )
    ( (This)->lpVtbl->get_Bit2(This,value) )
    ( (This)->lpVtbl->get_Nibble(This,value) )
    ( (This)->lpVtbl->get_UInt8(This,value) )
    ( (This)->lpVtbl->get_UInt12(This,value) )
    ( (This)->lpVtbl->get_UInt16(This,value) )
    ( (This)->lpVtbl->get_UInt24(This,value) )
    ( (This)->lpVtbl->get_UInt32(This,value) )
    ( (This)->lpVtbl->get_UInt48(This,value) )
    ( (This)->lpVtbl->get_UInt64(This,value) )
    ( (This)->lpVtbl->get_UInt128(This,value) )
    ( (This)->lpVtbl->get_SInt8(This,value) )
    ( (This)->lpVtbl->get_SInt12(This,value) )
    ( (This)->lpVtbl->get_SInt16(This,value) )
    ( (This)->lpVtbl->get_SInt24(This,value) )
    ( (This)->lpVtbl->get_SInt32(This,value) )
    ( (This)->lpVtbl->get_SInt48(This,value) )
    ( (This)->lpVtbl->get_SInt64(This,value) )
    ( (This)->lpVtbl->get_SInt128(This,value) )
    ( (This)->lpVtbl->get_Float32(This,value) )
    ( (This)->lpVtbl->get_Float64(This,value) )
    ( (This)->lpVtbl->get_SFloat(This,value) )
    ( (This)->lpVtbl->get_Float(This,value) )
    ( (This)->lpVtbl->get_DUInt16(This,value) )
    ( (This)->lpVtbl->get_Utf8(This,value) )
    ( (This)->lpVtbl->get_Utf16(This,value) )
    ( (This)->lpVtbl->get_Struct(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattPresentationFormatTypesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattProtocolErrorStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InvalidHandle )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadNotPermitted )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WriteNotPermitted )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InvalidPdu )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InsufficientAuthentication )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequestNotSupported )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InvalidOffset )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InsufficientAuthorization )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrepareQueueFull )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AttributeNotFound )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AttributeNotLong )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InsufficientEncryptionKeySize )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InvalidAttributeValueLength )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UnlikelyError )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InsufficientEncryption )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UnsupportedGroupType )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InsufficientResources )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics * This,
                           __RPC__out BYTE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InvalidHandle(This,value) )
    ( (This)->lpVtbl->get_ReadNotPermitted(This,value) )
    ( (This)->lpVtbl->get_WriteNotPermitted(This,value) )
    ( (This)->lpVtbl->get_InvalidPdu(This,value) )
    ( (This)->lpVtbl->get_InsufficientAuthentication(This,value) )
    ( (This)->lpVtbl->get_RequestNotSupported(This,value) )
    ( (This)->lpVtbl->get_InvalidOffset(This,value) )
    ( (This)->lpVtbl->get_InsufficientAuthorization(This,value) )
    ( (This)->lpVtbl->get_PrepareQueueFull(This,value) )
    ( (This)->lpVtbl->get_AttributeNotFound(This,value) )
    ( (This)->lpVtbl->get_AttributeNotLong(This,value) )
    ( (This)->lpVtbl->get_InsufficientEncryptionKeySize(This,value) )
    ( (This)->lpVtbl->get_InvalidAttributeValueLength(This,value) )
    ( (This)->lpVtbl->get_UnlikelyError(This,value) )
    ( (This)->lpVtbl->get_InsufficientEncryption(This,value) )
    ( (This)->lpVtbl->get_UnsupportedGroupType(This,value) )
    ( (This)->lpVtbl->get_InsufficientResources(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattProtocolErrorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadClientCharacteristicConfigurationDescriptorResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattReadClientCharacteristicConfigurationDescriptorResult";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattCommunicationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ClientCharacteristicConfigurationDescriptor )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattClientCharacteristicConfigurationDescriptorValue * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResultVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_ClientCharacteristicConfigurationDescriptor(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadClientCharacteristicConfigurationDescriptorResult2[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattReadClientCharacteristicConfigurationDescriptorResult2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProtocolError )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult2 * This,
                           __RPC__deref_out_opt __FIReference_1_byte * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProtocolError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadClientCharacteristicConfigurationDescriptorResult2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattReadRequest";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequest * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequest * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequest * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattRequestState * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StateChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequest * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StateChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequest * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *RespondWithValue )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequest * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    HRESULT ( STDMETHODCALLTYPE *RespondWithProtocolError )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequest * This,
                  BYTE protocolError
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Offset(This,value) )
    ( (This)->lpVtbl->get_Length(This,value) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->add_StateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_StateChanged(This,token) )
    ( (This)->lpVtbl->RespondWithValue(This,value) )
    ( (This)->lpVtbl->RespondWithProtocolError(This,protocolError) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequestedEventArgs[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattReadRequestedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetRequestAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattReadRequest * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Session(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
    ( (This)->lpVtbl->GetRequestAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattReadResult";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattCommunicationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResultVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadResult2[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattReadResult2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProtocolError )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult2 * This,
                           __RPC__deref_out_opt __FIReference_1_byte * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProtocolError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReadResult2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReliableWriteTransaction[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattReliableWriteTransaction";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransactionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *WriteValue )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * characteristic,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    HRESULT ( STDMETHODCALLTYPE *CommitAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattCommunicationStatus * * asyncOp
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransactionVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransactionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->WriteValue(This,characteristic,value) )
    ( (This)->lpVtbl->CommitAsync(This,asyncOp) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReliableWriteTransaction2[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattReliableWriteTransaction2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CommitWithResultAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CommitWithResultAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattReliableWriteTransaction2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattRequestStateChangedEventArgs[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattRequestStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattRequestStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattRequestStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattRequestStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattRequestStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattRequestStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattRequestStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattRequestStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattRequestStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattRequestState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattRequestStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattRequestStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattRequestStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattRequestStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_Error(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattRequestStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattServiceProvider";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Service )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AdvertisementStatus )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProvider * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattServiceProviderAdvertisementStatus * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AdvertisementStatusChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProvider * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProvider_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderAdvertisementStatusChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AdvertisementStatusChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProvider * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *StartAdvertising )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProvider * This
        );
                    HRESULT ( STDMETHODCALLTYPE *StartAdvertisingWithParameters )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProvider * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters * parameters
        );
    HRESULT ( STDMETHODCALLTYPE *StopAdvertising )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProvider * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Service(This,value) )
    ( (This)->lpVtbl->get_AdvertisementStatus(This,value) )
    ( (This)->lpVtbl->add_AdvertisementStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_AdvertisementStatusChanged(This,token) )
    ( (This)->lpVtbl->StartAdvertising(This) )
    ( (This)->lpVtbl->StartAdvertisingWithParameters(This,parameters) )
    ( (This)->lpVtbl->StopAdvertising(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisementStatusChangedEventArgs[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattServiceProviderAdvertisementStatusChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisementStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisementStatusChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisementStatusChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisementStatusChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisementStatusChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisementStatusChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisementStatusChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisementStatusChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisementStatusChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattServiceProviderAdvertisementStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisementStatusChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisementStatusChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisementStatusChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Error(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisementStatusChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisingParameters[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattServiceProviderAdvertisingParameters";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_IsConnectable )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsConnectable )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsDiscoverable )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDiscoverable )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParametersVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParametersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_IsConnectable(This,value) )
    ( (This)->lpVtbl->get_IsConnectable(This,value) )
    ( (This)->lpVtbl->put_IsDiscoverable(This,value) )
    ( (This)->lpVtbl->get_IsDiscoverable(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisingParameters2[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattServiceProviderAdvertisingParameters2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ServiceData )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceData )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ServiceData(This,value) )
    ( (This)->lpVtbl->get_ServiceData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattServiceProviderResult";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceProvider )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProvider * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderResultVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Error(This,value) )
    ( (This)->lpVtbl->get_ServiceProvider(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderStatics[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattServiceProviderStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderStatics * This,
                  GUID serviceUuid,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattServiceProviderResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateAsync(This,serviceUuid,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattServiceUuidsStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Battery )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BloodPressure )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CyclingSpeedAndCadence )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GenericAccess )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GenericAttribute )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Glucose )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HealthThermometer )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeartRate )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RunningSpeedAndCadence )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics * This,
                           __RPC__out GUID * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Battery(This,value) )
    ( (This)->lpVtbl->get_BloodPressure(This,value) )
    ( (This)->lpVtbl->get_CyclingSpeedAndCadence(This,value) )
    ( (This)->lpVtbl->get_GenericAccess(This,value) )
    ( (This)->lpVtbl->get_GenericAttribute(This,value) )
    ( (This)->lpVtbl->get_Glucose(This,value) )
    ( (This)->lpVtbl->get_HealthThermometer(This,value) )
    ( (This)->lpVtbl->get_HeartRate(This,value) )
    ( (This)->lpVtbl->get_RunningSpeedAndCadence(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattServiceUuidsStatics2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AlertNotification )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentTime )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CyclingPower )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceInformation )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HumanInterfaceDevice )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ImmediateAlert )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LinkLoss )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocationAndNavigation )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NextDstChange )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhoneAlertStatus )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReferenceTimeUpdate )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScanParameters )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TxPower )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2 * This,
                           __RPC__out GUID * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AlertNotification(This,value) )
    ( (This)->lpVtbl->get_CurrentTime(This,value) )
    ( (This)->lpVtbl->get_CyclingPower(This,value) )
    ( (This)->lpVtbl->get_DeviceInformation(This,value) )
    ( (This)->lpVtbl->get_HumanInterfaceDevice(This,value) )
    ( (This)->lpVtbl->get_ImmediateAlert(This,value) )
    ( (This)->lpVtbl->get_LinkLoss(This,value) )
    ( (This)->lpVtbl->get_LocationAndNavigation(This,value) )
    ( (This)->lpVtbl->get_NextDstChange(This,value) )
    ( (This)->lpVtbl->get_PhoneAlertStatus(This,value) )
    ( (This)->lpVtbl->get_ReferenceTimeUpdate(This,value) )
    ( (This)->lpVtbl->get_ScanParameters(This,value) )
    ( (This)->lpVtbl->get_TxPower(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceUuidsStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattSession";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanMaintainConnection )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaintainConnection )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaintainConnection )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxPduSize )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SessionStatus )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattSessionStatus * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MaxPduSizeChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MaxPduSizeChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SessionStatusChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSessionStatusChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SessionStatusChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_CanMaintainConnection(This,value) )
    ( (This)->lpVtbl->put_MaintainConnection(This,value) )
    ( (This)->lpVtbl->get_MaintainConnection(This,value) )
    ( (This)->lpVtbl->get_MaxPduSize(This,value) )
    ( (This)->lpVtbl->get_SessionStatus(This,value) )
    ( (This)->lpVtbl->add_MaxPduSizeChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_MaxPduSizeChanged(This,token) )
    ( (This)->lpVtbl->add_SessionStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SessionStatusChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSessionStatics[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattSessionStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromDeviceIdAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSession * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromDeviceIdAsync(This,deviceId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSessionStatusChangedEventArgs[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattSessionStatusChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatusChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatusChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatusChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatusChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatusChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatusChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatusChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatusChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattSessionStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatusChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatusChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatusChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Error(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSessionStatusChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSubscribedClient[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattSubscribedClient";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxNotificationSize )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient * This,
                           __RPC__out UINT16 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MaxNotificationSizeChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattSubscribedClient_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MaxNotificationSizeChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClientVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClientVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Session(This,value) )
    ( (This)->lpVtbl->get_MaxNotificationSize(This,value) )
    ( (This)->lpVtbl->add_MaxNotificationSizeChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_MaxNotificationSizeChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSubscribedClient;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattValueChangedEventArgs[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattValueChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CharacteristicValue )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * timestamp
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CharacteristicValue(This,value) )
    ( (This)->lpVtbl->get_Timestamp(This,timestamp) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattWriteRequest";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Option )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattWriteOption * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattRequestState * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StateChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattRequestStateChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StateChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Respond )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest * This
        );
    HRESULT ( STDMETHODCALLTYPE *RespondWithProtocolError )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest * This,
                  BYTE protocolError
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->get_Offset(This,value) )
    ( (This)->lpVtbl->get_Option(This,value) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->add_StateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_StateChanged(This,token) )
    ( (This)->lpVtbl->Respond(This) )
    ( (This)->lpVtbl->RespondWithProtocolError(This,protocolError) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequestedEventArgs[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattWriteRequestedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattSession * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetRequestAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattWriteRequest * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Session(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
    ( (This)->lpVtbl->GetRequestAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.IGattWriteResult";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CGattCommunicationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtocolError )(
        __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteResult * This,
                           __RPC__deref_out_opt __FIReference_1_byte * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteResultVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_ProtocolError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattWriteResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattCharacteristic[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattCharacteristic";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattCharacteristicUuids[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattCharacteristicUuids";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattCharacteristicsResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattCharacteristicsResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattClientNotificationResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattClientNotificationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattDescriptor[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattDescriptor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattDescriptorUuids[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattDescriptorUuids";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattDescriptorsResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattDescriptorsResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattDeviceService[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattDeviceService";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattDeviceServicesResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattDeviceServicesResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattLocalCharacteristic[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalCharacteristic";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattLocalCharacteristicParameters[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalCharacteristicParameters";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattLocalCharacteristicResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalCharacteristicResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattLocalDescriptor[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalDescriptor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattLocalDescriptorParameters[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalDescriptorParameters";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattLocalDescriptorResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalDescriptorResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattLocalService[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalService";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattPresentationFormat[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattPresentationFormat";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattPresentationFormatTypes[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattPresentationFormatTypes";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattProtocolError[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattProtocolError";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattReadClientCharacteristicConfigurationDescriptorResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattReadClientCharacteristicConfigurationDescriptorResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattReadRequest[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattReadRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattReadRequestedEventArgs[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattReadRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattReadResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattReadResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattReliableWriteTransaction[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattReliableWriteTransaction";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattRequestStateChangedEventArgs[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattRequestStateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattServiceProvider[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattServiceProvider";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattServiceProviderAdvertisementStatusChangedEventArgs[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattServiceProviderAdvertisementStatusChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattServiceProviderAdvertisingParameters[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattServiceProviderAdvertisingParameters";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattServiceProviderResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattServiceProviderResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattServiceUuids[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattServiceUuids";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattSession[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattSessionStatusChangedEventArgs[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattSessionStatusChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattSubscribedClient[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattSubscribedClient";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattValueChangedEventArgs[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattValueChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattWriteRequest[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattWriteRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattWriteRequestedEventArgs[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattWriteRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_GenericAttributeProfile_GattWriteResult[] = L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattWriteResult";
       
       
#pragma clang diagnostic pop
