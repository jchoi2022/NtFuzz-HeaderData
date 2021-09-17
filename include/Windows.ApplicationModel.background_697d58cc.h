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
#include "Windows.ApplicationModel.Activation.h"
#include "Windows.ApplicationModel.Calls.h"
#include "Windows.ApplicationModel.Calls.Background.h"
#include "Windows.ApplicationModel.CommunicationBlocking.h"
#include "Windows.Devices.Bluetooth.h"
#include "Windows.Devices.Bluetooth.Advertisement.h"
#include "Windows.Devices.Bluetooth.Background.h"
#include "Windows.Devices.Bluetooth.GenericAttributeProfile.h"
#include "Windows.Devices.Geolocation.h"
#include "Windows.Devices.Sensors.h"
#include "Windows.Devices.SmartCards.h"
#include "Windows.Devices.Sms.h"
#include "Windows.Media.Capture.h"
#include "Windows.Networking.h"
#include "Windows.Networking.Sockets.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Provider.h"
#include "Windows.System.h"
#include "Windows.UI.Notifications.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCanceledEventHandler __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCanceledEventHandler;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventHandler __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventHandler;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventHandler __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventHandler;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTriggerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIAlarmApplicationManagerStatics __x_ABI_CWindows_CApplicationModel_CBackground_CIAlarmApplicationManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTriggerDetails __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTriggerDetails;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIAppointmentStoreNotificationTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIAppointmentStoreNotificationTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundCondition __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundCondition;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics2 __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics2;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder2 __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder2;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder3 __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder3;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder4 __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder4;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventArgs __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskDeferral __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskDeferral;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance2 __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance2;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance4 __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance4;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventArgs __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration2 __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration2;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration3 __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration3;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroupFactory __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroupFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics2 __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics2;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundWorkCostStatics __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundWorkCostStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementPublisherTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementPublisherTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTriggerDetails __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTriggerDetails;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageNotificationTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageNotificationTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageReceivedNotificationTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageReceivedNotificationTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CICommunicationBlockingAppSetAsActiveTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CICommunicationBlockingAppSetAsActiveTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIContactStoreNotificationTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIContactStoreNotificationTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTriggerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTriggerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTriggerStatics __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTriggerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTriggerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceServicingTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceServicingTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceUseTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceUseTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIEmailStoreNotificationTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIEmailStoreNotificationTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger2 __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger2;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory2 __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory2;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerResult __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerResult;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerStatics __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIGeovisitTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIGeovisitTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTriggerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTriggerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIMediaProcessingTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIMediaProcessingTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorHotspotAuthenticationTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorHotspotAuthenticationTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTriggerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTriggerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIPushNotificationTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CIPushNotificationTriggerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIRcsEndUserMessageAvailableTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIRcsEndUserMessageAvailableTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CISecondaryAuthenticationFactorAuthenticationTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CISecondaryAuthenticationFactorAuthenticationTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTriggerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTriggerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CISmsMessageReceivedTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CISmsMessageReceivedTriggerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CISocketActivityTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CISocketActivityTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryChangeTrackerTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryChangeTrackerTriggerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTriggerStatics __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTriggerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CISystemCondition __x_ABI_CWindows_CApplicationModel_CBackground_CISystemCondition;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CISystemConditionFactory __x_ABI_CWindows_CApplicationModel_CBackground_CISystemConditionFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTriggerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTrigger;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTriggerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationActionTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationActionTriggerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationHistoryChangedTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationHistoryChangedTriggerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIUserNotificationChangedTriggerFactory __x_ABI_CWindows_CApplicationModel_CBackground_CIUserNotificationChangedTriggerFactory;
typedef interface __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration;
EXTERN_C const IID IID___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration;
typedef struct __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This, __RPC__out GUID *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * *value);
    END_INTERFACE
} __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationVtbl;
interface __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration
{
    CONST_VTBL struct __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration;
typedef struct __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This, __RPC__out __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationVtbl;
interface __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration;
typedef struct __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationVtbl;
interface __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration;
EXTERN_C const IID IID___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration;
typedef struct __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This, __RPC__out GUID *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * *value);
    END_INTERFACE
} __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistrationVtbl;
interface __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration
{
    CONST_VTBL struct __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistrationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration;
typedef struct __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This, __RPC__out __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistrationVtbl;
interface __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistrationVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration;
typedef struct __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistrationVtbl;
interface __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistrationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroupVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroupVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroupVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroupVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration;
EXTERN_C const IID IID___FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration;
typedef struct __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This,
                   __RPC__in GUID key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This, __RPC__in GUID key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * This, __RPC__deref_out_opt __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration **secondPartition);
    END_INTERFACE
} __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationVtbl;
interface __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration
{
    CONST_VTBL struct __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationVtbl *lpVtbl;
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
typedef interface __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration;
EXTERN_C const IID IID___FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration;
typedef struct __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This,
                   __RPC__in GUID key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This, __RPC__in GUID key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * This, __RPC__deref_out_opt __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration **secondPartition);
    END_INTERFACE
} __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistrationVtbl;
interface __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration
{
    CONST_VTBL struct __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistrationVtbl *lpVtbl;
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
typedef interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup __FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup;
typedef struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroupVtbl;
interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroupVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CApplicationModel_CBackground_CAlarmAccessStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CBackground_CAlarmAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatusVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatusVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CApplicationModel_CBackground_CApplicationTriggerResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CBackground_CApplicationTriggerResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResultVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundAccessStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatusVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTriggerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTriggerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTrigger * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTriggerVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTriggerVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CApplicationModel_CBackground_CDeviceTriggerResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CBackground_CDeviceTriggerResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResultVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CApplicationModel_CBackground_CMediaProcessingTriggerResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CBackground_CMediaProcessingTriggerResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResultVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CDevices_CSensors_CActivityType;
typedef interface __FIIterator_1_Windows__CDevices__CSensors__CActivityType __FIIterator_1_Windows__CDevices__CSensors__CActivityType;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSensors__CActivityType;
typedef struct __FIIterator_1_Windows__CDevices__CSensors__CActivityTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__out enum __x_ABI_CWindows_CDevices_CSensors_CActivityType *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSensors__CActivityType * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CSensors_CActivityType *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSensors__CActivityTypeVtbl;
interface __FIIterator_1_Windows__CDevices__CSensors__CActivityType
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSensors__CActivityTypeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CSensors__CActivityType __FIIterable_1_Windows__CDevices__CSensors__CActivityType;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSensors__CActivityType;
typedef struct __FIIterable_1_Windows__CDevices__CSensors__CActivityTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivityType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivityType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivityType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivityType * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSensors__CActivityType **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSensors__CActivityTypeVtbl;
interface __FIIterable_1_Windows__CDevices__CSensors__CActivityType
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSensors__CActivityTypeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CSensors__CActivityType __FIVectorView_1_Windows__CDevices__CSensors__CActivityType;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSensors__CActivityType;
typedef struct __FIVectorView_1_Windows__CDevices__CSensors__CActivityTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CDevices_CSensors_CActivityType *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This,
                       enum __x_ABI_CWindows_CDevices_CSensors_CActivityType item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CSensors_CActivityType *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSensors__CActivityTypeVtbl;
interface __FIVectorView_1_Windows__CDevices__CSensors__CActivityType
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSensors__CActivityTypeVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CDevices__CSensors__CActivityType __FIVector_1_Windows__CDevices__CSensors__CActivityType;
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CSensors__CActivityType;
typedef struct __FIVector_1_Windows__CDevices__CSensors__CActivityTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CSensors_CActivityType *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This,
                   unsigned int index,
                            __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CSensors_CActivityType *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSensors__CActivityType **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CSensors_CActivityType item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CSensors_CActivityType item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CSensors_CActivityType item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This, __RPC__in enum __x_ABI_CWindows_CDevices_CSensors_CActivityType item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CSensors_CActivityType *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CSensors__CActivityType * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CDevices_CSensors_CActivityType *value);
    END_INTERFACE
} __FIVector_1_Windows__CDevices__CSensors__CActivityTypeVtbl;
interface __FIVector_1_Windows__CDevices__CSensors__CActivityType
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CSensors__CActivityTypeVtbl *lpVtbl;
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
typedef interface __FIKeyValuePair_2_HSTRING_IInspectable __FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out __FIKeyValuePair_2_HSTRING_IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_IInspectable __FIMapView_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMapView_2_HSTRING_IInspectable;
typedef struct __FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt IInspectable * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_IInspectableVtbl;
interface __FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING_IInspectable __FIMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMap_2_HSTRING_IInspectable;
typedef struct __FIMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   HSTRING key,
                            __RPC__deref_out_opt IInspectable * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   HSTRING key,
                   __RPC__in_opt IInspectable * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    END_INTERFACE
} __FIMap_2_HSTRING_IInspectableVtbl;
interface __FIMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMap_2_HSTRING_IInspectableVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) )
    ( (This)->lpVtbl -> Remove(This,key) )
    ( (This)->lpVtbl -> Clear(This) )
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;
EXTERN_C const IID IID___FIMapChangedEventArgs_1_HSTRING;
typedef struct __FIMapChangedEventArgs_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_CollectionChange )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIMapChangedEventArgs_1_HSTRINGVtbl;
interface __FIMapChangedEventArgs_1_HSTRING
{
    CONST_VTBL struct __FIMapChangedEventArgs_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_CollectionChange(This,value) )
    ( (This)->lpVtbl -> get_Key(This,value) )
typedef interface __FMapChangedEventHandler_2_HSTRING_IInspectable __FMapChangedEventHandler_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FMapChangedEventHandler_2_HSTRING_IInspectable;
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;
typedef struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
                   __RPC__in_opt __FIObservableMap_2_HSTRING_IInspectable *sender,
                   __RPC__in_opt __FIMapChangedEventArgs_1_HSTRING *e);
    END_INTERFACE
} __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl;
interface __FMapChangedEventHandler_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIObservableMap_2_HSTRING_IInspectable;
typedef struct __FIObservableMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *add_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   __RPC__in_opt __FMapChangedEventHandler_2_HSTRING_IInspectable *handler,
                            __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   EventRegistrationToken token);
    END_INTERFACE
} __FIObservableMap_2_HSTRING_IInspectableVtbl;
interface __FIObservableMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIObservableMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> add_MapChanged(This,handler,token) )
    ( (This)->lpVtbl -> remove_MapChanged(This,token) )
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
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CStorage_CIStorageLibrary __x_ABI_CWindows_CStorage_CIStorageLibrary;
typedef interface __FIIterator_1_Windows__CStorage__CStorageLibrary __FIIterator_1_Windows__CStorage__CStorageLibrary;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStorageLibrary;
typedef struct __FIIterator_1_Windows__CStorage__CStorageLibraryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageLibrary * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageLibrary * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageLibrary * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStorageLibraryVtbl;
interface __FIIterator_1_Windows__CStorage__CStorageLibrary
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStorageLibraryVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CStorageLibrary __FIIterable_1_Windows__CStorage__CStorageLibrary;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStorageLibrary;
typedef struct __FIIterable_1_Windows__CStorage__CStorageLibraryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CStorageLibrary * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageLibrary * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageLibrary * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageLibrary * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageLibrary * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageLibrary * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageLibrary * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStorageLibrary **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStorageLibraryVtbl;
interface __FIIterable_1_Windows__CStorage__CStorageLibrary
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStorageLibraryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneTriggerType __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneTriggerType;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CBluetoothEventTriggeringMode __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CBluetoothEventTriggeringMode;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters;
typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CVisitMonitoringScope __x_ABI_CWindows_CDevices_CGeolocation_CVisitMonitoringScope;
typedef enum __x_ABI_CWindows_CDevices_CSensors_CActivityType __x_ABI_CWindows_CDevices_CSensors_CActivityType;
typedef interface __x_ABI_CWindows_CDevices_CSensors_CISensorDataThreshold __x_ABI_CWindows_CDevices_CSensors_CISensorDataThreshold;
typedef enum __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardTriggerType __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardTriggerType;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsFilterRules __x_ABI_CWindows_CDevices_CSms_CISmsFilterRules;
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;
typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel;
typedef enum __x_ABI_CWindows_CStorage_CProvider_CCachedFileTarget __x_ABI_CWindows_CStorage_CProvider_CCachedFileTarget;
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest;
typedef interface __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CUI_CNotifications_CNotificationKinds __x_ABI_CWindows_CUI_CNotifications_CNotificationKinds;
typedef enum __x_ABI_CWindows_CApplicationModel_CBackground_CAlarmAccessStatus __x_ABI_CWindows_CApplicationModel_CBackground_CAlarmAccessStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CBackground_CApplicationTriggerResult __x_ABI_CWindows_CApplicationModel_CBackground_CApplicationTriggerResult;
typedef enum __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundAccessRequestKind __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundAccessRequestKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundAccessStatus __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundAccessStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundTaskCancellationReason __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundTaskCancellationReason;
typedef enum __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundTaskThrottleCounter __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundTaskThrottleCounter;
typedef enum __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundWorkCostValue __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundWorkCostValue;
typedef enum __x_ABI_CWindows_CApplicationModel_CBackground_CCustomSystemEventTriggerRecurrence __x_ABI_CWindows_CApplicationModel_CBackground_CCustomSystemEventTriggerRecurrence;
typedef enum __x_ABI_CWindows_CApplicationModel_CBackground_CDeviceTriggerResult __x_ABI_CWindows_CApplicationModel_CBackground_CDeviceTriggerResult;
typedef enum __x_ABI_CWindows_CApplicationModel_CBackground_CLocationTriggerType __x_ABI_CWindows_CApplicationModel_CBackground_CLocationTriggerType;
typedef enum __x_ABI_CWindows_CApplicationModel_CBackground_CMediaProcessingTriggerResult __x_ABI_CWindows_CApplicationModel_CBackground_CMediaProcessingTriggerResult;
typedef enum __x_ABI_CWindows_CApplicationModel_CBackground_CSystemConditionType __x_ABI_CWindows_CApplicationModel_CBackground_CSystemConditionType;
typedef enum __x_ABI_CWindows_CApplicationModel_CBackground_CSystemTriggerType __x_ABI_CWindows_CApplicationModel_CBackground_CSystemTriggerType;
enum __x_ABI_CWindows_CApplicationModel_CBackground_CAlarmAccessStatus
{
    AlarmAccessStatus_Unspecified = 0,
    AlarmAccessStatus_AllowedWithWakeupCapability = 1,
    AlarmAccessStatus_AllowedWithoutWakeupCapability = 2,
    AlarmAccessStatus_Denied = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CBackground_CApplicationTriggerResult
{
    ApplicationTriggerResult_Allowed = 0,
    ApplicationTriggerResult_CurrentlyRunning = 1,
    ApplicationTriggerResult_DisabledByPolicy = 2,
    ApplicationTriggerResult_UnknownError = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundAccessRequestKind
{
    BackgroundAccessRequestKind_AlwaysAllowed = 0,
    BackgroundAccessRequestKind_AllowedSubjectToSystemPolicy = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundAccessStatus
{
    BackgroundAccessStatus_Unspecified = 0,
    BackgroundAccessStatus_AllowedWithAlwaysOnRealTimeConnectivity
    DEPRECATEDENUMERATOR("Use AlwaysAllowed or AllowedSubjectToSystemPolicy instead of AllowedWithAlwaysOnRealTimeConnectivity. For more info, see MSDN.")
     = 1,
    BackgroundAccessStatus_AllowedMayUseActiveRealTimeConnectivity
    DEPRECATEDENUMERATOR("Use AlwaysAllowed or AllowedSubjectToSystemPolicy instead of AllowedMayUseActiveRealTimeConnectivity. For more info, see MSDN.")
     = 2,
    BackgroundAccessStatus_Denied
    DEPRECATEDENUMERATOR("Use DeniedByUser or DeniedBySystemPolicy instead of Denied. For more info, see MSDN.")
     = 3,
    BackgroundAccessStatus_AlwaysAllowed = 4,
    BackgroundAccessStatus_AllowedSubjectToSystemPolicy = 5,
    BackgroundAccessStatus_DeniedBySystemPolicy = 6,
    BackgroundAccessStatus_DeniedByUser = 7,
};
enum __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundTaskCancellationReason
{
    BackgroundTaskCancellationReason_Abort = 0,
    BackgroundTaskCancellationReason_Terminating = 1,
    BackgroundTaskCancellationReason_LoggingOff = 2,
    BackgroundTaskCancellationReason_ServicingUpdate = 3,
    BackgroundTaskCancellationReason_IdleTask = 4,
    BackgroundTaskCancellationReason_Uninstall = 5,
    BackgroundTaskCancellationReason_ConditionLoss = 6,
    BackgroundTaskCancellationReason_SystemPolicy = 7,
    BackgroundTaskCancellationReason_QuietHoursEntered
    DEPRECATEDENUMERATOR("QuietHoursEntered is deprecated after Windows 8.1")
     = 8,
    BackgroundTaskCancellationReason_ExecutionTimeExceeded = 9,
    BackgroundTaskCancellationReason_ResourceRevocation = 10,
    BackgroundTaskCancellationReason_EnergySaver = 11,
};
enum __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundTaskThrottleCounter
{
    BackgroundTaskThrottleCounter_All = 0,
    BackgroundTaskThrottleCounter_Cpu = 1,
    BackgroundTaskThrottleCounter_Network = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundWorkCostValue
{
    BackgroundWorkCostValue_Low = 0,
    BackgroundWorkCostValue_Medium = 1,
    BackgroundWorkCostValue_High = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CBackground_CCustomSystemEventTriggerRecurrence
{
    CustomSystemEventTriggerRecurrence_Once = 0,
    CustomSystemEventTriggerRecurrence_Always = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CBackground_CDeviceTriggerResult
{
    DeviceTriggerResult_Allowed = 0,
    DeviceTriggerResult_DeniedByUser = 1,
    DeviceTriggerResult_DeniedBySystem = 2,
    DeviceTriggerResult_LowBattery = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CBackground_CLocationTriggerType
{
    LocationTriggerType_Geofence = 0,
};
enum __x_ABI_CWindows_CApplicationModel_CBackground_CMediaProcessingTriggerResult
{
    MediaProcessingTriggerResult_Allowed = 0,
    MediaProcessingTriggerResult_CurrentlyRunning = 1,
    MediaProcessingTriggerResult_DisabledByPolicy = 2,
    MediaProcessingTriggerResult_UnknownError = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CBackground_CSystemConditionType
{
    SystemConditionType_Invalid = 0,
    SystemConditionType_UserPresent = 1,
    SystemConditionType_UserNotPresent = 2,
    SystemConditionType_InternetAvailable = 3,
    SystemConditionType_InternetNotAvailable = 4,
    SystemConditionType_SessionConnected = 5,
    SystemConditionType_SessionDisconnected = 6,
    SystemConditionType_FreeNetworkAvailable = 7,
    SystemConditionType_BackgroundWorkCostNotHigh = 8,
};
enum __x_ABI_CWindows_CApplicationModel_CBackground_CSystemTriggerType
{
    SystemTriggerType_Invalid = 0,
    SystemTriggerType_SmsReceived = 1,
    SystemTriggerType_UserPresent = 2,
    SystemTriggerType_UserAway = 3,
    SystemTriggerType_NetworkStateChange = 4,
    SystemTriggerType_ControlChannelReset = 5,
    SystemTriggerType_InternetAvailable = 6,
    SystemTriggerType_SessionConnected = 7,
    SystemTriggerType_ServicingComplete = 8,
    SystemTriggerType_LockScreenApplicationAdded = 9,
    SystemTriggerType_LockScreenApplicationRemoved = 10,
    SystemTriggerType_TimeZoneChange = 11,
    SystemTriggerType_OnlineIdConnectedStateChange = 12,
    SystemTriggerType_BackgroundWorkCostChange = 13,
    SystemTriggerType_PowerStateChange = 14,
    SystemTriggerType_DefaultSignInAccountChange = 15,
};
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCanceledEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCanceledEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCanceledEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCanceledEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCanceledEventHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * sender,
                  __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundTaskCancellationReason reason
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCanceledEventHandlerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCanceledEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCanceledEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,reason) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCanceledEventHandler;
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * sender,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventArgs * args
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventHandlerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,args) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventHandler;
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * sender,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventArgs * args
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventHandlerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,args) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IActivitySensorTrigger[] = L"Windows.ApplicationModel.Background.IActivitySensorTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SubscribedActivities )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTrigger * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CDevices__CSensors__CActivityType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportInterval )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTrigger * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedActivities )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTrigger * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CSensors__CActivityType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinimumReportInterval )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTrigger * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SubscribedActivities(This,value) )
    ( (This)->lpVtbl->get_ReportInterval(This,value) )
    ( (This)->lpVtbl->get_SupportedActivities(This,value) )
    ( (This)->lpVtbl->get_MinimumReportInterval(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IActivitySensorTriggerFactory[] = L"Windows.ApplicationModel.Background.IActivitySensorTriggerFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTriggerFactory * This,
                  UINT32 reportIntervalInMilliseconds,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTrigger * * activityTrigger
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,reportIntervalInMilliseconds,activityTrigger) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIActivitySensorTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IAlarmApplicationManagerStatics[] = L"Windows.ApplicationModel.Background.IAlarmApplicationManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIAlarmApplicationManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAlarmApplicationManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAlarmApplicationManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAlarmApplicationManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAlarmApplicationManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAlarmApplicationManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAlarmApplicationManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIAlarmApplicationManagerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CAlarmAccessStatus * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetAccessStatus )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIAlarmApplicationManagerStatics * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CBackground_CAlarmAccessStatus * status
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIAlarmApplicationManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIAlarmApplicationManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIAlarmApplicationManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestAccessAsync(This,operation) )
    ( (This)->lpVtbl->GetAccessStatus(This,status) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIAlarmApplicationManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IAppBroadcastTrigger[] = L"Windows.ApplicationModel.Background.IAppBroadcastTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ProviderInfo )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTrigger * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderInfo )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTrigger * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ProviderInfo(This,value) )
    ( (This)->lpVtbl->get_ProviderInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IAppBroadcastTriggerFactory[] = L"Windows.ApplicationModel.Background.IAppBroadcastTriggerFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateAppBroadcastTrigger )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerFactory * This,
                  __RPC__in HSTRING providerKey,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTrigger * * broadcastTrigger
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateAppBroadcastTrigger(This,providerKey,broadcastTrigger) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo[] = L"Windows.ApplicationModel.Background.IAppBroadcastTriggerProviderInfo";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_DisplayNameResource )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayNameResource )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LogoResource )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LogoResource )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VideoKeyFrameInterval )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoKeyFrameInterval )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxVideoBitrate )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxVideoBitrate )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxVideoWidth )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxVideoWidth )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxVideoHeight )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxVideoHeight )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfoVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_DisplayNameResource(This,value) )
    ( (This)->lpVtbl->get_DisplayNameResource(This,value) )
    ( (This)->lpVtbl->put_LogoResource(This,value) )
    ( (This)->lpVtbl->get_LogoResource(This,value) )
    ( (This)->lpVtbl->put_VideoKeyFrameInterval(This,value) )
    ( (This)->lpVtbl->get_VideoKeyFrameInterval(This,value) )
    ( (This)->lpVtbl->put_MaxVideoBitrate(This,value) )
    ( (This)->lpVtbl->get_MaxVideoBitrate(This,value) )
    ( (This)->lpVtbl->put_MaxVideoWidth(This,value) )
    ( (This)->lpVtbl->get_MaxVideoWidth(This,value) )
    ( (This)->lpVtbl->put_MaxVideoHeight(This,value) )
    ( (This)->lpVtbl->get_MaxVideoHeight(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIAppBroadcastTriggerProviderInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IApplicationTrigger[] = L"Windows.ApplicationModel.Background.IApplicationTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *RequestAsync )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTrigger * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestAsyncWithArguments )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTrigger * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * arguments,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CApplicationTriggerResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestAsync(This,result) )
    ( (This)->lpVtbl->RequestAsyncWithArguments(This,arguments,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IApplicationTriggerDetails[] = L"Windows.ApplicationModel.Background.IApplicationTriggerDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTriggerDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Arguments(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIApplicationTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IAppointmentStoreNotificationTrigger[] = L"Windows.ApplicationModel.Background.IAppointmentStoreNotificationTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIAppointmentStoreNotificationTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppointmentStoreNotificationTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppointmentStoreNotificationTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppointmentStoreNotificationTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppointmentStoreNotificationTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppointmentStoreNotificationTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIAppointmentStoreNotificationTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIAppointmentStoreNotificationTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIAppointmentStoreNotificationTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIAppointmentStoreNotificationTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIAppointmentStoreNotificationTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundCondition[] = L"Windows.ApplicationModel.Background.IBackgroundCondition";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundConditionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundCondition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundCondition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundCondition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundCondition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundCondition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundCondition * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundConditionVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundCondition
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundConditionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundCondition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics[] = L"Windows.ApplicationModel.Background.IBackgroundExecutionManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestAccessForApplicationAsync )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics * This,
                  __RPC__in HSTRING applicationId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CBackgroundAccessStatus * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RemoveAccess )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics * This
        );
                    HRESULT ( STDMETHODCALLTYPE *RemoveAccessForApplication )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics * This,
                  __RPC__in HSTRING applicationId
        );
                    HRESULT ( STDMETHODCALLTYPE *GetAccessStatus )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundAccessStatus * status
        );
                    HRESULT ( STDMETHODCALLTYPE *GetAccessStatusForApplication )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics * This,
                  __RPC__in HSTRING applicationId,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundAccessStatus * status
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestAccessAsync(This,operation) )
    ( (This)->lpVtbl->RequestAccessForApplicationAsync(This,applicationId,operation) )
    ( (This)->lpVtbl->RemoveAccess(This) )
    ( (This)->lpVtbl->RemoveAccessForApplication(This,applicationId) )
    ( (This)->lpVtbl->GetAccessStatus(This,status) )
    ( (This)->lpVtbl->GetAccessStatusForApplication(This,applicationId,status) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics2[] = L"Windows.ApplicationModel.Background.IBackgroundExecutionManagerStatics2";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *RequestAccessKindAsync )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics2 * This,
                  __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundAccessRequestKind requestedAccess,
                  __RPC__in HSTRING reason,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestAccessKindAsync(This,requestedAccess,reason,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundExecutionManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundTask[] = L"Windows.ApplicationModel.Background.IBackgroundTask";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Run )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * taskInstance
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Run(This,taskInstance) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundTaskBuilder[] = L"Windows.ApplicationModel.Background.IBackgroundTaskBuilder";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_TaskEntryPoint )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TaskEntryPoint )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetTrigger )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * trigger
        );
    HRESULT ( STDMETHODCALLTYPE *AddCondition )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundCondition * condition
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *Register )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * * task
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilderVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_TaskEntryPoint(This,value) )
    ( (This)->lpVtbl->get_TaskEntryPoint(This,value) )
    ( (This)->lpVtbl->SetTrigger(This,trigger) )
    ( (This)->lpVtbl->AddCondition(This,condition) )
    ( (This)->lpVtbl->put_Name(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->Register(This,task) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundTaskBuilder2[] = L"Windows.ApplicationModel.Background.IBackgroundTaskBuilder2";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_CancelOnConditionLoss )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CancelOnConditionLoss )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_CancelOnConditionLoss(This,value) )
    ( (This)->lpVtbl->get_CancelOnConditionLoss(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundTaskBuilder3[] = L"Windows.ApplicationModel.Background.IBackgroundTaskBuilder3";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_IsNetworkRequested )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsNetworkRequested )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder3 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_IsNetworkRequested(This,value) )
    ( (This)->lpVtbl->get_IsNetworkRequested(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundTaskBuilder4[] = L"Windows.ApplicationModel.Background.IBackgroundTaskBuilder4";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TaskGroup )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TaskGroup )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder4Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder4
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TaskGroup(This,value) )
    ( (This)->lpVtbl->put_TaskGroup(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskBuilder4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundTaskCompletedEventArgs[] = L"Windows.ApplicationModel.Background.IBackgroundTaskCompletedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InstanceId )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventArgs * This,
                           __RPC__out GUID * value
        );
    HRESULT ( STDMETHODCALLTYPE *CheckResult )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventArgs * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InstanceId(This,value) )
    ( (This)->lpVtbl->CheckResult(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundTaskDeferral[] = L"Windows.ApplicationModel.Background.IBackgroundTaskDeferral";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskDeferralVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundTaskInstance[] = L"Windows.ApplicationModel.Background.IBackgroundTaskInstance";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InstanceId )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Task )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * * task
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Progress )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Progress )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TriggerDetails )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * This,
                           __RPC__deref_out_opt IInspectable * * triggerDetails
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Canceled )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCanceledEventHandler * cancelHandler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Canceled )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * This,
                  EventRegistrationToken cookie
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SuspendedCount )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskDeferral * * deferral
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstanceVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstanceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InstanceId(This,value) )
    ( (This)->lpVtbl->get_Task(This,task) )
    ( (This)->lpVtbl->get_Progress(This,value) )
    ( (This)->lpVtbl->put_Progress(This,value) )
    ( (This)->lpVtbl->get_TriggerDetails(This,triggerDetails) )
    ( (This)->lpVtbl->add_Canceled(This,cancelHandler,cookie) )
    ( (This)->lpVtbl->remove_Canceled(This,cookie) )
    ( (This)->lpVtbl->get_SuspendedCount(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundTaskInstance2[] = L"Windows.ApplicationModel.Background.IBackgroundTaskInstance2";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetThrottleCount )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance2 * This,
                  __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundTaskThrottleCounter counter,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetThrottleCount(This,counter,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundTaskInstance4[] = L"Windows.ApplicationModel.Background.IBackgroundTaskInstance4";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance4Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance4
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundTaskProgressEventArgs[] = L"Windows.ApplicationModel.Background.IBackgroundTaskProgressEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InstanceId )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventArgs * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Progress )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventArgs * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InstanceId(This,value) )
    ( (This)->lpVtbl->get_Progress(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundTaskRegistration[] = L"Windows.ApplicationModel.Background.IBackgroundTaskRegistration";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TaskId )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Progress )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskProgressEventHandler * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Progress )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Completed )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskCompletedEventHandler * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Completed )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * This,
                  EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *Unregister )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration * This,
                  boolean cancelTask
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TaskId(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->add_Progress(This,handler,cookie) )
    ( (This)->lpVtbl->remove_Progress(This,cookie) )
    ( (This)->lpVtbl->add_Completed(This,handler,cookie) )
    ( (This)->lpVtbl->remove_Completed(This,cookie) )
    ( (This)->lpVtbl->Unregister(This,cancelTask) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundTaskRegistration2[] = L"Windows.ApplicationModel.Background.IBackgroundTaskRegistration2";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Trigger )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Trigger(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundTaskRegistration3[] = L"Windows.ApplicationModel.Background.IBackgroundTaskRegistration3";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TaskGroup )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TaskGroup(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistration3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup[] = L"Windows.ApplicationModel.Background.IBackgroundTaskRegistrationGroup";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BackgroundActivated )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BackgroundActivated )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllTasks )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * This,
                           __RPC__deref_out_opt __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistration * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroupVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->add_BackgroundActivated(This,handler,token) )
    ( (This)->lpVtbl->remove_BackgroundActivated(This,token) )
    ( (This)->lpVtbl->get_AllTasks(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroupFactory[] = L"Windows.ApplicationModel.Background.IBackgroundTaskRegistrationGroupFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroupFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroupFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroupFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroupFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroupFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroupFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroupFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroupFactory * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * * group
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithName )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroupFactory * This,
                  __RPC__in HSTRING id,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * * group
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroupFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroupFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroupFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,id,group) )
    ( (This)->lpVtbl->CreateWithName(This,id,name,group) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroupFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics[] = L"Windows.ApplicationModel.Background.IBackgroundTaskRegistrationStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllTasks )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics * This,
                           __RPC__deref_out_opt __FIMapView_2_GUID_Windows__CApplicationModel__CBackground__CIBackgroundTaskRegistration * * tasks
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllTasks(This,tasks) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics2[] = L"Windows.ApplicationModel.Background.IBackgroundTaskRegistrationStatics2";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllTaskGroups )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics2 * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CBackground__CBackgroundTaskRegistrationGroup * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetTaskGroup )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics2 * This,
                  __RPC__in HSTRING groupId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationGroup * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllTaskGroups(This,value) )
    ( (This)->lpVtbl->GetTaskGroup(This,groupId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskRegistrationStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundTrigger[] = L"Windows.ApplicationModel.Background.IBackgroundTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBackgroundWorkCostStatics[] = L"Windows.ApplicationModel.Background.IBackgroundWorkCostStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundWorkCostStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundWorkCostStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundWorkCostStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundWorkCostStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundWorkCostStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundWorkCostStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundWorkCostStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CurrentBackgroundWorkCost )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundWorkCostStatics * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CBackground_CBackgroundWorkCostValue * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundWorkCostStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundWorkCostStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundWorkCostStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CurrentBackgroundWorkCost(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundWorkCostStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger[] = L"Windows.ApplicationModel.Background.IBluetoothLEAdvertisementPublisherTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementPublisherTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementPublisherTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementPublisherTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementPublisherTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementPublisherTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementPublisherTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementPublisherTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Advertisement )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementPublisherTrigger * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisement * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementPublisherTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementPublisherTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementPublisherTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Advertisement(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementPublisherTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger[] = L"Windows.ApplicationModel.Background.IBluetoothLEAdvertisementWatcherTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MinSamplingInterval )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTrigger * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxSamplingInterval )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTrigger * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinOutOfRangeTimeout )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTrigger * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxOutOfRangeTimeout )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTrigger * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SignalStrengthFilter )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTrigger * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SignalStrengthFilter )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTrigger * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AdvertisementFilter )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTrigger * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AdvertisementFilter )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTrigger * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CAdvertisement_CIBluetoothLEAdvertisementFilter * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MinSamplingInterval(This,value) )
    ( (This)->lpVtbl->get_MaxSamplingInterval(This,value) )
    ( (This)->lpVtbl->get_MinOutOfRangeTimeout(This,value) )
    ( (This)->lpVtbl->get_MaxOutOfRangeTimeout(This,value) )
    ( (This)->lpVtbl->get_SignalStrengthFilter(This,value) )
    ( (This)->lpVtbl->put_SignalStrengthFilter(This,value) )
    ( (This)->lpVtbl->get_AdvertisementFilter(This,value) )
    ( (This)->lpVtbl->put_AdvertisementFilter(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIBluetoothLEAdvertisementWatcherTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ICachedFileUpdaterTrigger[] = L"Windows.ApplicationModel.Background.ICachedFileUpdaterTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ICachedFileUpdaterTriggerDetails[] = L"Windows.ApplicationModel.Background.ICachedFileUpdaterTriggerDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UpdateTarget )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTriggerDetails * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CProvider_CCachedFileTarget * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpdateRequest )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanRequestUserInput )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTriggerDetails * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTriggerDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UpdateTarget(This,value) )
    ( (This)->lpVtbl->get_UpdateRequest(This,value) )
    ( (This)->lpVtbl->get_CanRequestUserInput(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CICachedFileUpdaterTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IChatMessageNotificationTrigger[] = L"Windows.ApplicationModel.Background.IChatMessageNotificationTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageNotificationTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageNotificationTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageNotificationTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageNotificationTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageNotificationTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageNotificationTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageNotificationTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageNotificationTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageNotificationTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageNotificationTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageNotificationTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IChatMessageReceivedNotificationTrigger[] = L"Windows.ApplicationModel.Background.IChatMessageReceivedNotificationTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageReceivedNotificationTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageReceivedNotificationTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageReceivedNotificationTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageReceivedNotificationTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageReceivedNotificationTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageReceivedNotificationTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageReceivedNotificationTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageReceivedNotificationTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageReceivedNotificationTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageReceivedNotificationTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIChatMessageReceivedNotificationTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ICommunicationBlockingAppSetAsActiveTrigger[] = L"Windows.ApplicationModel.Background.ICommunicationBlockingAppSetAsActiveTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CICommunicationBlockingAppSetAsActiveTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICommunicationBlockingAppSetAsActiveTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICommunicationBlockingAppSetAsActiveTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICommunicationBlockingAppSetAsActiveTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICommunicationBlockingAppSetAsActiveTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICommunicationBlockingAppSetAsActiveTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICommunicationBlockingAppSetAsActiveTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CICommunicationBlockingAppSetAsActiveTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CICommunicationBlockingAppSetAsActiveTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CICommunicationBlockingAppSetAsActiveTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CICommunicationBlockingAppSetAsActiveTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IContactStoreNotificationTrigger[] = L"Windows.ApplicationModel.Background.IContactStoreNotificationTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIContactStoreNotificationTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIContactStoreNotificationTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIContactStoreNotificationTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIContactStoreNotificationTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIContactStoreNotificationTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIContactStoreNotificationTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIContactStoreNotificationTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIContactStoreNotificationTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIContactStoreNotificationTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIContactStoreNotificationTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIContactStoreNotificationTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IContentPrefetchTrigger[] = L"Windows.ApplicationModel.Background.IContentPrefetchTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_WaitInterval )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTrigger * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * waitInterval
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_WaitInterval(This,waitInterval) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IContentPrefetchTriggerFactory[] = L"Windows.ApplicationModel.Background.IContentPrefetchTriggerFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTriggerFactory * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan waitInterval,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTrigger * * trigger
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,waitInterval,trigger) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIContentPrefetchTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ICustomSystemEventTrigger[] = L"Windows.ApplicationModel.Background.ICustomSystemEventTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TriggerId )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTrigger * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Recurrence )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTrigger * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CBackground_CCustomSystemEventTriggerRecurrence * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TriggerId(This,value) )
    ( (This)->lpVtbl->get_Recurrence(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ICustomSystemEventTriggerFactory[] = L"Windows.ApplicationModel.Background.ICustomSystemEventTriggerFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTriggerFactory * This,
                  __RPC__in HSTRING triggerId,
                  __x_ABI_CWindows_CApplicationModel_CBackground_CCustomSystemEventTriggerRecurrence recurrence,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTrigger * * trigger
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,triggerId,recurrence,trigger) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CICustomSystemEventTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IDeviceConnectionChangeTrigger[] = L"Windows.ApplicationModel.Background.IDeviceConnectionChangeTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTrigger * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanMaintainConnection )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTrigger * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaintainConnection )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTrigger * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaintainConnection )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTrigger * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_CanMaintainConnection(This,value) )
    ( (This)->lpVtbl->get_MaintainConnection(This,value) )
    ( (This)->lpVtbl->put_MaintainConnection(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IDeviceConnectionChangeTriggerStatics[] = L"Windows.ApplicationModel.Background.IDeviceConnectionChangeTriggerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTriggerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTriggerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTriggerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTriggerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTriggerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTriggerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTriggerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTriggerStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceConnectionChangeTrigger * * deviceChangeTrigger
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTriggerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTriggerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTriggerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,deviceChangeTrigger) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceConnectionChangeTriggerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTrigger[] = L"Windows.ApplicationModel.Background.IDeviceManufacturerNotificationTrigger";
typedef struct
DEPRECATED("DeviceManufacturerNotificationTrigger is deprecated and might not work on all platforms")
__x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("DeviceManufacturerNotificationTrigger is deprecated and might not work on all platforms")
                               HRESULT ( STDMETHODCALLTYPE *get_TriggerQualifier )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTrigger * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("DeviceManufacturerNotificationTrigger is deprecated and might not work on all platforms")
                               HRESULT ( STDMETHODCALLTYPE *get_OneShot )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTrigger * This,
                           __RPC__out boolean * oneShot
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("DeviceManufacturerNotificationTrigger is deprecated and might not work on all platforms")
    ( (This)->lpVtbl->get_TriggerQualifier(This,value) )
DEPRECATED("DeviceManufacturerNotificationTrigger is deprecated and might not work on all platforms")
    ( (This)->lpVtbl->get_OneShot(This,oneShot) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTriggerFactory[] = L"Windows.ApplicationModel.Background.IDeviceManufacturerNotificationTriggerFactory";
typedef struct
DEPRECATED("DeviceManufacturerNotificationTrigger is deprecated and might not work on all platforms")
__x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("DeviceManufacturerNotificationTrigger is deprecated and might not work on all platforms")
                      HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTriggerFactory * This,
                  __RPC__in HSTRING triggerQualifier,
                  boolean oneShot,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTrigger * * trigger
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("DeviceManufacturerNotificationTrigger is deprecated and might not work on all platforms")
    ( (This)->lpVtbl->Create(This,triggerQualifier,oneShot,trigger) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceManufacturerNotificationTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IDeviceServicingTrigger[] = L"Windows.ApplicationModel.Background.IDeviceServicingTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceServicingTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceServicingTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceServicingTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceServicingTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceServicingTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceServicingTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceServicingTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
                                  HRESULT ( STDMETHODCALLTYPE *RequestAsyncSimple )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceServicingTrigger * This,
                  __RPC__in HSTRING deviceId,
                  __x_ABI_CWindows_CFoundation_CTimeSpan expectedDuration,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult * * result
        );
                                      HRESULT ( STDMETHODCALLTYPE *RequestAsyncWithArguments )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceServicingTrigger * This,
                  __RPC__in HSTRING deviceId,
                  __x_ABI_CWindows_CFoundation_CTimeSpan expectedDuration,
                  __RPC__in HSTRING arguments,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceServicingTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceServicingTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceServicingTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestAsyncSimple(This,deviceId,expectedDuration,result) )
    ( (This)->lpVtbl->RequestAsyncWithArguments(This,deviceId,expectedDuration,arguments,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceServicingTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IDeviceUseTrigger[] = L"Windows.ApplicationModel.Background.IDeviceUseTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceUseTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceUseTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceUseTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceUseTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceUseTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceUseTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceUseTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
                                  HRESULT ( STDMETHODCALLTYPE *RequestAsyncSimple )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceUseTrigger * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult * * result
        );
                                      HRESULT ( STDMETHODCALLTYPE *RequestAsyncWithArguments )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceUseTrigger * This,
                  __RPC__in HSTRING deviceId,
                  __RPC__in HSTRING arguments,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CDeviceTriggerResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceUseTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceUseTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceUseTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestAsyncSimple(This,deviceId,result) )
    ( (This)->lpVtbl->RequestAsyncWithArguments(This,deviceId,arguments,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceUseTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IDeviceWatcherTrigger[] = L"Windows.ApplicationModel.Background.IDeviceWatcherTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IEmailStoreNotificationTrigger[] = L"Windows.ApplicationModel.Background.IEmailStoreNotificationTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIEmailStoreNotificationTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIEmailStoreNotificationTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIEmailStoreNotificationTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIEmailStoreNotificationTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIEmailStoreNotificationTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIEmailStoreNotificationTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIEmailStoreNotificationTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIEmailStoreNotificationTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIEmailStoreNotificationTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIEmailStoreNotificationTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIEmailStoreNotificationTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTrigger[] = L"Windows.ApplicationModel.Background.IGattCharacteristicNotificationTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Characteristic )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Characteristic(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTrigger2[] = L"Windows.ApplicationModel.Background.IGattCharacteristicNotificationTrigger2";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EventTriggeringMode )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger2 * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CBluetoothEventTriggeringMode * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EventTriggeringMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTriggerFactory[] = L"Windows.ApplicationModel.Background.IGattCharacteristicNotificationTriggerFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * characteristic,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger * * gattCharacteristicNotificationTrigger
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,characteristic,gattCharacteristicNotificationTrigger) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTriggerFactory2[] = L"Windows.ApplicationModel.Background.IGattCharacteristicNotificationTriggerFactory2";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateWithEventTriggeringMode )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattCharacteristic * characteristic,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CBluetoothEventTriggeringMode eventTriggeringMode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTrigger * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithEventTriggeringMode(This,characteristic,eventTriggeringMode,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIGattCharacteristicNotificationTriggerFactory2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IGattServiceProviderTrigger[] = L"Windows.ApplicationModel.Background.IGattServiceProviderTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TriggerId )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTrigger * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Service )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTrigger * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattLocalService * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AdvertisingParameters )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTrigger * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AdvertisingParameters )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTrigger * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattServiceProviderAdvertisingParameters * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TriggerId(This,value) )
    ( (This)->lpVtbl->get_Service(This,value) )
    ( (This)->lpVtbl->put_AdvertisingParameters(This,value) )
    ( (This)->lpVtbl->get_AdvertisingParameters(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IGattServiceProviderTriggerResult[] = L"Windows.ApplicationModel.Background.IGattServiceProviderTriggerResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Trigger )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTrigger * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Trigger(This,value) )
    ( (This)->lpVtbl->get_Error(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IGattServiceProviderTriggerStatics[] = L"Windows.ApplicationModel.Background.IGattServiceProviderTriggerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateAsync )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerStatics * This,
                  __RPC__in HSTRING triggerId,
                  GUID serviceUuid,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CGattServiceProviderTriggerResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateAsync(This,triggerId,serviceUuid,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIGattServiceProviderTriggerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IGeovisitTrigger[] = L"Windows.ApplicationModel.Background.IGeovisitTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIGeovisitTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGeovisitTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGeovisitTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGeovisitTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGeovisitTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGeovisitTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIGeovisitTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MonitoringScope )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIGeovisitTrigger * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CVisitMonitoringScope * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MonitoringScope )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIGeovisitTrigger * This,
                  __x_ABI_CWindows_CDevices_CGeolocation_CVisitMonitoringScope value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIGeovisitTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIGeovisitTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIGeovisitTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MonitoringScope(This,value) )
    ( (This)->lpVtbl->put_MonitoringScope(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIGeovisitTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ILocationTrigger[] = L"Windows.ApplicationModel.Background.ILocationTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TriggerType )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTrigger * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CBackground_CLocationTriggerType * triggerType
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TriggerType(This,triggerType) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CILocationTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ILocationTriggerFactory[] = L"Windows.ApplicationModel.Background.ILocationTriggerFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTriggerFactory * This,
                  __x_ABI_CWindows_CApplicationModel_CBackground_CLocationTriggerType triggerType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTrigger * * locationTrigger
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CILocationTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,triggerType,locationTrigger) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CILocationTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IMaintenanceTrigger[] = L"Windows.ApplicationModel.Background.IMaintenanceTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FreshnessTime )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTrigger * This,
                           __RPC__out UINT32 * freshnessTime
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OneShot )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTrigger * This,
                           __RPC__out boolean * oneShot
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FreshnessTime(This,freshnessTime) )
    ( (This)->lpVtbl->get_OneShot(This,oneShot) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IMaintenanceTriggerFactory[] = L"Windows.ApplicationModel.Background.IMaintenanceTriggerFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTriggerFactory * This,
                  UINT32 freshnessTime,
                  boolean oneShot,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTrigger * * trigger
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,freshnessTime,oneShot,trigger) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIMaintenanceTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IMediaProcessingTrigger[] = L"Windows.ApplicationModel.Background.IMediaProcessingTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIMediaProcessingTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIMediaProcessingTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIMediaProcessingTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIMediaProcessingTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIMediaProcessingTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIMediaProcessingTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIMediaProcessingTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *RequestAsync )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIMediaProcessingTrigger * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestAsyncWithArguments )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIMediaProcessingTrigger * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * arguments,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CBackground__CMediaProcessingTriggerResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIMediaProcessingTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIMediaProcessingTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIMediaProcessingTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestAsync(This,result) )
    ( (This)->lpVtbl->RequestAsyncWithArguments(This,arguments,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIMediaProcessingTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_INetworkOperatorHotspotAuthenticationTrigger[] = L"Windows.ApplicationModel.Background.INetworkOperatorHotspotAuthenticationTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorHotspotAuthenticationTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorHotspotAuthenticationTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorHotspotAuthenticationTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorHotspotAuthenticationTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorHotspotAuthenticationTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorHotspotAuthenticationTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorHotspotAuthenticationTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorHotspotAuthenticationTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorHotspotAuthenticationTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorHotspotAuthenticationTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorHotspotAuthenticationTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_INetworkOperatorNotificationTrigger[] = L"Windows.ApplicationModel.Background.INetworkOperatorNotificationTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NetworkAccountId )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTrigger * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NetworkAccountId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_INetworkOperatorNotificationTriggerFactory[] = L"Windows.ApplicationModel.Background.INetworkOperatorNotificationTriggerFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTriggerFactory * This,
                  __RPC__in HSTRING networkAccountId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTrigger * * trigger
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,networkAccountId,trigger) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CINetworkOperatorNotificationTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IPhoneTrigger[] = L"Windows.ApplicationModel.Background.IPhoneTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OneShot )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTrigger * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TriggerType )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTrigger * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneTriggerType * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OneShot(This,value) )
    ( (This)->lpVtbl->get_TriggerType(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IPhoneTriggerFactory[] = L"Windows.ApplicationModel.Background.IPhoneTriggerFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTriggerFactory * This,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneTriggerType type,
                  boolean oneShot,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTrigger * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,type,oneShot,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIPhoneTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IPushNotificationTriggerFactory[] = L"Windows.ApplicationModel.Background.IPushNotificationTriggerFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIPushNotificationTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIPushNotificationTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIPushNotificationTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIPushNotificationTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIPushNotificationTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIPushNotificationTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIPushNotificationTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIPushNotificationTriggerFactory * This,
                  __RPC__in HSTRING applicationId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIPushNotificationTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIPushNotificationTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIPushNotificationTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,applicationId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIPushNotificationTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IRcsEndUserMessageAvailableTrigger[] = L"Windows.ApplicationModel.Background.IRcsEndUserMessageAvailableTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIRcsEndUserMessageAvailableTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIRcsEndUserMessageAvailableTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIRcsEndUserMessageAvailableTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIRcsEndUserMessageAvailableTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIRcsEndUserMessageAvailableTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIRcsEndUserMessageAvailableTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIRcsEndUserMessageAvailableTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIRcsEndUserMessageAvailableTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIRcsEndUserMessageAvailableTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIRcsEndUserMessageAvailableTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIRcsEndUserMessageAvailableTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IRfcommConnectionTrigger[] = L"Windows.ApplicationModel.Background.IRfcommConnectionTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InboundConnection )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTrigger * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommInboundConnectionInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutboundConnection )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTrigger * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CBackground_CIRfcommOutboundConnectionInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowMultipleConnections )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTrigger * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowMultipleConnections )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTrigger * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtectionLevel )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTrigger * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProtectionLevel )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTrigger * This,
                  __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteHostName )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTrigger * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RemoteHostName )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTrigger * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InboundConnection(This,value) )
    ( (This)->lpVtbl->get_OutboundConnection(This,value) )
    ( (This)->lpVtbl->get_AllowMultipleConnections(This,value) )
    ( (This)->lpVtbl->put_AllowMultipleConnections(This,value) )
    ( (This)->lpVtbl->get_ProtectionLevel(This,value) )
    ( (This)->lpVtbl->put_ProtectionLevel(This,value) )
    ( (This)->lpVtbl->get_RemoteHostName(This,value) )
    ( (This)->lpVtbl->put_RemoteHostName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIRfcommConnectionTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ISecondaryAuthenticationFactorAuthenticationTrigger[] = L"Windows.ApplicationModel.Background.ISecondaryAuthenticationFactorAuthenticationTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CISecondaryAuthenticationFactorAuthenticationTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISecondaryAuthenticationFactorAuthenticationTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISecondaryAuthenticationFactorAuthenticationTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISecondaryAuthenticationFactorAuthenticationTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISecondaryAuthenticationFactorAuthenticationTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISecondaryAuthenticationFactorAuthenticationTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISecondaryAuthenticationFactorAuthenticationTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CISecondaryAuthenticationFactorAuthenticationTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CISecondaryAuthenticationFactorAuthenticationTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CISecondaryAuthenticationFactorAuthenticationTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CISecondaryAuthenticationFactorAuthenticationTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ISensorDataThresholdTrigger[] = L"Windows.ApplicationModel.Background.ISensorDataThresholdTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ISensorDataThresholdTriggerFactory[] = L"Windows.ApplicationModel.Background.ISensorDataThresholdTriggerFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTriggerFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CISensorDataThreshold * threshold,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTrigger * * trigger
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,threshold,trigger) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CISensorDataThresholdTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ISmartCardTrigger[] = L"Windows.ApplicationModel.Background.ISmartCardTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TriggerType )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTrigger * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardTriggerType * triggerType
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TriggerType(This,triggerType) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ISmartCardTriggerFactory[] = L"Windows.ApplicationModel.Background.ISmartCardTriggerFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTriggerFactory * This,
                  __x_ABI_CWindows_CDevices_CSmartCards_CSmartCardTriggerType triggerType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTrigger * * trigger
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,triggerType,trigger) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CISmartCardTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ISmsMessageReceivedTriggerFactory[] = L"Windows.ApplicationModel.Background.ISmsMessageReceivedTriggerFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CISmsMessageReceivedTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISmsMessageReceivedTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISmsMessageReceivedTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISmsMessageReceivedTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISmsMessageReceivedTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISmsMessageReceivedTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISmsMessageReceivedTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CISmsMessageReceivedTriggerFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CSms_CISmsFilterRules * filterRules,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CISmsMessageReceivedTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CISmsMessageReceivedTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CISmsMessageReceivedTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,filterRules,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CISmsMessageReceivedTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ISocketActivityTrigger[] = L"Windows.ApplicationModel.Background.ISocketActivityTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CISocketActivityTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISocketActivityTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISocketActivityTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISocketActivityTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISocketActivityTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISocketActivityTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISocketActivityTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsWakeFromLowPowerSupported )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CISocketActivityTrigger * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CISocketActivityTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CISocketActivityTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CISocketActivityTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsWakeFromLowPowerSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CISocketActivityTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IStorageLibraryChangeTrackerTriggerFactory[] = L"Windows.ApplicationModel.Background.IStorageLibraryChangeTrackerTriggerFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryChangeTrackerTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryChangeTrackerTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryChangeTrackerTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryChangeTrackerTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryChangeTrackerTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryChangeTrackerTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryChangeTrackerTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryChangeTrackerTriggerFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker * tracker,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryChangeTrackerTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryChangeTrackerTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryChangeTrackerTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,tracker,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryChangeTrackerTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IStorageLibraryContentChangedTrigger[] = L"Windows.ApplicationModel.Background.IStorageLibraryContentChangedTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IStorageLibraryContentChangedTriggerStatics[] = L"Windows.ApplicationModel.Background.IStorageLibraryContentChangedTriggerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTriggerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTriggerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTriggerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTriggerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTriggerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTriggerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTriggerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTriggerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageLibrary * storageLibrary,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTrigger * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromLibraries )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTriggerStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CStorage__CStorageLibrary * storageLibraries,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTrigger * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTriggerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTriggerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTriggerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,storageLibrary,result) )
    ( (This)->lpVtbl->CreateFromLibraries(This,storageLibraries,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIStorageLibraryContentChangedTriggerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ISystemCondition[] = L"Windows.ApplicationModel.Background.ISystemCondition";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CISystemConditionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemCondition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemCondition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemCondition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemCondition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemCondition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemCondition * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ConditionType )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CISystemCondition * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CBackground_CSystemConditionType * conditionType
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CISystemConditionVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CISystemCondition
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CISystemConditionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ConditionType(This,conditionType) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CISystemCondition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ISystemConditionFactory[] = L"Windows.ApplicationModel.Background.ISystemConditionFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CISystemConditionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemConditionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemConditionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemConditionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemConditionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemConditionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemConditionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CISystemConditionFactory * This,
                  __x_ABI_CWindows_CApplicationModel_CBackground_CSystemConditionType conditionType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CISystemCondition * * condition
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CISystemConditionFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CISystemConditionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CISystemConditionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,conditionType,condition) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CISystemConditionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ISystemTrigger[] = L"Windows.ApplicationModel.Background.ISystemTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OneShot )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTrigger * This,
                           __RPC__out boolean * oneShot
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TriggerType )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTrigger * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CBackground_CSystemTriggerType * triggerType
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OneShot(This,oneShot) )
    ( (This)->lpVtbl->get_TriggerType(This,triggerType) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CISystemTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ISystemTriggerFactory[] = L"Windows.ApplicationModel.Background.ISystemTriggerFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTriggerFactory * This,
                  __x_ABI_CWindows_CApplicationModel_CBackground_CSystemTriggerType triggerType,
                  boolean oneShot,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTrigger * * trigger
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CISystemTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,triggerType,oneShot,trigger) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CISystemTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ITimeTrigger[] = L"Windows.ApplicationModel.Background.ITimeTrigger";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FreshnessTime )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTrigger * This,
                           __RPC__out UINT32 * freshnessTime
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OneShot )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTrigger * This,
                           __RPC__out boolean * oneShot
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTriggerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FreshnessTime(This,freshnessTime) )
    ( (This)->lpVtbl->get_OneShot(This,oneShot) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CITimeTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_ITimeTriggerFactory[] = L"Windows.ApplicationModel.Background.ITimeTriggerFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTriggerFactory * This,
                  UINT32 freshnessTime,
                  boolean oneShot,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTrigger * * trigger
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CITimeTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,freshnessTime,oneShot,trigger) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CITimeTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IToastNotificationActionTriggerFactory[] = L"Windows.ApplicationModel.Background.IToastNotificationActionTriggerFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationActionTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationActionTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationActionTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationActionTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationActionTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationActionTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationActionTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationActionTriggerFactory * This,
                  __RPC__in HSTRING applicationId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationActionTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationActionTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationActionTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,applicationId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationActionTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IToastNotificationHistoryChangedTriggerFactory[] = L"Windows.ApplicationModel.Background.IToastNotificationHistoryChangedTriggerFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationHistoryChangedTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationHistoryChangedTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationHistoryChangedTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationHistoryChangedTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationHistoryChangedTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationHistoryChangedTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationHistoryChangedTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationHistoryChangedTriggerFactory * This,
                  __RPC__in HSTRING applicationId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationHistoryChangedTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationHistoryChangedTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationHistoryChangedTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,applicationId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIToastNotificationHistoryChangedTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Background_IUserNotificationChangedTriggerFactory[] = L"Windows.ApplicationModel.Background.IUserNotificationChangedTriggerFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CBackground_CIUserNotificationChangedTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIUserNotificationChangedTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIUserNotificationChangedTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIUserNotificationChangedTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIUserNotificationChangedTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIUserNotificationChangedTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CBackground_CIUserNotificationChangedTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CBackground_CIUserNotificationChangedTriggerFactory * This,
                  __x_ABI_CWindows_CUI_CNotifications_CNotificationKinds notificationKinds,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CBackground_CIUserNotificationChangedTriggerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CBackground_CIUserNotificationChangedTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CBackground_CIUserNotificationChangedTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,notificationKinds,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CBackground_CIUserNotificationChangedTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_ActivitySensorTrigger[] = L"Windows.ApplicationModel.Background.ActivitySensorTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_AlarmApplicationManager[] = L"Windows.ApplicationModel.Background.AlarmApplicationManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_AppBroadcastTrigger[] = L"Windows.ApplicationModel.Background.AppBroadcastTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_AppBroadcastTriggerProviderInfo[] = L"Windows.ApplicationModel.Background.AppBroadcastTriggerProviderInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_ApplicationTrigger[] = L"Windows.ApplicationModel.Background.ApplicationTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_ApplicationTriggerDetails[] = L"Windows.ApplicationModel.Background.ApplicationTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_AppointmentStoreNotificationTrigger[] = L"Windows.ApplicationModel.Background.AppointmentStoreNotificationTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_BackgroundExecutionManager[] = L"Windows.ApplicationModel.Background.BackgroundExecutionManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_BackgroundTaskBuilder[] = L"Windows.ApplicationModel.Background.BackgroundTaskBuilder";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_BackgroundTaskCompletedEventArgs[] = L"Windows.ApplicationModel.Background.BackgroundTaskCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_BackgroundTaskDeferral[] = L"Windows.ApplicationModel.Background.BackgroundTaskDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_BackgroundTaskProgressEventArgs[] = L"Windows.ApplicationModel.Background.BackgroundTaskProgressEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_BackgroundTaskRegistration[] = L"Windows.ApplicationModel.Background.BackgroundTaskRegistration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_BackgroundTaskRegistrationGroup[] = L"Windows.ApplicationModel.Background.BackgroundTaskRegistrationGroup";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_BackgroundWorkCost[] = L"Windows.ApplicationModel.Background.BackgroundWorkCost";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_BluetoothLEAdvertisementPublisherTrigger[] = L"Windows.ApplicationModel.Background.BluetoothLEAdvertisementPublisherTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_BluetoothLEAdvertisementWatcherTrigger[] = L"Windows.ApplicationModel.Background.BluetoothLEAdvertisementWatcherTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_CachedFileUpdaterTrigger[] = L"Windows.ApplicationModel.Background.CachedFileUpdaterTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_CachedFileUpdaterTriggerDetails[] = L"Windows.ApplicationModel.Background.CachedFileUpdaterTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_ChatMessageNotificationTrigger[] = L"Windows.ApplicationModel.Background.ChatMessageNotificationTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_ChatMessageReceivedNotificationTrigger[] = L"Windows.ApplicationModel.Background.ChatMessageReceivedNotificationTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_CommunicationBlockingAppSetAsActiveTrigger[] = L"Windows.ApplicationModel.Background.CommunicationBlockingAppSetAsActiveTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_ContactStoreNotificationTrigger[] = L"Windows.ApplicationModel.Background.ContactStoreNotificationTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_ContentPrefetchTrigger[] = L"Windows.ApplicationModel.Background.ContentPrefetchTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_ConversationalAgentTrigger[] = L"Windows.ApplicationModel.Background.ConversationalAgentTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_CustomSystemEventTrigger[] = L"Windows.ApplicationModel.Background.CustomSystemEventTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_DeviceConnectionChangeTrigger[] = L"Windows.ApplicationModel.Background.DeviceConnectionChangeTrigger";
DEPRECATED("DeviceManufacturerNotificationTrigger is deprecated and might not work on all platforms")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_DeviceManufacturerNotificationTrigger[] = L"Windows.ApplicationModel.Background.DeviceManufacturerNotificationTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_DeviceServicingTrigger[] = L"Windows.ApplicationModel.Background.DeviceServicingTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_DeviceUseTrigger[] = L"Windows.ApplicationModel.Background.DeviceUseTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_DeviceWatcherTrigger[] = L"Windows.ApplicationModel.Background.DeviceWatcherTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_EmailStoreNotificationTrigger[] = L"Windows.ApplicationModel.Background.EmailStoreNotificationTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_GattCharacteristicNotificationTrigger[] = L"Windows.ApplicationModel.Background.GattCharacteristicNotificationTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_GattServiceProviderTrigger[] = L"Windows.ApplicationModel.Background.GattServiceProviderTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_GattServiceProviderTriggerResult[] = L"Windows.ApplicationModel.Background.GattServiceProviderTriggerResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_GeovisitTrigger[] = L"Windows.ApplicationModel.Background.GeovisitTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_LocationTrigger[] = L"Windows.ApplicationModel.Background.LocationTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_MaintenanceTrigger[] = L"Windows.ApplicationModel.Background.MaintenanceTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_MediaProcessingTrigger[] = L"Windows.ApplicationModel.Background.MediaProcessingTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_MobileBroadbandDeviceServiceNotificationTrigger[] = L"Windows.ApplicationModel.Background.MobileBroadbandDeviceServiceNotificationTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_MobileBroadbandPcoDataChangeTrigger[] = L"Windows.ApplicationModel.Background.MobileBroadbandPcoDataChangeTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_MobileBroadbandPinLockStateChangeTrigger[] = L"Windows.ApplicationModel.Background.MobileBroadbandPinLockStateChangeTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_MobileBroadbandRadioStateChangeTrigger[] = L"Windows.ApplicationModel.Background.MobileBroadbandRadioStateChangeTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_MobileBroadbandRegistrationStateChangeTrigger[] = L"Windows.ApplicationModel.Background.MobileBroadbandRegistrationStateChangeTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_NetworkOperatorDataUsageTrigger[] = L"Windows.ApplicationModel.Background.NetworkOperatorDataUsageTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_NetworkOperatorHotspotAuthenticationTrigger[] = L"Windows.ApplicationModel.Background.NetworkOperatorHotspotAuthenticationTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_NetworkOperatorNotificationTrigger[] = L"Windows.ApplicationModel.Background.NetworkOperatorNotificationTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_PaymentAppCanMakePaymentTrigger[] = L"Windows.ApplicationModel.Background.PaymentAppCanMakePaymentTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_PhoneTrigger[] = L"Windows.ApplicationModel.Background.PhoneTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_PushNotificationTrigger[] = L"Windows.ApplicationModel.Background.PushNotificationTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_RcsEndUserMessageAvailableTrigger[] = L"Windows.ApplicationModel.Background.RcsEndUserMessageAvailableTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_RfcommConnectionTrigger[] = L"Windows.ApplicationModel.Background.RfcommConnectionTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_SecondaryAuthenticationFactorAuthenticationTrigger[] = L"Windows.ApplicationModel.Background.SecondaryAuthenticationFactorAuthenticationTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_SensorDataThresholdTrigger[] = L"Windows.ApplicationModel.Background.SensorDataThresholdTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_SmartCardTrigger[] = L"Windows.ApplicationModel.Background.SmartCardTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_SmsMessageReceivedTrigger[] = L"Windows.ApplicationModel.Background.SmsMessageReceivedTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_SocketActivityTrigger[] = L"Windows.ApplicationModel.Background.SocketActivityTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_StorageLibraryChangeTrackerTrigger[] = L"Windows.ApplicationModel.Background.StorageLibraryChangeTrackerTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_StorageLibraryContentChangedTrigger[] = L"Windows.ApplicationModel.Background.StorageLibraryContentChangedTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_SystemCondition[] = L"Windows.ApplicationModel.Background.SystemCondition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_SystemTrigger[] = L"Windows.ApplicationModel.Background.SystemTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_TetheringEntitlementCheckTrigger[] = L"Windows.ApplicationModel.Background.TetheringEntitlementCheckTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_TimeTrigger[] = L"Windows.ApplicationModel.Background.TimeTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_ToastNotificationActionTrigger[] = L"Windows.ApplicationModel.Background.ToastNotificationActionTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_ToastNotificationHistoryChangedTrigger[] = L"Windows.ApplicationModel.Background.ToastNotificationHistoryChangedTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Background_UserNotificationChangedTrigger[] = L"Windows.ApplicationModel.Background.UserNotificationChangedTrigger";
       
       
#pragma clang diagnostic pop
