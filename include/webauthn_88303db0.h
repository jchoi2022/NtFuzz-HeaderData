       
#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
extern "C" {
#include <guiddef.h>
typedef struct _WEBAUTHN_RP_ENTITY_INFORMATION {
    DWORD dwVersion;
    PCWSTR pwszId;
    PCWSTR pwszName;
    PCWSTR pwszIcon;
} WEBAUTHN_RP_ENTITY_INFORMATION, *PWEBAUTHN_RP_ENTITY_INFORMATION;
typedef const WEBAUTHN_RP_ENTITY_INFORMATION *PCWEBAUTHN_RP_ENTITY_INFORMATION;
typedef struct _WEBAUTHN_USER_ENTITY_INFORMATION {
    DWORD dwVersion;
    DWORD cbId;
    _Field_size_bytes_(cbId)
    PBYTE pbId;
    PCWSTR pwszName;
    PCWSTR pwszIcon;
    PCWSTR pwszDisplayName;
} WEBAUTHN_USER_ENTITY_INFORMATION, *PWEBAUTHN_USER_ENTITY_INFORMATION;
typedef const WEBAUTHN_USER_ENTITY_INFORMATION *PCWEBAUTHN_USER_ENTITY_INFORMATION;
typedef struct _WEBAUTHN_CLIENT_DATA {
    DWORD dwVersion;
    DWORD cbClientDataJSON;
    _Field_size_bytes_(cbClientDataJSON)
    PBYTE pbClientDataJSON;
    LPCWSTR pwszHashAlgId;
} WEBAUTHN_CLIENT_DATA, *PWEBAUTHN_CLIENT_DATA;
typedef const WEBAUTHN_CLIENT_DATA *PCWEBAUTHN_CLIENT_DATA;
typedef struct _WEBAUTHN_COSE_CREDENTIAL_PARAMETER {
    DWORD dwVersion;
    LPCWSTR pwszCredentialType;
    LONG lAlg;
} WEBAUTHN_COSE_CREDENTIAL_PARAMETER, *PWEBAUTHN_COSE_CREDENTIAL_PARAMETER;
typedef const WEBAUTHN_COSE_CREDENTIAL_PARAMETER *PCWEBAUTHN_COSE_CREDENTIAL_PARAMETER;
typedef struct _WEBAUTHN_COSE_CREDENTIAL_PARAMETERS {
    DWORD cCredentialParameters;
    _Field_size_(cCredentialParameters)
    PWEBAUTHN_COSE_CREDENTIAL_PARAMETER pCredentialParameters;
} WEBAUTHN_COSE_CREDENTIAL_PARAMETERS, *PWEBAUTHN_COSE_CREDENTIAL_PARAMETERS;
typedef const WEBAUTHN_COSE_CREDENTIAL_PARAMETERS *PCWEBAUTHN_COSE_CREDENTIAL_PARAMETERS;
typedef struct _WEBAUTHN_CREDENTIAL {
    DWORD dwVersion;
    DWORD cbId;
    _Field_size_bytes_(cbId)
    PBYTE pbId;
    LPCWSTR pwszCredentialType;
} WEBAUTHN_CREDENTIAL, *PWEBAUTHN_CREDENTIAL;
typedef const WEBAUTHN_CREDENTIAL *PCWEBAUTHN_CREDENTIAL;
typedef struct _WEBAUTHN_CREDENTIALS {
    DWORD cCredentials;
    _Field_size_(cCredentials)
    PWEBAUTHN_CREDENTIAL pCredentials;
} WEBAUTHN_CREDENTIALS, *PWEBAUTHN_CREDENTIALS;
typedef const WEBAUTHN_CREDENTIALS *PCWEBAUTHN_CREDENTIALS;
typedef struct _WEBAUTHN_CREDENTIAL_EX {
    DWORD dwVersion;
    DWORD cbId;
    _Field_size_bytes_(cbId)
    PBYTE pbId;
    LPCWSTR pwszCredentialType;
    DWORD dwTransports;
} WEBAUTHN_CREDENTIAL_EX, *PWEBAUTHN_CREDENTIAL_EX;
typedef const WEBAUTHN_CREDENTIAL_EX *PCWEBAUTHN_CREDENTIAL_EX;
typedef struct _WEBAUTHN_CREDENTIAL_LIST {
    DWORD cCredentials;
    _Field_size_(cCredentials)
    PWEBAUTHN_CREDENTIAL_EX *ppCredentials;
} WEBAUTHN_CREDENTIAL_LIST, *PWEBAUTHN_CREDENTIAL_LIST;
typedef const WEBAUTHN_CREDENTIAL_LIST *PCWEBAUTHN_CREDENTIAL_LIST;
typedef struct _WEBAUTHN_EXTENSION {
    LPCWSTR pwszExtensionIdentifier;
    DWORD cbExtension;
    PVOID pvExtension;
} WEBAUTHN_EXTENSION, *PWEBAUTHN_EXTENSION;
typedef const WEBAUTHN_EXTENSION *PCWEBAUTHN_EXTENSION;
typedef struct _WEBAUTHN_EXTENSIONS {
    DWORD cExtensions;
    _Field_size_(cExtensions)
    PWEBAUTHN_EXTENSION pExtensions;
} WEBAUTHN_EXTENSIONS, *PWEBAUTHN_EXTENSIONS;
typedef const WEBAUTHN_EXTENSIONS *PCWEBAUTHN_EXTENSIONS;
typedef struct _WEBAUTHN_AUTHENTICATOR_MAKE_CREDENTIAL_OPTIONS {
    DWORD dwVersion;
    DWORD dwTimeoutMilliseconds;
    WEBAUTHN_CREDENTIALS CredentialList;
    WEBAUTHN_EXTENSIONS Extensions;
    DWORD dwAuthenticatorAttachment;
    BOOL bRequireResidentKey;
    DWORD dwUserVerificationRequirement;
    DWORD dwAttestationConveyancePreference;
    DWORD dwFlags;
    GUID *pCancellationId;
    PWEBAUTHN_CREDENTIAL_LIST pExcludeCredentialList;
} WEBAUTHN_AUTHENTICATOR_MAKE_CREDENTIAL_OPTIONS, *PWEBAUTHN_AUTHENTICATOR_MAKE_CREDENTIAL_OPTIONS;
typedef const WEBAUTHN_AUTHENTICATOR_MAKE_CREDENTIAL_OPTIONS *PCWEBAUTHN_AUTHENTICATOR_MAKE_CREDENTIAL_OPTIONS;
typedef struct _WEBAUTHN_AUTHENTICATOR_GET_ASSERTION_OPTIONS {
    DWORD dwVersion;
    DWORD dwTimeoutMilliseconds;
    WEBAUTHN_CREDENTIALS CredentialList;
    WEBAUTHN_EXTENSIONS Extensions;
    DWORD dwAuthenticatorAttachment;
    DWORD dwUserVerificationRequirement;
    DWORD dwFlags;
    PCWSTR pwszU2fAppId;
    BOOL *pbU2fAppId;
    GUID *pCancellationId;
    PWEBAUTHN_CREDENTIAL_LIST pAllowCredentialList;
} WEBAUTHN_AUTHENTICATOR_GET_ASSERTION_OPTIONS, *PWEBAUTHN_AUTHENTICATOR_GET_ASSERTION_OPTIONS;
typedef const WEBAUTHN_AUTHENTICATOR_GET_ASSERTION_OPTIONS *PCWEBAUTHN_AUTHENTICATOR_GET_ASSERTION_OPTIONS;
typedef struct _WEBAUTHN_X5C {
    DWORD cbData;
    _Field_size_bytes_(cbData)
    PBYTE pbData;
} WEBAUTHN_X5C, *PWEBAUTHN_X5C;
typedef struct _WEBAUTHN_COMMON_ATTESTATION {
    DWORD dwVersion;
    PCWSTR pwszAlg;
    LONG lAlg;
    DWORD cbSignature;
    _Field_size_bytes_(cbSignature)
    PBYTE pbSignature;
    DWORD cX5c;
    _Field_size_(cX5c)
    PWEBAUTHN_X5C pX5c;
    PCWSTR pwszVer;
    DWORD cbCertInfo;
    _Field_size_bytes_(cbCertInfo)
    PBYTE pbCertInfo;
    DWORD cbPubArea;
    _Field_size_bytes_(cbPubArea)
    PBYTE pbPubArea;
} WEBAUTHN_COMMON_ATTESTATION, *PWEBAUTHN_COMMON_ATTESTATION;
typedef const WEBAUTHN_COMMON_ATTESTATION *PCWEBAUTHN_COMMON_ATTESTATION;
typedef struct _WEBAUTHN_CREDENTIAL_ATTESTATION {
    DWORD dwVersion;
    PCWSTR pwszFormatType;
    DWORD cbAuthenticatorData;
    _Field_size_bytes_(cbAuthenticatorData)
    PBYTE pbAuthenticatorData;
    DWORD cbAttestation;
    _Field_size_bytes_(cbAttestation)
    PBYTE pbAttestation;
    DWORD dwAttestationDecodeType;
    PVOID pvAttestationDecode;
    DWORD cbAttestationObject;
    _Field_size_bytes_(cbAttestationObject)
    PBYTE pbAttestationObject;
    DWORD cbCredentialId;
    _Field_size_bytes_(cbCredentialId)
    PBYTE pbCredentialId;
    WEBAUTHN_EXTENSIONS Extensions;
    DWORD dwUsedTransport;
} WEBAUTHN_CREDENTIAL_ATTESTATION, *PWEBAUTHN_CREDENTIAL_ATTESTATION;
typedef const WEBAUTHN_CREDENTIAL_ATTESTATION *PCWEBAUTHN_CREDENTIAL_ATTESTATION;
typedef struct _WEBAUTHN_ASSERTION {
    DWORD dwVersion;
    DWORD cbAuthenticatorData;
    _Field_size_bytes_(cbAuthenticatorData)
    PBYTE pbAuthenticatorData;
    DWORD cbSignature;
    _Field_size_bytes_(cbSignature)
    PBYTE pbSignature;
    WEBAUTHN_CREDENTIAL Credential;
    DWORD cbUserId;
    _Field_size_bytes_(cbUserId)
    PBYTE pbUserId;
} WEBAUTHN_ASSERTION, *PWEBAUTHN_ASSERTION;
typedef const WEBAUTHN_ASSERTION *PCWEBAUTHN_ASSERTION;
DWORD
WINAPI
WebAuthNGetApiVersionNumber();
HRESULT
WINAPI
WebAuthNIsUserVerifyingPlatformAuthenticatorAvailable(
    _Out_ BOOL *pbIsUserVerifyingPlatformAuthenticatorAvailable);
HRESULT
WINAPI
WebAuthNAuthenticatorMakeCredential(
    _In_ HWND hWnd,
    _In_ PCWEBAUTHN_RP_ENTITY_INFORMATION pRpInformation,
    _In_ PCWEBAUTHN_USER_ENTITY_INFORMATION pUserInformation,
    _In_ PCWEBAUTHN_COSE_CREDENTIAL_PARAMETERS pPubKeyCredParams,
    _In_ PCWEBAUTHN_CLIENT_DATA pWebAuthNClientData,
    _In_opt_ PCWEBAUTHN_AUTHENTICATOR_MAKE_CREDENTIAL_OPTIONS pWebAuthNMakeCredentialOptions,
    _Outptr_result_maybenull_ PWEBAUTHN_CREDENTIAL_ATTESTATION *ppWebAuthNCredentialAttestation);
HRESULT
WINAPI
WebAuthNAuthenticatorGetAssertion(
    _In_ HWND hWnd,
    _In_ LPCWSTR pwszRpId,
    _In_ PCWEBAUTHN_CLIENT_DATA pWebAuthNClientData,
    _In_opt_ PCWEBAUTHN_AUTHENTICATOR_GET_ASSERTION_OPTIONS pWebAuthNGetAssertionOptions,
    _Outptr_result_maybenull_ PWEBAUTHN_ASSERTION *ppWebAuthNAssertion);
void
WINAPI
WebAuthNFreeCredentialAttestation(
    _In_opt_ PWEBAUTHN_CREDENTIAL_ATTESTATION pWebAuthNCredentialAttestation);
void
WINAPI
WebAuthNFreeAssertion(
    _In_ PWEBAUTHN_ASSERTION pWebAuthNAssertion);
HRESULT
WINAPI
WebAuthNGetCancellationId(
    _Out_ GUID* pCancellationId);
HRESULT
WINAPI
WebAuthNCancelCurrentOperation(
    _In_ const GUID* pCancellationId);
PCWSTR
WINAPI
WebAuthNGetErrorName(
    _In_ HRESULT hr);
HRESULT
WINAPI
WebAuthNGetW3CExceptionDOMError(
    _In_ HRESULT hr);
}
#endif
#pragma endregion
