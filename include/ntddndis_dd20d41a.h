#include <winapifamily.h>
#pragma region App Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#pragma warning(disable:4201)
extern "C" {
#include <ifdef.h>
#include <devpkey.h>
#include <pciprop.h>
#include <ndis/version.h>
            CTL_CODE(FILE_DEVICE_PHYSICAL_NETCARD, request, method, FILE_ANY_ACCESS)
typedef ULONG NDIS_OID, *PNDIS_OID;
typedef struct _NDIS_STATISTICS_VALUE
{
    NDIS_OID Oid;
    ULONG DataLength;
    _Field_size_bytes_(DataLength)
    UCHAR Data[1];
} NDIS_STATISTICS_VALUE;
typedef NDIS_STATISTICS_VALUE UNALIGNED *PNDIS_STATISTICS_VALUE;
typedef _Struct_size_bytes_(Length) struct _NDIS_STATISTICS_VALUE_EX
{
    NDIS_OID Oid;
    ULONG DataLength;
    ULONG Length;
    _Field_size_bytes_(DataLength)
    UCHAR Data[1];
} NDIS_STATISTICS_VALUE_EX;
typedef NDIS_STATISTICS_VALUE_EX UNALIGNED *PNDIS_STATISTICS_VALUE_EX;
typedef struct _NDIS_VAR_DATA_DESC
{
    USHORT Length;
    USHORT MaximumLength;
    ULONG_PTR Offset;
} NDIS_VAR_DATA_DESC, *PNDIS_VAR_DATA_DESC;
#include <guiddef.h>
typedef struct _NDIS_OBJECT_HEADER
{
    UCHAR Type;
    UCHAR Revision;
    USHORT Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER;
typedef enum _NDIS_REQUEST_TYPE
{
    NdisRequestQueryInformation,
    NdisRequestSetInformation,
    NdisRequestQueryStatistics,
    NdisRequestOpen,
    NdisRequestClose,
    NdisRequestSend,
    NdisRequestTransferData,
    NdisRequestReset,
    NdisRequestGeneric1,
    NdisRequestGeneric2,
    NdisRequestGeneric3,
    NdisRequestGeneric4,
} NDIS_REQUEST_TYPE, *PNDIS_REQUEST_TYPE;
typedef struct _NDIS_STATISTICS_INFO
{
    NDIS_OBJECT_HEADER Header;
    ULONG SupportedStatistics;
    ULONG64 ifInDiscards;
    ULONG64 ifInErrors;
    ULONG64 ifHCInOctets;
    ULONG64 ifHCInUcastPkts;
    ULONG64 ifHCInMulticastPkts;
    ULONG64 ifHCInBroadcastPkts;
    ULONG64 ifHCOutOctets;
    ULONG64 ifHCOutUcastPkts;
    ULONG64 ifHCOutMulticastPkts;
    ULONG64 ifHCOutBroadcastPkts;
    ULONG64 ifOutErrors;
    ULONG64 ifOutDiscards;
    ULONG64 ifHCInUcastOctets;
    ULONG64 ifHCInMulticastOctets;
    ULONG64 ifHCInBroadcastOctets;
    ULONG64 ifHCOutUcastOctets;
    ULONG64 ifHCOutMulticastOctets;
    ULONG64 ifHCOutBroadcastOctets;
}NDIS_STATISTICS_INFO, *PNDIS_STATISTICS_INFO;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_STATISTICS_INFO, ifHCOutBroadcastOctets)
typedef enum _NDIS_INTERRUPT_MODERATION
{
    NdisInterruptModerationUnknown,
    NdisInterruptModerationNotSupported,
    NdisInterruptModerationEnabled,
    NdisInterruptModerationDisabled
} NDIS_INTERRUPT_MODERATION, *PNDIS_INTERRUPT_MODERATION;
typedef struct _NDIS_INTERRUPT_MODERATION_PARAMETERS
{
    NDIS_OBJECT_HEADER Header;
    ULONG Flags;
    NDIS_INTERRUPT_MODERATION InterruptModeration;
}NDIS_INTERRUPT_MODERATION_PARAMETERS, *PNDIS_INTERRUPT_MODERATION_PARAMETERS;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_INTERRUPT_MODERATION_PARAMETERS, InterruptModeration)
typedef struct _NDIS_TIMEOUT_DPC_REQUEST_CAPABILITIES
{
    NDIS_OBJECT_HEADER Header;
    ULONG Flags;
    ULONG TimeoutArrayLength;
    ULONG TimeoutArray[1];
}NDIS_TIMEOUT_DPC_REQUEST_CAPABILITIES, *PNDIS_TIMEOUT_DPC_REQUEST_CAPABILITIES;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_TIMEOUT_DPC_REQUEST_CAPABILITIES, TimeoutArray)
typedef struct _NDIS_PCI_DEVICE_CUSTOM_PROPERTIES
{
    NDIS_OBJECT_HEADER Header;
    UINT32 DeviceType;
    UINT32 CurrentSpeedAndMode;
    UINT32 CurrentPayloadSize;
    UINT32 MaxPayloadSize;
    UINT32 MaxReadRequestSize;
    UINT32 CurrentLinkSpeed;
    UINT32 CurrentLinkWidth;
    UINT32 MaxLinkSpeed;
    UINT32 MaxLinkWidth;
    UINT32 PciExpressVersion;
    UINT32 InterruptType;
    UINT32 MaxInterruptMessages;
} NDIS_PCI_DEVICE_CUSTOM_PROPERTIES, *PNDIS_PCI_DEVICE_CUSTOM_PROPERTIES;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_PCI_DEVICE_CUSTOM_PROPERTIES, MaxLinkWidth)
        RTL_SIZEOF_THROUGH_FIELD(NDIS_PCI_DEVICE_CUSTOM_PROPERTIES, MaxInterruptMessages)
typedef enum _NDIS_802_11_STATUS_TYPE
{
    Ndis802_11StatusType_Authentication,
    Ndis802_11StatusType_MediaStreamMode,
    Ndis802_11StatusType_PMKID_CandidateList,
    Ndis802_11StatusTypeMax
} NDIS_802_11_STATUS_TYPE, *PNDIS_802_11_STATUS_TYPE;
typedef UCHAR NDIS_802_11_MAC_ADDRESS[6];
typedef struct _NDIS_802_11_STATUS_INDICATION
{
    NDIS_802_11_STATUS_TYPE StatusType;
} NDIS_802_11_STATUS_INDICATION, *PNDIS_802_11_STATUS_INDICATION;
typedef struct _NDIS_802_11_AUTHENTICATION_REQUEST
{
    ULONG Length;
    NDIS_802_11_MAC_ADDRESS Bssid;
    ULONG Flags;
} NDIS_802_11_AUTHENTICATION_REQUEST, *PNDIS_802_11_AUTHENTICATION_REQUEST;
typedef struct _PMKID_CANDIDATE {
    NDIS_802_11_MAC_ADDRESS BSSID;
    ULONG Flags;
} PMKID_CANDIDATE, *PPMKID_CANDIDATE;
typedef struct _NDIS_802_11_PMKID_CANDIDATE_LIST
{
    ULONG Version;
    ULONG NumCandidates;
    PMKID_CANDIDATE CandidateList[1];
} NDIS_802_11_PMKID_CANDIDATE_LIST, *PNDIS_802_11_PMKID_CANDIDATE_LIST;
typedef enum _NDIS_802_11_NETWORK_TYPE
{
    Ndis802_11FH,
    Ndis802_11DS,
    Ndis802_11OFDM5,
    Ndis802_11OFDM24,
    Ndis802_11Automode,
    Ndis802_11NetworkTypeMax
} NDIS_802_11_NETWORK_TYPE, *PNDIS_802_11_NETWORK_TYPE;
typedef struct _NDIS_802_11_NETWORK_TYPE_LIST
{
    ULONG NumberOfItems;
    NDIS_802_11_NETWORK_TYPE NetworkType [1];
} NDIS_802_11_NETWORK_TYPE_LIST, *PNDIS_802_11_NETWORK_TYPE_LIST;
typedef enum _NDIS_802_11_POWER_MODE
{
    Ndis802_11PowerModeCAM,
    Ndis802_11PowerModeMAX_PSP,
    Ndis802_11PowerModeFast_PSP,
    Ndis802_11PowerModeMax
} NDIS_802_11_POWER_MODE, *PNDIS_802_11_POWER_MODE;
typedef ULONG NDIS_802_11_TX_POWER_LEVEL;
typedef LONG NDIS_802_11_RSSI;
typedef struct _NDIS_802_11_CONFIGURATION_FH
{
    ULONG Length;
    ULONG HopPattern;
    ULONG HopSet;
    ULONG DwellTime;
} NDIS_802_11_CONFIGURATION_FH, *PNDIS_802_11_CONFIGURATION_FH;
typedef struct _NDIS_802_11_CONFIGURATION
{
    ULONG Length;
    ULONG BeaconPeriod;
    ULONG ATIMWindow;
    ULONG DSConfig;
    NDIS_802_11_CONFIGURATION_FH FHConfig;
} NDIS_802_11_CONFIGURATION, *PNDIS_802_11_CONFIGURATION;
typedef struct _NDIS_802_11_STATISTICS
{
    ULONG Length;
    LARGE_INTEGER TransmittedFragmentCount;
    LARGE_INTEGER MulticastTransmittedFrameCount;
    LARGE_INTEGER FailedCount;
    LARGE_INTEGER RetryCount;
    LARGE_INTEGER MultipleRetryCount;
    LARGE_INTEGER RTSSuccessCount;
    LARGE_INTEGER RTSFailureCount;
    LARGE_INTEGER ACKFailureCount;
    LARGE_INTEGER FrameDuplicateCount;
    LARGE_INTEGER ReceivedFragmentCount;
    LARGE_INTEGER MulticastReceivedFrameCount;
    LARGE_INTEGER FCSErrorCount;
    LARGE_INTEGER TKIPLocalMICFailures;
    LARGE_INTEGER TKIPICVErrorCount;
    LARGE_INTEGER TKIPCounterMeasuresInvoked;
    LARGE_INTEGER TKIPReplays;
    LARGE_INTEGER CCMPFormatErrors;
    LARGE_INTEGER CCMPReplays;
    LARGE_INTEGER CCMPDecryptErrors;
    LARGE_INTEGER FourWayHandshakeFailures;
    LARGE_INTEGER WEPUndecryptableCount;
    LARGE_INTEGER WEPICVErrorCount;
    LARGE_INTEGER DecryptSuccessCount;
    LARGE_INTEGER DecryptFailureCount;
} NDIS_802_11_STATISTICS, *PNDIS_802_11_STATISTICS;
typedef ULONG NDIS_802_11_KEY_INDEX;
typedef ULONGLONG NDIS_802_11_KEY_RSC;
typedef struct _NDIS_802_11_KEY
{
    ULONG Length;
    ULONG KeyIndex;
    ULONG KeyLength;
    NDIS_802_11_MAC_ADDRESS BSSID;
    NDIS_802_11_KEY_RSC KeyRSC;
    _Field_size_bytes_(KeyLength) UCHAR KeyMaterial[1];
} NDIS_802_11_KEY, *PNDIS_802_11_KEY;
typedef struct _NDIS_802_11_REMOVE_KEY
{
    ULONG Length;
    ULONG KeyIndex;
    NDIS_802_11_MAC_ADDRESS BSSID;
} NDIS_802_11_REMOVE_KEY, *PNDIS_802_11_REMOVE_KEY;
typedef struct _NDIS_802_11_WEP
{
    ULONG Length;
    ULONG KeyIndex;
    ULONG KeyLength;
    UCHAR KeyMaterial[1];
} NDIS_802_11_WEP, *PNDIS_802_11_WEP;
typedef enum _NDIS_802_11_NETWORK_INFRASTRUCTURE
{
    Ndis802_11IBSS,
    Ndis802_11Infrastructure,
    Ndis802_11AutoUnknown,
    Ndis802_11InfrastructureMax
} NDIS_802_11_NETWORK_INFRASTRUCTURE, *PNDIS_802_11_NETWORK_INFRASTRUCTURE;
typedef enum _NDIS_802_11_AUTHENTICATION_MODE
{
    Ndis802_11AuthModeOpen,
    Ndis802_11AuthModeShared,
    Ndis802_11AuthModeAutoSwitch,
    Ndis802_11AuthModeWPA,
    Ndis802_11AuthModeWPAPSK,
    Ndis802_11AuthModeWPANone,
    Ndis802_11AuthModeWPA2,
    Ndis802_11AuthModeWPA2PSK,
    Ndis802_11AuthModeWPA3,
    Ndis802_11AuthModeWPA3SAE,
    Ndis802_11AuthModeMax
} NDIS_802_11_AUTHENTICATION_MODE, *PNDIS_802_11_AUTHENTICATION_MODE;
typedef UCHAR NDIS_802_11_RATES[NDIS_802_11_LENGTH_RATES];
typedef UCHAR NDIS_802_11_RATES_EX[NDIS_802_11_LENGTH_RATES_EX];
typedef struct _NDIS_802_11_SSID
{
    ULONG SsidLength;
    UCHAR Ssid[NDIS_802_11_LENGTH_SSID];
} NDIS_802_11_SSID, *PNDIS_802_11_SSID;
typedef struct _NDIS_WLAN_BSSID
{
    ULONG Length;
    NDIS_802_11_MAC_ADDRESS MacAddress;
    UCHAR Reserved[2];
    NDIS_802_11_SSID Ssid;
    ULONG Privacy;
    NDIS_802_11_RSSI Rssi;
    NDIS_802_11_NETWORK_TYPE NetworkTypeInUse;
    NDIS_802_11_CONFIGURATION Configuration;
    NDIS_802_11_NETWORK_INFRASTRUCTURE InfrastructureMode;
    NDIS_802_11_RATES SupportedRates;
} NDIS_WLAN_BSSID, *PNDIS_WLAN_BSSID;
typedef struct _NDIS_802_11_BSSID_LIST
{
    ULONG NumberOfItems;
    NDIS_WLAN_BSSID Bssid[1];
} NDIS_802_11_BSSID_LIST, *PNDIS_802_11_BSSID_LIST;
typedef struct _NDIS_WLAN_BSSID_EX
{
    ULONG Length;
    NDIS_802_11_MAC_ADDRESS MacAddress;
    UCHAR Reserved[2];
    NDIS_802_11_SSID Ssid;
    ULONG Privacy;
    NDIS_802_11_RSSI Rssi;
    NDIS_802_11_NETWORK_TYPE NetworkTypeInUse;
    NDIS_802_11_CONFIGURATION Configuration;
    NDIS_802_11_NETWORK_INFRASTRUCTURE InfrastructureMode;
    NDIS_802_11_RATES_EX SupportedRates;
    ULONG IELength;
    UCHAR IEs[1];
} NDIS_WLAN_BSSID_EX, *PNDIS_WLAN_BSSID_EX;
typedef struct _NDIS_802_11_BSSID_LIST_EX
{
    ULONG NumberOfItems;
    NDIS_WLAN_BSSID_EX Bssid[1];
} NDIS_802_11_BSSID_LIST_EX, *PNDIS_802_11_BSSID_LIST_EX;
typedef struct _NDIS_802_11_FIXED_IEs
{
    UCHAR Timestamp[8];
    USHORT BeaconInterval;
    USHORT Capabilities;
} NDIS_802_11_FIXED_IEs, *PNDIS_802_11_FIXED_IEs;
typedef struct _NDIS_802_11_VARIABLE_IEs
{
    UCHAR ElementID;
    UCHAR Length;
    UCHAR data[1];
} NDIS_802_11_VARIABLE_IEs, *PNDIS_802_11_VARIABLE_IEs;
typedef ULONG NDIS_802_11_FRAGMENTATION_THRESHOLD;
typedef ULONG NDIS_802_11_RTS_THRESHOLD;
typedef ULONG NDIS_802_11_ANTENNA;
typedef enum _NDIS_802_11_PRIVACY_FILTER
{
    Ndis802_11PrivFilterAcceptAll,
    Ndis802_11PrivFilter8021xWEP
} NDIS_802_11_PRIVACY_FILTER, *PNDIS_802_11_PRIVACY_FILTER;
typedef enum _NDIS_802_11_WEP_STATUS
{
    Ndis802_11WEPEnabled,
    Ndis802_11Encryption1Enabled = Ndis802_11WEPEnabled,
    Ndis802_11WEPDisabled,
    Ndis802_11EncryptionDisabled = Ndis802_11WEPDisabled,
    Ndis802_11WEPKeyAbsent,
    Ndis802_11Encryption1KeyAbsent = Ndis802_11WEPKeyAbsent,
    Ndis802_11WEPNotSupported,
    Ndis802_11EncryptionNotSupported = Ndis802_11WEPNotSupported,
    Ndis802_11Encryption2Enabled,
    Ndis802_11Encryption2KeyAbsent,
    Ndis802_11Encryption3Enabled,
    Ndis802_11Encryption3KeyAbsent
} NDIS_802_11_WEP_STATUS, *PNDIS_802_11_WEP_STATUS,
  NDIS_802_11_ENCRYPTION_STATUS, *PNDIS_802_11_ENCRYPTION_STATUS;
typedef enum _NDIS_802_11_RELOAD_DEFAULTS
{
    Ndis802_11ReloadWEPKeys
} NDIS_802_11_RELOAD_DEFAULTS, *PNDIS_802_11_RELOAD_DEFAULTS;
typedef struct _NDIS_802_11_AI_REQFI
{
    USHORT Capabilities;
    USHORT ListenInterval;
    NDIS_802_11_MAC_ADDRESS CurrentAPAddress;
} NDIS_802_11_AI_REQFI, *PNDIS_802_11_AI_REQFI;
typedef struct _NDIS_802_11_AI_RESFI
{
    USHORT Capabilities;
    USHORT StatusCode;
    USHORT AssociationId;
} NDIS_802_11_AI_RESFI, *PNDIS_802_11_AI_RESFI;
typedef struct _NDIS_802_11_ASSOCIATION_INFORMATION
{
    ULONG Length;
    USHORT AvailableRequestFixedIEs;
    NDIS_802_11_AI_REQFI RequestFixedIEs;
    ULONG RequestIELength;
    ULONG OffsetRequestIEs;
    USHORT AvailableResponseFixedIEs;
    NDIS_802_11_AI_RESFI ResponseFixedIEs;
    ULONG ResponseIELength;
    ULONG OffsetResponseIEs;
} NDIS_802_11_ASSOCIATION_INFORMATION, *PNDIS_802_11_ASSOCIATION_INFORMATION;
typedef struct _NDIS_802_11_AUTHENTICATION_EVENT
{
    NDIS_802_11_STATUS_INDICATION Status;
    NDIS_802_11_AUTHENTICATION_REQUEST Request[1];
} NDIS_802_11_AUTHENTICATION_EVENT, *PNDIS_802_11_AUTHENTICATION_EVENT;
typedef struct _NDIS_802_11_TEST
{
    ULONG Length;
    ULONG Type;
    union
    {
        NDIS_802_11_AUTHENTICATION_EVENT AuthenticationEvent;
        NDIS_802_11_RSSI RssiTrigger;
    };
} NDIS_802_11_TEST, *PNDIS_802_11_TEST;
typedef enum _NDIS_802_11_MEDIA_STREAM_MODE
{
    Ndis802_11MediaStreamOff,
    Ndis802_11MediaStreamOn,
} NDIS_802_11_MEDIA_STREAM_MODE, *PNDIS_802_11_MEDIA_STREAM_MODE;
typedef UCHAR NDIS_802_11_PMKID_VALUE[16];
typedef struct _BSSID_INFO
{
    NDIS_802_11_MAC_ADDRESS BSSID;
    NDIS_802_11_PMKID_VALUE PMKID;
} BSSID_INFO, *PBSSID_INFO;
typedef struct _NDIS_802_11_PMKID
{
    ULONG Length;
    ULONG BSSIDInfoCount;
    BSSID_INFO BSSIDInfo[1];
} NDIS_802_11_PMKID, *PNDIS_802_11_PMKID;
typedef struct _NDIS_802_11_AUTHENTICATION_ENCRYPTION
{
    NDIS_802_11_AUTHENTICATION_MODE AuthModeSupported;
    NDIS_802_11_ENCRYPTION_STATUS EncryptStatusSupported;
} NDIS_802_11_AUTHENTICATION_ENCRYPTION, *PNDIS_802_11_AUTHENTICATION_ENCRYPTION;
typedef struct _NDIS_802_11_CAPABILITY
{
    ULONG Length;
    ULONG Version;
    ULONG NoOfPMKIDs;
    ULONG NoOfAuthEncryptPairsSupported;
    NDIS_802_11_AUTHENTICATION_ENCRYPTION AuthenticationEncryptionSupported[1];
} NDIS_802_11_CAPABILITY, *PNDIS_802_11_CAPABILITY;
typedef struct _NDIS_802_11_NON_BCAST_SSID_LIST
{
    ULONG NumberOfItems;
    NDIS_802_11_SSID Non_Bcast_Ssid[1];
} NDIS_802_11_NON_BCAST_SSID_LIST, *PNDIS_802_11_NON_BCAST_SSID_LIST;
typedef enum _NDIS_802_11_RADIO_STATUS
{
    Ndis802_11RadioStatusOn,
    Ndis802_11RadioStatusHardwareOff,
    Ndis802_11RadioStatusSoftwareOff,
    Ndis802_11RadioStatusHardwareSoftwareOff,
    Ndis802_11RadioStatusMax
}
NDIS_802_11_RADIO_STATUS, *PNDIS_802_11_RADIO_STATUS;
typedef struct NDIS_CO_DEVICE_PROFILE
{
    NDIS_VAR_DATA_DESC DeviceDescription;
    NDIS_VAR_DATA_DESC DevSpecificInfo;
    ULONG ulTAPISupplementaryPassThru;
    ULONG ulAddressModes;
    ULONG ulNumAddresses;
    ULONG ulBearerModes;
    ULONG ulMaxTxRate;
    ULONG ulMinTxRate;
    ULONG ulMaxRxRate;
    ULONG ulMinRxRate;
    ULONG ulMediaModes;
    ULONG ulGenerateToneModes;
    ULONG ulGenerateToneMaxNumFreq;
    ULONG ulGenerateDigitModes;
    ULONG ulMonitorToneMaxNumFreq;
    ULONG ulMonitorToneMaxNumEntries;
    ULONG ulMonitorDigitModes;
    ULONG ulGatherDigitsMinTimeout;
    ULONG ulGatherDigitsMaxTimeout;
    ULONG ulDevCapFlags;
    ULONG ulMaxNumActiveCalls;
    ULONG ulAnswerMode;
    ULONG ulUUIAcceptSize;
    ULONG ulUUIAnswerSize;
    ULONG ulUUIMakeCallSize;
    ULONG ulUUIDropSize;
    ULONG ulUUISendUserUserInfoSize;
    ULONG ulUUICallInfoSize;
} NDIS_CO_DEVICE_PROFILE, *PNDIS_CO_DEVICE_PROFILE;
typedef ULONG IPAddr, IPMask;
typedef ULONG SPI_TYPE;
typedef enum _OFFLOAD_OPERATION_E
{
    AUTHENTICATE = 1,
    ENCRYPT
}
    OFFLOAD_OPERATION_E;
typedef struct _OFFLOAD_ALGO_INFO
{
    ULONG algoIdentifier;
    ULONG algoKeylen;
    ULONG algoRounds;
}
    OFFLOAD_ALGO_INFO,
    *POFFLOAD_ALGO_INFO;
typedef enum _OFFLOAD_CONF_ALGO
{
    OFFLOAD_IPSEC_CONF_NONE,
    OFFLOAD_IPSEC_CONF_DES,
    OFFLOAD_IPSEC_CONF_RESERVED,
    OFFLOAD_IPSEC_CONF_3_DES,
    OFFLOAD_IPSEC_CONF_MAX
}
    OFFLOAD_CONF_ALGO;
typedef enum _OFFLOAD_INTEGRITY_ALGO
{
    OFFLOAD_IPSEC_INTEGRITY_NONE,
    OFFLOAD_IPSEC_INTEGRITY_MD5,
    OFFLOAD_IPSEC_INTEGRITY_SHA,
    OFFLOAD_IPSEC_INTEGRITY_MAX
}
    OFFLOAD_INTEGRITY_ALGO;
typedef struct _OFFLOAD_SECURITY_ASSOCIATION
{
    OFFLOAD_OPERATION_E Operation;
    SPI_TYPE SPI;
    OFFLOAD_ALGO_INFO IntegrityAlgo;
    OFFLOAD_ALGO_INFO ConfAlgo;
    OFFLOAD_ALGO_INFO Reserved;
}
    OFFLOAD_SECURITY_ASSOCIATION,
    *POFFLOAD_SECURITY_ASSOCIATION;
typedef struct _OFFLOAD_IPSEC_ADD_SA
{
    IPAddr SrcAddr;
    IPMask SrcMask;
    IPAddr DestAddr;
    IPMask DestMask;
    ULONG Protocol;
    USHORT SrcPort;
    USHORT DestPort;
    IPAddr SrcTunnelAddr;
    IPAddr DestTunnelAddr;
    USHORT Flags;
    SHORT NumSAs;
    OFFLOAD_SECURITY_ASSOCIATION SecAssoc[OFFLOAD_MAX_SAS];
    HANDLE OffloadHandle;
    ULONG KeyLen;
    UCHAR KeyMat[1];
} OFFLOAD_IPSEC_ADD_SA, *POFFLOAD_IPSEC_ADD_SA;
typedef struct _OFFLOAD_IPSEC_DELETE_SA
{
    HANDLE OffloadHandle;
} OFFLOAD_IPSEC_DELETE_SA, *POFFLOAD_IPSEC_DELETE_SA;
typedef enum _UDP_ENCAP_TYPE
{
    OFFLOAD_IPSEC_UDPESP_ENCAPTYPE_IKE,
    OFFLOAD_IPSEC_UDPESP_ENCAPTYPE_OTHER
} UDP_ENCAP_TYPE, * PUDP_ENCAP_TYPE;
typedef struct _OFFLOAD_IPSEC_UDPESP_ENCAPTYPE_ENTRY
{
    UDP_ENCAP_TYPE UdpEncapType;
    USHORT DstEncapPort;
} OFFLOAD_IPSEC_UDPESP_ENCAPTYPE_ENTRY, * POFFLOAD_IPSEC_UDPESP_ENCAPTYPE_ENTRY;
typedef struct _OFFLOAD_IPSEC_ADD_UDPESP_SA
{
    IPAddr SrcAddr;
    IPMask SrcMask;
    IPAddr DstAddr;
    IPMask DstMask;
    ULONG Protocol;
    USHORT SrcPort;
    USHORT DstPort;
    IPAddr SrcTunnelAddr;
    IPAddr DstTunnelAddr;
    USHORT Flags;
    SHORT NumSAs;
    OFFLOAD_SECURITY_ASSOCIATION SecAssoc[OFFLOAD_MAX_SAS];
    HANDLE OffloadHandle;
    OFFLOAD_IPSEC_UDPESP_ENCAPTYPE_ENTRY EncapTypeEntry;
    HANDLE EncapTypeEntryOffldHandle;
    ULONG KeyLen;
    UCHAR KeyMat[1];
} OFFLOAD_IPSEC_ADD_UDPESP_SA, * POFFLOAD_IPSEC_ADD_UDPESP_SA;
typedef struct _OFFLOAD_IPSEC_DELETE_UDPESP_SA
{
    HANDLE OffloadHandle;
    HANDLE EncapTypeEntryOffldHandle;
} OFFLOAD_IPSEC_DELETE_UDPESP_SA, * POFFLOAD_IPSEC_DELETE_UDPESP_SA;
typedef ULONG NDIS_VLAN_ID;
typedef enum _NDIS_MEDIUM
{
    NdisMedium802_3,
    NdisMedium802_5,
    NdisMediumFddi,
    NdisMediumWan,
    NdisMediumLocalTalk,
    NdisMediumDix,
    NdisMediumArcnetRaw,
    NdisMediumArcnet878_2,
    NdisMediumAtm,
    NdisMediumWirelessWan,
    NdisMediumIrda,
    NdisMediumBpc,
    NdisMediumCoWan,
    NdisMedium1394,
    NdisMediumInfiniBand,
    NdisMediumTunnel,
    NdisMediumNative802_11,
    NdisMediumLoopback,
    NdisMediumWiMAX,
    NdisMediumIP,
    NdisMediumMax
} NDIS_MEDIUM, *PNDIS_MEDIUM;
typedef enum _NDIS_PHYSICAL_MEDIUM
{
    NdisPhysicalMediumUnspecified,
    NdisPhysicalMediumWirelessLan,
    NdisPhysicalMediumCableModem,
    NdisPhysicalMediumPhoneLine,
    NdisPhysicalMediumPowerLine,
    NdisPhysicalMediumDSL,
    NdisPhysicalMediumFibreChannel,
    NdisPhysicalMedium1394,
    NdisPhysicalMediumWirelessWan,
    NdisPhysicalMediumNative802_11,
    NdisPhysicalMediumBluetooth,
    NdisPhysicalMediumInfiniband,
    NdisPhysicalMediumWiMax,
    NdisPhysicalMediumUWB,
    NdisPhysicalMedium802_3,
    NdisPhysicalMedium802_5,
    NdisPhysicalMediumIrda,
    NdisPhysicalMediumWiredWAN,
    NdisPhysicalMediumWiredCoWan,
    NdisPhysicalMediumOther,
    NdisPhysicalMediumNative802_15_4,
    NdisPhysicalMediumMax
} NDIS_PHYSICAL_MEDIUM, *PNDIS_PHYSICAL_MEDIUM;
typedef struct _TRANSPORT_HEADER_OFFSET
{
    USHORT ProtocolType;
    USHORT HeaderOffset;
} TRANSPORT_HEADER_OFFSET, *PTRANSPORT_HEADER_OFFSET;
typedef struct _NETWORK_ADDRESS
{
    USHORT AddressLength;
    USHORT AddressType;
    UCHAR Address[1];
} NETWORK_ADDRESS, *PNETWORK_ADDRESS;
typedef struct _NETWORK_ADDRESS_LIST
{
    LONG AddressCount;
    USHORT AddressType;
    NETWORK_ADDRESS Address[1];
} NETWORK_ADDRESS_LIST, *PNETWORK_ADDRESS_LIST;
typedef struct _NETWORK_ADDRESS_IP
{
    USHORT sin_port;
    ULONG in_addr;
    UCHAR sin_zero[8];
} NETWORK_ADDRESS_IP, *PNETWORK_ADDRESS_IP;
typedef struct _NETWORK_ADDRESS_IP6 {
    USHORT sin6_port;
    ULONG sin6_flowinfo;
    USHORT sin6_addr[8];
    ULONG sin6_scope_id;
} NETWORK_ADDRESS_IP6, *PNETWORK_ADDRESS_IP6;
typedef struct _NETWORK_ADDRESS_IPX
{
    ULONG NetworkAddress;
    UCHAR NodeAddress[6];
    USHORT Socket;
} NETWORK_ADDRESS_IPX, *PNETWORK_ADDRESS_IPX;
typedef enum _NDIS_HARDWARE_STATUS
{
    NdisHardwareStatusReady,
    NdisHardwareStatusInitializing,
    NdisHardwareStatusReset,
    NdisHardwareStatusClosing,
    NdisHardwareStatusNotReady
} NDIS_HARDWARE_STATUS, *PNDIS_HARDWARE_STATUS;
typedef struct _GEN_GET_TIME_CAPS
{
    ULONG Flags;
    ULONG ClockPrecision;
} GEN_GET_TIME_CAPS, *PGEN_GET_TIME_CAPS;
typedef struct _GEN_GET_NETCARD_TIME
{
    ULONGLONG ReadTime;
} GEN_GET_NETCARD_TIME, *PGEN_GET_NETCARD_TIME;
typedef struct _NDIS_PM_PACKET_PATTERN
{
    ULONG Priority;
    ULONG Reserved;
    ULONG MaskSize;
    ULONG PatternOffset;
    ULONG PatternSize;
    ULONG PatternFlags;
} NDIS_PM_PACKET_PATTERN, *PNDIS_PM_PACKET_PATTERN;
typedef enum _NDIS_DEVICE_POWER_STATE
{
    NdisDeviceStateUnspecified = 0,
    NdisDeviceStateD0,
    NdisDeviceStateD1,
    NdisDeviceStateD2,
    NdisDeviceStateD3,
    NdisDeviceStateMaximum
} NDIS_DEVICE_POWER_STATE, *PNDIS_DEVICE_POWER_STATE;
typedef struct _NDIS_PM_WAKE_UP_CAPABILITIES
{
    NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp;
    NDIS_DEVICE_POWER_STATE MinPatternWakeUp;
    NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp;
} NDIS_PM_WAKE_UP_CAPABILITIES, *PNDIS_PM_WAKE_UP_CAPABILITIES;
typedef struct _NDIS_PNP_CAPABILITIES
{
    ULONG Flags;
    NDIS_PM_WAKE_UP_CAPABILITIES WakeUpCapabilities;
} NDIS_PNP_CAPABILITIES, *PNDIS_PNP_CAPABILITIES;
typedef enum _NDIS_FDDI_ATTACHMENT_TYPE
{
    NdisFddiTypeIsolated = 1,
    NdisFddiTypeLocalA,
    NdisFddiTypeLocalB,
    NdisFddiTypeLocalAB,
    NdisFddiTypeLocalS,
    NdisFddiTypeWrapA,
    NdisFddiTypeWrapB,
    NdisFddiTypeWrapAB,
    NdisFddiTypeWrapS,
    NdisFddiTypeCWrapA,
    NdisFddiTypeCWrapB,
    NdisFddiTypeCWrapS,
    NdisFddiTypeThrough
} NDIS_FDDI_ATTACHMENT_TYPE, *PNDIS_FDDI_ATTACHMENT_TYPE;
typedef enum _NDIS_FDDI_RING_MGT_STATE
{
    NdisFddiRingIsolated = 1,
    NdisFddiRingNonOperational,
    NdisFddiRingOperational,
    NdisFddiRingDetect,
    NdisFddiRingNonOperationalDup,
    NdisFddiRingOperationalDup,
    NdisFddiRingDirected,
    NdisFddiRingTrace
} NDIS_FDDI_RING_MGT_STATE, *PNDIS_FDDI_RING_MGT_STATE;
typedef enum _NDIS_FDDI_LCONNECTION_STATE
{
    NdisFddiStateOff = 1,
    NdisFddiStateBreak,
    NdisFddiStateTrace,
    NdisFddiStateConnect,
    NdisFddiStateNext,
    NdisFddiStateSignal,
    NdisFddiStateJoin,
    NdisFddiStateVerify,
    NdisFddiStateActive,
    NdisFddiStateMaintenance
} NDIS_FDDI_LCONNECTION_STATE, *PNDIS_FDDI_LCONNECTION_STATE;
typedef enum _NDIS_WAN_MEDIUM_SUBTYPE
{
    NdisWanMediumHub,
    NdisWanMediumX_25,
    NdisWanMediumIsdn,
    NdisWanMediumSerial,
    NdisWanMediumFrameRelay,
    NdisWanMediumAtm,
    NdisWanMediumSonet,
    NdisWanMediumSW56K,
    NdisWanMediumPPTP,
    NdisWanMediumL2TP,
    NdisWanMediumIrda,
    NdisWanMediumParallel,
    NdisWanMediumPppoe,
    NdisWanMediumSSTP,
    NdisWanMediumAgileVPN,
    NdisWanMediumGre,
    NdisWanMediumSubTypeMax
} NDIS_WAN_MEDIUM_SUBTYPE, *PNDIS_WAN_MEDIUM_SUBTYPE;
typedef enum _NDIS_WAN_HEADER_FORMAT
{
    NdisWanHeaderNative,
    NdisWanHeaderEthernet
} NDIS_WAN_HEADER_FORMAT, *PNDIS_WAN_HEADER_FORMAT;
typedef enum _NDIS_WAN_QUALITY
{
    NdisWanRaw,
    NdisWanErrorControl,
    NdisWanReliable
} NDIS_WAN_QUALITY, *PNDIS_WAN_QUALITY;
typedef struct _NDIS_WAN_PROTOCOL_CAPS
{
    _In_ ULONG Flags;
    _In_ ULONG Reserved;
} NDIS_WAN_PROTOCOL_CAPS, *PNDIS_WAN_PROTOCOL_CAPS;
typedef enum _NDIS_802_5_RING_STATE
{
    NdisRingStateOpened = 1,
    NdisRingStateClosed,
    NdisRingStateOpening,
    NdisRingStateClosing,
    NdisRingStateOpenFailure,
    NdisRingStateRingFailure
} NDIS_802_5_RING_STATE, *PNDIS_802_5_RING_STATE;
typedef enum _NDIS_MEDIA_STATE
{
    NdisMediaStateConnected,
    NdisMediaStateDisconnected
} NDIS_MEDIA_STATE, *PNDIS_MEDIA_STATE;
typedef ULONG Priority_802_3;
typedef struct _NDIS_CO_LINK_SPEED
{
    ULONG Outbound;
    ULONG Inbound;
} NDIS_CO_LINK_SPEED, *PNDIS_CO_LINK_SPEED;
typedef struct _NDIS_LINK_SPEED
{
    ULONG64 XmitLinkSpeed;
    ULONG64 RcvLinkSpeed;
} NDIS_LINK_SPEED, *PNDIS_LINK_SPEED;
typedef _Return_type_success_(return >= 0) int NDIS_STATUS, *PNDIS_STATUS;
#include <windot11.h>
typedef struct _NDIS_GUID
{
    GUID Guid;
    union
    {
        NDIS_OID Oid;
        NDIS_STATUS Status;
    };
    ULONG Size;
    ULONG Flags;
} NDIS_GUID, *PNDIS_GUID;
typedef struct _NDIS_IRDA_PACKET_INFO
{
    ULONG ExtraBOFs;
    ULONG MinTurnAroundTime;
} NDIS_IRDA_PACKET_INFO, *PNDIS_IRDA_PACKET_INFO;
{ \
    (_pNetLuid)->Info.IfType = _IfType; \
    (_pNetLuid)->Info.NetLuidIndex = _NetLuidIndex; \
    (_pNetLuid)->Info.Reserved = 0; \
}
typedef IF_COUNTED_STRING NDIS_IF_COUNTED_STRING, *PNDIS_IF_COUNTED_STRING;
typedef IF_PHYSICAL_ADDRESS NDIS_IF_PHYSICAL_ADDRESS, *PNDIS_IF_PHYSICAL_ADDRESS;
typedef NET_IF_MEDIA_CONNECT_STATE NDIS_MEDIA_CONNECT_STATE, *PNDIS_MEDIA_CONNECT_STATE;
typedef NET_IF_MEDIA_DUPLEX_STATE NDIS_MEDIA_DUPLEX_STATE, *PNDIS_MEDIA_DUPLEX_STATE;
typedef enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS
{
    NdisPauseFunctionsUnsupported,
    NdisPauseFunctionsSendOnly,
    NdisPauseFunctionsReceiveOnly,
    NdisPauseFunctionsSendAndReceive,
    NdisPauseFunctionsUnknown
} NDIS_SUPPORTED_PAUSE_FUNCTIONS, *PNDIS_SUPPORTED_PAUSE_FUNCTIONS;
typedef struct _NDIS_LINK_STATE
{
    NDIS_OBJECT_HEADER Header;
    NDIS_MEDIA_CONNECT_STATE MediaConnectState;
    NDIS_MEDIA_DUPLEX_STATE MediaDuplexState;
    ULONG64 XmitLinkSpeed;
    ULONG64 RcvLinkSpeed;
    NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctions;
    ULONG AutoNegotiationFlags;
} NDIS_LINK_STATE, *PNDIS_LINK_STATE;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_LINK_STATE, AutoNegotiationFlags)
typedef struct _NDIS_LINK_PARAMETERS
{
    NDIS_OBJECT_HEADER Header;
    NDIS_MEDIA_DUPLEX_STATE MediaDuplexState;
    ULONG64 XmitLinkSpeed;
    ULONG64 RcvLinkSpeed;
    NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctions;
    ULONG AutoNegotiationFlags;
} NDIS_LINK_PARAMETERS, *PNDIS_LINK_PARAMETERS;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_LINK_PARAMETERS, AutoNegotiationFlags)
typedef struct _NDIS_OPER_STATE
{
    NDIS_OBJECT_HEADER Header;
    NET_IF_OPER_STATUS OperationalStatus;
    ULONG OperationalStatusFlags;
} NDIS_OPER_STATE, *PNDIS_OPER_STATE;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_OPER_STATE, OperationalStatusFlags)
typedef struct _NDIS_IP_OPER_STATUS
{
    ULONG AddressFamily;
    NET_IF_OPER_STATUS OperationalStatus;
    ULONG OperationalStatusFlags;
} NDIS_IP_OPER_STATUS, *PNDIS_IP_OPER_STATUS;
typedef struct _NDIS_IP_OPER_STATUS_INFO
{
    NDIS_OBJECT_HEADER Header;
    ULONG Flags;
    ULONG NumberofAddressFamiliesReturned;
    NDIS_IP_OPER_STATUS IpOperationalStatus[MAXIMUM_IP_OPER_STATUS_ADDRESS_FAMILIES_SUPPORTED];
} NDIS_IP_OPER_STATUS_INFO, *PNDIS_IP_OPER_STATUS_INFO;
        FIELD_OFFSET(NDIS_IP_OPER_STATUS_INFO, IpOperationalStatus) + \
        MAXIMUM_IP_OPER_STATUS_ADDRESS_FAMILIES_SUPPORTED * sizeof(NDIS_IP_OPER_STATUS)
typedef struct _NDIS_IP_OPER_STATE
{
    NDIS_OBJECT_HEADER Header;
    ULONG Flags;
    NDIS_IP_OPER_STATUS IpOperationalStatus;
} NDIS_IP_OPER_STATE, *PNDIS_IP_OPER_STATE;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_IP_OPER_STATE, IpOperationalStatus)
typedef struct _NDIS_OFFLOAD_PARAMETERS
{
    NDIS_OBJECT_HEADER Header;
    UCHAR IPv4Checksum;
    UCHAR TCPIPv4Checksum;
    UCHAR UDPIPv4Checksum;
    UCHAR TCPIPv6Checksum;
    UCHAR UDPIPv6Checksum;
    UCHAR LsoV1;
    UCHAR IPsecV1;
    UCHAR LsoV2IPv4;
    UCHAR LsoV2IPv6;
    UCHAR TcpConnectionIPv4;
    UCHAR TcpConnectionIPv6;
    ULONG Flags;
} NDIS_OFFLOAD_PARAMETERS, *PNDIS_OFFLOAD_PARAMETERS;
#pragma warning(push)
#pragma warning(disable:4214)
typedef struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V1
{
    struct
    {
        ULONG Encapsulation;
        ULONG MaxOffLoadSize;
        ULONG MinSegmentCount;
        ULONG TcpOptions:2;
        ULONG IpOptions:2;
    } IPv4;
} NDIS_TCP_LARGE_SEND_OFFLOAD_V1, *PNDIS_TCP_LARGE_SEND_OFFLOAD_V1;
typedef struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD
{
    struct
    {
        ULONG Encapsulation;
        ULONG IpOptionsSupported:2;
        ULONG TcpOptionsSupported:2;
        ULONG TcpChecksum:2;
        ULONG UdpChecksum:2;
        ULONG IpChecksum:2;
    } IPv4Transmit;
    struct
    {
        ULONG Encapsulation;
        ULONG IpOptionsSupported:2;
        ULONG TcpOptionsSupported:2;
        ULONG TcpChecksum:2;
        ULONG UdpChecksum:2;
        ULONG IpChecksum:2;
    } IPv4Receive;
    struct
    {
        ULONG Encapsulation;
        ULONG IpExtensionHeadersSupported:2;
        ULONG TcpOptionsSupported:2;
        ULONG TcpChecksum:2;
        ULONG UdpChecksum:2;
    } IPv6Transmit;
    struct
    {
        ULONG Encapsulation;
        ULONG IpExtensionHeadersSupported:2;
        ULONG TcpOptionsSupported:2;
        ULONG TcpChecksum:2;
        ULONG UdpChecksum:2;
    } IPv6Receive;
} NDIS_TCP_IP_CHECKSUM_OFFLOAD, *PNDIS_TCP_IP_CHECKSUM_OFFLOAD;
typedef struct _NDIS_IPSEC_OFFLOAD_V1
{
    struct
    {
        ULONG Encapsulation;
        ULONG AhEspCombined;
        ULONG TransportTunnelCombined;
        ULONG IPv4Options;
        ULONG Flags;
    } Supported;
    struct
    {
        ULONG Md5:2;
        ULONG Sha_1:2;
        ULONG Transport:2;
        ULONG Tunnel:2;
        ULONG Send:2;
        ULONG Receive:2;
    } IPv4AH;
    struct
    {
        ULONG Des:2;
        ULONG Reserved:2;
        ULONG TripleDes:2;
        ULONG NullEsp:2;
        ULONG Transport:2;
        ULONG Tunnel:2;
        ULONG Send:2;
        ULONG Receive:2;
    } IPv4ESP;
} NDIS_IPSEC_OFFLOAD_V1, *PNDIS_IPSEC_OFFLOAD_V1;
typedef struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V2
{
    struct
    {
         ULONG Encapsulation;
         ULONG MaxOffLoadSize;
         ULONG MinSegmentCount;
    }IPv4;
    struct
    {
         ULONG Encapsulation;
         ULONG MaxOffLoadSize;
         ULONG MinSegmentCount;
         ULONG IpExtensionHeadersSupported:2;
         ULONG TcpOptionsSupported:2;
    }IPv6;
} NDIS_TCP_LARGE_SEND_OFFLOAD_V2, *PNDIS_TCP_LARGE_SEND_OFFLOAD_V2;
#pragma warning(pop)
typedef struct _NDIS_OFFLOAD
{
    NDIS_OBJECT_HEADER Header;
    NDIS_TCP_IP_CHECKSUM_OFFLOAD Checksum;
    NDIS_TCP_LARGE_SEND_OFFLOAD_V1 LsoV1;
    NDIS_IPSEC_OFFLOAD_V1 IPsecV1;
    NDIS_TCP_LARGE_SEND_OFFLOAD_V2 LsoV2;
    ULONG Flags;
} NDIS_OFFLOAD, *PNDIS_OFFLOAD;
typedef struct _NDIS_WMI_TCP_LARGE_SEND_OFFLOAD_V1
{
    struct
    {
        ULONG Encapsulation;
        ULONG MaxOffLoadSize;
        ULONG MinSegmentCount;
        ULONG TcpOptions;
        ULONG IpOptions;
    } IPv4;
} NDIS_WMI_TCP_LARGE_SEND_OFFLOAD_V1, *PNDIS_WMI_TCP_LARGE_SEND_OFFLOAD_V1;
typedef struct _NDIS_WMI_TCP_IP_CHECKSUM_OFFLOAD
{
    struct
    {
        ULONG Encapsulation;
        ULONG IpOptionsSupported;
        ULONG TcpOptionsSupported;
        ULONG TcpChecksum;
        ULONG UdpChecksum;
        ULONG IpChecksum;
    } IPv4Transmit;
    struct
    {
        ULONG Encapsulation;
        ULONG IpOptionsSupported;
        ULONG TcpOptionsSupported;
        ULONG TcpChecksum;
        ULONG UdpChecksum;
        ULONG IpChecksum;
    } IPv4Receive;
    struct
    {
        ULONG Encapsulation;
        ULONG IpExtensionHeadersSupported;
        ULONG TcpOptionsSupported;
        ULONG TcpChecksum;
        ULONG UdpChecksum;
    } IPv6Transmit;
    struct
    {
        ULONG Encapsulation;
        ULONG IpExtensionHeadersSupported;
        ULONG TcpOptionsSupported;
        ULONG TcpChecksum;
        ULONG UdpChecksum;
    } IPv6Receive;
} NDIS_WMI_TCP_IP_CHECKSUM_OFFLOAD, *PNDIS_WMI_TCP_IP_CHECKSUM_OFFLOAD;
typedef struct _NDIS_WMI_IPSEC_OFFLOAD_V1
{
    struct
    {
        ULONG Encapsulation;
        ULONG AhEspCombined;
        ULONG TransportTunnelCombined;
        ULONG IPv4Options;
        ULONG Flags;
    } Supported;
    struct
    {
        ULONG Md5;
        ULONG Sha_1;
        ULONG Transport;
        ULONG Tunnel;
        ULONG Send;
        ULONG Receive;
    } IPv4AH;
    struct
    {
        ULONG Des;
        ULONG Reserved;
        ULONG TripleDes;
        ULONG NullEsp;
        ULONG Transport;
        ULONG Tunnel;
        ULONG Send;
        ULONG Receive;
    } IPv4ESP;
} NDIS_WMI_IPSEC_OFFLOAD_V1, *PNDIS_WMI_IPSEC_OFFLOAD_V1;
typedef struct _NDIS_WMI_TCP_LARGE_SEND_OFFLOAD_V2
{
    struct
    {
         ULONG Encapsulation;
         ULONG MaxOffLoadSize;
         ULONG MinSegmentCount;
    }IPv4;
    struct
    {
         ULONG Encapsulation;
         ULONG MaxOffLoadSize;
         ULONG MinSegmentCount;
         ULONG IpExtensionHeadersSupported;
         ULONG TcpOptionsSupported;
    }IPv6;
} NDIS_WMI_TCP_LARGE_SEND_OFFLOAD_V2, *PNDIS_WMI_TCP_LARGE_SEND_OFFLOAD_V2;
typedef struct _NDIS_WMI_OFFLOAD
{
    NDIS_OBJECT_HEADER Header;
    NDIS_WMI_TCP_IP_CHECKSUM_OFFLOAD Checksum;
    NDIS_WMI_TCP_LARGE_SEND_OFFLOAD_V1 LsoV1;
    NDIS_WMI_IPSEC_OFFLOAD_V1 IPsecV1;
    NDIS_WMI_TCP_LARGE_SEND_OFFLOAD_V2 LsoV2;
    ULONG Flags;
} NDIS_WMI_OFFLOAD, *PNDIS_WMI_OFFLOAD;
#pragma warning(push)
#pragma warning(disable:4214)
typedef struct _NDIS_TCP_CONNECTION_OFFLOAD
{
    NDIS_OBJECT_HEADER Header;
    ULONG Encapsulation;
    ULONG SupportIPv4:2;
    ULONG SupportIPv6:2;
    ULONG SupportIPv6ExtensionHeaders:2;
    ULONG SupportSack:2;
    ULONG TcpConnectionOffloadCapacity;
    ULONG Flags;
} NDIS_TCP_CONNECTION_OFFLOAD, *PNDIS_TCP_CONNECTION_OFFLOAD;
#pragma warning(pop)
typedef struct _NDIS_WMI_TCP_CONNECTION_OFFLOAD
{
    NDIS_OBJECT_HEADER Header;
    ULONG Encapsulation;
    ULONG SupportIPv4;
    ULONG SupportIPv6;
    ULONG SupportIPv6ExtensionHeaders;
    ULONG SupportSack;
    ULONG TcpConnectionOffloadCapacity;
    ULONG Flags;
} NDIS_WMI_TCP_CONNECTION_OFFLOAD, *PNDIS_WMI_TCP_CONNECTION_OFFLOAD;
typedef ULONG NDIS_PORT_NUMBER, *PNDIS_PORT_NUMBER;
typedef enum _NDIS_PORT_TYPE
{
    NdisPortTypeUndefined,
    NdisPortTypeBridge,
    NdisPortTypeRasConnection,
    NdisPortType8021xSupplicant,
    NdisPortTypeMax,
}NDIS_PORT_TYPE, *PNDIS_PORT_TYPE;
typedef enum _NDIS_PORT_AUTHORIZATION_STATE
{
    NdisPortAuthorizationUnknown,
    NdisPortAuthorized,
    NdisPortUnauthorized,
    NdisPortReauthorizing
} NDIS_PORT_AUTHORIZATION_STATE, *PNDIS_PORT_AUTHORIZATION_STATE;
typedef enum _NDIS_PORT_CONTROL_STATE
{
    NdisPortControlStateUnknown,
    NdisPortControlStateControlled,
    NdisPortControlStateUncontrolled
} NDIS_PORT_CONTROL_STATE, *PNDIS_PORT_CONTROL_STATE;
typedef NDIS_PORT_CONTROL_STATE NDIS_PORT_CONTROLL_STATE;
typedef PNDIS_PORT_CONTROL_STATE PNDIS_PORT_CONTROLL_STATE;
typedef struct _NDIS_PORT_AUTHENTICATION_PARAMETERS
{
    NDIS_OBJECT_HEADER Header;
    NDIS_PORT_CONTROL_STATE SendControlState;
    NDIS_PORT_CONTROL_STATE RcvControlState;
    NDIS_PORT_AUTHORIZATION_STATE SendAuthorizationState;
    NDIS_PORT_AUTHORIZATION_STATE RcvAuthorizationState;
}NDIS_PORT_AUTHENTICATION_PARAMETERS, *PNDIS_PORT_AUTHENTICATION_PARAMETERS;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_PORT_AUTHENTICATION_PARAMETERS, RcvAuthorizationState)
typedef enum _NDIS_NETWORK_CHANGE_TYPE
{
    NdisPossibleNetworkChange = 1,
    NdisDefinitelyNetworkChange,
    NdisNetworkChangeFromMediaConnect,
    NdisNetworkChangeMax
} NDIS_NETWORK_CHANGE_TYPE, *PNDIS_NETWORK_CHANGE_TYPE;
typedef struct _NDIS_WMI_METHOD_HEADER
{
    NDIS_OBJECT_HEADER Header;
    NDIS_PORT_NUMBER PortNumber;
    NET_LUID NetLuid;
    ULONG64 RequestId;
    ULONG Timeout;
    UCHAR Padding[4];
} NDIS_WMI_METHOD_HEADER, *PNDIS_WMI_METHOD_HEADER;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_WMI_METHOD_HEADER, Padding)
typedef struct _NDIS_WMI_SET_HEADER
{
    NDIS_OBJECT_HEADER Header;
    NDIS_PORT_NUMBER PortNumber;
    NET_LUID NetLuid;
    ULONG64 RequestId;
    ULONG Timeout;
    UCHAR Padding[4];
} NDIS_WMI_SET_HEADER, *PNDIS_WMI_SET_HEADER;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_WMI_SET_HEADER, Padding)
typedef struct _NDIS_WMI_EVENT_HEADER
{
    NDIS_OBJECT_HEADER Header;
    NET_IFINDEX IfIndex;
    NET_LUID NetLuid;
    ULONG64 RequestId;
    NDIS_PORT_NUMBER PortNumber;
    ULONG DeviceNameLength;
    ULONG DeviceNameOffset;
    UCHAR Padding[4];
} NDIS_WMI_EVENT_HEADER, *PNDIS_WMI_EVENT_HEADER;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_WMI_EVENT_HEADER, Padding)
typedef struct _NDIS_WMI_ENUM_ADAPTER
{
    NDIS_OBJECT_HEADER Header;
    NET_IFINDEX IfIndex;
    NET_LUID NetLuid;
    USHORT DeviceNameLength;
    CHAR DeviceName[1];
}NDIS_WMI_ENUM_ADAPTER, *PNDIS_WMI_ENUM_ADAPTER;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_WMI_ENUM_ADAPTER, DeviceName)
typedef struct NDIS_WMI_OUTPUT_INFO
{
    NDIS_OBJECT_HEADER Header;
    ULONG Flags;
    UCHAR SupportedRevision;
    ULONG DataOffset;
} NDIS_WMI_OUTPUT_INFO, *PNDIS_WMI_OUTPUT_INFO;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_WMI_OUTPUT_INFO, DataOffset)
typedef ULONG NDIS_RSS_CAPS_FLAGS;
typedef struct _NDIS_RECEIVE_SCALE_CAPABILITIES
{
    NDIS_OBJECT_HEADER Header;
    NDIS_RSS_CAPS_FLAGS CapabilitiesFlags;
    ULONG NumberOfInterruptMessages;
    ULONG NumberOfReceiveQueues;
} NDIS_RECEIVE_SCALE_CAPABILITIES, *PNDIS_RECEIVE_SCALE_CAPABILITIES;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_RECEIVE_SCALE_CAPABILITIES, NumberOfReceiveQueues)
        ((_HashInfo) & (NDIS_HASH_FUNCTION_MASK))
        ((_HashInfo) & (NDIS_HASH_TYPE_MASK))
        ((_HashType) | (_HashFunction))
typedef ULONG NDIS_HASH_FLAGS;
typedef struct _NDIS_RECEIVE_SCALE_PARAMETERS
{
    NDIS_OBJECT_HEADER Header;
    USHORT Flags;
    USHORT BaseCpuNumber;
    ULONG HashInformation;
    USHORT IndirectionTableSize;
    ULONG IndirectionTableOffset;
    USHORT HashSecretKeySize;
    ULONG HashSecretKeyOffset;
} NDIS_RECEIVE_SCALE_PARAMETERS, *PNDIS_RECEIVE_SCALE_PARAMETERS;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_RECEIVE_SCALE_PARAMETERS, HashSecretKeyOffset)
typedef struct _NDIS_RECEIVE_HASH_PARAMETERS
{
    NDIS_OBJECT_HEADER Header;
    ULONG Flags;
    ULONG HashInformation;
    USHORT HashSecretKeySize;
    ULONG HashSecretKeyOffset;
} NDIS_RECEIVE_HASH_PARAMETERS, *PNDIS_RECEIVE_HASH_PARAMETERS;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_RECEIVE_HASH_PARAMETERS, HashSecretKeyOffset)
typedef enum _NDIS_PROCESSOR_VENDOR
{
    NdisProcessorVendorUnknown,
    NdisProcessorVendorGenuinIntel,
    NdisProcessorVendorGenuineIntel = NdisProcessorVendorGenuinIntel,
    NdisProcessorVendorAuthenticAMD
} NDIS_PROCESSOR_VENDOR, *PNDIS_PROCESSOR_VENDOR;
typedef struct _NDIS_PORT_STATE
{
    NDIS_OBJECT_HEADER Header;
    NDIS_MEDIA_CONNECT_STATE MediaConnectState;
    ULONG64 XmitLinkSpeed;
    ULONG64 RcvLinkSpeed;
    NET_IF_DIRECTION_TYPE Direction;
    NDIS_PORT_CONTROL_STATE SendControlState;
    NDIS_PORT_CONTROL_STATE RcvControlState;
    NDIS_PORT_AUTHORIZATION_STATE SendAuthorizationState;
    NDIS_PORT_AUTHORIZATION_STATE RcvAuthorizationState;
    ULONG Flags;
}NDIS_PORT_STATE, *PNDIS_PORT_STATE;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_PORT_STATE, Flags)
typedef struct _NDIS_PORT_CHARACTERISTICS
{
    NDIS_OBJECT_HEADER Header;
    NDIS_PORT_NUMBER PortNumber;
    ULONG Flags;
    NDIS_PORT_TYPE Type;
    NDIS_MEDIA_CONNECT_STATE MediaConnectState;
    ULONG64 XmitLinkSpeed;
    ULONG64 RcvLinkSpeed;
    NET_IF_DIRECTION_TYPE Direction;
    NDIS_PORT_CONTROL_STATE SendControlState;
    NDIS_PORT_CONTROL_STATE RcvControlState;
    NDIS_PORT_AUTHORIZATION_STATE SendAuthorizationState;
    NDIS_PORT_AUTHORIZATION_STATE RcvAuthorizationState;
} NDIS_PORT_CHARACTERISTICS, *PNDIS_PORT_CHARACTERISTICS;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_PORT_CHARACTERISTICS, RcvAuthorizationState)
typedef struct _NDIS_PORT NDIS_PORT, *PNDIS_PORT;
struct _NDIS_PORT
{
    PNDIS_PORT Next;
    PVOID NdisReserved;
    PVOID MiniportReserved;
    PVOID ProtocolReserved;
    NDIS_PORT_CHARACTERISTICS PortCharacteristics;
};
typedef struct _NDIS_PORT_ARRAY
{
    NDIS_OBJECT_HEADER Header;
    ULONG NumberOfPorts;
    ULONG OffsetFirstPort;
    ULONG ElementSize;
    NDIS_PORT_CHARACTERISTICS Ports[1];
}NDIS_PORT_ARRAY, *PNDIS_PORT_ARRAY;
        RTL_SIZEOF_THROUGH_FIELD(NDIS_PORT_ARRAY, Ports)
typedef struct _NDIS_TIMESTAMP_CAPABILITY_FLAGS
{
    BOOLEAN PtpV2OverUdpIPv4EventMsgReceiveHw;
    BOOLEAN PtpV2OverUdpIPv4AllMsgReceiveHw;
    BOOLEAN PtpV2OverUdpIPv4EventMsgTransmitHw;
    BOOLEAN PtpV2OverUdpIPv4AllMsgTransmitHw;
    BOOLEAN PtpV2OverUdpIPv6EventMsgReceiveHw;
    BOOLEAN PtpV2OverUdpIPv6AllMsgReceiveHw;
    BOOLEAN PtpV2OverUdpIPv6EventMsgTransmitHw;
    BOOLEAN PtpV2OverUdpIPv6AllMsgTransmitHw;
    BOOLEAN AllReceiveHw;
    BOOLEAN AllTransmitHw;
    BOOLEAN TaggedTransmitHw;
    BOOLEAN AllReceiveSw;
    BOOLEAN AllTransmitSw;
    BOOLEAN TaggedTransmitSw;
} NDIS_TIMESTAMP_CAPABILITY_FLAGS, *PNDIS_TIMESTAMP_CAPABILITY_FLAGS;
typedef struct _NDIS_TIMESTAMP_CAPABILITIES
{
    NDIS_OBJECT_HEADER Header;
    ULONG64 HardwareClockFrequencyHz;
    BOOLEAN CrossTimestamp;
    ULONG64 Reserved1;
    ULONG64 Reserved2;
    NDIS_TIMESTAMP_CAPABILITY_FLAGS TimestampFlags;
} NDIS_TIMESTAMP_CAPABILITIES, *PNDIS_TIMESTAMP_CAPABILITIES;
    RTL_SIZEOF_THROUGH_FIELD(NDIS_TIMESTAMP_CAPABILITIES, TimestampFlags)
typedef struct _NDIS_HARDWARE_CROSSTIMESTAMP
{
    NDIS_OBJECT_HEADER Header;
    ULONG Flags;
    ULONG64 SystemTimestamp1;
    ULONG64 HardwareClockTimestamp;
    ULONG64 SystemTimestamp2;
} NDIS_HARDWARE_CROSSTIMESTAMP, *PNDIS_HARDWARE_CROSSTIMESTAMP;
    RTL_SIZEOF_THROUGH_FIELD(NDIS_HARDWARE_CROSSTIMESTAMP, SystemTimestamp2)
}
#endif
#pragma endregion
