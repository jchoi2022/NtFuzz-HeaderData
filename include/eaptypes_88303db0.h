       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <guiddef.h>
typedef DWORD EAP_SESSIONID;
typedef struct _EAP_TYPE
{
   BYTE type;
   DWORD dwVendorId;
   DWORD dwVendorType;
} EAP_TYPE;
typedef struct _EAP_METHOD_TYPE
{
   EAP_TYPE eapType;
   DWORD dwAuthorId;
} EAP_METHOD_TYPE;
typedef struct _EAP_METHOD_INFO
{
   EAP_METHOD_TYPE eaptype;
   LPWSTR pwszAuthorName;
   LPWSTR pwszFriendlyName;
   DWORD eapProperties;
   struct _EAP_METHOD_INFO* pInnerMethodInfo;
} EAP_METHOD_INFO;
struct _EAP_METHOD_INFO_ARRAY_EX;
typedef struct _EAP_METHOD_INFO_EX
{
   EAP_METHOD_TYPE eaptype;
   LPWSTR pwszAuthorName;
   LPWSTR pwszFriendlyName;
   DWORD eapProperties;
   struct _EAP_METHOD_INFO_ARRAY_EX* pInnerMethodInfoArray;
} EAP_METHOD_INFO_EX;
typedef struct _EAP_METHOD_INFO_ARRAY
{
   DWORD dwNumberOfMethods;
   EAP_METHOD_INFO* pEapMethods;
} EAP_METHOD_INFO_ARRAY;
typedef struct _EAP_METHOD_INFO_ARRAY_EX
{
   DWORD dwNumberOfMethods;
   EAP_METHOD_INFO_EX* pEapMethods;
} EAP_METHOD_INFO_ARRAY_EX;
typedef struct _EAP_ERROR
{
   DWORD dwWinError;
   EAP_METHOD_TYPE type;
   DWORD dwReasonCode;
   GUID rootCauseGuid;
   GUID repairGuid;
   GUID helpLinkGuid;
   LPWSTR pRootCauseString;
   LPWSTR pRepairString;
} EAP_ERROR;
EXTERN_C const CLSID GUID_EapHost_Default;
EXTERN_C const CLSID GUID_EapHost_Cause_MethodDLLNotFound;
EXTERN_C const CLSID GUID_EapHost_Cause_EapNegotiationFailed;
EXTERN_C const CLSID GUID_EapHost_Cause_ThirdPartyMethod_Host_Reset;
EXTERN_C const CLSID GUID_EapHost_Cause_XmlMalformed;
EXTERN_C const CLSID GUID_EapHost_Cause_MethodDoesNotSupportOperation;
EXTERN_C const CLSID GUID_EapHost_Cause_EapQecInaccessible;
EXTERN_C const CLSID GUID_EapHost_Cause_Generic_AuthFailure;
EXTERN_C const CLSID GUID_EapHost_Cause_IdentityUnknown;
EXTERN_C const CLSID GUID_EapHost_Cause_SimNotValid;
EXTERN_C const CLSID GUID_EapHost_Cause_CertStoreInaccessible;
EXTERN_C const CLSID GUID_EapHost_Cause_User_CertExpired;
EXTERN_C const CLSID GUID_EapHost_Cause_User_CertInvalid;
EXTERN_C const CLSID GUID_EapHost_Cause_User_CertNotFound;
EXTERN_C const CLSID GUID_EapHost_Cause_User_CertOtherError;
EXTERN_C const CLSID GUID_EapHost_Cause_User_CertRejected;
EXTERN_C const CLSID GUID_EapHost_Cause_User_CertRevoked;
EXTERN_C const CLSID GUID_EapHost_Cause_User_Account_OtherProblem;
EXTERN_C const CLSID GUID_EapHost_Cause_User_CredsRejected;
EXTERN_C const CLSID GUID_EapHost_Cause_Server_CertExpired;
EXTERN_C const CLSID GUID_EapHost_Cause_Server_CertInvalid;
EXTERN_C const CLSID GUID_EapHost_Cause_Server_CertNotFound;
EXTERN_C const CLSID GUID_EapHost_Cause_Server_CertOtherError;
EXTERN_C const CLSID GUID_EapHost_Cause_Server_CertRevoked;
EXTERN_C const CLSID GUID_EapHost_Cause_User_Root_CertExpired;
EXTERN_C const CLSID GUID_EapHost_Cause_User_Root_CertInvalid;
EXTERN_C const CLSID GUID_EapHost_Cause_User_Root_CertNotFound;
EXTERN_C const CLSID GUID_EapHost_Cause_Server_Root_CertNotFound;
EXTERN_C const CLSID GUID_EapHost_Cause_Server_Root_CertNameRequired;
EXTERN_C const CLSID GUID_EapHost_Cause_No_SmartCardReader_Found;
EXTERN_C const CLSID GUID_EapHost_Repair_ContactSysadmin;
EXTERN_C const CLSID GUID_EapHost_Repair_Retry_Authentication;
EXTERN_C const CLSID GUID_EapHost_Repair_User_AuthFailure;
EXTERN_C const CLSID GUID_EapHost_Repair_User_GetNewCert;
EXTERN_C const CLSID GUID_EapHost_Repair_User_SelectValidCert;
EXTERN_C const CLSID GUID_EapHost_Repair_Server_ClientSelectServerCert;
EXTERN_C const CLSID GUID_EapHost_Repair_ContactAdmin_AuthFailure;
EXTERN_C const CLSID GUID_EapHost_Repair_ContactAdmin_IdentityUnknown;
EXTERN_C const CLSID GUID_EapHost_Repair_ContactAdmin_NegotiationFailed;
EXTERN_C const CLSID GUID_EapHost_Repair_ContactAdmin_MethodNotFound;
EXTERN_C const CLSID GUID_EapHost_Repair_RestartNap;
EXTERN_C const CLSID GUID_EapHost_Repair_ContactAdmin_CertStoreInaccessible;
EXTERN_C const CLSID GUID_EapHost_Repair_ContactAdmin_InvalidUserAccount;
EXTERN_C const CLSID GUID_EapHost_Repair_ContactAdmin_InvalidUserCert;
EXTERN_C const CLSID GUID_EapHost_Repair_ContactAdmin_RootCertInvalid;
EXTERN_C const CLSID GUID_EapHost_Repair_ContactAdmin_RootCertNotFound;
EXTERN_C const CLSID GUID_EapHost_Repair_ContactAdmin_RootExpired;
EXTERN_C const CLSID GUID_EapHost_Repair_ContactAdmin_CertNameAbsent;
EXTERN_C const CLSID GUID_EapHost_Repair_ContactAdmin_NoSmartCardReader;
EXTERN_C const CLSID GUID_EapHost_Repair_Method_Not_Support_Sso;
EXTERN_C const CLSID GUID_EapHost_Repair_No_ValidSim_Found;
EXTERN_C const CLSID GUID_EapHost_Help_ObtainingCerts;
EXTERN_C const CLSID GUID_EapHost_Help_Troubleshooting;
EXTERN_C const CLSID GUID_EapHost_Cause_Method_Config_Does_Not_Support_Sso;
typedef
   [v1_enum]
enum _EAP_ATTRIBUTE_TYPE
{
    eatMinimum = 0,
    eatUserName,
    eatUserPassword,
    eatMD5CHAPPassword,
    eatNASIPAddress,
    eatNASPort,
    eatServiceType,
    eatFramedProtocol,
    eatFramedIPAddress,
    eatFramedIPNetmask,
    eatFramedRouting = 10,
    eatFilterId,
    eatFramedMTU,
    eatFramedCompression,
    eatLoginIPHost,
    eatLoginService,
    eatLoginTCPPort,
    eatUnassigned17,
    eatReplyMessage,
    eatCallbackNumber,
    eatCallbackId =20,
    eatUnassigned21,
    eatFramedRoute,
    eatFramedIPXNetwork,
    eatState,
    eatClass,
    eatVendorSpecific,
    eatSessionTimeout,
    eatIdleTimeout,
    eatTerminationAction,
    eatCalledStationId = 30,
    eatCallingStationId,
    eatNASIdentifier,
    eatProxyState,
    eatLoginLATService,
    eatLoginLATNode,
    eatLoginLATGroup,
    eatFramedAppleTalkLink,
    eatFramedAppleTalkNetwork,
    eatFramedAppleTalkZone,
    eatAcctStatusType = 40,
    eatAcctDelayTime,
    eatAcctInputOctets,
    eatAcctOutputOctets,
    eatAcctSessionId,
    eatAcctAuthentic,
    eatAcctSessionTime,
    eatAcctInputPackets,
    eatAcctOutputPackets,
    eatAcctTerminateCause,
    eatAcctMultiSessionId = 50,
    eatAcctLinkCount,
    eatAcctEventTimeStamp = 55,
    eatMD5CHAPChallenge = 60,
    eatNASPortType,
    eatPortLimit,
    eatLoginLATPort,
    eatTunnelType,
    eatTunnelMediumType,
    eatTunnelClientEndpoint,
    eatTunnelServerEndpoint,
    eatARAPPassword = 70,
    eatARAPFeatures,
    eatARAPZoneAccess,
    eatARAPSecurity,
    eatARAPSecurityData,
    eatPasswordRetry,
    eatPrompt,
    eatConnectInfo,
    eatConfigurationToken,
    eatEAPMessage,
    eatSignature = 80,
    eatARAPChallengeResponse = 84,
    eatAcctInterimInterval = 85,
    eatNASIPv6Address = 95,
    eatFramedInterfaceId,
    eatFramedIPv6Prefix,
    eatLoginIPv6Host,
    eatFramedIPv6Route,
    eatFramedIPv6Pool,
    eatARAPGuestLogon = 8096,
    eatCertificateOID,
    eatEAPConfiguration,
    eatPEAPEmbeddedEAPTypeId,
    eatPEAPFastRoamedSession = 8100,
    eatFastRoamedSession = 8100,
    eatEAPTLV = 8102,
    eatCredentialsChanged,
    eatInnerEapMethodType,
    eatClearTextPassword = 8107,
    eatQuarantineSoH = 8150,
    eatCertificateThumbprint = 8250,
    eatPeerId = 9000,
    eatServerId,
    eatMethodId,
    eatEMSK,
    eatSessionId,
    eatReserved = 0xFFFFFFFF
} EAP_ATTRIBUTE_TYPE, EapAttributeType;
typedef struct _EAP_ATTRIBUTE
{
        EAP_ATTRIBUTE_TYPE eaType;
        DWORD dwLength;
        [size_is(dwLength)] BYTE* pValue;
} EAP_ATTRIBUTE, EapAttribute;
typedef struct _EAP_ATTRIBUTES
{
        DWORD dwNumberOfAttributes;
        [size_is(dwNumberOfAttributes)] EAP_ATTRIBUTE* pAttribs;
} EAP_ATTRIBUTES, EapAttributes;
typedef enum _EAP_CONFIG_INPUT_FIELD_TYPE {
    EapConfigInputUsername,
    EapConfigInputPassword,
    EapConfigInputNetworkUsername,
    EapConfigInputNetworkPassword,
    EapConfigInputPin,
    EapConfigInputPSK,
    EapConfigInputEdit,
    EapConfigSmartCardUsername,
    EapConfigSmartCardError
} EAP_CONFIG_INPUT_FIELD_TYPE, *PEAP_CONFIG_INPUT_FIELD_TYPE;
typedef struct _EAP_CONFIG_INPUT_FIELD_DATA {
    DWORD dwSize;
    EAP_CONFIG_INPUT_FIELD_TYPE Type;
    DWORD dwFlagProps;
    LPWSTR pwszLabel;
    LPWSTR pwszData;
    DWORD dwMinDataLength;
    DWORD dwMaxDataLength;
} EAP_CONFIG_INPUT_FIELD_DATA, *PEAP_CONFIG_INPUT_FIELD_DATA;
typedef struct _EAP_CONFIG_INPUT_FIELD_ARRAY {
    DWORD dwVersion;
    DWORD dwNumberOfFields;
    [size_is(dwNumberOfFields)] EAP_CONFIG_INPUT_FIELD_DATA* pFields;
} EAP_CONFIG_INPUT_FIELD_ARRAY, *PEAP_CONFIG_INPUT_FIELD_ARRAY;
typedef enum _EAP_INTERACTIVE_UI_DATA_TYPE {
    EapCredReq,
    EapCredResp,
    EapCredExpiryReq,
    EapCredExpiryResp,
    EapCredLogonReq,
    EapCredLogonResp,
} EAP_INTERACTIVE_UI_DATA_TYPE;
typedef EAP_CONFIG_INPUT_FIELD_ARRAY EAP_CRED_REQ;
typedef EAP_CONFIG_INPUT_FIELD_ARRAY EAP_CRED_RESP;
typedef EAP_CONFIG_INPUT_FIELD_ARRAY EAP_CRED_LOGON_REQ;
typedef EAP_CONFIG_INPUT_FIELD_ARRAY EAP_CRED_LOGON_RESP;
typedef struct _EAP_CRED_EXPIRY_REQ {
    EAP_CONFIG_INPUT_FIELD_ARRAY curCreds;
    EAP_CONFIG_INPUT_FIELD_ARRAY newCreds;
} EAP_CRED_EXPIRY_REQ, EAP_CRED_EXPIRY_RESP;
    typedef [switch_type(EAP_INTERACTIVE_UI_DATA_TYPE)]
    union {
       [case(EapCredReq, EapCredResp)] EAP_CRED_REQ* credData;
       [case(EapCredExpiryReq,EapCredExpiryResp)] EAP_CRED_EXPIRY_REQ* credExpiryData;
       [case(EapCredLogonReq,EapCredLogonResp)] EAP_CRED_LOGON_REQ* credLogonData;
       [default] ;
    } EAP_UI_DATA_FORMAT;
typedef struct _EAP_INTERACTIVE_UI_DATA {
    DWORD dwVersion;
    DWORD dwSize;
    EAP_INTERACTIVE_UI_DATA_TYPE dwDataType;
    DWORD cbUiData;
    [switch_is (dwDataType)] EAP_UI_DATA_FORMAT pbUiData;
} EAP_INTERACTIVE_UI_DATA ;
typedef
    [v1_enum]
enum _EAP_METHOD_PROPERTY_TYPE
{
    emptPropCipherSuiteNegotiation = 0,
    emptPropMutualAuth,
    emptPropIntegrity,
    emptPropReplayProtection,
    emptPropConfidentiality,
    emptPropKeyDerivation,
    emptPropKeyStrength64,
    emptPropKeyStrength128,
    emptPropKeyStrength256,
    emptPropKeyStrength512,
    emptPropKeyStrength1024,
    emptPropDictionaryAttackResistance,
    emptPropFastReconnect,
    emptPropCryptoBinding,
    emptPropSessionIndependence,
    emptPropFragmentation,
    emptPropChannelBinding,
    emptPropNap,
    emptPropStandalone,
    emptPropMppeEncryption,
    emptPropTunnelMethod,
    emptPropSupportsConfig,
    emptPropCertifiedMethod,
    emptPropHiddenMethod,
    emptPropMachineAuth,
    emptPropUserAuth,
    emptPropIdentityPrivacy,
    emptPropMethodChaining,
    emptPropSharedStateEquivalence,
    emptLegacyMethodPropertyFlag = 31,
    emptPropVendorSpecific = 255
} EAP_METHOD_PROPERTY_TYPE;
typedef
    [v1_enum]
enum _EAP_METHOD_PROPERTY_VALUE_TYPE
{
    empvtBool = 0,
    empvtDword,
    empvtString
} EAP_METHOD_PROPERTY_VALUE_TYPE;
typedef struct _EAP_METHOD_PROPERTY_VALUE_BOOL
{
    DWORD length;
    BOOL value;
} EAP_METHOD_PROPERTY_VALUE_BOOL;
typedef struct _EAP_METHOD_PROPERTY_VALUE_DWORD
{
    DWORD length;
    DWORD value;
} EAP_METHOD_PROPERTY_VALUE_DWORD;
typedef struct _EAP_METHOD_PROPERTY_VALUE_STRING
{
    DWORD length;
    [size_is(length)] BYTE* value;
} EAP_METHOD_PROPERTY_VALUE_STRING;
typedef [switch_type(EAP_METHOD_PROPERTY_VALUE_TYPE)]
union {
    [case(empvtBool)]
        EAP_METHOD_PROPERTY_VALUE_BOOL empvBool;
    [case(empvtDword)]
        EAP_METHOD_PROPERTY_VALUE_DWORD empvDword;
    [case(empvtString)]
        EAP_METHOD_PROPERTY_VALUE_STRING empvString;
} EAP_METHOD_PROPERTY_VALUE;
typedef struct _EAP_METHOD_PROPERTY {
    EAP_METHOD_PROPERTY_TYPE eapMethodPropertyType;
    EAP_METHOD_PROPERTY_VALUE_TYPE eapMethodPropertyValueType;
    [switch_is(eapMethodPropertyValueType)] EAP_METHOD_PROPERTY_VALUE eapMethodPropertyValue;
} EAP_METHOD_PROPERTY;
typedef struct _EAP_METHOD_PROPERTY_ARRAY {
    DWORD dwNumberOfProperties;
    [size_is(dwNumberOfProperties)] EAP_METHOD_PROPERTY* pFields;
} EAP_METHOD_PROPERTY_ARRAY;
typedef struct _EAPHOST_IDENTITY_UI_PARAMS {
    EAP_METHOD_TYPE eapMethodType;
    DWORD dwFlags;
    DWORD dwSizeofConnectionData;
    [size_is(dwSizeofConnectionData)] BYTE* pConnectionData;
    DWORD dwSizeofUserData;
    [size_is(dwSizeofUserData)] BYTE* pUserData;
    DWORD dwSizeofUserDataOut;
    [size_is(dwSizeofUserDataOut)] BYTE* pUserDataOut;
    LPWSTR pwszIdentity;
    DWORD dwError;
    EAP_ERROR* pEapError;
} EAPHOST_IDENTITY_UI_PARAMS;
typedef struct _EAPHOST_INTERACTIVE_UI_PARAMS {
    DWORD dwSizeofContextData;
    [size_is(dwSizeofContextData)] BYTE* pContextData;
    DWORD dwSizeofInteractiveUIData;
    [size_is(dwSizeofInteractiveUIData)] BYTE* pInteractiveUIData;
    DWORD dwError;
    EAP_ERROR* pEapError;
} EAPHOST_INTERACTIVE_UI_PARAMS;
typedef enum _EapCredentialType
{
    EAP_EMPTY_CREDENTIAL=0,
    EAP_USERNAME_PASSWORD_CREDENTIAL,
    EAP_WINLOGON_CREDENTIAL,
    EAP_CERTIFICATE_CREDENTIAL,
    EAP_SIM_CREDENTIAL
} EapCredentialType;
typedef struct _EapUsernamePasswordCredential
{
    LPWSTR username;
    LPWSTR password;
} EapUsernamePasswordCredential;
typedef struct _EapCertificateCredential
{
    BYTE certHash[CERTIFICATE_HASH_LENGTH];
    LPWSTR password;
} EapCertificateCredential;
typedef struct _EapSimCredential
{
    LPWSTR iccID;
} EapSimCredential;
    typedef [switch_type(EapCredentialType)]
    union {
        [case(EAP_USERNAME_PASSWORD_CREDENTIAL)] EapUsernamePasswordCredential username_password;
        [case(EAP_CERTIFICATE_CREDENTIAL)] EapCertificateCredential certificate;
        [case(EAP_SIM_CREDENTIAL)] EapSimCredential sim;
        [default] ;
    } EapCredentialTypeData;
typedef struct _EapCredential
{
    EapCredentialType credType;
    [switch_is(credType)] EapCredentialTypeData credData;
} EapCredential;
#endif
#pragma endregion
