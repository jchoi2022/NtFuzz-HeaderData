#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#include <minschannel.h>
#include <wincrypt.h>
typedef enum _eTlsSignatureAlgorithm
{
    TlsSignatureAlgorithm_Anonymous = 0,
    TlsSignatureAlgorithm_Rsa = 1,
    TlsSignatureAlgorithm_Dsa = 2,
    TlsSignatureAlgorithm_Ecdsa = 3
} eTlsSignatureAlgorithm;
typedef enum _eTlsHashAlgorithm
{
    TlsHashAlgorithm_None = 0,
    TlsHashAlgorithm_Md5 = 1,
    TlsHashAlgorithm_Sha1 = 2,
    TlsHashAlgorithm_Sha224 = 3,
    TlsHashAlgorithm_Sha256 = 4,
    TlsHashAlgorithm_Sha384 = 5,
    TlsHashAlgorithm_Sha512 = 6
} eTlsHashAlgorithm;
typedef struct _SecPkgContext_RemoteCredentialInfo
{
    DWORD cbCertificateChain;
    PBYTE pbCertificateChain;
    DWORD cCertificates;
    DWORD fFlags;
    DWORD dwBits;
} SecPkgContext_RemoteCredentialInfo, *PSecPkgContext_RemoteCredentialInfo;
typedef SecPkgContext_RemoteCredentialInfo SecPkgContext_RemoteCredenitalInfo, *PSecPkgContext_RemoteCredenitalInfo;
typedef struct _SecPkgContext_LocalCredentialInfo
{
    DWORD cbCertificateChain;
    PBYTE pbCertificateChain;
    DWORD cCertificates;
    DWORD fFlags;
    DWORD dwBits;
} SecPkgContext_LocalCredentialInfo, *PSecPkgContext_LocalCredentialInfo;
typedef SecPkgContext_LocalCredentialInfo SecPkgContext_LocalCredenitalInfo, *PSecPkgContext_LocalCredenitalInfo;
typedef struct _SecPkgContext_ClientCertPolicyResult
{
    HRESULT dwPolicyResult;
    GUID guidPolicyId;
} SecPkgContext_ClientCertPolicyResult, *PSecPkgContext_ClientCertPolicyResult;
typedef struct _SecPkgContext_IssuerListInfoEx
{
    PCERT_NAME_BLOB aIssuers;
    DWORD cIssuers;
} SecPkgContext_IssuerListInfoEx, *PSecPkgContext_IssuerListInfoEx;
typedef struct _SecPkgContext_ConnectionInfo
{
    DWORD dwProtocol;
    ALG_ID aiCipher;
    DWORD dwCipherStrength;
    ALG_ID aiHash;
    DWORD dwHashStrength;
    ALG_ID aiExch;
    DWORD dwExchStrength;
} SecPkgContext_ConnectionInfo, *PSecPkgContext_ConnectionInfo;
typedef struct _SecPkgContext_ConnectionInfoEx
{
    DWORD dwVersion;
    DWORD dwProtocol;
    WCHAR szCipher[SZ_ALG_MAX_SIZE];
    DWORD dwCipherStrength;
    WCHAR szHash[SZ_ALG_MAX_SIZE];
    DWORD dwHashStrength;
    WCHAR szExchange[SZ_ALG_MAX_SIZE];
    DWORD dwExchStrength;
} SecPkgContext_ConnectionInfoEx, *PSecPkgContext_ConnectionInfoEx;
typedef struct _SecPkgContext_CipherInfo
{
    DWORD dwVersion;
    DWORD dwProtocol;
    DWORD dwCipherSuite;
    DWORD dwBaseCipherSuite;
    WCHAR szCipherSuite[SZ_ALG_MAX_SIZE];
    WCHAR szCipher[SZ_ALG_MAX_SIZE];
    DWORD dwCipherLen;
    DWORD dwCipherBlockLen;
    WCHAR szHash[SZ_ALG_MAX_SIZE];
    DWORD dwHashLen;
    WCHAR szExchange[SZ_ALG_MAX_SIZE];
    DWORD dwMinExchangeLen;
    DWORD dwMaxExchangeLen;
    WCHAR szCertificate[SZ_ALG_MAX_SIZE];
    DWORD dwKeyType;
} SecPkgContext_CipherInfo, *PSecPkgContext_CipherInfo;
typedef struct _SecPkgContext_EapKeyBlock
{
    BYTE rgbKeys[128];
    BYTE rgbIVs[64];
} SecPkgContext_EapKeyBlock, *PSecPkgContext_EapKeyBlock;
typedef struct _SecPkgContext_MappedCredAttr
{
    DWORD dwAttribute;
    PVOID pvBuffer;
} SecPkgContext_MappedCredAttr, *PSecPkgContext_MappedCredAttr;
typedef struct _SecPkgContext_SessionInfo
{
    DWORD dwFlags;
    DWORD cbSessionId;
    BYTE rgbSessionId[32];
} SecPkgContext_SessionInfo, *PSecPkgContext_SessionInfo;
typedef struct _SecPkgContext_SessionAppData
{
    DWORD dwFlags;
    DWORD cbAppData;
    _Field_size_bytes_(cbAppData) PBYTE pbAppData;
} SecPkgContext_SessionAppData, *PSecPkgContext_SessionAppData;
typedef struct _SecPkgContext_EapPrfInfo
{
    DWORD dwVersion;
    DWORD cbPrfData;
    _Field_size_bytes_(cbPrfData) PBYTE pbPrfData;
} SecPkgContext_EapPrfInfo, *PSecPkgContext_EapPrfInfo;
typedef struct _SecPkgContext_SupportedSignatures
{
    WORD cSignatureAndHashAlgorithms;
    _Field_size_(cSignatureAndHashAlgorithms)
        WORD *pSignatureAndHashAlgorithms;
} SecPkgContext_SupportedSignatures, *PSecPkgContext_SupportedSignatures;
typedef struct _SecPkgContext_Certificates
{
    DWORD cCertificates;
    DWORD cbCertificateChain;
    PBYTE pbCertificateChain;
} SecPkgContext_Certificates, *PSecPkgContext_Certificates;
typedef struct _SecPkgContext_CertInfo
{
    DWORD dwVersion;
    DWORD cbSubjectName;
    LPWSTR pwszSubjectName;
    DWORD cbIssuerName;
    LPWSTR pwszIssuerName;
    DWORD dwKeySize;
} SecPkgContext_CertInfo, *PSecPkgContext_CertInfo;
typedef struct _SecPkgContext_UiInfo
{
    HWND hParentWindow;
} SecPkgContext_UiInfo, *PSecPkgContext_UiInfo;
typedef struct _SecPkgContext_EarlyStart
{
    DWORD dwEarlyStartFlags;
} SecPkgContext_EarlyStart, *PSecPkgContext_EarlyStart;
typedef struct _SecPkgContext_KeyingMaterialInfo
{
    WORD cbLabel;
    LPSTR pszLabel;
    WORD cbContextValue;
    PBYTE pbContextValue;
    DWORD cbKeyingMaterial;
} SecPkgContext_KeyingMaterialInfo, * PSecPkgContext_KeyingMaterialInfo;
typedef struct _SecPkgContext_KeyingMaterial
{
    DWORD cbKeyingMaterial;
    _Field_size_bytes_(cbKeyingMaterial) PBYTE pbKeyingMaterial;
} SecPkgContext_KeyingMaterial, * PSecPkgContext_KeyingMaterial;
typedef struct _SecPkgContext_KeyingMaterial_Inproc
{
    WORD cbLabel;
    LPSTR pszLabel;
    WORD cbContextValue;
    PBYTE pbContextValue;
    DWORD cbKeyingMaterial;
    PBYTE pbKeyingMaterial;
} SecPkgContext_KeyingMaterial_Inproc, * PSecPkgContext_KeyingMaterial_Inproc;
typedef struct _SecPkgContext_SrtpParameters
{
    WORD ProtectionProfile;
    BYTE MasterKeyIdentifierSize;
    _Field_size_bytes_(MasterKeyIdentifierSize) PBYTE MasterKeyIdentifier;
} SecPkgContext_SrtpParameters, * PSecPkgContext_SrtpParameters;
typedef struct _SecPkgContext_TokenBinding
{
    BYTE MajorVersion;
    BYTE MinorVersion;
    WORD KeyParametersSize;
    _Field_size_bytes_(KeyParametersSize) PBYTE KeyParameters;
} SecPkgContext_TokenBinding, * PSecPkgContext_TokenBinding;
struct _HMAPPER;
typedef struct _SCHANNEL_CRED
{
    DWORD dwVersion;
    DWORD cCreds;
    PCCERT_CONTEXT *paCred;
    HCERTSTORE hRootStore;
    DWORD cMappers;
    struct _HMAPPER **aphMappers;
    DWORD cSupportedAlgs;
    ALG_ID * palgSupportedAlgs;
    DWORD grbitEnabledProtocols;
    DWORD dwMinimumCipherStrength;
    DWORD dwMaximumCipherStrength;
    DWORD dwSessionLifespan;
    DWORD dwFlags;
    DWORD dwCredFormat;
} SCHANNEL_CRED, *PSCHANNEL_CRED;
typedef enum _eTlsAlgorithmUsage
{
    TlsParametersCngAlgUsageKeyExchange,
    TlsParametersCngAlgUsageSignature,
    TlsParametersCngAlgUsageCipher,
    TlsParametersCngAlgUsageDigest,
    TlsParametersCngAlgUsageCertSig
} eTlsAlgorithmUsage;
typedef struct _CRYPTO_SETTINGS
{
    eTlsAlgorithmUsage eAlgorithmUsage;
    UNICODE_STRING strCngAlgId;
    DWORD cChainingModes;
    PUNICODE_STRING rgstrChainingModes;
    DWORD dwMinBitLength;
    DWORD dwMaxBitLength;
} CRYPTO_SETTINGS, *PCRYPTO_SETTINGS;
typedef struct _TLS_PARAMETERS
{
    DWORD cAlpnIds;
    PUNICODE_STRING rgstrAlpnIds;
    DWORD grbitDisabledProtocols;
    DWORD cDisabledCrypto;
    PCRYPTO_SETTINGS pDisabledCrypto;
    DWORD dwFlags;
} TLS_PARAMETERS, *PTLS_PARAMETERS;
typedef struct _SCH_CREDENTIALS
{
    DWORD dwVersion;
    DWORD dwCredFormat;
    DWORD cCreds;
    PCCERT_CONTEXT *paCred;
    HCERTSTORE hRootStore;
    DWORD cMappers;
    struct _HMAPPER **aphMappers;
    DWORD dwSessionLifespan;
    DWORD dwFlags;
    DWORD cTlsParameters;
    PTLS_PARAMETERS pTlsParameters;
} SCH_CREDENTIALS, *PSCH_CREDENTIALS;
typedef struct _SEND_GENERIC_TLS_EXTENSION
{
    WORD ExtensionType;
    WORD HandshakeType;
    DWORD Flags;
    WORD BufferSize;
    UCHAR Buffer[ANYSIZE_ARRAY];
} SEND_GENERIC_TLS_EXTENSION, *PSEND_GENERIC_TLS_EXTENSION;
typedef struct _TLS_EXTENSION_SUBSCRIPTION
{
    WORD ExtensionType;
    WORD HandshakeType;
} TLS_EXTENSION_SUBSCRIPTION, *PTLS_EXTENSION_SUBSCRIPTION;
typedef struct _SUBSCRIBE_GENERIC_TLS_EXTENSION
{
    DWORD Flags;
    DWORD SubscriptionsCount;
    TLS_EXTENSION_SUBSCRIPTION Subscriptions[ANYSIZE_ARRAY];
} SUBSCRIBE_GENERIC_TLS_EXTENSION, *PSUBSCRIBE_GENERIC_TLS_EXTENSION;
typedef struct _SCHANNEL_CERT_HASH
{
    DWORD dwLength;
    DWORD dwFlags;
    HCRYPTPROV hProv;
    BYTE ShaHash[20];
} SCHANNEL_CERT_HASH, *PSCHANNEL_CERT_HASH;
typedef struct _SCHANNEL_CERT_HASH_STORE
{
    DWORD dwLength;
    DWORD dwFlags;
    HCRYPTPROV hProv;
    BYTE ShaHash[20];
    WCHAR pwszStoreName[SCH_CRED_MAX_STORE_NAME_SIZE];
} SCHANNEL_CERT_HASH_STORE, *PSCHANNEL_CERT_HASH_STORE;
typedef struct _SCHANNEL_ALERT_TOKEN
{
    DWORD dwTokenType;
    DWORD dwAlertType;
    DWORD dwAlertNumber;
} SCHANNEL_ALERT_TOKEN;
typedef struct _SCHANNEL_SESSION_TOKEN
{
    DWORD dwTokenType;
    DWORD dwFlags;
} SCHANNEL_SESSION_TOKEN;
typedef struct _SCHANNEL_CLIENT_SIGNATURE
{
    DWORD cbLength;
    ALG_ID aiHash;
    DWORD cbHash;
    BYTE HashValue[36];
    BYTE CertThumbprint[20];
} SCHANNEL_CLIENT_SIGNATURE, *PSCHANNEL_CLIENT_SIGNATURE;
                                         SP_PROT_TLS1_0_CLIENT)
                                         SP_PROT_TLS1_1_CLIENT)
                                         SP_PROT_TLS1_2_CLIENT)
                                         SP_PROT_TLS1_3_CLIENT)
                                         SP_PROT_DTLS_CLIENT )
                                         SP_PROT_DTLS1_2_SERVER)
                                         SP_PROT_DTLS1_2_CLIENT)
                                         SP_PROT_DTLS1_X_CLIENT)
                                         SP_PROT_TLS1_2_SERVER | \
                                         SP_PROT_TLS1_3_SERVER)
                                         SP_PROT_TLS1_2_CLIENT | \
                                         SP_PROT_TLS1_3_CLIENT)
                                         SP_PROT_TLS1_1PLUS_CLIENT)
                                         SP_PROT_TLS1_3PLUS_CLIENT)
                                         SP_PROT_TLS1_1_SERVER | \
                                         SP_PROT_TLS1_2_SERVER | \
                                         SP_PROT_TLS1_3_SERVER)
                                         SP_PROT_TLS1_1_CLIENT | \
                                         SP_PROT_TLS1_2_CLIENT | \
                                         SP_PROT_TLS1_3_CLIENT)
                                         SP_PROT_TLS1_X_CLIENT)
                                         SP_PROT_SSL3_CLIENT)
                                         SP_PROT_SSL3_SERVER)
                                         SP_PROT_TLS1_X_CLIENT | \
                                         SP_PROT_DTLS1_X_CLIENT )
                                         SP_PROT_TLS1_X_SERVER | \
                                         SP_PROT_DTLS1_X_SERVER )
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef BOOL
(WINAPI * SSL_EMPTY_CACHE_FN_A)(
    LPSTR pszTargetName,
    DWORD dwFlags);
BOOL
WINAPI
SslEmptyCacheA(_In_ LPSTR pszTargetName,
               _In_ DWORD dwFlags);
typedef BOOL
(WINAPI * SSL_EMPTY_CACHE_FN_W)(
    LPWSTR pszTargetName,
    DWORD dwFlags);
BOOL
WINAPI
SslEmptyCacheW(_In_ LPWSTR pszTargetName,
               _In_ DWORD dwFlags);
typedef struct _SSL_CREDENTIAL_CERTIFICATE {
    DWORD cbPrivateKey;
    PBYTE pPrivateKey;
    DWORD cbCertificate;
    PBYTE pCertificate;
    PSTR pszPassword;
} SSL_CREDENTIAL_CERTIFICATE, * PSSL_CREDENTIAL_CERTIFICATE;
struct _HMAPPER;
typedef struct _SCH_CRED
{
    DWORD dwVersion;
    DWORD cCreds;
    PVOID *paSecret;
    PVOID *paPublic;
    DWORD cMappers;
    struct _HMAPPER **aphMappers;
} SCH_CRED, * PSCH_CRED;
typedef struct _SCH_CRED_SECRET_CAPI
{
    DWORD dwType;
    HCRYPTPROV hProv;
} SCH_CRED_SECRET_CAPI, * PSCH_CRED_SECRET_CAPI;
typedef struct _SCH_CRED_SECRET_PRIVKEY
{
    DWORD dwType;
    PBYTE pPrivateKey;
    DWORD cbPrivateKey;
    PSTR pszPassword;
} SCH_CRED_SECRET_PRIVKEY, * PSCH_CRED_SECRET_PRIVKEY;
typedef struct _SCH_CRED_PUBLIC_CERTCHAIN
{
    DWORD dwType;
    DWORD cbCertChain;
    PBYTE pCertChain;
} SCH_CRED_PUBLIC_CERTCHAIN, *PSCH_CRED_PUBLIC_CERTCHAIN;
typedef struct _PctPublicKey
{
    DWORD Type;
    DWORD cbKey;
    UCHAR pKey[1];
} PctPublicKey;
typedef struct _X509Certificate {
    DWORD Version;
    DWORD SerialNumber[4];
    ALG_ID SignatureAlgorithm;
    FILETIME ValidFrom;
    FILETIME ValidUntil;
    PSTR pszIssuer;
    PSTR pszSubject;
    PctPublicKey *pPublicKey;
} X509Certificate, * PX509Certificate;
BOOL
WINAPI
SslGenerateKeyPair(
    PSSL_CREDENTIAL_CERTIFICATE pCerts,
    _In_ PSTR pszDN,
    _In_ PSTR pszPassword,
    DWORD Bits );
VOID
WINAPI
SslGenerateRandomBits(
    PUCHAR pRandomData,
    LONG cRandomData
    );
BOOL
WINAPI
SslCrackCertificate(
    PUCHAR pbCertificate,
    DWORD cbCertificate,
    DWORD dwFlags,
    PX509Certificate * ppCertificate
    );
VOID
WINAPI
SslFreeCertificate(
    PX509Certificate pCertificate
    );
DWORD
WINAPI
SslGetMaximumKeySize(
    DWORD Reserved );
BOOL
WINAPI
SslGetDefaultIssuers(
    PBYTE pbIssuers,
    DWORD *pcbIssuers);
typedef BOOL
(WINAPI * SSL_CRACK_CERTIFICATE_FN)
(
    PUCHAR pbCertificate,
    DWORD cbCertificate,
    BOOL VerifySignature,
    PX509Certificate * ppCertificate
);
typedef VOID
(WINAPI * SSL_FREE_CERTIFICATE_FN)
(
    PX509Certificate pCertificate
);
typedef SECURITY_STATUS
(WINAPI * SslGetServerIdentityFn)
(
    _In_reads_bytes_(ClientHelloSize) PBYTE ClientHello,
    _In_ DWORD ClientHelloSize,
    _Outptr_result_bytebuffer_(*ServerIdentitySize) PBYTE* ServerIdentity,
    _Out_ PDWORD ServerIdentitySize,
    _In_ DWORD Flags
);
EXTERN_C
SECURITY_STATUS
WINAPI
SslGetServerIdentity(
    _In_reads_bytes_(ClientHelloSize) PBYTE ClientHello,
    _In_ DWORD ClientHelloSize,
    _Outptr_result_bytebuffer_(*ServerIdentitySize) PBYTE* ServerIdentity,
    _Out_ PDWORD ServerIdentitySize,
    _In_ DWORD Flags);
typedef struct _SCH_EXTENSION_DATA
{
    WORD ExtensionType;
    const BYTE* pExtData;
    DWORD cbExtData;
}SCH_EXTENSION_DATA;
typedef enum _SchGetExtensionsOptions
{
    SCH_EXTENSIONS_OPTIONS_NONE = 0x0,
    SCH_NO_RECORD_HEADER = 0x1
}SchGetExtensionsOptions;
DEFINE_ENUM_FLAG_OPERATORS(SchGetExtensionsOptions);
typedef SECURITY_STATUS
(WINAPI * SslGetExtensionsFn)
(
    _In_reads_(clientHelloByteSize) const BYTE* clientHello,
    _In_ DWORD clientHelloByteSize,
    _Inout_updates_(genericExtensionsCount) SCH_EXTENSION_DATA* genericExtensions,
    _In_ BYTE genericExtensionsCount,
    _Out_ DWORD* bytesToRead,
    _In_ SchGetExtensionsOptions flags
);
EXTERN_C
SECURITY_STATUS
WINAPI
SslGetExtensions(
    _In_reads_(clientHelloByteSize) const BYTE* clientHello,
    _In_ DWORD clientHelloByteSize,
    _Inout_updates_(genericExtensionsCount) SCH_EXTENSION_DATA* genericExtensions,
    _In_ BYTE genericExtensionsCount,
    _Out_ DWORD* bytesToRead,
    _In_ SchGetExtensionsOptions flags
);
#endif
#pragma endregion
