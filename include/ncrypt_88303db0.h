#include <winapifamily.h>
extern "C" {
typedef LONG SECURITY_STATUS;
#include <bcrypt.h>
typedef ULONG_PTR HCRYPTPROV;
typedef ULONG_PTR HCRYPTKEY;
typedef ULONG_PTR HCRYPTHASH;
typedef LPVOID (WINAPI *PFN_NCRYPT_ALLOC)(
    _In_ SIZE_T cbSize
    );
typedef VOID (WINAPI *PFN_NCRYPT_FREE)(
    _In_ LPVOID pv
    );
typedef struct NCRYPT_ALLOC_PARA {
    DWORD cbSize;
    PFN_NCRYPT_ALLOC pfnAlloc;
    PFN_NCRYPT_FREE pfnFree;
} NCRYPT_ALLOC_PARA;
typedef BCryptBuffer NCryptBuffer;
typedef BCryptBuffer* PNCryptBuffer;
typedef BCryptBufferDesc NCryptBufferDesc;
typedef BCryptBufferDesc* PNCryptBufferDesc;
typedef ULONG_PTR NCRYPT_HANDLE;
typedef ULONG_PTR NCRYPT_PROV_HANDLE;
typedef ULONG_PTR NCRYPT_KEY_HANDLE;
typedef ULONG_PTR NCRYPT_HASH_HANDLE;
typedef ULONG_PTR NCRYPT_SECRET_HANDLE;
typedef _Struct_size_bytes_(cbSize + cbIV + cbOtherInfo)
struct _NCRYPT_CIPHER_PADDING_INFO
{
    ULONG cbSize;
    DWORD dwFlags;
    _Field_size_bytes_(cbIV)
    PUCHAR pbIV;
    ULONG cbIV;
    _Field_size_bytes_(cbOtherInfo)
    PUCHAR pbOtherInfo;
    ULONG cbOtherInfo;
} NCRYPT_CIPHER_PADDING_INFO, *PNCRYPT_CIPHER_PADDING_INFO;
typedef struct _NCRYPT_PLATFORM_ATTEST_PADDING_INFO {
    ULONG magic;
    ULONG pcrMask;
} NCRYPT_PLATFORM_ATTEST_PADDING_INFO;
typedef struct _NCRYPT_KEY_ATTEST_PADDING_INFO {
    ULONG magic;
    PUCHAR pbKeyBlob;
    ULONG cbKeyBlob;
    PUCHAR pbKeyAuth;
    ULONG cbKeyAuth;
} NCRYPT_KEY_ATTEST_PADDING_INFO;
typedef struct _NCRYPT_ISOLATED_KEY_ATTESTED_ATTRIBUTES
{
   ULONG Version;
   ULONG Flags;
   ULONG cbPublicKeyBlob;
} NCRYPT_ISOLATED_KEY_ATTESTED_ATTRIBUTES, *PNCRYPT_ISOLATED_KEY_ATTESTED_ATTRIBUTES;
typedef struct _NCRYPT_VSM_KEY_ATTESTATION_STATEMENT
{
    ULONG Magic;
    ULONG Version;
    ULONG cbSignature;
    ULONG cbReport;
    ULONG cbAttributes;
} NCRYPT_VSM_KEY_ATTESTATION_STATEMENT, *PNCRYPT_VSM_KEY_ATTESTATION_STATEMENT;
#pragma warning(disable:4214)
typedef struct _NCRYPT_VSM_KEY_ATTESTATION_CLAIM_RESTRICTIONS
{
    ULONG Version;
    ULONGLONG TrustletId;
    ULONG MinSvn;
    ULONG FlagsMask;
    ULONG FlagsExpected;
    ULONG AllowDebugging : 1;
    ULONG Reserved : 31;
} NCRYPT_VSM_KEY_ATTESTATION_CLAIM_RESTRICTIONS, *PNCRYPT_VSM_KEY_ATTESTATION_CLAIM_RESTRICTIONS;
#pragma warning(default:4214)
#pragma warning(disable:4214)
typedef struct _NCRYPT_EXPORTED_ISOLATED_KEY_HEADER
{
    ULONG Version;
    ULONG KeyUsage;
    ULONG PerBootKey : 1;
    ULONG Reserved : 31;
    ULONG cbAlgName;
    ULONG cbNonce;
    ULONG cbAuthTag;
    ULONG cbWrappingKey;
    ULONG cbIsolatedKey;
} NCRYPT_EXPORTED_ISOLATED_KEY_HEADER, *PNCRYPT_EXPORTED_ISOLATED_KEY_HEADER;
#pragma warning(default:4214)
typedef struct _NCRYPT_EXPORTED_ISOLATED_KEY_ENVELOPE
{
    NCRYPT_EXPORTED_ISOLATED_KEY_HEADER Header;
} NCRYPT_EXPORTED_ISOLATED_KEY_ENVELOPE, *PNCRYPT_EXPORTED_ISOLATED_KEY_ENVELOPE;
typedef struct __NCRYPT_PCP_TPM_WEB_AUTHN_ATTESTATION_STATEMENT
{
    UINT32 Magic;
    UINT32 Version;
    UINT32 HeaderSize;
    UINT32 cbCertifyInfo;
    UINT32 cbSignature;
    UINT32 cbTpmPublic;
} NCRYPT_PCP_TPM_WEB_AUTHN_ATTESTATION_STATEMENT,*PNCRYPT_PCP_TPM_WEB_AUTHN_ATTESTATION_STATEMENT;
typedef struct _NCRYPT_TPM_PLATFORM_ATTESTATION_STATEMENT
{
    ULONG Magic;
    ULONG Version;
    ULONG pcrAlg;
    ULONG cbSignature;
    ULONG cbQuote;
    ULONG cbPcrs;
} NCRYPT_TPM_PLATFORM_ATTESTATION_STATEMENT, *PNCRYPT_TPM_PLATFORM_ATTESTATION_STATEMENT;
_Check_return_
SECURITY_STATUS
WINAPI
NCryptOpenStorageProvider(
    _Out_ NCRYPT_PROV_HANDLE *phProvider,
    _In_opt_ LPCWSTR pszProviderName,
    _In_ DWORD dwFlags);
typedef struct _NCryptAlgorithmName
{
    LPWSTR pszName;
    DWORD dwClass;
    DWORD dwAlgOperations;
    DWORD dwFlags;
} NCryptAlgorithmName;
_Check_return_
SECURITY_STATUS
WINAPI
NCryptEnumAlgorithms(
    _In_ NCRYPT_PROV_HANDLE hProvider,
    _In_ DWORD dwAlgOperations,
    _Out_ DWORD * pdwAlgCount,
    _Outptr_result_buffer_(*pdwAlgCount) NCryptAlgorithmName **ppAlgList,
    _In_ DWORD dwFlags);
_Check_return_
SECURITY_STATUS
WINAPI
NCryptIsAlgSupported(
    _In_ NCRYPT_PROV_HANDLE hProvider,
    _In_ LPCWSTR pszAlgId,
    _In_ DWORD dwFlags);
typedef struct NCryptKeyName
{
    LPWSTR pszName;
    LPWSTR pszAlgid;
    DWORD dwLegacyKeySpec;
    DWORD dwFlags;
} NCryptKeyName;
_Check_return_
SECURITY_STATUS
WINAPI
NCryptEnumKeys(
    _In_ NCRYPT_PROV_HANDLE hProvider,
    _In_opt_ LPCWSTR pszScope,
    _Outptr_ NCryptKeyName **ppKeyName,
    _Inout_ PVOID * ppEnumState,
    _In_ DWORD dwFlags);
typedef struct NCryptProviderName
{
    LPWSTR pszName;
    LPWSTR pszComment;
} NCryptProviderName;
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_
SECURITY_STATUS
WINAPI
NCryptEnumStorageProviders(
    _Out_ DWORD * pdwProviderCount,
    _Outptr_result_buffer_(*pdwProviderCount) NCryptProviderName **ppProviderList,
    _In_ DWORD dwFlags);
#endif
#pragma endregion
SECURITY_STATUS
WINAPI
NCryptFreeBuffer(
    _Pre_notnull_ PVOID pvInput);
_Check_return_
SECURITY_STATUS
WINAPI
NCryptOpenKey(
    _In_ NCRYPT_PROV_HANDLE hProvider,
    _Out_ NCRYPT_KEY_HANDLE *phKey,
    _In_ LPCWSTR pszKeyName,
    _In_opt_ DWORD dwLegacyKeySpec,
    _In_ DWORD dwFlags);
_Check_return_
SECURITY_STATUS
WINAPI
NCryptCreatePersistedKey(
    _In_ NCRYPT_PROV_HANDLE hProvider,
    _Out_ NCRYPT_KEY_HANDLE *phKey,
    _In_ LPCWSTR pszAlgId,
    _In_opt_ LPCWSTR pszKeyName,
    _In_ DWORD dwLegacyKeySpec,
    _In_ DWORD dwFlags);
                                                           L"PCP_TPM_IFX_RSA_KEYGEN_VULNERABILITY"
typedef struct __NCRYPT_UI_POLICY
{
    DWORD dwVersion;
    DWORD dwFlags;
    LPCWSTR pszCreationTitle;
    LPCWSTR pszFriendlyName;
    LPCWSTR pszDescription;
} NCRYPT_UI_POLICY;
typedef struct __NCRYPT_KEY_ACCESS_POLICY_BLOB
{
 DWORD dwVersion;
 DWORD dwPolicyFlags;
 DWORD cbUserSid;
    DWORD cbApplicationSid;
}NCRYPT_KEY_ACCESS_POLICY_BLOB;
typedef struct __NCRYPT_SUPPORTED_LENGTHS
{
    DWORD dwMinLength;
    DWORD dwMaxLength;
    DWORD dwIncrement;
    DWORD dwDefaultLength;
} NCRYPT_SUPPORTED_LENGTHS;
typedef struct __NCRYPT_PCP_HMAC_AUTH_SIGNATURE_INFO
{
    DWORD dwVersion;
    INT32 iExpiration;
    BYTE pabNonce[32];
    BYTE pabPolicyRef[32];
    BYTE pabHMAC[32];
} NCRYPT_PCP_HMAC_AUTH_SIGNATURE_INFO;
typedef struct __NCRYPT_PCP_TPM_FW_VERSION_INFO
{
    UINT16 major1;
    UINT16 major2;
    UINT16 minor1;
    UINT16 minor2;
} NCRYPT_PCP_TPM_FW_VERSION_INFO;
typedef struct __NCRYPT_PCP_RAW_POLICYDIGEST
{
    DWORD dwVersion;
    DWORD cbDigest;
} NCRYPT_PCP_RAW_POLICYDIGEST_INFO;
_Check_return_
_Success_( return == 0 )
SECURITY_STATUS
WINAPI
NCryptGetProperty(
    _In_ NCRYPT_HANDLE hObject,
    _In_ LPCWSTR pszProperty,
    _Out_writes_bytes_to_opt_(cbOutput, *pcbResult) PBYTE pbOutput,
    _In_ DWORD cbOutput,
    _Out_ DWORD * pcbResult,
    _In_ DWORD dwFlags);
_Check_return_
SECURITY_STATUS
WINAPI
NCryptSetProperty(
    _In_ NCRYPT_HANDLE hObject,
    _In_ LPCWSTR pszProperty,
    _In_reads_bytes_(cbInput) PBYTE pbInput,
    _In_ DWORD cbInput,
    _In_ DWORD dwFlags);
_Check_return_
SECURITY_STATUS
WINAPI
NCryptFinalizeKey(
    _In_ NCRYPT_KEY_HANDLE hKey,
    _In_ DWORD dwFlags);
_Check_return_
SECURITY_STATUS
WINAPI
NCryptEncrypt(
    _In_ NCRYPT_KEY_HANDLE hKey,
    _In_reads_bytes_opt_(cbInput) PBYTE pbInput,
    _In_ DWORD cbInput,
    _In_opt_ VOID *pPaddingInfo,
    _Out_writes_bytes_to_opt_(cbOutput, *pcbResult) PBYTE pbOutput,
    _In_ DWORD cbOutput,
    _Out_ DWORD * pcbResult,
    _In_ DWORD dwFlags);
_Check_return_
SECURITY_STATUS
WINAPI
NCryptDecrypt(
    _In_ NCRYPT_KEY_HANDLE hKey,
    _In_reads_bytes_opt_(cbInput) PBYTE pbInput,
    _In_ DWORD cbInput,
    _In_opt_ VOID *pPaddingInfo,
    _Out_writes_bytes_to_opt_(cbOutput, *pcbResult) PBYTE pbOutput,
    _In_ DWORD cbOutput,
    _Out_ DWORD * pcbResult,
    _In_ DWORD dwFlags);
typedef struct _NCRYPT_KEY_BLOB_HEADER
{
    ULONG cbSize;
    ULONG dwMagic;
    ULONG cbAlgName;
    ULONG cbKeyData;
} NCRYPT_KEY_BLOB_HEADER, *PNCRYPT_KEY_BLOB_HEADER;
typedef struct NCRYPT_TPM_LOADABLE_KEY_BLOB_HEADER
{
    DWORD magic;
    DWORD cbHeader;
    DWORD cbPublic;
    DWORD cbPrivate;
    DWORD cbName;
} NCRYPT_TPM_LOADABLE_KEY_BLOB_HEADER, *PNCRYPT_TPM_LOADABLE_KEY_BLOB_HEADER;
_Check_return_
SECURITY_STATUS
WINAPI
NCryptImportKey(
    _In_ NCRYPT_PROV_HANDLE hProvider,
    _In_opt_ NCRYPT_KEY_HANDLE hImportKey,
    _In_ LPCWSTR pszBlobType,
    _In_opt_ NCryptBufferDesc *pParameterList,
    _Out_ NCRYPT_KEY_HANDLE *phKey,
    _In_reads_bytes_(cbData) PBYTE pbData,
    _In_ DWORD cbData,
    _In_ DWORD dwFlags);
_Check_return_
SECURITY_STATUS
WINAPI
NCryptExportKey(
    _In_ NCRYPT_KEY_HANDLE hKey,
    _In_opt_ NCRYPT_KEY_HANDLE hExportKey,
    _In_ LPCWSTR pszBlobType,
    _In_opt_ NCryptBufferDesc *pParameterList,
    _Out_writes_bytes_to_opt_(cbOutput, *pcbResult) PBYTE pbOutput,
    _In_ DWORD cbOutput,
    _Out_ DWORD * pcbResult,
    _In_ DWORD dwFlags);
_Check_return_
SECURITY_STATUS
WINAPI
NCryptSignHash(
    _In_ NCRYPT_KEY_HANDLE hKey,
    _In_opt_ VOID *pPaddingInfo,
    _In_reads_bytes_(cbHashValue) PBYTE pbHashValue,
    _In_ DWORD cbHashValue,
    _Out_writes_bytes_to_opt_(cbSignature, *pcbResult) PBYTE pbSignature,
    _In_ DWORD cbSignature,
    _Out_ DWORD * pcbResult,
    _In_ DWORD dwFlags);
_Check_return_
SECURITY_STATUS
WINAPI
NCryptVerifySignature(
    _In_ NCRYPT_KEY_HANDLE hKey,
    _In_opt_ VOID *pPaddingInfo,
    _In_reads_bytes_(cbHashValue) PBYTE pbHashValue,
    _In_ DWORD cbHashValue,
    _In_reads_bytes_(cbSignature) PBYTE pbSignature,
    _In_ DWORD cbSignature,
    _In_ DWORD dwFlags);
SECURITY_STATUS
WINAPI
NCryptDeleteKey(
    _In_ NCRYPT_KEY_HANDLE hKey,
    _In_ DWORD dwFlags);
SECURITY_STATUS
WINAPI
NCryptFreeObject(
    _In_ NCRYPT_HANDLE hObject);
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
BOOL
WINAPI
NCryptIsKeyHandle(
    _In_ NCRYPT_KEY_HANDLE hKey);
_Check_return_
SECURITY_STATUS
WINAPI
NCryptTranslateHandle(
    _Out_opt_ NCRYPT_PROV_HANDLE *phProvider,
    _Out_ NCRYPT_KEY_HANDLE *phKey,
    _In_ HCRYPTPROV hLegacyProv,
    _In_opt_ HCRYPTKEY hLegacyKey,
    _In_opt_ DWORD dwLegacyKeySpec,
    _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_
SECURITY_STATUS
WINAPI
NCryptNotifyChangeKey(
    _In_ NCRYPT_PROV_HANDLE hProvider,
    _Inout_ HANDLE *phEvent,
    _In_ DWORD dwFlags);
#endif
#pragma endregion
_Check_return_
SECURITY_STATUS
WINAPI
NCryptSecretAgreement(
    _In_ NCRYPT_KEY_HANDLE hPrivKey,
    _In_ NCRYPT_KEY_HANDLE hPubKey,
    _Out_ NCRYPT_SECRET_HANDLE *phAgreedSecret,
    _In_ DWORD dwFlags);
_Check_return_
SECURITY_STATUS
WINAPI
NCryptDeriveKey(
    _In_ NCRYPT_SECRET_HANDLE hSharedSecret,
    _In_ LPCWSTR pwszKDF,
    _In_opt_ NCryptBufferDesc *pParameterList,
    _Out_writes_bytes_to_opt_(cbDerivedKey, *pcbResult) PBYTE pbDerivedKey,
    _In_ DWORD cbDerivedKey,
    _Out_ DWORD *pcbResult,
    _In_ ULONG dwFlags);
_Check_return_
SECURITY_STATUS
WINAPI
NCryptKeyDerivation(
    _In_ NCRYPT_KEY_HANDLE hKey,
    _In_opt_ NCryptBufferDesc *pParameterList,
    _Out_writes_bytes_to_(cbDerivedKey, *pcbResult) PUCHAR pbDerivedKey,
    _In_ DWORD cbDerivedKey,
    _Out_ DWORD *pcbResult,
    _In_ ULONG dwFlags);
_Check_return_
SECURITY_STATUS
WINAPI
NCryptCreateClaim(
    _In_opt_ NCRYPT_KEY_HANDLE hSubjectKey,
    _In_opt_ NCRYPT_KEY_HANDLE hAuthorityKey,
    _In_ DWORD dwClaimType,
    _In_opt_ NCryptBufferDesc *pParameterList,
    _Out_writes_bytes_to_opt_(cbClaimBlob, *pcbResult) PBYTE pbClaimBlob,
    _In_ DWORD cbClaimBlob,
    _Out_ DWORD *pcbResult,
    _In_ DWORD dwFlags);
_Check_return_
SECURITY_STATUS
WINAPI
NCryptVerifyClaim(
    _In_ NCRYPT_KEY_HANDLE hSubjectKey,
    _In_opt_ NCRYPT_KEY_HANDLE hAuthorityKey,
    _In_ DWORD dwClaimType,
    _In_opt_ NCryptBufferDesc *pParameterList,
    _In_reads_bytes_(cbClaimBlob) PBYTE pbClaimBlob,
    _In_ DWORD cbClaimBlob,
    _Out_ NCryptBufferDesc *pOutput,
    _In_ DWORD dwFlags);
}
