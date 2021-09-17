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
#include "Windows.Devices.Bluetooth.Advertisement.h"
#include "Windows.Devices.Bluetooth.GenericAttributeProfile.h"
#include "Windows.Devices.Bluetooth.Rfcomm.h"
#include "Windows.Networking.Sockets.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation;
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection;
typedef struct __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl;
interface __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnectionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> Lookup(This,key,value) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> HasKey(This,key,found) )
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) )
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs;
typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;
typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl;
interface __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;
typedef struct __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl;
interface __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs;
typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
                       __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementReceivedEventArgs * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl;
interface __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgsVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattValueChangedEventArgs;
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
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementPublisherStatus __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementPublisherStatus;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothServiceCapabilities __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothServiceCapabilities;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CBluetoothEventTriggeringMode __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CBluetoothEventTriggeringMode;
enum __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CBluetoothEventTriggeringMode
{
    BluetoothEventTriggeringMode_Serial = 0,
    BluetoothEventTriggeringMode_Batch = 1,
    BluetoothEventTriggeringMode_KeepLatest = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementPublisherTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.IBluetoothLEAdvertisementPublisherTriggerDetails";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CBluetoothLEAdvertisementPublisherStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetailsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Error(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementPublisherTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementWatcherTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.IBluetoothLEAdvertisementWatcherTriggerDetails";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Advertisements )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CAdvertisement__CBluetoothLEAdvertisementReceivedEventArgs * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SignalStrengthFilter )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetailsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Error(This,value) )
    ( (This)->lpVtbl->get_Advertisements(This,value) )
    ( (This)->lpVtbl->get_SignalStrengthFilter(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIBluetoothLEAdvertisementWatcherTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.IGattCharacteristicNotificationTriggerDetails";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Characteristic )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetailsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Characteristic(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails2[] = L"Windows.Devices.Bluetooth.Background.IGattCharacteristicNotificationTriggerDetails2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EventTriggeringMode )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CBluetoothEventTriggeringMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ValueChangedEvents )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattValueChangedEventArgs * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Error(This,value) )
    ( (This)->lpVtbl->get_EventTriggeringMode(This,value) )
    ( (This)->lpVtbl->get_ValueChangedEvents(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattCharacteristicNotificationTriggerDetails2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IGattServiceProviderConnection[] = L"Windows.Devices.Bluetooth.Background.IGattServiceProviderConnection";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TriggerId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Service )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TriggerId(This,value) )
    ( (This)->lpVtbl->get_Service(This,value) )
    ( (This)->lpVtbl->Start(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IGattServiceProviderConnectionStatics[] = L"Windows.Devices.Bluetooth.Background.IGattServiceProviderConnectionStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllServices )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CDevices__CBluetooth__CBackground__CGattServiceProviderConnection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllServices(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnectionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IGattServiceProviderTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.IGattServiceProviderTriggerDetails";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Connection )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderConnection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetailsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Connection(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIGattServiceProviderTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IRfcommConnectionTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.IRfcommConnectionTriggerDetails";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Socket )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Incoming )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteDevice )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetailsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Socket(This,value) )
    ( (This)->lpVtbl->get_Incoming(This,value) )
    ( (This)->lpVtbl->get_RemoteDevice(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommConnectionTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IRfcommInboundConnectionInformation[] = L"Windows.Devices.Bluetooth.Background.IRfcommInboundConnectionInformation";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SdpRecord )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SdpRecord )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalServiceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LocalServiceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceCapabilities )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothServiceCapabilities * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ServiceCapabilities )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothServiceCapabilities value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformationVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SdpRecord(This,value) )
    ( (This)->lpVtbl->put_SdpRecord(This,value) )
    ( (This)->lpVtbl->get_LocalServiceId(This,value) )
    ( (This)->lpVtbl->put_LocalServiceId(This,value) )
    ( (This)->lpVtbl->get_ServiceCapabilities(This,value) )
    ( (This)->lpVtbl->put_ServiceCapabilities(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_Background_IRfcommOutboundConnectionInformation[] = L"Windows.Devices.Bluetooth.Background.IRfcommOutboundConnectionInformation";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RemoteServiceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RemoteServiceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformationVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RemoteServiceId(This,value) )
    ( (This)->lpVtbl->put_RemoteServiceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_BluetoothLEAdvertisementPublisherTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.BluetoothLEAdvertisementPublisherTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_BluetoothLEAdvertisementWatcherTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.BluetoothLEAdvertisementWatcherTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_GattCharacteristicNotificationTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.GattCharacteristicNotificationTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_GattServiceProviderConnection[] = L"Windows.Devices.Bluetooth.Background.GattServiceProviderConnection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_GattServiceProviderTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.GattServiceProviderTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_RfcommConnectionTriggerDetails[] = L"Windows.Devices.Bluetooth.Background.RfcommConnectionTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_RfcommInboundConnectionInformation[] = L"Windows.Devices.Bluetooth.Background.RfcommInboundConnectionInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_Background_RfcommOutboundConnectionInformation[] = L"Windows.Devices.Bluetooth.Background.RfcommOutboundConnectionInformation";
       
       
#pragma clang diagnostic pop
