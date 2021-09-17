       
#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef _Return_type_success_(return >= 0) LONG NTSTATUS;
typedef NTSTATUS *PNTSTATUS;
typedef struct __BCRYPT_KEY_LENGTHS_STRUCT
{
    ULONG dwMinLength;
    ULONG dwMaxLength;
    ULONG dwIncrement;
} BCRYPT_KEY_LENGTHS_STRUCT;
typedef BCRYPT_KEY_LENGTHS_STRUCT BCRYPT_AUTH_TAG_LENGTHS_STRUCT;
typedef struct _BCRYPT_OID
{
    ULONG cbOID;
    PUCHAR pbOID;
} BCRYPT_OID;
typedef struct _BCRYPT_OID_LIST
{
    ULONG dwOIDCount;
    BCRYPT_OID *pOIDs;
} BCRYPT_OID_LIST;
typedef struct _BCRYPT_PKCS1_PADDING_INFO
{
    LPCWSTR pszAlgId;
} BCRYPT_PKCS1_PADDING_INFO;
typedef struct _BCRYPT_PSS_PADDING_INFO
{
    LPCWSTR pszAlgId;
    ULONG cbSalt;
} BCRYPT_PSS_PADDING_INFO;
typedef struct _BCRYPT_OAEP_PADDING_INFO
{
    LPCWSTR pszAlgId;
    PUCHAR pbLabel;
    ULONG cbLabel;
} BCRYPT_OAEP_PADDING_INFO;
typedef struct _BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO
{
    ULONG cbSize;
    ULONG dwInfoVersion;
    PUCHAR pbNonce;
    ULONG cbNonce;
    PUCHAR pbAuthData;
    ULONG cbAuthData;
    PUCHAR pbTag;
    ULONG cbTag;
    PUCHAR pbMacContext;
    ULONG cbMacContext;
    ULONG cbAAD;
    ULONGLONG cbData;
    ULONG dwFlags;
} BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO, *PBCRYPT_AUTHENTICATED_CIPHER_MODE_INFO;
            RtlZeroMemory((&_AUTH_INFO_STRUCT_), sizeof(BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO)); \
            (_AUTH_INFO_STRUCT_).cbSize = sizeof(BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO); \
            (_AUTH_INFO_STRUCT_).dwInfoVersion = BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO_VERSION;
typedef struct _BCryptBuffer {
    ULONG cbBuffer;
    ULONG BufferType;
    PVOID pvBuffer;
} BCryptBuffer, * PBCryptBuffer;
typedef struct _BCryptBufferDesc {
    ULONG ulVersion;
    ULONG cBuffers;
    PBCryptBuffer pBuffers;
} BCryptBufferDesc, * PBCryptBufferDesc;
typedef PVOID BCRYPT_HANDLE;
typedef PVOID BCRYPT_ALG_HANDLE;
typedef PVOID BCRYPT_KEY_HANDLE;
typedef PVOID BCRYPT_HASH_HANDLE;
typedef PVOID BCRYPT_SECRET_HANDLE;
typedef struct _BCRYPT_KEY_BLOB
{
    ULONG Magic;
} BCRYPT_KEY_BLOB;
typedef struct _BCRYPT_RSAKEY_BLOB
{
    ULONG Magic;
    ULONG BitLength;
    ULONG cbPublicExp;
    ULONG cbModulus;
    ULONG cbPrime1;
    ULONG cbPrime2;
} BCRYPT_RSAKEY_BLOB;
typedef struct _BCRYPT_ECCKEY_BLOB
{
    ULONG dwMagic;
    ULONG cbKey;
} BCRYPT_ECCKEY_BLOB, *PBCRYPT_ECCKEY_BLOB;
typedef struct _SSL_ECCKEY_BLOB
{
    ULONG dwCurveType;
    ULONG cbKey;
} SSL_ECCKEY_BLOB, *PSSL_ECCKEY_BLOB;
typedef enum
{
    BCRYPT_ECC_PRIME_SHORT_WEIERSTRASS_CURVE = 0x1,
    BCRYPT_ECC_PRIME_TWISTED_EDWARDS_CURVE = 0x2,
    BCRYPT_ECC_PRIME_MONTGOMERY_CURVE = 0x3
} ECC_CURVE_TYPE_ENUM;
typedef enum
{
    BCRYPT_NO_CURVE_GENERATION_ALG_ID = 0x0
} ECC_CURVE_ALG_ID_ENUM;
typedef struct _BCRYPT_ECCFULLKEY_BLOB
{
    ULONG dwMagic;
    ULONG dwVersion;
    ECC_CURVE_TYPE_ENUM dwCurveType;
    ECC_CURVE_ALG_ID_ENUM dwCurveGenerationAlgId;
    ULONG cbFieldLength;
    ULONG cbSubgroupOrder;
    ULONG cbCofactor;
    ULONG cbSeed;
} BCRYPT_ECCFULLKEY_BLOB, *PBCRYPT_ECCFULLKEY_BLOB;
typedef struct _BCRYPT_DH_KEY_BLOB
{
    ULONG dwMagic;
    ULONG cbKey;
} BCRYPT_DH_KEY_BLOB, *PBCRYPT_DH_KEY_BLOB;
typedef _Struct_size_bytes_(cbLength) struct _BCRYPT_DH_PARAMETER_HEADER
{
    ULONG cbLength;
    ULONG dwMagic;
    ULONG cbKeyLength;
} BCRYPT_DH_PARAMETER_HEADER;
typedef struct _BCRYPT_DSA_KEY_BLOB
{
    ULONG dwMagic;
    ULONG cbKey;
    UCHAR Count[4];
    UCHAR Seed[20];
    UCHAR q[20];
} BCRYPT_DSA_KEY_BLOB, *PBCRYPT_DSA_KEY_BLOB;
typedef enum
{
    DSA_HASH_ALGORITHM_SHA1,
    DSA_HASH_ALGORITHM_SHA256,
    DSA_HASH_ALGORITHM_SHA512
} HASHALGORITHM_ENUM;
typedef enum
{
    DSA_FIPS186_2,
    DSA_FIPS186_3
} DSAFIPSVERSION_ENUM;
typedef struct _BCRYPT_DSA_KEY_BLOB_V2
{
    ULONG dwMagic;
    ULONG cbKey;
    HASHALGORITHM_ENUM hashAlgorithm;
    DSAFIPSVERSION_ENUM standardVersion;
    ULONG cbSeedLength;
    ULONG cbGroupSize;
    UCHAR Count[4];
} BCRYPT_DSA_KEY_BLOB_V2, *PBCRYPT_DSA_KEY_BLOB_V2;
typedef struct _BCRYPT_KEY_DATA_BLOB_HEADER
{
    ULONG dwMagic;
    ULONG dwVersion;
    ULONG cbKeyData;
} BCRYPT_KEY_DATA_BLOB_HEADER, *PBCRYPT_KEY_DATA_BLOB_HEADER;
typedef struct _BCRYPT_DSA_PARAMETER_HEADER
{
    ULONG cbLength;
    ULONG dwMagic;
    ULONG cbKeyLength;
    UCHAR Count[4];
    UCHAR Seed[20];
    UCHAR q[20];
} BCRYPT_DSA_PARAMETER_HEADER;
typedef struct _BCRYPT_DSA_PARAMETER_HEADER_V2
{
    ULONG cbLength;
    ULONG dwMagic;
    ULONG cbKeyLength;
    HASHALGORITHM_ENUM hashAlgorithm;
    DSAFIPSVERSION_ENUM standardVersion;
    ULONG cbSeedLength;
    ULONG cbGroupSize;
    UCHAR Count[4];
} BCRYPT_DSA_PARAMETER_HEADER_V2;
typedef struct _BCRYPT_ECC_CURVE_NAMES
{
    ULONG dwEccCurveNames;
    LPWSTR *pEccCurveNames;
} BCRYPT_ECC_CURVE_NAMES;
typedef enum {
    BCRYPT_HASH_OPERATION_HASH_DATA = 1,
    BCRYPT_HASH_OPERATION_FINISH_HASH = 2,
} BCRYPT_HASH_OPERATION_TYPE;
typedef struct _BCRYPT_MULTI_HASH_OPERATION {
                            ULONG iHash;
                            BCRYPT_HASH_OPERATION_TYPE hashOperation;
    _Field_size_(cbBuffer) PUCHAR pbBuffer;
                            ULONG cbBuffer;
} BCRYPT_MULTI_HASH_OPERATION;
typedef enum{
    BCRYPT_OPERATION_TYPE_HASH = 1,
} BCRYPT_MULTI_OPERATION_TYPE;
typedef struct _BCRYPT_MULTI_OBJECT_LENGTH_STRUCT
{
    ULONG cbPerObject;
    ULONG cbPerElement;
} BCRYPT_MULTI_OBJECT_LENGTH_STRUCT;
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptOpenAlgorithmProvider(
    _Out_ BCRYPT_ALG_HANDLE *phAlgorithm,
    _In_ LPCWSTR pszAlgId,
    _In_opt_ LPCWSTR pszImplementation,
    _In_ ULONG dwFlags);
typedef struct _BCRYPT_ALGORITHM_IDENTIFIER
{
    LPWSTR pszName;
    ULONG dwClass;
    ULONG dwFlags;
} BCRYPT_ALGORITHM_IDENTIFIER;
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptEnumAlgorithms(
    _In_ ULONG dwAlgOperations,
    _Out_ ULONG *pAlgCount,
    _Out_ BCRYPT_ALGORITHM_IDENTIFIER **ppAlgList,
    _In_ ULONG dwFlags);
typedef struct _BCRYPT_PROVIDER_NAME
{
    LPWSTR pszProviderName;
} BCRYPT_PROVIDER_NAME;
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptEnumProviders(
    _In_ LPCWSTR pszAlgId,
    _Out_ ULONG *pImplCount,
    _Out_ BCRYPT_PROVIDER_NAME **ppImplList,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptGetProperty(
    _In_ BCRYPT_HANDLE hObject,
    _In_ LPCWSTR pszProperty,
    _Out_writes_bytes_to_opt_(cbOutput, *pcbResult) PUCHAR pbOutput,
    _In_ ULONG cbOutput,
    _Out_ ULONG *pcbResult,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptSetProperty(
    _Inout_ BCRYPT_HANDLE hObject,
    _In_ LPCWSTR pszProperty,
    _In_reads_bytes_(cbInput) PUCHAR pbInput,
    _In_ ULONG cbInput,
    _In_ ULONG dwFlags);
NTSTATUS
WINAPI
BCryptCloseAlgorithmProvider(
    _Inout_ BCRYPT_ALG_HANDLE hAlgorithm,
    _In_ ULONG dwFlags);
VOID
WINAPI
BCryptFreeBuffer(
    _In_ PVOID pvBuffer);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptGenerateSymmetricKey(
    _Inout_ BCRYPT_ALG_HANDLE hAlgorithm,
    _Out_ BCRYPT_KEY_HANDLE *phKey,
    _Out_writes_bytes_all_opt_(cbKeyObject) PUCHAR pbKeyObject,
    _In_ ULONG cbKeyObject,
    _In_reads_bytes_(cbSecret) PUCHAR pbSecret,
    _In_ ULONG cbSecret,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptGenerateKeyPair(
    _Inout_ BCRYPT_ALG_HANDLE hAlgorithm,
    _Out_ BCRYPT_KEY_HANDLE *phKey,
    _In_ ULONG dwLength,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptEncrypt(
    _Inout_ BCRYPT_KEY_HANDLE hKey,
    _In_reads_bytes_opt_(cbInput) PUCHAR pbInput,
    _In_ ULONG cbInput,
    _In_opt_ VOID *pPaddingInfo,
    _Inout_updates_bytes_opt_(cbIV) PUCHAR pbIV,
    _In_ ULONG cbIV,
    _Out_writes_bytes_to_opt_(cbOutput, *pcbResult) PUCHAR pbOutput,
    _In_ ULONG cbOutput,
    _Out_ ULONG *pcbResult,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptDecrypt(
    _Inout_ BCRYPT_KEY_HANDLE hKey,
    _In_reads_bytes_opt_(cbInput) PUCHAR pbInput,
    _In_ ULONG cbInput,
    _In_opt_ VOID *pPaddingInfo,
    _Inout_updates_bytes_opt_(cbIV) PUCHAR pbIV,
    _In_ ULONG cbIV,
    _Out_writes_bytes_to_opt_(cbOutput, *pcbResult) PUCHAR pbOutput,
    _In_ ULONG cbOutput,
    _Out_ ULONG *pcbResult,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptExportKey(
    _In_ BCRYPT_KEY_HANDLE hKey,
    _In_opt_ BCRYPT_KEY_HANDLE hExportKey,
    _In_ LPCWSTR pszBlobType,
    _Out_writes_bytes_to_opt_(cbOutput, *pcbResult) PUCHAR pbOutput,
    _In_ ULONG cbOutput,
    _Out_ ULONG *pcbResult,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptImportKey(
    _In_ BCRYPT_ALG_HANDLE hAlgorithm,
    _In_opt_ BCRYPT_KEY_HANDLE hImportKey,
    _In_ LPCWSTR pszBlobType,
    _Out_ BCRYPT_KEY_HANDLE *phKey,
    _Out_writes_bytes_all_opt_(cbKeyObject) PUCHAR pbKeyObject,
    _In_ ULONG cbKeyObject,
    _In_reads_bytes_(cbInput) PUCHAR pbInput,
    _In_ ULONG cbInput,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptImportKeyPair(
    _In_ BCRYPT_ALG_HANDLE hAlgorithm,
    _In_opt_ BCRYPT_KEY_HANDLE hImportKey,
    _In_ LPCWSTR pszBlobType,
    _Out_ BCRYPT_KEY_HANDLE *phKey,
    _In_reads_bytes_(cbInput) PUCHAR pbInput,
    _In_ ULONG cbInput,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptDuplicateKey(
    _In_ BCRYPT_KEY_HANDLE hKey,
    _Out_ BCRYPT_KEY_HANDLE *phNewKey,
    _Out_writes_bytes_all_opt_(cbKeyObject) PUCHAR pbKeyObject,
    _In_ ULONG cbKeyObject,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptFinalizeKeyPair(
    _Inout_ BCRYPT_KEY_HANDLE hKey,
    _In_ ULONG dwFlags);
NTSTATUS
WINAPI
BCryptDestroyKey(
    _Inout_ BCRYPT_KEY_HANDLE hKey);
NTSTATUS
WINAPI
BCryptDestroySecret(
    _Inout_ BCRYPT_SECRET_HANDLE hSecret);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptSignHash(
    _In_ BCRYPT_KEY_HANDLE hKey,
    _In_opt_ VOID *pPaddingInfo,
    _In_reads_bytes_(cbInput) PUCHAR pbInput,
    _In_ ULONG cbInput,
    _Out_writes_bytes_to_opt_(cbOutput, *pcbResult) PUCHAR pbOutput,
    _In_ ULONG cbOutput,
    _Out_ ULONG *pcbResult,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptVerifySignature(
    _In_ BCRYPT_KEY_HANDLE hKey,
    _In_opt_ VOID *pPaddingInfo,
    _In_reads_bytes_(cbHash) PUCHAR pbHash,
    _In_ ULONG cbHash,
    _In_reads_bytes_(cbSignature) PUCHAR pbSignature,
    _In_ ULONG cbSignature,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptSecretAgreement(
    _In_ BCRYPT_KEY_HANDLE hPrivKey,
    _In_ BCRYPT_KEY_HANDLE hPubKey,
    _Out_ BCRYPT_SECRET_HANDLE *phAgreedSecret,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptDeriveKey(
    _In_ BCRYPT_SECRET_HANDLE hSharedSecret,
    _In_ LPCWSTR pwszKDF,
    _In_opt_ BCryptBufferDesc *pParameterList,
    _Out_writes_bytes_to_opt_(cbDerivedKey, *pcbResult) PUCHAR pbDerivedKey,
    _In_ ULONG cbDerivedKey,
    _Out_ ULONG *pcbResult,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptKeyDerivation(
    _In_ BCRYPT_KEY_HANDLE hKey,
    _In_opt_ BCryptBufferDesc *pParameterList,
    _Out_writes_bytes_to_(cbDerivedKey, *pcbResult) PUCHAR pbDerivedKey,
    _In_ ULONG cbDerivedKey,
    _Out_ ULONG *pcbResult,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptCreateHash(
    _Inout_ BCRYPT_ALG_HANDLE hAlgorithm,
    _Out_ BCRYPT_HASH_HANDLE *phHash,
    _Out_writes_bytes_all_opt_(cbHashObject) PUCHAR pbHashObject,
    _In_ ULONG cbHashObject,
    _In_reads_bytes_opt_(cbSecret) PUCHAR pbSecret,
    _In_ ULONG cbSecret,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptHashData(
    _Inout_ BCRYPT_HASH_HANDLE hHash,
    _In_reads_bytes_(cbInput) PUCHAR pbInput,
    _In_ ULONG cbInput,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptFinishHash(
    _Inout_ BCRYPT_HASH_HANDLE hHash,
    _Out_writes_bytes_all_(cbOutput) PUCHAR pbOutput,
    _In_ ULONG cbOutput,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptDuplicateHash(
    _In_ BCRYPT_HASH_HANDLE hHash,
    _Out_ BCRYPT_HASH_HANDLE *phNewHash,
    _Out_writes_bytes_all_opt_(cbHashObject) PUCHAR pbHashObject,
    _In_ ULONG cbHashObject,
    _In_ ULONG dwFlags);
NTSTATUS
WINAPI
BCryptDestroyHash(
    _Inout_ BCRYPT_HASH_HANDLE hHash);
NTSTATUS
WINAPI
BCryptHash(
    _Inout_ BCRYPT_ALG_HANDLE hAlgorithm,
    _In_reads_bytes_opt_(cbSecret) PUCHAR pbSecret,
    _In_ ULONG cbSecret,
    _In_reads_bytes_(cbInput) PUCHAR pbInput,
    _In_ ULONG cbInput,
    _Out_writes_bytes_all_(cbOutput) PUCHAR pbOutput,
    _In_ ULONG cbOutput );
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptGenRandom(
    _In_opt_ BCRYPT_ALG_HANDLE hAlgorithm,
    _Out_writes_bytes_(cbBuffer) PUCHAR pbBuffer,
    _In_ ULONG cbBuffer,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptDeriveKeyCapi(
    _In_ BCRYPT_HASH_HANDLE hHash,
    _In_opt_ BCRYPT_ALG_HANDLE hTargetAlg,
    _Out_writes_bytes_( cbDerivedKey ) PUCHAR pbDerivedKey,
    _In_ ULONG cbDerivedKey,
    _In_ ULONG dwFlags);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptDeriveKeyPBKDF2(
    _In_ BCRYPT_ALG_HANDLE hPrf,
    _In_reads_bytes_opt_( cbPassword ) PUCHAR pbPassword,
    _In_ ULONG cbPassword,
    _In_reads_bytes_opt_( cbSalt ) PUCHAR pbSalt,
    _In_ ULONG cbSalt,
    _In_ ULONGLONG cIterations,
    _Out_writes_bytes_( cbDerivedKey ) PUCHAR pbDerivedKey,
    _In_ ULONG cbDerivedKey,
    _In_ ULONG dwFlags);
typedef struct _BCRYPT_INTERFACE_VERSION
{
    USHORT MajorVersion;
    USHORT MinorVersion;
} BCRYPT_INTERFACE_VERSION, *PBCRYPT_INTERFACE_VERSION;
    ((loader).MajorVersion <= (provider).MajorVersion)
typedef struct _CRYPT_INTERFACE_REG
{
    ULONG dwInterface;
    ULONG dwFlags;
    ULONG cFunctions;
    PWSTR *rgpszFunctions;
}
CRYPT_INTERFACE_REG, *PCRYPT_INTERFACE_REG;
typedef struct _CRYPT_IMAGE_REG
{
    PWSTR pszImage;
    ULONG cInterfaces;
    PCRYPT_INTERFACE_REG *rgpInterfaces;
}
CRYPT_IMAGE_REG, *PCRYPT_IMAGE_REG;
typedef struct _CRYPT_PROVIDER_REG
{
    ULONG cAliases;
    PWSTR *rgpszAliases;
    PCRYPT_IMAGE_REG pUM;
    PCRYPT_IMAGE_REG pKM;
}
CRYPT_PROVIDER_REG, *PCRYPT_PROVIDER_REG;
typedef struct _CRYPT_PROVIDERS
{
    ULONG cProviders;
    PWSTR *rgpszProviders;
}
CRYPT_PROVIDERS, *PCRYPT_PROVIDERS;
typedef struct _CRYPT_CONTEXT_CONFIG
{
    ULONG dwFlags;
    ULONG dwReserved;
}
CRYPT_CONTEXT_CONFIG, *PCRYPT_CONTEXT_CONFIG;
typedef struct _CRYPT_CONTEXT_FUNCTION_CONFIG
{
    ULONG dwFlags;
    ULONG dwReserved;
}
CRYPT_CONTEXT_FUNCTION_CONFIG, *PCRYPT_CONTEXT_FUNCTION_CONFIG;
typedef struct _CRYPT_CONTEXTS
{
    ULONG cContexts;
    PWSTR *rgpszContexts;
}
CRYPT_CONTEXTS, *PCRYPT_CONTEXTS;
typedef struct _CRYPT_CONTEXT_FUNCTIONS
{
    ULONG cFunctions;
    PWSTR *rgpszFunctions;
}
CRYPT_CONTEXT_FUNCTIONS, *PCRYPT_CONTEXT_FUNCTIONS;
typedef struct _CRYPT_CONTEXT_FUNCTION_PROVIDERS
{
    ULONG cProviders;
    PWSTR *rgpszProviders;
}
CRYPT_CONTEXT_FUNCTION_PROVIDERS, *PCRYPT_CONTEXT_FUNCTION_PROVIDERS;
typedef struct _CRYPT_PROPERTY_REF
{
    PWSTR pszProperty;
    ULONG cbValue;
    PUCHAR pbValue;
}
CRYPT_PROPERTY_REF, *PCRYPT_PROPERTY_REF;
typedef struct _CRYPT_IMAGE_REF
{
    PWSTR pszImage;
    ULONG dwFlags;
}
CRYPT_IMAGE_REF, *PCRYPT_IMAGE_REF;
typedef struct _CRYPT_PROVIDER_REF
{
    ULONG dwInterface;
    PWSTR pszFunction;
    PWSTR pszProvider;
    ULONG cProperties;
    PCRYPT_PROPERTY_REF *rgpProperties;
    PCRYPT_IMAGE_REF pUM;
    PCRYPT_IMAGE_REF pKM;
}
CRYPT_PROVIDER_REF, *PCRYPT_PROVIDER_REF;
typedef struct _CRYPT_PROVIDER_REFS
{
    ULONG cProviders;
    PCRYPT_PROVIDER_REF *rgpProviders;
}
CRYPT_PROVIDER_REFS, *PCRYPT_PROVIDER_REFS;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptQueryProviderRegistration(
    _In_ LPCWSTR pszProvider,
    _In_ ULONG dwMode,
    _In_ ULONG dwInterface,
    _Inout_ ULONG* pcbBuffer,
    _Inout_
        _When_(_Old_(*ppBuffer) != NULL, _At_(*ppBuffer, _Out_writes_bytes_to_(*pcbBuffer, *pcbBuffer)))
        _When_(_Old_(*ppBuffer) == NULL, _Outptr_result_bytebuffer_all_(*pcbBuffer))
    PCRYPT_PROVIDER_REG *ppBuffer);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptEnumRegisteredProviders(
    _Inout_ ULONG* pcbBuffer,
    _Inout_
        _When_(_Old_(*ppBuffer) != NULL, _At_(*ppBuffer, _Out_writes_bytes_to_(*pcbBuffer, *pcbBuffer)))
        _When_(_Old_(*ppBuffer) == NULL, _Outptr_result_bytebuffer_all_(*pcbBuffer))
    PCRYPT_PROVIDERS *ppBuffer);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptCreateContext(
    _In_ ULONG dwTable,
    _In_ LPCWSTR pszContext,
    _In_opt_ PCRYPT_CONTEXT_CONFIG pConfig);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptDeleteContext(
    _In_ ULONG dwTable,
    _In_ LPCWSTR pszContext);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptEnumContexts(
    _In_ ULONG dwTable,
    _Inout_ ULONG* pcbBuffer,
    _Inout_
        _When_(_Old_(*ppBuffer) != NULL, _At_(*ppBuffer, _Out_writes_bytes_to_(*pcbBuffer, *pcbBuffer)))
        _When_(_Old_(*ppBuffer) == NULL, _Outptr_result_bytebuffer_all_(*pcbBuffer))
    PCRYPT_CONTEXTS *ppBuffer);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptConfigureContext(
    _In_ ULONG dwTable,
    _In_ LPCWSTR pszContext,
    _In_ PCRYPT_CONTEXT_CONFIG pConfig);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptQueryContextConfiguration(
    _In_ ULONG dwTable,
    _In_ LPCWSTR pszContext,
    _Inout_ ULONG* pcbBuffer,
    _Inout_
        _When_(_Old_(*ppBuffer) != NULL, _At_(*ppBuffer, _Out_writes_bytes_to_(*pcbBuffer, *pcbBuffer)))
        _When_(_Old_(*ppBuffer) == NULL, _Outptr_result_bytebuffer_all_(*pcbBuffer))
    PCRYPT_CONTEXT_CONFIG *ppBuffer);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptAddContextFunction(
    _In_ ULONG dwTable,
    _In_ LPCWSTR pszContext,
    _In_ ULONG dwInterface,
    _In_ LPCWSTR pszFunction,
    _In_ ULONG dwPosition);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptRemoveContextFunction(
    _In_ ULONG dwTable,
    _In_ LPCWSTR pszContext,
    _In_ ULONG dwInterface,
    _In_ LPCWSTR pszFunction);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptEnumContextFunctions(
    _In_ ULONG dwTable,
    _In_ LPCWSTR pszContext,
    _In_ ULONG dwInterface,
    _Inout_ ULONG* pcbBuffer,
    _Inout_
        _When_(_Old_(*ppBuffer) != NULL, _At_(*ppBuffer, _Out_writes_bytes_to_(*pcbBuffer, *pcbBuffer)))
        _When_(_Old_(*ppBuffer) == NULL, _Outptr_result_bytebuffer_all_(*pcbBuffer))
    PCRYPT_CONTEXT_FUNCTIONS *ppBuffer);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptConfigureContextFunction(
    _In_ ULONG dwTable,
    _In_ LPCWSTR pszContext,
    _In_ ULONG dwInterface,
    _In_ LPCWSTR pszFunction,
    _In_ PCRYPT_CONTEXT_FUNCTION_CONFIG pConfig);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptQueryContextFunctionConfiguration(
    _In_ ULONG dwTable,
    _In_ LPCWSTR pszContext,
    _In_ ULONG dwInterface,
    _In_ LPCWSTR pszFunction,
    _Inout_ ULONG* pcbBuffer,
    _Inout_
        _When_(_Old_(*ppBuffer) != NULL, _At_(*ppBuffer, _Out_writes_bytes_to_(*pcbBuffer, *pcbBuffer)))
        _When_(_Old_(*ppBuffer) == NULL, _Outptr_result_bytebuffer_all_(*pcbBuffer))
    PCRYPT_CONTEXT_FUNCTION_CONFIG *ppBuffer);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptEnumContextFunctionProviders(
    _In_ ULONG dwTable,
    _In_ LPCWSTR pszContext,
    _In_ ULONG dwInterface,
    _In_ LPCWSTR pszFunction,
    _Inout_ ULONG* pcbBuffer,
    _Inout_
        _When_(_Old_(*ppBuffer) != NULL, _At_(*ppBuffer, _Out_writes_bytes_to_(*pcbBuffer, *pcbBuffer)))
        _When_(_Old_(*ppBuffer) == NULL, _Outptr_result_bytebuffer_all_(*pcbBuffer))
    PCRYPT_CONTEXT_FUNCTION_PROVIDERS *ppBuffer);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptSetContextFunctionProperty(
    _In_ ULONG dwTable,
    _In_ LPCWSTR pszContext,
    _In_ ULONG dwInterface,
    _In_ LPCWSTR pszFunction,
    _In_ LPCWSTR pszProperty,
    _In_ ULONG cbValue,
    _In_reads_bytes_opt_(cbValue) PUCHAR pbValue);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptQueryContextFunctionProperty(
    _In_ ULONG dwTable,
    _In_ LPCWSTR pszContext,
    _In_ ULONG dwInterface,
    _In_ LPCWSTR pszFunction,
    _In_ LPCWSTR pszProperty,
    _Inout_ ULONG* pcbValue,
    _Inout_
        _When_(_Old_(*ppbValue) != NULL, _At_(*ppbValue, _Out_writes_bytes_to_(*pcbValue, *pcbValue)))
        _When_(_Old_(*ppbValue) == NULL, _Outptr_result_bytebuffer_all_(*pcbValue))
    PUCHAR *ppbValue);
_Must_inspect_result_
NTSTATUS
WINAPI
BCryptRegisterConfigChangeNotify(
    _In_ PRKEVENT pEvent);
NTSTATUS
WINAPI
BCryptUnregisterConfigChangeNotify(
    _In_ PRKEVENT pEvent);
_Must_inspect_result_
NTSTATUS WINAPI
BCryptResolveProviders(
    _In_opt_ LPCWSTR pszContext,
    _In_opt_ ULONG dwInterface,
    _In_opt_ LPCWSTR pszFunction,
    _In_opt_ LPCWSTR pszProvider,
    _In_ ULONG dwMode,
    _In_ ULONG dwFlags,
    _Inout_ ULONG* pcbBuffer,
    _Inout_
        _When_(_Old_(*ppBuffer) != NULL, _At_(*ppBuffer, _Out_writes_bytes_to_(*pcbBuffer, *pcbBuffer)))
        _When_(_Old_(*ppBuffer) == NULL, _Outptr_result_bytebuffer_all_(*pcbBuffer))
    PCRYPT_PROVIDER_REFS *ppBuffer);
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NTSTATUS
WINAPI
BCryptGetFipsAlgorithmMode(
    _Out_ BOOLEAN *pfEnabled
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
BOOLEAN
CngGetFipsAlgorithmMode(
    VOID
    );
#endif
#pragma endregion
}
