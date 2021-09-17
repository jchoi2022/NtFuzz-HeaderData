#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
    TEXT("System\\CurrentControlSet\\Services\\Rasman\\PPP\\EAP")
typedef enum _RAS_AUTH_ATTRIBUTE_TYPE_
{
    raatMinimum = 0,
    raatUserName,
    raatUserPassword,
    raatMD5CHAPPassword,
    raatNASIPAddress,
    raatNASPort,
    raatServiceType,
    raatFramedProtocol,
    raatFramedIPAddress,
    raatFramedIPNetmask,
    raatFramedRouting = 10,
    raatFilterId,
    raatFramedMTU,
    raatFramedCompression,
    raatLoginIPHost,
    raatLoginService,
    raatLoginTCPPort,
    raatUnassigned17,
    raatReplyMessage,
    raatCallbackNumber,
    raatCallbackId =20,
    raatUnassigned21,
    raatFramedRoute,
    raatFramedIPXNetwork,
    raatState,
    raatClass,
    raatVendorSpecific,
    raatSessionTimeout,
    raatIdleTimeout,
    raatTerminationAction,
    raatCalledStationId = 30,
    raatCallingStationId,
    raatNASIdentifier,
    raatProxyState,
    raatLoginLATService,
    raatLoginLATNode,
    raatLoginLATGroup,
    raatFramedAppleTalkLink,
    raatFramedAppleTalkNetwork,
    raatFramedAppleTalkZone,
    raatAcctStatusType = 40,
    raatAcctDelayTime,
    raatAcctInputOctets,
    raatAcctOutputOctets,
    raatAcctSessionId,
    raatAcctAuthentic,
    raatAcctSessionTime,
    raatAcctInputPackets,
    raatAcctOutputPackets,
    raatAcctTerminateCause,
    raatAcctMultiSessionId = 50,
    raatAcctLinkCount,
    raatAcctEventTimeStamp = 55,
    raatMD5CHAPChallenge = 60,
    raatNASPortType,
    raatPortLimit,
    raatLoginLATPort,
    raatTunnelType,
    raatTunnelMediumType,
    raatTunnelClientEndpoint,
    raatTunnelServerEndpoint,
    raatARAPPassword = 70,
    raatARAPFeatures,
    raatARAPZoneAccess,
    raatARAPSecurity,
    raatARAPSecurityData,
    raatPasswordRetry,
    raatPrompt,
    raatConnectInfo,
    raatConfigurationToken,
    raatEAPMessage,
    raatSignature = 80,
    raatARAPChallengeResponse = 84,
    raatAcctInterimInterval = 85,
    raatNASIPv6Address = 95,
    raatFramedInterfaceId,
    raatFramedIPv6Prefix,
    raatLoginIPv6Host,
    raatFramedIPv6Route,
    raatFramedIPv6Pool,
    raatARAPGuestLogon = 8096,
    raatCertificateOID,
    raatEAPConfiguration,
    raatPEAPEmbeddedEAPTypeId = 8099,
    raatInnerEAPTypeId = 8099,
    raatPEAPFastRoamedSession = 8100,
    raatFastRoamedSession = 8100,
    raatEAPTLV = 8102,
    raatCredentialsChanged,
    raatCertificateThumbprint = 8250,
    raatPeerId = 9000,
    raatServerId,
    raatMethodId,
    raatEMSK,
    raatSessionId,
    raatReserved = 0xFFFFFFFF
}RAS_AUTH_ATTRIBUTE_TYPE;
typedef ULONG_PTR NCRYPT_KEY_HANDLE;
typedef struct _NgcTicketContext
{
    WCHAR wszTicket[NGC_TICKET_PROPERTY_STRING_LENGTH];
    NCRYPT_KEY_HANDLE hKey;
    HANDLE hImpersonateToken;
} NgcTicketContext;
typedef struct _RAS_AUTH_ATTRIBUTE
{
    RAS_AUTH_ATTRIBUTE_TYPE raaType;
    DWORD dwLength;
    _Field_size_(dwLength) PVOID Value;
}RAS_AUTH_ATTRIBUTE, *PRAS_AUTH_ATTRIBUTE;
typedef struct _PPP_EAP_PACKET
{
    BYTE Code;
    BYTE Id;
    BYTE Length[2];
    BYTE Data[1];
}PPP_EAP_PACKET, *PPPP_EAP_PACKET;
typedef struct _PPP_EAP_INPUT
{
    DWORD dwSizeInBytes;
    DWORD fFlags;
    BOOL fAuthenticator;
    WCHAR * pwszIdentity;
    WCHAR * pwszPassword;
    BYTE bInitialId;
    RAS_AUTH_ATTRIBUTE * pUserAttributes;
    BOOL fAuthenticationComplete;
    DWORD dwAuthResultCode;
    OPTIONAL HANDLE hTokenImpersonateUser;
    BOOL fSuccessPacketReceived;
    BOOL fDataReceivedFromInteractiveUI;
    OPTIONAL PBYTE pDataFromInteractiveUI;
    DWORD dwSizeOfDataFromInteractiveUI;
    OPTIONAL PBYTE pConnectionData;
    DWORD dwSizeOfConnectionData;
    _Field_size_bytes_(dwSizeOfUserData) OPTIONAL PBYTE pUserData;
    DWORD dwSizeOfUserData;
    HANDLE hReserved;
    GUID guidConnectionId;
    BOOL isVpn;
}PPP_EAP_INPUT, *PPPP_EAP_INPUT;
typedef enum _PPP_EAP_ACTION
{
    EAPACTION_NoAction,
    EAPACTION_Authenticate,
    EAPACTION_Done,
    EAPACTION_SendAndDone,
    EAPACTION_Send,
    EAPACTION_SendWithTimeout,
    EAPACTION_SendWithTimeoutInteractive,
    EAPACTION_IndicateTLV,
    EAPACTION_IndicateIdentity
}PPP_EAP_ACTION;
typedef struct _PPP_EAP_OUTPUT
{
    DWORD dwSizeInBytes;
    PPP_EAP_ACTION Action;
    DWORD dwAuthResultCode;
    OPTIONAL RAS_AUTH_ATTRIBUTE * pUserAttributes;
    BOOL fInvokeInteractiveUI;
    OPTIONAL PBYTE pUIContextData;
    DWORD dwSizeOfUIContextData;
    BOOL fSaveConnectionData;
    OPTIONAL PBYTE pConnectionData;
    DWORD dwSizeOfConnectionData;
    BOOL fSaveUserData;
    OPTIONAL PBYTE pUserData;
    DWORD dwSizeOfUserData;
    NgcTicketContext* pNgcKerbTicket;
    BOOL fSaveToCredMan;
}PPP_EAP_OUTPUT, *PPPP_EAP_OUTPUT;
typedef struct _PPP_EAP_INFO
{
    DWORD dwSizeInBytes;
    DWORD dwEapTypeId;
    DWORD (APIENTRY *RasEapInitialize)( IN BOOL fInitialize );
    DWORD (APIENTRY *RasEapBegin)( OUT VOID ** ppWorkBuffer,
                                     IN PPP_EAP_INPUT * pPppEapInput );
    DWORD (APIENTRY *RasEapEnd)( IN VOID * pWorkBuffer );
    DWORD (APIENTRY *RasEapMakeMessage)(
                            IN VOID* pWorkBuf,
                            IN PPP_EAP_PACKET* pReceivePacket,
                            OUT PPP_EAP_PACKET* pSendPacket,
                            IN DWORD cbSendPacket,
                            OUT PPP_EAP_OUTPUT* pEapOutput,
                            IN PPP_EAP_INPUT* pEapInput );
}PPP_EAP_INFO, *PPPP_EAP_INFO;
typedef struct _LEGACY_IDENTITY_UI_PARAMS {
    DWORD eapType;
    DWORD dwFlags;
    DWORD dwSizeofConnectionData;
    BYTE* pConnectionData;
    DWORD dwSizeofUserData;
    BYTE* pUserData;
    DWORD dwSizeofUserDataOut;
    BYTE* pUserDataOut;
    LPWSTR pwszIdentity;
    DWORD dwError;
} LEGACY_IDENTITY_UI_PARAMS;
typedef struct _LEGACY_INTERACTIVE_UI_PARAMS {
    DWORD eapType;
    DWORD dwSizeofContextData;
    BYTE* pContextData;
    DWORD dwSizeofInteractiveUIData;
    BYTE* pInteractiveUIData;
    DWORD dwError;
} LEGACY_INTERACTIVE_UI_PARAMS;
DWORD APIENTRY
RasEapGetInfo(
    IN DWORD dwEapTypeId,
    OUT PPP_EAP_INFO* pEapInfo
);
DWORD APIENTRY
RasEapFreeMemory(
    IN BYTE* pMemory
);
DWORD APIENTRY
RasEapInvokeInteractiveUI(
    IN DWORD dwEapTypeId,
    IN HWND hwndParent,
    IN BYTE* pUIContextData,
    IN DWORD dwSizeOfUIContextData,
    OUT BYTE** ppDataFromInteractiveUI,
    OUT DWORD* pdwSizeOfDataFromInteractiveUI
);
DWORD APIENTRY
RasEapInvokeConfigUI(
    IN DWORD dwEapTypeId,
    IN HWND hwndParent,
    IN DWORD dwFlags,
    IN BYTE* pConnectionDataIn,
    IN DWORD dwSizeOfConnectionDataIn,
    OUT BYTE** ppConnectionDataOut,
    OUT DWORD* pdwSizeOfConnectionDataOut
);
DWORD APIENTRY
RasEapGetIdentity(
    IN DWORD dwEapTypeId,
    IN HWND hwndParent,
    IN DWORD dwFlags,
    IN const WCHAR* pwszPhonebook,
    IN const WCHAR* pwszEntry,
    IN BYTE* pConnectionDataIn,
    IN DWORD dwSizeOfConnectionDataIn,
    IN BYTE* pUserDataIn,
    IN DWORD dwSizeOfUserDataIn,
    OUT BYTE** ppUserDataOut,
    OUT DWORD* pdwSizeOfUserDataOut,
    OUT _Outptr_ WCHAR** ppwszIdentityOut
);
}
#endif
#pragma endregion
