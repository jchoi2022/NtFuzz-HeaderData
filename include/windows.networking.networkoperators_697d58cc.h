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
#include "Windows.Data.Xml.Dom.h"
#include "Windows.Devices.Sms.h"
#include "Windows.Networking.h"
#include "Windows.Networking.Connectivity.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim2 __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim2;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimAddedEventArgs __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimAddedEventArgs;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEvent __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEvent;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResult __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResult;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDownloadProfileMetadataResult __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDownloadProfileMetadataResult;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimManagerStatics __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimManagerStatics;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimOperationResult __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimOperationResult;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimPolicy __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimPolicy;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfilePolicy __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfilePolicy;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimRemovedEventArgs __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimRemovedEventArgs;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimServiceInfo __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimServiceInfo;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimUpdatedEventArgs __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimUpdatedEventArgs;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIFdnAccessManagerStatics __x_ABI_CWindows_CNetworking_CNetworkOperators_CIFdnAccessManagerStatics;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext2 __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext2;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContextStatics __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContextStatics;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationEventDetails __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationEventDetails;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotCredentialsAuthenticationResult __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotCredentialsAuthenticationResult;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownCSimFilePathsStatics __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownCSimFilePathsStatics;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownRuimFilePathsStatics __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownRuimFilePathsStatics;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownSimFilePathsStatics __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownSimFilePathsStatics;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownUSimFilePathsStatics __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownUSimFilePathsStatics;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount2 __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount2;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount3 __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount3;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountEventArgs __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountEventArgs;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountStatics __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountStatics;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountUpdatedEventArgs __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountUpdatedEventArgs;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSar __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSar;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSarFactory __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSarFactory;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation2 __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation2;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation3 __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation3;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceService __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceService;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandResult __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandResult;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandSession __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandSession;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataReceivedEventArgs __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataReceivedEventArgs;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataSession __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataSession;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformation __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformation;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceTriggerDetails __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceTriggerDetails;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem2 __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem2;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem3 __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem3;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration2 __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration2;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolation __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolation;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolationFactory __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolationFactory;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemStatics __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemStatics;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork2 __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork2;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork3 __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork3;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChange __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChange;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChangeTriggerDetails __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChangeTriggerDetails;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPco __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPco;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPcoDataChangeTriggerDetails __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPcoDataChangeTriggerDetails;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChange __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChange;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChangeTriggerDetails __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChangeTriggerDetails;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinManager __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinManager;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinOperationResult __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinOperationResult;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChange __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChange;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChangeTriggerDetails __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChangeTriggerDetails;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandTransmissionStateChangedEventArgs __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandTransmissionStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUicc __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUicc;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccApp __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccApp;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppReadRecordResult __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppReadRecordResult;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResult __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResult;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppsResult __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppsResult;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorDataUsageTriggerDetails __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorDataUsageTriggerDetails;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorNotificationEventDetails __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorNotificationEventDetails;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringAccessPointConfiguration __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringAccessPointConfiguration;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClient __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClient;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClientManager __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClientManager;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringEntitlementCheck __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringEntitlementCheck;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics2 __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics2;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics3 __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics3;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringOperationResult __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringOperationResult;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionFromXmlDocumentResults __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionFromXmlDocumentResults;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionedProfile __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionedProfile;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgent __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgent;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgentStaticMethods __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgentStaticMethods;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CITetheringEntitlementCheckTriggerDetails __x_ABI_CWindows_CNetworking_CNetworkOperators_CITetheringEntitlementCheckTriggerDetails;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessage __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessage;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessageFactory __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessageFactory;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdReply __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdReply;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSession __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSession;
typedef interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSessionStatics __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSessionStatics;
typedef interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent;
typedef struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEventVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEvent * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEvent * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEventVtbl;
interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEventVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent;
typedef struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEventVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEventVtbl;
interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEventVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimProfile __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimProfile;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimProfile;
typedef struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimProfileVtbl;
interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimProfile
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimProfileVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimProfile __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimProfile;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimProfile;
typedef struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CNetworkOperators__CESimProfile **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimProfileVtbl;
interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimProfile
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CESimProfileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar;
typedef struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSar * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSar * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSarVtbl;
interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSarVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar;
typedef struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSarVtbl;
interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSarVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma;
typedef struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdmaVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdmaVtbl;
interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdmaVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma;
typedef struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdmaVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdmaVtbl;
interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdmaVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm;
typedef struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsmVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsmVtbl;
interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsmVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm;
typedef struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsmVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsmVtbl;
interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsmVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte;
typedef struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLteVtbl;
interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLteVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte;
typedef struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLteVtbl;
interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLteVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma;
typedef struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdmaVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdmaVtbl;
interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdmaVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma;
typedef struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdmaVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdmaVtbl;
interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdmaVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts;
typedef struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmtsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmtsVtbl;
interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmtsVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts;
typedef struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmtsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmtsVtbl;
interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmtsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation;
typedef struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformationVtbl;
interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation;
typedef struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformationVtbl;
interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange;
typedef struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChange * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChange * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChangeVtbl;
interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChangeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange;
typedef struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChangeVtbl;
interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange;
typedef struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChange * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChange * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChangeVtbl;
interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChangeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange;
typedef struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChangeVtbl;
interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinType;
typedef interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType;
typedef struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This, __RPC__out enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinType *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinType *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinTypeVtbl;
interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinTypeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType;
typedef struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinTypeVtbl;
interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinTypeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange;
typedef struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChange * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChange * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChangeVtbl;
interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChangeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange;
typedef struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChangeVtbl;
interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp;
typedef struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccApp * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccApp * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppVtbl;
interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp;
typedef struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppVtbl;
interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient __FIIterator_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient;
typedef struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClient * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClient * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClientVtbl;
interface __FIIterator_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClientVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient __FIIterable_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient;
typedef struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClientVtbl;
interface __FIIterable_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClientVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent;
typedef struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEventVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEvent * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This,
                       __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEvent * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEvent * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEventVtbl;
interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEventVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimProfile __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimProfile;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimProfile;
typedef struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This,
                       __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimProfile * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimProfileVtbl;
interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimProfile
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimProfileVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar;
typedef struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSar * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This,
                       __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSar * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSar * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSarVtbl;
interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSarVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma;
typedef struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdmaVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This,
                       __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdmaVtbl;
interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdmaVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm;
typedef struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsmVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This,
                       __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsmVtbl;
interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsmVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte;
typedef struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This,
                       __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLteVtbl;
interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLteVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma;
typedef struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdmaVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This,
                       __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdmaVtbl;
interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdmaVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts;
typedef struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmtsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This,
                       __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmtsVtbl;
interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmtsVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation;
typedef struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This,
                       __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformationVtbl;
interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformationVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange;
typedef struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChange * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This,
                       __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChange * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChange * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChangeVtbl;
interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChangeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange;
typedef struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChange * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This,
                       __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChange * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChange * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChangeVtbl;
interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChangeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType;
typedef struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinType *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This,
                       enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinType item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinType *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinTypeVtbl;
interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinTypeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange;
typedef struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChange * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This,
                       __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChange * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChange * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChangeVtbl;
interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChangeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp;
typedef struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccApp * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This,
                       __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccApp * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccApp * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppVtbl;
interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient;
typedef struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClient * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This,
                       __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClient * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClient * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClientVtbl;
interface __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClientVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimProfileInstallProgress;
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress *asyncInfo, struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimProfileInstallProgress progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgressVtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgressVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * This, __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimOperationResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgressVtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Progress(This,handler) )
    ( (This)->lpVtbl -> get_Progress(This,handler) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResultVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDownloadProfileMetadataResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResultVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimOperationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimOperationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimOperationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimOperationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResultVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotCredentialsAuthenticationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResultVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfoVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfoVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResultVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfigurationVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfigurationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfigurationVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfigurationVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandModemStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus * This, __RPC__out enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandModemStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatusVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPcoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPcoVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPcoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPcoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPco * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPcoVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPcoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinOperationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResultVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppReadRecordResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResultVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResultVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppsResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResultVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringOperationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResultVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResultsVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResultsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionFromXmlDocumentResults * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResultsVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResultsVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CUssdReply __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CUssdReply;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CUssdReply;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReply __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReply;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CUssdReplyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CUssdReply * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CUssdReply * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CUssdReply * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CUssdReply * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReply *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CUssdReplyVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CUssdReply
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CUssdReplyVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReply __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReply;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReply;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReplyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReply * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReply * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReply * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReply * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReply * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReply * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReply * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CUssdReply *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReply * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CNetworkOperators__CUssdReply **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReply * This, __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdReply * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReplyVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReply
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReplyVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESim_IInspectable __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESim_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESim_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESim_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESim_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESim_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESim_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESim_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESim_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESim_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESim_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimProfileMetadata_IInspectable __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimProfileMetadata_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimProfileMetadata_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimProfileMetadata_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimProfileMetadata_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimProfileMetadata_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimProfileMetadata_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimProfileMetadata_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimProfileMetadata_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimProfileMetadata_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimProfileMetadata_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_IInspectable __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimAddedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimAddedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimAddedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimAddedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimAddedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimAddedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimAddedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimAddedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimAddedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimAddedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimAddedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimRemovedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimRemovedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimRemovedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimRemovedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimRemovedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimRemovedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimRemovedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimRemovedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimRemovedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimUpdatedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimUpdatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimUpdatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimUpdatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimUpdatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimUpdatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimUpdatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimUpdatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimUpdatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_IInspectable __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountEventArgs __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountUpdatedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountUpdatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountUpdatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountUpdatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountUpdatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountUpdatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountUpdatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountUpdatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountUpdatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataSession_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataReceivedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataSession_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataSession_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataSession_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataSession_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataSession_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataSession_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataSession_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataSession * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataSession_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataSession_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataSession_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModem_IInspectable __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModem_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModem_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModem_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModem_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModem_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModem_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModem_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModem_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModem_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModem_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandSarManager_Windows__CNetworking__CNetworkOperators__CMobileBroadbandTransmissionStateChangedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandSarManager_Windows__CNetworking__CNetworkOperators__CMobileBroadbandTransmissionStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandSarManager_Windows__CNetworking__CNetworkOperators__CMobileBroadbandTransmissionStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandSarManager_Windows__CNetworking__CNetworkOperators__CMobileBroadbandTransmissionStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandSarManager_Windows__CNetworking__CNetworkOperators__CMobileBroadbandTransmissionStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandSarManager_Windows__CNetworking__CNetworkOperators__CMobileBroadbandTransmissionStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandSarManager_Windows__CNetworking__CNetworkOperators__CMobileBroadbandTransmissionStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandSarManager_Windows__CNetworking__CNetworkOperators__CMobileBroadbandTransmissionStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandTransmissionStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandSarManager_Windows__CNetworking__CNetworkOperators__CMobileBroadbandTransmissionStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandSarManager_Windows__CNetworking__CNetworkOperators__CMobileBroadbandTransmissionStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandSarManager_Windows__CNetworking__CNetworkOperators__CMobileBroadbandTransmissionStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIReference_1_int __FIReference_1_int;
EXTERN_C const IID IID___FIReference_1_int;
typedef struct __FIReference_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_int * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_int * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_int * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_int * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_int * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_int * This, __RPC__out int *value);
    END_INTERFACE
} __FIReference_1_intVtbl;
interface __FIReference_1_int
{
    CONST_VTBL struct __FIReference_1_intVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;
typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;
interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef interface __FIIterator_1_UINT32 __FIIterator_1_UINT32;
EXTERN_C const IID IID___FIIterator_1_UINT32;
typedef struct __FIIterator_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out unsigned int *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_UINT32 * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) unsigned int *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_UINT32Vtbl;
interface __FIIterator_1_UINT32
{
    CONST_VTBL struct __FIIterator_1_UINT32Vtbl *lpVtbl;
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
typedef interface __FIIterable_1_UINT32 __FIIterable_1_UINT32;
EXTERN_C const IID IID___FIIterable_1_UINT32;
typedef struct __FIIterable_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_UINT32 * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_UINT32 * This, __RPC__deref_out_opt __FIIterator_1_UINT32 **first);
    END_INTERFACE
} __FIIterable_1_UINT32Vtbl;
interface __FIIterable_1_UINT32
{
    CONST_VTBL struct __FIIterable_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_UINT32 __FIVectorView_1_UINT32;
EXTERN_C const IID IID___FIVectorView_1_UINT32;
typedef struct __FIVectorView_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_UINT32 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_UINT32 * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_UINT32 * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_UINT32 * This,
                                                    unsigned int index,
                                                             __RPC__out unsigned int *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_UINT32 * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_UINT32 * This,
                       unsigned int item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_UINT32 * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) unsigned int *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_UINT32Vtbl;
interface __FIVectorView_1_UINT32
{
    CONST_VTBL struct __FIVectorView_1_UINT32Vtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile;
typedef interface __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
typedef struct __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl;
interface __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
typedef struct __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl;
interface __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
typedef struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                       __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl;
interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl *lpVtbl;
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
typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;
EXTERN_C const IID IID___FIIterator_1_HSTRING;
typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out HSTRING *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;
interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;
EXTERN_C const IID IID___FIIterable_1_HSTRING;
typedef struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt __FIIterator_1_HSTRING **first);
    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;
interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIVectorView_1_HSTRING;
typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                                    unsigned int index,
                                                             __RPC__out HSTRING *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_HSTRING * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       HSTRING item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;
interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIReference_1_double __FIReference_1_double;
EXTERN_C const IID IID___FIReference_1_double;
typedef struct __FIReference_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_double * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_double * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_double * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_double * This, __RPC__out double *value);
    END_INTERFACE
} __FIReference_1_doubleVtbl;
interface __FIReference_1_double
{
    CONST_VTBL struct __FIReference_1_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
struct __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __FIReference_1_Windows__CFoundation__CTimeSpan __FIReference_1_Windows__CFoundation__CTimeSpan;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CTimeSpan;
typedef struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CTimeSpan *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CTimeSpanVtbl;
interface __FIReference_1_Windows__CFoundation__CTimeSpan
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;
typedef interface __FIIterator_1_Windows__CNetworking__CHostName __FIIterator_1_Windows__CNetworking__CHostName;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CHostName;
typedef struct __FIIterator_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__out __x_ABI_CWindows_CNetworking_CIHostName * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIHostName * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CHostNameVtbl;
interface __FIIterator_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CHostName __FIIterable_1_Windows__CNetworking__CHostName;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CHostName;
typedef struct __FIIterable_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CHostName **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CHostNameVtbl;
interface __FIIterable_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CNetworking__CHostName __FIVectorView_1_Windows__CNetworking__CHostName;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CHostName;
typedef struct __FIVectorView_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CIHostName * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                       __x_ABI_CWindows_CNetworking_CIHostName * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIHostName * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CHostNameVtbl;
interface __FIVectorView_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument;
typedef enum __x_ABI_CWindows_CDevices_CSms_CCellularClass __x_ABI_CWindows_CDevices_CSms_CCellularClass;
typedef interface __x_ABI_CWindows_CDevices_CSms_CISmsMessage __x_ABI_CWindows_CDevices_CSms_CISmsMessage;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter;
typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkCostType __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkCostType;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CDataClasses __x_ABI_CWindows_CNetworking_CNetworkOperators_CDataClasses;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimAuthenticationPreference __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimAuthenticationPreference;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimDiscoverResultKind __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimDiscoverResultKind;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimOperationStatus __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimOperationStatus;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimProfileClass __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimProfileClass;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimProfileMetadataState __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimProfileMetadataState;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimProfileState __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimProfileState;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimState __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimState;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimWatcherStatus __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimWatcherStatus;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CHotspotAuthenticationResponseCode __x_ABI_CWindows_CNetworking_CNetworkOperators_CHotspotAuthenticationResponseCode;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandAccountWatcherStatus __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandAccountWatcherStatus;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandDeviceType __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandDeviceType;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandModemStatus __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandModemStatus;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinFormat __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinFormat;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinLockState __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinLockState;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinType __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinType;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandRadioState __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandRadioState;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandUiccAppOperationStatus __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandUiccAppOperationStatus;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CNetworkDeviceStatus __x_ABI_CWindows_CNetworking_CNetworkOperators_CNetworkDeviceStatus;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CNetworkOperatorDataUsageNotificationKind __x_ABI_CWindows_CNetworking_CNetworkOperators_CNetworkOperatorDataUsageNotificationKind;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CNetworkOperatorEventMessageType __x_ABI_CWindows_CNetworking_CNetworkOperators_CNetworkOperatorEventMessageType;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CNetworkRegistrationState __x_ABI_CWindows_CNetworking_CNetworkOperators_CNetworkRegistrationState;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CProfileMediaType __x_ABI_CWindows_CNetworking_CNetworkOperators_CProfileMediaType;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CTetheringCapability __x_ABI_CWindows_CNetworking_CNetworkOperators_CTetheringCapability;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CTetheringOperationStatus __x_ABI_CWindows_CNetworking_CNetworkOperators_CTetheringOperationStatus;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CTetheringOperationalState __x_ABI_CWindows_CNetworking_CNetworkOperators_CTetheringOperationalState;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CUiccAccessCondition __x_ABI_CWindows_CNetworking_CNetworkOperators_CUiccAccessCondition;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CUiccAppKind __x_ABI_CWindows_CNetworking_CNetworkOperators_CUiccAppKind;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CUiccAppRecordKind __x_ABI_CWindows_CNetworking_CNetworkOperators_CUiccAppRecordKind;
typedef enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CUssdResultCode __x_ABI_CWindows_CNetworking_CNetworkOperators_CUssdResultCode;
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimProfileInstallProgress __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimProfileInstallProgress;
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CProfileUsage __x_ABI_CWindows_CNetworking_CNetworkOperators_CProfileUsage;
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CDataClasses
{
    DataClasses_None = 0,
    DataClasses_Gprs = 0x1,
    DataClasses_Edge = 0x2,
    DataClasses_Umts = 0x4,
    DataClasses_Hsdpa = 0x8,
    DataClasses_Hsupa = 0x10,
    DataClasses_LteAdvanced = 0x20,
    DataClasses_Cdma1xRtt = 0x10000,
    DataClasses_Cdma1xEvdo = 0x20000,
    DataClasses_Cdma1xEvdoRevA = 0x40000,
    DataClasses_Cdma1xEvdv = 0x80000,
    DataClasses_Cdma3xRtt = 0x100000,
    DataClasses_Cdma1xEvdoRevB = 0x200000,
    DataClasses_CdmaUmb = 0x400000,
    DataClasses_Custom = 0x80000000,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimAuthenticationPreference
{
    ESimAuthenticationPreference_OnEntry = 0,
    ESimAuthenticationPreference_OnAction = 1,
    ESimAuthenticationPreference_Never = 2,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimDiscoverResultKind
{
    ESimDiscoverResultKind_None = 0,
    ESimDiscoverResultKind_Events = 1,
    ESimDiscoverResultKind_ProfileMetadata = 2,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimOperationStatus
{
    ESimOperationStatus_Success = 0,
    ESimOperationStatus_NotAuthorized = 1,
    ESimOperationStatus_NotFound = 2,
    ESimOperationStatus_PolicyViolation = 3,
    ESimOperationStatus_InsufficientSpaceOnCard = 4,
    ESimOperationStatus_ServerFailure = 5,
    ESimOperationStatus_ServerNotReachable = 6,
    ESimOperationStatus_TimeoutWaitingForUserConsent = 7,
    ESimOperationStatus_IncorrectConfirmationCode = 8,
    ESimOperationStatus_ConfirmationCodeMaxRetriesExceeded = 9,
    ESimOperationStatus_CardRemoved = 10,
    ESimOperationStatus_CardBusy = 11,
    ESimOperationStatus_Other = 12,
    ESimOperationStatus_CardGeneralFailure = 13,
    ESimOperationStatus_ConfirmationCodeMissing = 14,
    ESimOperationStatus_InvalidMatchingId = 15,
    ESimOperationStatus_NoEligibleProfileForThisDevice = 16,
    ESimOperationStatus_OperationAborted = 17,
    ESimOperationStatus_EidMismatch = 18,
    ESimOperationStatus_ProfileNotAvailableForNewBinding = 19,
    ESimOperationStatus_ProfileNotReleasedByOperator = 20,
    ESimOperationStatus_OperationProhibitedByProfileClass = 21,
    ESimOperationStatus_ProfileNotPresent = 22,
    ESimOperationStatus_NoCorrespondingRequest = 23,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimProfileClass
{
    ESimProfileClass_Operational = 0,
    ESimProfileClass_Test = 1,
    ESimProfileClass_Provisioning = 2,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimProfileMetadataState
{
    ESimProfileMetadataState_Unknown = 0,
    ESimProfileMetadataState_WaitingForInstall = 1,
    ESimProfileMetadataState_Downloading = 2,
    ESimProfileMetadataState_Installing = 3,
    ESimProfileMetadataState_Expired = 4,
    ESimProfileMetadataState_RejectingDownload = 5,
    ESimProfileMetadataState_NoLongerAvailable = 6,
    ESimProfileMetadataState_DeniedByPolicy = 7,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimProfileState
{
    ESimProfileState_Unknown = 0,
    ESimProfileState_Disabled = 1,
    ESimProfileState_Enabled = 2,
    ESimProfileState_Deleted = 3,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimState
{
    ESimState_Unknown = 0,
    ESimState_Idle = 1,
    ESimState_Removed = 2,
    ESimState_Busy = 3,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimWatcherStatus
{
    ESimWatcherStatus_Created = 0,
    ESimWatcherStatus_Started = 1,
    ESimWatcherStatus_EnumerationCompleted = 2,
    ESimWatcherStatus_Stopping = 3,
    ESimWatcherStatus_Stopped = 4,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CHotspotAuthenticationResponseCode
{
    HotspotAuthenticationResponseCode_NoError = 0,
    HotspotAuthenticationResponseCode_LoginSucceeded = 50,
    HotspotAuthenticationResponseCode_LoginFailed = 100,
    HotspotAuthenticationResponseCode_RadiusServerError = 102,
    HotspotAuthenticationResponseCode_NetworkAdministratorError = 105,
    HotspotAuthenticationResponseCode_LoginAborted = 151,
    HotspotAuthenticationResponseCode_AccessGatewayInternalError = 255,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandAccountWatcherStatus
{
    MobileBroadbandAccountWatcherStatus_Created = 0,
    MobileBroadbandAccountWatcherStatus_Started = 1,
    MobileBroadbandAccountWatcherStatus_EnumerationCompleted = 2,
    MobileBroadbandAccountWatcherStatus_Stopped = 3,
    MobileBroadbandAccountWatcherStatus_Aborted = 4,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandDeviceType
{
    MobileBroadbandDeviceType_Unknown = 0,
    MobileBroadbandDeviceType_Embedded = 1,
    MobileBroadbandDeviceType_Removable = 2,
    MobileBroadbandDeviceType_Remote = 3,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandModemStatus
{
    MobileBroadbandModemStatus_Success = 0,
    MobileBroadbandModemStatus_OtherFailure = 1,
    MobileBroadbandModemStatus_Busy = 2,
    MobileBroadbandModemStatus_NoDeviceSupport = 3,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinFormat
{
    MobileBroadbandPinFormat_Unknown = 0,
    MobileBroadbandPinFormat_Numeric = 1,
    MobileBroadbandPinFormat_Alphanumeric = 2,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinLockState
{
    MobileBroadbandPinLockState_Unknown = 0,
    MobileBroadbandPinLockState_Unlocked = 1,
    MobileBroadbandPinLockState_PinRequired = 2,
    MobileBroadbandPinLockState_PinUnblockKeyRequired = 3,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinType
{
    MobileBroadbandPinType_None = 0,
    MobileBroadbandPinType_Custom = 1,
    MobileBroadbandPinType_Pin1 = 2,
    MobileBroadbandPinType_Pin2 = 3,
    MobileBroadbandPinType_SimPin = 4,
    MobileBroadbandPinType_FirstSimPin = 5,
    MobileBroadbandPinType_NetworkPin = 6,
    MobileBroadbandPinType_NetworkSubsetPin = 7,
    MobileBroadbandPinType_ServiceProviderPin = 8,
    MobileBroadbandPinType_CorporatePin = 9,
    MobileBroadbandPinType_SubsidyLock = 10,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandRadioState
{
    MobileBroadbandRadioState_Off = 0,
    MobileBroadbandRadioState_On = 1,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandUiccAppOperationStatus
{
    MobileBroadbandUiccAppOperationStatus_Success = 0,
    MobileBroadbandUiccAppOperationStatus_InvalidUiccFilePath = 1,
    MobileBroadbandUiccAppOperationStatus_AccessConditionNotHeld = 2,
    MobileBroadbandUiccAppOperationStatus_UiccBusy = 3,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CNetworkDeviceStatus
{
    NetworkDeviceStatus_DeviceNotReady = 0,
    NetworkDeviceStatus_DeviceReady = 1,
    NetworkDeviceStatus_SimNotInserted = 2,
    NetworkDeviceStatus_BadSim = 3,
    NetworkDeviceStatus_DeviceHardwareFailure = 4,
    NetworkDeviceStatus_AccountNotActivated = 5,
    NetworkDeviceStatus_DeviceLocked = 6,
    NetworkDeviceStatus_DeviceBlocked = 7,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CNetworkOperatorDataUsageNotificationKind
{
    NetworkOperatorDataUsageNotificationKind_DataUsageProgress = 0,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CNetworkOperatorEventMessageType
{
    NetworkOperatorEventMessageType_Gsm = 0,
    NetworkOperatorEventMessageType_Cdma = 1,
    NetworkOperatorEventMessageType_Ussd = 2,
    NetworkOperatorEventMessageType_DataPlanThresholdReached = 3,
    NetworkOperatorEventMessageType_DataPlanReset = 4,
    NetworkOperatorEventMessageType_DataPlanDeleted = 5,
    NetworkOperatorEventMessageType_ProfileConnected = 6,
    NetworkOperatorEventMessageType_ProfileDisconnected = 7,
    NetworkOperatorEventMessageType_RegisteredRoaming = 8,
    NetworkOperatorEventMessageType_RegisteredHome = 9,
    NetworkOperatorEventMessageType_TetheringEntitlementCheck = 10,
    NetworkOperatorEventMessageType_TetheringOperationalStateChanged = 11,
    NetworkOperatorEventMessageType_TetheringNumberOfClientsChanged = 12,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CNetworkRegistrationState
{
    NetworkRegistrationState_None = 0,
    NetworkRegistrationState_Deregistered = 1,
    NetworkRegistrationState_Searching = 2,
    NetworkRegistrationState_Home = 3,
    NetworkRegistrationState_Roaming = 4,
    NetworkRegistrationState_Partner = 5,
    NetworkRegistrationState_Denied = 6,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CProfileMediaType
{
    ProfileMediaType_Wlan = 0,
    ProfileMediaType_Wwan = 1,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CTetheringCapability
{
    TetheringCapability_Enabled = 0,
    TetheringCapability_DisabledByGroupPolicy = 1,
    TetheringCapability_DisabledByHardwareLimitation = 2,
    TetheringCapability_DisabledByOperator = 3,
    TetheringCapability_DisabledBySku = 4,
    TetheringCapability_DisabledByRequiredAppNotInstalled = 5,
    TetheringCapability_DisabledDueToUnknownCause = 6,
    TetheringCapability_DisabledBySystemCapability = 7,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CTetheringOperationStatus
{
    TetheringOperationStatus_Success = 0,
    TetheringOperationStatus_Unknown = 1,
    TetheringOperationStatus_MobileBroadbandDeviceOff = 2,
    TetheringOperationStatus_WiFiDeviceOff = 3,
    TetheringOperationStatus_EntitlementCheckTimeout = 4,
    TetheringOperationStatus_EntitlementCheckFailure = 5,
    TetheringOperationStatus_OperationInProgress = 6,
    TetheringOperationStatus_BluetoothDeviceOff = 7,
    TetheringOperationStatus_NetworkLimitedConnectivity = 8,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CTetheringOperationalState
{
    TetheringOperationalState_Unknown = 0,
    TetheringOperationalState_On = 1,
    TetheringOperationalState_Off = 2,
    TetheringOperationalState_InTransition = 3,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CUiccAccessCondition
{
    UiccAccessCondition_AlwaysAllowed = 0,
    UiccAccessCondition_Pin1 = 1,
    UiccAccessCondition_Pin2 = 2,
    UiccAccessCondition_Pin3 = 3,
    UiccAccessCondition_Pin4 = 4,
    UiccAccessCondition_Administrative5 = 5,
    UiccAccessCondition_Administrative6 = 6,
    UiccAccessCondition_NeverAllowed = 7,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CUiccAppKind
{
    UiccAppKind_Unknown = 0,
    UiccAppKind_MF = 1,
    UiccAppKind_MFSim = 2,
    UiccAppKind_MFRuim = 3,
    UiccAppKind_USim = 4,
    UiccAppKind_CSim = 5,
    UiccAppKind_ISim = 6,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CUiccAppRecordKind
{
    UiccAppRecordKind_Unknown = 0,
    UiccAppRecordKind_Transparent = 1,
    UiccAppRecordKind_RecordOriented = 2,
};
enum __x_ABI_CWindows_CNetworking_CNetworkOperators_CUssdResultCode
{
    UssdResultCode_NoActionRequired = 0,
    UssdResultCode_ActionRequired = 1,
    UssdResultCode_Terminated = 2,
    UssdResultCode_OtherLocalClient = 3,
    UssdResultCode_OperationNotSupported = 4,
    UssdResultCode_NetworkTimeout = 5,
};
struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimProfileInstallProgress
{
    INT32 TotalSizeInBytes;
    INT32 InstalledSizeInBytes;
};
struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CProfileUsage
{
    UINT32 UsageInMegabytes;
    __x_ABI_CWindows_CFoundation_CDateTime LastSyncTime;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IESim[] = L"Windows.Networking.NetworkOperators.IESim";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AvailableMemoryInBytes )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Eid )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FirmwareVersion )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MobileBroadbandModemDeviceId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Policy )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimPolicy * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimState * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetProfiles )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimProfile * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteProfileAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * This,
                  __RPC__in HSTRING profileId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DownloadProfileMetadataAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * This,
                  __RPC__in HSTRING activationCode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDownloadProfileMetadataResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ResetAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ProfileChanged )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESim_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ProfileChanged )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AvailableMemoryInBytes(This,value) )
    ( (This)->lpVtbl->get_Eid(This,value) )
    ( (This)->lpVtbl->get_FirmwareVersion(This,value) )
    ( (This)->lpVtbl->get_MobileBroadbandModemDeviceId(This,value) )
    ( (This)->lpVtbl->get_Policy(This,value) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->GetProfiles(This,result) )
    ( (This)->lpVtbl->DeleteProfileAsync(This,profileId,operation) )
    ( (This)->lpVtbl->DownloadProfileMetadataAsync(This,activationCode,operation) )
    ( (This)->lpVtbl->ResetAsync(This,operation) )
    ( (This)->lpVtbl->add_ProfileChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ProfileChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IESim2[] = L"Windows.Networking.NetworkOperators.IESim2";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Discover )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *DiscoverWithServerAddressAndMatchingId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim2 * This,
                  __RPC__in HSTRING serverAddress,
                  __RPC__in HSTRING matchingId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *DiscoverAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *DiscoverWithServerAddressAndMatchingIdAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim2 * This,
                  __RPC__in HSTRING serverAddress,
                  __RPC__in HSTRING matchingId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim2Vtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Discover(This,result) )
    ( (This)->lpVtbl->DiscoverWithServerAddressAndMatchingId(This,serverAddress,matchingId,result) )
    ( (This)->lpVtbl->DiscoverAsync(This,operation) )
    ( (This)->lpVtbl->DiscoverWithServerAddressAndMatchingIdAsync(This,serverAddress,matchingId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IESimAddedEventArgs[] = L"Windows.Networking.NetworkOperators.IESimAddedEventArgs";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimAddedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimAddedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimAddedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimAddedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimAddedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimAddedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ESim )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimAddedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimAddedEventArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimAddedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimAddedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ESim(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimAddedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IESimDiscoverEvent[] = L"Windows.Networking.NetworkOperators.IESimDiscoverEvent";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEventVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEvent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEvent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEvent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEvent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEvent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEvent * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MatchingId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEvent * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RspServerAddress )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEvent * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEventVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEvent
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEventVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MatchingId(This,value) )
    ( (This)->lpVtbl->get_RspServerAddress(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverEvent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IESimDiscoverResult[] = L"Windows.Networking.NetworkOperators.IESimDiscoverResult";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Events )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CESimDiscoverEvent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResult * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimDiscoverResultKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProfileMetadata )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Result )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimOperationResult * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResultVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResult
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Events(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_ProfileMetadata(This,value) )
    ( (This)->lpVtbl->get_Result(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDiscoverResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IESimDownloadProfileMetadataResult[] = L"Windows.Networking.NetworkOperators.IESimDownloadProfileMetadataResult";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDownloadProfileMetadataResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDownloadProfileMetadataResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDownloadProfileMetadataResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDownloadProfileMetadataResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDownloadProfileMetadataResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDownloadProfileMetadataResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDownloadProfileMetadataResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Result )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDownloadProfileMetadataResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimOperationResult * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProfileMetadata )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDownloadProfileMetadataResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDownloadProfileMetadataResultVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDownloadProfileMetadataResult
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDownloadProfileMetadataResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Result(This,value) )
    ( (This)->lpVtbl->get_ProfileMetadata(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimDownloadProfileMetadataResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IESimManagerStatics[] = L"Windows.Networking.NetworkOperators.IESimManagerStatics";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServiceInfo )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimServiceInfo * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryCreateESimWatcher )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ServiceInfoChanged )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimManagerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ServiceInfoChanged )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimManagerStatics * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimManagerStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServiceInfo(This,value) )
    ( (This)->lpVtbl->TryCreateESimWatcher(This,result) )
    ( (This)->lpVtbl->add_ServiceInfoChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ServiceInfoChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IESimOperationResult[] = L"Windows.Networking.NetworkOperators.IESimOperationResult";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimOperationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimOperationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimOperationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimOperationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimOperationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimOperationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimOperationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimOperationResult * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimOperationStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimOperationResultVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimOperationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimOperationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimOperationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IESimPolicy[] = L"Windows.Networking.NetworkOperators.IESimPolicy";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimPolicyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimPolicy * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimPolicy * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimPolicy * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimPolicy * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimPolicy * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimPolicy * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ShouldEnableManagingUi )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimPolicy * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimPolicyVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimPolicy
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimPolicyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ShouldEnableManagingUi(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimPolicy;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IESimProfile[] = L"Windows.Networking.NetworkOperators.IESimProfile";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Class )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimProfileClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Nickname )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Policy )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfilePolicy * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderIcon )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderName )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimProfileState * value
        );
    HRESULT ( STDMETHODCALLTYPE *DisableAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *EnableAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetNicknameAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile * This,
                  __RPC__in HSTRING newNickname,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Class(This,value) )
    ( (This)->lpVtbl->get_Nickname(This,value) )
    ( (This)->lpVtbl->get_Policy(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_ProviderIcon(This,value) )
    ( (This)->lpVtbl->get_ProviderId(This,value) )
    ( (This)->lpVtbl->get_ProviderName(This,value) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->DisableAsync(This,operation) )
    ( (This)->lpVtbl->EnableAsync(This,operation) )
    ( (This)->lpVtbl->SetNicknameAsync(This,newNickname,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfile;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IESimProfileMetadata[] = L"Windows.Networking.NetworkOperators.IESimProfileMetadata";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsConfirmationCodeRequired )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Policy )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfilePolicy * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderIcon )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderName )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimProfileMetadataState * value
        );
    HRESULT ( STDMETHODCALLTYPE *DenyInstallAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ConfirmInstallAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * This,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ConfirmInstallWithConfirmationCodeAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * This,
                  __RPC__in HSTRING confirmationCode,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CNetworkOperators__CESimOperationResult_Windows__CNetworking__CNetworkOperators__CESimProfileInstallProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *PostponeInstallAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CESimOperationResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StateChanged )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimProfileMetadata_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StateChanged )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadataVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsConfirmationCodeRequired(This,value) )
    ( (This)->lpVtbl->get_Policy(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_ProviderIcon(This,value) )
    ( (This)->lpVtbl->get_ProviderId(This,value) )
    ( (This)->lpVtbl->get_ProviderName(This,value) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->DenyInstallAsync(This,operation) )
    ( (This)->lpVtbl->ConfirmInstallAsync(This,operation) )
    ( (This)->lpVtbl->ConfirmInstallWithConfirmationCodeAsync(This,confirmationCode,operation) )
    ( (This)->lpVtbl->PostponeInstallAsync(This,operation) )
    ( (This)->lpVtbl->add_StateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_StateChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfileMetadata;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IESimProfilePolicy[] = L"Windows.Networking.NetworkOperators.IESimProfilePolicy";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfilePolicyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfilePolicy * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfilePolicy * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfilePolicy * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfilePolicy * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfilePolicy * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfilePolicy * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanDelete )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfilePolicy * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanDisable )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfilePolicy * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsManagedByEnterprise )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfilePolicy * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfilePolicyVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfilePolicy
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfilePolicyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanDelete(This,value) )
    ( (This)->lpVtbl->get_CanDisable(This,value) )
    ( (This)->lpVtbl->get_IsManagedByEnterprise(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimProfilePolicy;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IESimRemovedEventArgs[] = L"Windows.Networking.NetworkOperators.IESimRemovedEventArgs";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimRemovedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimRemovedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimRemovedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimRemovedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimRemovedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimRemovedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ESim )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimRemovedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimRemovedEventArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimRemovedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ESim(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimRemovedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IESimServiceInfo[] = L"Windows.Networking.NetworkOperators.IESimServiceInfo";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimServiceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimServiceInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimServiceInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimServiceInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimServiceInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimServiceInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimServiceInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AuthenticationPreference )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimServiceInfo * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimAuthenticationPreference * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsESimUiEnabled )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimServiceInfo * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimServiceInfoVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimServiceInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimServiceInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AuthenticationPreference(This,value) )
    ( (This)->lpVtbl->get_IsESimUiEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimServiceInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IESimUpdatedEventArgs[] = L"Windows.Networking.NetworkOperators.IESimUpdatedEventArgs";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimUpdatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimUpdatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimUpdatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimUpdatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimUpdatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimUpdatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ESim )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimUpdatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESim * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimUpdatedEventArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimUpdatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ESim(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimUpdatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IESimWatcher[] = L"Windows.Networking.NetworkOperators.IESimWatcher";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CESimWatcherStatus * value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Added )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimAddedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Added )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Removed )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimRemovedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Removed )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Updated )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CESimWatcher_Windows__CNetworking__CNetworkOperators__CESimUpdatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Updated )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcherVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->add_Added(This,handler,token) )
    ( (This)->lpVtbl->remove_Added(This,token) )
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )
    ( (This)->lpVtbl->add_Removed(This,handler,token) )
    ( (This)->lpVtbl->remove_Removed(This,token) )
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )
    ( (This)->lpVtbl->remove_Stopped(This,token) )
    ( (This)->lpVtbl->add_Updated(This,handler,token) )
    ( (This)->lpVtbl->remove_Updated(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIESimWatcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IFdnAccessManagerStatics[] = L"Windows.Networking.NetworkOperators.IFdnAccessManagerStatics";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIFdnAccessManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIFdnAccessManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIFdnAccessManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIFdnAccessManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIFdnAccessManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIFdnAccessManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIFdnAccessManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestUnlockAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIFdnAccessManagerStatics * This,
                  __RPC__in HSTRING contactListId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIFdnAccessManagerStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIFdnAccessManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIFdnAccessManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestUnlockAsync(This,contactListId,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIFdnAccessManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext[] = L"Windows.Networking.NetworkOperators.IHotspotAuthenticationContext";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_WirelessNetworkId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext * This,
                   __RPC__out UINT32 * __valueSize,
                                                      __RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkAdapter )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RedirectMessageUrl )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RedirectMessageXml )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthenticationUrl )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    HRESULT ( STDMETHODCALLTYPE *IssueCredentials )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext * This,
                  __RPC__in HSTRING userName,
                  __RPC__in HSTRING password,
                  __RPC__in HSTRING extraParameters,
                  boolean markAsManualConnectOnFailure
        );
    HRESULT ( STDMETHODCALLTYPE *AbortAuthentication )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext * This,
                  boolean markAsManual
        );
    HRESULT ( STDMETHODCALLTYPE *SkipAuthentication )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext * This
        );
    HRESULT ( STDMETHODCALLTYPE *TriggerAttentionRequired )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext * This,
                  __RPC__in HSTRING packageRelativeApplicationId,
                  __RPC__in HSTRING applicationParameters
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContextVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContextVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_WirelessNetworkId(This,__valueSize,value) )
    ( (This)->lpVtbl->get_NetworkAdapter(This,value) )
    ( (This)->lpVtbl->get_RedirectMessageUrl(This,value) )
    ( (This)->lpVtbl->get_RedirectMessageXml(This,value) )
    ( (This)->lpVtbl->get_AuthenticationUrl(This,value) )
    ( (This)->lpVtbl->IssueCredentials(This,userName,password,extraParameters,markAsManualConnectOnFailure) )
    ( (This)->lpVtbl->AbortAuthentication(This,markAsManual) )
    ( (This)->lpVtbl->SkipAuthentication(This) )
    ( (This)->lpVtbl->TriggerAttentionRequired(This,packageRelativeApplicationId,applicationParameters) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext2[] = L"Windows.Networking.NetworkOperators.IHotspotAuthenticationContext2";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IssueCredentialsAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext2 * This,
                  __RPC__in HSTRING userName,
                  __RPC__in HSTRING password,
                  __RPC__in HSTRING extraParameters,
                  boolean markAsManualConnectOnFailure,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CHotspotCredentialsAuthenticationResult * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext2Vtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IssueCredentialsAsync(This,userName,password,extraParameters,markAsManualConnectOnFailure,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IHotspotAuthenticationContextStatics[] = L"Windows.Networking.NetworkOperators.IHotspotAuthenticationContextStatics";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContextStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContextStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContextStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContextStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContextStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContextStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContextStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetAuthenticationContext )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContextStatics * This,
                  __RPC__in HSTRING evenToken,
                   __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContext * * context,
                           __RPC__out boolean * isValid
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContextStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContextStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContextStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetAuthenticationContext(This,evenToken,context,isValid) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationContextStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IHotspotAuthenticationEventDetails[] = L"Windows.Networking.NetworkOperators.IHotspotAuthenticationEventDetails";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationEventDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationEventDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationEventDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationEventDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationEventDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationEventDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationEventDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EventToken )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationEventDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationEventDetailsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationEventDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationEventDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EventToken(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotAuthenticationEventDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IHotspotCredentialsAuthenticationResult[] = L"Windows.Networking.NetworkOperators.IHotspotCredentialsAuthenticationResult";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotCredentialsAuthenticationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotCredentialsAuthenticationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotCredentialsAuthenticationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotCredentialsAuthenticationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotCredentialsAuthenticationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotCredentialsAuthenticationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotCredentialsAuthenticationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HasNetworkErrorOccurred )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotCredentialsAuthenticationResult * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResponseCode )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotCredentialsAuthenticationResult * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CHotspotAuthenticationResponseCode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LogoffUrl )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotCredentialsAuthenticationResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthenticationReplyXml )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotCredentialsAuthenticationResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotCredentialsAuthenticationResultVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotCredentialsAuthenticationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotCredentialsAuthenticationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HasNetworkErrorOccurred(This,value) )
    ( (This)->lpVtbl->get_ResponseCode(This,value) )
    ( (This)->lpVtbl->get_LogoffUrl(This,value) )
    ( (This)->lpVtbl->get_AuthenticationReplyXml(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIHotspotCredentialsAuthenticationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IKnownCSimFilePathsStatics[] = L"Windows.Networking.NetworkOperators.IKnownCSimFilePathsStatics";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownCSimFilePathsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownCSimFilePathsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownCSimFilePathsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownCSimFilePathsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownCSimFilePathsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownCSimFilePathsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownCSimFilePathsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EFSpn )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownCSimFilePathsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gid1 )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownCSimFilePathsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gid2 )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownCSimFilePathsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownCSimFilePathsStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownCSimFilePathsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownCSimFilePathsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EFSpn(This,value) )
    ( (This)->lpVtbl->get_Gid1(This,value) )
    ( (This)->lpVtbl->get_Gid2(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownCSimFilePathsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IKnownRuimFilePathsStatics[] = L"Windows.Networking.NetworkOperators.IKnownRuimFilePathsStatics";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownRuimFilePathsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownRuimFilePathsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownRuimFilePathsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownRuimFilePathsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownRuimFilePathsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownRuimFilePathsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownRuimFilePathsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EFSpn )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownRuimFilePathsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gid1 )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownRuimFilePathsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gid2 )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownRuimFilePathsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownRuimFilePathsStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownRuimFilePathsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownRuimFilePathsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EFSpn(This,value) )
    ( (This)->lpVtbl->get_Gid1(This,value) )
    ( (This)->lpVtbl->get_Gid2(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownRuimFilePathsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IKnownSimFilePathsStatics[] = L"Windows.Networking.NetworkOperators.IKnownSimFilePathsStatics";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownSimFilePathsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownSimFilePathsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownSimFilePathsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownSimFilePathsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownSimFilePathsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownSimFilePathsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownSimFilePathsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EFOns )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownSimFilePathsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EFSpn )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownSimFilePathsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gid1 )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownSimFilePathsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gid2 )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownSimFilePathsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownSimFilePathsStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownSimFilePathsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownSimFilePathsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EFOns(This,value) )
    ( (This)->lpVtbl->get_EFSpn(This,value) )
    ( (This)->lpVtbl->get_Gid1(This,value) )
    ( (This)->lpVtbl->get_Gid2(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownSimFilePathsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IKnownUSimFilePathsStatics[] = L"Windows.Networking.NetworkOperators.IKnownUSimFilePathsStatics";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownUSimFilePathsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownUSimFilePathsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownUSimFilePathsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownUSimFilePathsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownUSimFilePathsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownUSimFilePathsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownUSimFilePathsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EFSpn )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownUSimFilePathsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EFOpl )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownUSimFilePathsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EFPnn )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownUSimFilePathsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gid1 )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownUSimFilePathsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gid2 )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownUSimFilePathsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownUSimFilePathsStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownUSimFilePathsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownUSimFilePathsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EFSpn(This,value) )
    ( (This)->lpVtbl->get_EFOpl(This,value) )
    ( (This)->lpVtbl->get_EFPnn(This,value) )
    ( (This)->lpVtbl->get_Gid1(This,value) )
    ( (This)->lpVtbl->get_Gid2(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIKnownUSimFilePathsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandAccount[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandAccount";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NetworkAccountId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceProviderGuid )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceProviderName )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentNetwork )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork * * network
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentDeviceInformation )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * * deviceInformation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NetworkAccountId(This,value) )
    ( (This)->lpVtbl->get_ServiceProviderGuid(This,value) )
    ( (This)->lpVtbl->get_ServiceProviderName(This,value) )
    ( (This)->lpVtbl->get_CurrentNetwork(This,network) )
    ( (This)->lpVtbl->get_CurrentDeviceInformation(This,deviceInformation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandAccount2[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandAccount2";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetConnectionProfiles )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount2Vtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetConnectionProfiles(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandAccount3[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandAccount3";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AccountExperienceUrl )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount3Vtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AccountExperienceUrl(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandAccountEventArgs[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandAccountEventArgs";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NetworkAccountId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountEventArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NetworkAccountId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandAccountStatics[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandAccountStatics";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AvailableNetworkAccountIds )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * ppAccountIds
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromNetworkAccountId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountStatics * This,
                  __RPC__in HSTRING networkAccountId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount * * ppAccount
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AvailableNetworkAccountIds(This,ppAccountIds) )
    ( (This)->lpVtbl->CreateFromNetworkAccountId(This,networkAccountId,ppAccount) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandAccountUpdatedEventArgs[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandAccountUpdatedEventArgs";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountUpdatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountUpdatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountUpdatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountUpdatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountUpdatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountUpdatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NetworkAccountId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountUpdatedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasDeviceInformationChanged )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountUpdatedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasNetworkChanged )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountUpdatedEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountUpdatedEventArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountUpdatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NetworkAccountId(This,value) )
    ( (This)->lpVtbl->get_HasDeviceInformationChanged(This,value) )
    ( (This)->lpVtbl->get_HasNetworkChanged(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountUpdatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandAccountWatcher";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_AccountAdded )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AccountAdded )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AccountUpdated )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountUpdatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AccountUpdated )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AccountRemoved )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AccountRemoved )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAccountWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * This,
                  EventRegistrationToken cookie
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandAccountWatcherStatus * status
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcherVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_AccountAdded(This,handler,cookie) )
    ( (This)->lpVtbl->remove_AccountAdded(This,cookie) )
    ( (This)->lpVtbl->add_AccountUpdated(This,handler,cookie) )
    ( (This)->lpVtbl->remove_AccountUpdated(This,cookie) )
    ( (This)->lpVtbl->add_AccountRemoved(This,handler,cookie) )
    ( (This)->lpVtbl->remove_AccountRemoved(This,cookie) )
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,cookie) )
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,cookie) )
    ( (This)->lpVtbl->add_Stopped(This,handler,cookie) )
    ( (This)->lpVtbl->remove_Stopped(This,cookie) )
    ( (This)->lpVtbl->get_Status(This,status) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccountWatcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandAntennaSar[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandAntennaSar";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSar * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSar * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSar * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSar * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSar * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSar * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AntennaIndex )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SarBackoffIndex )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSar * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSarVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSar
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSarVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AntennaIndex(This,value) )
    ( (This)->lpVtbl->get_SarBackoffIndex(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSar;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandAntennaSarFactory[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandAntennaSarFactory";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSarFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSarFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSarFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSarFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSarFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSarFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSarFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithIndex )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSarFactory * This,
                  INT32 antennaIndex,
                  INT32 sarBackoffIndex,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSar * * antennaSar
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSarFactoryVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSarFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSarFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithIndex(This,antennaIndex,sarBackoffIndex,antennaSar) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAntennaSarFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandCellCdma[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandCellCdma";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdmaVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BaseStationId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BaseStationPNCode )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BaseStationLatitude )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BaseStationLongitude )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BaseStationLastBroadcastGpsTime )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PilotSignalStrengthInDB )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdmaVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdmaVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BaseStationId(This,value) )
    ( (This)->lpVtbl->get_BaseStationPNCode(This,value) )
    ( (This)->lpVtbl->get_BaseStationLatitude(This,value) )
    ( (This)->lpVtbl->get_BaseStationLongitude(This,value) )
    ( (This)->lpVtbl->get_BaseStationLastBroadcastGpsTime(This,value) )
    ( (This)->lpVtbl->get_NetworkId(This,value) )
    ( (This)->lpVtbl->get_PilotSignalStrengthInDB(This,value) )
    ( (This)->lpVtbl->get_SystemId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellCdma;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandCellGsm[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandCellGsm";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsmVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BaseStationId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CellId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChannelNumber )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocationAreaCode )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReceivedSignalStrengthInDBm )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimingAdvanceInBitPeriods )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsmVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsmVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BaseStationId(This,value) )
    ( (This)->lpVtbl->get_CellId(This,value) )
    ( (This)->lpVtbl->get_ChannelNumber(This,value) )
    ( (This)->lpVtbl->get_LocationAreaCode(This,value) )
    ( (This)->lpVtbl->get_ProviderId(This,value) )
    ( (This)->lpVtbl->get_ReceivedSignalStrengthInDBm(This,value) )
    ( (This)->lpVtbl->get_TimingAdvanceInBitPeriods(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellGsm;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandCellLte[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandCellLte";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CellId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChannelNumber )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhysicalCellId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReferenceSignalReceivedPowerInDBm )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReferenceSignalReceivedQualityInDBm )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimingAdvanceInBitPeriods )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrackingAreaCode )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLteVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLteVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CellId(This,value) )
    ( (This)->lpVtbl->get_ChannelNumber(This,value) )
    ( (This)->lpVtbl->get_PhysicalCellId(This,value) )
    ( (This)->lpVtbl->get_ProviderId(This,value) )
    ( (This)->lpVtbl->get_ReferenceSignalReceivedPowerInDBm(This,value) )
    ( (This)->lpVtbl->get_ReferenceSignalReceivedQualityInDBm(This,value) )
    ( (This)->lpVtbl->get_TimingAdvanceInBitPeriods(This,value) )
    ( (This)->lpVtbl->get_TrackingAreaCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellLte;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandCellTdscdma[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandCellTdscdma";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdmaVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CellId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CellParameterId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChannelNumber )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocationAreaCode )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PathLossInDB )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReceivedSignalCodePowerInDBm )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimingAdvanceInBitPeriods )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdmaVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdmaVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CellId(This,value) )
    ( (This)->lpVtbl->get_CellParameterId(This,value) )
    ( (This)->lpVtbl->get_ChannelNumber(This,value) )
    ( (This)->lpVtbl->get_LocationAreaCode(This,value) )
    ( (This)->lpVtbl->get_PathLossInDB(This,value) )
    ( (This)->lpVtbl->get_ProviderId(This,value) )
    ( (This)->lpVtbl->get_ReceivedSignalCodePowerInDBm(This,value) )
    ( (This)->lpVtbl->get_TimingAdvanceInBitPeriods(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellTdscdma;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandCellUmts[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandCellUmts";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmtsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CellId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChannelNumber )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocationAreaCode )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PathLossInDB )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrimaryScramblingCode )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReceivedSignalCodePowerInDBm )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SignalToNoiseRatioInDB )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmtsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmtsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CellId(This,value) )
    ( (This)->lpVtbl->get_ChannelNumber(This,value) )
    ( (This)->lpVtbl->get_LocationAreaCode(This,value) )
    ( (This)->lpVtbl->get_PathLossInDB(This,value) )
    ( (This)->lpVtbl->get_PrimaryScramblingCode(This,value) )
    ( (This)->lpVtbl->get_ProviderId(This,value) )
    ( (This)->lpVtbl->get_ReceivedSignalCodePowerInDBm(This,value) )
    ( (This)->lpVtbl->get_SignalToNoiseRatioInDB(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellUmts;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandCellsInfo[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandCellsInfo";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NeighboringCellsCdma )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NeighboringCellsGsm )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NeighboringCellsLte )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NeighboringCellsTdscdma )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NeighboringCellsUmts )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServingCellsCdma )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellCdma * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServingCellsGsm )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellGsm * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServingCellsLte )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellLte * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServingCellsTdscdma )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellTdscdma * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServingCellsUmts )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellUmts * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfoVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NeighboringCellsCdma(This,value) )
    ( (This)->lpVtbl->get_NeighboringCellsGsm(This,value) )
    ( (This)->lpVtbl->get_NeighboringCellsLte(This,value) )
    ( (This)->lpVtbl->get_NeighboringCellsTdscdma(This,value) )
    ( (This)->lpVtbl->get_NeighboringCellsUmts(This,value) )
    ( (This)->lpVtbl->get_ServingCellsCdma(This,value) )
    ( (This)->lpVtbl->get_ServingCellsGsm(This,value) )
    ( (This)->lpVtbl->get_ServingCellsLte(This,value) )
    ( (This)->lpVtbl->get_ServingCellsTdscdma(This,value) )
    ( (This)->lpVtbl->get_ServingCellsUmts(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandCellsInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceInformation";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NetworkDeviceStatus )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CNetworkDeviceStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Manufacturer )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Model )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FirmwareInformation )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CellularClass )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSms_CCellularClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DataClasses )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CDataClasses * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomDataClass )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MobileEquipmentId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TelephoneNumbers )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SubscriberId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SimIccId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceType )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandDeviceType * pDeviceType
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentRadioState )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandRadioState * pCurrentState
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformationVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NetworkDeviceStatus(This,value) )
    ( (This)->lpVtbl->get_Manufacturer(This,value) )
    ( (This)->lpVtbl->get_Model(This,value) )
    ( (This)->lpVtbl->get_FirmwareInformation(This,value) )
    ( (This)->lpVtbl->get_CellularClass(This,value) )
    ( (This)->lpVtbl->get_DataClasses(This,value) )
    ( (This)->lpVtbl->get_CustomDataClass(This,value) )
    ( (This)->lpVtbl->get_MobileEquipmentId(This,value) )
    ( (This)->lpVtbl->get_TelephoneNumbers(This,value) )
    ( (This)->lpVtbl->get_SubscriberId(This,value) )
    ( (This)->lpVtbl->get_SimIccId(This,value) )
    ( (This)->lpVtbl->get_DeviceType(This,pDeviceType) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_CurrentRadioState(This,pCurrentState) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation2[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceInformation2";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PinManager )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinManager * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Revision )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation2Vtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PinManager(This,value) )
    ( (This)->lpVtbl->get_Revision(This,value) )
    ( (This)->lpVtbl->get_SerialNumber(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation3[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceInformation3";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SimSpn )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SimPnn )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SimGid1 )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation3Vtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SimSpn(This,value) )
    ( (This)->lpVtbl->get_SimPnn(This,value) )
    ( (This)->lpVtbl->get_SimGid1(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceService[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceService";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceService * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceService * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceService * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceService * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceService * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceService * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceServiceId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceService * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedCommands )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceService * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
    HRESULT ( STDMETHODCALLTYPE *OpenDataSession )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceService * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataSession * * value
        );
    HRESULT ( STDMETHODCALLTYPE *OpenCommandSession )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceService * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandSession * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceService
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceServiceId(This,value) )
    ( (This)->lpVtbl->get_SupportedCommands(This,value) )
    ( (This)->lpVtbl->OpenDataSession(This,value) )
    ( (This)->lpVtbl->OpenCommandSession(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceService;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceCommandResult[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceCommandResult";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResponseData )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandResultVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandResult
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StatusCode(This,value) )
    ( (This)->lpVtbl->get_ResponseData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceCommandSession[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceCommandSession";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SendQueryCommandAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandSession * This,
                  UINT32 commandId,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *SendSetCommandAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandSession * This,
                  UINT32 commandId,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceCommandResult * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *CloseSession )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandSession * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandSessionVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandSession
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SendQueryCommandAsync(This,commandId,data,asyncInfo) )
    ( (This)->lpVtbl->SendSetCommandAsync(This,commandId,data,asyncInfo) )
    ( (This)->lpVtbl->CloseSession(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceCommandSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataReceivedEventArgs[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceDataReceivedEventArgs";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ReceivedData )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ReceivedData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataSession[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceDataSession";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *WriteDataAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataSession * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *CloseSession )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataSession * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DataReceived )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataSession_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceDataReceivedEventArgs * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DataReceived )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataSession * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataSessionVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataSession
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->WriteDataAsync(This,value,asyncInfo) )
    ( (This)->lpVtbl->CloseSession(This) )
    ( (This)->lpVtbl->add_DataReceived(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_DataReceived(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceDataSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceInformation[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceInformation";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceServiceId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformation * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDataReadSupported )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDataWriteSupported )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformation * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformationVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceServiceId(This,value) )
    ( (This)->lpVtbl->get_IsDataReadSupported(This,value) )
    ( (This)->lpVtbl->get_IsDataWriteSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceTriggerDetails[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandDeviceServiceTriggerDetails";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceTriggerDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceServiceId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceTriggerDetails * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReceivedData )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceTriggerDetailsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_DeviceServiceId(This,value) )
    ( (This)->lpVtbl->get_ReceivedData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceServiceTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandModem[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandModem";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CurrentAccount )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandAccount * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceInformation )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxDeviceServiceCommandSizeInBytes )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxDeviceServiceDataSizeInBytes )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceServices )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandDeviceServiceInformation * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceService )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem * This,
                  GUID deviceServiceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandDeviceService * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsResetSupported )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ResetAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentConfigurationAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemConfiguration * * asyncInfo
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentNetwork )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CurrentAccount(This,value) )
    ( (This)->lpVtbl->get_DeviceInformation(This,value) )
    ( (This)->lpVtbl->get_MaxDeviceServiceCommandSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_MaxDeviceServiceDataSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_DeviceServices(This,value) )
    ( (This)->lpVtbl->GetDeviceService(This,deviceServiceId,value) )
    ( (This)->lpVtbl->get_IsResetSupported(This,value) )
    ( (This)->lpVtbl->ResetAsync(This,asyncInfo) )
    ( (This)->lpVtbl->GetCurrentConfigurationAsync(This,asyncInfo) )
    ( (This)->lpVtbl->get_CurrentNetwork(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandModem2[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandModem2";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetIsPassthroughEnabledAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *SetIsPassthroughEnabledAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem2 * This,
                  boolean value,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModemStatus * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem2Vtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetIsPassthroughEnabledAsync(This,asyncInfo) )
    ( (This)->lpVtbl->SetIsPassthroughEnabledAsync(This,value,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandModem3[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandModem3";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetPcoAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem3 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPco * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInEmergencyCallMode )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem3 * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_IsInEmergencyCallModeChanged )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem3 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandModem_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_IsInEmergencyCallModeChanged )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem3 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem3Vtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetPcoAsync(This,operation) )
    ( (This)->lpVtbl->get_IsInEmergencyCallMode(This,value) )
    ( (This)->lpVtbl->add_IsInEmergencyCallModeChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_IsInEmergencyCallModeChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandModemConfiguration[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandModemConfiguration";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uicc )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUicc * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HomeProviderId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HomeProviderName )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfigurationVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uicc(This,value) )
    ( (This)->lpVtbl->get_HomeProviderId(This,value) )
    ( (This)->lpVtbl->get_HomeProviderName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandModemConfiguration2[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandModemConfiguration2";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SarManager )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration2Vtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SarManager(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemConfiguration2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandModemIsolation[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandModemIsolation";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolation * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddAllowedHost )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolation * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * host
        );
    HRESULT ( STDMETHODCALLTYPE *AddAllowedHostRange )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolation * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * first,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * last
        );
    HRESULT ( STDMETHODCALLTYPE *ApplyConfigurationAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ClearConfigurationAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolationVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddAllowedHost(This,host) )
    ( (This)->lpVtbl->AddAllowedHostRange(This,first,last) )
    ( (This)->lpVtbl->ApplyConfigurationAsync(This,operation) )
    ( (This)->lpVtbl->ClearConfigurationAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandModemIsolationFactory[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandModemIsolationFactory";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolationFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolationFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolationFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolationFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolationFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolationFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolationFactory * This,
                  __RPC__in HSTRING modemDeviceId,
                  __RPC__in HSTRING ruleGroupId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolation * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolationFactoryVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolationFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,modemDeviceId,ruleGroupId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemIsolationFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandModemStatics[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandModemStatics";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )
    ( (This)->lpVtbl->FromId(This,deviceId,value) )
    ( (This)->lpVtbl->GetDefault(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandModemStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandNetwork";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NetworkAdapter )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkRegistrationState )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CNetworkRegistrationState * registrationState
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RegistrationNetworkError )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork * This,
                           __RPC__out UINT32 * networkError
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PacketAttachNetworkError )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork * This,
                           __RPC__out UINT32 * networkError
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActivationNetworkError )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork * This,
                           __RPC__out UINT32 * networkError
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccessPointName )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork * This,
                           __RPC__deref_out_opt HSTRING * apn
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RegisteredDataClass )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CDataClasses * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RegisteredProviderId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RegisteredProviderName )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ShowConnectionUI )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NetworkAdapter(This,value) )
    ( (This)->lpVtbl->get_NetworkRegistrationState(This,registrationState) )
    ( (This)->lpVtbl->get_RegistrationNetworkError(This,networkError) )
    ( (This)->lpVtbl->get_PacketAttachNetworkError(This,networkError) )
    ( (This)->lpVtbl->get_ActivationNetworkError(This,networkError) )
    ( (This)->lpVtbl->get_AccessPointName(This,apn) )
    ( (This)->lpVtbl->get_RegisteredDataClass(This,value) )
    ( (This)->lpVtbl->get_RegisteredProviderId(This,value) )
    ( (This)->lpVtbl->get_RegisteredProviderName(This,value) )
    ( (This)->lpVtbl->ShowConnectionUI(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork2[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandNetwork2";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetVoiceCallSupportAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncInfo
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RegistrationUiccApps )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork2Vtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetVoiceCallSupportAsync(This,asyncInfo) )
    ( (This)->lpVtbl->get_RegistrationUiccApps(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork3[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandNetwork3";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCellsInfoAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork3 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandCellsInfo * * asyncOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork3Vtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCellsInfoAsync(This,asyncOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandNetworkRegistrationStateChange[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandNetworkRegistrationStateChange";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChange * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChange * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChange * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChange * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChange * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChange * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChange * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Network )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChange * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetwork * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChangeVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChange
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChangeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_Network(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChange;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChangeTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChangeTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChangeTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChangeTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChangeTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChangeTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChangeTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NetworkRegistrationStateChanges )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChangeTriggerDetails * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandNetworkRegistrationStateChange * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChangeTriggerDetailsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChangeTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChangeTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NetworkRegistrationStateChanges(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandNetworkRegistrationStateChangeTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandPco[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandPco";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPcoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPco * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPco * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPco * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPco * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPco * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPco * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPco * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsComplete )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPco * This,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPco * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPcoVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPco
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPcoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Data(This,result) )
    ( (This)->lpVtbl->get_IsComplete(This,result) )
    ( (This)->lpVtbl->get_DeviceId(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPco;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandPcoDataChangeTriggerDetails[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandPcoDataChangeTriggerDetails";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPcoDataChangeTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPcoDataChangeTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPcoDataChangeTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPcoDataChangeTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPcoDataChangeTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPcoDataChangeTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPcoDataChangeTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UpdatedData )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPcoDataChangeTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPco * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPcoDataChangeTriggerDetailsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPcoDataChangeTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPcoDataChangeTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UpdatedData(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPcoDataChangeTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandPin[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandPin";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LockState )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinLockState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Format )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxLength )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinLength )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AttemptsRemaining )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *EnableAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin * This,
                  __RPC__in HSTRING currentPin,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *DisableAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin * This,
                  __RPC__in HSTRING currentPin,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *EnterAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin * This,
                  __RPC__in HSTRING currentPin,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *ChangeAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin * This,
                  __RPC__in HSTRING currentPin,
                  __RPC__in HSTRING newPin,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *UnblockAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin * This,
                  __RPC__in HSTRING pinUnblockKey,
                  __RPC__in HSTRING newPin,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinOperationResult * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->get_LockState(This,value) )
    ( (This)->lpVtbl->get_Format(This,value) )
    ( (This)->lpVtbl->get_Enabled(This,value) )
    ( (This)->lpVtbl->get_MaxLength(This,value) )
    ( (This)->lpVtbl->get_MinLength(This,value) )
    ( (This)->lpVtbl->get_AttemptsRemaining(This,value) )
    ( (This)->lpVtbl->EnableAsync(This,currentPin,asyncInfo) )
    ( (This)->lpVtbl->DisableAsync(This,currentPin,asyncInfo) )
    ( (This)->lpVtbl->EnterAsync(This,currentPin,asyncInfo) )
    ( (This)->lpVtbl->ChangeAsync(This,currentPin,newPin,asyncInfo) )
    ( (This)->lpVtbl->UnblockAsync(This,pinUnblockKey,newPin,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandPinLockStateChange[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandPinLockStateChange";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChange * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChange * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChange * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChange * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChange * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChange * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChange * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PinType )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChange * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PinLockState )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChange * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinLockState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChangeVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChange
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChangeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_PinType(This,value) )
    ( (This)->lpVtbl->get_PinLockState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChange;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandPinLockStateChangeTriggerDetails[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandPinLockStateChangeTriggerDetails";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChangeTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChangeTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChangeTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChangeTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChangeTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChangeTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChangeTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PinLockStateChanges )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChangeTriggerDetails * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinLockStateChange * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChangeTriggerDetailsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChangeTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChangeTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PinLockStateChanges(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinLockStateChangeTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandPinManager[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandPinManager";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SupportedPins )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinManager * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandPinType * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPin )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinManager * This,
                  __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandPinType pinType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPin * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinManagerVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinManager
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SupportedPins(This,value) )
    ( (This)->lpVtbl->GetPin(This,pinType,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandPinOperationResult[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandPinOperationResult";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinOperationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinOperationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinOperationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinOperationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinOperationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinOperationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinOperationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSuccessful )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinOperationResult * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AttemptsRemaining )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinOperationResult * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinOperationResultVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinOperationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinOperationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSuccessful(This,value) )
    ( (This)->lpVtbl->get_AttemptsRemaining(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandPinOperationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandRadioStateChange[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandRadioStateChange";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChange * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChange * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChange * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChange * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChange * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChange * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChange * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RadioState )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChange * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandRadioState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChangeVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChange
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChangeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_RadioState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChange;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandRadioStateChangeTriggerDetails[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandRadioStateChangeTriggerDetails";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChangeTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChangeTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChangeTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChangeTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChangeTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChangeTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChangeTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RadioStateChanges )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChangeTriggerDetails * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandRadioStateChange * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChangeTriggerDetailsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChangeTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChangeTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RadioStateChanges(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandRadioStateChangeTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandSarManager";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsBackoffEnabled )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsWiFiHardwareIntegrated )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSarControlledByHardware )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Antennas )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HysteresisTimerPeriod )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TransmissionStateChanged )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CNetworkOperators__CMobileBroadbandSarManager_Windows__CNetworking__CNetworkOperators__CMobileBroadbandTransmissionStateChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TransmissionStateChanged )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *EnableBackoffAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DisableBackoffAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetConfigurationAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This,
                  __RPC__in_opt __FIIterable_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandAntennaSar * antennas,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RevertSarToHardwareControlAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetTransmissionStateChangedHysteresisAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan timerPeriod,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsTransmittingAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StartTransmissionStateMonitoring )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This
        );
    HRESULT ( STDMETHODCALLTYPE *StopTransmissionStateMonitoring )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManagerVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsBackoffEnabled(This,value) )
    ( (This)->lpVtbl->get_IsWiFiHardwareIntegrated(This,value) )
    ( (This)->lpVtbl->get_IsSarControlledByHardware(This,value) )
    ( (This)->lpVtbl->get_Antennas(This,value) )
    ( (This)->lpVtbl->get_HysteresisTimerPeriod(This,value) )
    ( (This)->lpVtbl->add_TransmissionStateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_TransmissionStateChanged(This,token) )
    ( (This)->lpVtbl->EnableBackoffAsync(This,operation) )
    ( (This)->lpVtbl->DisableBackoffAsync(This,operation) )
    ( (This)->lpVtbl->SetConfigurationAsync(This,antennas,operation) )
    ( (This)->lpVtbl->RevertSarToHardwareControlAsync(This,operation) )
    ( (This)->lpVtbl->SetTransmissionStateChangedHysteresisAsync(This,timerPeriod,operation) )
    ( (This)->lpVtbl->GetIsTransmittingAsync(This,operation) )
    ( (This)->lpVtbl->StartTransmissionStateMonitoring(This) )
    ( (This)->lpVtbl->StopTransmissionStateMonitoring(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandSarManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandTransmissionStateChangedEventArgs[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandTransmissionStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandTransmissionStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandTransmissionStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandTransmissionStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandTransmissionStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandTransmissionStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandTransmissionStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandTransmissionStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsTransmitting )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandTransmissionStateChangedEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandTransmissionStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandTransmissionStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandTransmissionStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsTransmitting(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandTransmissionStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandUicc[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandUicc";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUicc * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUicc * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUicc * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUicc * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUicc * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUicc * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SimIccId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUicc * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetUiccAppsAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUicc * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppsResult * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUicc
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SimIccId(This,value) )
    ( (This)->lpVtbl->GetUiccAppsAsync(This,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUicc;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandUiccApp[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandUiccApp";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccApp * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccApp * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccApp * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccApp * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccApp * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccApp * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccApp * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccApp * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CUiccAppKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetRecordDetailsAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccApp * This,
                  __RPC__in_opt __FIIterable_1_UINT32 * uiccFilePath,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppRecordDetailsResult * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *ReadRecordAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccApp * This,
                  __RPC__in_opt __FIIterable_1_UINT32 * uiccFilePath,
                  INT32 recordIndex,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccAppReadRecordResult * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccApp
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->GetRecordDetailsAsync(This,uiccFilePath,asyncInfo) )
    ( (This)->lpVtbl->ReadRecordAsync(This,uiccFilePath,recordIndex,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccApp;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppReadRecordResult[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandUiccAppReadRecordResult";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppReadRecordResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppReadRecordResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppReadRecordResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppReadRecordResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppReadRecordResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppReadRecordResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppReadRecordResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppReadRecordResult * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandUiccAppOperationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppReadRecordResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppReadRecordResultVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppReadRecordResult
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppReadRecordResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Data(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppReadRecordResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppRecordDetailsResult[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandUiccAppRecordDetailsResult";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResult * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandUiccAppOperationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResult * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CUiccAppRecordKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RecordCount )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResult * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RecordSize )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResult * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadAccessCondition )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResult * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CUiccAccessCondition * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WriteAccessCondition )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResult * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CUiccAccessCondition * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResultVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResult
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_RecordCount(This,value) )
    ( (This)->lpVtbl->get_RecordSize(This,value) )
    ( (This)->lpVtbl->get_ReadAccessCondition(This,value) )
    ( (This)->lpVtbl->get_WriteAccessCondition(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppRecordDetailsResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppsResult[] = L"Windows.Networking.NetworkOperators.IMobileBroadbandUiccAppsResult";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppsResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppsResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppsResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppsResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppsResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppsResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppsResult * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CMobileBroadbandUiccAppOperationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UiccApps )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppsResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CMobileBroadbandUiccApp * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppsResultVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppsResult
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppsResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_UiccApps(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIMobileBroadbandUiccAppsResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_INetworkOperatorDataUsageTriggerDetails[] = L"Windows.Networking.NetworkOperators.INetworkOperatorDataUsageTriggerDetails";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorDataUsageTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorDataUsageTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorDataUsageTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorDataUsageTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorDataUsageTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorDataUsageTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorDataUsageTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NotificationKind )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorDataUsageTriggerDetails * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CNetworkOperatorDataUsageNotificationKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorDataUsageTriggerDetailsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorDataUsageTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorDataUsageTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NotificationKind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorDataUsageTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_INetworkOperatorNotificationEventDetails[] = L"Windows.Networking.NetworkOperators.INetworkOperatorNotificationEventDetails";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorNotificationEventDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorNotificationEventDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorNotificationEventDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorNotificationEventDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorNotificationEventDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorNotificationEventDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorNotificationEventDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NotificationType )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorNotificationEventDetails * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CNetworkOperatorEventMessageType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkAccountId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorNotificationEventDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EncodingType )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorNotificationEventDetails * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorNotificationEventDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RuleId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorNotificationEventDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SmsMessage )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorNotificationEventDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSms_CISmsMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorNotificationEventDetailsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorNotificationEventDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorNotificationEventDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NotificationType(This,value) )
    ( (This)->lpVtbl->get_NetworkAccountId(This,value) )
    ( (This)->lpVtbl->get_EncodingType(This,value) )
    ( (This)->lpVtbl->get_Message(This,value) )
    ( (This)->lpVtbl->get_RuleId(This,value) )
    ( (This)->lpVtbl->get_SmsMessage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorNotificationEventDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_INetworkOperatorTetheringAccessPointConfiguration[] = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringAccessPointConfiguration";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringAccessPointConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringAccessPointConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringAccessPointConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringAccessPointConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringAccessPointConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringAccessPointConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringAccessPointConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Ssid )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringAccessPointConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Ssid )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringAccessPointConfiguration * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Passphrase )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringAccessPointConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Passphrase )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringAccessPointConfiguration * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringAccessPointConfigurationVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringAccessPointConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringAccessPointConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Ssid(This,value) )
    ( (This)->lpVtbl->put_Ssid(This,value) )
    ( (This)->lpVtbl->get_Passphrase(This,value) )
    ( (This)->lpVtbl->put_Passphrase(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringAccessPointConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_INetworkOperatorTetheringClient[] = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringClient";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClient * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClient * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClient * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClient * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClient * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClient * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MacAddress )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClient * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HostNames )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClient * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CHostName * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClientVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClient
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClientVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MacAddress(This,value) )
    ( (This)->lpVtbl->get_HostNames(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClient;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_INetworkOperatorTetheringClientManager[] = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringClientManager";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClientManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClientManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClientManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClientManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClientManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClientManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClientManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetTetheringClients )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClientManager * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringClient * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClientManagerVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClientManager
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClientManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetTetheringClients(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringClientManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_INetworkOperatorTetheringEntitlementCheck[] = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringEntitlementCheck";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringEntitlementCheckVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringEntitlementCheck * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringEntitlementCheck * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringEntitlementCheck * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringEntitlementCheck * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringEntitlementCheck * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringEntitlementCheck * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AuthorizeTethering )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringEntitlementCheck * This,
                  boolean allow,
                  __RPC__in HSTRING entitlementFailureReason
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringEntitlementCheckVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringEntitlementCheck
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringEntitlementCheckVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AuthorizeTethering(This,allow,entitlementFailureReason) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringEntitlementCheck;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManager[] = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringManager";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxClientCount )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ClientCount )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TetheringOperationalState )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CTetheringOperationalState * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentAccessPointConfiguration )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringAccessPointConfiguration * * configuration
        );
    HRESULT ( STDMETHODCALLTYPE *ConfigureAccessPointAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringAccessPointConfiguration * configuration,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *StartTetheringAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *StopTetheringAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CNetworkOperatorTetheringOperationResult * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxClientCount(This,value) )
    ( (This)->lpVtbl->get_ClientCount(This,value) )
    ( (This)->lpVtbl->get_TetheringOperationalState(This,value) )
    ( (This)->lpVtbl->GetCurrentAccessPointConfiguration(This,configuration) )
    ( (This)->lpVtbl->ConfigureAccessPointAsync(This,configuration,asyncInfo) )
    ( (This)->lpVtbl->StartTetheringAsync(This,asyncInfo) )
    ( (This)->lpVtbl->StopTetheringAsync(This,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics[] = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringManagerStatics";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetTetheringCapability )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics * This,
                  __RPC__in HSTRING networkAccountId,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CTetheringCapability * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromNetworkAccountId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics * This,
                  __RPC__in HSTRING networkAccountId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager * * ppManager
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetTetheringCapability(This,networkAccountId,value) )
    ( (This)->lpVtbl->CreateFromNetworkAccountId(This,networkAccountId,ppManager) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics2[] = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringManagerStatics2";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetTetheringCapabilityFromConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * profile,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CTetheringCapability * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * profile,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager * * ppManager
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics2Vtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetTetheringCapabilityFromConnectionProfile(This,profile,result) )
    ( (This)->lpVtbl->CreateFromConnectionProfile(This,profile,ppManager) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics3[] = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringManagerStatics3";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateFromConnectionProfileWithTargetAdapter )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * profile,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * adapter,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManager * * ppManager
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics3Vtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromConnectionProfileWithTargetAdapter(This,profile,adapter,ppManager) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringManagerStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_INetworkOperatorTetheringOperationResult[] = L"Windows.Networking.NetworkOperators.INetworkOperatorTetheringOperationResult";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringOperationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringOperationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringOperationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringOperationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringOperationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringOperationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringOperationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringOperationResult * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CTetheringOperationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AdditionalErrorMessage )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringOperationResult * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringOperationResultVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringOperationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringOperationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_AdditionalErrorMessage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CINetworkOperatorTetheringOperationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IProvisionFromXmlDocumentResults[] = L"Windows.Networking.NetworkOperators.IProvisionFromXmlDocumentResults";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionFromXmlDocumentResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionFromXmlDocumentResults * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionFromXmlDocumentResults * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionFromXmlDocumentResults * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionFromXmlDocumentResults * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionFromXmlDocumentResults * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionFromXmlDocumentResults * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllElementsProvisioned )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionFromXmlDocumentResults * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProvisionResultsXml )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionFromXmlDocumentResults * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionFromXmlDocumentResultsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionFromXmlDocumentResults
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionFromXmlDocumentResultsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllElementsProvisioned(This,value) )
    ( (This)->lpVtbl->get_ProvisionResultsXml(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionFromXmlDocumentResults;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IProvisionedProfile[] = L"Windows.Networking.NetworkOperators.IProvisionedProfile";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionedProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionedProfile * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionedProfile * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionedProfile * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionedProfile * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionedProfile * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionedProfile * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *UpdateCost )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionedProfile * This,
                  __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkCostType value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateUsage )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionedProfile * This,
                  __x_ABI_CWindows_CNetworking_CNetworkOperators_CProfileUsage value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionedProfileVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionedProfile
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionedProfileVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->UpdateCost(This,value) )
    ( (This)->lpVtbl->UpdateUsage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionedProfile;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IProvisioningAgent[] = L"Windows.Networking.NetworkOperators.IProvisioningAgent";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgent * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ProvisionFromXmlDocumentAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgent * This,
                  __RPC__in HSTRING provisioningXmlDocument,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CProvisionFromXmlDocumentResults * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *GetProvisionedProfile )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgent * This,
                  __x_ABI_CWindows_CNetworking_CNetworkOperators_CProfileMediaType mediaType,
                  __RPC__in HSTRING profileName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisionedProfile * * provisionedProfile
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgentVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgent
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ProvisionFromXmlDocumentAsync(This,provisioningXmlDocument,asyncInfo) )
    ( (This)->lpVtbl->GetProvisionedProfile(This,mediaType,profileName,provisionedProfile) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IProvisioningAgentStaticMethods[] = L"Windows.Networking.NetworkOperators.IProvisioningAgentStaticMethods";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgentStaticMethodsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgentStaticMethods * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgentStaticMethods * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgentStaticMethods * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgentStaticMethods * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgentStaticMethods * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgentStaticMethods * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromNetworkAccountId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgentStaticMethods * This,
                  __RPC__in HSTRING networkAccountId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgent * * provisioningAgent
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgentStaticMethodsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgentStaticMethods
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgentStaticMethodsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromNetworkAccountId(This,networkAccountId,provisioningAgent) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIProvisioningAgentStaticMethods;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_ITetheringEntitlementCheckTriggerDetails[] = L"Windows.Networking.NetworkOperators.ITetheringEntitlementCheckTriggerDetails";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CITetheringEntitlementCheckTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CITetheringEntitlementCheckTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CITetheringEntitlementCheckTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CITetheringEntitlementCheckTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CITetheringEntitlementCheckTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CITetheringEntitlementCheckTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CITetheringEntitlementCheckTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NetworkAccountId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CITetheringEntitlementCheckTriggerDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *AllowTethering )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CITetheringEntitlementCheckTriggerDetails * This
        );
    HRESULT ( STDMETHODCALLTYPE *DenyTethering )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CITetheringEntitlementCheckTriggerDetails * This,
                  __RPC__in HSTRING entitlementFailureReason
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CITetheringEntitlementCheckTriggerDetailsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CITetheringEntitlementCheckTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CITetheringEntitlementCheckTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NetworkAccountId(This,value) )
    ( (This)->lpVtbl->AllowTethering(This) )
    ( (This)->lpVtbl->DenyTethering(This,entitlementFailureReason) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CITetheringEntitlementCheckTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IUssdMessage[] = L"Windows.Networking.NetworkOperators.IUssdMessage";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DataCodingScheme )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessage * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DataCodingScheme )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessage * This,
                  BYTE value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPayload )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessage * This,
                   __RPC__out UINT32 * __valueSize,
                                                      __RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPayload )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessage * This,
                                 __RPC__in_range(0,0xa0) UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PayloadAsText )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PayloadAsText )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessage * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessageVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DataCodingScheme(This,value) )
    ( (This)->lpVtbl->put_DataCodingScheme(This,value) )
    ( (This)->lpVtbl->GetPayload(This,__valueSize,value) )
    ( (This)->lpVtbl->SetPayload(This,__valueSize,value) )
    ( (This)->lpVtbl->get_PayloadAsText(This,value) )
    ( (This)->lpVtbl->put_PayloadAsText(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IUssdMessageFactory[] = L"Windows.Networking.NetworkOperators.IUssdMessageFactory";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessageFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessageFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessageFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessageFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessageFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessageFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMessage )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessageFactory * This,
                  __RPC__in HSTRING messageText,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessage * * ussdMessage
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessageFactoryVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessageFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateMessage(This,messageText,ussdMessage) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessageFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IUssdReply[] = L"Windows.Networking.NetworkOperators.IUssdReply";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdReplyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdReply * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdReply * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdReply * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdReply * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdReply * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdReply * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResultCode )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdReply * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CNetworkOperators_CUssdResultCode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdReply * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdReplyVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdReply
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdReplyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResultCode(This,value) )
    ( (This)->lpVtbl->get_Message(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdReply;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IUssdSession[] = L"Windows.Networking.NetworkOperators.IUssdSession";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SendMessageAndGetReplyAsync )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSession * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdMessage * message,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CNetworkOperators__CUssdReply * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSession * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSessionVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSession
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SendMessageAndGetReplyAsync(This,message,asyncInfo) )
    ( (This)->lpVtbl->Close(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_NetworkOperators_IUssdSessionStatics[] = L"Windows.Networking.NetworkOperators.IUssdSessionStatics";
typedef struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSessionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSessionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSessionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSessionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSessionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSessionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSessionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromNetworkAccountId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSessionStatics * This,
                  __RPC__in HSTRING networkAccountId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSession * * ussdSession
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromNetworkInterfaceId )(
        __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSessionStatics * This,
                  __RPC__in HSTRING networkInterfaceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSession * * ussdSession
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSessionStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSessionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSessionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromNetworkAccountId(This,networkAccountId,ussdSession) )
    ( (This)->lpVtbl->CreateFromNetworkInterfaceId(This,networkInterfaceId,ussdSession) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CNetworkOperators_CIUssdSessionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_ESim[] = L"Windows.Networking.NetworkOperators.ESim";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_ESimAddedEventArgs[] = L"Windows.Networking.NetworkOperators.ESimAddedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_ESimDiscoverEvent[] = L"Windows.Networking.NetworkOperators.ESimDiscoverEvent";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_ESimDiscoverResult[] = L"Windows.Networking.NetworkOperators.ESimDiscoverResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_ESimDownloadProfileMetadataResult[] = L"Windows.Networking.NetworkOperators.ESimDownloadProfileMetadataResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_ESimManager[] = L"Windows.Networking.NetworkOperators.ESimManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_ESimOperationResult[] = L"Windows.Networking.NetworkOperators.ESimOperationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_ESimPolicy[] = L"Windows.Networking.NetworkOperators.ESimPolicy";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_ESimProfile[] = L"Windows.Networking.NetworkOperators.ESimProfile";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_ESimProfileMetadata[] = L"Windows.Networking.NetworkOperators.ESimProfileMetadata";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_ESimProfilePolicy[] = L"Windows.Networking.NetworkOperators.ESimProfilePolicy";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_ESimRemovedEventArgs[] = L"Windows.Networking.NetworkOperators.ESimRemovedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_ESimServiceInfo[] = L"Windows.Networking.NetworkOperators.ESimServiceInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_ESimUpdatedEventArgs[] = L"Windows.Networking.NetworkOperators.ESimUpdatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_ESimWatcher[] = L"Windows.Networking.NetworkOperators.ESimWatcher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_FdnAccessManager[] = L"Windows.Networking.NetworkOperators.FdnAccessManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_HotspotAuthenticationContext[] = L"Windows.Networking.NetworkOperators.HotspotAuthenticationContext";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_HotspotAuthenticationEventDetails[] = L"Windows.Networking.NetworkOperators.HotspotAuthenticationEventDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_HotspotCredentialsAuthenticationResult[] = L"Windows.Networking.NetworkOperators.HotspotCredentialsAuthenticationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_KnownCSimFilePaths[] = L"Windows.Networking.NetworkOperators.KnownCSimFilePaths";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_KnownRuimFilePaths[] = L"Windows.Networking.NetworkOperators.KnownRuimFilePaths";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_KnownSimFilePaths[] = L"Windows.Networking.NetworkOperators.KnownSimFilePaths";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_KnownUSimFilePaths[] = L"Windows.Networking.NetworkOperators.KnownUSimFilePaths";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandAccount[] = L"Windows.Networking.NetworkOperators.MobileBroadbandAccount";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandAccountEventArgs[] = L"Windows.Networking.NetworkOperators.MobileBroadbandAccountEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandAccountUpdatedEventArgs[] = L"Windows.Networking.NetworkOperators.MobileBroadbandAccountUpdatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandAccountWatcher[] = L"Windows.Networking.NetworkOperators.MobileBroadbandAccountWatcher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandAntennaSar[] = L"Windows.Networking.NetworkOperators.MobileBroadbandAntennaSar";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandCellCdma[] = L"Windows.Networking.NetworkOperators.MobileBroadbandCellCdma";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandCellGsm[] = L"Windows.Networking.NetworkOperators.MobileBroadbandCellGsm";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandCellLte[] = L"Windows.Networking.NetworkOperators.MobileBroadbandCellLte";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandCellTdscdma[] = L"Windows.Networking.NetworkOperators.MobileBroadbandCellTdscdma";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandCellUmts[] = L"Windows.Networking.NetworkOperators.MobileBroadbandCellUmts";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandCellsInfo[] = L"Windows.Networking.NetworkOperators.MobileBroadbandCellsInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandDeviceInformation[] = L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandDeviceService[] = L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceService";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandDeviceServiceCommandResult[] = L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceCommandResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandDeviceServiceCommandSession[] = L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceCommandSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandDeviceServiceDataReceivedEventArgs[] = L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceDataReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandDeviceServiceDataSession[] = L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceDataSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandDeviceServiceInformation[] = L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandDeviceServiceTriggerDetails[] = L"Windows.Networking.NetworkOperators.MobileBroadbandDeviceServiceTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandModem[] = L"Windows.Networking.NetworkOperators.MobileBroadbandModem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandModemConfiguration[] = L"Windows.Networking.NetworkOperators.MobileBroadbandModemConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandModemIsolation[] = L"Windows.Networking.NetworkOperators.MobileBroadbandModemIsolation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandNetwork[] = L"Windows.Networking.NetworkOperators.MobileBroadbandNetwork";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandNetworkRegistrationStateChange[] = L"Windows.Networking.NetworkOperators.MobileBroadbandNetworkRegistrationStateChange";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandNetworkRegistrationStateChangeTriggerDetails[] = L"Windows.Networking.NetworkOperators.MobileBroadbandNetworkRegistrationStateChangeTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandPco[] = L"Windows.Networking.NetworkOperators.MobileBroadbandPco";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandPcoDataChangeTriggerDetails[] = L"Windows.Networking.NetworkOperators.MobileBroadbandPcoDataChangeTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandPin[] = L"Windows.Networking.NetworkOperators.MobileBroadbandPin";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandPinLockStateChange[] = L"Windows.Networking.NetworkOperators.MobileBroadbandPinLockStateChange";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandPinLockStateChangeTriggerDetails[] = L"Windows.Networking.NetworkOperators.MobileBroadbandPinLockStateChangeTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandPinManager[] = L"Windows.Networking.NetworkOperators.MobileBroadbandPinManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandPinOperationResult[] = L"Windows.Networking.NetworkOperators.MobileBroadbandPinOperationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandRadioStateChange[] = L"Windows.Networking.NetworkOperators.MobileBroadbandRadioStateChange";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandRadioStateChangeTriggerDetails[] = L"Windows.Networking.NetworkOperators.MobileBroadbandRadioStateChangeTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandSarManager[] = L"Windows.Networking.NetworkOperators.MobileBroadbandSarManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandTransmissionStateChangedEventArgs[] = L"Windows.Networking.NetworkOperators.MobileBroadbandTransmissionStateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandUicc[] = L"Windows.Networking.NetworkOperators.MobileBroadbandUicc";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandUiccApp[] = L"Windows.Networking.NetworkOperators.MobileBroadbandUiccApp";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandUiccAppReadRecordResult[] = L"Windows.Networking.NetworkOperators.MobileBroadbandUiccAppReadRecordResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandUiccAppRecordDetailsResult[] = L"Windows.Networking.NetworkOperators.MobileBroadbandUiccAppRecordDetailsResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_MobileBroadbandUiccAppsResult[] = L"Windows.Networking.NetworkOperators.MobileBroadbandUiccAppsResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_NetworkOperatorDataUsageTriggerDetails[] = L"Windows.Networking.NetworkOperators.NetworkOperatorDataUsageTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_NetworkOperatorNotificationEventDetails[] = L"Windows.Networking.NetworkOperators.NetworkOperatorNotificationEventDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_NetworkOperatorTetheringAccessPointConfiguration[] = L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringAccessPointConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_NetworkOperatorTetheringClient[] = L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringClient";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_NetworkOperatorTetheringManager[] = L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_NetworkOperatorTetheringOperationResult[] = L"Windows.Networking.NetworkOperators.NetworkOperatorTetheringOperationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_ProvisionFromXmlDocumentResults[] = L"Windows.Networking.NetworkOperators.ProvisionFromXmlDocumentResults";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_ProvisionedProfile[] = L"Windows.Networking.NetworkOperators.ProvisionedProfile";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_ProvisioningAgent[] = L"Windows.Networking.NetworkOperators.ProvisioningAgent";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_TetheringEntitlementCheckTriggerDetails[] = L"Windows.Networking.NetworkOperators.TetheringEntitlementCheckTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_UssdMessage[] = L"Windows.Networking.NetworkOperators.UssdMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_UssdReply[] = L"Windows.Networking.NetworkOperators.UssdReply";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_NetworkOperators_UssdSession[] = L"Windows.Networking.NetworkOperators.UssdSession";
       
       
#pragma clang diagnostic pop
