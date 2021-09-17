#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum _RADIUS_ATTRIBUTE_TYPE {
    ratMinimum = 0,
    ratUserName = 1,
    ratUserPassword = 2,
    ratCHAPPassword = 3,
    ratNASIPAddress = 4,
    ratNASPort = 5,
    ratServiceType = 6,
    ratFramedProtocol = 7,
    ratFramedIPAddress = 8,
    ratFramedIPNetmask = 9,
    ratFramedRouting = 10,
    ratFilterId = 11,
    ratFramedMTU = 12,
    ratFramedCompression = 13,
    ratLoginIPHost = 14,
    ratLoginService = 15,
    ratLoginPort = 16,
    ratReplyMessage = 18,
    ratCallbackNumber = 19,
    ratCallbackId = 20,
    ratFramedRoute = 22,
    ratFramedIPXNetwork = 23,
    ratState = 24,
    ratClass = 25,
    ratVendorSpecific = 26,
    ratSessionTimeout = 27,
    ratIdleTimeout = 28,
    ratTerminationAction = 29,
    ratCalledStationId = 30,
    ratCallingStationId = 31,
    ratNASIdentifier = 32,
    ratProxyState = 33,
    ratLoginLATService = 34,
    ratLoginLATNode = 35,
    ratLoginLATGroup = 36,
    ratFramedAppleTalkLink = 37,
    ratFramedAppleTalkNetwork = 38,
    ratFramedAppleTalkZone = 39,
    ratAcctStatusType = 40,
    ratAcctDelayTime = 41,
    ratAcctInputOctets = 42,
    ratAcctOutputOctets = 43,
    ratAcctSessionId = 44,
    ratAcctAuthentic = 45,
    ratAcctSessionTime = 46,
    ratAcctInputPackets = 47,
    ratAcctOutputPackets = 48,
    ratAcctTerminationCause = 49,
    ratCHAPChallenge = 60,
    ratNASPortType = 61,
    ratPortLimit = 62,
    ratTunnelType = 64,
    ratMediumType = 65,
    ratTunnelPassword = 69,
    ratTunnelPrivateGroupID = 81,
    ratNASIPv6Address = 95,
    ratFramedInterfaceId,
    ratFramedIPv6Prefix,
    ratLoginIPv6Host,
    ratFramedIPv6Route,
    ratFramedIPv6Pool,
    ratCode = 262,
    ratIdentifier = 263,
    ratAuthenticator = 264,
    ratSrcIPAddress = 265,
    ratSrcPort = 266,
    ratProvider = 267,
    ratStrippedUserName = 268,
    ratFQUserName = 269,
    ratPolicyName = 270,
    ratUniqueId = 271,
    ratExtensionState = 272,
    ratEAPTLV = 273,
    ratRejectReasonCode = 274,
    ratCRPPolicyName = 275,
    ratProviderName = 276,
    ratClearTextPassword = 277,
    ratSrcIPv6Address = 278,
    ratCertificateThumbprint = 279,
} RADIUS_ATTRIBUTE_TYPE;
typedef enum _RADIUS_CODE {
    rcUnknown = 0,
    rcAccessRequest = 1,
    rcAccessAccept = 2,
    rcAccessReject = 3,
    rcAccountingRequest = 4,
    rcAccountingResponse = 5,
    rcAccessChallenge = 11,
    rcDiscard = 256
} RADIUS_CODE;
typedef enum _RADIUS_AUTHENTICATION_PROVIDER {
    rapUnknown,
    rapUsersFile,
    rapProxy,
    rapWindowsNT,
    rapMCIS,
    rapODBC,
    rapNone
} RADIUS_AUTHENTICATION_PROVIDER;
typedef enum _RADIUS_REJECT_REASON_CODE {
    rrrcUndefined = 0,
    rrrcAccountUnknown = 1,
    rrrcAccountDisabled = 2,
    rrrcAccountExpired = 3,
    rrrcAuthenticationFailure = 4,
} RADIUS_REJECT_REASON_CODE;
typedef enum _RADIUS_DATA_TYPE {
   rdtUnknown,
   rdtString,
   rdtAddress,
   rdtInteger,
   rdtTime,
   rdtIpv6Address
} RADIUS_DATA_TYPE;
typedef struct _RADIUS_ATTRIBUTE {
    DWORD dwAttrType;
    RADIUS_DATA_TYPE fDataType;
    DWORD cbDataLength;
    union {
        DWORD dwValue;
        CONST BYTE* lpValue;
    };
} RADIUS_ATTRIBUTE, *PRADIUS_ATTRIBUTE;
typedef struct _RADIUS_VSA_FORMAT {
   BYTE VendorId[4];
   BYTE VendorType;
   BYTE VendorLength;
   BYTE AttributeSpecific[1];
} RADIUS_VSA_FORMAT;
typedef enum _RADIUS_ACTION {
   raContinue,
   raReject,
   raAccept
} RADIUS_ACTION, *PRADIUS_ACTION;
typedef DWORD (WINAPI *PRADIUS_EXTENSION_INIT)( VOID );
typedef VOID (WINAPI *PRADIUS_EXTENSION_TERM)( VOID );
typedef DWORD (WINAPI *PRADIUS_EXTENSION_PROCESS)(
    IN const RADIUS_ATTRIBUTE *pAttrs,
    OUT OPTIONAL PRADIUS_ACTION pfAction
    );
typedef DWORD (WINAPI *PRADIUS_EXTENSION_PROCESS_EX)(
    IN const RADIUS_ATTRIBUTE *pInAttrs,
    OUT PRADIUS_ATTRIBUTE *pOutAttrs,
    OUT OPTIONAL PRADIUS_ACTION pfAction
    );
typedef VOID (WINAPI *PRADIUS_EXTENSION_FREE_ATTRIBUTES)(
    IN PRADIUS_ATTRIBUTE pAttrs
    );
    L"System\\CurrentControlSet\\Services\\AuthSrv\\Parameters"
    L"ExtensionDLLs"
    L"AuthorizationDLLs"
    L"EnforceNetworkPolicyForPAPBasedChallengeResponse"
typedef enum _RADIUS_EXTENSION_POINT {
   repAuthentication,
   repAuthorization
} RADIUS_EXTENSION_POINT;
typedef struct _RADIUS_ATTRIBUTE_ARRAY {
   DWORD cbSize;
   DWORD (WINAPI *Add)(
       IN struct _RADIUS_ATTRIBUTE_ARRAY *This,
       IN const RADIUS_ATTRIBUTE *pAttr
       );
   const RADIUS_ATTRIBUTE * (WINAPI *AttributeAt)(
       IN const struct _RADIUS_ATTRIBUTE_ARRAY *This,
       IN DWORD dwIndex
       );
   DWORD (WINAPI *GetSize)(
                     IN const struct _RADIUS_ATTRIBUTE_ARRAY *This
                     );
   DWORD (WINAPI *InsertAt)(
       IN struct _RADIUS_ATTRIBUTE_ARRAY *This,
       IN DWORD dwIndex,
       IN const RADIUS_ATTRIBUTE *pAttr
       );
   DWORD (WINAPI *RemoveAt)(
       IN struct _RADIUS_ATTRIBUTE_ARRAY *This,
       IN DWORD dwIndex
       );
   DWORD (WINAPI *SetAt)(
       IN struct _RADIUS_ATTRIBUTE_ARRAY *This,
       IN DWORD dwIndex,
       IN const RADIUS_ATTRIBUTE *pAttr
       );
} RADIUS_ATTRIBUTE_ARRAY, *PRADIUS_ATTRIBUTE_ARRAY;
typedef struct _RADIUS_EXTENSION_CONTROL_BLOCK {
   DWORD cbSize;
   DWORD dwVersion;
   RADIUS_EXTENSION_POINT repPoint;
   RADIUS_CODE rcRequestType;
   RADIUS_CODE rcResponseType;
   PRADIUS_ATTRIBUTE_ARRAY (WINAPI *GetRequest)(
       IN struct _RADIUS_EXTENSION_CONTROL_BLOCK *This
       );
   PRADIUS_ATTRIBUTE_ARRAY (WINAPI *GetResponse)(
       IN struct _RADIUS_EXTENSION_CONTROL_BLOCK *This,
       IN RADIUS_CODE rcResponseType
       );
   DWORD (WINAPI *SetResponseType)(
       IN struct _RADIUS_EXTENSION_CONTROL_BLOCK *This,
       IN RADIUS_CODE rcResponseType
       );
} RADIUS_EXTENSION_CONTROL_BLOCK, *PRADIUS_EXTENSION_CONTROL_BLOCK;
typedef DWORD (WINAPI *PRADIUS_EXTENSION_PROCESS_2)(
   IN OUT PRADIUS_EXTENSION_CONTROL_BLOCK pECB
   );
#endif
#pragma endregion
