       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windot11.h>
#include <wlclient.h>
#include <l2cmn.h>
#include <WlanIhvTypes.h>
#include <dot1x.h>
typedef
struct _DOT11EXT_APIS
DOT11EXT_APIS, *PDOT11EXT_APIS;
typedef
struct _DOT11EXT_IHV_HANDLERS
DOT11EXT_IHV_HANDLERS, *PDOT11EXT_IHV_HANDLERS;
typedef
struct _DOT11EXT_VIRTUAL_STATION_APIS
DOT11EXT_VIRTUAL_STATION_APIS, *PDOT11EXT_VIRTUAL_STATION_APIS;
typedef
struct _DOT11_IHV_VERSION_INFO
{
   DWORD dwVerMin;
   DWORD dwVerMax;
}
DOT11_IHV_VERSION_INFO, *PDOT11_IHV_VERSION_INFO;
typedef enum
_DOT11EXT_IHV_CONNECTION_PHASE
{
   connection_phase_any,
   connection_phase_initial_connection,
   connection_phase_post_l3_connection
}
DOT11EXT_IHV_CONNECTION_PHASE, *PDOT11EXT_IHV_CONNECTION_PHASE;
typedef
struct _DOT11EXT_IHV_UI_REQUEST
{
   DWORD dwSessionId;
   GUID guidUIRequest;
   CLSID UIPageClsid;
   DWORD dwByteCount;
   [size_is(dwByteCount)]
   _Field_size_(dwByteCount) BYTE* pvUIRequest;
}
DOT11EXT_IHV_UI_REQUEST, *PDOT11EXT_IHV_UI_REQUEST;
typedef enum _DOT11_MSONEX_RESULT
{
    DOT11_MSONEX_SUCCESS,
    DOT11_MSONEX_FAILURE,
    DOT11_MSONEX_IN_PROGRESS
} DOT11_MSONEX_RESULT, *PDOT11_MSONEX_RESULT;
typedef struct _DOT11_EAP_RESULT
{
   UINT32 dwFailureReasonCode;
   EAP_ATTRIBUTES* pAttribArray;
} DOT11_EAP_RESULT, *PDOT11_EAP_RESULT;
typedef struct _DOT11_MSONEX_RESULT_PARAMS
{
    ONEX_AUTH_STATUS Dot11OnexAuthStatus;
    ONEX_REASON_CODE Dot11OneXReasonCode;
    [size_is(dwMPPESendKeyLen)]
    _Field_size_(dwMPPESendKeyLen) PBYTE pbMPPESendKey;
    DWORD dwMPPESendKeyLen;
    [size_is(dwMPPERecvKeyLen)]
    _Field_size_(dwMPPERecvKeyLen) PBYTE pbMPPERecvKey;
    DWORD dwMPPERecvKeyLen;
    PDOT11_EAP_RESULT pDot11EapResult;
} DOT11_MSONEX_RESULT_PARAMS, *PDOT11_MSONEX_RESULT_PARAMS;
typedef
struct _DOT11EXT_IHV_CONNECTIVITY_PROFILE
{
    [string]
    LPWSTR pszXmlFragmentIhvConnectivity;
}
DOT11EXT_IHV_CONNECTIVITY_PROFILE, *PDOT11EXT_IHV_CONNECTIVITY_PROFILE;
typedef
struct _DOT11EXT_IHV_SECURITY_PROFILE
{
    [string]
    LPWSTR pszXmlFragmentIhvSecurity;
    BOOL bUseMSOnex;
}
DOT11EXT_IHV_SECURITY_PROFILE, *PDOT11EXT_IHV_SECURITY_PROFILE;
typedef
struct _DOT11EXT_IHV_DISCOVERY_PROFILE
{
    DOT11EXT_IHV_CONNECTIVITY_PROFILE IhvConnectivityProfile;
    DOT11EXT_IHV_SECURITY_PROFILE IhvSecurityProfile;
}
DOT11EXT_IHV_DISCOVERY_PROFILE, *PDOT11EXT_IHV_DISCOVERY_PROFILE;
typedef
struct _DOT11EXT_IHV_DISCOVERY_PROFILE_LIST
{
    DWORD dwCount;
    [size_is(dwCount)]
    PDOT11EXT_IHV_DISCOVERY_PROFILE pIhvDiscoveryProfiles;
}
DOT11EXT_IHV_DISCOVERY_PROFILE_LIST, *PDOT11EXT_IHV_DISCOVERY_PROFILE_LIST;
typedef enum
_DOT11EXT_IHV_INDICATION_TYPE
{
    IndicationTypeNicSpecificNotification,
    IndicationTypePmkidCandidateList,
    IndicationTypeTkipMicFailure,
    IndicationTypePhyStateChange,
    IndicationTypeLinkQuality
}
DOT11EXT_IHV_INDICATION_TYPE, *PDOT11EXT_IHV_INDICATION_TYPE;
typedef
struct _DOT11EXT_VIRTUAL_STATION_AP_PROPERTY
{
    DOT11_SSID dot11SSID;
    DOT11_AUTH_ALGORITHM dot11AuthAlgo;
    DOT11_CIPHER_ALGORITHM dot11CipherAlgo;
    BOOL bIsPassPhrase;
    DWORD dwKeyLength;
    UCHAR ucKeyData[DOT11EXT_PSK_MAX_LENGTH];
}
DOT11EXT_VIRTUAL_STATION_AP_PROPERTY, *PDOT11EXT_VIRTUAL_STATION_AP_PROPERTY;
typedef
struct _WDIAG_IHV_WLAN_ID
{
    WCHAR strProfileName [MS_MAX_PROFILE_NAME_LENGTH];
    DOT11_SSID Ssid;
    DOT11_BSS_TYPE BssType;
    DWORD dwFlags;
    DWORD dwReasonCode;
}
WDIAG_IHV_WLAN_ID, *PWDIAG_IHV_WLAN_ID;
typedef
DWORD
(WINAPI *DOT11EXT_ALLOCATE_BUFFER)
(
                                    DWORD dwByteCount,
    _Outptr_result_bytebuffer_(dwByteCount) LPVOID* ppvBuffer
);
typedef
VOID
(WINAPI *DOT11EXT_FREE_BUFFER)
(
    _In_opt_ LPVOID pvMemory
);
typedef
DWORD
(WINAPI *DOT11EXT_SET_PROFILE_CUSTOM_USER_DATA)
(
    _In_opt_ HANDLE hDot11SvcHandle,
    _In_opt_ HANDLE hConnectSession,
                            DWORD dwSessionID,
                            DWORD dwDataSize,
    _In_reads_bytes_(dwDataSize) LPVOID pvData
);
typedef
DWORD
(WINAPI *DOT11EXT_GET_PROFILE_CUSTOM_USER_DATA)
(
    _In_opt_ HANDLE hDot11SvcHandle,
    _In_opt_ HANDLE hConnectSession,
                                        DWORD dwSessionID,
    _Out_ DWORD* pdwDataSize,
    _Outptr_result_bytebuffer_(*pdwDataSize) LPVOID* ppvData
);
typedef
DWORD
(WINAPI *DOT11EXT_SET_CURRENT_PROFILE)
(
    _In_opt_ HANDLE hDot11SvcHandle,
    _In_opt_ HANDLE hConnectSession,
    _In_opt_ PDOT11EXT_IHV_CONNECTIVITY_PROFILE pIhvConnProfile,
    _In_opt_ PDOT11EXT_IHV_SECURITY_PROFILE pIhvSecProfile
);
typedef
DWORD
(WINAPI *DOT11EXT_SEND_UI_REQUEST)
(
    _In_opt_ HANDLE hDot11SvcHandle,
    _In_ PDOT11EXT_IHV_UI_REQUEST pIhvUIRequest
);
typedef
DWORD
(WINAPI *DOT11EXT_PRE_ASSOCIATE_COMPLETION)
(
    _In_opt_ HANDLE hDot11SvcHandle,
    _In_opt_ HANDLE hConnectSession,
                DWORD dwReasonCode,
                DWORD dwWin32Error
);
typedef
DWORD
(WINAPI *DOT11EXT_POST_ASSOCIATE_COMPLETION)
(
    _In_opt_ HANDLE hDot11SvcHandle,
    _In_opt_ HANDLE hSecuritySessionID,
    _In_opt_ PDOT11_MAC_ADDRESS pPeer,
                DWORD dwReasonCode,
                DWORD dwWin32Error
);
typedef
DWORD
(WINAPI *DOT11EXT_SEND_NOTIFICATION)
(
    _In_opt_ HANDLE hDot11SvcHandle,
    _In_ PL2_NOTIFICATION_DATA pNotificationData
);
typedef
DWORD
(WINAPI *DOT11EXT_SEND_PACKET)
(
    _In_opt_ HANDLE hDot11SvcHandle,
                            ULONG uPacketLen,
    _In_reads_bytes_(uPacketLen) LPVOID pvPacket,
    _In_opt_ HANDLE hSendCompletion
);
typedef
DWORD
(WINAPI *DOT11EXT_SET_ETHERTYPE_HANDLING)
(
    _In_opt_ HANDLE hDot11SvcHandle,
                                        ULONG uMaxBackLog,
                                        ULONG uNumOfExemption,
    _In_reads_opt_(uNumOfExemption) PDOT11_PRIVACY_EXEMPTION pExemption,
                                        ULONG uNumOfRegistration,
    _In_reads_opt_(uNumOfRegistration) USHORT* pusRegistration
);
typedef
DWORD
(WINAPI *DOT11EXT_SET_AUTH_ALGORITHM)
(
    _In_opt_ HANDLE hDot11SvcHandle,
                DWORD dwAuthAlgo
);
typedef
DWORD
(WINAPI *DOT11EXT_SET_UNICAST_CIPHER_ALGORITHM)
(
    _In_opt_ HANDLE hDot11SvcHandle,
                DWORD dwUnicastCipherAlgo
);
typedef
DWORD
(WINAPI *DOT11EXT_SET_MULTICAST_CIPHER_ALGORITHM)
(
    _In_opt_ HANDLE hDot11SvcHandle,
                DWORD dwMulticastCipherAlgo
);
typedef
DWORD
(WINAPI *DOT11EXT_SET_DEFAULT_KEY)
(
    _In_opt_ HANDLE hDot11SvcHandle,
    _In_ PDOT11_CIPHER_DEFAULT_KEY_VALUE pKey,
                DOT11_DIRECTION dot11Direction
);
typedef
DWORD
(WINAPI *DOT11EXT_SET_KEY_MAPPING_KEY)
(
    _In_opt_ HANDLE hDot11SvcHandle,
    _In_ PDOT11_CIPHER_KEY_MAPPING_KEY_VALUE pKey
);
typedef
DWORD
(WINAPI *DOT11EXT_SET_DEFAULT_KEY_ID)
(
    _In_opt_ HANDLE hDot11SvcHandle,
                ULONG uDefaultKeyId
);
typedef
DWORD
(WINAPI *DOT11EXT_SET_EXCLUDE_UNENCRYPTED)
(
    _In_opt_ HANDLE hDot11SvcHandle,
                BOOL bExcludeUnencrypted
);
typedef
DWORD
(WINAPI *DOT11EXT_NIC_SPECIFIC_EXTENSION)
(
    _In_opt_ HANDLE hDot11SvcHandle,
                                                                DWORD dwInBufferSize,
    _In_reads_bytes_(dwInBufferSize) LPVOID pvInBuffer,
    _Inout_ DWORD* pdwOutBufferSize,
    _Out_writes_bytes_to_opt_(*pdwOutBufferSize, *pdwOutBufferSize) LPVOID pvOutBuffer
);
typedef
DWORD
(WINAPI *DOT11EXT_ONEX_START)
(
    _In_opt_ HANDLE hDot11SvcHandle,
    _In_opt_ EAP_ATTRIBUTES* pEapAttributes
);
typedef
DWORD
(WINAPI *DOT11EXT_ONEX_STOP)
(
    _In_opt_ HANDLE hDot11SvcHandle
);
typedef
DWORD
(WINAPI *DOT11EXT_PROCESS_ONEX_PACKET)
(
    _In_opt_ HANDLE hDot11SvcHandle,
                                DWORD dwInPacketSize,
    _In_reads_bytes_(dwInPacketSize) LPVOID pvInPacket
);
typedef
DWORD
(WINAPI *DOT11EXT_REQUEST_VIRTUAL_STATION)
(
    _In_opt_ HANDLE hDot11PrimaryHandle,
    _Reserved_ LPVOID pvReserved
);
typedef
DWORD
(WINAPI *DOT11EXT_RELEASE_VIRTUAL_STATION)
(
    _In_opt_ HANDLE hDot11PrimaryHandle,
    _Reserved_ LPVOID pvReserved
);
typedef
DWORD
(WINAPI *DOT11EXT_QUERY_VIRTUAL_STATION_PROPERTIES)
(
    _In_opt_ HANDLE hDot11SvcHandle,
    _Out_ BOOL* pbIsVirtualStation,
    _Out_ GUID* pgPrimary,
    _Reserved_ LPVOID pvReserved
);
typedef
DWORD
(WINAPI *DOT11EXT_SET_VIRTUAL_STATION_AP_PROPERTIES)
(
    _In_opt_ HANDLE hDot11SvcHandle,
    _In_opt_ HANDLE hConnectSession,
                                    DWORD dwNumProperties,
    _In_reads_(dwNumProperties) PDOT11EXT_VIRTUAL_STATION_AP_PROPERTY pProperties,
    _Reserved_ LPVOID pvReserved
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_GET_VERSION_INFO)
(
    _Out_ PDOT11_IHV_VERSION_INFO pDot11IHVVersionInfo
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_INIT_SERVICE)
(
                DWORD dwVerNumUsed,
    _In_ PDOT11EXT_APIS pDot11ExtAPI,
    _Reserved_ LPVOID pvReserved,
    _Out_ PDOT11EXT_IHV_HANDLERS pDot11IHVHandlers
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_INIT_VIRTUAL_STATION)
(
    _In_ PDOT11EXT_VIRTUAL_STATION_APIS pDot11ExtVSAPI,
    _Reserved_ LPVOID pvReserved
);
typedef
VOID
(WINAPI *DOT11EXTIHV_DEINIT_SERVICE)
(
    VOID
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_INIT_ADAPTER)
(
    _In_ PDOT11_ADAPTER pDot11Adapter,
    _In_opt_ HANDLE hDot11SvcHandle,
    _Out_ PHANDLE phIhvExtAdapter
);
typedef
VOID
(WINAPI *DOT11EXTIHV_DEINIT_ADAPTER)
(
    _In_opt_ HANDLE hIhvExtAdapter
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_PERFORM_PRE_ASSOCIATE)
(
    _In_opt_ HANDLE hIhvExtAdapter,
    _In_opt_ HANDLE hConnectSession,
    _In_opt_ PDOT11EXT_IHV_PROFILE_PARAMS pIhvProfileParams,
    _In_ PDOT11EXT_IHV_CONNECTIVITY_PROFILE pIhvConnProfile,
    _In_ PDOT11EXT_IHV_SECURITY_PROFILE pIhvSecProfile,
    _In_ PDOT11_BSS_LIST pConnectableBssid,
    _Out_ PDWORD pdwReasonCode
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_ADAPTER_RESET)
(
    _In_opt_ HANDLE hIhvExtAdapter
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_PERFORM_POST_ASSOCIATE)
(
    _In_opt_ HANDLE hIhvExtAdapter,
    _In_opt_ HANDLE hSecuritySessionID,
    _In_ PDOT11_PORT_STATE pPortState,
                                        ULONG uDot11AssocParamsBytes,
    _In_reads_bytes_(uDot11AssocParamsBytes) PDOT11_ASSOCIATION_COMPLETION_PARAMETERS pDot11AssocParams
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_STOP_POST_ASSOCIATE)
(
    _In_opt_ HANDLE hIhvExtAdapter,
    _In_ PDOT11_MAC_ADDRESS pPeer,
                DOT11_ASSOC_STATUS dot11AssocStatus
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_VALIDATE_PROFILE)
(
    _In_opt_ HANDLE hIhvExtAdapter,
    _In_opt_ PDOT11EXT_IHV_PROFILE_PARAMS pIhvProfileParams,
    _In_ PDOT11EXT_IHV_CONNECTIVITY_PROFILE pIhvConnProfile,
    _In_ PDOT11EXT_IHV_SECURITY_PROFILE pIhvSecProfile,
    _Out_ PDWORD pdwReasonCode
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_PERFORM_CAPABILITY_MATCH)
(
    _In_opt_ HANDLE hIhvExtAdapter,
    _In_opt_ PDOT11EXT_IHV_PROFILE_PARAMS pIhvProfileParams,
    _In_ PDOT11EXT_IHV_CONNECTIVITY_PROFILE pIhvConnProfile,
    _In_ PDOT11EXT_IHV_SECURITY_PROFILE pIhvSecProfile,
    _In_opt_ PDOT11_BSS_LIST pConnectableBssid,
    _Out_ PDWORD pdwReasonCode
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_CREATE_DISCOVERY_PROFILES)
(
    _In_opt_ HANDLE hIhvExtAdapter,
                BOOL bInsecure,
    _In_opt_ PDOT11EXT_IHV_PROFILE_PARAMS pIhvProfileParams,
    _In_opt_ PDOT11_BSS_LIST pConnectableBssid,
    _Out_ PDOT11EXT_IHV_DISCOVERY_PROFILE_LIST pIhvDiscoveryProfileList,
    _Out_ PDWORD pdwReasonCode
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_PROCESS_SESSION_CHANGE)
(
            ULONG uEventType,
    _In_ PWTSSESSION_NOTIFICATION pSessionNotification
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_RECEIVE_INDICATION)
(
    _In_opt_ HANDLE hIhvExtAdapter,
                                    DOT11EXT_IHV_INDICATION_TYPE indicationType,
                                    ULONG uBufferLength,
    _In_reads_bytes_opt_(uBufferLength) LPVOID pvBuffer
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_RECEIVE_PACKET)
(
    _In_opt_ HANDLE hIhvExtAdapter,
                                DWORD dwInBufferSize,
    _In_reads_bytes_(dwInBufferSize) LPVOID pvInBuffer
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_SEND_PACKET_COMPLETION)
(
    _In_opt_ HANDLE hSendCompletion
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_IS_UI_REQUEST_PENDING)
(
            GUID guidUIRequest,
    _Out_ PBOOL pbIsRequestPending
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_PROCESS_UI_RESPONSE)
(
                                    GUID guidUIRequest,
                                    DWORD dwByteCount,
    _In_reads_bytes_opt_(dwByteCount) LPVOID pvResponseBuffer
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_QUERY_UI_REQUEST)
(
    _In_opt_ HANDLE hIhvExtAdapter,
                    DOT11EXT_IHV_CONNECTION_PHASE connectionPhase,
    _Outptr_ PDOT11EXT_IHV_UI_REQUEST* ppIhvUIRequest
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_ONEX_INDICATE_RESULT)
(
    _In_opt_ HANDLE hIhvExtAdapter,
                DOT11_MSONEX_RESULT msOneXResult,
    _In_opt_ PDOT11_MSONEX_RESULT_PARAMS pDot11MsOneXResultParams
);
typedef
DWORD
(WINAPI *DOT11EXTIHV_CONTROL)
(
    _In_opt_ HANDLE hIhvExtAdapter,
                                                                DWORD dwInBufferSize,
    _In_reads_bytes_opt_(dwInBufferSize) PBYTE pInBuffer,
                                                                DWORD dwOutBufferSize,
    _Out_writes_bytes_to_opt_(dwOutBufferSize,*pdwBytesReturned) PBYTE pOutBuffer,
    _Out_ PDWORD pdwBytesReturned
);
struct _DOT11EXT_APIS
{
   DOT11EXT_ALLOCATE_BUFFER Dot11ExtAllocateBuffer;
   DOT11EXT_FREE_BUFFER Dot11ExtFreeBuffer;
   DOT11EXT_SET_PROFILE_CUSTOM_USER_DATA Dot11ExtSetProfileCustomUserData;
   DOT11EXT_GET_PROFILE_CUSTOM_USER_DATA Dot11ExtGetProfileCustomUserData;
   DOT11EXT_SET_CURRENT_PROFILE Dot11ExtSetCurrentProfile;
   DOT11EXT_SEND_UI_REQUEST Dot11ExtSendUIRequest;
   DOT11EXT_PRE_ASSOCIATE_COMPLETION Dot11ExtPreAssociateCompletion;
   DOT11EXT_POST_ASSOCIATE_COMPLETION Dot11ExtPostAssociateCompletion;
   DOT11EXT_SEND_NOTIFICATION Dot11ExtSendNotification;
   DOT11EXT_SEND_PACKET Dot11ExtSendPacket;
   DOT11EXT_SET_ETHERTYPE_HANDLING Dot11ExtSetEtherTypeHandling;
   DOT11EXT_SET_AUTH_ALGORITHM Dot11ExtSetAuthAlgorithm;
   DOT11EXT_SET_UNICAST_CIPHER_ALGORITHM Dot11ExtSetUnicastCipherAlgorithm;
   DOT11EXT_SET_MULTICAST_CIPHER_ALGORITHM Dot11ExtSetMulticastCipherAlgorithm;
   DOT11EXT_SET_DEFAULT_KEY Dot11ExtSetDefaultKey;
   DOT11EXT_SET_KEY_MAPPING_KEY Dot11ExtSetKeyMappingKey;
   DOT11EXT_SET_DEFAULT_KEY_ID Dot11ExtSetDefaultKeyId;
   DOT11EXT_NIC_SPECIFIC_EXTENSION Dot11ExtNicSpecificExtension;
   DOT11EXT_SET_EXCLUDE_UNENCRYPTED Dot11ExtSetExcludeUnencrypted;
   DOT11EXT_ONEX_START Dot11ExtStartOneX;
   DOT11EXT_ONEX_STOP Dot11ExtStopOneX;
   DOT11EXT_PROCESS_ONEX_PACKET Dot11ExtProcessSecurityPacket;
};
struct _DOT11EXT_IHV_HANDLERS
{
   DOT11EXTIHV_DEINIT_SERVICE Dot11ExtIhvDeinitService;
   DOT11EXTIHV_INIT_ADAPTER Dot11ExtIhvInitAdapter;
   DOT11EXTIHV_DEINIT_ADAPTER Dot11ExtIhvDeinitAdapter;
   DOT11EXTIHV_PERFORM_PRE_ASSOCIATE Dot11ExtIhvPerformPreAssociate;
   DOT11EXTIHV_ADAPTER_RESET Dot11ExtIhvAdapterReset;
   DOT11EXTIHV_PERFORM_POST_ASSOCIATE Dot11ExtIhvPerformPostAssociate;
   DOT11EXTIHV_STOP_POST_ASSOCIATE Dot11ExtIhvStopPostAssociate;
   DOT11EXTIHV_VALIDATE_PROFILE Dot11ExtIhvValidateProfile;
   DOT11EXTIHV_PERFORM_CAPABILITY_MATCH Dot11ExtIhvPerformCapabilityMatch;
   DOT11EXTIHV_CREATE_DISCOVERY_PROFILES Dot11ExtIhvCreateDiscoveryProfiles;
   DOT11EXTIHV_PROCESS_SESSION_CHANGE Dot11ExtIhvProcessSessionChange;
   DOT11EXTIHV_RECEIVE_INDICATION Dot11ExtIhvReceiveIndication;
   DOT11EXTIHV_RECEIVE_PACKET Dot11ExtIhvReceivePacket;
   DOT11EXTIHV_SEND_PACKET_COMPLETION Dot11ExtIhvSendPacketCompletion;
   DOT11EXTIHV_IS_UI_REQUEST_PENDING Dot11ExtIhvIsUIRequestPending;
   DOT11EXTIHV_PROCESS_UI_RESPONSE Dot11ExtIhvProcessUIResponse;
   DOT11EXTIHV_QUERY_UI_REQUEST Dot11ExtIhvQueryUIRequest;
   DOT11EXTIHV_ONEX_INDICATE_RESULT Dot11ExtIhvOnexIndicateResult;
   DOT11EXTIHV_CONTROL Dot11ExtIhvControl;
};
struct _DOT11EXT_VIRTUAL_STATION_APIS
{
    DOT11EXT_REQUEST_VIRTUAL_STATION Dot11ExtRequestVirtualStation;
    DOT11EXT_RELEASE_VIRTUAL_STATION Dot11ExtReleaseVirtualStation;
    DOT11EXT_QUERY_VIRTUAL_STATION_PROPERTIES Dot11ExtQueryVirtualStationProperties;
    DOT11EXT_SET_VIRTUAL_STATION_AP_PROPERTIES Dot11ExtSetVirtualStationAPProperties;
};
#endif
#pragma endregion
