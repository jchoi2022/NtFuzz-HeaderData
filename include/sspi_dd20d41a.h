#include <sdkddkver.h>
#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef WCHAR SEC_WCHAR;
typedef CHAR SEC_CHAR;
typedef LONG SECURITY_STATUS;
typedef SEC_WCHAR * SECURITY_PSTR;
typedef CONST SEC_WCHAR * SECURITY_PCSTR;
typedef struct _SecHandle
{
    ULONG_PTR dwLower ;
    ULONG_PTR dwUpper ;
} SecHandle, * PSecHandle ;
            ((PSecHandle) (x))->dwLower = ((PSecHandle) (x))->dwUpper = ((ULONG_PTR) ((INT_PTR)-1)) ;
            ( ( ((PSecHandle) (x))->dwLower != ((ULONG_PTR) ((INT_PTR) -1 ))) && \
              ( ((PSecHandle) (x))->dwUpper != ((ULONG_PTR) ((INT_PTR) -1 ))) )
typedef SecHandle CredHandle;
typedef PSecHandle PCredHandle;
typedef SecHandle CtxtHandle;
typedef PSecHandle PCtxtHandle;
typedef unsigned __int64 QWORD;
typedef QWORD SECURITY_INTEGER, *PSECURITY_INTEGER;
typedef SECURITY_INTEGER TimeStamp;
typedef SECURITY_INTEGER * PTimeStamp;
typedef struct _SECURITY_STRING {
    unsigned short Length;
    unsigned short MaximumLength;
    [size_is(MaximumLength / 2), length_is(Length / 2)]
    unsigned short * Buffer;
} SECURITY_STRING, * PSECURITY_STRING;
typedef struct _SecPkgInfoW
{
    unsigned long fCapabilities;
    unsigned short wVersion;
    unsigned short wRPCID;
    unsigned long cbMaxToken;
    [string]
    SEC_WCHAR * Name;
    [string]
    SEC_WCHAR * Comment;
} SecPkgInfoW, * PSecPkgInfoW;
typedef struct _SecPkgInfoA
{
    unsigned long fCapabilities;
    unsigned short wVersion;
    unsigned short wRPCID;
    unsigned long cbMaxToken;
    [string]
    SEC_CHAR * Name;
    [string]
    SEC_CHAR * Comment;
} SecPkgInfoA, * PSecPkgInfoA;
typedef struct _SecBuffer {
    unsigned long cbBuffer;
    unsigned long BufferType;
    [size_is(cbBuffer)] char * pvBuffer;
} SecBuffer, * PSecBuffer;
typedef struct _SecBufferDesc {
    unsigned long ulVersion;
    unsigned long cBuffers;
    [size_is(cBuffers)]
    _Field_size_(cBuffers) PSecBuffer pBuffers;
} SecBufferDesc, SEC_FAR * PSecBufferDesc;
typedef struct _SEC_NEGOTIATION_INFO {
    unsigned long Size;
    unsigned long NameLength;
    SEC_WCHAR * Name;
    void * Reserved;
} SEC_NEGOTIATION_INFO, * PSEC_NEGOTIATION_INFO ;
typedef struct _SEC_CHANNEL_BINDINGS {
    unsigned long dwInitiatorAddrType;
    unsigned long cbInitiatorLength;
    unsigned long dwInitiatorOffset;
    unsigned long dwAcceptorAddrType;
    unsigned long cbAcceptorLength;
    unsigned long dwAcceptorOffset;
    unsigned long cbApplicationDataLength;
    unsigned long dwApplicationDataOffset;
} SEC_CHANNEL_BINDINGS, * PSEC_CHANNEL_BINDINGS ;
typedef enum _SEC_APPLICATION_PROTOCOL_NEGOTIATION_EXT
{
    SecApplicationProtocolNegotiationExt_None,
    SecApplicationProtocolNegotiationExt_NPN,
    SecApplicationProtocolNegotiationExt_ALPN
} SEC_APPLICATION_PROTOCOL_NEGOTIATION_EXT, *PSEC_APPLICATION_PROTOCOL_NEGOTIATION_EXT;
typedef struct _SEC_APPLICATION_PROTOCOL_LIST {
    SEC_APPLICATION_PROTOCOL_NEGOTIATION_EXT ProtoNegoExt;
    unsigned short ProtocolListSize;
    unsigned char ProtocolList[ANYSIZE_ARRAY];
} SEC_APPLICATION_PROTOCOL_LIST, *PSEC_APPLICATION_PROTOCOL_LIST;
typedef struct _SEC_APPLICATION_PROTOCOLS {
    unsigned long ProtocolListsSize;
    SEC_APPLICATION_PROTOCOL_LIST ProtocolLists[ANYSIZE_ARRAY];
} SEC_APPLICATION_PROTOCOLS, *PSEC_APPLICATION_PROTOCOLS;
typedef struct _SEC_SRTP_PROTECTION_PROFILES {
    unsigned short ProfilesSize;
    unsigned short ProfilesList[ANYSIZE_ARRAY];
} SEC_SRTP_PROTECTION_PROFILES, *PSEC_SRTP_PROTECTION_PROFILES;
typedef struct _SEC_SRTP_MASTER_KEY_IDENTIFIER {
    unsigned char MasterKeyIdentifierSize;
    unsigned char MasterKeyIdentifier[ANYSIZE_ARRAY];
} SEC_SRTP_MASTER_KEY_IDENTIFIER, *PSEC_SRTP_MASTER_KEY_IDENTIFIER;
typedef struct _SEC_TOKEN_BINDING {
    unsigned char MajorVersion;
    unsigned char MinorVersion;
    unsigned short KeyParametersSize;
    unsigned char KeyParameters[ANYSIZE_ARRAY];
} SEC_TOKEN_BINDING, *PSEC_TOKEN_BINDING;
typedef struct _SEC_PRESHAREDKEY {
    unsigned short KeySize;
    unsigned char Key[ANYSIZE_ARRAY];
} SEC_PRESHAREDKEY, *PSEC_PRESHAREDKEY;
typedef struct _SEC_PRESHAREDKEY_IDENTITY {
    unsigned short KeyIdentitySize;
    unsigned char KeyIdentity[ANYSIZE_ARRAY];
} SEC_PRESHAREDKEY_IDENTITY, *PSEC_PRESHAREDKEY_IDENTITY;
typedef struct _SEC_DTLS_MTU {
    unsigned short PathMTU;
} SEC_DTLS_MTU, *PSEC_DTLS_MTU;
typedef struct _SEC_FLAGS {
    unsigned long long Flags;
} SEC_FLAGS, *PSEC_FLAGS;
typedef enum _SEC_TRAFFIC_SECRET_TYPE
{
    SecTrafficSecret_None,
    SecTrafficSecret_Client,
    SecTrafficSecret_Server
} SEC_TRAFFIC_SECRET_TYPE, *PSEC_TRAFFIC_SECRET_TYPE;
typedef struct _SEC_TRAFFIC_SECRETS {
    wchar_t SymmetricAlgId[SZ_ALG_MAX_SIZE];
    wchar_t ChainingMode[SZ_ALG_MAX_SIZE];
    wchar_t HashAlgId[SZ_ALG_MAX_SIZE];
    unsigned short KeySize;
    unsigned short IvSize;
    unsigned short MsgSequenceStart;
    unsigned short MsgSequenceEnd;
    SEC_TRAFFIC_SECRET_TYPE TrafficSecretType;
    unsigned short TrafficSecretSize;
    unsigned char TrafficSecret[ANYSIZE_ARRAY];
} SEC_TRAFFIC_SECRETS, *PSEC_TRAFFIC_SECRETS;
typedef struct _SecPkgCredentials_NamesW
{
    [string]
    SEC_WCHAR * sUserName;
} SecPkgCredentials_NamesW, * PSecPkgCredentials_NamesW;
typedef struct _SecPkgCredentials_NamesA
{
    [string]
    SEC_CHAR * sUserName;
} SecPkgCredentials_NamesA, * PSecPkgCredentials_NamesA;
typedef struct _SecPkgCredentials_SSIProviderA
{
    SEC_CHAR * sProviderName;
    unsigned long ProviderInfoLength;
    char * ProviderInfo;
} SecPkgCredentials_SSIProviderA, * PSecPkgCredentials_SSIProviderA;
typedef struct _SecPkgCredentials_KdcProxySettingsW
{
    ULONG Version;
    ULONG Flags;
    USHORT ProxyServerOffset;
    USHORT ProxyServerLength;
    USHORT ClientTlsCredOffset;
    USHORT ClientTlsCredLength;
} SecPkgCredentials_KdcProxySettingsW, *PSecPkgCredentials_KdcProxySettingsW;
typedef struct _SecPkgCredentials_Cert
{
    unsigned long EncodedCertSize;
    unsigned char* EncodedCert;
} SecPkgCredentials_Cert, * PSecPkgCredentials_Cert;
typedef struct _SecPkgContext_SubjectAttributes {
    void* AttributeInfo;
} SecPkgContext_SubjectAttributes, *PSecPkgContext_SubjectAttributes;
typedef enum _SECPKG_CRED_CLASS {
    SecPkgCredClass_None = 0,
    SecPkgCredClass_Ephemeral = 10,
    SecPkgCredClass_PersistedGeneric = 20,
    SecPkgCredClass_PersistedSpecific = 30,
    SecPkgCredClass_Explicit = 40,
} SECPKG_CRED_CLASS, * PSECPKG_CRED_CLASS;
typedef struct _SecPkgContext_CredInfo {
    SECPKG_CRED_CLASS CredClass;
    unsigned long IsPromptingNeeded;
} SecPkgContext_CredInfo, *PSecPkgContext_CredInfo;
typedef struct _SecPkgContext_NegoPackageInfo
{
    unsigned long PackageMask;
} SecPkgContext_NegoPackageInfo, * PSecPkgContext_NegoPackageInfo;
typedef struct _SecPkgContext_NegoStatus
{
    unsigned long LastStatus;
} SecPkgContext_NegoStatus, * PSecPkgContext_NegoStatus;
typedef struct _SecPkgContext_Sizes
{
    unsigned long cbMaxToken;
    unsigned long cbMaxSignature;
    unsigned long cbBlockSize;
    unsigned long cbSecurityTrailer;
} SecPkgContext_Sizes, * PSecPkgContext_Sizes;
typedef struct _SecPkgContext_StreamSizes
{
    unsigned long cbHeader;
    unsigned long cbTrailer;
    unsigned long cbMaximumMessage;
    unsigned long cBuffers;
    unsigned long cbBlockSize;
} SecPkgContext_StreamSizes, * PSecPkgContext_StreamSizes;
typedef SecPkgContext_StreamSizes SecPkgContext_DatagramSizes;
typedef PSecPkgContext_StreamSizes PSecPkgContext_DatagramSizes;
typedef struct _SecPkgContext_NamesW
{
    SEC_WCHAR * sUserName;
} SecPkgContext_NamesW, * PSecPkgContext_NamesW;
typedef enum _SECPKG_ATTR_LCT_STATUS {
    SecPkgAttrLastClientTokenYes,
    SecPkgAttrLastClientTokenNo,
    SecPkgAttrLastClientTokenMaybe
} SECPKG_ATTR_LCT_STATUS, * PSECPKG_ATTR_LCT_STATUS;
typedef struct _SecPkgContext_LastClientTokenStatus {
    SECPKG_ATTR_LCT_STATUS LastClientTokenStatus;
} SecPkgContext_LastClientTokenStatus, * PSecPkgContext_LastClientTokenStatus;
typedef struct _SecPkgContext_NamesA
{
    SEC_CHAR * sUserName;
} SecPkgContext_NamesA, * PSecPkgContext_NamesA;
typedef struct _SecPkgContext_Lifespan
{
    TimeStamp tsStart;
    TimeStamp tsExpiry;
} SecPkgContext_Lifespan, * PSecPkgContext_Lifespan;
typedef struct _SecPkgContext_DceInfo
{
    unsigned long AuthzSvc;
    void * pPac;
} SecPkgContext_DceInfo, * PSecPkgContext_DceInfo;
typedef struct _SecPkgContext_KeyInfoA
{
    SEC_CHAR * sSignatureAlgorithmName;
    SEC_CHAR * sEncryptAlgorithmName;
    unsigned long KeySize;
    unsigned long SignatureAlgorithm;
    unsigned long EncryptAlgorithm;
} SecPkgContext_KeyInfoA, * PSecPkgContext_KeyInfoA;
typedef struct _SecPkgContext_KeyInfoW
{
    SEC_WCHAR * sSignatureAlgorithmName;
    SEC_WCHAR * sEncryptAlgorithmName;
    unsigned long KeySize;
    unsigned long SignatureAlgorithm;
    unsigned long EncryptAlgorithm;
} SecPkgContext_KeyInfoW, * PSecPkgContext_KeyInfoW;
typedef struct _SecPkgContext_AuthorityA
{
    SEC_CHAR * sAuthorityName;
} SecPkgContext_AuthorityA, * PSecPkgContext_AuthorityA;
typedef struct _SecPkgContext_AuthorityW
{
    SEC_WCHAR * sAuthorityName;
} SecPkgContext_AuthorityW, * PSecPkgContext_AuthorityW;
typedef struct _SecPkgContext_ProtoInfoA
{
    SEC_CHAR * sProtocolName;
    unsigned long majorVersion;
    unsigned long minorVersion;
} SecPkgContext_ProtoInfoA, * PSecPkgContext_ProtoInfoA;
typedef struct _SecPkgContext_ProtoInfoW
{
    SEC_WCHAR * sProtocolName;
    unsigned long majorVersion;
    unsigned long minorVersion;
} SecPkgContext_ProtoInfoW, * PSecPkgContext_ProtoInfoW;
typedef struct _SecPkgContext_PasswordExpiry
{
    TimeStamp tsPasswordExpires;
} SecPkgContext_PasswordExpiry, * PSecPkgContext_PasswordExpiry;
typedef struct _SecPkgContext_SessionKey
{
    unsigned long SessionKeyLength;
    _Field_size_bytes_(SessionKeyLength) unsigned char * SessionKey;
} SecPkgContext_SessionKey, *PSecPkgContext_SessionKey;
typedef struct _SecPkgContext_NegoKeys
{
  unsigned long KeyType;
  unsigned short KeyLength;
  _Field_size_bytes_(KeyLength) unsigned char* KeyValue;
  unsigned long VerifyKeyType;
  unsigned short VerifyKeyLength;
  _Field_size_bytes_(VerifyKeyLength) unsigned char* VerifyKeyValue;
} SecPkgContext_NegoKeys, * PSecPkgContext_NegoKeys;
typedef struct _SecPkgContext_PackageInfoW
{
    PSecPkgInfoW PackageInfo;
} SecPkgContext_PackageInfoW, * PSecPkgContext_PackageInfoW;
typedef struct _SecPkgContext_PackageInfoA
{
    PSecPkgInfoA PackageInfo;
} SecPkgContext_PackageInfoA, * PSecPkgContext_PackageInfoA;
typedef struct _SecPkgContext_UserFlags
{
    unsigned long UserFlags;
} SecPkgContext_UserFlags, * PSecPkgContext_UserFlags;
typedef struct _SecPkgContext_Flags
{
    unsigned long Flags;
} SecPkgContext_Flags, * PSecPkgContext_Flags;
typedef struct _SecPkgContext_NegotiationInfoA
{
    PSecPkgInfoA PackageInfo ;
    unsigned long NegotiationState ;
} SecPkgContext_NegotiationInfoA, * PSecPkgContext_NegotiationInfoA ;
typedef struct _SecPkgContext_NegotiationInfoW
{
    PSecPkgInfoW PackageInfo ;
    unsigned long NegotiationState ;
} SecPkgContext_NegotiationInfoW, * PSecPkgContext_NegotiationInfoW ;
typedef struct _SecPkgContext_NativeNamesW
{
    SEC_WCHAR * sClientName;
    SEC_WCHAR * sServerName;
} SecPkgContext_NativeNamesW, * PSecPkgContext_NativeNamesW;
typedef struct _SecPkgContext_NativeNamesA
{
    SEC_CHAR * sClientName;
    SEC_CHAR * sServerName;
} SecPkgContext_NativeNamesA, * PSecPkgContext_NativeNamesA;
#if OSVER(NTDDI_VERSION) > NTDDI_WIN2K
typedef struct _SecPkgContext_CredentialNameW
{
    unsigned long CredentialType;
    SEC_WCHAR *sCredentialName;
} SecPkgContext_CredentialNameW, * PSecPkgContext_CredentialNameW;
#endif
typedef struct _SecPkgContext_CredentialNameA
{
    unsigned long CredentialType;
    SEC_CHAR *sCredentialName;
} SecPkgContext_CredentialNameA, * PSecPkgContext_CredentialNameA;
typedef struct _SecPkgContext_AccessToken
{
    void * AccessToken;
} SecPkgContext_AccessToken, * PSecPkgContext_AccessToken;
typedef struct _SecPkgContext_TargetInformation
{
    unsigned long MarshalledTargetInfoLength;
    unsigned char * MarshalledTargetInfo;
} SecPkgContext_TargetInformation, * PSecPkgContext_TargetInformation;
typedef struct _SecPkgContext_AuthzID
{
    unsigned long AuthzIDLength;
    char * AuthzID;
} SecPkgContext_AuthzID, * PSecPkgContext_AuthzID;
typedef struct _SecPkgContext_Target
{
    unsigned long TargetLength;
    char * Target;
} SecPkgContext_Target, * PSecPkgContext_Target;
typedef struct _SecPkgContext_ClientSpecifiedTarget
{
    SEC_WCHAR * sTargetName;
} SecPkgContext_ClientSpecifiedTarget, * PSecPkgContext_ClientSpecifiedTarget;
typedef struct _SecPkgContext_Bindings
{
    unsigned long BindingsLength;
    _Field_size_bytes_(BindingsLength) SEC_CHANNEL_BINDINGS * Bindings;
} SecPkgContext_Bindings, * PSecPkgContext_Bindings;
typedef enum _SEC_APPLICATION_PROTOCOL_NEGOTIATION_STATUS
{
    SecApplicationProtocolNegotiationStatus_None,
    SecApplicationProtocolNegotiationStatus_Success,
    SecApplicationProtocolNegotiationStatus_SelectedClientOnly
} SEC_APPLICATION_PROTOCOL_NEGOTIATION_STATUS, *PSEC_APPLICATION_PROTOCOL_NEGOTIATION_STATUS;
typedef struct _SecPkgContext_ApplicationProtocol
{
    SEC_APPLICATION_PROTOCOL_NEGOTIATION_STATUS ProtoNegoStatus;
    SEC_APPLICATION_PROTOCOL_NEGOTIATION_EXT ProtoNegoExt;
    unsigned char ProtocolIdSize;
    unsigned char ProtocolId[MAX_PROTOCOL_ID_SIZE];
} SecPkgContext_ApplicationProtocol, *PSecPkgContext_ApplicationProtocol;
typedef struct _SecPkgContext_NegotiatedTlsExtensions
{
    unsigned long ExtensionsCount;
    _Field_size_(ExtensionsCount) unsigned short * Extensions;
} SecPkgContext_NegotiatedTlsExtensions, * PSecPkgContext_NegotiatedTlsExtensions;
typedef struct _SECPKG_APP_MODE_INFO {
    ULONG UserFunction;
    ULONG_PTR Argument1;
    ULONG_PTR Argument2;
    SecBuffer UserData;
    BOOLEAN ReturnToLsa;
} SECPKG_APP_MODE_INFO, *PSECPKG_APP_MODE_INFO;
typedef void
(SEC_ENTRY * SEC_GET_KEY_FN) (
    void * Arg,
    void * Principal,
    unsigned long KeyVer,
    void * * Key,
    SECURITY_STATUS * Status
    );
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
AcquireCredentialsHandleW(
    _In_opt_ LPWSTR pszPrincipal,
    _In_ LPWSTR pszPackage,
    _In_ unsigned long fCredentialUse,
    _In_opt_ void * pvLogonId,
    _In_opt_ void * pAuthData,
    _In_opt_ SEC_GET_KEY_FN pGetKeyFn,
    _In_opt_ void * pvGetKeyArgument,
    _Out_ PCredHandle phCredential,
    _Out_opt_ PTimeStamp ptsExpiry
    );
typedef SECURITY_STATUS
(SEC_ENTRY * ACQUIRE_CREDENTIALS_HANDLE_FN_W)(
    SEC_WCHAR *,
    SEC_WCHAR *,
    unsigned long,
    void *,
    void *,
    SEC_GET_KEY_FN,
    void *,
    PCredHandle,
    PTimeStamp);
SECURITY_STATUS SEC_ENTRY
AcquireCredentialsHandleA(
    _In_opt_ LPSTR pszPrincipal,
    _In_ LPSTR pszPackage,
    _In_ unsigned long fCredentialUse,
    _In_opt_ void * pvLogonId,
    _In_opt_ void * pAuthData,
    _In_opt_ SEC_GET_KEY_FN pGetKeyFn,
    _In_opt_ void * pvGetKeyArgument,
    _Out_ PCredHandle phCredential,
    _Out_opt_ PTimeStamp ptsExpiry
    );
typedef SECURITY_STATUS
(SEC_ENTRY * ACQUIRE_CREDENTIALS_HANDLE_FN_A)(
    SEC_CHAR *,
    SEC_CHAR *,
    unsigned long,
    void *,
    void *,
    SEC_GET_KEY_FN,
    void *,
    PCredHandle,
    PTimeStamp);
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
FreeCredentialsHandle(
    _In_ PCredHandle phCredential
    );
typedef SECURITY_STATUS
(SEC_ENTRY * FREE_CREDENTIALS_HANDLE_FN)(
    PCredHandle );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
AddCredentialsW(
    _In_ PCredHandle hCredentials,
    _In_opt_ LPWSTR pszPrincipal,
    _In_ LPWSTR pszPackage,
    _In_ unsigned long fCredentialUse,
    _In_opt_ void * pAuthData,
    _In_opt_ SEC_GET_KEY_FN pGetKeyFn,
    _In_opt_ void * pvGetKeyArgument,
    _Out_opt_ PTimeStamp ptsExpiry
    );
typedef SECURITY_STATUS
(SEC_ENTRY * ADD_CREDENTIALS_FN_W)(
    PCredHandle,
    SEC_WCHAR *,
    SEC_WCHAR *,
    unsigned long,
    void *,
    SEC_GET_KEY_FN,
    void *,
    PTimeStamp);
SECURITY_STATUS SEC_ENTRY
AddCredentialsA(
    _In_ PCredHandle hCredentials,
    _In_opt_ LPSTR pszPrincipal,
    _In_ LPSTR pszPackage,
    _In_ unsigned long fCredentialUse,
    _In_opt_ void * pAuthData,
    _In_opt_ SEC_GET_KEY_FN pGetKeyFn,
    _In_opt_ void * pvGetKeyArgument,
    _Out_opt_ PTimeStamp ptsExpiry
    );
typedef SECURITY_STATUS
(SEC_ENTRY * ADD_CREDENTIALS_FN_A)(
    PCredHandle,
    SEC_CHAR *,
    SEC_CHAR *,
    unsigned long,
    void *,
    SEC_GET_KEY_FN,
    void *,
    PTimeStamp);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
SECURITY_STATUS SEC_ENTRY
ChangeAccountPasswordW(
    _In_ SEC_WCHAR * pszPackageName,
    _In_ SEC_WCHAR * pszDomainName,
    _In_ SEC_WCHAR * pszAccountName,
    _In_ SEC_WCHAR * pszOldPassword,
    _In_ SEC_WCHAR * pszNewPassword,
    _In_ BOOLEAN bImpersonating,
    _In_ unsigned long dwReserved,
    _Inout_ PSecBufferDesc pOutput
    );
typedef SECURITY_STATUS
(SEC_ENTRY * CHANGE_PASSWORD_FN_W)(
    SEC_WCHAR *,
    SEC_WCHAR *,
    SEC_WCHAR *,
    SEC_WCHAR *,
    SEC_WCHAR *,
    BOOLEAN,
    unsigned long,
    PSecBufferDesc
    );
SECURITY_STATUS SEC_ENTRY
ChangeAccountPasswordA(
    _In_ SEC_CHAR * pszPackageName,
    _In_ SEC_CHAR * pszDomainName,
    _In_ SEC_CHAR * pszAccountName,
    _In_ SEC_CHAR * pszOldPassword,
    _In_ SEC_CHAR * pszNewPassword,
    _In_ BOOLEAN bImpersonating,
    _In_ unsigned long dwReserved,
    _Inout_ PSecBufferDesc pOutput
    );
typedef SECURITY_STATUS
(SEC_ENTRY * CHANGE_PASSWORD_FN_A)(
    SEC_CHAR *,
    SEC_CHAR *,
    SEC_CHAR *,
    SEC_CHAR *,
    SEC_CHAR *,
    BOOLEAN,
    unsigned long,
    PSecBufferDesc
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
InitializeSecurityContextW(
    _In_opt_ PCredHandle phCredential,
    _In_opt_ PCtxtHandle phContext,
    _In_opt_ SEC_WCHAR * pszTargetName,
    _In_ unsigned long fContextReq,
    _In_ unsigned long Reserved1,
    _In_ unsigned long TargetDataRep,
    _In_opt_ PSecBufferDesc pInput,
    _In_ unsigned long Reserved2,
    _Inout_opt_ PCtxtHandle phNewContext,
    _Inout_opt_ PSecBufferDesc pOutput,
    _Out_ unsigned long * pfContextAttr,
    _Out_opt_ PTimeStamp ptsExpiry
    );
typedef SECURITY_STATUS
(SEC_ENTRY * INITIALIZE_SECURITY_CONTEXT_FN_W)(
    PCredHandle,
    PCtxtHandle,
    SEC_WCHAR *,
    unsigned long,
    unsigned long,
    unsigned long,
    PSecBufferDesc,
    unsigned long,
    PCtxtHandle,
    PSecBufferDesc,
    unsigned long *,
    PTimeStamp);
SECURITY_STATUS SEC_ENTRY
InitializeSecurityContextA(
    _In_opt_ PCredHandle phCredential,
    _In_opt_ PCtxtHandle phContext,
    _In_opt_ SEC_CHAR * pszTargetName,
    _In_ unsigned long fContextReq,
    _In_ unsigned long Reserved1,
    _In_ unsigned long TargetDataRep,
    _In_opt_ PSecBufferDesc pInput,
    _In_ unsigned long Reserved2,
    _Inout_opt_ PCtxtHandle phNewContext,
    _Inout_opt_ PSecBufferDesc pOutput,
    _Out_ unsigned long * pfContextAttr,
    _Out_opt_ PTimeStamp ptsExpiry
    );
typedef SECURITY_STATUS
(SEC_ENTRY * INITIALIZE_SECURITY_CONTEXT_FN_A)(
    PCredHandle,
    PCtxtHandle,
    SEC_CHAR *,
    unsigned long,
    unsigned long,
    unsigned long,
    PSecBufferDesc,
    unsigned long,
    PCtxtHandle,
    PSecBufferDesc,
    unsigned long *,
    PTimeStamp);
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
AcceptSecurityContext(
    _In_opt_ PCredHandle phCredential,
    _In_opt_ PCtxtHandle phContext,
    _In_opt_ PSecBufferDesc pInput,
    _In_ unsigned long fContextReq,
    _In_ unsigned long TargetDataRep,
    _Inout_opt_ PCtxtHandle phNewContext,
    _Inout_opt_ PSecBufferDesc pOutput,
    _Out_ unsigned long * pfContextAttr,
    _Out_opt_ PTimeStamp ptsExpiry
    );
typedef SECURITY_STATUS
(SEC_ENTRY * ACCEPT_SECURITY_CONTEXT_FN)(
    PCredHandle,
    PCtxtHandle,
    PSecBufferDesc,
    unsigned long,
    unsigned long,
    PCtxtHandle,
    PSecBufferDesc,
    unsigned long *,
    PTimeStamp);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
SECURITY_STATUS SEC_ENTRY
CompleteAuthToken(
    _In_ PCtxtHandle phContext,
    _In_ PSecBufferDesc pToken
    );
typedef SECURITY_STATUS
(SEC_ENTRY * COMPLETE_AUTH_TOKEN_FN)(
    PCtxtHandle,
    PSecBufferDesc);
KSECDDDECLSPEC
_Check_return_
SECURITY_STATUS SEC_ENTRY
ImpersonateSecurityContext(
    _In_ PCtxtHandle phContext
    );
typedef SECURITY_STATUS
(SEC_ENTRY * IMPERSONATE_SECURITY_CONTEXT_FN)(
    PCtxtHandle);
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
RevertSecurityContext(
    _In_ PCtxtHandle phContext
    );
typedef SECURITY_STATUS
(SEC_ENTRY * REVERT_SECURITY_CONTEXT_FN)(
    PCtxtHandle);
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
QuerySecurityContextToken(
    _In_ PCtxtHandle phContext,
    _Out_ void * * Token
    );
typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_SECURITY_CONTEXT_TOKEN_FN)(
    PCtxtHandle, void * *);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
DeleteSecurityContext(
    _In_ PCtxtHandle phContext
    );
typedef SECURITY_STATUS
(SEC_ENTRY * DELETE_SECURITY_CONTEXT_FN)(
    PCtxtHandle);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
ApplyControlToken(
    _In_ PCtxtHandle phContext,
    _In_ PSecBufferDesc pInput
    );
typedef SECURITY_STATUS
(SEC_ENTRY * APPLY_CONTROL_TOKEN_FN)(
    PCtxtHandle, PSecBufferDesc);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
QueryContextAttributesW(
    _In_ PCtxtHandle phContext,
    _In_ unsigned long ulAttribute,
    _Out_ void * pBuffer
    );
typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_CONTEXT_ATTRIBUTES_FN_W)(
    PCtxtHandle,
    unsigned long,
    void *);
SECURITY_STATUS SEC_ENTRY
QueryContextAttributesExW(
    _In_ PCtxtHandle phContext,
    _In_ unsigned long ulAttribute,
    _Out_writes_bytes_(cbBuffer) void * pBuffer,
    _In_ unsigned long cbBuffer
    );
typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_CONTEXT_ATTRIBUTES_EX_FN_W)(
    PCtxtHandle,
    unsigned long,
    void *,
    unsigned long);
SECURITY_STATUS SEC_ENTRY
QueryContextAttributesA(
    _In_ PCtxtHandle phContext,
    _In_ unsigned long ulAttribute,
    _Out_ void * pBuffer
    );
typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_CONTEXT_ATTRIBUTES_FN_A)(
    PCtxtHandle,
    unsigned long,
    void *);
SECURITY_STATUS SEC_ENTRY
QueryContextAttributesExA(
    _In_ PCtxtHandle phContext,
    _In_ unsigned long ulAttribute,
    _Out_writes_bytes_(cbBuffer) void * pBuffer,
    _In_ unsigned long cbBuffer
    );
typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_CONTEXT_ATTRIBUTES_EX_FN_A)(
    PCtxtHandle,
    unsigned long,
    void *,
    unsigned long);
#if (OSVER(NTDDI_VERSION) > NTDDI_WIN2K)
SECURITY_STATUS SEC_ENTRY
SetContextAttributesW(
    _In_ PCtxtHandle phContext,
    _In_ unsigned long ulAttribute,
    _In_reads_bytes_(cbBuffer) void * pBuffer,
    _In_ unsigned long cbBuffer
    );
typedef SECURITY_STATUS
(SEC_ENTRY * SET_CONTEXT_ATTRIBUTES_FN_W)(
    PCtxtHandle,
    unsigned long,
    void *,
    unsigned long );
#endif
SECURITY_STATUS SEC_ENTRY
SetContextAttributesA(
    _In_ PCtxtHandle phContext,
    _In_ unsigned long ulAttribute,
    _In_reads_bytes_(cbBuffer) void * pBuffer,
    _In_ unsigned long cbBuffer
    );
typedef SECURITY_STATUS
(SEC_ENTRY * SET_CONTEXT_ATTRIBUTES_FN_A)(
    PCtxtHandle,
    unsigned long,
    void *,
    unsigned long );
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
QueryCredentialsAttributesW(
    _In_ PCredHandle phCredential,
    _In_ unsigned long ulAttribute,
    _Inout_ void * pBuffer
    );
typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_CREDENTIALS_ATTRIBUTES_FN_W)(
    PCredHandle,
    unsigned long,
    void *);
SECURITY_STATUS SEC_ENTRY
QueryCredentialsAttributesExW(
    _In_ PCredHandle phCredential,
    _In_ unsigned long ulAttribute,
    _Inout_updates_bytes_(cbBuffer) void * pBuffer,
    _In_ unsigned long cbBuffer
    );
typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_CREDENTIALS_ATTRIBUTES_EX_FN_W)(
    PCredHandle,
    unsigned long,
    void *,
    unsigned long);
SECURITY_STATUS SEC_ENTRY
QueryCredentialsAttributesA(
    _In_ PCredHandle phCredential,
    _In_ unsigned long ulAttribute,
    _Inout_ void * pBuffer
    );
typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_CREDENTIALS_ATTRIBUTES_FN_A)(
    PCredHandle,
    unsigned long,
    void *);
SECURITY_STATUS SEC_ENTRY
QueryCredentialsAttributesExA(
    _In_ PCredHandle phCredential,
    _In_ unsigned long ulAttribute,
    _Inout_updates_bytes_(cbBuffer) void * pBuffer,
    _In_ unsigned long cbBuffer
    );
typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_CREDENTIALS_ATTRIBUTES_EX_FN_A)(
    PCredHandle,
    unsigned long,
    void *,
    unsigned long);
SECURITY_STATUS SEC_ENTRY
SetCredentialsAttributesA(
    _In_ PCredHandle phCredential,
    _In_ unsigned long ulAttribute,
    _In_reads_bytes_(cbBuffer) void * pBuffer,
    _In_ unsigned long cbBuffer
    );
typedef SECURITY_STATUS
(SEC_ENTRY * SET_CREDENTIALS_ATTRIBUTES_FN_A)(
    PCredHandle,
    unsigned long,
    void *,
    unsigned long );
SECURITY_STATUS SEC_ENTRY
FreeContextBuffer(
    _Inout_ PVOID pvContextBuffer
    );
typedef SECURITY_STATUS
(SEC_ENTRY * FREE_CONTEXT_BUFFER_FN)(
    _Inout_ PVOID
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
MakeSignature(
    _In_ PCtxtHandle phContext,
    _In_ unsigned long fQOP,
    _In_ PSecBufferDesc pMessage,
    _In_ unsigned long MessageSeqNo
    );
typedef SECURITY_STATUS
(SEC_ENTRY * MAKE_SIGNATURE_FN)(
    PCtxtHandle,
    unsigned long,
    PSecBufferDesc,
    unsigned long);
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
VerifySignature(
    _In_ PCtxtHandle phContext,
    _In_ PSecBufferDesc pMessage,
    _In_ unsigned long MessageSeqNo,
    _Out_ unsigned long * pfQOP
    );
typedef SECURITY_STATUS
(SEC_ENTRY * VERIFY_SIGNATURE_FN)(
    PCtxtHandle,
    PSecBufferDesc,
    unsigned long,
    unsigned long *);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
SECURITY_STATUS SEC_ENTRY
EncryptMessage( _In_ PCtxtHandle phContext,
                _In_ unsigned long fQOP,
                _In_ PSecBufferDesc pMessage,
                _In_ unsigned long MessageSeqNo);
typedef SECURITY_STATUS
(SEC_ENTRY * ENCRYPT_MESSAGE_FN)(
    PCtxtHandle, unsigned long, PSecBufferDesc, unsigned long);
SECURITY_STATUS SEC_ENTRY
DecryptMessage( _In_ PCtxtHandle phContext,
                _In_ PSecBufferDesc pMessage,
                _In_ unsigned long MessageSeqNo,
                _Out_opt_ unsigned long * pfQOP);
typedef SECURITY_STATUS
(SEC_ENTRY * DECRYPT_MESSAGE_FN)(
    PCtxtHandle, PSecBufferDesc, unsigned long,
    unsigned long *);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
EnumerateSecurityPackagesW(
    _Out_ unsigned long * pcPackages,
    _Outptr_ PSecPkgInfoW * ppPackageInfo
    );
typedef SECURITY_STATUS
(SEC_ENTRY * ENUMERATE_SECURITY_PACKAGES_FN_W)(
    unsigned long *,
    PSecPkgInfoW *);
SECURITY_STATUS SEC_ENTRY
EnumerateSecurityPackagesA(
    _Out_ unsigned long * pcPackages,
    _Outptr_ PSecPkgInfoA * ppPackageInfo
    );
typedef SECURITY_STATUS
(SEC_ENTRY * ENUMERATE_SECURITY_PACKAGES_FN_A)(
    unsigned long *,
    PSecPkgInfoA *);
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
QuerySecurityPackageInfoW(
    _In_ LPWSTR pszPackageName,
    _Outptr_ PSecPkgInfoW *ppPackageInfo
    );
typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_SECURITY_PACKAGE_INFO_FN_W)(
    SEC_WCHAR *,
    PSecPkgInfoW *);
SECURITY_STATUS SEC_ENTRY
QuerySecurityPackageInfoA(
    _In_ LPSTR pszPackageName,
    _Outptr_ PSecPkgInfoA *ppPackageInfo
    );
typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_SECURITY_PACKAGE_INFO_FN_A)(
    SEC_CHAR *,
    PSecPkgInfoA *);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum _SecDelegationType {
    SecFull,
    SecService,
    SecTree,
    SecDirectory,
    SecObject
} SecDelegationType, * PSecDelegationType;
SECURITY_STATUS SEC_ENTRY
DelegateSecurityContext(
    PCtxtHandle phContext,
    _In_ LPSTR pszTarget,
    SecDelegationType DelegationType,
    PTimeStamp pExpiry,
    PSecBuffer pPackageParameters,
    PSecBufferDesc pOutput);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
ExportSecurityContext(
    _In_ PCtxtHandle phContext,
    _In_ ULONG fFlags,
    _Out_ PSecBuffer pPackedContext,
    _Out_ void * * pToken
    );
typedef SECURITY_STATUS
(SEC_ENTRY * EXPORT_SECURITY_CONTEXT_FN)(
    PCtxtHandle,
    ULONG,
    PSecBuffer,
    void * *
    );
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
ImportSecurityContextW(
    _In_ LPWSTR pszPackage,
    _In_ PSecBuffer pPackedContext,
    _In_ void * Token,
    _Out_ PCtxtHandle phContext
    );
typedef SECURITY_STATUS
(SEC_ENTRY * IMPORT_SECURITY_CONTEXT_FN_W)(
    SEC_WCHAR *,
    PSecBuffer,
    VOID *,
    PCtxtHandle
    );
SECURITY_STATUS SEC_ENTRY
ImportSecurityContextA(
    _In_ LPSTR pszPackage,
    _In_ PSecBuffer pPackedContext,
    _In_ VOID * Token,
    _Out_ PCtxtHandle phContext
    );
typedef SECURITY_STATUS
(SEC_ENTRY * IMPORT_SECURITY_CONTEXT_FN_A)(
    SEC_CHAR *,
    PSecBuffer,
    void *,
    PCtxtHandle
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef struct _SECURITY_FUNCTION_TABLE_W {
    unsigned long dwVersion;
    ENUMERATE_SECURITY_PACKAGES_FN_W EnumerateSecurityPackagesW;
    QUERY_CREDENTIALS_ATTRIBUTES_FN_W QueryCredentialsAttributesW;
    ACQUIRE_CREDENTIALS_HANDLE_FN_W AcquireCredentialsHandleW;
    FREE_CREDENTIALS_HANDLE_FN FreeCredentialsHandle;
    void * Reserved2;
    INITIALIZE_SECURITY_CONTEXT_FN_W InitializeSecurityContextW;
    ACCEPT_SECURITY_CONTEXT_FN AcceptSecurityContext;
    COMPLETE_AUTH_TOKEN_FN CompleteAuthToken;
    DELETE_SECURITY_CONTEXT_FN DeleteSecurityContext;
    APPLY_CONTROL_TOKEN_FN ApplyControlToken;
    QUERY_CONTEXT_ATTRIBUTES_FN_W QueryContextAttributesW;
    IMPERSONATE_SECURITY_CONTEXT_FN ImpersonateSecurityContext;
    REVERT_SECURITY_CONTEXT_FN RevertSecurityContext;
    MAKE_SIGNATURE_FN MakeSignature;
    VERIFY_SIGNATURE_FN VerifySignature;
    FREE_CONTEXT_BUFFER_FN FreeContextBuffer;
    QUERY_SECURITY_PACKAGE_INFO_FN_W QuerySecurityPackageInfoW;
    void * Reserved3;
    void * Reserved4;
    EXPORT_SECURITY_CONTEXT_FN ExportSecurityContext;
    IMPORT_SECURITY_CONTEXT_FN_W ImportSecurityContextW;
    ADD_CREDENTIALS_FN_W AddCredentialsW ;
    void * Reserved8;
    QUERY_SECURITY_CONTEXT_TOKEN_FN QuerySecurityContextToken;
    ENCRYPT_MESSAGE_FN EncryptMessage;
    DECRYPT_MESSAGE_FN DecryptMessage;
#if OSVER(NTDDI_VERSION) > NTDDI_WIN2K
    SET_CONTEXT_ATTRIBUTES_FN_W SetContextAttributesW;
#endif
    CHANGE_PASSWORD_FN_W ChangeAccountPasswordW;
} SecurityFunctionTableW, * PSecurityFunctionTableW;
typedef struct _SECURITY_FUNCTION_TABLE_A {
    unsigned long dwVersion;
    ENUMERATE_SECURITY_PACKAGES_FN_A EnumerateSecurityPackagesA;
    QUERY_CREDENTIALS_ATTRIBUTES_FN_A QueryCredentialsAttributesA;
    ACQUIRE_CREDENTIALS_HANDLE_FN_A AcquireCredentialsHandleA;
    FREE_CREDENTIALS_HANDLE_FN FreeCredentialHandle;
    void * Reserved2;
    INITIALIZE_SECURITY_CONTEXT_FN_A InitializeSecurityContextA;
    ACCEPT_SECURITY_CONTEXT_FN AcceptSecurityContext;
    COMPLETE_AUTH_TOKEN_FN CompleteAuthToken;
    DELETE_SECURITY_CONTEXT_FN DeleteSecurityContext;
    APPLY_CONTROL_TOKEN_FN ApplyControlToken;
    QUERY_CONTEXT_ATTRIBUTES_FN_A QueryContextAttributesA;
    IMPERSONATE_SECURITY_CONTEXT_FN ImpersonateSecurityContext;
    REVERT_SECURITY_CONTEXT_FN RevertSecurityContext;
    MAKE_SIGNATURE_FN MakeSignature;
    VERIFY_SIGNATURE_FN VerifySignature;
    FREE_CONTEXT_BUFFER_FN FreeContextBuffer;
    QUERY_SECURITY_PACKAGE_INFO_FN_A QuerySecurityPackageInfoA;
    void * Reserved3;
    void * Reserved4;
    EXPORT_SECURITY_CONTEXT_FN ExportSecurityContext;
    IMPORT_SECURITY_CONTEXT_FN_A ImportSecurityContextA;
    ADD_CREDENTIALS_FN_A AddCredentialsA ;
    void * Reserved8;
    QUERY_SECURITY_CONTEXT_TOKEN_FN QuerySecurityContextToken;
    ENCRYPT_MESSAGE_FN EncryptMessage;
    DECRYPT_MESSAGE_FN DecryptMessage;
    SET_CONTEXT_ATTRIBUTES_FN_A SetContextAttributesA;
    SET_CREDENTIALS_ATTRIBUTES_FN_A SetCredentialsAttributesA;
    CHANGE_PASSWORD_FN_A ChangeAccountPasswordA;
} SecurityFunctionTableA, * PSecurityFunctionTableA;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
PSecurityFunctionTableA SEC_ENTRY
InitSecurityInterfaceA(
    void
    );
typedef PSecurityFunctionTableA
(SEC_ENTRY * INIT_SECURITY_INTERFACE_A)(void);
KSECDDDECLSPEC
PSecurityFunctionTableW SEC_ENTRY
InitSecurityInterfaceW(
    void
    );
typedef PSecurityFunctionTableW
(SEC_ENTRY * INIT_SECURITY_INTERFACE_W)(void);
SECURITY_STATUS
SEC_ENTRY
SaslEnumerateProfilesA(
    _Outptr_ LPSTR * ProfileList,
    _Out_ ULONG * ProfileCount
    );
SECURITY_STATUS
SEC_ENTRY
SaslEnumerateProfilesW(
    _Outptr_ LPWSTR * ProfileList,
    _Out_ ULONG * ProfileCount
    );
SECURITY_STATUS
SEC_ENTRY
SaslGetProfilePackageA(
    _In_ LPSTR ProfileName,
    _Outptr_ PSecPkgInfoA * PackageInfo
    );
SECURITY_STATUS
SEC_ENTRY
SaslGetProfilePackageW(
    _In_ LPWSTR ProfileName,
    _Outptr_ PSecPkgInfoW * PackageInfo
    );
SECURITY_STATUS
SEC_ENTRY
SaslIdentifyPackageA(
    _In_ PSecBufferDesc pInput,
    _Outptr_ PSecPkgInfoA * PackageInfo
    );
SECURITY_STATUS
SEC_ENTRY
SaslIdentifyPackageW(
    _In_ PSecBufferDesc pInput,
    _Outptr_ PSecPkgInfoW * PackageInfo
    );
SECURITY_STATUS
SEC_ENTRY
SaslInitializeSecurityContextW(
    _In_opt_ PCredHandle phCredential,
    _In_opt_ PCtxtHandle phContext,
    _In_opt_ LPWSTR pszTargetName,
    _In_ unsigned long fContextReq,
    _In_ unsigned long Reserved1,
    _In_ unsigned long TargetDataRep,
    _In_opt_ PSecBufferDesc pInput,
    _In_ unsigned long Reserved2,
    _Inout_opt_ PCtxtHandle phNewContext,
    _Inout_opt_ PSecBufferDesc pOutput,
    _Out_ unsigned long * pfContextAttr,
    _Out_opt_ PTimeStamp ptsExpiry
    );
SECURITY_STATUS
SEC_ENTRY
SaslInitializeSecurityContextA(
    _In_opt_ PCredHandle phCredential,
    _In_opt_ PCtxtHandle phContext,
    _In_opt_ LPSTR pszTargetName,
    _In_ unsigned long fContextReq,
    _In_ unsigned long Reserved1,
    _In_ unsigned long TargetDataRep,
    _In_opt_ PSecBufferDesc pInput,
    _In_ unsigned long Reserved2,
    _Inout_opt_ PCtxtHandle phNewContext,
    _Inout_opt_ PSecBufferDesc pOutput,
    _Out_ unsigned long * pfContextAttr,
    _Out_opt_ PTimeStamp ptsExpiry
    );
SECURITY_STATUS
SEC_ENTRY
SaslAcceptSecurityContext(
    _In_opt_ PCredHandle phCredential,
    _In_opt_ PCtxtHandle phContext,
    _In_opt_ PSecBufferDesc pInput,
    _In_ unsigned long fContextReq,
    _In_ unsigned long TargetDataRep,
    _Inout_opt_ PCtxtHandle phNewContext,
    _Inout_opt_ PSecBufferDesc pOutput,
    _Out_ unsigned long * pfContextAttr,
    _Out_opt_ PTimeStamp ptsExpiry
    );
typedef enum _SASL_AUTHZID_STATE {
    Sasl_AuthZIDForbidden,
    Sasl_AuthZIDProcessed
} SASL_AUTHZID_STATE ;
SECURITY_STATUS
SEC_ENTRY
SaslSetContextOption(
    _In_ PCtxtHandle ContextHandle,
    _In_ ULONG Option,
    _In_ PVOID Value,
    _In_ ULONG Size
    );
SECURITY_STATUS
SEC_ENTRY
SaslGetContextOption(
    _In_ PCtxtHandle ContextHandle,
    _In_ ULONG Option,
    _Out_ PVOID Value,
    _In_ ULONG Size,
    _Out_opt_ PULONG Needed OPTIONAL
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#pragma warning(default:4147)
typedef struct _SEC_WINNT_AUTH_IDENTITY_EX2 {
   unsigned long Version;
   unsigned short cbHeaderLength;
   unsigned long cbStructureLength;
   unsigned long UserOffset;
   unsigned short UserLength;
   unsigned long DomainOffset;
   unsigned short DomainLength;
   unsigned long PackedCredentialsOffset;
   unsigned short PackedCredentialsLength;
   unsigned long Flags;
   unsigned long PackageListOffset;
   unsigned short PackageListLength;
} SEC_WINNT_AUTH_IDENTITY_EX2, *PSEC_WINNT_AUTH_IDENTITY_EX2;
typedef struct _SEC_WINNT_AUTH_IDENTITY_W {
  unsigned short *User;
  unsigned long UserLength;
  unsigned short *Domain;
  unsigned long DomainLength;
  unsigned short *Password;
  unsigned long PasswordLength;
  unsigned long Flags;
} SEC_WINNT_AUTH_IDENTITY_W, *PSEC_WINNT_AUTH_IDENTITY_W;
typedef struct _SEC_WINNT_AUTH_IDENTITY_A {
  unsigned char *User;
  unsigned long UserLength;
  unsigned char *Domain;
  unsigned long DomainLength;
  unsigned char *Password;
  unsigned long PasswordLength;
  unsigned long Flags;
} SEC_WINNT_AUTH_IDENTITY_A, *PSEC_WINNT_AUTH_IDENTITY_A;
typedef struct _SEC_WINNT_AUTH_IDENTITY_EXW {
    unsigned long Version;
    unsigned long Length;
    unsigned short *User;
    unsigned long UserLength;
    unsigned short *Domain;
    unsigned long DomainLength;
    unsigned short *Password;
    unsigned long PasswordLength;
    unsigned long Flags;
    unsigned short *PackageList;
    unsigned long PackageListLength;
} SEC_WINNT_AUTH_IDENTITY_EXW, *PSEC_WINNT_AUTH_IDENTITY_EXW;
typedef struct _SEC_WINNT_AUTH_IDENTITY_EXA {
    unsigned long Version;
    unsigned long Length;
    unsigned char *User;
    unsigned long UserLength;
    unsigned char *Domain;
    unsigned long DomainLength;
    unsigned char *Password;
    unsigned long PasswordLength;
    unsigned long Flags;
    unsigned char * PackageList;
    unsigned long PackageListLength;
} SEC_WINNT_AUTH_IDENTITY_EXA, *PSEC_WINNT_AUTH_IDENTITY_EXA;
typedef union _SEC_WINNT_AUTH_IDENTITY_INFO {
    SEC_WINNT_AUTH_IDENTITY_EXW AuthIdExw;
    SEC_WINNT_AUTH_IDENTITY_EXA AuthIdExa;
    SEC_WINNT_AUTH_IDENTITY_A AuthId_a;
    SEC_WINNT_AUTH_IDENTITY_W AuthId_w;
    SEC_WINNT_AUTH_IDENTITY_EX2 AuthIdEx2;
} SEC_WINNT_AUTH_IDENTITY_INFO, *PSEC_WINNT_AUTH_IDENTITY_INFO;
                (SEC_WINNT_AUTH_IDENTITY_FLAGS_SSPIPFC_CREDPROV_DO_NOT_SAVE | \
                 SEC_WINNT_AUTH_IDENTITY_FLAGS_SSPIPFC_SAVE_CRED_CHECKED | \
                 SEC_WINNT_AUTH_IDENTITY_FLAGS_SSPIPFC_NO_CHECKBOX | \
                 SEC_WINNT_AUTH_IDENTITY_FLAGS_SSPIPFC_CREDPROV_DO_NOT_LOAD)
typedef PVOID PSEC_WINNT_AUTH_IDENTITY_OPAQUE;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
unsigned long
SEC_ENTRY
SspiPromptForCredentialsW(
    _In_ PCWSTR pszTargetName,
    _In_opt_ PCREDUI_INFOW pUiInfo,
    _In_ unsigned long dwAuthError,
    _In_ PCWSTR pszPackage,
    _In_opt_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE pInputAuthIdentity,
    _Outptr_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE* ppAuthIdentity,
    _Inout_opt_ int* pfSave,
    _In_ unsigned long dwFlags
    );
unsigned long
SEC_ENTRY
SspiPromptForCredentialsA(
    _In_ PCSTR pszTargetName,
    _In_opt_ PCREDUI_INFOA pUiInfo,
    _In_ unsigned long dwAuthError,
    _In_ PCSTR pszPackage,
    _In_opt_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE pInputAuthIdentity,
    _Outptr_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE* ppAuthIdentity,
    _Inout_opt_ int* pfSave,
    _In_ unsigned long dwFlags
    );
typedef struct _SEC_WINNT_AUTH_BYTE_VECTOR {
    unsigned long ByteArrayOffset;
    unsigned short ByteArrayLength;
} SEC_WINNT_AUTH_BYTE_VECTOR, *PSEC_WINNT_AUTH_BYTE_VECTOR;
typedef struct _SEC_WINNT_AUTH_DATA {
   GUID CredType;
   SEC_WINNT_AUTH_BYTE_VECTOR CredData;
} SEC_WINNT_AUTH_DATA, *PSEC_WINNT_AUTH_DATA;
typedef struct _SEC_WINNT_AUTH_PACKED_CREDENTIALS {
   unsigned short cbHeaderLength;
   unsigned short cbStructureLength;
   SEC_WINNT_AUTH_DATA AuthData;
} SEC_WINNT_AUTH_PACKED_CREDENTIALS, *PSEC_WINNT_AUTH_PACKED_CREDENTIALS;
EXTERN_C __declspec(selectany) const GUID SEC_WINNT_AUTH_DATA_TYPE_PASSWORD =
   { 0x28bfc32f, 0x10f6, 0x4738, { 0x98, 0xd1, 0x1a, 0xc0, 0x61, 0xdf, 0x71, 0x6a } };
EXTERN_C __declspec(selectany) const GUID SEC_WINNT_AUTH_DATA_TYPE_CERT =
   { 0x235f69ad, 0x73fb, 0x4dbc, { 0x82, 0x3, 0x6, 0x29, 0xe7, 0x39, 0x33, 0x9b } };
EXTERN_C __declspec(selectany) const GUID SEC_WINNT_AUTH_DATA_TYPE_CREDMAN_CERT =
   { 0x7cb72412, 0x1016, 0x491a, { 0x8c, 0x87, 0x4d, 0x2a, 0xa1, 0xb7, 0xdd, 0x3a } };
EXTERN_C __declspec(selectany) const GUID SEC_WINNT_AUTH_DATA_TYPE_NGC =
   { 0x10a47879, 0x5ebf, 0x4b85, { 0xbd, 0x8d, 0xc2, 0x1b, 0xb4, 0xf4, 0x9c, 0x8a } };
EXTERN_C __declspec(selectany) const GUID SEC_WINNT_AUTH_DATA_TYPE_FIDO =
{ 0x32e8f8d7, 0x7871, 0x4bcc, { 0x83, 0xc5, 0x46, 0xf, 0x66, 0xc6, 0x13, 0x5c } };
EXTERN_C __declspec(selectany) const GUID SEC_WINNT_AUTH_DATA_TYPE_KEYTAB =
{ 0xd587aae8, 0xf78f, 0x4455, { 0xa1, 0x12, 0xc9, 0x34, 0xbe, 0xee, 0x7c, 0xe1 } };
typedef struct _SEC_WINNT_AUTH_DATA_PASSWORD {
   SEC_WINNT_AUTH_BYTE_VECTOR UnicodePassword;
} SEC_WINNT_AUTH_DATA_PASSWORD, PSEC_WINNT_AUTH_DATA_PASSWORD;
EXTERN_C __declspec(selectany) const GUID SEC_WINNT_AUTH_DATA_TYPE_CSP_DATA =
   { 0x68fd9879, 0x79c, 0x4dfe, { 0x82, 0x81, 0x57, 0x8a, 0xad, 0xc1, 0xc1, 0x0 } };
EXTERN_C __declspec(selectany) const GUID SEC_WINNT_AUTH_DATA_TYPE_SMARTCARD_CONTEXTS =
   { 0xb86c4ff3, 0x49d7, 0x4dc4, { 0xb5, 0x60, 0xb1, 0x16, 0x36, 0x85, 0xb2, 0x36 } };
typedef struct _SEC_WINNT_AUTH_CERTIFICATE_DATA {
   unsigned short cbHeaderLength;
   unsigned short cbStructureLength;
   SEC_WINNT_AUTH_BYTE_VECTOR Certificate;
} SEC_WINNT_AUTH_CERTIFICATE_DATA, *PSEC_WINNT_AUTH_CERTIFICATE_DATA;
typedef struct _SEC_WINNT_AUTH_NGC_DATA {
   LUID LogonId;
   unsigned long Flags;
   SEC_WINNT_AUTH_BYTE_VECTOR CspInfo;
   SEC_WINNT_AUTH_BYTE_VECTOR UserIdKeyAuthTicket;
   SEC_WINNT_AUTH_BYTE_VECTOR DecryptionKeyName;
   SEC_WINNT_AUTH_BYTE_VECTOR DecryptionKeyAuthTicket;
} SEC_WINNT_AUTH_NGC_DATA, *PSEC_WINNT_AUTH_NGC_DATA;
typedef struct _SEC_WINNT_AUTH_DATA_TYPE_SMARTCARD_CONTEXTS_DATA
{
    PVOID pcc;
    PVOID hProv;
    LPWSTR pwszECDHKeyName;
} SEC_WINNT_AUTH_DATA_TYPE_SMARTCARD_CONTEXTS_DATA, *PSEC_WINNT_AUTH_DATA_TYPE_SMARTCARD_CONTEXTS_DATA;
typedef struct _SEC_WINNT_AUTH_FIDO_DATA {
   unsigned short cbHeaderLength;
   unsigned short cbStructureLength;
   SEC_WINNT_AUTH_BYTE_VECTOR Secret;
   SEC_WINNT_AUTH_BYTE_VECTOR NewSecret;
   SEC_WINNT_AUTH_BYTE_VECTOR EncryptedNewSecret;
   SEC_WINNT_AUTH_BYTE_VECTOR NetworkLogonBuffer;
   ULONG64 ulSignatureCount;
} SEC_WINNT_AUTH_FIDO_DATA, *PSEC_WINNT_AUTH_FIDO_DATA;
typedef struct _SEC_WINNT_CREDUI_CONTEXT_VECTOR
{
   ULONG CredUIContextArrayOffset;
   USHORT CredUIContextCount;
} SEC_WINNT_CREDUI_CONTEXT_VECTOR, *PSEC_WINNT_CREDUI_CONTEXT_VECTOR;
typedef struct _SEC_WINNT_AUTH_SHORT_VECTOR
{
    ULONG ShortArrayOffset;
    USHORT ShortArrayCount;
} SEC_WINNT_AUTH_SHORT_VECTOR, *PSEC_WINNT_AUTH_SHORT_VECTOR;
SECURITY_STATUS
SEC_ENTRY
SspiGetCredUIContext(
   _In_ HANDLE ContextHandle,
   _In_ GUID* CredType,
   _In_opt_ LUID* LogonId,
   _Outptr_ PSEC_WINNT_CREDUI_CONTEXT_VECTOR* CredUIContexts,
   _Out_opt_ HANDLE* TokenHandle
   );
SECURITY_STATUS
SEC_ENTRY
SspiUpdateCredentials(
   _In_ HANDLE ContextHandle,
   _In_ GUID* CredType,
   _In_ ULONG FlatCredUIContextLength,
   _In_reads_bytes_(FlatCredUIContextLength) PUCHAR FlatCredUIContext
   );
typedef struct _CREDUIWIN_MARSHALED_CONTEXT
{
    GUID StructureType;
    USHORT cbHeaderLength;
    LUID LogonId;
    GUID MarshaledDataType;
    ULONG MarshaledDataOffset;
    USHORT MarshaledDataLength;
} CREDUIWIN_MARSHALED_CONTEXT, *PCREDUIWIN_MARSHALED_CONTEXT;
typedef struct _SEC_WINNT_CREDUI_CONTEXT
{
    USHORT cbHeaderLength;
    HANDLE CredUIContextHandle;
    PCREDUI_INFOW UIInfo;
    ULONG dwAuthError;
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE pInputAuthIdentity;
    PUNICODE_STRING TargetName;
} SEC_WINNT_CREDUI_CONTEXT, *PSEC_WINNT_CREDUI_CONTEXT;
EXTERN_C __declspec(selectany) const GUID CREDUIWIN_STRUCTURE_TYPE_SSPIPFC =
{ 0x3c3e93d9, 0xd96b, 0x49b5, { 0x94, 0xa7, 0x45, 0x85, 0x92, 0x8, 0x83, 0x37 } };
EXTERN_C __declspec(selectany) const GUID SSPIPFC_STRUCTURE_TYPE_CREDUI_CONTEXT =
{ 0xc2fffe6f, 0x503d, 0x4c3d, { 0xa9, 0x5e, 0xbc, 0xe8, 0x21, 0x21, 0x3d, 0x44 } };
typedef struct _SEC_WINNT_AUTH_PACKED_CREDENTIALS_EX {
   unsigned short cbHeaderLength;
   unsigned long Flags;
   SEC_WINNT_AUTH_BYTE_VECTOR PackedCredentials;
   SEC_WINNT_AUTH_SHORT_VECTOR PackageList;
} SEC_WINNT_AUTH_PACKED_CREDENTIALS_EX, *PSEC_WINNT_AUTH_PACKED_CREDENTIALS_EX;
SECURITY_STATUS
SEC_ENTRY
SspiUnmarshalCredUIContext(
    _In_reads_bytes_(MarshaledCredUIContextLength) PUCHAR MarshaledCredUIContext,
    _In_ ULONG MarshaledCredUIContextLength,
    _Outptr_ PSEC_WINNT_CREDUI_CONTEXT* CredUIContext
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
SECURITY_STATUS
SEC_ENTRY
SspiPrepareForCredRead(
    _In_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity,
    _In_ PCWSTR pszTargetName,
    _Out_ PULONG pCredmanCredentialType,
    _Outptr_ PCWSTR* ppszCredmanTargetName
    );
SECURITY_STATUS
SEC_ENTRY
SspiPrepareForCredWrite(
    _In_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity,
    _In_opt_ PCWSTR pszTargetName,
    _Out_ PULONG pCredmanCredentialType,
    _Outptr_ PCWSTR* ppszCredmanTargetName,
    _Outptr_ PCWSTR* ppszCredmanUserName,
    _Outptr_result_bytebuffer_(*pCredentialBlobSize) PUCHAR *ppCredentialBlob,
    _Out_ PULONG pCredentialBlobSize
    );
SECURITY_STATUS
SEC_ENTRY
SspiEncryptAuthIdentity(
    _Inout_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData
    );
SECURITY_STATUS
SEC_ENTRY
SspiEncryptAuthIdentityEx(
    _In_ ULONG Options,
    _Inout_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData
    );
SECURITY_STATUS
SEC_ENTRY
SspiDecryptAuthIdentity(
    _Inout_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE EncryptedAuthData
    );
SECURITY_STATUS
SEC_ENTRY
SspiDecryptAuthIdentityEx(
    _In_ ULONG Options,
    _Inout_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE EncryptedAuthData
    );
BOOLEAN
SEC_ENTRY
SspiIsAuthIdentityEncrypted(
    _In_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE EncryptedAuthData
    );
SECURITY_STATUS
SEC_ENTRY
SspiEncodeAuthIdentityAsStrings(
    _In_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE pAuthIdentity,
    _Outptr_result_maybenull_ PCWSTR* ppszUserName,
    _Outptr_result_maybenull_ PCWSTR* ppszDomainName,
    _Outptr_opt_result_maybenull_ PCWSTR* ppszPackedCredentialsString
    );
SECURITY_STATUS
SEC_ENTRY
SspiValidateAuthIdentity(
    _In_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData
    );
SECURITY_STATUS
SEC_ENTRY
SspiCopyAuthIdentity(
    _In_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData,
    _Outptr_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE* AuthDataCopy
    );
VOID
SEC_ENTRY
SspiFreeAuthIdentity(
    _In_opt_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData
    );
VOID
SEC_ENTRY
SspiZeroAuthIdentity(
    _In_opt_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData
    );
VOID
SEC_ENTRY
SspiLocalFree(
    _In_opt_ PVOID DataBuffer
    );
SECURITY_STATUS
SEC_ENTRY
SspiEncodeStringsAsAuthIdentity(
    _In_opt_ PCWSTR pszUserName,
    _In_opt_ PCWSTR pszDomainName,
    _In_opt_ PCWSTR pszPackedCredentialsString,
    _Outptr_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE* ppAuthIdentity
    );
SECURITY_STATUS
SEC_ENTRY
SspiCompareAuthIdentities(
    _In_opt_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity1,
    _In_opt_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity2,
    _Out_opt_ PBOOLEAN SameSuppliedUser,
    _Out_opt_ PBOOLEAN SameSuppliedIdentity
    );
SECURITY_STATUS
SEC_ENTRY
SspiMarshalAuthIdentity(
    _In_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity,
    _Out_ unsigned long* AuthIdentityLength,
    _Outptr_result_bytebuffer_(*AuthIdentityLength) char** AuthIdentityByteArray
    );
SECURITY_STATUS
SEC_ENTRY
SspiUnmarshalAuthIdentity(
    _In_ unsigned long AuthIdentityLength,
    _In_reads_bytes_(AuthIdentityLength) char* AuthIdentityByteArray,
    _Outptr_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE* ppAuthIdentity
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
BOOLEAN
SEC_ENTRY
SspiIsPromptingNeeded(
    _In_ unsigned long ErrorOrNtStatus
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
SECURITY_STATUS
SEC_ENTRY
SspiGetTargetHostName(
    _In_ PCWSTR pszTargetName,
    _Outptr_ PWSTR* pszHostName
    );
SECURITY_STATUS
SEC_ENTRY
SspiExcludePackage(
    _In_opt_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity,
    _In_ PCWSTR pszPackageName,
    _Outptr_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE* ppNewAuthIdentity
    );
typedef struct _SECURITY_PACKAGE_OPTIONS {
    unsigned long Size;
    unsigned long Type;
    unsigned long Flags;
    unsigned long SignatureSize;
    void * Signature;
} SECURITY_PACKAGE_OPTIONS, * PSECURITY_PACKAGE_OPTIONS;
SECURITY_STATUS
SEC_ENTRY
AddSecurityPackageA(
    _In_ LPSTR pszPackageName,
    _In_opt_ PSECURITY_PACKAGE_OPTIONS pOptions
    );
SECURITY_STATUS
SEC_ENTRY
AddSecurityPackageW(
    _In_ LPWSTR pszPackageName,
    _In_opt_ PSECURITY_PACKAGE_OPTIONS pOptions
    );
SECURITY_STATUS
SEC_ENTRY
DeleteSecurityPackageA(
    _In_ LPSTR pszPackageName
    );
SECURITY_STATUS
SEC_ENTRY
DeleteSecurityPackageW(
    _In_ LPWSTR pszPackageName
    );
#endif
#pragma endregion
}
