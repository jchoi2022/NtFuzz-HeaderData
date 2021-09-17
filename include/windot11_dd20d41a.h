       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#include <ntddndis.h>
#include <WlanTypes.h>
    typedef struct _DOT11_MAC_ADDRESS {
        UCHAR ucDot11MacAddress[6];
    } DOT11_MAC_ADDRESS, * PDOT11_MAC_ADDRESS;
typedef struct DOT11_BSSID_LIST {
    #define DOT11_BSSID_LIST_REVISION_1 1
    NDIS_OBJECT_HEADER Header;
    ULONG uNumOfEntries;
    ULONG uTotalNumOfEntries;
    [unique, size_is(uTotalNumOfEntries)] DOT11_MAC_ADDRESS BSSIDs[*];
} DOT11_BSSID_LIST, * PDOT11_BSSID_LIST;
typedef UCHAR DOT11_HESSID[DOT11_HESSID_LENGTH];
typedef DOT11_HESSID* PDOT11_HESSID;
typedef [v1_enum] enum _DOT11_PHY_TYPE {
    dot11_phy_type_unknown = 0,
    dot11_phy_type_any = dot11_phy_type_unknown,
    dot11_phy_type_fhss = 1,
    dot11_phy_type_dsss = 2,
    dot11_phy_type_irbaseband = 3,
    dot11_phy_type_ofdm = 4,
    dot11_phy_type_hrdsss = 5,
    dot11_phy_type_erp = 6,
    dot11_phy_type_ht = 7,
    dot11_phy_type_vht = 8,
    dot11_phy_type_dmg = 9,
    dot11_phy_type_he = 10,
    dot11_phy_type_IHV_start = 0x80000000,
    dot11_phy_type_IHV_end = 0xffffffff
} DOT11_PHY_TYPE, * PDOT11_PHY_TYPE;
typedef struct _DOT11_RATE_SET {
    _Field_range_(<=, DOT11_RATE_SET_MAX_LENGTH) ULONG uRateSetLength;
    _Field_size_part_(DOT11_RATE_SET_MAX_LENGTH, uRateSetLength) UCHAR ucRateSet[DOT11_RATE_SET_MAX_LENGTH];
} DOT11_RATE_SET, * PDOT11_RATE_SET;
typedef UCHAR DOT11_COUNTRY_OR_REGION_STRING[3];
typedef DOT11_COUNTRY_OR_REGION_STRING * PDOT11_COUNTRY_OR_REGION_STRING;
typedef UCHAR DOT11_DIALOG_TOKEN;
typedef UCHAR DOT11_WFD_STATUS_CODE;
typedef UCHAR DOT11_WFD_MINOR_REASON_CODE;
typedef UCHAR DOT11_WFD_SERVICE_HASH[6];
typedef struct _DOT11_WFD_SESSION_INFO {
    _Field_range_(<= , DOT11_WFD_SESSION_INFO_MAX_LENGTH) USHORT uSessionInfoLength;
    _Field_size_part_(DOT11_WFD_SESSION_INFO_MAX_LENGTH, uSessionInfoLength) UCHAR ucSessionInfo[DOT11_WFD_SESSION_INFO_MAX_LENGTH];
} DOT11_WFD_SESSION_INFO, *PDOT11_WFD_SESSION_INFO;
    (NDIS_PACKET_TYPE_DIRECTED | \
     NDIS_PACKET_TYPE_MULTICAST | \
     NDIS_PACKET_TYPE_ALL_MULTICAST | \
     NDIS_PACKET_TYPE_BROADCAST | \
     NDIS_PACKET_TYPE_PROMISCUOUS | \
     NDIS_PACKET_TYPE_802_11_RAW_DATA | \
     NDIS_PACKET_TYPE_802_11_DIRECTED_MGMT | \
     NDIS_PACKET_TYPE_802_11_BROADCAST_MGMT | \
     NDIS_PACKET_TYPE_802_11_MULTICAST_MGMT | \
     NDIS_PACKET_TYPE_802_11_ALL_MULTICAST_MGMT | \
     NDIS_PACKET_TYPE_802_11_PROMISCUOUS_MGMT | \
     NDIS_PACKET_TYPE_802_11_RAW_MGMT | \
     NDIS_PACKET_TYPE_802_11_DIRECTED_CTRL | \
     NDIS_PACKET_TYPE_802_11_BROADCAST_CTRL | \
     NDIS_PACKET_TYPE_802_11_PROMISCUOUS_CTRL)
    #define DOT11_HW_WEP_SUPPORTED_TX 0x00000001
    #define DOT11_HW_WEP_SUPPORTED_RX 0x00000002
    #define DOT11_HW_FRAGMENTATION_SUPPORTED 0x00000004
    #define DOT11_HW_DEFRAGMENTATION_SUPPORTED 0x00000008
    #define DOT11_HW_MSDU_AUTH_SUPPORTED_TX 0x00000010
    #define DOT11_HW_MSDU_AUTH_SUPPORTED_RX 0x00000020
    #define DOT11_CONF_ALGO_WEP_RC4 0x00000001
    #define DOT11_CONF_ALGO_TKIP 0x00000002
    #define DOT11_AUTH_ALGO_MICHAEL 0x00000001
    typedef struct _DOT11_OFFLOAD_CAPABILITY {
        ULONG uReserved;
        ULONG uFlags;
        ULONG uSupportedWEPAlgorithms;
        ULONG uNumOfReplayWindows;
        ULONG uMaxWEPKeyMappingLength;
        ULONG uSupportedAuthAlgorithms;
        ULONG uMaxAuthKeyMappingLength;
    } DOT11_OFFLOAD_CAPABILITY, * PDOT11_OFFLOAD_CAPABILITY;
    typedef struct _DOT11_CURRENT_OFFLOAD_CAPABILITY {
        ULONG uReserved;
        ULONG uFlags;
    } DOT11_CURRENT_OFFLOAD_CAPABILITY, * PDOT11_CURRENT_OFFLOAD_CAPABILITY;
    typedef enum _DOT11_OFFLOAD_TYPE {
        dot11_offload_type_wep = 1,
        dot11_offload_type_auth = 2
    } DOT11_OFFLOAD_TYPE, * PDOT11_OFFLOAD_TYPE;
    typedef struct _DOT11_IV48_COUNTER {
        ULONG uIV32Counter;
        USHORT usIV16Counter;
    } DOT11_IV48_COUNTER, * PDOT11_IV48_COUNTER;
    typedef struct _DOT11_WEP_OFFLOAD {
        ULONG uReserved;
        HANDLE hOffloadContext;
        HANDLE hOffload;
        DOT11_OFFLOAD_TYPE dot11OffloadType;
        ULONG dwAlgorithm;
        BOOLEAN bRowIsOutbound;
        BOOLEAN bUseDefault;
        ULONG uFlags;
        UCHAR ucMacAddress[6];
        ULONG uNumOfRWsOnPeer;
        ULONG uNumOfRWsOnMe;
        DOT11_IV48_COUNTER dot11IV48Counters[16];
        USHORT usDot11RWBitMaps[16];
        USHORT usKeyLength;
        UCHAR ucKey[1];
    } DOT11_WEP_OFFLOAD, * PDOT11_WEP_OFFLOAD;
    typedef struct _DOT11_WEP_UPLOAD {
        ULONG uReserved;
        DOT11_OFFLOAD_TYPE dot11OffloadType;
        HANDLE hOffload;
        ULONG uNumOfRWsUsed;
        DOT11_IV48_COUNTER dot11IV48Counters[16];
        USHORT usDot11RWBitMaps[16];
    } DOT11_WEP_UPLOAD, * PDOT11_WEP_UPLOAD;
    typedef enum _DOT11_KEY_DIRECTION {
        dot11_key_direction_both = 1,
        dot11_key_direction_inbound = 2,
        dot11_key_direction_outbound = 3
    } DOT11_KEY_DIRECTION, * PDOT11_KEY_DIRECTION;
    typedef struct _DOT11_DEFAULT_WEP_OFFLOAD {
        ULONG uReserved;
        HANDLE hOffloadContext;
        HANDLE hOffload;
        ULONG dwIndex;
        DOT11_OFFLOAD_TYPE dot11OffloadType;
        ULONG dwAlgorithm;
        ULONG uFlags;
        DOT11_KEY_DIRECTION dot11KeyDirection;
        UCHAR ucMacAddress[6];
        ULONG uNumOfRWsOnMe;
        DOT11_IV48_COUNTER dot11IV48Counters[16];
        USHORT usDot11RWBitMaps[16];
        USHORT usKeyLength;
        UCHAR ucKey[1];
    } DOT11_DEFAULT_WEP_OFFLOAD, * PDOT11_DEFAULT_WEP_OFFLOAD;
    typedef struct _DOT11_DEFAULT_WEP_UPLOAD {
        ULONG uReserved;
        DOT11_OFFLOAD_TYPE dot11OffloadType;
        HANDLE hOffload;
        ULONG uNumOfRWsUsed;
        DOT11_IV48_COUNTER dot11IV48Counters[16];
        USHORT usDot11RWBitMaps[16];
    } DOT11_DEFAULT_WEP_UPLOAD, * PDOT11_DEFAULT_WEP_UPLOAD;
    #define DOT11_OPERATION_MODE_UNKNOWN 0x00000000
    #define DOT11_OPERATION_MODE_STATION 0x00000001
    #define DOT11_OPERATION_MODE_AP 0x00000002
    #define DOT11_OPERATION_MODE_EXTENSIBLE_STATION 0x00000004
    #define DOT11_OPERATION_MODE_EXTENSIBLE_AP 0x00000008
    #define DOT11_OPERATION_MODE_WFD_DEVICE 0x00000010
    #define DOT11_OPERATION_MODE_WFD_GROUP_OWNER 0x00000020
    #define DOT11_OPERATION_MODE_WFD_CLIENT 0x00000040
    #define DOT11_OPERATION_MODE_MANUFACTURING 0x40000000
    #define DOT11_OPERATION_MODE_NETWORK_MONITOR 0x80000000
    typedef struct _DOT11_OPERATION_MODE_CAPABILITY {
        ULONG uReserved;
        ULONG uMajorVersion;
        ULONG uMinorVersion;
        ULONG uNumOfTXBuffers;
        ULONG uNumOfRXBuffers;
        ULONG uOpModeCapability;
    } DOT11_OPERATION_MODE_CAPABILITY, * PDOT11_OPERATION_MODE_CAPABILITY;
    typedef struct _DOT11_CURRENT_OPERATION_MODE {
        ULONG uReserved;
        ULONG uCurrentOpMode;
    } DOT11_CURRENT_OPERATION_MODE, * PDOT11_CURRENT_OPERATION_MODE;
    #define DOT11_PACKET_TYPE_DIRECTED_CTRL 0x00000001
    #define DOT11_PACKET_TYPE_DIRECTED_MGMT 0x00000002
    #define DOT11_PACKET_TYPE_DIRECTED_DATA 0x00000004
    #define DOT11_PACKET_TYPE_MULTICAST_CTRL 0x00000008
    #define DOT11_PACKET_TYPE_MULTICAST_MGMT 0x00000010
    #define DOT11_PACKET_TYPE_MULTICAST_DATA 0x00000020
    #define DOT11_PACKET_TYPE_BROADCAST_CTRL 0x00000040
    #define DOT11_PACKET_TYPE_BROADCAST_MGMT 0x00000080
    #define DOT11_PACKET_TYPE_BROADCAST_DATA 0x00000100
    #define DOT11_PACKET_TYPE_PROMISCUOUS_CTRL 0x00000200
    #define DOT11_PACKET_TYPE_PROMISCUOUS_MGMT 0x00000400
    #define DOT11_PACKET_TYPE_PROMISCUOUS_DATA 0x00000800
    #define DOT11_PACKET_TYPE_ALL_MULTICAST_CTRL 0x00001000
    #define DOT11_PACKET_TYPE_ALL_MULTICAST_MGMT 0x00002000
    #define DOT11_PACKET_TYPE_ALL_MULTICAST_DATA 0x00004000
    #define DOT11_PACKET_TYPE_RESERVED (~( \
                DOT11_PACKET_TYPE_DIRECTED_CTRL | \
                DOT11_PACKET_TYPE_DIRECTED_MGMT | \
                DOT11_PACKET_TYPE_DIRECTED_DATA | \
                DOT11_PACKET_TYPE_MULTICAST_CTRL | \
                DOT11_PACKET_TYPE_MULTICAST_MGMT | \
                DOT11_PACKET_TYPE_MULTICAST_DATA | \
                DOT11_PACKET_TYPE_BROADCAST_CTRL | \
                DOT11_PACKET_TYPE_BROADCAST_MGMT | \
                DOT11_PACKET_TYPE_BROADCAST_DATA | \
                DOT11_PACKET_TYPE_PROMISCUOUS_CTRL | \
                DOT11_PACKET_TYPE_PROMISCUOUS_MGMT | \
                DOT11_PACKET_TYPE_PROMISCUOUS_DATA | \
                DOT11_PACKET_TYPE_ALL_MULTICAST_CTRL | \
                DOT11_PACKET_TYPE_ALL_MULTICAST_MGMT | \
                DOT11_PACKET_TYPE_ALL_MULTICAST_DATA | \
                0 \
                ))
    typedef enum _DOT11_SCAN_TYPE {
        dot11_scan_type_active = 1,
        dot11_scan_type_passive = 2,
        dot11_scan_type_auto = 3,
        dot11_scan_type_forced = 0x80000000
    } DOT11_SCAN_TYPE, * PDOT11_SCAN_TYPE;
    typedef struct _DOT11_SCAN_REQUEST {
        DOT11_BSS_TYPE dot11BSSType;
        DOT11_MAC_ADDRESS dot11BSSID;
        DOT11_SSID dot11SSID;
        DOT11_SCAN_TYPE dot11ScanType;
        BOOLEAN bRestrictedScan;
        BOOLEAN bUseRequestIE;
        ULONG uRequestIDsOffset;
        ULONG uNumOfRequestIDs;
        ULONG uPhyTypesOffset;
        ULONG uNumOfPhyTypes;
        ULONG uIEsOffset;
        ULONG uIEsLength;
        UCHAR ucBuffer[1];
    } DOT11_SCAN_REQUEST, * PDOT11_SCAN_REQUEST;
    typedef enum _CH_DESCRIPTION_TYPE {
        ch_description_type_logical = 1,
        ch_description_type_center_frequency = 2,
        ch_description_type_phy_specific
    } CH_DESCRIPTION_TYPE, * PCH_DESCRIPTION_TYPE;
    typedef struct _DOT11_PHY_TYPE_INFO {
        DOT11_PHY_TYPE dot11PhyType;
        BOOLEAN bUseParameters;
        ULONG uProbeDelay;
        ULONG uMinChannelTime;
        ULONG uMaxChannelTime;
        CH_DESCRIPTION_TYPE ChDescriptionType;
        ULONG uChannelListSize;
        UCHAR ucChannelListBuffer[1];
    } DOT11_PHY_TYPE_INFO, * PDOT11_PHY_TYPE_INFO;
    typedef struct _DOT11_SCAN_REQUEST_V2 {
        DOT11_BSS_TYPE dot11BSSType;
        DOT11_MAC_ADDRESS dot11BSSID;
        DOT11_SCAN_TYPE dot11ScanType;
        BOOLEAN bRestrictedScan;
        ULONG udot11SSIDsOffset;
        ULONG uNumOfdot11SSIDs;
        BOOLEAN bUseRequestIE;
        ULONG uRequestIDsOffset;
        ULONG uNumOfRequestIDs;
        ULONG uPhyTypeInfosOffset;
        ULONG uNumOfPhyTypeInfos;
        ULONG uIEsOffset;
        ULONG uIEsLength;
        UCHAR ucBuffer[1];
    } DOT11_SCAN_REQUEST_V2, * PDOT11_SCAN_REQUEST_V2;
    typedef struct DOT11_PHY_TYPE_LIST {
        #define DOT11_PHY_TYPE_LIST_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        DOT11_PHY_TYPE dot11PhyType[1];
    } DOT11_PHY_TYPE_LIST, * PDOT11_PHY_TYPE_LIST;
    #define DOT11_CAPABILITY_INFO_ESS 0x0001
    #define DOT11_CAPABILITY_INFO_IBSS 0x0002
    #define DOT11_CAPABILITY_INFO_CF_POLLABLE 0x0004
    #define DOT11_CAPABILITY_INFO_CF_POLL_REQ 0x0008
    #define DOT11_CAPABILITY_INFO_PRIVACY 0x0010
    #define DOT11_CAPABILITY_SHORT_PREAMBLE 0x0020
    #define DOT11_CAPABILITY_PBCC 0x0040
    #define DOT11_CAPABILITY_CHANNEL_AGILITY 0x0080
    #define DOT11_CAPABILITY_SHORT_SLOT_TIME 0x0400
    #define DOT11_CAPABILITY_DSSSOFDM 0x2000
    typedef struct _DOT11_BSS_DESCRIPTION {
        ULONG uReserved;
        DOT11_MAC_ADDRESS dot11BSSID;
        DOT11_BSS_TYPE dot11BSSType;
        USHORT usBeaconPeriod;
        ULONGLONG ullTimestamp;
        USHORT usCapabilityInformation;
        ULONG uBufferLength;
        [unique, size_is(uBufferLength)] UCHAR ucBuffer[*];
    } DOT11_BSS_DESCRIPTION, * PDOT11_BSS_DESCRIPTION;
    typedef struct _DOT11_JOIN_REQUEST {
        ULONG uJoinFailureTimeout;
        DOT11_RATE_SET OperationalRateSet;
        ULONG uChCenterFrequency;
        DOT11_BSS_DESCRIPTION dot11BSSDescription;
    } DOT11_JOIN_REQUEST, * PDOT11_JOIN_REQUEST;
    typedef struct _DOT11_START_REQUEST {
        ULONG uStartFailureTimeout;
        DOT11_RATE_SET OperationalRateSet;
        ULONG uChCenterFrequency;
        DOT11_BSS_DESCRIPTION dot11BSSDescription;
    } DOT11_START_REQUEST, * PDOT11_START_REQUEST;
typedef enum _DOT11_UPDATE_IE_OP {
    dot11_update_ie_op_create_replace = 1,
    dot11_update_ie_op_delete = 2,
} DOT11_UPDATE_IE_OP, * PDOT11_UPDATE_IE_OP;
typedef struct _DOT11_UPDATE_IE {
    DOT11_UPDATE_IE_OP dot11UpdateIEOp;
    ULONG uBufferLength;
    UCHAR ucBuffer[1];
} DOT11_UPDATE_IE, * PDOT11_UPDATE_IE;
    typedef enum _DOT11_RESET_TYPE {
        dot11_reset_type_phy = 1,
        dot11_reset_type_mac = 2,
        dot11_reset_type_phy_and_mac = 3
    } DOT11_RESET_TYPE, * PDOT11_RESET_TYPE;
    typedef struct _DOT11_RESET_REQUEST {
        DOT11_RESET_TYPE dot11ResetType;
        DOT11_MAC_ADDRESS dot11MacAddress;
        BOOLEAN bSetDefaultMIB;
    } DOT11_RESET_REQUEST, * PDOT11_RESET_REQUEST;
    typedef struct _DOT11_OPTIONAL_CAPABILITY {
        ULONG uReserved;
        BOOLEAN bDot11PCF;
        BOOLEAN bDot11PCFMPDUTransferToPC;
        BOOLEAN bStrictlyOrderedServiceClass;
    } DOT11_OPTIONAL_CAPABILITY, * PDOT11_OPTIONAL_CAPABILITY;
    typedef struct _DOT11_CURRENT_OPTIONAL_CAPABILITY {
        ULONG uReserved;
        BOOLEAN bDot11CFPollable;
        BOOLEAN bDot11PCF;
        BOOLEAN bDot11PCFMPDUTransferToPC;
        BOOLEAN bStrictlyOrderedServiceClass;
    } DOT11_CURRENT_OPTIONAL_CAPABILITY, * PDOT11_CURRENT_OPTIONAL_CAPABILITY;
    typedef enum _DOT11_POWER_MODE {
        dot11_power_mode_unknown = 0,
        dot11_power_mode_active = 1,
        dot11_power_mode_powersave = 2
    } DOT11_POWER_MODE, * PDOT11_POWER_MODE;
    #define DOT11_POWER_SAVE_LEVEL_MAX_PSP 1
    #define DOT11_POWER_SAVE_LEVEL_FAST_PSP 2
    typedef struct _DOT11_POWER_MGMT_MODE {
        DOT11_POWER_MODE dot11PowerMode;
        ULONG uPowerSaveLevel;
        USHORT usListenInterval;
        USHORT usAID;
        BOOLEAN bReceiveDTIMs;
    } DOT11_POWER_MGMT_MODE, * PDOT11_POWER_MGMT_MODE;
    typedef struct _DOT11_COUNTERS_ENTRY {
        ULONG uTransmittedFragmentCount;
        ULONG uMulticastTransmittedFrameCount;
        ULONG uFailedCount;
        ULONG uRetryCount;
        ULONG uMultipleRetryCount;
        ULONG uFrameDuplicateCount;
        ULONG uRTSSuccessCount;
        ULONG uRTSFailureCount;
        ULONG uACKFailureCount;
        ULONG uReceivedFragmentCount;
        ULONG uMulticastReceivedFrameCount;
        ULONG uFCSErrorCount;
        ULONG uTransmittedFrameCount;
    } DOT11_COUNTERS_ENTRY, * PDOT11_COUNTERS_ENTRY;
    typedef struct _DOT11_SUPPORTED_PHY_TYPES {
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        DOT11_PHY_TYPE dot11PHYType[1];
    } DOT11_SUPPORTED_PHY_TYPES, * PDOT11_SUPPORTED_PHY_TYPES;
    #define DOT11_REG_DOMAIN_OTHER 0x00000000
    #define DOT11_REG_DOMAIN_FCC 0x00000010
    #define DOT11_REG_DOMAIN_DOC 0x00000020
    #define DOT11_REG_DOMAIN_ETSI 0x00000030
    #define DOT11_REG_DOMAIN_SPAIN 0x00000031
    #define DOT11_REG_DOMAIN_FRANCE 0x00000032
    #define DOT11_REG_DOMAIN_MKK 0x00000040
    typedef enum _DOT11_TEMP_TYPE {
        dot11_temp_type_unknown = 0,
        dot11_temp_type_1 = 1,
        dot11_temp_type_2 = 2
    } DOT11_TEMP_TYPE, * PDOT11_TEMP_TYPE;
    typedef enum _DOT11_DIVERSITY_SUPPORT {
        dot11_diversity_support_unknown = 0,
        dot11_diversity_support_fixedlist = 1,
        dot11_diversity_support_notsupported = 2,
        dot11_diversity_support_dynamic = 3
    } DOT11_DIVERSITY_SUPPORT, * PDOT11_DIVERSITY_SUPPORT;
    typedef struct _DOT11_SUPPORTED_POWER_LEVELS {
        ULONG uNumOfSupportedPowerLevels;
        _Field_size_part_(8, uNumOfSupportedPowerLevels) ULONG uTxPowerLevelValues[8];
    } DOT11_SUPPORTED_POWER_LEVELS, * PDOT11_SUPPORTED_POWER_LEVELS;
    #define DOT11_CCA_MODE_ED_ONLY 0x00000001
    #define DOT11_CCA_MODE_CS_ONLY 0x00000002
    #define DOT11_CCA_MODE_ED_and_CS 0x00000004
    #define DOT11_CCA_MODE_CS_WITH_TIMER 0x00000008
    #define DOT11_CCA_MODE_HRCS_AND_ED 0x00000010
    typedef struct _DOT11_REG_DOMAIN_VALUE {
        ULONG uRegDomainsSupportIndex;
        ULONG uRegDomainsSupportValue;
    } DOT11_REG_DOMAIN_VALUE, * PDOT11_REG_DOMAIN_VALUE;
    typedef struct _DOT11_REG_DOMAINS_SUPPORT_VALUE {
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        DOT11_REG_DOMAIN_VALUE dot11RegDomainValue[1];
    } DOT11_REG_DOMAINS_SUPPORT_VALUE, * PDOT11_REG_DOMAINS_SUPPORT_VALUE;
    typedef struct _DOT11_SUPPORTED_ANTENNA {
        ULONG uAntennaListIndex;
        BOOLEAN bSupportedAntenna;
    } DOT11_SUPPORTED_ANTENNA, * PDOT11_SUPPORTED_ANTENNA;
    typedef struct _DOT11_SUPPORTED_ANTENNA_LIST {
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        DOT11_SUPPORTED_ANTENNA dot11SupportedAntenna[1];
    } DOT11_SUPPORTED_ANTENNA_LIST, * PDOT11_SUPPORTED_ANTENNA_LIST;
    typedef struct _DOT11_DIVERSITY_SELECTION_RX {
        ULONG uAntennaListIndex;
        BOOLEAN bDiversitySelectionRX;
    } DOT11_DIVERSITY_SELECTION_RX, * PDOT11_DIVERSITY_SELECTION_RX;
    typedef struct _DOT11_DIVERSITY_SELECTION_RX_LIST {
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        DOT11_DIVERSITY_SELECTION_RX dot11DiversitySelectionRx[1];
    } DOT11_DIVERSITY_SELECTION_RX_LIST, * PDOT11_DIVERSITY_SELECTION_RX_LIST;
    #define MAX_NUM_SUPPORTED_RATES 8
    #define MAX_NUM_SUPPORTED_RATES_V2 255
    typedef struct _DOT11_SUPPORTED_DATA_RATES_VALUE {
        UCHAR ucSupportedTxDataRatesValue[MAX_NUM_SUPPORTED_RATES];
        UCHAR ucSupportedRxDataRatesValue[MAX_NUM_SUPPORTED_RATES];
    } DOT11_SUPPORTED_DATA_RATES_VALUE, * PDOT11_SUPPORTED_DATA_RATES_VALUE;
    typedef struct _DOT11_SUPPORTED_DATA_RATES_VALUE_V2 {
        UCHAR ucSupportedTxDataRatesValue[MAX_NUM_SUPPORTED_RATES_V2];
        UCHAR ucSupportedRxDataRatesValue[MAX_NUM_SUPPORTED_RATES_V2];
    } DOT11_SUPPORTED_DATA_RATES_VALUE_V2, * PDOT11_SUPPORTED_DATA_RATES_VALUE_V2;
    typedef DOT11_SUPPORTED_DATA_RATES_VALUE_V2
        DOT11_SUPPORTED_DATA_RATES_VALUE_V1, * PDOT11_SUPPORTED_DATA_RATES_VALUE_V1;
    #define DOT11_FREQUENCY_BANDS_LOWER 0x00000001
    #define DOT11_FREQUENCY_BANDS_MIDDLE 0x00000002
    #define DOT11_FREQUENCY_BANDS_UPPER 0x00000004
    #define DOT11_HR_CCA_MODE_ED_ONLY 0x00000001
    #define DOT11_HR_CCA_MODE_CS_ONLY 0x00000002
    #define DOT11_HR_CCA_MODE_CS_AND_ED 0x00000004
    #define DOT11_HR_CCA_MODE_CS_WITH_TIMER 0x00000008
    #define DOT11_HR_CCA_MODE_HRCS_AND_ED 0x00000010
typedef struct _DOT11_MULTI_DOMAIN_CAPABILITY_ENTRY {
    ULONG uMultiDomainCapabilityIndex;
    ULONG uFirstChannelNumber;
    ULONG uNumberOfChannels;
    LONG lMaximumTransmitPowerLevel;
} DOT11_MULTI_DOMAIN_CAPABILITY_ENTRY, *PDOT11_MULTI_DOMAIN_CAPABILITY_ENTRY;
typedef struct _DOT11_MD_CAPABILITY_ENTRY_LIST {
    ULONG uNumOfEntries;
    ULONG uTotalNumOfEntries;
    DOT11_MULTI_DOMAIN_CAPABILITY_ENTRY dot11MDCapabilityEntry[1];
} DOT11_MD_CAPABILITY_ENTRY_LIST, *PDOT11_MD_CAPABILITY_ENTRY_LIST;
    typedef enum _DOT11_HOP_ALGO_ADOPTED {
        dot11_hop_algo_current = 0,
        dot11_hop_algo_hop_index = 1,
        dot11_hop_algo_hcc = 2
    } DOT11_HOP_ALGO_ADOPTED, * PDOT11_HOP_ALGO_ADOPTED;
typedef struct _DOT11_HOPPING_PATTERN_ENTRY {
    ULONG uHoppingPatternIndex;
    ULONG uRandomTableFieldNumber;
} DOT11_HOPPING_PATTERN_ENTRY, *PDOT11_HOPPING_PATTERN_ENTRY;
typedef struct _DOT11_HOPPING_PATTERN_ENTRY_LIST {
    ULONG uNumOfEntries;
    ULONG uTotalNumOfEntries;
    DOT11_HOPPING_PATTERN_ENTRY dot11HoppingPatternEntry[1];
} DOT11_HOPPING_PATTERN_ENTRY_LIST, *PDOT11_HOPPING_PATTERN_ENTRY_LIST;
typedef struct _DOT11_WPA_TSC {
    ULONG uReserved;
    DOT11_OFFLOAD_TYPE dot11OffloadType;
    HANDLE hOffload;
    DOT11_IV48_COUNTER dot11IV48Counter;
} DOT11_WPA_TSC, * PDOT11_WPA_TSC;
typedef struct _DOT11_RSSI_RANGE {
    DOT11_PHY_TYPE dot11PhyType;
    ULONG uRSSIMin;
    ULONG uRSSIMax;
} DOT11_RSSI_RANGE, * PDOT11_RSSI_RANGE;
typedef struct _DOT11_NIC_SPECIFIC_EXTENSION {
    ULONG uBufferLength;
    ULONG uTotalBufferLength;
    UCHAR ucBuffer[1];
} DOT11_NIC_SPECIFIC_EXTENSION, * PDOT11_NIC_SPECIFIC_EXTENSION;
    typedef struct _DOT11_AP_JOIN_REQUEST {
        ULONG uJoinFailureTimeout;
        DOT11_RATE_SET OperationalRateSet;
        ULONG uChCenterFrequency;
        DOT11_BSS_DESCRIPTION dot11BSSDescription;
    } DOT11_AP_JOIN_REQUEST, * PDOT11_AP_JOIN_REQUEST;
    typedef struct _DOT11_RECV_SENSITIVITY {
        UCHAR ucDataRate;
        LONG lRSSIMin;
        LONG lRSSIMax;
    } DOT11_RECV_SENSITIVITY, * PDOT11_RECV_SENSITIVITY;
    typedef struct _DOT11_RECV_SENSITIVITY_LIST {
        union {
            DOT11_PHY_TYPE dot11PhyType;
            ULONG uPhyId;
        };
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        DOT11_RECV_SENSITIVITY dot11RecvSensitivity[1];
    } DOT11_RECV_SENSITIVITY_LIST, * PDOT11_RECV_SENSITIVITY_LIST;
    typedef enum _DOT11_AC_PARAM {
        dot11_AC_param_BE = 0,
        dot11_AC_param_BK = 1,
        dot11_AC_param_VI = 2,
        dot11_AC_param_VO = 3,
        dot11_AC_param_max
    } DOT11_AC_PARAM, * PDOT11_AC_PARAM;
    typedef struct _DOT11_WME_AC_PARAMETERS {
     UCHAR ucAccessCategoryIndex;
     UCHAR ucAIFSN;
     UCHAR ucECWmin;
     UCHAR ucECWmax;
     USHORT usTXOPLimit;
 } DOT11_WME_AC_PARAMETERS, * PDOT11_WME_AC_PARAMETERS;
 typedef struct _DOT11_WME_AC_PARAMTERS_LIST {
     ULONG uNumOfEntries;
     ULONG uTotalNumOfEntries;
     DOT11_WME_AC_PARAMETERS dot11WMEACParameters[1];
    } DOT11_WME_AC_PARAMETERS_LIST, * PDOT11_WME_AC_PARAMETERS_LIST;
    typedef struct _DOT11_WME_UPDATE_IE {
        ULONG uParamElemMinBeaconIntervals;
        ULONG uWMEInfoElemOffset;
        ULONG uWMEInfoElemLength;
        ULONG uWMEParamElemOffset;
        ULONG uWMEParamElemLength;
        UCHAR ucBuffer[1];
    } DOT11_WME_UPDATE_IE, * PDOT11_WME_UPDATE_IE;
    typedef struct _DOT11_QOS_TX_DURATION {
        ULONG uNominalMSDUSize;
        ULONG uMinPHYRate;
        ULONG uDuration;
    } DOT11_QOS_TX_DURATION, * PDOT11_QOS_TX_DURATION;
    typedef struct _DOT11_QOS_TX_MEDIUM_TIME {
        DOT11_MAC_ADDRESS dot11PeerAddress;
        UCHAR ucQoSPriority;
        ULONG uMediumTimeAdmited;
    } DOT11_QOS_TX_MEDIUM_TIME, * PDOT11_QOS_TX_MEDIUM_TIME;
    typedef struct _DOT11_SUPPORTED_OFDM_FREQUENCY {
        ULONG uCenterFrequency;
    } DOT11_SUPPORTED_OFDM_FREQUENCY, * PDOT11_SUPPORTED_OFDM_FREQUENCY;
    typedef struct _DOT11_SUPPORTED_OFDM_FREQUENCY_LIST {
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        DOT11_SUPPORTED_OFDM_FREQUENCY dot11SupportedOFDMFrequency[1];
    } DOT11_SUPPORTED_OFDM_FREQUENCY_LIST, * PDOT11_SUPPORTED_OFDM_FREQUENCY_LIST;
    typedef struct _DOT11_SUPPORTED_DSSS_CHANNEL {
        ULONG uChannel;
    } DOT11_SUPPORTED_DSSS_CHANNEL, * PDOT11_SUPPORTED_DSSS_CHANNEL;
    typedef struct _DOT11_SUPPORTED_DSSS_CHANNEL_LIST {
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        DOT11_SUPPORTED_DSSS_CHANNEL dot11SupportedDSSSChannel[1];
    } DOT11_SUPPORTED_DSSS_CHANNEL_LIST, * PDOT11_SUPPORTED_DSSS_CHANNEL_LIST;
typedef struct DOT11_BYTE_ARRAY {
    NDIS_OBJECT_HEADER Header;
    ULONG uNumOfBytes;
    ULONG uTotalNumOfBytes;
    UCHAR ucBuffer[1];
} DOT11_BYTE_ARRAY, * PDOT11_BYTE_ARRAY;
    #define DOT11_PHY_AUTO_CONFIG_ENABLED_FLAG 0x00000001U
    #define DOT11_MAC_AUTO_CONFIG_ENABLED_FLAG 0x00000002U
    #define DOT11_BSS_ENTRY_BYTE_ARRAY_REVISION_1 1
    typedef union DOT11_BSS_ENTRY_PHY_SPECIFIC_INFO {
        ULONG uChCenterFrequency;
        struct {
            ULONG uHopPattern;
            ULONG uHopSet;
            ULONG uDwellTime;
        } FHSS;
    } DOT11_BSS_ENTRY_PHY_SPECIFIC_INFO, * PDOT11_BSS_ENTRY_PHY_SPECIFIC_INFO;
    typedef struct DOT11_BSS_ENTRY {
        ULONG uPhyId;
        DOT11_BSS_ENTRY_PHY_SPECIFIC_INFO PhySpecificInfo;
        DOT11_MAC_ADDRESS dot11BSSID;
        DOT11_BSS_TYPE dot11BSSType;
        LONG lRSSI;
        ULONG uLinkQuality;
        BOOLEAN bInRegDomain;
        USHORT usBeaconPeriod;
        ULONGLONG ullTimestamp;
        ULONGLONG ullHostTimestamp;
        USHORT usCapabilityInformation;
        ULONG uBufferLength;
        UCHAR ucBuffer[1];
    } DOT11_BSS_ENTRY, * PDOT11_BSS_ENTRY;
    #define DOT11_POWER_SAVING_NO_POWER_SAVING 0
    #define DOT11_POWER_SAVING_FAST_PSP 8
    #define DOT11_POWER_SAVING_MAX_PSP 16
    #define DOT11_POWER_SAVING_MAXIMUM_LEVEL 24
    typedef struct DOT11_SSID_LIST {
        #define DOT11_SSID_LIST_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        [unique, size_is(uTotalNumOfEntries)] DOT11_SSID SSIDs[*];
    } DOT11_SSID_LIST, * PDOT11_SSID_LIST;
    typedef struct DOT11_MAC_ADDRESS_LIST {
        #define DOT11_MAC_ADDRESS_LIST_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        DOT11_MAC_ADDRESS MacAddrs[1];
    } DOT11_MAC_ADDRESS_LIST, * PDOT11_MAC_ADDRESS_LIST;
    typedef UCHAR DOT11_PMKID_VALUE[16];
    typedef struct DOT11_PMKID_ENTRY {
        DOT11_MAC_ADDRESS BSSID;
        DOT11_PMKID_VALUE PMKID;
        ULONG uFlags;
    } DOT11_PMKID_ENTRY, *PDOT11_PMKID_ENTRY;
    typedef struct DOT11_PMKID_LIST {
        #define DOT11_PMKID_LIST_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        DOT11_PMKID_ENTRY PMKIDs[1];
    } DOT11_PMKID_LIST, * PDOT11_PMKID_LIST;
    #define DOT11_STATISTICS_UNKNOWN (ULONGLONG)(-1LL)
    typedef struct DOT11_PHY_FRAME_STATISTICS {
        ULONGLONG ullTransmittedFrameCount;
        ULONGLONG ullMulticastTransmittedFrameCount;
        ULONGLONG ullFailedCount;
        ULONGLONG ullRetryCount;
        ULONGLONG ullMultipleRetryCount;
        ULONGLONG ullMaxTXLifetimeExceededCount;
        ULONGLONG ullTransmittedFragmentCount;
        ULONGLONG ullRTSSuccessCount;
        ULONGLONG ullRTSFailureCount;
        ULONGLONG ullACKFailureCount;
        ULONGLONG ullReceivedFrameCount;
        ULONGLONG ullMulticastReceivedFrameCount;
        ULONGLONG ullPromiscuousReceivedFrameCount;
        ULONGLONG ullMaxRXLifetimeExceededCount;
        ULONGLONG ullFrameDuplicateCount;
        ULONGLONG ullReceivedFragmentCount;
        ULONGLONG ullPromiscuousReceivedFragmentCount;
        ULONGLONG ullFCSErrorCount;
    } DOT11_PHY_FRAME_STATISTICS, * PDOT11_PHY_FRAME_STATISTICS;
    typedef struct DOT11_MAC_FRAME_STATISTICS {
        ULONGLONG ullTransmittedFrameCount;
        ULONGLONG ullReceivedFrameCount;
        ULONGLONG ullTransmittedFailureFrameCount;
        ULONGLONG ullReceivedFailureFrameCount;
        ULONGLONG ullWEPExcludedCount;
        ULONGLONG ullTKIPLocalMICFailures;
        ULONGLONG ullTKIPReplays;
        ULONGLONG ullTKIPICVErrorCount;
        ULONGLONG ullCCMPReplays;
        ULONGLONG ullCCMPDecryptErrors;
        ULONGLONG ullWEPUndecryptableCount;
        ULONGLONG ullWEPICVErrorCount;
        ULONGLONG ullDecryptSuccessCount;
        ULONGLONG ullDecryptFailureCount;
    } DOT11_MAC_FRAME_STATISTICS, * PDOT11_MAC_FRAME_STATISTICS;
    typedef struct DOT11_STATISTICS {
        #define DOT11_STATISTICS_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        ULONGLONG ullFourWayHandshakeFailures;
        ULONGLONG ullTKIPCounterMeasuresInvoked;
        ULONGLONG ullReserved;
        DOT11_MAC_FRAME_STATISTICS MacUcastCounters;
        DOT11_MAC_FRAME_STATISTICS MacMcastCounters;
        DOT11_PHY_FRAME_STATISTICS PhyCounters[1];
    } DOT11_STATISTICS, * PDOT11_STATISTICS;
    typedef struct DOT11_PRIVACY_EXEMPTION {
        USHORT usEtherType;
        #define DOT11_EXEMPT_NO_EXEMPTION 0
        #define DOT11_EXEMPT_ALWAYS 1
        #define DOT11_EXEMPT_ON_KEY_MAPPING_KEY_UNAVAILABLE 2
        USHORT usExemptionActionType;
        #define DOT11_EXEMPT_UNICAST 1
        #define DOT11_EXEMPT_MULTICAST 2
        #define DOT11_EXEMPT_BOTH 3
        USHORT usExemptionPacketType;
    } DOT11_PRIVACY_EXEMPTION, *PDOT11_PRIVACY_EXEMPTION;
    typedef struct DOT11_PRIVACY_EXEMPTION_LIST {
        #define DOT11_PRIVACY_EXEMPTION_LIST_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        [unique, size_is(uTotalNumOfEntries)] DOT11_PRIVACY_EXEMPTION PrivacyExemptionEntries[*];
    } DOT11_PRIVACY_EXEMPTION_LIST, * PDOT11_PRIVACY_EXEMPTION_LIST;
    typedef struct DOT11_AUTH_ALGORITHM_LIST {
        #define DOT11_AUTH_ALGORITHM_LIST_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        DOT11_AUTH_ALGORITHM AlgorithmIds[1];
    } DOT11_AUTH_ALGORITHM_LIST, * PDOT11_AUTH_ALGORITHM_LIST;
    typedef struct DOT11_AUTH_CIPHER_PAIR_LIST {
        #define DOT11_AUTH_CIPHER_PAIR_LIST_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        _Field_size_(uNumOfEntries) DOT11_AUTH_CIPHER_PAIR AuthCipherPairs[1];
    } DOT11_AUTH_CIPHER_PAIR_LIST, * PDOT11_AUTH_CIPHER_PAIR_LIST;
    typedef struct DOT11_CIPHER_ALGORITHM_LIST {
        #define DOT11_CIPHER_ALGORITHM_LIST_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        DOT11_CIPHER_ALGORITHM AlgorithmIds[1];
    } DOT11_CIPHER_ALGORITHM_LIST, * PDOT11_CIPHER_ALGORITHM_LIST;
    typedef struct DOT11_CIPHER_DEFAULT_KEY_VALUE {
        #define DOT11_CIPHER_DEFAULT_KEY_VALUE_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        ULONG uKeyIndex;
        DOT11_CIPHER_ALGORITHM AlgorithmId;
        DOT11_MAC_ADDRESS MacAddr;
        BOOLEAN bDelete;
        BOOLEAN bStatic;
        USHORT usKeyLength;
        [unique, size_is(usKeyLength)] UCHAR ucKey[*];
    } DOT11_CIPHER_DEFAULT_KEY_VALUE, * PDOT11_CIPHER_DEFAULT_KEY_VALUE;
    typedef struct DOT11_KEY_ALGO_TKIP_MIC {
        UCHAR ucIV48Counter[6];
        ULONG ulTKIPKeyLength;
        ULONG ulMICKeyLength;
        UCHAR ucTKIPMICKeys[1];
    } DOT11_KEY_ALGO_TKIP_MIC, * PDOT11_KEY_ALGO_TKIP_MIC;
    typedef struct DOT11_KEY_ALGO_CCMP {
        UCHAR ucIV48Counter[6];
        ULONG ulCCMPKeyLength;
        UCHAR ucCCMPKey[1];
    } DOT11_KEY_ALGO_CCMP, * PDOT11_KEY_ALGO_CCMP;
    typedef struct DOT11_KEY_ALGO_GCMP {
        UCHAR ucIV48Counter[6];
        ULONG ulGCMPKeyLength;
        UCHAR ucGCMPKey[1];
    } DOT11_KEY_ALGO_GCMP, * PDOT11_KEY_ALGO_GCMP;
    typedef struct DOT11_KEY_ALGO_BIP {
        UCHAR ucIPN[6];
        ULONG ulBIPKeyLength;
        UCHAR ucBIPKey[1];
    } DOT11_KEY_ALGO_BIP, * PDOT11_KEY_ALGO_BIP;
    typedef enum DOT11_DIRECTION {
        DOT11_DIR_INBOUND = 1,
        DOT11_DIR_OUTBOUND,
        DOT11_DIR_BOTH
    } DOT11_DIRECTION, * PDOT11_DIRECTION;
    #define DOT11_CIPHER_KEY_MAPPING_KEY_VALUE_BYTE_ARRAY_REVISION_1 1
    typedef struct DOT11_CIPHER_KEY_MAPPING_KEY_VALUE {
        DOT11_MAC_ADDRESS PeerMacAddr;
        DOT11_CIPHER_ALGORITHM AlgorithmId;
        DOT11_DIRECTION Direction;
        BOOLEAN bDelete;
        BOOLEAN bStatic;
        USHORT usKeyLength;
        [unique, size_is(usKeyLength)] UCHAR ucKey[*];
    } DOT11_CIPHER_KEY_MAPPING_KEY_VALUE, * PDOT11_CIPHER_KEY_MAPPING_KEY_VALUE;
    typedef enum _DOT11_ASSOCIATION_STATE {
        dot11_assoc_state_zero = 0,
        dot11_assoc_state_unauth_unassoc = 1,
        dot11_assoc_state_auth_unassoc = 2,
        dot11_assoc_state_auth_assoc = 3
    } DOT11_ASSOCIATION_STATE, * PDOT11_ASSOCIATION_STATE;
    typedef struct _DOT11_ASSOCIATION_INFO_EX {
        DOT11_MAC_ADDRESS PeerMacAddress;
        DOT11_MAC_ADDRESS BSSID;
        USHORT usCapabilityInformation;
        USHORT usListenInterval;
        UCHAR ucPeerSupportedRates[MAX_NUM_SUPPORTED_RATES_V2];
        USHORT usAssociationID;
        DOT11_ASSOCIATION_STATE dot11AssociationState;
        DOT11_POWER_MODE dot11PowerMode;
        LARGE_INTEGER liAssociationUpTime;
        ULONGLONG ullNumOfTxPacketSuccesses;
        ULONGLONG ullNumOfTxPacketFailures;
        ULONGLONG ullNumOfRxPacketSuccesses;
        ULONGLONG ullNumOfRxPacketFailures;
    } DOT11_ASSOCIATION_INFO_EX, * PDOT11_ASSOCIATION_INFO_EX;
    typedef struct DOT11_ASSOCIATION_INFO_LIST {
        #define DOT11_ASSOCIATION_INFO_LIST_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        DOT11_ASSOCIATION_INFO_EX dot11AssocInfo[1];
    } DOT11_ASSOCIATION_INFO_LIST, * PDOT11_ASSOCIATION_INFO_LIST;
    typedef struct DOT11_PHY_ID_LIST {
        #define DOT11_PHY_ID_LIST_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        ULONG dot11PhyId[1];
    } DOT11_PHY_ID_LIST, * PDOT11_PHY_ID_LIST;
    #define DOT11_PHY_ID_ANY (0xffffffffU)
    typedef struct DOT11_EXTSTA_CAPABILITY {
        #define DOT11_EXTSTA_CAPABILITY_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        ULONG uScanSSIDListSize;
        ULONG uDesiredBSSIDListSize;
        ULONG uDesiredSSIDListSize;
        ULONG uExcludedMacAddressListSize;
        ULONG uPrivacyExemptionListSize;
        ULONG uKeyMappingTableSize;
        ULONG uDefaultKeyTableSize;
        ULONG uWEPKeyValueMaxLength;
        ULONG uPMKIDCacheSize;
        ULONG uMaxNumPerSTADefaultKeyTables;
    } DOT11_EXTSTA_CAPABILITY, * PDOT11_EXTSTA_CAPABILITY;
    typedef struct DOT11_DATA_RATE_MAPPING_ENTRY {
        UCHAR ucDataRateIndex;
        UCHAR ucDataRateFlag;
        USHORT usDataRateValue;
    } DOT11_DATA_RATE_MAPPING_ENTRY, * PDOT11_DATA_RATE_MAPPING_ENTRY;
    typedef struct _DOT11_DATA_RATE_MAPPING_TABLE {
        #define DOT11_DATA_RATE_MAPPING_TABLE_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        ULONG uDataRateMappingLength;
        _Field_size_part_(DOT11_RATE_SET_MAX_LENGTH, uDataRateMappingLength)
            DOT11_DATA_RATE_MAPPING_ENTRY DataRateMappingEntries[DOT11_RATE_SET_MAX_LENGTH];
    } DOT11_DATA_RATE_MAPPING_TABLE, * PDOT11_DATA_RATE_MAPPING_TABLE;
    #define DOT11_DATA_RATE_NON_STANDARD 0x01U
    #define DOT11_DATA_RATE_INDEX_MASK 0x7fU
    typedef struct DOT11_COUNTRY_OR_REGION_STRING_LIST {
        #define DOT11_COUNTRY_OR_REGION_STRING_LIST_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        DOT11_COUNTRY_OR_REGION_STRING CountryOrRegionStrings[1];
    } DOT11_COUNTRY_OR_REGION_STRING_LIST, * PDOT11_COUNTRY_OR_REGION_STRING_LIST;
    typedef struct DOT11_PORT_STATE_NOTIFICATION {
        #define DOT11_PORT_STATE_NOTIFICATION_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS PeerMac;
        BOOLEAN bOpen;
    } DOT11_PORT_STATE_NOTIFICATION, * PDOT11_PORT_STATE_NOTIFICATION;
    typedef struct DOT11_IBSS_PARAMS {
        #define DOT11_IBSS_PARAMS_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        BOOLEAN bJoinOnly;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_IBSS_PARAMS, * PDOT11_IBSS_PARAMS;
    typedef struct DOT11_QOS_PARAMS {
        #define DOT11_QOS_PARAMS_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        #define DOT11_QOS_PROTOCOL_FLAG_WMM (0x01U)
        #define DOT11_QOS_PROTOCOL_FLAG_11E (0x02U)
        UCHAR ucEnabledQoSProtocolFlags;
    } DOT11_QOS_PARAMS, * PDOT11_QOS_PARAMS;
    typedef struct DOT11_ASSOCIATION_PARAMS {
        #define DOT11_ASSOCIATION_PARAMS_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS BSSID;
        ULONG uAssocRequestIEsOffset;
        ULONG uAssocRequestIEsLength;
    } DOT11_ASSOCIATION_PARAMS, *PDOT11_ASSOCIATION_PARAMS;
typedef struct _DOT11_FRAGMENT_DESCRIPTOR {
    ULONG uOffset;
    ULONG uLength;
} DOT11_FRAGMENT_DESCRIPTOR, * PDOT11_FRAGMENT_DESCRIPTOR;
typedef struct _DOT11_PER_MSDU_COUNTERS {
    ULONG uTransmittedFragmentCount;
    ULONG uRetryCount;
    ULONG uRTSSuccessCount;
    ULONG uRTSFailureCount;
    ULONG uACKFailureCount;
} DOT11_PER_MSDU_COUNTERS, * PDOT11_PER_MSDU_COUNTERS;
    typedef struct DOT11_PHY_ATTRIBUTES DOT11_PHY_ATTRIBUTES, * PDOT11_PHY_ATTRIBUTES;
    typedef struct DOT11_HRDSSS_PHY_ATTRIBUTES {
        BOOLEAN bShortPreambleOptionImplemented;
        BOOLEAN bPBCCOptionImplemented;
        BOOLEAN bChannelAgilityPresent;
        ULONG uHRCCAModeSupported;
    } DOT11_HRDSSS_PHY_ATTRIBUTES, * PDOT11_HRDSSS_PHY_ATTRIBUTES;
    typedef struct DOT11_OFDM_PHY_ATTRIBUTES {
        ULONG uFrequencyBandsSupported;
    } DOT11_OFDM_PHY_ATTRIBUTES, * PDOT11_OFDM_PHY_ATTRIBUTES;
    typedef struct DOT11_ERP_PHY_ATTRIBUTES {
            DOT11_HRDSSS_PHY_ATTRIBUTES HRDSSSAttributes;
        BOOLEAN bERPPBCCOptionImplemented;
        BOOLEAN bDSSSOFDMOptionImplemented;
        BOOLEAN bShortSlotTimeOptionImplemented;
    } DOT11_ERP_PHY_ATTRIBUTES, * PDOT11_ERP_PHY_ATTRIBUTES;
    struct DOT11_PHY_ATTRIBUTES {
        #define DOT11_PHY_ATTRIBUTES_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        DOT11_PHY_TYPE PhyType;
        BOOLEAN bHardwarePhyState;
        BOOLEAN bSoftwarePhyState;
        BOOLEAN bCFPollable;
        ULONG uMPDUMaxLength;
        DOT11_TEMP_TYPE TempType;
        DOT11_DIVERSITY_SUPPORT DiversitySupport;
        [switch_is(PhyType)]
        union {
            [case(dot11_phy_type_hrdsss)]
            DOT11_HRDSSS_PHY_ATTRIBUTES HRDSSSAttributes;
            [case(dot11_phy_type_ofdm)]
            DOT11_OFDM_PHY_ATTRIBUTES OFDMAttributes;
            [case(dot11_phy_type_erp)]
            DOT11_ERP_PHY_ATTRIBUTES ERPAttributes;
            [case(dot11_phy_type_ht)]
            ;
            [default]
            ;
        } PhySpecificAttributes;
        ULONG uNumberSupportedPowerLevels;
        ULONG TxPowerLevels[8];
        ULONG uNumDataRateMappingEntries;
        DOT11_DATA_RATE_MAPPING_ENTRY DataRateMappingEntries[DOT11_RATE_SET_MAX_LENGTH];
        DOT11_SUPPORTED_DATA_RATES_VALUE_V2 SupportedDataRatesValue;
    };
typedef struct DOT11_EXTSTA_ATTRIBUTES DOT11_EXTSTA_ATTRIBUTES, * PDOT11_EXTSTA_ATTRIBUTES;
struct DOT11_EXTSTA_ATTRIBUTES {
    #define DOT11_EXTSTA_ATTRIBUTES_REVISION_1 1
    #define DOT11_EXTSTA_ATTRIBUTES_REVISION_2 2
    #define DOT11_EXTSTA_ATTRIBUTES_REVISION_3 3
    #define DOT11_EXTSTA_ATTRIBUTES_REVISION_4 4
    NDIS_OBJECT_HEADER Header;
    ULONG uScanSSIDListSize;
    ULONG uDesiredBSSIDListSize;
    ULONG uDesiredSSIDListSize;
    ULONG uExcludedMacAddressListSize;
    ULONG uPrivacyExemptionListSize;
    ULONG uKeyMappingTableSize;
    ULONG uDefaultKeyTableSize;
    ULONG uWEPKeyValueMaxLength;
    ULONG uPMKIDCacheSize;
    ULONG uMaxNumPerSTADefaultKeyTables;
    BOOLEAN bStrictlyOrderedServiceClassImplemented;
    UCHAR ucSupportedQoSProtocolFlags;
    BOOLEAN bSafeModeImplemented;
    ULONG uNumSupportedCountryOrRegionStrings;
    [size_is(uNumSupportedCountryOrRegionStrings)]
    PDOT11_COUNTRY_OR_REGION_STRING pSupportedCountryOrRegionStrings;
    ULONG uInfraNumSupportedUcastAlgoPairs;
    [size_is(uInfraNumSupportedUcastAlgoPairs)]
    PDOT11_AUTH_CIPHER_PAIR pInfraSupportedUcastAlgoPairs;
    ULONG uInfraNumSupportedMcastAlgoPairs;
    [size_is(uInfraNumSupportedMcastAlgoPairs)]
    PDOT11_AUTH_CIPHER_PAIR pInfraSupportedMcastAlgoPairs;
    ULONG uAdhocNumSupportedUcastAlgoPairs;
    [size_is(uAdhocNumSupportedUcastAlgoPairs)]
    PDOT11_AUTH_CIPHER_PAIR pAdhocSupportedUcastAlgoPairs;
    ULONG uAdhocNumSupportedMcastAlgoPairs;
    [size_is(uAdhocNumSupportedMcastAlgoPairs)]
    PDOT11_AUTH_CIPHER_PAIR pAdhocSupportedMcastAlgoPairs;
    BOOLEAN bAutoPowerSaveMode;
    ULONG uMaxNetworkOffloadListSize;
    BOOLEAN bMFPCapable;
    ULONG uInfraNumSupportedMcastMgmtAlgoPairs;
    [size_is(uInfraNumSupportedMcastMgmtAlgoPairs)]
    PDOT11_AUTH_CIPHER_PAIR pInfraSupportedMcastMgmtAlgoPairs;
    BOOLEAN bNeighborReportSupported;
    BOOLEAN bAPChannelReportSupported;
    BOOLEAN bActionFramesSupported;
    BOOLEAN bANQPQueryOffloadSupported;
    BOOLEAN bHESSIDConnectionSupported;
};
        typedef struct _DOT11_RECV_EXTENSION_INFO {
            ULONG uVersion;
            PVOID pvReserved;
            DOT11_PHY_TYPE dot11PhyType;
            ULONG uChCenterFrequency;
            LONG lRSSI;
            LONG lRSSIMin;
            LONG lRSSIMax;
            ULONG uRSSI;
            UCHAR ucPriority;
            UCHAR ucDataRate;
            UCHAR ucPeerMacAddress[6];
            ULONG dwExtendedStatus;
            HANDLE hWEPOffloadContext;
            HANDLE hAuthOffloadContext;
            USHORT usWEPAppliedMask;
            USHORT usWPAMSDUPriority;
            DOT11_IV48_COUNTER dot11LowestIV48Counter;
            USHORT usDot11LeftRWBitMap;
            DOT11_IV48_COUNTER dot11HighestIV48Counter;
            USHORT usDot11RightRWBitMap;
            USHORT usNumberOfMPDUsReceived;
            USHORT usNumberOfFragments;
            PVOID pNdisPackets[1];
        } DOT11_RECV_EXTENSION_INFO, * PDOT11_RECV_EXTENSION_INFO;
        typedef struct _DOT11_RECV_EXTENSION_INFO_V2 {
            ULONG uVersion;
            PVOID pvReserved;
            DOT11_PHY_TYPE dot11PhyType;
            ULONG uChCenterFrequency;
            LONG lRSSI;
            ULONG uRSSI;
            UCHAR ucPriority;
            UCHAR ucDataRate;
            UCHAR ucPeerMacAddress[6];
            ULONG dwExtendedStatus;
            HANDLE hWEPOffloadContext;
            HANDLE hAuthOffloadContext;
            USHORT usWEPAppliedMask;
            USHORT usWPAMSDUPriority;
            DOT11_IV48_COUNTER dot11LowestIV48Counter;
            USHORT usDot11LeftRWBitMap;
            DOT11_IV48_COUNTER dot11HighestIV48Counter;
            USHORT usDot11RightRWBitMap;
            USHORT usNumberOfMPDUsReceived;
            USHORT usNumberOfFragments;
            PVOID pNdisPackets[1];
        } DOT11_RECV_EXTENSION_INFO_V2, * PDOT11_RECV_EXTENSION_INFO_V2;
typedef struct _DOT11_STATUS_INDICATION {
    ULONG uStatusType;
    NDIS_STATUS ndisStatus;
} DOT11_STATUS_INDICATION, * PDOT11_STATUS_INDICATION;
typedef struct DOT11_MPDU_MAX_LENGTH_INDICATION {
    #define DOT11_MPDU_MAX_LENGTH_INDICATION_REVISION_1 1
    NDIS_OBJECT_HEADER Header;
    ULONG uPhyId;
    ULONG uMPDUMaxLength;
} DOT11_MPDU_MAX_LENGTH_INDICATION, * PDOT11_MPDU_MAX_LENGTH_INDICATION;
typedef struct DOT11_ASSOCIATION_START_PARAMETERS {
    #define DOT11_ASSOCIATION_START_PARAMETERS_REVISION_1 1
    NDIS_OBJECT_HEADER Header;
    DOT11_MAC_ADDRESS MacAddr;
    DOT11_SSID SSID;
    ULONG uIHVDataOffset, uIHVDataSize;
} DOT11_ASSOCIATION_START_PARAMETERS, * PDOT11_ASSOCIATION_START_PARAMETERS;
typedef struct DOT11_ENCAP_ENTRY {
    USHORT usEtherType;
    USHORT usEncapType;
} DOT11_ENCAP_ENTRY, * PDOT11_ENCAP_ENTRY;
typedef enum DOT11_DS_INFO {
    DOT11_DS_CHANGED,
    DOT11_DS_UNCHANGED,
    DOT11_DS_UNKNOWN
} DOT11_DS_INFO, * PDOT11_DS_INFO;
typedef ULONG DOT11_ASSOC_STATUS;
typedef struct DOT11_ASSOCIATION_COMPLETION_PARAMETERS {
    #define DOT11_ASSOCIATION_COMPLETION_PARAMETERS_REVISION_1 1
    #define DOT11_ASSOCIATION_COMPLETION_PARAMETERS_REVISION_2 2
    NDIS_OBJECT_HEADER Header;
    DOT11_MAC_ADDRESS MacAddr;
    DOT11_ASSOC_STATUS uStatus;
    BOOLEAN bReAssocReq;
    BOOLEAN bReAssocResp;
    ULONG uAssocReqOffset, uAssocReqSize;
    ULONG uAssocRespOffset, uAssocRespSize;
    ULONG uBeaconOffset, uBeaconSize;
    ULONG uIHVDataOffset, uIHVDataSize;
    DOT11_AUTH_ALGORITHM AuthAlgo;
    DOT11_CIPHER_ALGORITHM UnicastCipher;
    DOT11_CIPHER_ALGORITHM MulticastCipher;
    ULONG uActivePhyListOffset, uActivePhyListSize;
    BOOLEAN bFourAddressSupported;
    BOOLEAN bPortAuthorized;
    UCHAR ucActiveQoSProtocol;
    DOT11_DS_INFO DSInfo;
    ULONG uEncapTableOffset, uEncapTableSize;
    DOT11_CIPHER_ALGORITHM MulticastMgmtCipher;
    ULONG uAssocComebackTime;
} DOT11_ASSOCIATION_COMPLETION_PARAMETERS, * PDOT11_ASSOCIATION_COMPLETION_PARAMETERS;
typedef struct DOT11_CONNECTION_START_PARAMETERS {
    #define DOT11_CONNECTION_START_PARAMETERS_REVISION_1 1
    NDIS_OBJECT_HEADER Header;
    DOT11_BSS_TYPE BSSType;
    DOT11_MAC_ADDRESS AdhocBSSID;
    DOT11_SSID AdhocSSID;
} DOT11_CONNECTION_START_PARAMETERS, * PDOT11_CONNECTION_START_PARAMETERS;
typedef struct DOT11_CONNECTION_COMPLETION_PARAMETERS {
    #define DOT11_CONNECTION_COMPLETION_PARAMETERS_REVISION_1 1
    NDIS_OBJECT_HEADER Header;
    DOT11_ASSOC_STATUS uStatus;
} DOT11_CONNECTION_COMPLETION_PARAMETERS, * PDOT11_CONNECTION_COMPLETION_PARAMETERS;
typedef struct DOT11_ROAMING_START_PARAMETERS {
    #define DOT11_ROAMING_START_PARAMETERS_REVISION_1 1
    NDIS_OBJECT_HEADER Header;
    DOT11_MAC_ADDRESS AdhocBSSID;
    DOT11_SSID AdhocSSID;
    DOT11_ASSOC_STATUS uRoamingReason;
} DOT11_ROAMING_START_PARAMETERS, * PDOT11_ROAMING_START_PARAMETERS;
typedef struct DOT11_ROAMING_COMPLETION_PARAMETERS {
    #define DOT11_ROAMING_COMPLETION_PARAMETERS_REVISION_1 1
    NDIS_OBJECT_HEADER Header;
    DOT11_ASSOC_STATUS uStatus;
} DOT11_ROAMING_COMPLETION_PARAMETERS, * PDOT11_ROAMING_COMPLETION_PARAMETERS;
typedef struct DOT11_DISASSOCIATION_PARAMETERS {
    #define DOT11_DISASSOCIATION_PARAMETERS_REVISION_1 1
    NDIS_OBJECT_HEADER Header;
    DOT11_MAC_ADDRESS MacAddr;
    DOT11_ASSOC_STATUS uReason;
    ULONG uIHVDataOffset, uIHVDataSize;
} DOT11_DISASSOCIATION_PARAMETERS, * PDOT11_DISASSOCIATION_PARAMETERS;
typedef struct DOT11_TKIPMIC_FAILURE_PARAMETERS {
    #define DOT11_TKIPMIC_FAILURE_PARAMETERS_REVISION_1 1
    NDIS_OBJECT_HEADER Header;
    BOOLEAN bDefaultKeyFailure;
    ULONG uKeyIndex;
    DOT11_MAC_ADDRESS PeerMac;
} DOT11_TKIPMIC_FAILURE_PARAMETERS, * PDOT11_TKIPMIC_FAILURE_PARAMETERS;
typedef struct DOT11_PMKID_CANDIDATE_LIST_PARAMETERS {
    #define DOT11_PMKID_CANDIDATE_LIST_PARAMETERS_REVISION_1 1
    NDIS_OBJECT_HEADER Header;
    ULONG uCandidateListSize;
    ULONG uCandidateListOffset;
} DOT11_PMKID_CANDIDATE_LIST_PARAMETERS, * PDOT11_PMKID_CANDIDATE_LIST_PARAMETERS;
typedef struct DOT11_BSSID_CANDIDATE {
    DOT11_MAC_ADDRESS BSSID;
    #define DOT11_PMKID_CANDIDATE_PREAUTH_ENABLED 0x00000001U
    ULONG uFlags;
} DOT11_BSSID_CANDIDATE, *PDOT11_BSSID_CANDIDATE;
typedef struct DOT11_PHY_STATE_PARAMETERS {
    #define DOT11_PHY_STATE_PARAMETERS_REVISION_1 1
    NDIS_OBJECT_HEADER Header;
    ULONG uPhyId;
    BOOLEAN bHardwarePhyState;
    BOOLEAN bSoftwarePhyState;
} DOT11_PHY_STATE_PARAMETERS, * PDOT11_PHY_STATE_PARAMETERS;
typedef struct DOT11_LINK_QUALITY_ENTRY {
    DOT11_MAC_ADDRESS PeerMacAddr;
    UCHAR ucLinkQuality;
} DOT11_LINK_QUALITY_ENTRY, *PDOT11_LINK_QUALITY_ENTRY;
typedef struct DOT11_LINK_QUALITY_PARAMETERS {
    #define DOT11_LINK_QUALITY_PARAMETERS_REVISION_1 1
    NDIS_OBJECT_HEADER Header;
    ULONG uLinkQualityListSize;
    ULONG uLinkQualityListOffset;
} DOT11_LINK_QUALITY_PARAMETERS, * PDOT11_LINK_QUALITY_PARAMETERS;
typedef struct DOT11_EXTSTA_SEND_CONTEXT {
    #define DOT11_EXTSTA_SEND_CONTEXT_REVISION_1 1
    NDIS_OBJECT_HEADER Header;
    USHORT usExemptionActionType;
    ULONG uPhyId;
    ULONG uDelayedSleepValue;
    ULONG_PTR pvMediaSpecificInfo;
    ULONG uSendFlags;
} DOT11_EXTSTA_SEND_CONTEXT, * PDOT11_EXTSTA_SEND_CONTEXT;
typedef struct DOT11_EXTSTA_RECV_CONTEXT {
    #define DOT11_EXTSTA_RECV_CONTEXT_REVISION_1 1
    NDIS_OBJECT_HEADER Header;
    ULONG uReceiveFlags;
    ULONG uPhyId;
    ULONG uChCenterFrequency;
    USHORT usNumberOfMPDUsReceived;
    LONG lRSSI;
    UCHAR ucDataRate;
    ULONG uSizeMediaSpecificInfo;
    ULONG_PTR pvMediaSpecificInfo;
    ULONGLONG ullTimestamp;
} DOT11_EXTSTA_RECV_CONTEXT, * PDOT11_EXTSTA_RECV_CONTEXT;
    DEFINE_GUID(name, 0x6cb9a43e+(ord), 0xc45f, 0x4039, 0x9f, 0xe6, 0xd0, 0x8c, 0xb0, 0x57, 0x18, 0x4c)
DEFINE_NWF_GUID(GUID_NWF_OFFLOAD_CAPABILITY,0);
DEFINE_NWF_GUID(GUID_NWF_CURRENT_OFFLOAD_CAPABILITY,1);
DEFINE_NWF_GUID(GUID_NWF_WEP_OFFLOAD,2);
DEFINE_NWF_GUID(GUID_NWF_WEP_UPLOAD,3);
DEFINE_NWF_GUID(GUID_NWF_DEFAULT_WEP_OFFLOAD,4);
DEFINE_NWF_GUID(GUID_NWF_DEFAULT_WEP_UPLOAD,5);
DEFINE_NWF_GUID(GUID_NWF_MPDU_MAX_LENGTH,6);
DEFINE_NWF_GUID(GUID_NWF_OPERATION_MODE_CAPABILITY,7);
DEFINE_NWF_GUID(GUID_NWF_CURRENT_OPERATION_MODE,8);
DEFINE_NWF_GUID(GUID_NWF_CURRENT_PACKET_FILTER,9);
DEFINE_NWF_GUID(GUID_NWF_ATIM_WINDOW,10);
DEFINE_NWF_GUID(GUID_NWF_SCAN_REQUEST,11);
DEFINE_NWF_GUID(GUID_NWF_CURRENT_PHY_TYPE,12);
DEFINE_NWF_GUID(GUID_NWF_JOIN_REQUEST,13);
DEFINE_NWF_GUID(GUID_NWF_START_REQUEST,14);
DEFINE_NWF_GUID(GUID_NWF_UPDATE_IE,15);
DEFINE_NWF_GUID(GUID_NWF_RESET_REQUEST,16);
DEFINE_NWF_GUID(GUID_NWF_NIC_POWER_STATE,17);
DEFINE_NWF_GUID(GUID_NWF_OPTIONAL_CAPABILITY,18);
DEFINE_NWF_GUID(GUID_NWF_CURRENT_OPTIONAL_CAPABILITY,19);
DEFINE_NWF_GUID(GUID_NWF_STATION_ID,20);
DEFINE_NWF_GUID(GUID_NWF_MEDIUM_OCCUPANCY_LIMIT,21);
DEFINE_NWF_GUID(GUID_NWF_CF_POLLABLE,22);
DEFINE_NWF_GUID(GUID_NWF_CFP_PERIOD,23);
DEFINE_NWF_GUID(GUID_NWF_CFP_MAX_DURATION,24);
DEFINE_NWF_GUID(GUID_NWF_POWER_MGMT_MODE,25);
DEFINE_NWF_GUID(GUID_NWF_OPERATIONAL_RATE_SET,26);
DEFINE_NWF_GUID(GUID_NWF_BEACON_PERIOD,27);
DEFINE_NWF_GUID(GUID_NWF_DTIM_PERIOD,28);
DEFINE_NWF_GUID(GUID_NWF_WEP_ICV_ERROR_COUNT,29);
DEFINE_NWF_GUID(GUID_NWF_MAC_ADDRESS,30);
DEFINE_NWF_GUID(GUID_NWF_RTS_THRESHOLD,31);
DEFINE_NWF_GUID(GUID_NWF_SHORT_RETRY_LIMIT,32);
DEFINE_NWF_GUID(GUID_NWF_LONG_RETRY_LIMIT,33);
DEFINE_NWF_GUID(GUID_NWF_FRAGMENTATION_THRESHOLD,34);
DEFINE_NWF_GUID(GUID_NWF_MAX_TRANSMIT_MSDU_LIFETIME,35);
DEFINE_NWF_GUID(GUID_NWF_MAX_RECEIVE_LIFETIME,36);
DEFINE_NWF_GUID(GUID_NWF_COUNTERS_ENTRY,37);
DEFINE_NWF_GUID(GUID_NWF_SUPPORTED_PHY_TYPES,38);
DEFINE_NWF_GUID(GUID_NWF_CURRENT_REG_DOMAIN,39);
DEFINE_NWF_GUID(GUID_NWF_TEMP_TYPE,40);
DEFINE_NWF_GUID(GUID_NWF_CURRENT_TX_ANTENNA,41);
DEFINE_NWF_GUID(GUID_NWF_DIVERSITY_SUPPORT,42);
DEFINE_NWF_GUID(GUID_NWF_CURRENT_RX_ANTENNA,43);
DEFINE_NWF_GUID(GUID_NWF_SUPPORTED_POWER_LEVELS,44);
DEFINE_NWF_GUID(GUID_NWF_CURRENT_TX_POWER_LEVEL,45);
DEFINE_NWF_GUID(GUID_NWF_HOP_TIME,46);
DEFINE_NWF_GUID(GUID_NWF_CURRENT_CHANNEL_NUMBER,47);
DEFINE_NWF_GUID(GUID_NWF_MAX_DWELL_TIME,48);
DEFINE_NWF_GUID(GUID_NWF_CURRENT_DWELL_TIME,49);
DEFINE_NWF_GUID(GUID_NWF_CURRENT_SET,50);
DEFINE_NWF_GUID(GUID_NWF_CURRENT_PATTERN,51);
DEFINE_NWF_GUID(GUID_NWF_CURRENT_INDEX,52);
DEFINE_NWF_GUID(GUID_NWF_CURRENT_CHANNEL,53);
DEFINE_NWF_GUID(GUID_NWF_CCA_MODE_SUPPORTED,54);
DEFINE_NWF_GUID(GUID_NWF_CURRENT_CCA_MODE,55);
DEFINE_NWF_GUID(GUID_NWF_ED_THRESHOLD,56);
DEFINE_NWF_GUID(GUID_NWF_CCA_WATCHDOG_TIMER_MAX,57);
DEFINE_NWF_GUID(GUID_NWF_CCA_WATCHDOG_COUNT_MAX,58);
DEFINE_NWF_GUID(GUID_NWF_CCA_WATCHDOG_TIMER_MIN,59);
DEFINE_NWF_GUID(GUID_NWF_CCA_WATCHDOG_COUNT_MIN,60);
DEFINE_NWF_GUID(GUID_NWF_REG_DOMAINS_SUPPORT_VALUE,61);
DEFINE_NWF_GUID(GUID_NWF_SUPPORTED_TX_ANTENNA,62);
DEFINE_NWF_GUID(GUID_NWF_SUPPORTED_RX_ANTENNA,63);
DEFINE_NWF_GUID(GUID_NWF_DIVERSITY_SELECTION_RX,64);
DEFINE_NWF_GUID(GUID_NWF_SUPPORTED_DATA_RATES_VALUE,65);
DEFINE_NWF_GUID(GUID_NWF_CURRENT_FREQUENCY,66);
DEFINE_NWF_GUID(GUID_NWF_TI_THRESHOLD,67);
DEFINE_NWF_GUID(GUID_NWF_FREQUENCY_BANDS_SUPPORTED,68);
DEFINE_NWF_GUID(GUID_NWF_SHORT_PREAMBLE_OPTION_IMPLEMENTED,69);
DEFINE_NWF_GUID(GUID_NWF_PBCC_OPTION_IMPLEMENTED,70);
DEFINE_NWF_GUID(GUID_NWF_CHANNEL_AGILITY_PRESENT,71);
DEFINE_NWF_GUID(GUID_NWF_CHANNEL_AGILITY_ENABLED,72);
DEFINE_NWF_GUID(GUID_NWF_HR_CCA_MODE_SUPPORTED,73);
DEFINE_NWF_GUID(GUID_NWF_MULTI_DOMAIN_CAPABILITY_IMPLEMENTED,74);
DEFINE_NWF_GUID(GUID_NWF_MULTI_DOMAIN_CAPABILITY_ENABLED,75);
DEFINE_NWF_GUID(GUID_NWF_COUNTRY_STRING,76);
DEFINE_NWF_GUID(GUID_NWF_MULTI_DOMAIN_CAPABILITY,77);
DEFINE_NWF_GUID(GUID_NWF_EHCC_PRIME_RADIX,78);
DEFINE_NWF_GUID(GUID_NWF_EHCC_NUMBER_OF_CHANNELS_FAMILY_INDEX,79);
DEFINE_NWF_GUID(GUID_NWF_EHCC_CAPABILITY_IMPLEMENTED,80);
DEFINE_NWF_GUID(GUID_NWF_EHCC_CAPABILITY_ENABLED,81);
DEFINE_NWF_GUID(GUID_NWF_HOP_ALGORITHM_ADOPTED,82);
DEFINE_NWF_GUID(GUID_NWF_RANDOM_TABLE_FLAG,83);
DEFINE_NWF_GUID(GUID_NWF_NUMBER_OF_HOPPING_SETS,84);
DEFINE_NWF_GUID(GUID_NWF_HOP_MODULUS,85);
DEFINE_NWF_GUID(GUID_NWF_HOP_OFFSET,86);
DEFINE_NWF_GUID(GUID_NWF_HOPPING_PATTERN,87);
DEFINE_NWF_GUID(GUID_NWF_RANDOM_TABLE_FIELD_NUMBER,88);
DEFINE_NWF_GUID(GUID_NWF_WPA_TSC,89);
DEFINE_NWF_GUID(GUID_NWF_RSSI_RANGE,90);
DEFINE_NWF_GUID(GUID_NWF_RF_USAGE,91);
DEFINE_NWF_GUID(GUID_NWF_NIC_SPECIFIC_EXTENSION,92);
DEFINE_NWF_GUID(GUID_NWF_AP_JOIN_REQUEST,93);
DEFINE_NWF_GUID(GUID_NWF_ERP_PBCC_OPTION_IMPLEMENTED,94);
DEFINE_NWF_GUID(GUID_NWF_ERP_PBCC_OPTION_ENABLED,95);
DEFINE_NWF_GUID(GUID_NWF_DSSS_OFDM_OPTION_IMPLEMENTED,96);
DEFINE_NWF_GUID(GUID_NWF_DSSS_OFDM_OPTION_ENABLED,97);
DEFINE_NWF_GUID(GUID_NWF_SHORT_SLOT_TIME_OPTION_IMPLEMENTED,98);
DEFINE_NWF_GUID(GUID_NWF_SHORT_SLOT_TIME_OPTION_ENABLED,99);
DEFINE_NWF_GUID(GUID_NWF_MAX_MAC_ADDRESS_STATES,100);
DEFINE_NWF_GUID(GUID_NWF_RECV_SENSITIVITY_LIST,101);
DEFINE_NWF_GUID(GUID_NWF_WME_IMPLEMENTED,102);
DEFINE_NWF_GUID(GUID_NWF_WME_ENABLED,103);
DEFINE_NWF_GUID(GUID_NWF_WME_AC_PARAMETERS,104);
DEFINE_NWF_GUID(GUID_NWF_WME_UPDATE_IE,105);
DEFINE_NWF_GUID(GUID_NWF_QOS_TX_QUEUES_SUPPORTED,106);
DEFINE_NWF_GUID(GUID_NWF_QOS_TX_DURATION,107);
DEFINE_NWF_GUID(GUID_NWF_QOS_TX_MEDIUM_TIME,108);
DEFINE_NWF_GUID(GUID_NWF_SUPPORTED_OFDM_FREQUENCY_LIST,109);
DEFINE_NWF_GUID(GUID_NWF_SUPPORTED_DSSS_CHANNEL_LIST,110);
DEFINE_NWF_GUID(GUID_NWF_AUTO_CONFIG_ENABLED,120);
DEFINE_NWF_GUID(GUID_NWF_ENUM_BSS_LIST,121);
DEFINE_NWF_GUID(GUID_NWF_FLUSH_BSS_LIST,122);
DEFINE_NWF_GUID(GUID_NWF_POWER_MGMT_REQUEST,123);
DEFINE_NWF_GUID(GUID_NWF_DESIRED_SSID_LIST,124);
DEFINE_NWF_GUID(GUID_NWF_EXCLUDED_MAC_ADDRESS_LIST,125);
DEFINE_NWF_GUID(GUID_NWF_DESIRED_BSSID_LIST,126);
DEFINE_NWF_GUID(GUID_NWF_DESIRED_BSS_TYPE,127);
DEFINE_NWF_GUID(GUID_NWF_PMKID_LIST,128);
DEFINE_NWF_GUID(GUID_NWF_CONNECT_REQUEST,129);
DEFINE_NWF_GUID(GUID_NWF_EXCLUDE_UNENCRYPTED,130);
DEFINE_NWF_GUID(GUID_NWF_STATISTICS,131);
DEFINE_NWF_GUID(GUID_NWF_PRIVACY_EXEMPTION_LIST,132);
DEFINE_NWF_GUID(GUID_NWF_ENABLED_AUTHENTICATION_ALGORITHM,133);
DEFINE_NWF_GUID(GUID_NWF_SUPPORTED_UNICAST_ALGORITHM_PAIR,134);
DEFINE_NWF_GUID(GUID_NWF_ENABLED_UNICAST_CIPHER_ALGORITHM,135);
DEFINE_NWF_GUID(GUID_NWF_SUPPORTED_MULTICAST_ALGORITHM_PAIR,136);
DEFINE_NWF_GUID(GUID_NWF_ENABLED_MULTICAST_CIPHER_ALGORITHM,137);
DEFINE_NWF_GUID(GUID_NWF_CIPHER_DEFAULT_KEY_ID,138);
DEFINE_NWF_GUID(GUID_NWF_CIPHER_DEFAULT_KEY,139);
DEFINE_NWF_GUID(GUID_NWF_CIPHER_KEY_MAPPING_KEY,140);
DEFINE_NWF_GUID(GUID_NWF_ENUM_ASSOCIATION_INFO,141);
DEFINE_NWF_GUID(GUID_NWF_DISCONNECT_REQUEST,142);
DEFINE_NWF_GUID(GUID_NWF_UNICAST_USE_GROUP_ENABLED,143);
DEFINE_NWF_GUID(GUID_NWF_PHY_STATE,144);
DEFINE_NWF_GUID(GUID_NWF_DESIRED_PHY_LIST,145);
DEFINE_NWF_GUID(GUID_NWF_CURRENT_PHY_ID,146);
DEFINE_NWF_GUID(GUID_NWF_MEDIA_STREAMING_ENABLED,147);
DEFINE_NWF_GUID(GUID_NWF_UNREACHABLE_DETECTION_THRESHOLD,148);
DEFINE_NWF_GUID(GUID_NWF_ACTIVE_PHY_LIST,149);
DEFINE_NWF_GUID(GUID_NWF_EXTSTA_CAPABILITY,150);
DEFINE_NWF_GUID(GUID_NWF_DATA_RATE_MAPPING_TABLE,151);
DEFINE_NWF_GUID(GUID_NWF_SUPPORTED_COUNTRY_OR_REGION_STRING,152);
DEFINE_NWF_GUID(GUID_NWF_DESIRED_COUNTRY_OR_REGION_STRING,153);
DEFINE_NWF_GUID(GUID_NWF_PORT_STATE_NOTIFICATION,154);
DEFINE_NWF_GUID(GUID_NWF_IBSS_PARAMS,155);
DEFINE_NWF_GUID(GUID_NWF_QOS_PARAMS,156);
DEFINE_NWF_GUID(GUID_NWF_SAFE_MODE_ENABLED,157);
DEFINE_NWF_GUID(GUID_NWF_HIDDEN_NETWORK_ENABLED,158);
DEFINE_NWF_GUID(GUID_NWF_ASSOCIATION_PARAMS,159);
DEFINE_NWF_GUID(GUID_NWF_CURRENT_ADDRESS,1024+2);
DEFINE_NWF_GUID(GUID_NWF_PERMANENT_ADDRESS,1024+3);
DEFINE_NWF_GUID(GUID_NWF_MULTICAST_LIST,1024+4);
DEFINE_NWF_GUID(GUID_NWF_MAXIMUM_LIST_SIZE,1024+5);
typedef
struct _DOT11_EXTAP_ATTRIBUTES
{
    NDIS_OBJECT_HEADER Header;
    ULONG uScanSSIDListSize;
    ULONG uDesiredSSIDListSize;
    ULONG uPrivacyExemptionListSize;
    ULONG uAssociationTableSize;
    ULONG uDefaultKeyTableSize;
    ULONG uWEPKeyValueMaxLength;
    BOOLEAN bStrictlyOrderedServiceClassImplemented;
    ULONG uNumSupportedCountryOrRegionStrings;
    [size_is(uNumSupportedCountryOrRegionStrings)]
    PDOT11_COUNTRY_OR_REGION_STRING pSupportedCountryOrRegionStrings;
    ULONG uInfraNumSupportedUcastAlgoPairs;
    [size_is(uInfraNumSupportedUcastAlgoPairs)]
    PDOT11_AUTH_CIPHER_PAIR pInfraSupportedUcastAlgoPairs;
    ULONG uInfraNumSupportedMcastAlgoPairs;
    [size_is(uInfraNumSupportedMcastAlgoPairs)]
    PDOT11_AUTH_CIPHER_PAIR pInfraSupportedMcastAlgoPairs;
}
DOT11_EXTAP_ATTRIBUTES, *PDOT11_EXTAP_ATTRIBUTES;
    typedef
    struct _DOT11_INCOMING_ASSOC_STARTED_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS PeerMacAddr;
    }
    DOT11_INCOMING_ASSOC_STARTED_PARAMETERS, *PDOT11_INCOMING_ASSOC_STARTED_PARAMETERS;
    typedef
    struct _DOT11_INCOMING_ASSOC_REQUEST_RECEIVED_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS PeerMacAddr;
        BOOLEAN bReAssocReq;
        ULONG uAssocReqOffset;
        ULONG uAssocReqSize;
    }
    DOT11_INCOMING_ASSOC_REQUEST_RECEIVED_PARAMETERS, *PDOT11_INCOMING_ASSOC_REQUEST_RECEIVED_PARAMETERS;
    typedef
    struct _DOT11_INCOMING_ASSOC_COMPLETION_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS PeerMacAddr;
        ULONG uStatus;
        UCHAR ucErrorSource;
        BOOLEAN bReAssocReq;
        BOOLEAN bReAssocResp;
        ULONG uAssocReqOffset;
        ULONG uAssocReqSize;
        ULONG uAssocRespOffset;
        ULONG uAssocRespSize;
        DOT11_AUTH_ALGORITHM AuthAlgo;
        DOT11_CIPHER_ALGORITHM UnicastCipher;
        DOT11_CIPHER_ALGORITHM MulticastCipher;
        ULONG uActivePhyListOffset;
        ULONG uActivePhyListSize;
        ULONG uBeaconOffset;
        ULONG uBeaconSize;
    }
    DOT11_INCOMING_ASSOC_COMPLETION_PARAMETERS, *PDOT11_INCOMING_ASSOC_COMPLETION_PARAMETERS;
    typedef
    struct _DOT11_STOP_AP_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        ULONG ulReason;
    }
    DOT11_STOP_AP_PARAMETERS, *PDOT11_STOP_AP_PARAMETERS;
typedef
struct _DOT11_PHY_FREQUENCY_ADOPTED_PARAMETERS
{
    NDIS_OBJECT_HEADER Header;
    ULONG ulPhyId;
    union
    {
        ULONG ulChannel;
        ULONG ulFrequency;
    };
}
DOT11_PHY_FREQUENCY_ADOPTED_PARAMETERS, *PDOT11_PHY_FREQUENCY_ADOPTED_PARAMETERS;
    typedef
    struct _DOT11_CAN_SUSTAIN_AP_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        ULONG ulReason;
    }
    DOT11_CAN_SUSTAIN_AP_PARAMETERS, *PDOT11_CAN_SUSTAIN_AP_PARAMETERS;
    typedef
    struct _DOT11_AVAILABLE_CHANNEL_LIST
    {
        NDIS_OBJECT_HEADER Header;
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        ULONG uChannelNumber[1];
    }
    DOT11_AVAILABLE_CHANNEL_LIST, *PDOT11_AVAILABLE_CHANNEL_LIST;
    typedef
    struct _DOT11_AVAILABLE_FREQUENCY_LIST
    {
        NDIS_OBJECT_HEADER Header;
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        ULONG uFrequencyValue[1];
    }
    DOT11_AVAILABLE_FREQUENCY_LIST, *PDOT11_AVAILABLE_FREQUENCY_LIST;
    typedef
    struct _DOT11_DISASSOCIATE_PEER_REQUEST
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS PeerMacAddr;
        USHORT usReason;
    }
    DOT11_DISASSOCIATE_PEER_REQUEST, *PDOT11_DISASSOCIATE_PEER_REQUEST;
    typedef
    struct _DOT11_INCOMING_ASSOC_DECISION
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS PeerMacAddr;
        BOOLEAN bAccept;
        USHORT usReasonCode;
        ULONG uAssocResponseIEsOffset;
        ULONG uAssocResponseIEsLength;
    }
    DOT11_INCOMING_ASSOC_DECISION, *PDOT11_INCOMING_ASSOC_DECISION;
    typedef
    struct _DOT11_INCOMING_ASSOC_DECISION_V2
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS PeerMacAddr;
        BOOLEAN bAccept;
        USHORT usReasonCode;
        ULONG uAssocResponseIEsOffset;
        ULONG uAssocResponseIEsLength;
        DOT11_WFD_STATUS_CODE WFDStatus;
    }
    DOT11_INCOMING_ASSOC_DECISION_V2, *PDOT11_INCOMING_ASSOC_DECISION_V2;
    typedef
    struct _DOT11_ADDITIONAL_IE
    {
        NDIS_OBJECT_HEADER Header;
        ULONG uBeaconIEsOffset;
        ULONG uBeaconIEsLength;
        ULONG uResponseIEsOffset;
        ULONG uResponseIEsLength;
    }
    DOT11_ADDITIONAL_IE, *PDOT11_ADDITIONAL_IE;
typedef
struct DOT11_EXTSTA_SEND_CONTEXT
DOT11_EXTAP_SEND_CONTEXT, *PDOT11_EXTAP_SEND_CONTEXT;
typedef
struct DOT11_EXTSTA_RECV_CONTEXT
DOT11_EXTAP_RECV_CONTEXT, *PDOT11_EXTAP_RECV_CONTEXT;
    typedef
    struct _DOT11_PEER_STATISTICS
    {
        ULONGLONG ullDecryptSuccessCount;
        ULONGLONG ullDecryptFailureCount;
        ULONGLONG ullTxPacketSuccessCount;
        ULONGLONG ullTxPacketFailureCount;
        ULONGLONG ullRxPacketSuccessCount;
        ULONGLONG ullRxPacketFailureCount;
    }
    DOT11_PEER_STATISTICS, *PDOT11_PEER_STATISTICS;
    typedef
    struct _DOT11_PEER_INFO
    {
        DOT11_MAC_ADDRESS MacAddress;
        USHORT usCapabilityInformation;
        DOT11_AUTH_ALGORITHM AuthAlgo;
        DOT11_CIPHER_ALGORITHM UnicastCipherAlgo;
        DOT11_CIPHER_ALGORITHM MulticastCipherAlgo;
        BOOLEAN bWpsEnabled;
        USHORT usListenInterval;
        UCHAR ucSupportedRates[MAX_NUM_SUPPORTED_RATES_V2];
        USHORT usAssociationID;
        DOT11_ASSOCIATION_STATE AssociationState;
        DOT11_POWER_MODE PowerMode;
        LARGE_INTEGER liAssociationUpTime;
        DOT11_PEER_STATISTICS Statistics;
    }
    DOT11_PEER_INFO, *PDOT11_PEER_INFO;
    typedef
    struct _DOT11_PEER_INFO_LIST
    {
        NDIS_OBJECT_HEADER Header;
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        DOT11_PEER_INFO PeerInfo[1];
    }
    DOT11_PEER_INFO_LIST, *PDOT11_PEER_INFO_LIST;
    typedef
    struct _DOT11_VWIFI_COMBINATION
    {
        NDIS_OBJECT_HEADER Header;
        ULONG uNumInfrastructure;
        ULONG uNumAdhoc;
        ULONG uNumSoftAP;
    }
    DOT11_VWIFI_COMBINATION, * PDOT11_VWIFI_COMBINATION;
    typedef
    struct _DOT11_VWIFI_COMBINATION_V2
    {
        NDIS_OBJECT_HEADER Header;
        ULONG uNumInfrastructure;
        ULONG uNumAdhoc;
        ULONG uNumSoftAP;
        ULONG uNumVirtualStation;
    }
    DOT11_VWIFI_COMBINATION_V2, * PDOT11_VWIFI_COMBINATION_V2;
    typedef
    struct _DOT11_VWIFI_COMBINATION_V3
    {
        NDIS_OBJECT_HEADER Header;
        ULONG uNumInfrastructure;
        ULONG uNumAdhoc;
        ULONG uNumSoftAP;
        ULONG uNumVirtualStation;
        ULONG uNumWFDGroup;
    }
    DOT11_VWIFI_COMBINATION_V3, * PDOT11_VWIFI_COMBINATION_V3;
    typedef
    struct DOT11_VWIFI_ATTRIBUTES
    {
        NDIS_OBJECT_HEADER Header;
        ULONG uTotalNumOfEntries;
        [unique, size_is(uTotalNumOfEntries)] DOT11_VWIFI_COMBINATION Combinations[*];
    }
    DOT11_VWIFI_ATTRIBUTES, * PDOT11_VWIFI_ATTRIBUTES;
        typedef struct _DOT11_MAC_PARAMETERS{
            NDIS_OBJECT_HEADER Header;
            ULONG uOpmodeMask;
        } DOT11_MAC_PARAMETERS, *PDOT11_MAC_PARAMETERS;
        typedef struct DOT11_MAC_INFO
        {
            ULONG uReserved;
            ULONG uNdisPortNumber;
            DOT11_MAC_ADDRESS MacAddr;
        } DOT11_MAC_INFO, * PDOT11_MAC_INFO;
    typedef
    struct _DOT11_WFD_ATTRIBUTES
    {
        NDIS_OBJECT_HEADER Header;
        ULONG uNumConcurrentGORole;
        ULONG uNumConcurrentClientRole;
        ULONG WPSVersionsSupported;
        BOOLEAN bServiceDiscoverySupported;
        BOOLEAN bClientDiscoverabilitySupported;
        BOOLEAN bInfrastructureManagementSupported;
        ULONG uMaxSecondaryDeviceTypeListSize;
        DOT11_MAC_ADDRESS DeviceAddress;
        ULONG uInterfaceAddressListCount;
        PDOT11_MAC_ADDRESS pInterfaceAddressList;
        ULONG uNumSupportedCountryOrRegionStrings;
        [size_is(uNumSupportedCountryOrRegionStrings)]
        PDOT11_COUNTRY_OR_REGION_STRING pSupportedCountryOrRegionStrings;
        ULONG uDiscoveryFilterListSize;
        ULONG uGORoleClientTableSize;
    }DOT11_WFD_ATTRIBUTES, *PDOT11_WFD_ATTRIBUTES;
typedef UCHAR DOT11_WFD_GROUP_CAPABILITY;
                                           ((DOT11_WFD_STATUS_CODE)(status)) == DOT11_WFD_STATUS_SUCCESS_ACCEPTED_BY_USER)
                                           ((DOT11_WFD_STATUS_CODE)(status)) != DOT11_WFD_STATUS_SUCCESS_ACCEPTED_BY_USER)
typedef struct _DOT11_WFD_DEVICE_TYPE
{
    USHORT CategoryID;
    USHORT SubCategoryID;
    UCHAR OUI[4];
} DOT11_WFD_DEVICE_TYPE, * PDOT11_WFD_DEVICE_TYPE;
typedef struct _DOT11_WPS_DEVICE_NAME {
    _Field_range_(0,32)
    ULONG uDeviceNameLength;
    UCHAR ucDeviceName[DOT11_WPS_DEVICE_NAME_MAX_LENGTH];
} DOT11_WPS_DEVICE_NAME, * PDOT11_WPS_DEVICE_NAME;
typedef
struct _DOT11_WFD_CONFIGURATION_TIMEOUT
{
    UCHAR GOTimeout;
    UCHAR ClientTimeout;
} DOT11_WFD_CONFIGURATION_TIMEOUT, * PDOT11_WFD_CONFIGURATION_TIMEOUT;
typedef
struct _DOT11_WFD_GROUP_ID
{
    DOT11_MAC_ADDRESS DeviceAddress;
    DOT11_SSID SSID;
} DOT11_WFD_GROUP_ID, * PDOT11_WFD_GROUP_ID;
typedef
struct _DOT11_WFD_GO_INTENT
{
    UCHAR TieBreaker:1;
    UCHAR Intent:7;
} DOT11_WFD_GO_INTENT, * PDOT11_WFD_GO_INTENT;
typedef
struct _DOT11_WFD_CHANNEL
{
    DOT11_COUNTRY_OR_REGION_STRING CountryRegionString;
    UCHAR OperatingClass;
    UCHAR ChannelNumber;
} DOT11_WFD_CHANNEL, * PDOT11_WFD_CHANNEL;
typedef enum _DOT11_WPS_CONFIG_METHOD
{
    DOT11_WPS_CONFIG_METHOD_NULL = 0,
    DOT11_WPS_CONFIG_METHOD_DISPLAY = 0x0008,
    DOT11_WPS_CONFIG_METHOD_NFC_TAG = 0x0020,
    DOT11_WPS_CONFIG_METHOD_NFC_INTERFACE = 0x0040,
    DOT11_WPS_CONFIG_METHOD_PUSHBUTTON = 0x0080,
    DOT11_WPS_CONFIG_METHOD_KEYPAD = 0x0100,
    DOT11_WPS_CONFIG_METHOD_WFDS_DEFAULT = 0x1000
} DOT11_WPS_CONFIG_METHOD, *PDOT11_WPS_CONFIG_METHOD;
typedef enum _DOT11_WPS_DEVICE_PASSWORD_ID
{
    DOT11_WPS_PASSWORD_ID_DEFAULT = 0x0000,
    DOT11_WPS_PASSWORD_ID_USER_SPECIFIED = 0x0001,
    DOT11_WPS_PASSWORD_ID_MACHINE_SPECIFIED = 0x0002,
    DOT11_WPS_PASSWORD_ID_REKEY = 0x0003,
    DOT11_WPS_PASSWORD_ID_PUSHBUTTON = 0x0004,
    DOT11_WPS_PASSWORD_ID_REGISTRAR_SPECIFIED = 0x0005,
    DOT11_WPS_PASSWORD_ID_NFC_CONNECTION_HANDOVER = 0x0007,
    DOT11_WPS_PASSWORD_ID_WFD_SERVICES = 0x0008,
    DOT11_WPS_PASSWORD_ID_OOB_RANGE_MIN = 0x0010,
    DOT11_WPS_PASSWORD_ID_OOB_RANGE_MAX = 0xFFFF,
} DOT11_WPS_DEVICE_PASSWORD_ID, *PDOT11_WPS_DEVICE_PASSWORD_ID;
typedef struct _WFDSVC_CONNECTION_CAPABILITY
{
    BOOLEAN bNew;
    BOOLEAN bClient;
    BOOLEAN bGO;
} WFDSVC_CONNECTION_CAPABILITY, *PWFDSVC_CONNECTION_CAPABILITY;
typedef struct _DOT11_WFD_SERVICE_HASH_LIST
{
    USHORT ServiceHashCount;
    [size_is(ServiceHashCount)] DOT11_WFD_SERVICE_HASH ServiceHash[*];
} DOT11_WFD_SERVICE_HASH_LIST, *PDOT11_WFD_SERVICE_HASH_LIST;
typedef struct _DOT11_WFD_ADVERTISEMENT_ID {
    ULONG AdvertisementID;
    DOT11_MAC_ADDRESS ServiceAddress;
} DOT11_WFD_ADVERTISEMENT_ID, *PDOT11_WFD_ADVERTISEMENT_ID;
typedef struct _DOT11_WFD_SESSION_ID {
    ULONG SessionID;
    DOT11_MAC_ADDRESS SessionAddress;
} DOT11_WFD_SESSION_ID, *PDOT11_WFD_SESSION_ID;
typedef struct _DOT11_WFD_ADVERTISED_SERVICE_DESCRIPTOR {
    ULONG AdvertisementID;
    USHORT ConfigMethods;
    _Field_range_(0, DOT11_WFD_SERVICE_NAME_MAX_LENGTH)
    UCHAR ServiceNameLength;
    UCHAR ServiceName[DOT11_WFD_SERVICE_NAME_MAX_LENGTH];
} DOT11_WFD_ADVERTISED_SERVICE_DESCRIPTOR, *PDOT11_WFD_ADVERTISED_SERVICE_DESCRIPTOR;
typedef struct _DOT11_WFD_ADVERTISED_SERVICE_LIST
{
    USHORT ServiceCount;
    [size_is(ServiceCount)] DOT11_WFD_ADVERTISED_SERVICE_DESCRIPTOR AdvertisedService[*];
} DOT11_WFD_ADVERTISED_SERVICE_LIST, *PDOT11_WFD_ADVERTISED_SERVICE_LIST;
    typedef
    struct _DOT11_WFD_DISCOVER_COMPLETE_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        NDIS_STATUS Status;
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        ULONG uListOffset;
        ULONG uListLength;
    } DOT11_WFD_DISCOVER_COMPLETE_PARAMETERS, * PDOT11_WFD_DISCOVER_COMPLETE_PARAMETERS;
    typedef
    struct _DOT11_GO_NEGOTIATION_REQUEST_SEND_COMPLETE_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS PeerDeviceAddress;
        DOT11_DIALOG_TOKEN DialogToken;
        NDIS_STATUS Status;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_GO_NEGOTIATION_REQUEST_SEND_COMPLETE_PARAMETERS, * PDOT11_GO_NEGOTIATION_REQUEST_SEND_COMPLETE_PARAMETERS;
    typedef
    struct _DOT11_RECEIVED_GO_NEGOTIATION_REQUEST_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS PeerDeviceAddress;
        DOT11_DIALOG_TOKEN DialogToken;
        PVOID RequestContext;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_RECEIVED_GO_NEGOTIATION_REQUEST_PARAMETERS, * PDOT11_RECEIVED_GO_NEGOTIATION_REQUEST_PARAMETERS;
    typedef
    struct _DOT11_GO_NEGOTIATION_RESPONSE_SEND_COMPLETE_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS PeerDeviceAddress;
        DOT11_DIALOG_TOKEN DialogToken;
        NDIS_STATUS Status;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_GO_NEGOTIATION_RESPONSE_SEND_COMPLETE_PARAMETERS, * PDOT11_GO_NEGOTIATION_RESPONSE_SEND_COMPLETE_PARAMETERS;
    typedef
    struct _DOT11_RECEIVED_GO_NEGOTIATION_RESPONSE_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS PeerDeviceAddress;
        DOT11_DIALOG_TOKEN DialogToken;
        PVOID ResponseContext;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_RECEIVED_GO_NEGOTIATION_RESPONSE_PARAMETERS, * PDOT11_RECEIVED_GO_NEGOTIATION_RESPONSE_PARAMETERS;
    typedef
    struct _DOT11_GO_NEGOTIATION_CONFIRMATION_SEND_COMPLETE_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS PeerDeviceAddress;
        DOT11_DIALOG_TOKEN DialogToken;
        NDIS_STATUS Status;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_GO_NEGOTIATION_CONFIRMATION_SEND_COMPLETE_PARAMETERS, * PDOT11_GO_NEGOTIATION_CONFIRMATION_SEND_COMPLETE_PARAMETERS;
    typedef
    struct _DOT11_RECEIVED_GO_NEGOTIATION_CONFIRMATION_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS PeerDeviceAddress;
        DOT11_DIALOG_TOKEN DialogToken;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_RECEIVED_GO_NEGOTIATION_CONFIRMATION_PARAMETERS, * PDOT11_RECEIVED_GO_NEGOTIATION_CONFIRMATION_PARAMETERS;
    typedef
    struct _DOT11_INVITATION_REQUEST_SEND_COMPLETE_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS PeerDeviceAddress;
        DOT11_MAC_ADDRESS ReceiverAddress;
        DOT11_DIALOG_TOKEN DialogToken;
        NDIS_STATUS Status;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_INVITATION_REQUEST_SEND_COMPLETE_PARAMETERS, * PDOT11_INVITATION_REQUEST_SEND_COMPLETE_PARAMETERS;
    typedef
    struct _DOT11_RECEIVED_INVITATION_REQUEST_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS TransmitterDeviceAddress;
        DOT11_MAC_ADDRESS BSSID;
        DOT11_DIALOG_TOKEN DialogToken;
        PVOID RequestContext;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_RECEIVED_INVITATION_REQUEST_PARAMETERS, * PDOT11_RECEIVED_INVITATION_REQUEST_PARAMETERS;
    typedef
    struct _DOT11_INVITATION_RESPONSE_SEND_COMPLETE_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS ReceiverDeviceAddress;
        DOT11_DIALOG_TOKEN DialogToken;
        NDIS_STATUS Status;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_INVITATION_RESPONSE_SEND_COMPLETE_PARAMETERS, * PDOT11_INVITATION_RESPONSE_SEND_COMPLETE_PARAMETERS;
    typedef
    struct _DOT11_RECEIVED_INVITATION_RESPONSE_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS TransmitterDeviceAddress;
        DOT11_MAC_ADDRESS BSSID;
        DOT11_DIALOG_TOKEN DialogToken;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_RECEIVED_INVITATION_RESPONSE_PARAMETERS, * PDOT11_RECEIVED_INVITATION_RESPONSE_PARAMETERS;
    typedef
    struct _DOT11_PROVISION_DISCOVERY_REQUEST_SEND_COMPLETE_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS PeerDeviceAddress;
        DOT11_MAC_ADDRESS ReceiverAddress;
        DOT11_DIALOG_TOKEN DialogToken;
        NDIS_STATUS Status;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_PROVISION_DISCOVERY_REQUEST_SEND_COMPLETE_PARAMETERS, * PDOT11_PROVISION_DISCOVERY_REQUEST_SEND_COMPLETE_PARAMETERS;
    typedef
    struct _DOT11_RECEIVED_PROVISION_DISCOVERY_REQUEST_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS TransmitterDeviceAddress;
        DOT11_MAC_ADDRESS BSSID;
        DOT11_DIALOG_TOKEN DialogToken;
        PVOID RequestContext;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_RECEIVED_PROVISION_DISCOVERY_REQUEST_PARAMETERS, * PDOT11_RECEIVED_PROVISION_DISCOVERY_REQUEST_PARAMETERS;
    typedef
    struct _DOT11_PROVISION_DISCOVERY_RESPONSE_SEND_COMPLETE_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS ReceiverDeviceAddress;
        DOT11_DIALOG_TOKEN DialogToken;
        NDIS_STATUS Status;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_PROVISION_DISCOVERY_RESPONSE_SEND_COMPLETE_PARAMETERS, * PDOT11_PROVISION_DISCOVERY_RESPONSE_SEND_COMPLETE_PARAMETERS;
    typedef
    struct _DOT11_RECEIVED_PROVISION_DISCOVERY_RESPONSE_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS TransmitterDeviceAddress;
        DOT11_MAC_ADDRESS BSSID;
        DOT11_DIALOG_TOKEN DialogToken;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_RECEIVED_PROVISION_DISCOVERY_RESPONSE_PARAMETERS, * PDOT11_RECEIVED_PROVISION_DISCOVERY_RESPONSE_PARAMETERS;
    typedef enum _DOT11_ANQP_QUERY_RESULT
    {
        dot11_ANQP_query_result_success = 0,
        dot11_ANQP_query_result_failure = 1,
        dot11_ANQP_query_result_timed_out = 2,
        dot11_ANQP_query_result_resources = 3,
        dot11_ANQP_query_result_advertisement_protocol_not_supported_on_remote = 4,
        dot11_ANQP_query_result_gas_protocol_failure = 5,
        dot11_ANQP_query_result_advertisement_server_not_responding = 6,
        dot11_ANQP_query_result_access_issues = 7
    } DOT11_ANQP_QUERY_RESULT, *PDOT11_ANQP_QUERY_RESULT;
    typedef
    struct _DOT11_ANQP_QUERY_COMPLETE_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_ANQP_QUERY_RESULT Status;
        HANDLE hContext;
        ULONG uResponseLength;
    } DOT11_ANQP_QUERY_COMPLETE_PARAMETERS, * PDOT11_ANQP_QUERY_COMPLETE_PARAMETERS;
    typedef
    struct _DOT11_WFD_DEVICE_CAPABILITY_CONFIG
    {
     NDIS_OBJECT_HEADER Header;
     BOOLEAN bServiceDiscoveryEnabled;
     BOOLEAN bClientDiscoverabilityEnabled;
     BOOLEAN bConcurrentOperationSupported;
     BOOLEAN bInfrastructureManagementEnabled;
     BOOLEAN bDeviceLimitReached;
     BOOLEAN bInvitationProcedureEnabled;
     ULONG WPSVersionsEnabled;
    } DOT11_WFD_DEVICE_CAPABILITY_CONFIG, * PDOT11_WFD_DEVICE_CAPABILITY_CONFIG;
    typedef
    struct _DOT11_WFD_GROUP_OWNER_CAPABILITY_CONFIG
    {
     NDIS_OBJECT_HEADER Header;
        BOOLEAN bPersistentGroupEnabled;
     BOOLEAN bIntraBSSDistributionSupported;
     BOOLEAN bCrossConnectionSupported;
     BOOLEAN bPersistentReconnectSupported;
     BOOLEAN bGroupFormationEnabled;
     ULONG uMaximumGroupLimit;
    } DOT11_WFD_GROUP_OWNER_CAPABILITY_CONFIG, *PDOT11_WFD_GROUP_OWNER_CAPABILITY_CONFIG;
    typedef
    struct _DOT11_WFD_GROUP_OWNER_CAPABILITY_CONFIG_V2
    {
        NDIS_OBJECT_HEADER Header;
        BOOLEAN bPersistentGroupEnabled;
        BOOLEAN bIntraBSSDistributionSupported;
        BOOLEAN bCrossConnectionSupported;
        BOOLEAN bPersistentReconnectSupported;
        BOOLEAN bGroupFormationEnabled;
        ULONG uMaximumGroupLimit;
        BOOLEAN bEapolKeyIpAddressAllocationSupported;
    } DOT11_WFD_GROUP_OWNER_CAPABILITY_CONFIG_V2, *PDOT11_WFD_GROUP_OWNER_CAPABILITY_CONFIG_V2;
    typedef
    struct _DOT11_WFD_DEVICE_INFO
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS DeviceAddress;
        USHORT ConfigMethods;
        DOT11_WFD_DEVICE_TYPE PrimaryDeviceType;
        DOT11_WPS_DEVICE_NAME DeviceName;
    } DOT11_WFD_DEVICE_INFO, *PDOT11_WFD_DEVICE_INFO;
    typedef
    struct _DOT11_WFD_SECONDARY_DEVICE_TYPE_LIST {
        NDIS_OBJECT_HEADER Header;
        ULONG uNumOfEntries;
        ULONG uTotalNumOfEntries;
        DOT11_WFD_DEVICE_TYPE SecondaryDeviceTypes[1];
    } DOT11_WFD_SECONDARY_DEVICE_TYPE_LIST, * PDOT11_WFD_SECONDARY_DEVICE_TYPE_LIST;
    typedef enum _DOT11_WFD_DISCOVER_TYPE
    {
        dot11_wfd_discover_type_scan_only = 1,
        dot11_wfd_discover_type_find_only = 2,
        dot11_wfd_discover_type_auto = 3,
        dot11_wfd_discover_type_scan_social_channels = 4,
        dot11_wfd_discover_type_forced = 0x80000000
    } DOT11_WFD_DISCOVER_TYPE, *PDOT11_WFD_DISCOVER_TYPE;
    typedef enum _DOT11_WFD_SCAN_TYPE
    {
        dot11_wfd_scan_type_active = 1,
        dot11_wfd_scan_type_passive = 2,
        dot11_wfd_scan_type_auto = 3
    } DOT11_WFD_SCAN_TYPE, *PDOT11_WFD_SCAN_TYPE;
    typedef
    struct _DOT11_WFD_DISCOVER_DEVICE_FILTER
    {
        DOT11_MAC_ADDRESS DeviceID;
        UCHAR ucBitmask;
        DOT11_SSID GroupSSID;
    } DOT11_WFD_DISCOVER_DEVICE_FILTER, *PDOT11_WFD_DISCOVER_DEVICE_FILTER;
    typedef
    struct _DOT11_WFD_DISCOVER_REQUEST
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_WFD_DISCOVER_TYPE DiscoverType;
        DOT11_WFD_SCAN_TYPE ScanType;
        ULONG uDiscoverTimeout;
        ULONG uDeviceFilterListOffset;
        ULONG uNumDeviceFilters;
        ULONG uIEsOffset;
        ULONG uIEsLength;
        BOOLEAN bForceScanLegacyNetworks;
    } DOT11_WFD_DISCOVER_REQUEST, *PDOT11_WFD_DISCOVER_REQUEST;
    typedef
    struct _DOT11_WFD_DEVICE_ENTRY
    {
        ULONG uPhyId;
        DOT11_BSS_ENTRY_PHY_SPECIFIC_INFO PhySpecificInfo;
        DOT11_MAC_ADDRESS dot11BSSID;
        DOT11_BSS_TYPE dot11BSSType;
        DOT11_MAC_ADDRESS TransmitterAddress;
        LONG lRSSI;
        ULONG uLinkQuality;
        USHORT usBeaconPeriod;
        ULONGLONG ullTimestamp;
        ULONGLONG ullBeaconHostTimestamp;
        ULONGLONG ullProbeResponseHostTimestamp;
        USHORT usCapabilityInformation;
        ULONG uBeaconIEsOffset;
        ULONG uBeaconIEsLength;
        ULONG uProbeResponseIEsOffset;
        ULONG uProbeResponseIEsLength;
    } DOT11_WFD_DEVICE_ENTRY, *PDOT11_WFD_DEVICE_ENTRY;
        (sizeof(DOT11_WFD_DEVICE_ENTRY) + (_device_)->uBeaconIEsLength + (_device_)-> uProbeResponseIEsLength)
    #define DOT11_WFD_DEVICE_NOT_DISCOVERABLE 0
    #define DOT11_WFD_DEVICE_AUTO_AVAILABILITY 16
    #define DOT11_WFD_DEVICE_HIGH_AVAILABILITY 24
    typedef
    struct _DOT11_WFD_ADDITIONAL_IE
    {
        NDIS_OBJECT_HEADER Header;
        ULONG uBeaconIEsOffset;
        ULONG uBeaconIEsLength;
        ULONG uProbeResponseIEsOffset;
        ULONG uProbeResponseIEsLength;
        ULONG uDefaultRequestIEsOffset;
        ULONG uDefaultRequestIEsLength;
    } DOT11_WFD_ADDITIONAL_IE,
    *PDOT11_WFD_ADDITIONAL_IE;
        (sizeof(DOT11_WFD_ADDITIONAL_IE))
        (((PCHAR)(_addie_))+sizeof(DOT11_WFD_ADDITIONAL_IE))
        (((PCHAR)(_addie_))+(_addie_)->uBeaconIEsOffset)
        (_addie_)->uBeaconIEsOffset = (DWORD)(((SIZE_T)(_beacon_))-((SIZE_T)(_addie_)))
        ((_addie_)->uBeaconIEsLength)
        (_addie_)->uBeaconIEsLength = (DWORD)(_size_)
        (((PCHAR)(_addie_))+(_addie_)->uBeaconIEsOffset+DOT11_WFD_ADDITIONAL_IE_GET_BEACON_IE_SIZE(_addie_))
        (((PCHAR)(_addie_))+(_addie_)->uProbeResponseIEsOffset)
        (_addie_)->uProbeResponseIEsOffset = (DWORD)(((SIZE_T)(_response_))-((SIZE_T)(_addie_)))
        ((_addie_)->uProbeResponseIEsLength)
        (_addie_)->uProbeResponseIEsLength = (DWORD)(_size_)
        (((PCHAR)(_addie_))+(_addie_)->uProbeResponseIEsOffset+DOT11_WFD_ADDITIONAL_IE_GET_PROBE_RESPONSE_IE_SIZE(_addie_))
        (((PCHAR)(_addie_))+(_addie_)->uDefaultRequestIEsOffset)
        (_addie_)->uDefaultRequestIEsOffset = (DWORD)(((SIZE_T)(_request_))-((SIZE_T)(_addie_)))
        ((_addie_)->uDefaultRequestIEsLength)
        (_addie_)->uDefaultRequestIEsLength = (DWORD)(_size_)
        ((_addie_)->uBeaconIEsLength + \
         (_addie_)->uProbeResponseIEsLength + \
         (_addie_)->uDefaultRequestIEsLength)
        (DOT11_WFD_ADDITIONAL_IE_GET_HEADER_SIZE(_addie_) + \
         DOT11_WFD_ADDITIONAL_IE_GET_ALL_IE_SIZE(_addie_))
    typedef
    struct _DOT11_SEND_GO_NEGOTIATION_REQUEST_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS PeerDeviceAddress;
        DOT11_DIALOG_TOKEN DialogToken;
        ULONG uSendTimeout;
        DOT11_WFD_GO_INTENT GroupOwnerIntent;
        DOT11_WFD_CONFIGURATION_TIMEOUT MinimumConfigTimeout;
        DOT11_MAC_ADDRESS IntendedInterfaceAddress;
        DOT11_WFD_GROUP_CAPABILITY GroupCapability;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_SEND_GO_NEGOTIATION_REQUEST_PARAMETERS, * PDOT11_SEND_GO_NEGOTIATION_REQUEST_PARAMETERS;
    typedef
    struct _DOT11_SEND_GO_NEGOTIATION_RESPONSE_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS PeerDeviceAddress;
        DOT11_DIALOG_TOKEN DialogToken;
        PVOID RequestContext;
        ULONG uSendTimeout;
        DOT11_WFD_STATUS_CODE Status;
        DOT11_WFD_GO_INTENT GroupOwnerIntent;
        DOT11_WFD_CONFIGURATION_TIMEOUT MinimumConfigTimeout;
        DOT11_MAC_ADDRESS IntendedInterfaceAddress;
        DOT11_WFD_GROUP_CAPABILITY GroupCapability;
        DOT11_WFD_GROUP_ID GroupID;
        BOOLEAN bUseGroupID;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_SEND_GO_NEGOTIATION_RESPONSE_PARAMETERS, * PDOT11_SEND_GO_NEGOTIATION_RESPONSE_PARAMETERS;
    typedef struct _DOT11_SEND_GO_NEGOTIATION_CONFIRMATION_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS PeerDeviceAddress;
        DOT11_DIALOG_TOKEN DialogToken;
        PVOID ResponseContext;
        ULONG uSendTimeout;
        DOT11_WFD_STATUS_CODE Status;
        DOT11_WFD_GROUP_CAPABILITY GroupCapability;
        DOT11_WFD_GROUP_ID GroupID;
        BOOLEAN bUseGroupID;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_SEND_GO_NEGOTIATION_CONFIRMATION_PARAMETERS, * PDOT11_SEND_GO_NEGOTIATION_CONFIRMATION_PARAMETERS;
    typedef
    struct _DOT11_WFD_INVITATION_FLAGS
    {
        UCHAR InvitationType:1;
        UCHAR Reserved:7;
    } DOT11_WFD_INVITATION_FLAGS, * PDOT11_WFD_INVITATION_FLAGS;
    typedef
    struct _DOT11_SEND_INVITATION_REQUEST_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_DIALOG_TOKEN DialogToken;
        DOT11_MAC_ADDRESS PeerDeviceAddress;
        ULONG uSendTimeout;
        DOT11_WFD_CONFIGURATION_TIMEOUT MinimumConfigTimeout;
        DOT11_WFD_INVITATION_FLAGS InvitationFlags;
        DOT11_MAC_ADDRESS GroupBSSID;
        BOOLEAN bUseGroupBSSID;
        DOT11_WFD_CHANNEL OperatingChannel;
        BOOLEAN bUseSpecifiedOperatingChannel;
        DOT11_WFD_GROUP_ID GroupID;
        BOOLEAN bLocalGO;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_SEND_INVITATION_REQUEST_PARAMETERS, * PDOT11_SEND_INVITATION_REQUEST_PARAMETERS;
    typedef
    struct _DOT11_SEND_INVITATION_RESPONSE_PARAMETERS
    {
     NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS ReceiverDeviceAddress;
        DOT11_DIALOG_TOKEN DialogToken;
        PVOID RequestContext;
        ULONG uSendTimeout;
        DOT11_WFD_STATUS_CODE Status;
        DOT11_WFD_CONFIGURATION_TIMEOUT MinimumConfigTimeout;
        DOT11_MAC_ADDRESS GroupBSSID;
        BOOLEAN bUseGroupBSSID;
        DOT11_WFD_CHANNEL OperatingChannel;
        BOOLEAN bUseSpecifiedOperatingChannel;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_SEND_INVITATION_RESPONSE_PARAMETERS, * PDOT11_SEND_INVITATION_RESPONSE_PARAMETERS;
    typedef
    struct _DOT11_SEND_PROVISION_DISCOVERY_REQUEST_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        DOT11_DIALOG_TOKEN DialogToken;
        DOT11_MAC_ADDRESS PeerDeviceAddress;
        ULONG uSendTimeout;
        DOT11_WFD_GROUP_CAPABILITY GroupCapability;
        DOT11_WFD_GROUP_ID GroupID;
        BOOLEAN bUseGroupID;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_SEND_PROVISION_DISCOVERY_REQUEST_PARAMETERS, * PDOT11_SEND_PROVISION_DISCOVERY_REQUEST_PARAMETERS;
    typedef
    struct _DOT11_SEND_PROVISION_DISCOVERY_RESPONSE_PARAMETERS
    {
     NDIS_OBJECT_HEADER Header;
        DOT11_MAC_ADDRESS ReceiverDeviceAddress;
        DOT11_DIALOG_TOKEN DialogToken;
        PVOID RequestContext;
        ULONG uSendTimeout;
        ULONG uIEsOffset;
        ULONG uIEsLength;
    } DOT11_SEND_PROVISION_DISCOVERY_RESPONSE_PARAMETERS, * PDOT11_SEND_PROVISION_DISCOVERY_RESPONSE_PARAMETERS;
    typedef
    struct _DOT11_WFD_DEVICE_LISTEN_CHANNEL
    {
        NDIS_OBJECT_HEADER Header;
        UCHAR ChannelNumber;
    } DOT11_WFD_DEVICE_LISTEN_CHANNEL, *PDOT11_WFD_DEVICE_LISTEN_CHANNEL;
    typedef
    struct _DOT11_WFD_GROUP_START_PARAMETERS {
        NDIS_OBJECT_HEADER Header;
        DOT11_WFD_CHANNEL AdvertisedOperatingChannel;
    } DOT11_WFD_GROUP_START_PARAMETERS, * PDOT11_WFD_GROUP_START_PARAMETERS;
    typedef
    struct _DOT11_WFD_GROUP_JOIN_PARAMETERS {
        NDIS_OBJECT_HEADER Header;
        DOT11_WFD_CHANNEL GOOperatingChannel;
        ULONG GOConfigTime;
        BOOLEAN bInGroupFormation;
        BOOLEAN bWaitForWPSReady;
    } DOT11_WFD_GROUP_JOIN_PARAMETERS, * PDOT11_WFD_GROUP_JOIN_PARAMETERS;
    typedef struct _DOT11_POWER_MGMT_AUTO_MODE_ENABLED_INFO {
        NDIS_OBJECT_HEADER Header;
        BOOLEAN bEnabled;
    } DOT11_POWER_MGMT_AUTO_MODE_ENABLED_INFO, * PDOT11_POWER_MGMT_AUTO_MODE_ENABLED_INFO;
    typedef enum _DOT11_POWER_MODE_REASON {
        dot11_power_mode_reason_no_change =0,
        dot11_power_mode_reason_noncompliant_AP =1,
        dot11_power_mode_reason_legacy_WFD_device =2,
        dot11_power_mode_reason_compliant_AP =3,
        dot11_power_mode_reason_compliant_WFD_device=4,
        dot11_power_mode_reason_others =5
    } DOT11_POWER_MODE_REASON;
    typedef struct _DOT11_POWER_MGMT_MODE_STATUS_INFO {
        NDIS_OBJECT_HEADER Header;
        DOT11_POWER_MODE PowerSaveMode;
        ULONG uPowerSaveLevel;
        DOT11_POWER_MODE_REASON Reason;
    } DOT11_POWER_MGMT_MODE_STATUS_INFO, * PDOT11_POWER_MGMT_MODE_STATUSINFO;
    #define DOT11_MAX_CHANNEL_HINTS 4
    #define DOT11_INVALID_CHANNEL_NUMBER 0
    typedef struct DOT11_CHANNEL_HINT {
    DOT11_PHY_TYPE Dot11PhyType;
    ULONG uChannelNumber;
    } DOT11_CHANNEL_HINT, * PDOT11_CHANNEL_HINT;
    typedef struct DOT11_OFFLOAD_NETWORK {
        DOT11_SSID Ssid;
        DOT11_CIPHER_ALGORITHM UnicastCipher;
        DOT11_AUTH_ALGORITHM AuthAlgo;
        DOT11_CHANNEL_HINT Dot11ChannelHints[DOT11_MAX_CHANNEL_HINTS];
    } DOT11_OFFLOAD_NETWORK, * PDOT11_OFFLOAD_NETWORK;
 (FIELD_OFFSET(DOT11_OFFLOAD_NETWORK_LIST_INFO, offloadNetworkList)+ \
  sizeof(DOT11_OFFLOAD_NETWORK)*(_uNumOfEntry))
 (FIELD_OFFSET(DOT11_OFFLOAD_NETWORK_LIST_INFO, offloadNetworkList))
    typedef struct _DOT11_OFFLOAD_NETWORK_LIST_INFO {
        NDIS_OBJECT_HEADER Header;
        ULONG ulFlags;
        ULONG FastScanPeriod;
        ULONG FastScanIterations;
        ULONG SlowScanPeriod;
        ULONG uNumOfEntries;
        DOT11_OFFLOAD_NETWORK offloadNetworkList[1];
    } DOT11_OFFLOAD_NETWORK_LIST_INFO, * PDOT11_OFFLOAD_NETWORK_LIST_INFO;
    typedef
    struct _DOT11_OFFLOAD_NETWORK_STATUS_PARAMETERS
    {
        NDIS_OBJECT_HEADER Header;
        NDIS_STATUS Status;
    } DOT11_OFFLOAD_NETWORK_STATUS_PARAMETERS, * PDOT11_OFFLOAD_NETWORK_STATUS_PARAMETERS;
    typedef enum _DOT11_MANUFACTURING_TEST_TYPE {
        dot11_manufacturing_test_unknown = 0,
        dot11_manufacturing_test_self_start = 1,
        dot11_manufacturing_test_self_query_result = 2,
        dot11_manufacturing_test_rx = 3,
        dot11_manufacturing_test_tx = 4,
        dot11_manufacturing_test_query_adc = 5,
        dot11_manufacturing_test_set_data = 6,
        dot11_manufacturing_test_query_data = 7,
        dot11_manufacturing_test_sleep = 8,
        dot11_manufacturing_test_awake = 9,
        dot11_manufacturing_test_IHV_start = 0x80000000,
        dot11_manufacturing_test_IHV_end = 0xffffffff
    } DOT11_MANUFACTURING_TEST_TYPE, * PDOT11_MANUFACTURING_TEST_TYPE;
    typedef struct _DOT11_MANUFACTURING_TEST {
        DOT11_MANUFACTURING_TEST_TYPE dot11ManufacturingTestType;
        ULONG uBufferLength;
        UCHAR ucBuffer[1];
    } DOT11_MANUFACTURING_TEST, * PDOT11_MANUFACTURING_TEST;
    typedef enum DOT11_MANUFACTURING_SELF_TEST_TYPE {
        DOT11_MANUFACTURING_SELF_TEST_TYPE_INTERFACE = 1,
        DOT11_MANUFACTURING_SELF_TEST_TYPE_RF_INTERFACE,
        DOT11_MANUFACTURING_SELF_TEST_TYPE_BT_COEXISTENCE
    } DOT11_MANUFACTURING_SELF_TEST_TYPE, * PDOT11_MANUFACTURING_SELF_TEST_TYPE;
    typedef struct _DOT11_MANUFACTURING_SELF_TEST_SET_PARAMS {
        DOT11_MANUFACTURING_SELF_TEST_TYPE SelfTestType;
        ULONG uTestID;
        ULONG uPinBitMask;
        PVOID pvContext;
        ULONG uBufferLength;
        UCHAR ucBufferIn[1];
    } DOT11_MANUFACTURING_SELF_TEST_SET_PARAMS, *PDOT11_MANUFACTURING_SELF_TEST_SET_PARAMS;
    typedef struct _DOT11_MANUFACTURING_SELF_TEST_QUERY_RESULTS {
        DOT11_MANUFACTURING_SELF_TEST_TYPE SelfTestType;
        ULONG uTestID;
        BOOLEAN bResult;
        ULONG uPinFailedBitMask;
        PVOID pvContext;
        ULONG uBytesWrittenOut;
        UCHAR ucBufferOut[1];
    } DOT11_MANUFACTURING_SELF_TEST_QUERY_RESULTS, *PDOT11_MANUFACTURING_SELF_TEST_QUERY_RESULTS;
    typedef enum DOT11_BAND {
        dot11_band_2p4g = 1,
        dot11_band_4p9g,
        dot11_band_5g
    } DOT11_BAND, * PDOT11_BAND;
    typedef struct _DOT11_MANUFACTURING_FUNCTIONAL_TEST_RX {
        BOOLEAN bEnabled;
        DOT11_BAND Dot11Band;
        ULONG uChannel;
        LONG PowerLevel;
    } DOT11_MANUFACTURING_FUNCTIONAL_TEST_RX, * PDOT11_MANUFACTURING_FUNCTIONAL_TEST_RX;
    typedef struct _DOT11_MANUFACTURING_FUNCTIONAL_TEST_TX {
        BOOLEAN bEnable;
        BOOLEAN bOpenLoop;
        DOT11_BAND Dot11Band;
        ULONG uChannel;
        ULONG uSetPowerLevel;
        LONG ADCPowerLevel;
    } DOT11_MANUFACTURING_FUNCTIONAL_TEST_TX, * PDOT11_MANUFACTURING_FUNCTIONAL_TEST_TX;
    typedef struct _DOT11_MANUFACTURING_FUNCTIONAL_TEST_QUERY_ADC {
        DOT11_BAND Dot11Band;
        ULONG uChannel;
        LONG ADCPowerLevel;
    } DOT11_MANUFACTURING_FUNCTIONAL_TEST_QUERY_ADC, * PDOT11_MANUFACTURING_FUNCTIONAL_TEST_QUERY_ADC;
    typedef struct _DOT11_MANUFACTURING_TEST_SET_DATA {
        ULONG uKey;
        ULONG uOffset;
        ULONG uBufferLength;
        UCHAR ucBufferIn[1];
    } DOT11_MANUFACTURING_TEST_SET_DATA, * PDOT11_MANUFACTURING_TEST_SET_DATA;
    typedef struct _DOT11_MANUFACTURING_TEST_QUERY_DATA {
        ULONG uKey;
        ULONG uOffset;
        ULONG uBufferLength;
        ULONG uBytesRead;
        UCHAR ucBufferOut[1];
    } DOT11_MANUFACTURING_TEST_QUERY_DATA, * PDOT11_MANUFACTURING_TEST_QUERY_DATA;
    typedef struct _DOT11_MANUFACTURING_TEST_SLEEP {
        ULONG uSleepTime;
        PVOID pvContext;
    } DOT11_MANUFACTURING_TEST_SLEEP, * PDOT11_MANUFACTURING_TEST_SLEEP;
    typedef enum _DOT11_MANUFACTURING_CALLBACK_TYPE {
        dot11_manufacturing_callback_unknown = 0,
        dot11_manufacturing_callback_self_test_complete = 1,
        dot11_manufacturing_callback_sleep_complete = 2,
        dot11_manufacturing_callback_IHV_start = 0x80000000,
        dot11_manufacturing_callback_IHV_end = 0xffffffff
    } DOT11_MANUFACTURING_CALLBACK_TYPE, * PDOT11_MANUFACTURING_CALLBACK_TYPE;
    typedef struct DOT11_MANUFACTURING_CALLBACK_PARAMETERS
    {
        #define DOT11_MANUFACTURING_CALLBACK_REVISION_1 1
        NDIS_OBJECT_HEADER Header;
        DOT11_MANUFACTURING_CALLBACK_TYPE dot11ManufacturingCallbackType;
        ULONG uStatus;
        PVOID pvContext;
    } DOT11_MANUFACTURING_CALLBACK_PARAMETERS, * PDOT11_MANUFACTURING_CALLBACK_PARAMETERS;
#endif
#pragma endregion
