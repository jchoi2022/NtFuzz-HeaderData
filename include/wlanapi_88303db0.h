       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <l2cmn.h>
#include <windot11.h>
#include <EapTypes.h>
extern "C" {
    #define WLAN_API_VERSION WLAN_API_VERSION_2_0
typedef struct _WLAN_PROFILE_INFO {
    WCHAR strProfileName[WLAN_MAX_NAME_LENGTH];
    DWORD dwFlags;
} WLAN_PROFILE_INFO, *PWLAN_PROFILE_INFO;
typedef struct _DOT11_NETWORK {
    DOT11_SSID dot11Ssid;
    DOT11_BSS_TYPE dot11BssType;
} DOT11_NETWORK, *PDOT11_NETWORK;
typedef struct _WLAN_RAW_DATA {
    DWORD dwDataSize;
    [unique, size_is(dwDataSize)] BYTE DataBlob[*];
} WLAN_RAW_DATA, *PWLAN_RAW_DATA;
typedef struct _WLAN_RAW_DATA_LIST {
    DWORD dwTotalSize;
    DWORD dwNumberOfItems;
    struct {
        DWORD dwDataOffset;
        DWORD dwDataSize;
    } DataList[1];
} WLAN_RAW_DATA_LIST, *PWLAN_RAW_DATA_LIST;
typedef enum _WLAN_CONNECTION_MODE {
    wlan_connection_mode_profile = 0,
    wlan_connection_mode_temporary_profile,
    wlan_connection_mode_discovery_secure,
    wlan_connection_mode_discovery_unsecure,
    wlan_connection_mode_auto,
    wlan_connection_mode_invalid
} WLAN_CONNECTION_MODE, *PWLAN_CONNECTION_MODE;
typedef DWORD WLAN_REASON_CODE, *PWLAN_REASON_CODE;
                                                (WLAN_REASON_CODE_AC_CONNECT_BASE +12)
                                                (WLAN_REASON_CODE_AC_CONNECT_BASE + 15)
                                                (WLAN_REASON_CODE_AC_CONNECT_BASE + 17)
                                                (WLAN_REASON_CODE_PROFILE_BASE +7)
                                                (WLAN_REASON_CODE_PROFILE_BASE +14)
                                                (WLAN_REASON_CODE_PROFILE_BASE +15)
                                                (WLAN_REASON_CODE_PROFILE_BASE +16)
                                                (WLAN_REASON_CODE_PROFILE_BASE +17)
                                                (WLAN_REASON_CODE_PROFILE_BASE +18)
                                                (WLAN_REASON_CODE_PROFILE_BASE +21)
                                                (WLAN_REASON_CODE_PROFILE_BASE +22)
                                                (WLAN_REASON_CODE_PROFILE_BASE +24)
                                                (WLAN_REASON_CODE_PROFILE_BASE +25)
                                                (WLAN_REASON_CODE_PROFILE_BASE +26)
                                                (WLAN_REASON_CODE_PROFILE_BASE +27)
                                                (WLAN_REASON_CODE_MSM_BASE +1)
                                                (WLAN_REASON_CODE_MSM_BASE +2)
typedef ULONG WLAN_SIGNAL_QUALITY, *PWLAN_SIGNAL_QUALITY;
typedef struct _WLAN_RATE_SET {
    ULONG uRateSetLength;
    _Field_size_part_(DOT11_RATE_SET_MAX_LENGTH, uRateSetLength) USHORT usRateSet[DOT11_RATE_SET_MAX_LENGTH];
} WLAN_RATE_SET, * PWLAN_RATE_SET;
typedef struct _WLAN_AVAILABLE_NETWORK {
    WCHAR strProfileName[WLAN_MAX_NAME_LENGTH];
    DOT11_SSID dot11Ssid;
    DOT11_BSS_TYPE dot11BssType;
    ULONG uNumberOfBssids;
    BOOL bNetworkConnectable;
    WLAN_REASON_CODE wlanNotConnectableReason;
    ULONG uNumberOfPhyTypes;
    DOT11_PHY_TYPE dot11PhyTypes[WLAN_MAX_PHY_TYPE_NUMBER];
    BOOL bMorePhyTypes;
    WLAN_SIGNAL_QUALITY wlanSignalQuality;
    BOOL bSecurityEnabled;
    DOT11_AUTH_ALGORITHM dot11DefaultAuthAlgorithm;
    DOT11_CIPHER_ALGORITHM dot11DefaultCipherAlgorithm;
    DWORD dwFlags;
    DWORD dwReserved;
} WLAN_AVAILABLE_NETWORK, *PWLAN_AVAILABLE_NETWORK;
typedef struct _WLAN_AVAILABLE_NETWORK_V2 {
    WCHAR strProfileName[WLAN_MAX_NAME_LENGTH];
    DOT11_SSID dot11Ssid;
    DOT11_BSS_TYPE dot11BssType;
    ULONG uNumberOfBssids;
    BOOL bNetworkConnectable;
    WLAN_REASON_CODE wlanNotConnectableReason;
    ULONG uNumberOfPhyTypes;
    DOT11_PHY_TYPE dot11PhyTypes[WLAN_MAX_PHY_TYPE_NUMBER];
    BOOL bMorePhyTypes;
    WLAN_SIGNAL_QUALITY wlanSignalQuality;
    BOOL bSecurityEnabled;
    DOT11_AUTH_ALGORITHM dot11DefaultAuthAlgorithm;
    DOT11_CIPHER_ALGORITHM dot11DefaultCipherAlgorithm;
    DWORD dwFlags;
    DOT11_ACCESSNETWORKOPTIONS AccessNetworkOptions;
    DOT11_HESSID dot11HESSID;
    DOT11_VENUEINFO VenueInfo;
    DWORD dwReserved;
} WLAN_AVAILABLE_NETWORK_V2, *PWLAN_AVAILABLE_NETWORK_V2;
typedef struct _WLAN_BSS_ENTRY {
    DOT11_SSID dot11Ssid;
    ULONG uPhyId;
    DOT11_MAC_ADDRESS dot11Bssid;
    DOT11_BSS_TYPE dot11BssType;
    DOT11_PHY_TYPE dot11BssPhyType;
    LONG lRssi;
    ULONG uLinkQuality;
    BOOLEAN bInRegDomain;
    USHORT usBeaconPeriod;
    ULONGLONG ullTimestamp;
    ULONGLONG ullHostTimestamp;
    USHORT usCapabilityInformation;
    ULONG ulChCenterFrequency;
    WLAN_RATE_SET wlanRateSet;
    ULONG ulIeOffset;
    ULONG ulIeSize;
} WLAN_BSS_ENTRY, * PWLAN_BSS_ENTRY;
typedef struct _WLAN_BSS_LIST {
    DWORD dwTotalSize;
    DWORD dwNumberOfItems;
    WLAN_BSS_ENTRY wlanBssEntries[1];
} WLAN_BSS_LIST, *PWLAN_BSS_LIST;
typedef [v1_enum] enum _WLAN_INTERFACE_STATE {
    wlan_interface_state_not_ready,
    wlan_interface_state_connected,
    wlan_interface_state_ad_hoc_network_formed,
    wlan_interface_state_disconnecting,
    wlan_interface_state_disconnected,
    wlan_interface_state_associating,
    wlan_interface_state_discovering,
    wlan_interface_state_authenticating
} WLAN_INTERFACE_STATE, *PWLAN_INTERFACE_STATE;
typedef [v1_enum] enum _WLAN_ADHOC_NETWORK_STATE {
    wlan_adhoc_network_state_formed = 0,
    wlan_adhoc_network_state_connected
} WLAN_ADHOC_NETWORK_STATE, *PWLAN_ADHOC_NETWORK_STATE;
typedef struct _WLAN_INTERFACE_INFO {
    GUID InterfaceGuid;
    WCHAR strInterfaceDescription[WLAN_MAX_NAME_LENGTH];
    WLAN_INTERFACE_STATE isState;
} WLAN_INTERFACE_INFO, *PWLAN_INTERFACE_INFO;
typedef struct _WLAN_ASSOCIATION_ATTRIBUTES {
    DOT11_SSID dot11Ssid;
    DOT11_BSS_TYPE dot11BssType;
    DOT11_MAC_ADDRESS dot11Bssid;
    DOT11_PHY_TYPE dot11PhyType;
    ULONG uDot11PhyIndex;
    WLAN_SIGNAL_QUALITY wlanSignalQuality;
    ULONG ulRxRate;
    ULONG ulTxRate;
} WLAN_ASSOCIATION_ATTRIBUTES, *PWLAN_ASSOCIATION_ATTRIBUTES;
typedef struct _WLAN_SECURITY_ATTRIBUTES {
    BOOL bSecurityEnabled;
    BOOL bOneXEnabled;
    DOT11_AUTH_ALGORITHM dot11AuthAlgorithm;
    DOT11_CIPHER_ALGORITHM dot11CipherAlgorithm;
} WLAN_SECURITY_ATTRIBUTES, *PWLAN_SECURITY_ATTRIBUTES;
typedef struct _WLAN_CONNECTION_ATTRIBUTES {
    WLAN_INTERFACE_STATE isState;
    WLAN_CONNECTION_MODE wlanConnectionMode;
    WCHAR strProfileName[WLAN_MAX_NAME_LENGTH];
    WLAN_ASSOCIATION_ATTRIBUTES wlanAssociationAttributes;
    WLAN_SECURITY_ATTRIBUTES wlanSecurityAttributes;
} WLAN_CONNECTION_ATTRIBUTES, *PWLAN_CONNECTION_ATTRIBUTES;
typedef [v1_enum] enum _DOT11_RADIO_STATE {
    dot11_radio_state_unknown = 0,
    dot11_radio_state_on,
    dot11_radio_state_off
} DOT11_RADIO_STATE, *PDOT11_RADIO_STATE;
typedef struct _WLAN_PHY_RADIO_STATE {
    DWORD dwPhyIndex;
    DOT11_RADIO_STATE dot11SoftwareRadioState;
    DOT11_RADIO_STATE dot11HardwareRadioState;
} WLAN_PHY_RADIO_STATE, *PWLAN_PHY_RADIO_STATE;
typedef struct _WLAN_RADIO_STATE {
    DWORD dwNumberOfPhys;
    WLAN_PHY_RADIO_STATE PhyRadioState[WLAN_MAX_PHY_INDEX];
} WLAN_RADIO_STATE, *PWLAN_RADIO_STATE;
typedef [v1_enum] enum _WLAN_OPERATIONAL_STATE {
    wlan_operational_state_unknown = 0,
    wlan_operational_state_off,
    wlan_operational_state_on,
    wlan_operational_state_going_off,
    wlan_operational_state_going_on
} WLAN_OPERATIONAL_STATE, *PWLAN_OPERATIONAL_STATE;
typedef enum _WLAN_INTERFACE_TYPE {
    wlan_interface_type_emulated_802_11 = 0,
    wlan_interface_type_native_802_11,
    wlan_interface_type_invalid
} WLAN_INTERFACE_TYPE, *PWLAN_INTERFACE_TYPE;
typedef struct _WLAN_INTERFACE_CAPABILITY {
    WLAN_INTERFACE_TYPE interfaceType;
    BOOL bDot11DSupported;
    DWORD dwMaxDesiredSsidListSize;
    DWORD dwMaxDesiredBssidListSize;
    DWORD dwNumberOfSupportedPhys;
    DOT11_PHY_TYPE dot11PhyTypes[WLAN_MAX_PHY_INDEX];
} WLAN_INTERFACE_CAPABILITY, *PWLAN_INTERFACE_CAPABILITY;
typedef struct _WLAN_AUTH_CIPHER_PAIR_LIST {
    DWORD dwNumberOfItems;
    [unique, size_is(dwNumberOfItems)] DOT11_AUTH_CIPHER_PAIR pAuthCipherPairList[*];
} WLAN_AUTH_CIPHER_PAIR_LIST, *PWLAN_AUTH_CIPHER_PAIR_LIST;
typedef struct _WLAN_COUNTRY_OR_REGION_STRING_LIST {
    DWORD dwNumberOfItems;
    [unique, size_is(dwNumberOfItems)] DOT11_COUNTRY_OR_REGION_STRING pCountryOrRegionStringList[*];
} WLAN_COUNTRY_OR_REGION_STRING_LIST, *PWLAN_COUNTRY_OR_REGION_STRING_LIST;
typedef struct _WLAN_PROFILE_INFO_LIST {
    DWORD dwNumberOfItems;
    DWORD dwIndex;
    [unique, size_is(dwNumberOfItems)] WLAN_PROFILE_INFO ProfileInfo[*];
} WLAN_PROFILE_INFO_LIST, *PWLAN_PROFILE_INFO_LIST;
typedef struct _WLAN_AVAILABLE_NETWORK_LIST {
    DWORD dwNumberOfItems;
    DWORD dwIndex;
    [unique, size_is(dwNumberOfItems)] WLAN_AVAILABLE_NETWORK Network[*];
} WLAN_AVAILABLE_NETWORK_LIST, *PWLAN_AVAILABLE_NETWORK_LIST;
typedef struct _WLAN_AVAILABLE_NETWORK_LIST_V2 {
    DWORD dwNumberOfItems;
    DWORD dwIndex;
    [unique, size_is(dwNumberOfItems)] WLAN_AVAILABLE_NETWORK_V2 Network[*];
} WLAN_AVAILABLE_NETWORK_LIST_V2, *PWLAN_AVAILABLE_NETWORK_LIST_V2;
typedef struct _WLAN_INTERFACE_INFO_LIST {
    DWORD dwNumberOfItems;
    DWORD dwIndex;
    [unique, size_is(dwNumberOfItems)] WLAN_INTERFACE_INFO InterfaceInfo[*];
} WLAN_INTERFACE_INFO_LIST, *PWLAN_INTERFACE_INFO_LIST;
typedef struct _DOT11_NETWORK_LIST {
    DWORD dwNumberOfItems;
    DWORD dwIndex;
    [unique, size_is(dwNumberOfItems)] DOT11_NETWORK Network[*];
} DOT11_NETWORK_LIST, *PDOT11_NETWORK_LIST;
typedef [v1_enum] enum _WLAN_POWER_SETTING {
    wlan_power_setting_no_saving = 0,
    wlan_power_setting_low_saving,
    wlan_power_setting_medium_saving,
    wlan_power_setting_maximum_saving,
    wlan_power_setting_invalid
} WLAN_POWER_SETTING, *PWLAN_POWER_SETTING;
typedef struct _WLAN_CONNECTION_PARAMETERS {
    WLAN_CONNECTION_MODE wlanConnectionMode;
    [string] LPCWSTR strProfile;
    PDOT11_SSID pDot11Ssid;
    PDOT11_BSSID_LIST pDesiredBssidList;
    DOT11_BSS_TYPE dot11BssType;
    DWORD dwFlags;
} WLAN_CONNECTION_PARAMETERS, *PWLAN_CONNECTION_PARAMETERS;
typedef struct _WLAN_CONNECTION_PARAMETERS_V2 {
    WLAN_CONNECTION_MODE wlanConnectionMode;
    [string] LPCWSTR strProfile;
    PDOT11_SSID pDot11Ssid;
    PDOT11_HESSID pDot11Hessid;
    PDOT11_BSSID_LIST pDesiredBssidList;
    DOT11_BSS_TYPE dot11BssType;
    DWORD dwFlags;
    PDOT11_ACCESSNETWORKOPTIONS pDot11AccessNetworkOptions;
} WLAN_CONNECTION_PARAMETERS_V2, *PWLAN_CONNECTION_PARAMETERS_V2;
typedef struct _WLAN_MSM_NOTIFICATION_DATA {
    WLAN_CONNECTION_MODE wlanConnectionMode;
    WCHAR strProfileName[WLAN_MAX_NAME_LENGTH];
    DOT11_SSID dot11Ssid;
    DOT11_BSS_TYPE dot11BssType;
    DOT11_MAC_ADDRESS dot11MacAddr;
    BOOL bSecurityEnabled;
    BOOL bFirstPeer;
    BOOL bLastPeer;
    WLAN_REASON_CODE wlanReasonCode;
} WLAN_MSM_NOTIFICATION_DATA, *PWLAN_MSM_NOTIFICATION_DATA;
typedef struct _WLAN_CONNECTION_NOTIFICATION_DATA {
    WLAN_CONNECTION_MODE wlanConnectionMode;
    WCHAR strProfileName[WLAN_MAX_NAME_LENGTH];
    DOT11_SSID dot11Ssid;
    DOT11_BSS_TYPE dot11BssType;
    BOOL bSecurityEnabled;
    WLAN_REASON_CODE wlanReasonCode;
    DWORD dwFlags;
    WCHAR strProfileXml[1];
} WLAN_CONNECTION_NOTIFICATION_DATA, *PWLAN_CONNECTION_NOTIFICATION_DATA;
typedef struct _WLAN_DEVICE_SERVICE_NOTIFICATION_DATA {
    GUID DeviceService;
    DWORD dwOpCode;
    DWORD dwDataSize;
    [unique, size_is(dwDataSize)] BYTE DataBlob[*];
} WLAN_DEVICE_SERVICE_NOTIFICATION_DATA, *PWLAN_DEVICE_SERVICE_NOTIFICATION_DATA;
typedef [v1_enum] enum _WLAN_NOTIFICATION_ACM {
    wlan_notification_acm_start = L2_NOTIFICATION_CODE_PUBLIC_BEGIN,
    wlan_notification_acm_autoconf_enabled,
    wlan_notification_acm_autoconf_disabled,
    wlan_notification_acm_background_scan_enabled,
    wlan_notification_acm_background_scan_disabled,
    wlan_notification_acm_bss_type_change,
    wlan_notification_acm_power_setting_change,
    wlan_notification_acm_scan_complete,
    wlan_notification_acm_scan_fail,
    wlan_notification_acm_connection_start,
    wlan_notification_acm_connection_complete,
    wlan_notification_acm_connection_attempt_fail,
    wlan_notification_acm_filter_list_change,
    wlan_notification_acm_interface_arrival,
    wlan_notification_acm_interface_removal,
    wlan_notification_acm_profile_change,
    wlan_notification_acm_profile_name_change,
    wlan_notification_acm_profiles_exhausted,
    wlan_notification_acm_network_not_available,
    wlan_notification_acm_network_available,
    wlan_notification_acm_disconnecting,
    wlan_notification_acm_disconnected,
    wlan_notification_acm_adhoc_network_state_change,
    wlan_notification_acm_profile_unblocked,
    wlan_notification_acm_screen_power_change,
    wlan_notification_acm_profile_blocked,
    wlan_notification_acm_scan_list_refresh,
    wlan_notification_acm_operational_state_change,
    wlan_notification_acm_end
} WLAN_NOTIFICATION_ACM, *PWLAN_NOTIFICATION_ACM;
typedef [v1_enum] enum _WLAN_NOTIFICATION_MSM {
    wlan_notification_msm_start = L2_NOTIFICATION_CODE_PUBLIC_BEGIN,
    wlan_notification_msm_associating,
    wlan_notification_msm_associated,
    wlan_notification_msm_authenticating,
    wlan_notification_msm_connected,
    wlan_notification_msm_roaming_start,
    wlan_notification_msm_roaming_end,
    wlan_notification_msm_radio_state_change,
    wlan_notification_msm_signal_quality_change,
    wlan_notification_msm_disassociating,
    wlan_notification_msm_disconnected,
    wlan_notification_msm_peer_join,
    wlan_notification_msm_peer_leave,
    wlan_notification_msm_adapter_removal,
    wlan_notification_msm_adapter_operation_mode_change,
    wlan_notification_msm_link_degraded,
    wlan_notification_msm_link_improved,
    wlan_notification_msm_end
} WLAN_NOTIFICATION_MSM, *PWLAN_NOTIFICATION_MSM;
typedef [v1_enum] enum _WLAN_NOTIFICATION_SECURITY {
    wlan_notification_security_start = L2_NOTIFICATION_CODE_PUBLIC_BEGIN,
    wlan_notification_security_end
} WLAN_NOTIFICATION_SECURITY, *PWLAN_NOTIFICATION_SECURITY;
typedef L2_NOTIFICATION_DATA WLAN_NOTIFICATION_DATA, *PWLAN_NOTIFICATION_DATA;
typedef VOID (WINAPI *WLAN_NOTIFICATION_CALLBACK) (PWLAN_NOTIFICATION_DATA, PVOID);
typedef [v1_enum] enum _WLAN_OPCODE_VALUE_TYPE {
        wlan_opcode_value_type_query_only = 0,
        wlan_opcode_value_type_set_by_group_policy,
        wlan_opcode_value_type_set_by_user,
        wlan_opcode_value_type_invalid
} WLAN_OPCODE_VALUE_TYPE, *PWLAN_OPCODE_VALUE_TYPE;
typedef [v1_enum] enum _WLAN_INTF_OPCODE {
    wlan_intf_opcode_autoconf_start = 0x000000000,
    wlan_intf_opcode_autoconf_enabled,
    wlan_intf_opcode_background_scan_enabled,
    wlan_intf_opcode_media_streaming_mode,
    wlan_intf_opcode_radio_state,
    wlan_intf_opcode_bss_type,
    wlan_intf_opcode_interface_state,
    wlan_intf_opcode_current_connection,
    wlan_intf_opcode_channel_number,
    wlan_intf_opcode_supported_infrastructure_auth_cipher_pairs,
    wlan_intf_opcode_supported_adhoc_auth_cipher_pairs,
    wlan_intf_opcode_supported_country_or_region_string_list,
    wlan_intf_opcode_current_operation_mode,
    wlan_intf_opcode_supported_safe_mode,
    wlan_intf_opcode_certified_safe_mode,
    wlan_intf_opcode_hosted_network_capable,
    wlan_intf_opcode_management_frame_protection_capable,
    wlan_intf_opcode_autoconf_end = 0x0fffffff,
    wlan_intf_opcode_msm_start = 0x10000100,
    wlan_intf_opcode_statistics,
    wlan_intf_opcode_rssi,
    wlan_intf_opcode_msm_end = 0x1fffffff,
    wlan_intf_opcode_security_start = 0x20010000,
    wlan_intf_opcode_security_end = 0x2fffffff,
    wlan_intf_opcode_ihv_start = 0x30000000,
    wlan_intf_opcode_ihv_end = 0x3fffffff
} WLAN_INTF_OPCODE, *PWLAN_INTF_OPCODE;
typedef [v1_enum] enum _WLAN_AUTOCONF_OPCODE {
    wlan_autoconf_opcode_start = 0,
    wlan_autoconf_opcode_show_denied_networks,
    wlan_autoconf_opcode_power_setting,
    wlan_autoconf_opcode_only_use_gp_profiles_for_allowed_networks,
    wlan_autoconf_opcode_allow_explicit_creds,
    wlan_autoconf_opcode_block_period,
    wlan_autoconf_opcode_allow_virtual_station_extensibility,
    wlan_autoconf_opcode_end
} WLAN_AUTOCONF_OPCODE, *PWLAN_AUTOCONF_OPCODE;
typedef [v1_enum] enum _WLAN_IHV_CONTROL_TYPE {
    wlan_ihv_control_type_service,
    wlan_ihv_control_type_driver
} WLAN_IHV_CONTROL_TYPE, *PWLAN_IHV_CONTROL_TYPE;
typedef enum _WLAN_FILTER_LIST_TYPE {
    wlan_filter_list_type_gp_permit,
    wlan_filter_list_type_gp_deny,
    wlan_filter_list_type_user_permit,
    wlan_filter_list_type_user_deny
} WLAN_FILTER_LIST_TYPE, *PWLAN_FILTER_LIST_TYPE;
typedef struct WLAN_PHY_FRAME_STATISTICS {
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
} WLAN_PHY_FRAME_STATISTICS, * PWLAN_PHY_FRAME_STATISTICS;
typedef struct WLAN_MAC_FRAME_STATISTICS {
    ULONGLONG ullTransmittedFrameCount;
    ULONGLONG ullReceivedFrameCount;
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
} WLAN_MAC_FRAME_STATISTICS, * PWLAN_MAC_FRAME_STATISTICS;
typedef struct WLAN_STATISTICS {
    ULONGLONG ullFourWayHandshakeFailures;
    ULONGLONG ullTKIPCounterMeasuresInvoked;
    ULONGLONG ullReserved;
    WLAN_MAC_FRAME_STATISTICS MacUcastCounters;
    WLAN_MAC_FRAME_STATISTICS MacMcastCounters;
    DWORD dwNumberOfPhys;
    [unique, size_is(dwNumberOfPhys)] WLAN_PHY_FRAME_STATISTICS PhyCounters[*];
} WLAN_STATISTICS, * PWLAN_STATISTICS;
typedef enum
_WLAN_SECURABLE_OBJECT
{
    wlan_secure_permit_list = 0,
    wlan_secure_deny_list,
    wlan_secure_ac_enabled,
    wlan_secure_bc_scan_enabled,
    wlan_secure_bss_type,
    wlan_secure_show_denied,
    wlan_secure_interface_properties,
    wlan_secure_ihv_control,
    wlan_secure_all_user_profiles_order,
    wlan_secure_add_new_all_user_profiles,
    wlan_secure_add_new_per_user_profiles,
    wlan_secure_media_streaming_mode_enabled,
    wlan_secure_current_operation_mode,
    wlan_secure_get_plaintext_key,
    wlan_secure_hosted_network_elevated_access,
    wlan_secure_virtual_station_extensibility,
    wlan_secure_wfd_elevated_access,
    WLAN_SECURABLE_OBJECT_COUNT
}
WLAN_SECURABLE_OBJECT, *PWLAN_SECURABLE_OBJECT;
typedef struct _WLAN_DEVICE_SERVICE_GUID_LIST {
    DWORD dwNumberOfItems;
    DWORD dwIndex;
    [unique, size_is(dwNumberOfItems)] GUID DeviceService[*];
} WLAN_DEVICE_SERVICE_GUID_LIST, *PWLAN_DEVICE_SERVICE_GUID_LIST;
    #define WFD_API_SUPPORTED
    #define WFD_API_VERSION WFD_API_VERSION_1_0
typedef enum _WFD_ROLE_TYPE {
    WFD_ROLE_TYPE_NONE = 0x00,
    WFD_ROLE_TYPE_DEVICE = 0x01,
    WFD_ROLE_TYPE_GROUP_OWNER = 0x02,
    WFD_ROLE_TYPE_CLIENT = 0x04,
    WFD_ROLE_TYPE_MAX = 0x05
} WFD_ROLE_TYPE, *PWFD_ROLE_TYPE;
typedef struct _WFD_GROUP_ID
{
    DOT11_MAC_ADDRESS DeviceAddress;
    DOT11_SSID GroupSSID;
} WFD_GROUP_ID, *PWFD_GROUP_ID;
DWORD WINAPI
WlanOpenHandle(
    _In_ DWORD dwClientVersion,
    _Reserved_ PVOID pReserved,
    _Out_ PDWORD pdwNegotiatedVersion,
    _Out_ PHANDLE phClientHandle
);
DWORD WINAPI
WlanCloseHandle(
    _In_ HANDLE hClientHandle,
    _Reserved_ PVOID pReserved
);
DWORD WINAPI
WlanEnumInterfaces(
    _In_ HANDLE hClientHandle,
    _Reserved_ PVOID pReserved,
    _Outptr_ PWLAN_INTERFACE_INFO_LIST *ppInterfaceList
);
DWORD WINAPI
WlanSetAutoConfigParameter(
    _In_ HANDLE hClientHandle,
    _In_ WLAN_AUTOCONF_OPCODE OpCode,
    _In_ DWORD dwDataSize,
    _In_reads_bytes_(dwDataSize) CONST PVOID pData,
    _Reserved_ PVOID pReserved
);
DWORD WINAPI
WlanQueryAutoConfigParameter(
    _In_ HANDLE hClientHandle,
    _In_ WLAN_AUTOCONF_OPCODE OpCode,
    _Reserved_ PVOID pReserved,
    _Out_ PDWORD pdwDataSize,
    _Outptr_result_bytebuffer_(*pdwDataSize) PVOID *ppData,
    _Out_opt_ PWLAN_OPCODE_VALUE_TYPE pWlanOpcodeValueType
);
DWORD WINAPI
WlanGetInterfaceCapability(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _Reserved_ PVOID pReserved,
    _Outptr_ PWLAN_INTERFACE_CAPABILITY *ppCapability
);
DWORD WINAPI
WlanSetInterface(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _In_ WLAN_INTF_OPCODE OpCode,
    _In_ DWORD dwDataSize,
    _In_reads_bytes_(dwDataSize) CONST PVOID pData,
    _Reserved_ PVOID pReserved
);
DWORD WINAPI
WlanQueryInterface(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _In_ WLAN_INTF_OPCODE OpCode,
    _Reserved_ PVOID pReserved,
    _Out_ PDWORD pdwDataSize,
    _Outptr_result_bytebuffer_(*pdwDataSize) PVOID *ppData,
    _Out_opt_ PWLAN_OPCODE_VALUE_TYPE pWlanOpcodeValueType
);
DWORD WINAPI
WlanIhvControl(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _In_ WLAN_IHV_CONTROL_TYPE Type,
    _In_ DWORD dwInBufferSize,
    _In_reads_bytes_(dwInBufferSize) PVOID pInBuffer,
    _In_ DWORD dwOutBufferSize,
    _Inout_updates_bytes_opt_(dwOutBufferSize) PVOID pOutBuffer,
    _Out_ PDWORD pdwBytesReturned
);
DWORD WINAPI
WlanScan(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _In_opt_ CONST PDOT11_SSID pDot11Ssid,
    _In_opt_ CONST PWLAN_RAW_DATA pIeData,
    _Reserved_ PVOID pReserved
);
DWORD WINAPI
WlanGetAvailableNetworkList(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _In_ DWORD dwFlags,
    _Reserved_ PVOID pReserved,
    _Outptr_ PWLAN_AVAILABLE_NETWORK_LIST *ppAvailableNetworkList
);
DWORD WINAPI
WlanGetAvailableNetworkList2(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _In_ DWORD dwFlags,
    _Reserved_ PVOID pReserved,
    _Outptr_ PWLAN_AVAILABLE_NETWORK_LIST_V2 *ppAvailableNetworkList
);
DWORD WINAPI
WlanGetNetworkBssList(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _In_opt_ CONST PDOT11_SSID pDot11Ssid,
    _In_ DOT11_BSS_TYPE dot11BssType,
    _In_ BOOL bSecurityEnabled,
    _Reserved_ PVOID pReserved,
    _Outptr_ PWLAN_BSS_LIST *ppWlanBssList
);
DWORD WINAPI
WlanConnect(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _In_ CONST PWLAN_CONNECTION_PARAMETERS pConnectionParameters,
    _Reserved_ PVOID pReserved
);
DWORD WINAPI
WlanConnect2(
    _In_ HANDLE hClientHandle,
    _In_ const GUID *pInterfaceGuid,
    _In_ const PWLAN_CONNECTION_PARAMETERS_V2 pConnectionParameters,
    _Reserved_ PVOID pReserved
);
DWORD WINAPI
WlanDisconnect(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _Reserved_ PVOID pReserved
);
DWORD WINAPI
WlanRegisterNotification(
    _In_ HANDLE hClientHandle,
    _In_ DWORD dwNotifSource,
    _In_ BOOL bIgnoreDuplicate,
    _In_opt_ WLAN_NOTIFICATION_CALLBACK funcCallback,
    _In_opt_ PVOID pCallbackContext,
    _Reserved_ PVOID pReserved,
    _Out_opt_ PDWORD pdwPrevNotifSource
);
DWORD WINAPI
WlanGetProfile(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _In_ LPCWSTR strProfileName,
    _Reserved_ PVOID pReserved,
    _Outptr_ LPWSTR *pstrProfileXml,
    _Inout_opt_ DWORD *pdwFlags,
    _Out_opt_ DWORD *pdwGrantedAccess
);
DWORD WINAPI
WlanSetProfileEapUserData(
    _In_ HANDLE hClientHandle,
    _In_ const GUID *pInterfaceGuid,
    _In_ LPCWSTR strProfileName,
    _In_ EAP_METHOD_TYPE eapType,
    _In_ DWORD dwFlags,
    _In_ DWORD dwEapUserDataSize,
    _In_reads_bytes_opt_(dwEapUserDataSize) const LPBYTE pbEapUserData,
    _Reserved_ PVOID pReserved
);
DWORD WINAPI
WlanSetProfileEapXmlUserData(
    _In_ HANDLE hClientHandle,
    _In_ const GUID *pInterfaceGuid,
    _In_ LPCWSTR strProfileName,
    _In_ DWORD dwFlags,
    _In_ LPCWSTR strEapXmlUserData,
    _Reserved_ PVOID pReserved
);
DWORD WINAPI
WlanSetProfile(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _In_ DWORD dwFlags,
    _In_ LPCWSTR strProfileXml,
    _In_opt_ LPCWSTR strAllUserProfileSecurity,
    _In_ BOOL bOverwrite,
    _Reserved_ PVOID pReserved,
    _Out_ DWORD *pdwReasonCode
);
DWORD WINAPI
WlanDeleteProfile(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _In_ LPCWSTR strProfileName,
    _Reserved_ PVOID pReserved
);
DWORD WINAPI
WlanRenameProfile(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _In_ LPCWSTR strOldProfileName,
    _In_ LPCWSTR strNewProfileName,
    _Reserved_ PVOID pReserved
);
DWORD WINAPI
WlanGetProfileList(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _Reserved_ PVOID pReserved,
    _Outptr_ PWLAN_PROFILE_INFO_LIST *ppProfileList
);
DWORD WINAPI
WlanSetProfileList(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _In_ DWORD dwItems,
    _In_reads_(dwItems) LPCWSTR *strProfileNames,
    _Reserved_ PVOID pReserved
);
DWORD WINAPI
WlanSetProfilePosition(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _In_ LPCWSTR strProfileName,
    _In_ DWORD dwPosition,
    _Reserved_ PVOID pReserved
);
DWORD WINAPI
WlanSetProfileCustomUserData(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _In_ LPCWSTR strProfileName,
    _In_ DWORD dwDataSize,
    _In_reads_bytes_(dwDataSize) CONST PBYTE pData,
    _Reserved_ PVOID pReserved
);
DWORD WINAPI
WlanGetProfileCustomUserData(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _In_ LPCWSTR strProfileName,
    _Reserved_ PVOID pReserved,
    _Out_ DWORD *pdwDataSize,
    _Outptr_result_bytebuffer_(*pdwDataSize) PBYTE *ppData
);
DWORD WINAPI
WlanSetFilterList(
    _In_ HANDLE hClientHandle,
    _In_ WLAN_FILTER_LIST_TYPE wlanFilterListType,
    _In_opt_ CONST PDOT11_NETWORK_LIST pNetworkList,
    _Reserved_ PVOID pReserved
);
DWORD WINAPI
WlanGetFilterList(
    _In_ HANDLE hClientHandle,
    _In_ WLAN_FILTER_LIST_TYPE wlanFilterListType,
    _Reserved_ PVOID pReserved,
    _Outptr_ PDOT11_NETWORK_LIST *ppNetworkList
);
DWORD WINAPI
WlanSetPsdIEDataList(
    _In_ HANDLE hClientHandle,
    _In_opt_ LPCWSTR strFormat,
    _In_opt_ CONST PWLAN_RAW_DATA_LIST pPsdIEDataList,
    _Reserved_ PVOID pReserved
);
DWORD WINAPI
WlanSaveTemporaryProfile(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID* pInterfaceGuid,
    _In_ LPCWSTR strProfileName,
    _In_opt_ LPCWSTR strAllUserProfileSecurity,
    _In_ DWORD dwFlags,
    _In_ BOOL bOverWrite,
    _Reserved_ PVOID pReserved
);
DWORD WINAPI
WlanDeviceServiceCommand(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _In_ LPGUID pDeviceServiceGuid,
    _In_ DWORD dwOpCode,
    _In_ DWORD dwInBufferSize,
    _In_reads_bytes_opt_(dwInBufferSize) PVOID pInBuffer,
    _In_ DWORD dwOutBufferSize,
    _Inout_updates_bytes_opt_(dwOutBufferSize) PVOID pOutBuffer,
    _Out_ PDWORD pdwBytesReturned
);
DWORD WINAPI
WlanGetSupportedDeviceServices(
    _In_ HANDLE hClientHandle,
    _In_ CONST GUID *pInterfaceGuid,
    _Outptr_ PWLAN_DEVICE_SERVICE_GUID_LIST *ppDevSvcGuidList
);
DWORD WINAPI
WlanRegisterDeviceServiceNotification(
    _In_ HANDLE hClientHandle,
    _In_opt_ CONST PWLAN_DEVICE_SERVICE_GUID_LIST pDevSvcGuidList
);
DWORD WINAPI
WlanExtractPsdIEDataList(
    _In_ HANDLE hClientHandle,
    _In_ DWORD dwIeDataSize,
    _In_reads_bytes_(dwIeDataSize) CONST PBYTE pRawIeData,
    _In_ LPCWSTR strFormat,
    _Reserved_ PVOID pReserved,
    _Outptr_ PWLAN_RAW_DATA_LIST *ppPsdIEDataList
);
DWORD WINAPI
WlanReasonCodeToString(
    _In_ DWORD dwReasonCode,
    _In_ DWORD dwBufferSize,
    _In_reads_(dwBufferSize) PWCHAR pStringBuffer,
    _Reserved_ PVOID pReserved
);
PVOID WINAPI
WlanAllocateMemory(
    _In_ DWORD dwMemorySize
);
VOID WINAPI
WlanFreeMemory(
    _In_ PVOID pMemory
);
DWORD WINAPI
WlanSetSecuritySettings(
    _In_ HANDLE hClientHandle,
    _In_ WLAN_SECURABLE_OBJECT SecurableObject,
    _In_ LPCWSTR strModifiedSDDL
);
DWORD WINAPI
WlanGetSecuritySettings(
    _In_ HANDLE hClientHandle,
    _In_ WLAN_SECURABLE_OBJECT SecurableObject,
    _Out_opt_ PWLAN_OPCODE_VALUE_TYPE pValueType,
    _Outptr_ LPWSTR* pstrCurrentSDDL,
    _Out_ PDWORD pdwGrantedAccess
);
typedef enum _WL_DISPLAY_PAGES
{
    WLConnectionPage,
    WLSecurityPage,
    WLAdvPage
} WL_DISPLAY_PAGES, *PWL_DISPLAY_PAGES;
DWORD WINAPI
WlanUIEditProfile(
    _In_ DWORD dwClientVersion,
    _In_ LPCWSTR wstrProfileName,
    _In_ GUID *pInterfaceGuid,
    _In_ HWND hWnd,
    _In_ WL_DISPLAY_PAGES wlStartPage,
    _Reserved_ PVOID pReserved,
    _Out_opt_ PWLAN_REASON_CODE pWlanReasonCode
    );
typedef
[v1_enum]
enum _WLAN_HOSTED_NETWORK_STATE
{
    wlan_hosted_network_unavailable,
    wlan_hosted_network_idle,
    wlan_hosted_network_active,
}
WLAN_HOSTED_NETWORK_STATE, *PWLAN_HOSTED_NETWORK_STATE;
typedef
[v1_enum]
enum _WLAN_HOSTED_NETWORK_REASON
{
    wlan_hosted_network_reason_success = 0,
    wlan_hosted_network_reason_unspecified,
    wlan_hosted_network_reason_bad_parameters,
    wlan_hosted_network_reason_service_shutting_down,
    wlan_hosted_network_reason_insufficient_resources,
    wlan_hosted_network_reason_elevation_required,
    wlan_hosted_network_reason_read_only,
    wlan_hosted_network_reason_persistence_failed,
    wlan_hosted_network_reason_crypt_error,
    wlan_hosted_network_reason_impersonation,
    wlan_hosted_network_reason_stop_before_start,
    wlan_hosted_network_reason_interface_available,
    wlan_hosted_network_reason_interface_unavailable,
    wlan_hosted_network_reason_miniport_stopped,
    wlan_hosted_network_reason_miniport_started,
    wlan_hosted_network_reason_incompatible_connection_started,
    wlan_hosted_network_reason_incompatible_connection_stopped,
    wlan_hosted_network_reason_user_action,
    wlan_hosted_network_reason_client_abort,
    wlan_hosted_network_reason_ap_start_failed,
    wlan_hosted_network_reason_peer_arrived,
    wlan_hosted_network_reason_peer_departed,
    wlan_hosted_network_reason_peer_timeout,
    wlan_hosted_network_reason_gp_denied,
    wlan_hosted_network_reason_service_unavailable,
    wlan_hosted_network_reason_device_change,
    wlan_hosted_network_reason_properties_change,
    wlan_hosted_network_reason_virtual_station_blocking_use,
    wlan_hosted_network_reason_service_available_on_virtual_station,
}
WLAN_HOSTED_NETWORK_REASON, *PWLAN_HOSTED_NETWORK_REASON;
typedef
[v1_enum]
enum _WLAN_HOSTED_NETWORK_PEER_AUTH_STATE
{
    wlan_hosted_network_peer_state_invalid,
    wlan_hosted_network_peer_state_authenticated,
}
WLAN_HOSTED_NETWORK_PEER_AUTH_STATE, *PWLAN_HOSTED_NETWORK_PEER_AUTH_STATE;
DWORD
WINAPI
WlanHostedNetworkStartUsing
(
    _In_ HANDLE hClientHandle,
    _Out_opt_ PWLAN_HOSTED_NETWORK_REASON pFailReason,
    _Reserved_ PVOID pvReserved
);
DWORD
WINAPI
WlanHostedNetworkStopUsing
(
    _In_ HANDLE hClientHandle,
    _Out_opt_ PWLAN_HOSTED_NETWORK_REASON pFailReason,
    _Reserved_ PVOID pvReserved
);
DWORD
WINAPI
WlanHostedNetworkForceStart
(
    _In_ HANDLE hClientHandle,
    _Out_opt_ PWLAN_HOSTED_NETWORK_REASON pFailReason,
    _Reserved_ PVOID pvReserved
);
DWORD
WINAPI
WlanHostedNetworkForceStop
(
    _In_ HANDLE hClientHandle,
    _Out_opt_ PWLAN_HOSTED_NETWORK_REASON pFailReason,
    _Reserved_ PVOID pvReserved
);
typedef
struct _WLAN_HOSTED_NETWORK_PEER_STATE
{
    DOT11_MAC_ADDRESS PeerMacAddress;
    WLAN_HOSTED_NETWORK_PEER_AUTH_STATE PeerAuthState;
}
WLAN_HOSTED_NETWORK_PEER_STATE, *PWLAN_HOSTED_NETWORK_PEER_STATE;
typedef
struct _WLAN_HOSTED_NETWORK_RADIO_STATE
{
    DOT11_RADIO_STATE dot11SoftwareRadioState;
    DOT11_RADIO_STATE dot11HardwareRadioState;
}
WLAN_HOSTED_NETWORK_RADIO_STATE, *PWLAN_HOSTED_NETWORK_RADIO_STATE;
typedef
[v1_enum]
enum _WLAN_HOSTED_NETWORK_NOTIFICATION_CODE
{
    wlan_hosted_network_state_change = L2_NOTIFICATION_CODE_V2_BEGIN,
    wlan_hosted_network_peer_state_change,
    wlan_hosted_network_radio_state_change,
}
WLAN_HOSTED_NETWORK_NOTIFICATION_CODE, *PWLAN_HOSTED_NETWORK_NOTIFICATION_CODE;
typedef
struct _WLAN_HOSTED_NETWORK_STATE_CHANGE
{
    WLAN_HOSTED_NETWORK_STATE OldState;
    WLAN_HOSTED_NETWORK_STATE NewState;
    WLAN_HOSTED_NETWORK_REASON StateChangeReason;
}
WLAN_HOSTED_NETWORK_STATE_CHANGE, *PWLAN_HOSTED_NETWORK_STATE_CHANGE;
typedef
struct _WLAN_HOSTED_NETWORK_DATA_PEER_STATE_CHANGE
{
    WLAN_HOSTED_NETWORK_PEER_STATE OldState;
    WLAN_HOSTED_NETWORK_PEER_STATE NewState;
    WLAN_HOSTED_NETWORK_REASON PeerStateChangeReason;
}
WLAN_HOSTED_NETWORK_DATA_PEER_STATE_CHANGE, *PWLAN_HOSTED_NETWORK_DATA_PEER_STATE_CHANGE;
typedef
[v1_enum]
enum
_WLAN_HOSTED_NETWORK_OPCODE
{
    wlan_hosted_network_opcode_connection_settings,
    wlan_hosted_network_opcode_security_settings,
    wlan_hosted_network_opcode_station_profile,
    wlan_hosted_network_opcode_enable,
}
WLAN_HOSTED_NETWORK_OPCODE, *PWLAN_HOSTED_NETWORK_OPCODE;
typedef
struct _WLAN_HOSTED_NETWORK_CONNECTION_SETTINGS
{
    DOT11_SSID hostedNetworkSSID;
    DWORD dwMaxNumberOfPeers;
}
WLAN_HOSTED_NETWORK_CONNECTION_SETTINGS, *PWLAN_HOSTED_NETWORK_CONNECTION_SETTINGS;
typedef
struct _WLAN_HOSTED_NETWORK_SECURITY_SETTINGS
{
    DOT11_AUTH_ALGORITHM dot11AuthAlgo;
    DOT11_CIPHER_ALGORITHM dot11CipherAlgo;
}
WLAN_HOSTED_NETWORK_SECURITY_SETTINGS, *PWLAN_HOSTED_NETWORK_SECURITY_SETTINGS;
DWORD
WINAPI
WlanHostedNetworkQueryProperty
(
    _In_ HANDLE hClientHandle,
    _In_ WLAN_HOSTED_NETWORK_OPCODE OpCode,
    _Out_ PDWORD pdwDataSize,
    _Outptr_result_bytebuffer_(*pdwDataSize) PVOID* ppvData,
    _Out_ PWLAN_OPCODE_VALUE_TYPE pWlanOpcodeValueType,
    _Reserved_ PVOID pvReserved
);
DWORD
WINAPI
WlanHostedNetworkSetProperty
(
    _In_ HANDLE hClientHandle,
    _In_ WLAN_HOSTED_NETWORK_OPCODE OpCode,
    _In_ DWORD dwDataSize,
    _In_reads_bytes_(dwDataSize) PVOID pvData,
    _Out_opt_ PWLAN_HOSTED_NETWORK_REASON pFailReason,
    _Reserved_ PVOID pvReserved
);
DWORD
WINAPI
WlanHostedNetworkInitSettings
(
    _In_ HANDLE hClientHandle,
    _Out_opt_ PWLAN_HOSTED_NETWORK_REASON pFailReason,
    _Reserved_ PVOID pvReserved
);
DWORD
WINAPI
WlanHostedNetworkRefreshSecuritySettings
(
    _In_ HANDLE hClientHandle,
    _Out_opt_ PWLAN_HOSTED_NETWORK_REASON pFailReason,
    _Reserved_ PVOID pvReserved
);
typedef
struct _WLAN_HOSTED_NETWORK_STATUS
{
    WLAN_HOSTED_NETWORK_STATE HostedNetworkState;
    GUID IPDeviceID;
    DOT11_MAC_ADDRESS wlanHostedNetworkBSSID;
    DOT11_PHY_TYPE dot11PhyType;
    ULONG ulChannelFrequency;
    DWORD dwNumberOfPeers;
    [unique, size_is(dwNumberOfPeers)] WLAN_HOSTED_NETWORK_PEER_STATE PeerList[*];
}
WLAN_HOSTED_NETWORK_STATUS, *PWLAN_HOSTED_NETWORK_STATUS;
DWORD
WINAPI
WlanHostedNetworkQueryStatus
(
    _In_ HANDLE hClientHandle,
    _Outptr_ PWLAN_HOSTED_NETWORK_STATUS* ppWlanHostedNetworkStatus,
    _Reserved_ PVOID pvReserved
);
DWORD
WINAPI
WlanHostedNetworkSetSecondaryKey
(
    _In_ HANDLE hClientHandle,
    _In_ DWORD dwKeyLength,
    _In_reads_bytes_(dwKeyLength) PUCHAR pucKeyData,
    _In_ BOOL bIsPassPhrase,
    _In_ BOOL bPersistent,
    _Out_opt_ PWLAN_HOSTED_NETWORK_REASON pFailReason,
    _Reserved_ PVOID pvReserved
);
DWORD
WINAPI
WlanHostedNetworkQuerySecondaryKey
(
    _In_ HANDLE hClientHandle,
    _Out_ PDWORD pdwKeyLength,
    _Outptr_result_buffer_(*pdwKeyLength) PUCHAR *ppucKeyData,
    _Out_ PBOOL pbIsPassPhrase,
    _Out_ PBOOL pbPersistent,
    _Out_opt_ PWLAN_HOSTED_NETWORK_REASON pFailReason,
    _Reserved_ PVOID pvReserved
);
DWORD
WINAPI
WlanRegisterVirtualStationNotification
(
    _In_ HANDLE hClientHandle,
    _In_ BOOL bRegister,
    _Reserved_ PVOID pReserved
);
DEFINE_GUID(
    GUID_DEVINTERFACE_WIFIDIRECT_DEVICE,
    0x439b20af, 0x8955, 0x405b, 0x99, 0xf0, 0xa6, 0x2a, 0xf0, 0xc6, 0x8d, 0x43
    );
DEFINE_GUID(
    GUID_AEPSERVICE_WIFIDIRECT_DEVICE,
    0xcc29827c, 0x9caf, 0x4928, 0x99, 0xa9, 0x18, 0xf7, 0xc2, 0x38, 0x13, 0x89
    );
DEFINE_GUID(
    GUID_DEVINTERFACE_ASP_INFRA_DEVICE,
    0xff823995, 0x7a72, 0x4c80, 0x87, 0x57, 0xc6, 0x7e, 0xe1, 0x3d, 0x1a, 0x49
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_DeviceAddress,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x01
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_InterfaceAddress,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x02
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_InterfaceGuid,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x03
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_GroupId,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x04
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_IsConnected,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x05
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_IsVisible,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x06
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_IsLegacyDevice,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x07
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_MiracastVersion,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x08
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_IsMiracastLCPSupported,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x09
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_Services,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x0A
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_SupportedChannelList,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x0B
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_InformationElements,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x0C
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_DeviceAddressCopy,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x0D
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_IsRecentlyAssociated,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x0E
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_Service_Aeps,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x0F
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_NoMiracastAutoProject,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x10
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_InfraCast_Supported,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x11
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_InfraCast_StreamSecuritySupported,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x12
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_InfraCast_AccessPointBssid,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x13
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_InfraCast_SinkHostName,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x14
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_InfraCast_ChallengeAep,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x15
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_IsDMGCapable,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x16
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_InfraCast_DevnodeAep,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x17
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_FoundWsbService,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x18
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_InfraCast_HostName_ResolutionMode,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x19
);
DEFINE_DEVPROPKEY(
    DEVPKEY_InfraCast_SinkIpAddress,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x1A
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_TransientAssociation,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x1B
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirect_LinkQuality,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x1C
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_InfraCast_PinSupported,
    0x1506935d, 0xe3e7, 0x450f, 0x86, 0x37, 0x82, 0x23, 0x3e, 0xbe, 0x5f, 0x6E,
    0x1D
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirectServices_ServiceAddress,
    0x31b37743, 0x7c5e, 0x4005, 0x93, 0xe6, 0xe9, 0x53, 0xf9, 0x2b, 0x82, 0xe9,
    0x02
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirectServices_ServiceName,
    0x31b37743, 0x7c5e, 0x4005, 0x93, 0xe6, 0xe9, 0x53, 0xf9, 0x2b, 0x82, 0xe9,
    0x03
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirectServices_ServiceInformation,
    0x31b37743, 0x7c5e, 0x4005, 0x93, 0xe6, 0xe9, 0x53, 0xf9, 0x2b, 0x82, 0xe9,
    0x04
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirectServices_AdvertisementId,
    0x31b37743, 0x7c5e, 0x4005, 0x93, 0xe6, 0xe9, 0x53, 0xf9, 0x2b, 0x82, 0xe9,
    0x05
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirectServices_ServiceConfigMethods,
    0x31b37743, 0x7c5e, 0x4005, 0x93, 0xe6, 0xe9, 0x53, 0xf9, 0x2b, 0x82, 0xe9,
    0x06
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFiDirectServices_RequestServiceInformation,
    0x31b37743, 0x7c5e, 0x4005, 0x93, 0xe6, 0xe9, 0x53, 0xf9, 0x2b, 0x82, 0xe9,
    0x07
    );
DWORD
WINAPI
WFDOpenHandle(
    _In_ DWORD dwClientVersion,
    _Out_ PDWORD pdwNegotiatedVersion,
    _Out_ PHANDLE phClientHandle
    );
DWORD
WINAPI
WFDCloseHandle(
    _In_ HANDLE hClientHandle
    );
typedef VOID (WINAPI *WFD_OPEN_SESSION_COMPLETE_CALLBACK) (
    _In_ HANDLE hSessionHandle,
    _In_ PVOID pvContext,
    _In_ GUID guidSessionInterface,
    _In_ DWORD dwError,
    _In_ DWORD dwReasonCode
    );
DWORD
WINAPI
WFDStartOpenSession(
    _In_ HANDLE hClientHandle,
    _In_ PDOT11_MAC_ADDRESS pDeviceAddress,
    _In_opt_ PVOID pvContext,
    _In_ WFD_OPEN_SESSION_COMPLETE_CALLBACK pfnCallback,
    _Out_ PHANDLE phSessionHandle
    );
DWORD
WINAPI
WFDCancelOpenSession(
    _In_ HANDLE hSessionHandle
    );
DWORD
WINAPI
WFDOpenLegacySession(
    _In_ HANDLE hClientHandle,
    _In_ PDOT11_MAC_ADDRESS pLegacyMacAddress,
    _Out_ HANDLE* phSessionHandle,
    _Out_ GUID* pGuidSessionInterface
    );
DWORD
WINAPI
WFDCloseSession(
    _In_ HANDLE hSessionHandle
    );
DWORD
WINAPI
WFDUpdateDeviceVisibility(
    _In_ PDOT11_MAC_ADDRESS pDeviceAddress
    );
DEFINE_DEVPROPKEY(
    DEVPKEY_WiFi_InterfaceGuid,
    0xef1167eb, 0xcbfc, 0x4341, 0xa5, 0x68, 0xa7, 0xc9, 0x1a, 0x68, 0x98, 0x2c,
    0x02
    );
}
#endif
#pragma endregion
