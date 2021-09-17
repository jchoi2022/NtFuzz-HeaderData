#include <specstrings.h>
#include <winapifamily.h>
extern "C" {
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef _Return_type_success_(return >= 0) long HRESULT;
typedef unsigned int ALG_ID;
typedef ULONG_PTR HCRYPTPROV;
typedef ULONG_PTR HCRYPTKEY;
typedef ULONG_PTR HCRYPTHASH;
    "Software\\Policies\\Microsoft\\Cryptography"
typedef struct _CMS_KEY_INFO {
    DWORD dwVersion;
    ALG_ID Algid;
    BYTE *pbOID;
    DWORD cbOID;
} CMS_KEY_INFO, *PCMS_KEY_INFO;
typedef struct _HMAC_Info {
    ALG_ID HashAlgid;
    BYTE *pbInnerString;
    DWORD cbInnerString;
    BYTE *pbOuterString;
    DWORD cbOuterString;
} HMAC_INFO, *PHMAC_INFO;
typedef struct _SCHANNEL_ALG {
    DWORD dwUse;
    ALG_ID Algid;
    DWORD cBits;
    DWORD dwFlags;
    DWORD dwReserved;
} SCHANNEL_ALG, *PSCHANNEL_ALG;
typedef struct _PROV_ENUMALGS {
    ALG_ID aiAlgid;
    DWORD dwBitLen;
    DWORD dwNameLen;
    CHAR szName[20];
} PROV_ENUMALGS;
typedef struct _PROV_ENUMALGS_EX {
    ALG_ID aiAlgid;
    DWORD dwDefaultLen;
    DWORD dwMinLen;
    DWORD dwMaxLen;
    DWORD dwProtocols;
    DWORD dwNameLen;
    CHAR szName[20];
    DWORD dwLongNameLen;
    CHAR szLongName[40];
} PROV_ENUMALGS_EX;
typedef struct _PUBLICKEYSTRUC {
        BYTE bType;
        BYTE bVersion;
        WORD reserved;
        ALG_ID aiKeyAlg;
} BLOBHEADER, PUBLICKEYSTRUC;
typedef struct _RSAPUBKEY {
        DWORD magic;
        DWORD bitlen;
        DWORD pubexp;
} RSAPUBKEY;
typedef struct _PUBKEY {
        DWORD magic;
        DWORD bitlen;
} DHPUBKEY, DSSPUBKEY, KEAPUBKEY, TEKPUBKEY;
typedef struct _DSSSEED {
        DWORD counter;
        BYTE seed[20];
} DSSSEED;
typedef struct _PUBKEYVER3 {
        DWORD magic;
        DWORD bitlenP;
        DWORD bitlenQ;
        DWORD bitlenJ;
        DSSSEED DSSSeed;
} DHPUBKEY_VER3, DSSPUBKEY_VER3;
typedef struct _PRIVKEYVER3 {
        DWORD magic;
        DWORD bitlenP;
        DWORD bitlenQ;
        DWORD bitlenJ;
        DWORD bitlenX;
        DSSSEED DSSSeed;
} DHPRIVKEY_VER3, DSSPRIVKEY_VER3;
typedef struct _KEY_TYPE_SUBTYPE {
        DWORD dwKeySpec;
        GUID Type;
        GUID Subtype;
} KEY_TYPE_SUBTYPE, *PKEY_TYPE_SUBTYPE;
typedef struct _CERT_FORTEZZA_DATA_PROP {
    unsigned char SerialNumber[8];
    int CertIndex;
    unsigned char CertLabel[36];
} CERT_FORTEZZA_DATA_PROP;
typedef struct _CRYPT_RC4_KEY_STATE {
    unsigned char Key[16];
    unsigned char SBox[256];
    unsigned char i;
    unsigned char j;
} CRYPT_RC4_KEY_STATE, *PCRYPT_RC4_KEY_STATE;
typedef struct _CRYPT_DES_KEY_STATE {
    unsigned char Key[8];
    unsigned char IV[8];
    unsigned char Feedback[8];
} CRYPT_DES_KEY_STATE, *PCRYPT_DES_KEY_STATE;
typedef struct _CRYPT_3DES_KEY_STATE {
    unsigned char Key[24];
    unsigned char IV[8];
    unsigned char Feedback[8];
} CRYPT_3DES_KEY_STATE, *PCRYPT_3DES_KEY_STATE;
typedef struct _CRYPT_AES_128_KEY_STATE {
    unsigned char Key[16];
    unsigned char IV[16];
    unsigned char EncryptionState[11][16];
    unsigned char DecryptionState[11][16];
    unsigned char Feedback[16];
} CRYPT_AES_128_KEY_STATE, *PCRYPT_AES_128_KEY_STATE;
typedef struct _CRYPT_AES_256_KEY_STATE {
    unsigned char Key[32];
    unsigned char IV[16];
    unsigned char EncryptionState[15][16];
    unsigned char DecryptionState[15][16];
    unsigned char Feedback[16];
} CRYPT_AES_256_KEY_STATE, *PCRYPT_AES_256_KEY_STATE;
typedef struct _CRYPTOAPI_BLOB {
                            DWORD cbData;
    _Field_size_bytes_(cbData) BYTE *pbData;
} CRYPT_INTEGER_BLOB, *PCRYPT_INTEGER_BLOB,
CRYPT_UINT_BLOB, *PCRYPT_UINT_BLOB,
CRYPT_OBJID_BLOB, *PCRYPT_OBJID_BLOB,
CERT_NAME_BLOB, *PCERT_NAME_BLOB,
CERT_RDN_VALUE_BLOB, *PCERT_RDN_VALUE_BLOB,
CERT_BLOB, *PCERT_BLOB,
CRL_BLOB, *PCRL_BLOB,
DATA_BLOB, *PDATA_BLOB,
CRYPT_DATA_BLOB, *PCRYPT_DATA_BLOB,
CRYPT_HASH_BLOB, *PCRYPT_HASH_BLOB,
CRYPT_DIGEST_BLOB, *PCRYPT_DIGEST_BLOB,
CRYPT_DER_BLOB, *PCRYPT_DER_BLOB,
CRYPT_ATTR_BLOB, *PCRYPT_ATTR_BLOB;
typedef struct _CMS_DH_KEY_INFO {
    DWORD dwVersion;
    ALG_ID Algid;
    LPSTR pszContentEncObjId;
    CRYPT_DATA_BLOB PubInfo;
    void *pReserved;
} CMS_DH_KEY_INFO, *PCMS_DH_KEY_INFO;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINADVAPI
BOOL
WINAPI
CryptAcquireContextA(
    _Out_ HCRYPTPROV *phProv,
    _In_opt_ LPCSTR szContainer,
    _In_opt_ LPCSTR szProvider,
    _In_ DWORD dwProvType,
    _In_ DWORD dwFlags
    );
WINADVAPI
BOOL
WINAPI
CryptAcquireContextW(
    _Out_ HCRYPTPROV *phProv,
    _In_opt_ LPCWSTR szContainer,
    _In_opt_ LPCWSTR szProvider,
    _In_ DWORD dwProvType,
    _In_ DWORD dwFlags
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINADVAPI
BOOL
WINAPI
CryptReleaseContext(
    _In_ HCRYPTPROV hProv,
    _In_ DWORD dwFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINADVAPI
BOOL
WINAPI
CryptGenKey(
    _In_ HCRYPTPROV hProv,
    _In_ ALG_ID Algid,
    _In_ DWORD dwFlags,
    _Out_ HCRYPTKEY *phKey
    );
WINADVAPI
BOOL
WINAPI
CryptDeriveKey(
    _In_ HCRYPTPROV hProv,
    _In_ ALG_ID Algid,
    _In_ HCRYPTHASH hBaseData,
    _In_ DWORD dwFlags,
    _Out_ HCRYPTKEY *phKey
    );
WINADVAPI
BOOL
WINAPI
CryptDestroyKey(
    _In_ HCRYPTKEY hKey
    );
WINADVAPI
BOOL
WINAPI
CryptSetKeyParam(
    _In_ HCRYPTKEY hKey,
    _In_ DWORD dwParam,
    _In_ CONST BYTE *pbData,
    _In_ DWORD dwFlags
    );
WINADVAPI
BOOL
WINAPI
CryptGetKeyParam(
    _In_ HCRYPTKEY hKey,
    _In_ DWORD dwParam,
    _Out_writes_bytes_to_opt_(*pdwDataLen, *pdwDataLen) BYTE *pbData,
    _Inout_ DWORD *pdwDataLen,
    _In_ DWORD dwFlags
    );
WINADVAPI
BOOL
WINAPI
CryptSetHashParam(
    _In_ HCRYPTHASH hHash,
    _In_ DWORD dwParam,
    _In_ CONST BYTE *pbData,
    _In_ DWORD dwFlags
    );
WINADVAPI
BOOL
WINAPI
CryptGetHashParam(
    _In_ HCRYPTHASH hHash,
    _In_ DWORD dwParam,
    _Out_writes_bytes_to_opt_(*pdwDataLen, *pdwDataLen) BYTE *pbData,
    _Inout_ DWORD *pdwDataLen,
    _In_ DWORD dwFlags
    );
WINADVAPI
BOOL
WINAPI
CryptSetProvParam(
    _In_ HCRYPTPROV hProv,
    _In_ DWORD dwParam,
    _In_ CONST BYTE *pbData,
    _In_ DWORD dwFlags
    );
WINADVAPI
BOOL
WINAPI
CryptGetProvParam(
    _In_ HCRYPTPROV hProv,
    _In_ DWORD dwParam,
    _Out_writes_bytes_to_opt_(*pdwDataLen, *pdwDataLen) BYTE *pbData,
    _Inout_ DWORD *pdwDataLen,
    _In_ DWORD dwFlags
    );
WINADVAPI
BOOL
WINAPI
CryptGenRandom(
    _In_ HCRYPTPROV hProv,
    _In_ DWORD dwLen,
    _Inout_updates_bytes_(dwLen) BYTE *pbBuffer
    );
WINADVAPI
BOOL
WINAPI
CryptGetUserKey(
    _In_ HCRYPTPROV hProv,
    _In_ DWORD dwKeySpec,
    _Out_ HCRYPTKEY *phUserKey
    );
WINADVAPI
BOOL
WINAPI
CryptExportKey(
    _In_ HCRYPTKEY hKey,
    _In_ HCRYPTKEY hExpKey,
    _In_ DWORD dwBlobType,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*pdwDataLen, *pdwDataLen) BYTE *pbData,
    _Inout_ DWORD *pdwDataLen
    );
WINADVAPI
BOOL
WINAPI
CryptImportKey(
    _In_ HCRYPTPROV hProv,
    _In_reads_bytes_(dwDataLen) CONST BYTE *pbData,
    _In_ DWORD dwDataLen,
    _In_ HCRYPTKEY hPubKey,
    _In_ DWORD dwFlags,
    _Out_ HCRYPTKEY *phKey
    );
WINADVAPI
_Success_(0 != return) BOOL
WINAPI
CryptEncrypt(
    _In_ HCRYPTKEY hKey,
    _In_ HCRYPTHASH hHash,
    _In_ BOOL Final,
    _In_ DWORD dwFlags,
    _Inout_updates_bytes_to_opt_(dwBufLen, *pdwDataLen) BYTE *pbData,
    _Inout_ DWORD *pdwDataLen,
    _In_ DWORD dwBufLen
    );
WINADVAPI
_Success_(0 != return) BOOL
WINAPI
CryptDecrypt(
    _In_ HCRYPTKEY hKey,
    _In_ HCRYPTHASH hHash,
    _In_ BOOL Final,
    _In_ DWORD dwFlags,
    _Inout_updates_bytes_to_(*pdwDataLen, *pdwDataLen) BYTE *pbData,
    _Inout_ DWORD *pdwDataLen
    );
WINADVAPI
BOOL
WINAPI
CryptCreateHash(
    _In_ HCRYPTPROV hProv,
    _In_ ALG_ID Algid,
    _In_ HCRYPTKEY hKey,
    _In_ DWORD dwFlags,
    _Out_ HCRYPTHASH *phHash
    );
WINADVAPI
BOOL
WINAPI
CryptHashData(
    _In_ HCRYPTHASH hHash,
    _In_reads_bytes_(dwDataLen) CONST BYTE *pbData,
    _In_ DWORD dwDataLen,
    _In_ DWORD dwFlags
    );
WINADVAPI
BOOL
WINAPI
CryptHashSessionKey(
    _In_ HCRYPTHASH hHash,
    _In_ HCRYPTKEY hKey,
    _In_ DWORD dwFlags
    );
WINADVAPI
BOOL
WINAPI
CryptDestroyHash(
    _In_ HCRYPTHASH hHash
    );
WINADVAPI
BOOL
WINAPI
CryptSignHashA(
    _In_ HCRYPTHASH hHash,
    _In_ DWORD dwKeySpec,
    _In_opt_ LPCSTR szDescription,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*pdwSigLen, *pdwSigLen) BYTE *pbSignature,
    _Inout_ DWORD *pdwSigLen
    );
WINADVAPI
BOOL
WINAPI
CryptSignHashW(
    _In_ HCRYPTHASH hHash,
    _In_ DWORD dwKeySpec,
    _In_opt_ LPCWSTR szDescription,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*pdwSigLen, *pdwSigLen) BYTE *pbSignature,
    _Inout_ DWORD *pdwSigLen
    );
WINADVAPI
BOOL
WINAPI
CryptVerifySignatureA(
    _In_ HCRYPTHASH hHash,
    _In_reads_bytes_(dwSigLen) CONST BYTE *pbSignature,
    _In_ DWORD dwSigLen,
    _In_ HCRYPTKEY hPubKey,
    _In_opt_ LPCSTR szDescription,
    _In_ DWORD dwFlags
    );
WINADVAPI
BOOL
WINAPI
CryptVerifySignatureW(
    _In_ HCRYPTHASH hHash,
    _In_reads_bytes_(dwSigLen) CONST BYTE *pbSignature,
    _In_ DWORD dwSigLen,
    _In_ HCRYPTKEY hPubKey,
    _In_opt_ LPCWSTR szDescription,
    _In_ DWORD dwFlags
    );
WINADVAPI
BOOL
WINAPI
CryptSetProviderA(
    _In_ LPCSTR pszProvName,
    _In_ DWORD dwProvType
    );
WINADVAPI
BOOL
WINAPI
CryptSetProviderW(
    _In_ LPCWSTR pszProvName,
    _In_ DWORD dwProvType
    );
WINADVAPI
BOOL
WINAPI
CryptSetProviderExA(
    _In_ LPCSTR pszProvName,
    _In_ DWORD dwProvType,
    _Reserved_ DWORD *pdwReserved,
    _In_ DWORD dwFlags
    );
WINADVAPI
BOOL
WINAPI
CryptSetProviderExW(
    _In_ LPCWSTR pszProvName,
    _In_ DWORD dwProvType,
    _Reserved_ DWORD *pdwReserved,
    _In_ DWORD dwFlags
    );
WINADVAPI
_Success_(0 != return) BOOL
WINAPI
CryptGetDefaultProviderA(
    _In_ DWORD dwProvType,
    _Reserved_ DWORD *pdwReserved,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*pcbProvName, *pcbProvName) LPSTR pszProvName,
    _Inout_ DWORD *pcbProvName
    );
WINADVAPI
_Success_(0 != return) BOOL
WINAPI
CryptGetDefaultProviderW(
    _In_ DWORD dwProvType,
    _Reserved_ DWORD *pdwReserved,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*pcbProvName, *pcbProvName) LPWSTR pszProvName,
    _Inout_ DWORD *pcbProvName
    );
WINADVAPI
_Success_(0 != return) BOOL
WINAPI
CryptEnumProviderTypesA(
    _In_ DWORD dwIndex,
    _Reserved_ DWORD *pdwReserved,
    _In_ DWORD dwFlags,
    _Out_ DWORD *pdwProvType,
    _Out_writes_bytes_to_opt_(*pcbTypeName, *pcbTypeName) LPSTR szTypeName,
    _Inout_ DWORD *pcbTypeName
    );
WINADVAPI
_Success_(0 != return) BOOL
WINAPI
CryptEnumProviderTypesW(
    _In_ DWORD dwIndex,
    _Reserved_ DWORD *pdwReserved,
    _In_ DWORD dwFlags,
    _Out_ DWORD *pdwProvType,
    _Out_writes_bytes_to_opt_(*pcbTypeName, *pcbTypeName) LPWSTR szTypeName,
    _Inout_ DWORD *pcbTypeName
    );
WINADVAPI
_Success_(0 != return) BOOL
WINAPI
CryptEnumProvidersA(
    _In_ DWORD dwIndex,
    _Reserved_ DWORD *pdwReserved,
    _In_ DWORD dwFlags,
    _Out_ DWORD *pdwProvType,
    _Out_writes_bytes_to_opt_(*pcbProvName, *pcbProvName) LPSTR szProvName,
    _Inout_ DWORD *pcbProvName
    );
WINADVAPI
_Success_(0 != return) BOOL
WINAPI
CryptEnumProvidersW(
    _In_ DWORD dwIndex,
    _Reserved_ DWORD *pdwReserved,
    _In_ DWORD dwFlags,
    _Out_ DWORD *pdwProvType,
    _Out_writes_bytes_to_opt_(*pcbProvName, *pcbProvName) LPWSTR szProvName,
    _Inout_ DWORD *pcbProvName
    );
WINADVAPI
BOOL
WINAPI
CryptContextAddRef(
    _In_ HCRYPTPROV hProv,
    _Reserved_ DWORD *pdwReserved,
    _In_ DWORD dwFlags
    );
WINADVAPI
BOOL
WINAPI
CryptDuplicateKey(
    _In_ HCRYPTKEY hKey,
    _Reserved_ DWORD *pdwReserved,
    _In_ DWORD dwFlags,
    _Out_ HCRYPTKEY *phKey
    );
WINADVAPI
BOOL
WINAPI
CryptDuplicateHash(
    _In_ HCRYPTHASH hHash,
    _Reserved_ DWORD *pdwReserved,
    _In_ DWORD dwFlags,
    _Out_ HCRYPTHASH *phHash
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED)
BOOL
__cdecl
GetEncSChannel(
    _Outptr_result_buffer_(*dwDecSize) BYTE **pData,
    _Out_ DWORD *dwDecSize
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
#include <bcrypt.h>
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#include <ncrypt.h>
typedef ULONG_PTR HCRYPTPROV_OR_NCRYPT_KEY_HANDLE;
typedef ULONG_PTR HCRYPTPROV_LEGACY;
typedef struct _CRYPT_BIT_BLOB {
    DWORD cbData;
    BYTE *pbData;
    DWORD cUnusedBits;
} CRYPT_BIT_BLOB, *PCRYPT_BIT_BLOB;
typedef struct _CRYPT_ALGORITHM_IDENTIFIER {
    LPSTR pszObjId;
    CRYPT_OBJID_BLOB Parameters;
} CRYPT_ALGORITHM_IDENTIFIER, *PCRYPT_ALGORITHM_IDENTIFIER;
typedef struct _CRYPT_OBJID_TABLE {
    DWORD dwAlgId;
    LPCSTR pszObjId;
} CRYPT_OBJID_TABLE, *PCRYPT_OBJID_TABLE;
typedef struct _CRYPT_HASH_INFO {
    CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
    CRYPT_HASH_BLOB Hash;
} CRYPT_HASH_INFO, *PCRYPT_HASH_INFO;
typedef struct _CERT_EXTENSION {
    LPSTR pszObjId;
    BOOL fCritical;
    CRYPT_OBJID_BLOB Value;
} CERT_EXTENSION, *PCERT_EXTENSION;
typedef const CERT_EXTENSION* PCCERT_EXTENSION;
typedef struct _CRYPT_ATTRIBUTE_TYPE_VALUE {
    LPSTR pszObjId;
    CRYPT_OBJID_BLOB Value;
} CRYPT_ATTRIBUTE_TYPE_VALUE, *PCRYPT_ATTRIBUTE_TYPE_VALUE;
typedef struct _CRYPT_ATTRIBUTE {
    LPSTR pszObjId;
    DWORD cValue;
    PCRYPT_ATTR_BLOB rgValue;
} CRYPT_ATTRIBUTE, *PCRYPT_ATTRIBUTE;
typedef struct _CRYPT_ATTRIBUTES {
    DWORD cAttr;
    PCRYPT_ATTRIBUTE rgAttr;
} CRYPT_ATTRIBUTES, *PCRYPT_ATTRIBUTES;
typedef struct _CERT_RDN_ATTR {
    LPSTR pszObjId;
    DWORD dwValueType;
    CERT_RDN_VALUE_BLOB Value;
} CERT_RDN_ATTR, *PCERT_RDN_ATTR;
                (((X) & CERT_RDN_TYPE_MASK) >= CERT_RDN_NUMERIC_STRING)
typedef struct _CERT_RDN {
    DWORD cRDNAttr;
    PCERT_RDN_ATTR rgRDNAttr;
} CERT_RDN, *PCERT_RDN;
typedef struct _CERT_NAME_INFO {
    DWORD cRDN;
    PCERT_RDN rgRDN;
} CERT_NAME_INFO, *PCERT_NAME_INFO;
typedef struct _CERT_NAME_VALUE {
    DWORD dwValueType;
    CERT_RDN_VALUE_BLOB Value;
} CERT_NAME_VALUE, *PCERT_NAME_VALUE;
typedef struct _CERT_PUBLIC_KEY_INFO {
    CRYPT_ALGORITHM_IDENTIFIER Algorithm;
    CRYPT_BIT_BLOB PublicKey;
} CERT_PUBLIC_KEY_INFO, *PCERT_PUBLIC_KEY_INFO;
typedef struct _CRYPT_ECC_PRIVATE_KEY_INFO{
    DWORD dwVersion;
    CRYPT_DER_BLOB PrivateKey;
    LPSTR szCurveOid;
    CRYPT_BIT_BLOB PublicKey;
} CRYPT_ECC_PRIVATE_KEY_INFO, *PCRYPT_ECC_PRIVATE_KEY_INFO;
typedef struct _CRYPT_PRIVATE_KEY_INFO{
    DWORD Version;
    CRYPT_ALGORITHM_IDENTIFIER Algorithm;
    CRYPT_DER_BLOB PrivateKey;
    PCRYPT_ATTRIBUTES pAttributes;
} CRYPT_PRIVATE_KEY_INFO, *PCRYPT_PRIVATE_KEY_INFO;
typedef struct _CRYPT_ENCRYPTED_PRIVATE_KEY_INFO{
    CRYPT_ALGORITHM_IDENTIFIER EncryptionAlgorithm;
    CRYPT_DATA_BLOB EncryptedPrivateKey;
} CRYPT_ENCRYPTED_PRIVATE_KEY_INFO, *PCRYPT_ENCRYPTED_PRIVATE_KEY_INFO;
typedef BOOL (CALLBACK *PCRYPT_DECRYPT_PRIVATE_KEY_FUNC)(
    _In_ CRYPT_ALGORITHM_IDENTIFIER Algorithm,
    _In_ CRYPT_DATA_BLOB EncryptedPrivateKey,
    _Out_writes_bytes_opt_ (*pcbClearTextKey) BYTE* pbClearTextKey,
    _Inout_ DWORD* pcbClearTextKey,
    _In_ LPVOID pVoidDecryptFunc);
typedef BOOL (CALLBACK *PCRYPT_ENCRYPT_PRIVATE_KEY_FUNC)(
    _Out_ CRYPT_ALGORITHM_IDENTIFIER* pAlgorithm,
    _In_ CRYPT_DATA_BLOB* pClearTextPrivateKey,
    _Out_writes_bytes_opt_ (*pcbEncryptedKey) BYTE* pbEncryptedKey,
    _Inout_ DWORD* pcbEncryptedKey,
    _In_ LPVOID pVoidEncryptFunc);
typedef BOOL (CALLBACK *PCRYPT_RESOLVE_HCRYPTPROV_FUNC)(
                                                       CRYPT_PRIVATE_KEY_INFO *pPrivateKeyInfo,
                                                       HCRYPTPROV *phCryptProv,
                                                       LPVOID pVoidResolveFunc);
typedef struct _CRYPT_PKCS8_IMPORT_PARAMS{
    CRYPT_DIGEST_BLOB PrivateKey;
    PCRYPT_RESOLVE_HCRYPTPROV_FUNC pResolvehCryptProvFunc;
    LPVOID pVoidResolveFunc;
    PCRYPT_DECRYPT_PRIVATE_KEY_FUNC pDecryptPrivateKeyFunc;
    LPVOID pVoidDecryptFunc;
} CRYPT_PKCS8_IMPORT_PARAMS, *PCRYPT_PKCS8_IMPORT_PARAMS, CRYPT_PRIVATE_KEY_BLOB_AND_PARAMS, *PCRYPT_PRIVATE_KEY_BLOB_AND_PARAMS;
typedef struct _CRYPT_PKCS8_EXPORT_PARAMS{
    HCRYPTPROV hCryptProv;
    DWORD dwKeySpec;
    LPSTR pszPrivateKeyObjId;
    PCRYPT_ENCRYPT_PRIVATE_KEY_FUNC pEncryptPrivateKeyFunc;
    LPVOID pVoidEncryptFunc;
} CRYPT_PKCS8_EXPORT_PARAMS, *PCRYPT_PKCS8_EXPORT_PARAMS;
typedef struct _CERT_INFO {
    DWORD dwVersion;
    CRYPT_INTEGER_BLOB SerialNumber;
    CRYPT_ALGORITHM_IDENTIFIER SignatureAlgorithm;
    CERT_NAME_BLOB Issuer;
    FILETIME NotBefore;
    FILETIME NotAfter;
    CERT_NAME_BLOB Subject;
    CERT_PUBLIC_KEY_INFO SubjectPublicKeyInfo;
    CRYPT_BIT_BLOB IssuerUniqueId;
    CRYPT_BIT_BLOB SubjectUniqueId;
    DWORD cExtension;
    PCERT_EXTENSION rgExtension;
} CERT_INFO, *PCERT_INFO;
typedef struct _CRL_ENTRY {
    CRYPT_INTEGER_BLOB SerialNumber;
    FILETIME RevocationDate;
    DWORD cExtension;
    PCERT_EXTENSION rgExtension;
} CRL_ENTRY, *PCRL_ENTRY;
typedef struct _CRL_INFO {
    DWORD dwVersion;
    CRYPT_ALGORITHM_IDENTIFIER SignatureAlgorithm;
    CERT_NAME_BLOB Issuer;
    FILETIME ThisUpdate;
    FILETIME NextUpdate;
    DWORD cCRLEntry;
    PCRL_ENTRY rgCRLEntry;
    DWORD cExtension;
    PCERT_EXTENSION rgExtension;
} CRL_INFO, *PCRL_INFO;
typedef struct _CERT_OR_CRL_BLOB {
    DWORD dwChoice;
    DWORD cbEncoded;
    _Field_size_bytes_(cbEncoded)
    BYTE *pbEncoded;
} CERT_OR_CRL_BLOB, * PCERT_OR_CRL_BLOB;
typedef struct _CERT_OR_CRL_BUNDLE {
    DWORD cItem;
    _Field_size_(cItem)
    PCERT_OR_CRL_BLOB rgItem;
} CERT_OR_CRL_BUNDLE, *PCERT_OR_CRL_BUNDLE;
typedef struct _CERT_REQUEST_INFO {
    DWORD dwVersion;
    CERT_NAME_BLOB Subject;
    CERT_PUBLIC_KEY_INFO SubjectPublicKeyInfo;
    DWORD cAttribute;
    PCRYPT_ATTRIBUTE rgAttribute;
} CERT_REQUEST_INFO, *PCERT_REQUEST_INFO;
typedef struct _CERT_KEYGEN_REQUEST_INFO {
    DWORD dwVersion;
    CERT_PUBLIC_KEY_INFO SubjectPublicKeyInfo;
    LPWSTR pwszChallengeString;
} CERT_KEYGEN_REQUEST_INFO, *PCERT_KEYGEN_REQUEST_INFO;
typedef struct _CERT_SIGNED_CONTENT_INFO {
    CRYPT_DER_BLOB ToBeSigned;
    CRYPT_ALGORITHM_IDENTIFIER SignatureAlgorithm;
    CRYPT_BIT_BLOB Signature;
} CERT_SIGNED_CONTENT_INFO, *PCERT_SIGNED_CONTENT_INFO;
typedef struct _CTL_USAGE {
    DWORD cUsageIdentifier;
    LPSTR *rgpszUsageIdentifier;
} CTL_USAGE, *PCTL_USAGE,
CERT_ENHKEY_USAGE, *PCERT_ENHKEY_USAGE;
typedef const CTL_USAGE* PCCTL_USAGE;
typedef const CERT_ENHKEY_USAGE* PCCERT_ENHKEY_USAGE;
typedef struct _CTL_ENTRY {
    CRYPT_DATA_BLOB SubjectIdentifier;
    DWORD cAttribute;
    PCRYPT_ATTRIBUTE rgAttribute;
} CTL_ENTRY, *PCTL_ENTRY;
typedef struct _CTL_INFO {
    DWORD dwVersion;
    CTL_USAGE SubjectUsage;
    CRYPT_DATA_BLOB ListIdentifier;
    CRYPT_INTEGER_BLOB SequenceNumber;
    FILETIME ThisUpdate;
    FILETIME NextUpdate;
    CRYPT_ALGORITHM_IDENTIFIER SubjectAlgorithm;
    DWORD cCTLEntry;
    PCTL_ENTRY rgCTLEntry;
    DWORD cExtension;
    PCERT_EXTENSION rgExtension;
} CTL_INFO, *PCTL_INFO;
typedef struct _CRYPT_TIME_STAMP_REQUEST_INFO {
    LPSTR pszTimeStampAlgorithm;
    LPSTR pszContentType;
    CRYPT_OBJID_BLOB Content;
    DWORD cAttribute;
    PCRYPT_ATTRIBUTE rgAttribute;
} CRYPT_TIME_STAMP_REQUEST_INFO, *PCRYPT_TIME_STAMP_REQUEST_INFO;
typedef struct _CRYPT_ENROLLMENT_NAME_VALUE_PAIR {
    LPWSTR pwszName;
    LPWSTR pwszValue;
} CRYPT_ENROLLMENT_NAME_VALUE_PAIR, * PCRYPT_ENROLLMENT_NAME_VALUE_PAIR;
typedef struct _CRYPT_CSP_PROVIDER {
    DWORD dwKeySpec;
    LPWSTR pwszProviderName;
    CRYPT_BIT_BLOB Signature;
} CRYPT_CSP_PROVIDER, * PCRYPT_CSP_PROVIDER;
WINCRYPT32API
BOOL
WINAPI
CryptFormatObject(
    _In_ DWORD dwCertEncodingType,
    _In_ DWORD dwFormatType,
    _In_ DWORD dwFormatStrType,
    _In_opt_ void *pFormatStruct,
    _In_opt_ LPCSTR lpszStructType,
    _In_reads_bytes_(cbEncoded) const BYTE *pbEncoded,
    _In_ DWORD cbEncoded,
    _At_((WCHAR *)pbFormat, _Out_writes_bytes_to_opt_(*pcbFormat, *pcbFormat)) void *pbFormat,
    _Inout_ DWORD *pcbFormat
    );
typedef LPVOID (WINAPI *PFN_CRYPT_ALLOC)(
    _In_ size_t cbSize
    );
typedef VOID (WINAPI *PFN_CRYPT_FREE)(
    _In_ LPVOID pv
    );
typedef struct _CRYPT_ENCODE_PARA {
    DWORD cbSize;
    PFN_CRYPT_ALLOC pfnAlloc;
    PFN_CRYPT_FREE pfnFree;
} CRYPT_ENCODE_PARA, *PCRYPT_ENCODE_PARA;
WINCRYPT32API
BOOL
WINAPI
CryptEncodeObjectEx(
    _In_ DWORD dwCertEncodingType,
    _In_ LPCSTR lpszStructType,
    _In_ const void *pvStructInfo,
    _In_ DWORD dwFlags,
    _In_opt_ PCRYPT_ENCODE_PARA pEncodePara,
    _Out_opt_ void *pvEncoded,
    _Inout_ DWORD *pcbEncoded
    );
WINCRYPT32API
BOOL
WINAPI
CryptEncodeObject(
    _In_ DWORD dwCertEncodingType,
    _In_ LPCSTR lpszStructType,
    _In_ const void *pvStructInfo,
    _Out_writes_bytes_to_opt_(*pcbEncoded, *pcbEncoded) BYTE *pbEncoded,
    _Inout_ DWORD *pcbEncoded
    );
            CERT_RDN_ENABLE_T61_UNICODE_FLAG
            CERT_RDN_ENABLE_UTF8_UNICODE_FLAG
            CERT_RDN_FORCE_UTF8_UNICODE_FLAG
            CERT_RDN_DISABLE_CHECK_TYPE_FLAG
typedef struct _CRYPT_DECODE_PARA {
    DWORD cbSize;
    PFN_CRYPT_ALLOC pfnAlloc;
    PFN_CRYPT_FREE pfnFree;
} CRYPT_DECODE_PARA, *PCRYPT_DECODE_PARA;
WINCRYPT32API
BOOL
WINAPI
CryptDecodeObjectEx(
    _In_ DWORD dwCertEncodingType,
    _In_ LPCSTR lpszStructType,
    _In_reads_bytes_(cbEncoded) const BYTE *pbEncoded,
    _In_ DWORD cbEncoded,
    _In_ DWORD dwFlags,
    _In_opt_ PCRYPT_DECODE_PARA pDecodePara,
    _Out_opt_ void *pvStructInfo,
    _Inout_ DWORD *pcbStructInfo
    );
WINCRYPT32API
BOOL
WINAPI
CryptDecodeObject(
    _In_ DWORD dwCertEncodingType,
    _In_ LPCSTR lpszStructType,
    _In_reads_bytes_(cbEncoded) const BYTE *pbEncoded,
    _In_ DWORD cbEncoded,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*pcbStructInfo, *pcbStructInfo) void *pvStructInfo,
    _Inout_ DWORD *pcbStructInfo
    );
            CERT_RDN_DISABLE_IE4_UTF8_FLAG
typedef struct _CERT_EXTENSIONS {
    DWORD cExtension;
    PCERT_EXTENSION rgExtension;
} CERT_EXTENSIONS, *PCERT_EXTENSIONS;
    ((X >> CERT_UNICODE_RDN_ERR_INDEX_SHIFT) & CERT_UNICODE_RDN_ERR_INDEX_MASK)
    ((X >> CERT_UNICODE_ATTR_ERR_INDEX_SHIFT) & CERT_UNICODE_ATTR_ERR_INDEX_MASK)
    (X & CERT_UNICODE_VALUE_ERR_INDEX_MASK)
typedef struct _CERT_AUTHORITY_KEY_ID_INFO {
    CRYPT_DATA_BLOB KeyId;
    CERT_NAME_BLOB CertIssuer;
    CRYPT_INTEGER_BLOB CertSerialNumber;
} CERT_AUTHORITY_KEY_ID_INFO, *PCERT_AUTHORITY_KEY_ID_INFO;
typedef struct _CERT_PRIVATE_KEY_VALIDITY {
    FILETIME NotBefore;
    FILETIME NotAfter;
} CERT_PRIVATE_KEY_VALIDITY, *PCERT_PRIVATE_KEY_VALIDITY;
typedef struct _CERT_KEY_ATTRIBUTES_INFO {
    CRYPT_DATA_BLOB KeyId;
    CRYPT_BIT_BLOB IntendedKeyUsage;
    PCERT_PRIVATE_KEY_VALIDITY pPrivateKeyUsagePeriod;
} CERT_KEY_ATTRIBUTES_INFO, *PCERT_KEY_ATTRIBUTES_INFO;
typedef struct _CERT_POLICY_ID {
    DWORD cCertPolicyElementId;
    LPSTR *rgpszCertPolicyElementId;
} CERT_POLICY_ID, *PCERT_POLICY_ID;
typedef struct _CERT_KEY_USAGE_RESTRICTION_INFO {
    DWORD cCertPolicyId;
    PCERT_POLICY_ID rgCertPolicyId;
    CRYPT_BIT_BLOB RestrictedKeyUsage;
} CERT_KEY_USAGE_RESTRICTION_INFO, *PCERT_KEY_USAGE_RESTRICTION_INFO;
typedef struct _CERT_OTHER_NAME {
    LPSTR pszObjId;
    CRYPT_OBJID_BLOB Value;
} CERT_OTHER_NAME, *PCERT_OTHER_NAME;
typedef struct _CERT_ALT_NAME_ENTRY {
    DWORD dwAltNameChoice;
    union {
        PCERT_OTHER_NAME pOtherName;
        LPWSTR pwszRfc822Name;
        LPWSTR pwszDNSName;
        CERT_NAME_BLOB DirectoryName;
        LPWSTR pwszURL;
        CRYPT_DATA_BLOB IPAddress;
        LPSTR pszRegisteredID;
    } DUMMYUNIONNAME;
} CERT_ALT_NAME_ENTRY, *PCERT_ALT_NAME_ENTRY;
typedef struct _CERT_ALT_NAME_INFO {
    DWORD cAltEntry;
    PCERT_ALT_NAME_ENTRY rgAltEntry;
} CERT_ALT_NAME_INFO, *PCERT_ALT_NAME_INFO;
    ((X >> CERT_ALT_NAME_ENTRY_ERR_INDEX_SHIFT) & \
    CERT_ALT_NAME_ENTRY_ERR_INDEX_MASK)
    (X & CERT_ALT_NAME_VALUE_ERR_INDEX_MASK)
typedef struct _CERT_BASIC_CONSTRAINTS_INFO {
    CRYPT_BIT_BLOB SubjectType;
    BOOL fPathLenConstraint;
    DWORD dwPathLenConstraint;
    DWORD cSubtreesConstraint;
    CERT_NAME_BLOB *rgSubtreesConstraint;
} CERT_BASIC_CONSTRAINTS_INFO, *PCERT_BASIC_CONSTRAINTS_INFO;
typedef struct _CERT_BASIC_CONSTRAINTS2_INFO {
    BOOL fCA;
    BOOL fPathLenConstraint;
    DWORD dwPathLenConstraint;
} CERT_BASIC_CONSTRAINTS2_INFO, *PCERT_BASIC_CONSTRAINTS2_INFO;
typedef struct _CERT_POLICY_QUALIFIER_INFO {
    LPSTR pszPolicyQualifierId;
    CRYPT_OBJID_BLOB Qualifier;
} CERT_POLICY_QUALIFIER_INFO, *PCERT_POLICY_QUALIFIER_INFO;
typedef struct _CERT_POLICY_INFO {
    LPSTR pszPolicyIdentifier;
    DWORD cPolicyQualifier;
    CERT_POLICY_QUALIFIER_INFO *rgPolicyQualifier;
} CERT_POLICY_INFO, *PCERT_POLICY_INFO;
typedef struct _CERT_POLICIES_INFO {
    DWORD cPolicyInfo;
    CERT_POLICY_INFO *rgPolicyInfo;
} CERT_POLICIES_INFO, *PCERT_POLICIES_INFO;
typedef struct _CERT_POLICY_QUALIFIER_NOTICE_REFERENCE {
    LPSTR pszOrganization;
    DWORD cNoticeNumbers;
    int *rgNoticeNumbers;
} CERT_POLICY_QUALIFIER_NOTICE_REFERENCE, *PCERT_POLICY_QUALIFIER_NOTICE_REFERENCE;
typedef struct _CERT_POLICY_QUALIFIER_USER_NOTICE {
    CERT_POLICY_QUALIFIER_NOTICE_REFERENCE *pNoticeReference;
    LPWSTR pszDisplayText;
} CERT_POLICY_QUALIFIER_USER_NOTICE, *PCERT_POLICY_QUALIFIER_USER_NOTICE;
typedef struct _CPS_URLS {
    LPWSTR pszURL;
    CRYPT_ALGORITHM_IDENTIFIER *pAlgorithm;
    CRYPT_DATA_BLOB *pDigest;
} CPS_URLS, *PCPS_URLS;
typedef struct _CERT_POLICY95_QUALIFIER1 {
    LPWSTR pszPracticesReference;
    LPSTR pszNoticeIdentifier;
    LPSTR pszNSINoticeIdentifier;
    DWORD cCPSURLs;
    CPS_URLS *rgCPSURLs;
} CERT_POLICY95_QUALIFIER1, *PCERT_POLICY95_QUALIFIER1;
typedef struct _CERT_POLICY_MAPPING {
    LPSTR pszIssuerDomainPolicy;
    LPSTR pszSubjectDomainPolicy;
} CERT_POLICY_MAPPING, *PCERT_POLICY_MAPPING;
typedef struct _CERT_POLICY_MAPPINGS_INFO {
    DWORD cPolicyMapping;
    PCERT_POLICY_MAPPING rgPolicyMapping;
} CERT_POLICY_MAPPINGS_INFO, *PCERT_POLICY_MAPPINGS_INFO;
typedef struct _CERT_POLICY_CONSTRAINTS_INFO {
    BOOL fRequireExplicitPolicy;
    DWORD dwRequireExplicitPolicySkipCerts;
    BOOL fInhibitPolicyMapping;
    DWORD dwInhibitPolicyMappingSkipCerts;
} CERT_POLICY_CONSTRAINTS_INFO, *PCERT_POLICY_CONSTRAINTS_INFO;
typedef struct _CRYPT_CONTENT_INFO_SEQUENCE_OF_ANY {
    LPSTR pszObjId;
    DWORD cValue;
    PCRYPT_DER_BLOB rgValue;
} CRYPT_CONTENT_INFO_SEQUENCE_OF_ANY, *PCRYPT_CONTENT_INFO_SEQUENCE_OF_ANY;
typedef struct _CRYPT_CONTENT_INFO {
    LPSTR pszObjId;
    CRYPT_DER_BLOB Content;
} CRYPT_CONTENT_INFO, *PCRYPT_CONTENT_INFO;
typedef struct _CRYPT_SEQUENCE_OF_ANY {
    DWORD cValue;
    PCRYPT_DER_BLOB rgValue;
} CRYPT_SEQUENCE_OF_ANY, *PCRYPT_SEQUENCE_OF_ANY;
typedef struct _CERT_AUTHORITY_KEY_ID2_INFO {
    CRYPT_DATA_BLOB KeyId;
    CERT_ALT_NAME_INFO AuthorityCertIssuer;
    CRYPT_INTEGER_BLOB AuthorityCertSerialNumber;
} CERT_AUTHORITY_KEY_ID2_INFO, *PCERT_AUTHORITY_KEY_ID2_INFO;
typedef struct _CERT_ACCESS_DESCRIPTION {
    LPSTR pszAccessMethod;
    CERT_ALT_NAME_ENTRY AccessLocation;
} CERT_ACCESS_DESCRIPTION, *PCERT_ACCESS_DESCRIPTION;
typedef struct _CERT_AUTHORITY_INFO_ACCESS {
    DWORD cAccDescr;
    PCERT_ACCESS_DESCRIPTION rgAccDescr;
} CERT_AUTHORITY_INFO_ACCESS, *PCERT_AUTHORITY_INFO_ACCESS,
  CERT_SUBJECT_INFO_ACCESS, *PCERT_SUBJECT_INFO_ACCESS;
typedef struct _CRL_DIST_POINT_NAME {
    DWORD dwDistPointNameChoice;
    union {
        CERT_ALT_NAME_INFO FullName;
    } DUMMYUNIONNAME;
} CRL_DIST_POINT_NAME, *PCRL_DIST_POINT_NAME;
typedef struct _CRL_DIST_POINT {
    CRL_DIST_POINT_NAME DistPointName;
    CRYPT_BIT_BLOB ReasonFlags;
    CERT_ALT_NAME_INFO CRLIssuer;
} CRL_DIST_POINT, *PCRL_DIST_POINT;
typedef struct _CRL_DIST_POINTS_INFO {
    DWORD cDistPoint;
    PCRL_DIST_POINT rgDistPoint;
} CRL_DIST_POINTS_INFO, *PCRL_DIST_POINTS_INFO;
    ((X >> CRL_DIST_POINT_ERR_INDEX_SHIFT) & CRL_DIST_POINT_ERR_INDEX_MASK)
    (0 != (X & CRL_DIST_POINT_ERR_CRL_ISSUER_BIT))
typedef struct _CROSS_CERT_DIST_POINTS_INFO {
    DWORD dwSyncDeltaTime;
    DWORD cDistPoint;
    PCERT_ALT_NAME_INFO rgDistPoint;
} CROSS_CERT_DIST_POINTS_INFO, *PCROSS_CERT_DIST_POINTS_INFO;
    ((X >> CROSS_CERT_DIST_POINT_ERR_INDEX_SHIFT) & \
                CROSS_CERT_DIST_POINT_ERR_INDEX_MASK)
typedef struct _CERT_PAIR {
   CERT_BLOB Forward;
   CERT_BLOB Reverse;
} CERT_PAIR, *PCERT_PAIR;
typedef struct _CRL_ISSUING_DIST_POINT {
    CRL_DIST_POINT_NAME DistPointName;
    BOOL fOnlyContainsUserCerts;
    BOOL fOnlyContainsCACerts;
    CRYPT_BIT_BLOB OnlySomeReasonFlags;
    BOOL fIndirectCRL;
} CRL_ISSUING_DIST_POINT, *PCRL_ISSUING_DIST_POINT;
typedef struct _CERT_GENERAL_SUBTREE {
    CERT_ALT_NAME_ENTRY Base;
    DWORD dwMinimum;
    BOOL fMaximum;
    DWORD dwMaximum;
} CERT_GENERAL_SUBTREE, *PCERT_GENERAL_SUBTREE;
typedef struct _CERT_NAME_CONSTRAINTS_INFO {
    DWORD cPermittedSubtree;
    PCERT_GENERAL_SUBTREE rgPermittedSubtree;
    DWORD cExcludedSubtree;
    PCERT_GENERAL_SUBTREE rgExcludedSubtree;
} CERT_NAME_CONSTRAINTS_INFO, *PCERT_NAME_CONSTRAINTS_INFO;
    (0 != (X & CERT_EXCLUDED_SUBTREE_BIT))
typedef struct _CERT_DSS_PARAMETERS {
    CRYPT_UINT_BLOB p;
    CRYPT_UINT_BLOB q;
    CRYPT_UINT_BLOB g;
} CERT_DSS_PARAMETERS, *PCERT_DSS_PARAMETERS;
typedef struct _CERT_DH_PARAMETERS {
    CRYPT_UINT_BLOB p;
    CRYPT_UINT_BLOB g;
} CERT_DH_PARAMETERS, *PCERT_DH_PARAMETERS;
typedef struct _CERT_ECC_SIGNATURE {
    CRYPT_UINT_BLOB r;
    CRYPT_UINT_BLOB s;
} CERT_ECC_SIGNATURE, *PCERT_ECC_SIGNATURE;
typedef struct _CERT_X942_DH_VALIDATION_PARAMS {
    CRYPT_BIT_BLOB seed;
    DWORD pgenCounter;
} CERT_X942_DH_VALIDATION_PARAMS, *PCERT_X942_DH_VALIDATION_PARAMS;
typedef struct _CERT_X942_DH_PARAMETERS {
    CRYPT_UINT_BLOB p;
    CRYPT_UINT_BLOB g;
    CRYPT_UINT_BLOB q;
    CRYPT_UINT_BLOB j;
    PCERT_X942_DH_VALIDATION_PARAMS pValidationParams;
} CERT_X942_DH_PARAMETERS, *PCERT_X942_DH_PARAMETERS;
typedef struct _CRYPT_X942_OTHER_INFO {
    LPSTR pszContentEncryptionObjId;
    BYTE rgbCounter[CRYPT_X942_COUNTER_BYTE_LENGTH];
    BYTE rgbKeyLength[CRYPT_X942_KEY_LENGTH_BYTE_LENGTH];
    CRYPT_DATA_BLOB PubInfo;
} CRYPT_X942_OTHER_INFO, *PCRYPT_X942_OTHER_INFO;
typedef struct _CRYPT_ECC_CMS_SHARED_INFO {
    CRYPT_ALGORITHM_IDENTIFIER Algorithm;
    CRYPT_DATA_BLOB EntityUInfo;
    BYTE rgbSuppPubInfo[CRYPT_ECC_CMS_SHARED_INFO_SUPPPUBINFO_BYTE_LENGTH];
} CRYPT_ECC_CMS_SHARED_INFO, *PCRYPT_ECC_CMS_SHARED_INFO;
typedef struct _CRYPT_RC2_CBC_PARAMETERS {
    DWORD dwVersion;
    BOOL fIV;
    BYTE rgbIV[8];
} CRYPT_RC2_CBC_PARAMETERS, *PCRYPT_RC2_CBC_PARAMETERS;
typedef struct _CRYPT_SMIME_CAPABILITY {
    LPSTR pszObjId;
    CRYPT_OBJID_BLOB Parameters;
} CRYPT_SMIME_CAPABILITY, *PCRYPT_SMIME_CAPABILITY;
typedef struct _CRYPT_SMIME_CAPABILITIES {
    DWORD cCapability;
    PCRYPT_SMIME_CAPABILITY rgCapability;
} CRYPT_SMIME_CAPABILITIES, *PCRYPT_SMIME_CAPABILITIES;
typedef struct _CERT_QC_STATEMENT {
    LPSTR pszStatementId;
    CRYPT_OBJID_BLOB StatementInfo;
} CERT_QC_STATEMENT, *PCERT_QC_STATEMENT;
typedef struct _CERT_QC_STATEMENTS_EXT_INFO {
    DWORD cStatement;
    PCERT_QC_STATEMENT rgStatement;
} CERT_QC_STATEMENTS_EXT_INFO, *PCERT_QC_STATEMENTS_EXT_INFO;
typedef struct _CRYPT_MASK_GEN_ALGORITHM {
    LPSTR pszObjId;
    CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
} CRYPT_MASK_GEN_ALGORITHM, *PCRYPT_MASK_GEN_ALGORITHM;
typedef struct _CRYPT_RSA_SSA_PSS_PARAMETERS {
    CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
    CRYPT_MASK_GEN_ALGORITHM MaskGenAlgorithm;
    DWORD dwSaltLength;
    DWORD dwTrailerField;
} CRYPT_RSA_SSA_PSS_PARAMETERS, *PCRYPT_RSA_SSA_PSS_PARAMETERS;
typedef struct _CRYPT_PSOURCE_ALGORITHM {
    LPSTR pszObjId;
    CRYPT_DATA_BLOB EncodingParameters;
} CRYPT_PSOURCE_ALGORITHM, *PCRYPT_PSOURCE_ALGORITHM;
typedef struct _CRYPT_RSAES_OAEP_PARAMETERS {
    CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
    CRYPT_MASK_GEN_ALGORITHM MaskGenAlgorithm;
    CRYPT_PSOURCE_ALGORITHM PSourceAlgorithm;
} CRYPT_RSAES_OAEP_PARAMETERS, *PCRYPT_RSAES_OAEP_PARAMETERS;
typedef struct _CMC_TAGGED_ATTRIBUTE {
    DWORD dwBodyPartID;
    CRYPT_ATTRIBUTE Attribute;
} CMC_TAGGED_ATTRIBUTE, *PCMC_TAGGED_ATTRIBUTE;
typedef struct _CMC_TAGGED_CERT_REQUEST {
    DWORD dwBodyPartID;
    CRYPT_DER_BLOB SignedCertRequest;
} CMC_TAGGED_CERT_REQUEST, *PCMC_TAGGED_CERT_REQUEST;
typedef struct _CMC_TAGGED_REQUEST {
    DWORD dwTaggedRequestChoice;
    union {
        PCMC_TAGGED_CERT_REQUEST pTaggedCertRequest;
    } DUMMYUNIONNAME;
} CMC_TAGGED_REQUEST, *PCMC_TAGGED_REQUEST;
typedef struct _CMC_TAGGED_CONTENT_INFO {
    DWORD dwBodyPartID;
    CRYPT_DER_BLOB EncodedContentInfo;
} CMC_TAGGED_CONTENT_INFO, *PCMC_TAGGED_CONTENT_INFO;
typedef struct _CMC_TAGGED_OTHER_MSG {
    DWORD dwBodyPartID;
    LPSTR pszObjId;
    CRYPT_OBJID_BLOB Value;
} CMC_TAGGED_OTHER_MSG, *PCMC_TAGGED_OTHER_MSG;
typedef struct _CMC_DATA_INFO {
    DWORD cTaggedAttribute;
    PCMC_TAGGED_ATTRIBUTE rgTaggedAttribute;
    DWORD cTaggedRequest;
    PCMC_TAGGED_REQUEST rgTaggedRequest;
    DWORD cTaggedContentInfo;
    PCMC_TAGGED_CONTENT_INFO rgTaggedContentInfo;
    DWORD cTaggedOtherMsg;
    PCMC_TAGGED_OTHER_MSG rgTaggedOtherMsg;
} CMC_DATA_INFO, *PCMC_DATA_INFO;
typedef struct _CMC_RESPONSE_INFO {
    DWORD cTaggedAttribute;
    PCMC_TAGGED_ATTRIBUTE rgTaggedAttribute;
    DWORD cTaggedContentInfo;
    PCMC_TAGGED_CONTENT_INFO rgTaggedContentInfo;
    DWORD cTaggedOtherMsg;
    PCMC_TAGGED_OTHER_MSG rgTaggedOtherMsg;
} CMC_RESPONSE_INFO, *PCMC_RESPONSE_INFO;
typedef struct _CMC_PEND_INFO {
    CRYPT_DATA_BLOB PendToken;
    FILETIME PendTime;
} CMC_PEND_INFO, *PCMC_PEND_INFO;
typedef struct _CMC_STATUS_INFO {
    DWORD dwStatus;
    DWORD cBodyList;
    DWORD *rgdwBodyList;
    LPWSTR pwszStatusString;
    DWORD dwOtherInfoChoice;
    union {
        DWORD dwFailInfo;
        PCMC_PEND_INFO pPendInfo;
    } DUMMYUNIONNAME;
} CMC_STATUS_INFO, *PCMC_STATUS_INFO;
typedef struct _CMC_ADD_EXTENSIONS_INFO {
    DWORD dwCmcDataReference;
    DWORD cCertReference;
    DWORD *rgdwCertReference;
    DWORD cExtension;
    PCERT_EXTENSION rgExtension;
} CMC_ADD_EXTENSIONS_INFO, *PCMC_ADD_EXTENSIONS_INFO;
typedef struct _CMC_ADD_ATTRIBUTES_INFO {
    DWORD dwCmcDataReference;
    DWORD cCertReference;
    DWORD *rgdwCertReference;
    DWORD cAttribute;
    PCRYPT_ATTRIBUTE rgAttribute;
} CMC_ADD_ATTRIBUTES_INFO, *PCMC_ADD_ATTRIBUTES_INFO;
typedef struct _CERT_TEMPLATE_EXT {
    LPSTR pszObjId;
    DWORD dwMajorVersion;
    BOOL fMinorVersion;
    DWORD dwMinorVersion;
} CERT_TEMPLATE_EXT, *PCERT_TEMPLATE_EXT;
typedef struct _CERT_HASHED_URL {
    CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
    CRYPT_HASH_BLOB Hash;
    LPWSTR pwszUrl;
} CERT_HASHED_URL, *PCERT_HASHED_URL;
typedef struct _CERT_LOGOTYPE_DETAILS {
    LPWSTR pwszMimeType;
    DWORD cHashedUrl;
    PCERT_HASHED_URL rgHashedUrl;
} CERT_LOGOTYPE_DETAILS, *PCERT_LOGOTYPE_DETAILS;
typedef struct _CERT_LOGOTYPE_REFERENCE {
    DWORD cHashedUrl;
    PCERT_HASHED_URL rgHashedUrl;
} CERT_LOGOTYPE_REFERENCE, *PCERT_LOGOTYPE_REFERENCE;
typedef struct _CERT_LOGOTYPE_IMAGE_INFO {
    DWORD dwLogotypeImageInfoChoice;
    DWORD dwFileSize;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwLogotypeImageResolutionChoice;
    union {
        DWORD dwNumBits;
        DWORD dwTableSize;
    } DUMMYUNIONNAME;
    LPWSTR pwszLanguage;
} CERT_LOGOTYPE_IMAGE_INFO, *PCERT_LOGOTYPE_IMAGE_INFO;
typedef struct _CERT_LOGOTYPE_IMAGE {
    CERT_LOGOTYPE_DETAILS LogotypeDetails;
    PCERT_LOGOTYPE_IMAGE_INFO pLogotypeImageInfo;
} CERT_LOGOTYPE_IMAGE, *PCERT_LOGOTYPE_IMAGE;
typedef struct _CERT_LOGOTYPE_AUDIO_INFO {
    DWORD dwFileSize;
    DWORD dwPlayTime;
    DWORD dwChannels;
    DWORD dwSampleRate;
    LPWSTR pwszLanguage;
} CERT_LOGOTYPE_AUDIO_INFO, *PCERT_LOGOTYPE_AUDIO_INFO;
typedef struct _CERT_LOGOTYPE_AUDIO {
    CERT_LOGOTYPE_DETAILS LogotypeDetails;
    PCERT_LOGOTYPE_AUDIO_INFO pLogotypeAudioInfo;
} CERT_LOGOTYPE_AUDIO, *PCERT_LOGOTYPE_AUDIO;
typedef struct _CERT_LOGOTYPE_DATA {
    DWORD cLogotypeImage;
    PCERT_LOGOTYPE_IMAGE rgLogotypeImage;
    DWORD cLogotypeAudio;
    PCERT_LOGOTYPE_AUDIO rgLogotypeAudio;
} CERT_LOGOTYPE_DATA, *PCERT_LOGOTYPE_DATA;
typedef struct _CERT_LOGOTYPE_INFO {
    DWORD dwLogotypeInfoChoice;
    union {
        PCERT_LOGOTYPE_DATA pLogotypeDirectInfo;
        PCERT_LOGOTYPE_REFERENCE pLogotypeIndirectInfo;
    } DUMMYUNIONNAME;
} CERT_LOGOTYPE_INFO, *PCERT_LOGOTYPE_INFO;
typedef struct _CERT_OTHER_LOGOTYPE_INFO {
    LPSTR pszObjId;
    CERT_LOGOTYPE_INFO LogotypeInfo;
} CERT_OTHER_LOGOTYPE_INFO, *PCERT_OTHER_LOGOTYPE_INFO;
typedef struct _CERT_LOGOTYPE_EXT_INFO {
    DWORD cCommunityLogo;
    PCERT_LOGOTYPE_INFO rgCommunityLogo;
    PCERT_LOGOTYPE_INFO pIssuerLogo;
    PCERT_LOGOTYPE_INFO pSubjectLogo;
    DWORD cOtherLogo;
    PCERT_OTHER_LOGOTYPE_INFO rgOtherLogo;
} CERT_LOGOTYPE_EXT_INFO, *PCERT_LOGOTYPE_EXT_INFO;
typedef struct _CERT_BIOMETRIC_DATA {
    DWORD dwTypeOfBiometricDataChoice;
    union {
        DWORD dwPredefined;
        LPSTR pszObjId;
    } DUMMYUNIONNAME;
    CERT_HASHED_URL HashedUrl;
} CERT_BIOMETRIC_DATA, *PCERT_BIOMETRIC_DATA;
typedef struct _CERT_BIOMETRIC_EXT_INFO {
    DWORD cBiometricData;
    PCERT_BIOMETRIC_DATA rgBiometricData;
} CERT_BIOMETRIC_EXT_INFO, *PCERT_BIOMETRIC_EXT_INFO;
typedef struct _OCSP_SIGNATURE_INFO {
    CRYPT_ALGORITHM_IDENTIFIER SignatureAlgorithm;
    CRYPT_BIT_BLOB Signature;
    DWORD cCertEncoded;
    PCERT_BLOB rgCertEncoded;
} OCSP_SIGNATURE_INFO, *POCSP_SIGNATURE_INFO;
typedef struct _OCSP_SIGNED_REQUEST_INFO {
    CRYPT_DER_BLOB ToBeSigned;
    POCSP_SIGNATURE_INFO pOptionalSignatureInfo;
} OCSP_SIGNED_REQUEST_INFO, *POCSP_SIGNED_REQUEST_INFO;
typedef struct _OCSP_CERT_ID {
    CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
    CRYPT_HASH_BLOB IssuerNameHash;
    CRYPT_HASH_BLOB IssuerKeyHash;
    CRYPT_INTEGER_BLOB SerialNumber;
} OCSP_CERT_ID, *POCSP_CERT_ID;
typedef struct _OCSP_REQUEST_ENTRY {
    OCSP_CERT_ID CertId;
    DWORD cExtension;
    PCERT_EXTENSION rgExtension;
} OCSP_REQUEST_ENTRY, *POCSP_REQUEST_ENTRY;
typedef struct _OCSP_REQUEST_INFO {
    DWORD dwVersion;
    PCERT_ALT_NAME_ENTRY pRequestorName;
    DWORD cRequestEntry;
    POCSP_REQUEST_ENTRY rgRequestEntry;
    DWORD cExtension;
    PCERT_EXTENSION rgExtension;
} OCSP_REQUEST_INFO, *POCSP_REQUEST_INFO;
typedef struct _OCSP_RESPONSE_INFO {
    DWORD dwStatus;
    LPSTR pszObjId;
    CRYPT_OBJID_BLOB Value;
} OCSP_RESPONSE_INFO, *POCSP_RESPONSE_INFO;
typedef struct _OCSP_BASIC_SIGNED_RESPONSE_INFO {
    CRYPT_DER_BLOB ToBeSigned;
    OCSP_SIGNATURE_INFO SignatureInfo;
} OCSP_BASIC_SIGNED_RESPONSE_INFO, *POCSP_BASIC_SIGNED_RESPONSE_INFO;
typedef struct _OCSP_BASIC_REVOKED_INFO {
    FILETIME RevocationDate;
    DWORD dwCrlReasonCode;
} OCSP_BASIC_REVOKED_INFO, *POCSP_BASIC_REVOKED_INFO;
typedef struct _OCSP_BASIC_RESPONSE_ENTRY {
    OCSP_CERT_ID CertId;
    DWORD dwCertStatus;
    union {
        POCSP_BASIC_REVOKED_INFO pRevokedInfo;
    } DUMMYUNIONNAME;
    FILETIME ThisUpdate;
    FILETIME NextUpdate;
    DWORD cExtension;
    PCERT_EXTENSION rgExtension;
} OCSP_BASIC_RESPONSE_ENTRY, *POCSP_BASIC_RESPONSE_ENTRY;
typedef struct _OCSP_BASIC_RESPONSE_INFO {
    DWORD dwVersion;
    DWORD dwResponderIdChoice;
    union {
        CERT_NAME_BLOB ByNameResponderId;
        CRYPT_HASH_BLOB ByKeyResponderId;
    } DUMMYUNIONNAME;
    FILETIME ProducedAt;
    DWORD cResponseEntry;
    POCSP_BASIC_RESPONSE_ENTRY rgResponseEntry;
    DWORD cExtension;
    PCERT_EXTENSION rgExtension;
} OCSP_BASIC_RESPONSE_INFO, *POCSP_BASIC_RESPONSE_INFO;
typedef struct _CERT_SUPPORTED_ALGORITHM_INFO {
    CRYPT_ALGORITHM_IDENTIFIER Algorithm;
    CRYPT_BIT_BLOB IntendedKeyUsage;
    CERT_POLICIES_INFO IntendedCertPolicies;
} CERT_SUPPORTED_ALGORITHM_INFO, *PCERT_SUPPORTED_ALGORITHM_INFO;
typedef struct _CERT_TPM_SPECIFICATION_INFO {
    LPWSTR pwszFamily;
    DWORD dwLevel;
    DWORD dwRevision;
} CERT_TPM_SPECIFICATION_INFO, *PCERT_TPM_SPECIFICATION_INFO;
typedef void *HCRYPTOIDFUNCSET;
typedef void *HCRYPTOIDFUNCADDR;
typedef struct _CRYPT_OID_FUNC_ENTRY {
    LPCSTR pszOID;
    void *pvFuncAddr;
} CRYPT_OID_FUNC_ENTRY, *PCRYPT_OID_FUNC_ENTRY;
WINCRYPT32API
BOOL
WINAPI
CryptInstallOIDFunctionAddress(
    _In_opt_ HMODULE hModule,
    _In_ DWORD dwEncodingType,
    _In_ LPCSTR pszFuncName,
    _In_ DWORD cFuncEntry,
    _In_reads_(cFuncEntry) const CRYPT_OID_FUNC_ENTRY rgFuncEntry[],
    _In_ DWORD dwFlags
    );
WINCRYPT32API
HCRYPTOIDFUNCSET
WINAPI
CryptInitOIDFunctionSet(
    _In_ LPCSTR pszFuncName,
    _In_ DWORD dwFlags
    );
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CryptGetOIDFunctionAddress(
    _In_ HCRYPTOIDFUNCSET hFuncSet,
    _In_ DWORD dwEncodingType,
    _In_ LPCSTR pszOID,
    _In_ DWORD dwFlags,
    _Outptr_ void **ppvFuncAddr,
    _Out_ HCRYPTOIDFUNCADDR *phFuncAddr
    );
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CryptGetDefaultOIDDllList(
    _In_ HCRYPTOIDFUNCSET hFuncSet,
    _In_ DWORD dwEncodingType,
    _Out_writes_to_opt_(*pcchDllList, *pcchDllList) _Post_ _NullNull_terminated_ WCHAR *pwszDllList,
    _Inout_ DWORD *pcchDllList
    );
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CryptGetDefaultOIDFunctionAddress(
    _In_ HCRYPTOIDFUNCSET hFuncSet,
    _In_ DWORD dwEncodingType,
    _In_opt_ LPCWSTR pwszDll,
    _In_ DWORD dwFlags,
    _Outptr_ void **ppvFuncAddr,
    _Inout_ HCRYPTOIDFUNCADDR *phFuncAddr
    );
WINCRYPT32API
BOOL
WINAPI
CryptFreeOIDFunctionAddress(
    _In_ HCRYPTOIDFUNCADDR hFuncAddr,
    _In_ DWORD dwFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
BOOL
WINAPI
CryptRegisterOIDFunction(
    _In_ DWORD dwEncodingType,
    _In_ LPCSTR pszFuncName,
    _In_ LPCSTR pszOID,
    _In_opt_ LPCWSTR pwszDll,
    _In_opt_ LPCSTR pszOverrideFuncName
    );
WINCRYPT32API
BOOL
WINAPI
CryptUnregisterOIDFunction(
    _In_ DWORD dwEncodingType,
    _In_ LPCSTR pszFuncName,
    _In_ LPCSTR pszOID
    );
WINCRYPT32API
BOOL
WINAPI
CryptRegisterDefaultOIDFunction(
    _In_ DWORD dwEncodingType,
    _In_ LPCSTR pszFuncName,
    _In_ DWORD dwIndex,
    _In_ LPCWSTR pwszDll
    );
WINCRYPT32API
BOOL
WINAPI
CryptUnregisterDefaultOIDFunction(
    _In_ DWORD dwEncodingType,
    _In_ LPCSTR pszFuncName,
    _In_ LPCWSTR pwszDll
    );
WINCRYPT32API
BOOL
WINAPI
CryptSetOIDFunctionValue(
    _In_ DWORD dwEncodingType,
    _In_ LPCSTR pszFuncName,
    _In_ LPCSTR pszOID,
    _In_opt_ LPCWSTR pwszValueName,
    _In_ DWORD dwValueType,
    _In_reads_bytes_opt_(cbValueData) const BYTE *pbValueData,
    _In_ DWORD cbValueData
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
BOOL
WINAPI
CryptGetOIDFunctionValue(
    _In_ DWORD dwEncodingType,
    _In_ LPCSTR pszFuncName,
    _In_ LPCSTR pszOID,
    _In_opt_ LPCWSTR pwszValueName,
    _Out_opt_ DWORD *pdwValueType,
    _Out_writes_bytes_to_opt_(*pcbValueData, *pcbValueData) BYTE *pbValueData,
    _Inout_opt_ DWORD *pcbValueData
    );
typedef BOOL (WINAPI *PFN_CRYPT_ENUM_OID_FUNC)(
    _In_ DWORD dwEncodingType,
    _In_ LPCSTR pszFuncName,
    _In_ LPCSTR pszOID,
    _In_ DWORD cValue,
    _In_reads_(cValue) const DWORD rgdwValueType[],
    _In_reads_(cValue) LPCWSTR const rgpwszValueName[],
    _In_reads_(cValue) const BYTE * const rgpbValueData[],
    _In_reads_(cValue) const DWORD rgcbValueData[],
    _Inout_opt_ void *pvArg
    );
WINCRYPT32API
BOOL
WINAPI
CryptEnumOIDFunction(
    _In_ DWORD dwEncodingType,
    _In_opt_ LPCSTR pszFuncName,
    _In_opt_ LPCSTR pszOID,
    _In_ DWORD dwFlags,
    _Inout_opt_ void *pvArg,
    __callback PFN_CRYPT_ENUM_OID_FUNC pfnEnumOIDFunc
    );
typedef struct _CRYPT_OID_INFO {
    DWORD cbSize;
    LPCSTR pszOID;
    LPCWSTR pwszName;
    DWORD dwGroupId;
    union {
        DWORD dwValue;
        ALG_ID Algid;
        DWORD dwLength;
    } DUMMYUNIONNAME;
    CRYPT_DATA_BLOB ExtraInfo;
    LPCWSTR pwszCNGAlgid;
    LPCWSTR pwszCNGExtraAlgid;
} CRYPT_OID_INFO, *PCRYPT_OID_INFO;
typedef const CRYPT_OID_INFO CCRYPT_OID_INFO, *PCCRYPT_OID_INFO;
WINCRYPT32API
PCCRYPT_OID_INFO
WINAPI
CryptFindOIDInfo(
    _In_ DWORD dwKeyType,
    _In_ void *pvKey,
    _In_ DWORD dwGroupId
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
BOOL
WINAPI
CryptRegisterOIDInfo(
    _In_ PCCRYPT_OID_INFO pInfo,
    _In_ DWORD dwFlags
    );
WINCRYPT32API
BOOL
WINAPI
CryptUnregisterOIDInfo(
    _In_ PCCRYPT_OID_INFO pInfo
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef BOOL (WINAPI *PFN_CRYPT_ENUM_OID_INFO)(
    _In_ PCCRYPT_OID_INFO pInfo,
    _Inout_opt_ void *pvArg
    );
WINCRYPT32API
BOOL
WINAPI
CryptEnumOIDInfo(
    _In_ DWORD dwGroupId,
    _In_ DWORD dwFlags,
    _Inout_opt_ void *pvArg,
    __callback PFN_CRYPT_ENUM_OID_INFO pfnEnumOIDInfo
    );
WINCRYPT32API
LPCWSTR
WINAPI
CryptFindLocalizedName(
    _In_ LPCWSTR pwszCryptName
    );
typedef struct _CERT_STRONG_SIGN_SERIALIZED_INFO {
    DWORD dwFlags;
    LPWSTR pwszCNGSignHashAlgids;
    LPWSTR pwszCNGPubKeyMinBitLengths;
} CERT_STRONG_SIGN_SERIALIZED_INFO, *PCERT_STRONG_SIGN_SERIALIZED_INFO;
typedef struct _CERT_STRONG_SIGN_PARA {
    DWORD cbSize;
    DWORD dwInfoChoice;
    union {
        void *pvInfo;
        PCERT_STRONG_SIGN_SERIALIZED_INFO pSerializedInfo;
        LPSTR pszOID;
    } DUMMYUNIONNAME;
} CERT_STRONG_SIGN_PARA, *PCERT_STRONG_SIGN_PARA;
typedef const CERT_STRONG_SIGN_PARA *PCCERT_STRONG_SIGN_PARA;
{ \
    sizeof(CERT_STRONG_SIGN_PARA), \
    CERT_STRONG_SIGN_OID_INFO_CHOICE, \
    szOID_CERT_STRONG_SIGN_OS_1 \
}
{ \
    sizeof(CERT_STRONG_SIGN_PARA), \
    CERT_STRONG_SIGN_OID_INFO_CHOICE, \
    szOID_CERT_STRONG_SIGN_OS_CURRENT \
}
{ \
    sizeof(CERT_STRONG_SIGN_PARA), \
    CERT_STRONG_SIGN_OID_INFO_CHOICE, \
    szOID_CERT_STRONG_KEY_OS_1 \
}
{ \
    sizeof(CERT_STRONG_SIGN_PARA), \
    CERT_STRONG_SIGN_OID_INFO_CHOICE, \
    szOID_CERT_STRONG_KEY_OS_CURRENT \
}
typedef void *HCRYPTMSG;
typedef struct _CERT_ISSUER_SERIAL_NUMBER {
    CERT_NAME_BLOB Issuer;
    CRYPT_INTEGER_BLOB SerialNumber;
} CERT_ISSUER_SERIAL_NUMBER, *PCERT_ISSUER_SERIAL_NUMBER;
typedef struct _CERT_ID {
    DWORD dwIdChoice;
    union {
        CERT_ISSUER_SERIAL_NUMBER IssuerSerialNumber;
        CRYPT_HASH_BLOB KeyId;
        CRYPT_HASH_BLOB HashId;
    } DUMMYUNIONNAME;
} CERT_ID, *PCERT_ID;
typedef struct _CMSG_SIGNER_ENCODE_INFO {
    DWORD cbSize;
    PCERT_INFO pCertInfo;
    union {
        HCRYPTPROV hCryptProv;
        NCRYPT_KEY_HANDLE hNCryptKey;
        BCRYPT_KEY_HANDLE hBCryptKey;
    } DUMMYUNIONNAME;
    DWORD dwKeySpec;
    CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
    void *pvHashAuxInfo;
    DWORD cAuthAttr;
    PCRYPT_ATTRIBUTE rgAuthAttr;
    DWORD cUnauthAttr;
    PCRYPT_ATTRIBUTE rgUnauthAttr;
    CERT_ID SignerId;
    CRYPT_ALGORITHM_IDENTIFIER HashEncryptionAlgorithm;
    void *pvHashEncryptionAuxInfo;
} CMSG_SIGNER_ENCODE_INFO, *PCMSG_SIGNER_ENCODE_INFO;
typedef struct _CMSG_SIGNED_ENCODE_INFO {
    DWORD cbSize;
    DWORD cSigners;
    PCMSG_SIGNER_ENCODE_INFO rgSigners;
    DWORD cCertEncoded;
    PCERT_BLOB rgCertEncoded;
    DWORD cCrlEncoded;
    PCRL_BLOB rgCrlEncoded;
    DWORD cAttrCertEncoded;
    PCERT_BLOB rgAttrCertEncoded;
} CMSG_SIGNED_ENCODE_INFO, *PCMSG_SIGNED_ENCODE_INFO;
typedef struct _CMSG_RECIPIENT_ENCODE_INFO CMSG_RECIPIENT_ENCODE_INFO,
    *PCMSG_RECIPIENT_ENCODE_INFO;
typedef struct _CMSG_ENVELOPED_ENCODE_INFO {
    DWORD cbSize;
    HCRYPTPROV_LEGACY hCryptProv;
    CRYPT_ALGORITHM_IDENTIFIER ContentEncryptionAlgorithm;
    void *pvEncryptionAuxInfo;
    DWORD cRecipients;
    PCERT_INFO *rgpRecipients;
    PCMSG_RECIPIENT_ENCODE_INFO rgCmsRecipients;
    DWORD cCertEncoded;
    PCERT_BLOB rgCertEncoded;
    DWORD cCrlEncoded;
    PCRL_BLOB rgCrlEncoded;
    DWORD cAttrCertEncoded;
    PCERT_BLOB rgAttrCertEncoded;
    DWORD cUnprotectedAttr;
    PCRYPT_ATTRIBUTE rgUnprotectedAttr;
} CMSG_ENVELOPED_ENCODE_INFO, *PCMSG_ENVELOPED_ENCODE_INFO;
typedef struct _CMSG_KEY_TRANS_RECIPIENT_ENCODE_INFO {
    DWORD cbSize;
    CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
    void *pvKeyEncryptionAuxInfo;
    HCRYPTPROV_LEGACY hCryptProv;
    CRYPT_BIT_BLOB RecipientPublicKey;
    CERT_ID RecipientId;
} CMSG_KEY_TRANS_RECIPIENT_ENCODE_INFO, *PCMSG_KEY_TRANS_RECIPIENT_ENCODE_INFO;
typedef struct _CMSG_RECIPIENT_ENCRYPTED_KEY_ENCODE_INFO {
    DWORD cbSize;
    CRYPT_BIT_BLOB RecipientPublicKey;
    CERT_ID RecipientId;
    FILETIME Date;
    PCRYPT_ATTRIBUTE_TYPE_VALUE pOtherAttr;
} CMSG_RECIPIENT_ENCRYPTED_KEY_ENCODE_INFO,
    *PCMSG_RECIPIENT_ENCRYPTED_KEY_ENCODE_INFO;
typedef struct _CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO {
    DWORD cbSize;
    CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
    void *pvKeyEncryptionAuxInfo;
    CRYPT_ALGORITHM_IDENTIFIER KeyWrapAlgorithm;
    void *pvKeyWrapAuxInfo;
    HCRYPTPROV_LEGACY hCryptProv;
    DWORD dwKeySpec;
    DWORD dwKeyChoice;
    union {
        PCRYPT_ALGORITHM_IDENTIFIER pEphemeralAlgorithm;
        PCERT_ID pSenderId;
    } DUMMYUNIONNAME;
    CRYPT_DATA_BLOB UserKeyingMaterial;
    DWORD cRecipientEncryptedKeys;
    PCMSG_RECIPIENT_ENCRYPTED_KEY_ENCODE_INFO *rgpRecipientEncryptedKeys;
} CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO, *PCMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO;
typedef struct _CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO {
    DWORD cbSize;
    CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
    void *pvKeyEncryptionAuxInfo;
    HCRYPTPROV hCryptProv;
    DWORD dwKeyChoice;
    union {
        HCRYPTKEY hKeyEncryptionKey;
        void *pvKeyEncryptionKey;
    } DUMMYUNIONNAME;
    CRYPT_DATA_BLOB KeyId;
    FILETIME Date;
    PCRYPT_ATTRIBUTE_TYPE_VALUE pOtherAttr;
} CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO, *PCMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO;
struct _CMSG_RECIPIENT_ENCODE_INFO {
    DWORD dwRecipientChoice;
    union {
        PCMSG_KEY_TRANS_RECIPIENT_ENCODE_INFO pKeyTrans;
        PCMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO pKeyAgree;
        PCMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO pMailList;
    } DUMMYUNIONNAME;
};
typedef struct _CMSG_RC2_AUX_INFO {
    DWORD cbSize;
    DWORD dwBitLen;
} CMSG_RC2_AUX_INFO, *PCMSG_RC2_AUX_INFO;
typedef struct _CMSG_SP3_COMPATIBLE_AUX_INFO {
    DWORD cbSize;
    DWORD dwFlags;
} CMSG_SP3_COMPATIBLE_AUX_INFO, *PCMSG_SP3_COMPATIBLE_AUX_INFO;
typedef struct _CMSG_RC4_AUX_INFO {
    DWORD cbSize;
    DWORD dwBitLen;
} CMSG_RC4_AUX_INFO, *PCMSG_RC4_AUX_INFO;
typedef struct _CMSG_SIGNED_AND_ENVELOPED_ENCODE_INFO {
    DWORD cbSize;
    CMSG_SIGNED_ENCODE_INFO SignedInfo;
    CMSG_ENVELOPED_ENCODE_INFO EnvelopedInfo;
} CMSG_SIGNED_AND_ENVELOPED_ENCODE_INFO, *PCMSG_SIGNED_AND_ENVELOPED_ENCODE_INFO;
typedef struct _CMSG_HASHED_ENCODE_INFO {
    DWORD cbSize;
    HCRYPTPROV_LEGACY hCryptProv;
    CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
    void *pvHashAuxInfo;
} CMSG_HASHED_ENCODE_INFO, *PCMSG_HASHED_ENCODE_INFO;
typedef struct _CMSG_ENCRYPTED_ENCODE_INFO {
    DWORD cbSize;
    CRYPT_ALGORITHM_IDENTIFIER ContentEncryptionAlgorithm;
    void *pvEncryptionAuxInfo;
} CMSG_ENCRYPTED_ENCODE_INFO, *PCMSG_ENCRYPTED_ENCODE_INFO;
typedef BOOL (WINAPI *PFN_CMSG_STREAM_OUTPUT)(
    _In_opt_ const void *pvArg,
    _In_reads_bytes_opt_(cbData) BYTE *pbData,
    _In_ DWORD cbData,
    _In_ BOOL fFinal
    );
typedef struct _CMSG_STREAM_INFO {
    DWORD cbContent;
    PFN_CMSG_STREAM_OUTPUT pfnStreamOutput;
    void *pvArg;
} CMSG_STREAM_INFO, *PCMSG_STREAM_INFO;
WINCRYPT32API
HCRYPTMSG
WINAPI
CryptMsgOpenToEncode(
    _In_ DWORD dwMsgEncodingType,
    _In_ DWORD dwFlags,
    _In_ DWORD dwMsgType,
    _In_ void const *pvMsgEncodeInfo,
    _In_opt_ LPSTR pszInnerContentObjID,
    _In_opt_ PCMSG_STREAM_INFO pStreamInfo
    );
WINCRYPT32API
DWORD
WINAPI
CryptMsgCalculateEncodedLength(
    _In_ DWORD dwMsgEncodingType,
    _In_ DWORD dwFlags,
    _In_ DWORD dwMsgType,
    _In_ void const *pvMsgEncodeInfo,
    _In_opt_ LPSTR pszInnerContentObjID,
    _In_ DWORD cbData
    );
WINCRYPT32API
HCRYPTMSG
WINAPI
CryptMsgOpenToDecode(
    _In_ DWORD dwMsgEncodingType,
    _In_ DWORD dwFlags,
    _In_ DWORD dwMsgType,
    _In_opt_ HCRYPTPROV_LEGACY hCryptProv,
    _Reserved_ PCERT_INFO pRecipientInfo,
    _In_opt_ PCMSG_STREAM_INFO pStreamInfo
    );
WINCRYPT32API
HCRYPTMSG
WINAPI
CryptMsgDuplicate(
    _In_opt_ HCRYPTMSG hCryptMsg
    );
WINCRYPT32API
BOOL
WINAPI
CryptMsgClose(
    _In_opt_ HCRYPTMSG hCryptMsg
    );
WINCRYPT32API
BOOL
WINAPI
CryptMsgUpdate(
    _In_ HCRYPTMSG hCryptMsg,
    _In_reads_bytes_opt_(cbData) const BYTE *pbData,
    _In_ DWORD cbData,
    _In_ BOOL fFinal
    );
WINCRYPT32API
BOOL
WINAPI
CryptMsgGetParam(
    _In_ HCRYPTMSG hCryptMsg,
    _In_ DWORD dwParamType,
    _In_ DWORD dwIndex,
    _Out_writes_bytes_to_opt_(*pcbData, *pcbData) void *pvData,
    _Inout_ DWORD *pcbData
    );
typedef struct _CMSG_SIGNER_INFO {
    DWORD dwVersion;
    CERT_NAME_BLOB Issuer;
    CRYPT_INTEGER_BLOB SerialNumber;
    CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
    CRYPT_ALGORITHM_IDENTIFIER HashEncryptionAlgorithm;
    CRYPT_DATA_BLOB EncryptedHash;
    CRYPT_ATTRIBUTES AuthAttrs;
    CRYPT_ATTRIBUTES UnauthAttrs;
} CMSG_SIGNER_INFO, *PCMSG_SIGNER_INFO;
typedef struct _CMSG_CMS_SIGNER_INFO {
    DWORD dwVersion;
    CERT_ID SignerId;
    CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
    CRYPT_ALGORITHM_IDENTIFIER HashEncryptionAlgorithm;
    CRYPT_DATA_BLOB EncryptedHash;
    CRYPT_ATTRIBUTES AuthAttrs;
    CRYPT_ATTRIBUTES UnauthAttrs;
} CMSG_CMS_SIGNER_INFO, *PCMSG_CMS_SIGNER_INFO;
typedef CRYPT_ATTRIBUTES CMSG_ATTR;
typedef CRYPT_ATTRIBUTES *PCMSG_ATTR;
typedef struct _CMSG_KEY_TRANS_RECIPIENT_INFO {
    DWORD dwVersion;
    CERT_ID RecipientId;
    CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
    CRYPT_DATA_BLOB EncryptedKey;
} CMSG_KEY_TRANS_RECIPIENT_INFO, *PCMSG_KEY_TRANS_RECIPIENT_INFO;
typedef struct _CMSG_RECIPIENT_ENCRYPTED_KEY_INFO {
    CERT_ID RecipientId;
    CRYPT_DATA_BLOB EncryptedKey;
    FILETIME Date;
    PCRYPT_ATTRIBUTE_TYPE_VALUE pOtherAttr;
} CMSG_RECIPIENT_ENCRYPTED_KEY_INFO, *PCMSG_RECIPIENT_ENCRYPTED_KEY_INFO;
typedef struct _CMSG_KEY_AGREE_RECIPIENT_INFO {
    DWORD dwVersion;
    DWORD dwOriginatorChoice;
    union {
        CERT_ID OriginatorCertId;
        CERT_PUBLIC_KEY_INFO OriginatorPublicKeyInfo;
    } DUMMYUNIONNAME;
    CRYPT_DATA_BLOB UserKeyingMaterial;
    CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
    DWORD cRecipientEncryptedKeys;
    PCMSG_RECIPIENT_ENCRYPTED_KEY_INFO *rgpRecipientEncryptedKeys;
} CMSG_KEY_AGREE_RECIPIENT_INFO, *PCMSG_KEY_AGREE_RECIPIENT_INFO;
typedef struct _CMSG_MAIL_LIST_RECIPIENT_INFO {
    DWORD dwVersion;
    CRYPT_DATA_BLOB KeyId;
    CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
    CRYPT_DATA_BLOB EncryptedKey;
    FILETIME Date;
    PCRYPT_ATTRIBUTE_TYPE_VALUE pOtherAttr;
} CMSG_MAIL_LIST_RECIPIENT_INFO, *PCMSG_MAIL_LIST_RECIPIENT_INFO;
typedef struct _CMSG_CMS_RECIPIENT_INFO {
    DWORD dwRecipientChoice;
    union {
        PCMSG_KEY_TRANS_RECIPIENT_INFO pKeyTrans;
        PCMSG_KEY_AGREE_RECIPIENT_INFO pKeyAgree;
        PCMSG_MAIL_LIST_RECIPIENT_INFO pMailList;
    } DUMMYUNIONNAME;
} CMSG_CMS_RECIPIENT_INFO, *PCMSG_CMS_RECIPIENT_INFO;
WINCRYPT32API
BOOL
WINAPI
CryptMsgControl(
    _In_ HCRYPTMSG hCryptMsg,
    _In_ DWORD dwFlags,
    _In_ DWORD dwCtrlType,
    _In_opt_ void const *pvCtrlPara
    );
typedef struct _CMSG_CTRL_VERIFY_SIGNATURE_EX_PARA {
    DWORD cbSize;
    HCRYPTPROV_LEGACY hCryptProv;
    DWORD dwSignerIndex;
    DWORD dwSignerType;
    void *pvSigner;
} CMSG_CTRL_VERIFY_SIGNATURE_EX_PARA, *PCMSG_CTRL_VERIFY_SIGNATURE_EX_PARA;
typedef struct _CMSG_CTRL_DECRYPT_PARA {
    DWORD cbSize;
    union {
        HCRYPTPROV hCryptProv;
        NCRYPT_KEY_HANDLE hNCryptKey;
    } DUMMYUNIONNAME;
    DWORD dwKeySpec;
    DWORD dwRecipientIndex;
} CMSG_CTRL_DECRYPT_PARA, *PCMSG_CTRL_DECRYPT_PARA;
typedef struct _CMSG_CTRL_KEY_TRANS_DECRYPT_PARA {
    DWORD cbSize;
    union {
        HCRYPTPROV hCryptProv;
        NCRYPT_KEY_HANDLE hNCryptKey;
    } DUMMYUNIONNAME;
    DWORD dwKeySpec;
    PCMSG_KEY_TRANS_RECIPIENT_INFO pKeyTrans;
    DWORD dwRecipientIndex;
} CMSG_CTRL_KEY_TRANS_DECRYPT_PARA, *PCMSG_CTRL_KEY_TRANS_DECRYPT_PARA;
typedef struct _CMSG_CTRL_KEY_AGREE_DECRYPT_PARA {
    DWORD cbSize;
    union {
        HCRYPTPROV hCryptProv;
        NCRYPT_KEY_HANDLE hNCryptKey;
    } DUMMYUNIONNAME;
    DWORD dwKeySpec;
    PCMSG_KEY_AGREE_RECIPIENT_INFO pKeyAgree;
    DWORD dwRecipientIndex;
    DWORD dwRecipientEncryptedKeyIndex;
    CRYPT_BIT_BLOB OriginatorPublicKey;
} CMSG_CTRL_KEY_AGREE_DECRYPT_PARA, *PCMSG_CTRL_KEY_AGREE_DECRYPT_PARA;
typedef struct _CMSG_CTRL_MAIL_LIST_DECRYPT_PARA {
    DWORD cbSize;
    HCRYPTPROV hCryptProv;
    PCMSG_MAIL_LIST_RECIPIENT_INFO pMailList;
    DWORD dwRecipientIndex;
    DWORD dwKeyChoice;
    union {
        HCRYPTKEY hKeyEncryptionKey;
        void *pvKeyEncryptionKey;
    } DUMMYUNIONNAME;
} CMSG_CTRL_MAIL_LIST_DECRYPT_PARA, *PCMSG_CTRL_MAIL_LIST_DECRYPT_PARA;
typedef struct _CMSG_CTRL_ADD_SIGNER_UNAUTH_ATTR_PARA {
    DWORD cbSize;
    DWORD dwSignerIndex;
    CRYPT_DATA_BLOB blob;
} CMSG_CTRL_ADD_SIGNER_UNAUTH_ATTR_PARA, *PCMSG_CTRL_ADD_SIGNER_UNAUTH_ATTR_PARA;
typedef struct _CMSG_CTRL_DEL_SIGNER_UNAUTH_ATTR_PARA {
    DWORD cbSize;
    DWORD dwSignerIndex;
    DWORD dwUnauthAttrIndex;
} CMSG_CTRL_DEL_SIGNER_UNAUTH_ATTR_PARA, *PCMSG_CTRL_DEL_SIGNER_UNAUTH_ATTR_PARA;
BOOL
WINAPI
CryptMsgVerifyCountersignatureEncoded(
    _In_opt_ HCRYPTPROV_LEGACY hCryptProv,
    _In_ DWORD dwEncodingType,
    _In_reads_bytes_(cbSignerInfo) PBYTE pbSignerInfo,
    _In_ DWORD cbSignerInfo,
    _In_reads_bytes_(cbSignerInfoCountersignature) PBYTE pbSignerInfoCountersignature,
    _In_ DWORD cbSignerInfoCountersignature,
    _In_ PCERT_INFO pciCountersigner
    );
BOOL
WINAPI
CryptMsgVerifyCountersignatureEncodedEx(
    _In_opt_ HCRYPTPROV_LEGACY hCryptProv,
    _In_ DWORD dwEncodingType,
    _In_reads_bytes_(cbSignerInfo) PBYTE pbSignerInfo,
    _In_ DWORD cbSignerInfo,
    _In_reads_bytes_(cbSignerInfoCountersignature) PBYTE pbSignerInfoCountersignature,
    _In_ DWORD cbSignerInfoCountersignature,
    _In_ DWORD dwSignerType,
    _In_ void *pvSigner,
    _In_ DWORD dwFlags,
    _Inout_opt_ void *pvExtra
    );
BOOL
WINAPI
CryptMsgCountersign(
    _In_ HCRYPTMSG hCryptMsg,
    _In_ DWORD dwIndex,
    _In_ DWORD cCountersigners,
    _In_reads_(cCountersigners) PCMSG_SIGNER_ENCODE_INFO rgCountersigners
    );
BOOL
WINAPI
CryptMsgCountersignEncoded(
    _In_ DWORD dwEncodingType,
    _In_reads_bytes_(cbSignerInfo) PBYTE pbSignerInfo,
    _In_ DWORD cbSignerInfo,
    _In_ DWORD cCountersigners,
    _In_reads_(cCountersigners) PCMSG_SIGNER_ENCODE_INFO rgCountersigners,
    _Out_writes_bytes_to_opt_(*pcbCountersignature, *pcbCountersignature) PBYTE pbCountersignature,
    _Inout_ PDWORD pcbCountersignature
    );
typedef void * (WINAPI *PFN_CMSG_ALLOC) (
    _In_ size_t cb
    );
typedef void (WINAPI *PFN_CMSG_FREE)(
    _Inout_ void *pv
    );
typedef _Success_(return != FALSE) BOOL (WINAPI *PFN_CMSG_GEN_ENCRYPT_KEY) (
    _Inout_ HCRYPTPROV *phCryptProv,
    _In_ PCRYPT_ALGORITHM_IDENTIFIER paiEncrypt,
    _In_opt_ PVOID pvEncryptAuxInfo,
    _In_ PCERT_PUBLIC_KEY_INFO pPublicKeyInfo,
    __callback PFN_CMSG_ALLOC pfnAlloc,
    _Out_ HCRYPTKEY *phEncryptKey,
    _Outptr_result_bytebuffer_(*pcbEncryptParameters) PBYTE *ppbEncryptParameters,
    _Out_ PDWORD pcbEncryptParameters
    );
typedef BOOL (WINAPI *PFN_CMSG_EXPORT_ENCRYPT_KEY) (
    _In_ HCRYPTPROV hCryptProv,
    _In_ HCRYPTKEY hEncryptKey,
    _In_ PCERT_PUBLIC_KEY_INFO pPublicKeyInfo,
    _Out_writes_bytes_to_opt_(*pcbData, *pcbData) PBYTE pbData,
    _Inout_ PDWORD pcbData
    );
typedef BOOL (WINAPI *PFN_CMSG_IMPORT_ENCRYPT_KEY) (
    _In_ HCRYPTPROV hCryptProv,
    _In_ DWORD dwKeySpec,
    _In_ PCRYPT_ALGORITHM_IDENTIFIER paiEncrypt,
    _In_ PCRYPT_ALGORITHM_IDENTIFIER paiPubKey,
    _In_reads_bytes_(cbEncodedKey) PBYTE pbEncodedKey,
    _In_ DWORD cbEncodedKey,
    _Out_ HCRYPTKEY *phEncryptKey
    );
typedef struct _CMSG_CONTENT_ENCRYPT_INFO {
    DWORD cbSize;
    HCRYPTPROV_LEGACY hCryptProv;
    CRYPT_ALGORITHM_IDENTIFIER ContentEncryptionAlgorithm;
    void *pvEncryptionAuxInfo;
    DWORD cRecipients;
    PCMSG_RECIPIENT_ENCODE_INFO rgCmsRecipients;
    PFN_CMSG_ALLOC pfnAlloc;
    PFN_CMSG_FREE pfnFree;
    DWORD dwEncryptFlags;
    union {
        HCRYPTKEY hContentEncryptKey;
        BCRYPT_KEY_HANDLE hCNGContentEncryptKey;
    } DUMMYUNIONNAME;
    DWORD dwFlags;
    BOOL fCNG;
    BYTE *pbCNGContentEncryptKeyObject;
    BYTE *pbContentEncryptKey;
    DWORD cbContentEncryptKey;
} CMSG_CONTENT_ENCRYPT_INFO, *PCMSG_CONTENT_ENCRYPT_INFO;
typedef BOOL (WINAPI *PFN_CMSG_GEN_CONTENT_ENCRYPT_KEY) (
    _Inout_ PCMSG_CONTENT_ENCRYPT_INFO pContentEncryptInfo,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved
    );
typedef struct _CMSG_KEY_TRANS_ENCRYPT_INFO {
    DWORD cbSize;
    DWORD dwRecipientIndex;
    CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
    CRYPT_DATA_BLOB EncryptedKey;
    DWORD dwFlags;
} CMSG_KEY_TRANS_ENCRYPT_INFO, *PCMSG_KEY_TRANS_ENCRYPT_INFO;
typedef BOOL (WINAPI *PFN_CMSG_EXPORT_KEY_TRANS) (
    _In_ PCMSG_CONTENT_ENCRYPT_INFO pContentEncryptInfo,
    _In_ PCMSG_KEY_TRANS_RECIPIENT_ENCODE_INFO pKeyTransEncodeInfo,
    _Inout_ PCMSG_KEY_TRANS_ENCRYPT_INFO pKeyTransEncryptInfo,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved
    );
typedef struct _CMSG_KEY_AGREE_KEY_ENCRYPT_INFO {
    DWORD cbSize;
    CRYPT_DATA_BLOB EncryptedKey;
} CMSG_KEY_AGREE_KEY_ENCRYPT_INFO, *PCMSG_KEY_AGREE_KEY_ENCRYPT_INFO;
typedef struct _CMSG_KEY_AGREE_ENCRYPT_INFO {
    DWORD cbSize;
    DWORD dwRecipientIndex;
    CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
    CRYPT_DATA_BLOB UserKeyingMaterial;
    DWORD dwOriginatorChoice;
    union {
        CERT_ID OriginatorCertId;
        CERT_PUBLIC_KEY_INFO OriginatorPublicKeyInfo;
    } DUMMYUNIONNAME;
    DWORD cKeyAgreeKeyEncryptInfo;
    PCMSG_KEY_AGREE_KEY_ENCRYPT_INFO *rgpKeyAgreeKeyEncryptInfo;
    DWORD dwFlags;
} CMSG_KEY_AGREE_ENCRYPT_INFO, *PCMSG_KEY_AGREE_ENCRYPT_INFO;
typedef BOOL (WINAPI *PFN_CMSG_EXPORT_KEY_AGREE) (
    _In_ PCMSG_CONTENT_ENCRYPT_INFO pContentEncryptInfo,
    _In_ PCMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO pKeyAgreeEncodeInfo,
    _Inout_ PCMSG_KEY_AGREE_ENCRYPT_INFO pKeyAgreeEncryptInfo,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved
    );
typedef struct _CMSG_MAIL_LIST_ENCRYPT_INFO {
    DWORD cbSize;
    DWORD dwRecipientIndex;
    CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
    CRYPT_DATA_BLOB EncryptedKey;
    DWORD dwFlags;
} CMSG_MAIL_LIST_ENCRYPT_INFO, *PCMSG_MAIL_LIST_ENCRYPT_INFO;
typedef BOOL (WINAPI *PFN_CMSG_EXPORT_MAIL_LIST) (
    _In_ PCMSG_CONTENT_ENCRYPT_INFO pContentEncryptInfo,
    _In_ PCMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO pMailListEncodeInfo,
    _Inout_ PCMSG_MAIL_LIST_ENCRYPT_INFO pMailListEncryptInfo,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved
    );
typedef BOOL (WINAPI *PFN_CMSG_IMPORT_KEY_TRANS) (
    _In_ PCRYPT_ALGORITHM_IDENTIFIER pContentEncryptionAlgorithm,
    _In_ PCMSG_CTRL_KEY_TRANS_DECRYPT_PARA pKeyTransDecryptPara,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved,
    _Out_ HCRYPTKEY *phContentEncryptKey
    );
typedef BOOL (WINAPI *PFN_CMSG_IMPORT_KEY_AGREE) (
    _In_ PCRYPT_ALGORITHM_IDENTIFIER pContentEncryptionAlgorithm,
    _In_ PCMSG_CTRL_KEY_AGREE_DECRYPT_PARA pKeyAgreeDecryptPara,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved,
    _Out_ HCRYPTKEY *phContentEncryptKey
    );
typedef BOOL (WINAPI *PFN_CMSG_IMPORT_MAIL_LIST) (
    _In_ PCRYPT_ALGORITHM_IDENTIFIER pContentEncryptionAlgorithm,
    _In_ PCMSG_CTRL_MAIL_LIST_DECRYPT_PARA pMailListDecryptPara,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved,
    _Out_ HCRYPTKEY *phContentEncryptKey
    );
typedef struct _CMSG_CNG_CONTENT_DECRYPT_INFO {
    DWORD cbSize;
    CRYPT_ALGORITHM_IDENTIFIER ContentEncryptionAlgorithm;
    PFN_CMSG_ALLOC pfnAlloc;
    PFN_CMSG_FREE pfnFree;
    NCRYPT_KEY_HANDLE hNCryptKey;
    BYTE *pbContentEncryptKey;
    DWORD cbContentEncryptKey;
    BCRYPT_KEY_HANDLE hCNGContentEncryptKey;
    BYTE *pbCNGContentEncryptKeyObject;
} CMSG_CNG_CONTENT_DECRYPT_INFO, *PCMSG_CNG_CONTENT_DECRYPT_INFO;
typedef BOOL (WINAPI *PFN_CMSG_CNG_IMPORT_KEY_TRANS) (
    _Inout_ PCMSG_CNG_CONTENT_DECRYPT_INFO pCNGContentDecryptInfo,
    _In_ PCMSG_CTRL_KEY_TRANS_DECRYPT_PARA pKeyTransDecryptPara,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved
    );
typedef BOOL (WINAPI *PFN_CMSG_CNG_IMPORT_KEY_AGREE) (
    _Inout_ PCMSG_CNG_CONTENT_DECRYPT_INFO pCNGContentDecryptInfo,
    _In_ PCMSG_CTRL_KEY_AGREE_DECRYPT_PARA pKeyAgreeDecryptPara,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved
    );
typedef BOOL (WINAPI *PFN_CMSG_CNG_IMPORT_CONTENT_ENCRYPT_KEY) (
    _Inout_ PCMSG_CNG_CONTENT_DECRYPT_INFO pCNGContentDecryptInfo,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved
    );
typedef void *HCERTSTORE;
typedef struct _CERT_CONTEXT {
    DWORD dwCertEncodingType;
    BYTE *pbCertEncoded;
    DWORD cbCertEncoded;
    PCERT_INFO pCertInfo;
    HCERTSTORE hCertStore;
} CERT_CONTEXT, *PCERT_CONTEXT;
typedef const CERT_CONTEXT *PCCERT_CONTEXT;
typedef struct _CRL_CONTEXT {
    DWORD dwCertEncodingType;
    BYTE *pbCrlEncoded;
    DWORD cbCrlEncoded;
    PCRL_INFO pCrlInfo;
    HCERTSTORE hCertStore;
} CRL_CONTEXT, *PCRL_CONTEXT;
typedef const CRL_CONTEXT *PCCRL_CONTEXT;
typedef struct _CTL_CONTEXT {
    DWORD dwMsgAndCertEncodingType;
    BYTE *pbCtlEncoded;
    DWORD cbCtlEncoded;
    PCTL_INFO pCtlInfo;
    HCERTSTORE hCertStore;
    HCRYPTMSG hCryptMsg;
    BYTE *pbCtlContent;
    DWORD cbCtlContent;
} CTL_CONTEXT, *PCTL_CONTEXT;
typedef const CTL_CONTEXT *PCCTL_CONTEXT;
typedef enum CertKeyType WINCRYPT_DWORD_CPP_ONLY
{
    KeyTypeOther = 0,
    KeyTypeVirtualSmartCard = 1,
    KeyTypePhysicalSmartCard = 2,
    KeyTypePassport = 3,
    KeyTypePassportRemote = 4,
    KeyTypePassportSmartCard = 5,
    KeyTypeHardware = 6,
    KeyTypeSoftware = 7,
    KeyTypeSelfSigned = 8,
} CertKeyType;
                                        CERT_MD5_HASH_PROP_ID == (X) || \
                                        CERT_SHA256_HASH_PROP_ID == (X) || \
                                        CERT_SIGNATURE_HASH_PROP_ID == (X))
                                        CERT_PIN_SHA256_HASH_PROP_ID == (X) || \
                                        CERT_SUBJECT_PUBLIC_KEY_MD5_HASH_PROP_ID == (X))
                                        CERT_SUBJECT_PUBLIC_KEY_MD5_HASH_PROP_ID == (X) || \
                                        CERT_ISSUER_SERIAL_NUMBER_MD5_HASH_PROP_ID == (X) || \
                                        CERT_SUBJECT_NAME_MD5_HASH_PROP_ID == (X))
                                        CERT_SUBJECT_PUB_KEY_BIT_LENGTH_PROP_ID == (X) || \
                                        CERT_PUB_KEY_CNG_ALG_BIT_LENGTH_PROP_ID == (X))
        _CRYPT32WTEXT(szOID_CERT_PROP_ID_PREFIX) _CRYPT32WTEXT(_szPROP_ID(PropId))
                                            "1.3.6.1.4.1.311.10.11.28"
                                            "1.3.6.1.4.1.311.10.11.29"
                                            "1.3.6.1.4.1.311.10.11.104"
typedef struct _CRYPT_KEY_PROV_PARAM {
    DWORD dwParam;
    BYTE *pbData;
    DWORD cbData;
    DWORD dwFlags;
} CRYPT_KEY_PROV_PARAM, *PCRYPT_KEY_PROV_PARAM;
typedef struct _CRYPT_KEY_PROV_INFO {
    LPWSTR pwszContainerName;
    LPWSTR pwszProvName;
    DWORD dwProvType;
    DWORD dwFlags;
    DWORD cProvParam;
    PCRYPT_KEY_PROV_PARAM rgProvParam;
    DWORD dwKeySpec;
} CRYPT_KEY_PROV_INFO, *PCRYPT_KEY_PROV_INFO;
typedef struct _CERT_KEY_CONTEXT {
    DWORD cbSize;
    union {
        HCRYPTPROV hCryptProv;
        NCRYPT_KEY_HANDLE hNCryptKey;
    } DUMMYUNIONNAME;
    DWORD dwKeySpec;
} CERT_KEY_CONTEXT, *PCERT_KEY_CONTEXT;
typedef struct _ROOT_INFO_LUID {
    DWORD LowPart;
    LONG HighPart;
} ROOT_INFO_LUID, *PROOT_INFO_LUID;
typedef struct _CRYPT_SMART_CARD_ROOT_INFO {
    BYTE rgbCardID [16];
    ROOT_INFO_LUID luid;
} CRYPT_SMART_CARD_ROOT_INFO, *PCRYPT_SMART_CARD_ROOT_INFO;
typedef struct _CERT_SYSTEM_STORE_RELOCATE_PARA {
    union {
        HKEY hKeyBase;
        void *pvBase;
    } DUMMYUNIONNAME;
    union {
        void *pvSystemStore;
        LPCSTR pszSystemStore;
        LPCWSTR pwszSystemStore;
    } DUMMYUNIONNAME2;
} CERT_SYSTEM_STORE_RELOCATE_PARA, *PCERT_SYSTEM_STORE_RELOCATE_PARA;
    (CERT_SYSTEM_STORE_CURRENT_USER_ID << CERT_SYSTEM_STORE_LOCATION_SHIFT)
    (CERT_SYSTEM_STORE_LOCAL_MACHINE_ID << CERT_SYSTEM_STORE_LOCATION_SHIFT)
    (CERT_SYSTEM_STORE_CURRENT_SERVICE_ID << CERT_SYSTEM_STORE_LOCATION_SHIFT)
    (CERT_SYSTEM_STORE_SERVICES_ID << CERT_SYSTEM_STORE_LOCATION_SHIFT)
    (CERT_SYSTEM_STORE_USERS_ID << CERT_SYSTEM_STORE_LOCATION_SHIFT)
    (CERT_SYSTEM_STORE_CURRENT_USER_GROUP_POLICY_ID << \
        CERT_SYSTEM_STORE_LOCATION_SHIFT)
    (CERT_SYSTEM_STORE_LOCAL_MACHINE_GROUP_POLICY_ID << \
        CERT_SYSTEM_STORE_LOCATION_SHIFT)
    (CERT_SYSTEM_STORE_LOCAL_MACHINE_ENTERPRISE_ID << \
        CERT_SYSTEM_STORE_LOCATION_SHIFT)
    (CERT_SYSTEM_STORE_LOCAL_MACHINE_WCOS_ID << \
        CERT_SYSTEM_STORE_LOCATION_SHIFT)
    L"Software\\Policies\\Microsoft\\SystemCertificates"
    CERT_GROUP_POLICY_SYSTEM_STORE_REGPATH L"\\EFS"
    CERT_GROUP_POLICY_SYSTEM_STORE_REGPATH L"\\Root\\ProtectedRoots"
    szOID_PKIX_KP_CLIENT_AUTH "\0" \
    szOID_PKIX_KP_EMAIL_PROTECTION "\0" \
    szOID_KP_EFS "\0"
    CERT_GROUP_POLICY_SYSTEM_STORE_REGPATH L"\\TrustedPublisher\\Safer"
    L"Software\\Microsoft\\SystemCertificates"
    CERT_LOCAL_MACHINE_SYSTEM_STORE_REGPATH L"\\TrustedPublisher\\Safer"
    L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\OC Manager\\Subcomponents"
    CERT_GROUP_POLICY_SYSTEM_STORE_REGPATH L"\\AuthRoot"
    CERT_LOCAL_MACHINE_SYSTEM_STORE_REGPATH L"\\AuthRoot\\AutoUpdate"
    CERT_AUTO_UPDATE_LOCAL_MACHINE_REGPATH
    CERT_AUTO_UPDATE_ROOT_DIR_URL_VALUE_NAME
    L"DisallowedCertSyncDeltaTime"
    L"DisallowedCertLastSyncTime"
    L"DisallowedCertEncodedCtl"
    L"DisallowedCert_AutoUpdate_1"
    L"PinRulesSyncDeltaTime"
    L"PinRulesLastSyncTime"
    L"PinRulesEncodedCtl"
    L"PinRules_AutoUpdate_1"
typedef struct _CERT_REGISTRY_STORE_CLIENT_GPT_PARA {
    HKEY hKeyBase;
    LPWSTR pwszRegPath;
} CERT_REGISTRY_STORE_CLIENT_GPT_PARA, *PCERT_REGISTRY_STORE_CLIENT_GPT_PARA;
typedef struct _CERT_REGISTRY_STORE_ROAMING_PARA {
    HKEY hKey;
    LPWSTR pwszStoreDirectory;
} CERT_REGISTRY_STORE_ROAMING_PARA, *PCERT_REGISTRY_STORE_ROAMING_PARA;
    L"Software\\Microsoft\\Cryptography\\IEDirtyFlags"
typedef struct _CERT_LDAP_STORE_OPENED_PARA {
    void *pvLdapSessionHandle;
    LPCWSTR pwszLdapUrl;
} CERT_LDAP_STORE_OPENED_PARA, *PCERT_LDAP_STORE_OPENED_PARA;
WINCRYPT32API
_Must_inspect_result_
HCERTSTORE
WINAPI
CertOpenStore(
    _In_ LPCSTR lpszStoreProvider,
    _In_ DWORD dwEncodingType,
    _In_opt_ HCRYPTPROV_LEGACY hCryptProv,
    _In_ DWORD dwFlags,
    _In_opt_ const void *pvPara
    );
typedef void *HCERTSTOREPROV;
typedef struct _CERT_STORE_PROV_INFO {
    DWORD cbSize;
    DWORD cStoreProvFunc;
    void **rgpvStoreProvFunc;
    HCERTSTOREPROV hStoreProv;
    DWORD dwStoreProvFlags;
    HCRYPTOIDFUNCADDR hStoreProvFuncAddr2;
} CERT_STORE_PROV_INFO, *PCERT_STORE_PROV_INFO;
typedef BOOL (WINAPI *PFN_CERT_DLL_OPEN_STORE_PROV_FUNC)(
    _In_ LPCSTR lpszStoreProvider,
    _In_ DWORD dwEncodingType,
    _In_opt_ HCRYPTPROV_LEGACY hCryptProv,
    _In_ DWORD dwFlags,
    _In_opt_ const void *pvPara,
    _In_ HCERTSTORE hCertStore,
    _Inout_ PCERT_STORE_PROV_INFO pStoreProvInfo
    );
typedef void (WINAPI *PFN_CERT_STORE_PROV_CLOSE)(
    _Inout_opt_ HCERTSTOREPROV hStoreProv,
    _In_ DWORD dwFlags
    );
typedef _Success_(return != FALSE) BOOL (WINAPI *PFN_CERT_STORE_PROV_READ_CERT)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCERT_CONTEXT pStoreCertContext,
    _In_ DWORD dwFlags,
    _Outptr_ PCCERT_CONTEXT *ppProvCertContext
    );
typedef BOOL (WINAPI *PFN_CERT_STORE_PROV_WRITE_CERT)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCERT_CONTEXT pCertContext,
    _In_ DWORD dwFlags
    );
typedef BOOL (WINAPI *PFN_CERT_STORE_PROV_DELETE_CERT)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCERT_CONTEXT pCertContext,
    _In_ DWORD dwFlags
    );
typedef BOOL (WINAPI *PFN_CERT_STORE_PROV_SET_CERT_PROPERTY)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCERT_CONTEXT pCertContext,
    _In_ DWORD dwPropId,
    _In_ DWORD dwFlags,
    _In_opt_ const void *pvData
    );
typedef _Success_(return != FALSE) BOOL (WINAPI *PFN_CERT_STORE_PROV_READ_CRL)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCRL_CONTEXT pStoreCrlContext,
    _In_ DWORD dwFlags,
    _Outptr_ PCCRL_CONTEXT *ppProvCrlContext
    );
typedef BOOL (WINAPI *PFN_CERT_STORE_PROV_WRITE_CRL)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCRL_CONTEXT pCrlContext,
    _In_ DWORD dwFlags
    );
typedef BOOL (WINAPI *PFN_CERT_STORE_PROV_DELETE_CRL)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCRL_CONTEXT pCrlContext,
    _In_ DWORD dwFlags
    );
typedef BOOL (WINAPI *PFN_CERT_STORE_PROV_SET_CRL_PROPERTY)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCRL_CONTEXT pCrlContext,
    _In_ DWORD dwPropId,
    _In_ DWORD dwFlags,
    _In_opt_ const void *pvData
    );
typedef _Success_(return != FALSE) BOOL (WINAPI *PFN_CERT_STORE_PROV_READ_CTL)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCTL_CONTEXT pStoreCtlContext,
    _In_ DWORD dwFlags,
    _Outptr_ PCCTL_CONTEXT *ppProvCtlContext
    );
typedef BOOL (WINAPI *PFN_CERT_STORE_PROV_WRITE_CTL)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCTL_CONTEXT pCtlContext,
    _In_ DWORD dwFlags
    );
typedef BOOL (WINAPI *PFN_CERT_STORE_PROV_DELETE_CTL)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCTL_CONTEXT pCtlContext,
    _In_ DWORD dwFlags
                                                     );
typedef BOOL (WINAPI *PFN_CERT_STORE_PROV_SET_CTL_PROPERTY)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCTL_CONTEXT pCtlContext,
    _In_ DWORD dwPropId,
    _In_ DWORD dwFlags,
    _In_opt_ const void *pvData
    );
typedef BOOL (WINAPI *PFN_CERT_STORE_PROV_CONTROL)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ DWORD dwFlags,
    _In_ DWORD dwCtrlType,
    _In_opt_ void const *pvCtrlPara
    );
typedef struct _CERT_STORE_PROV_FIND_INFO {
    DWORD cbSize;
    DWORD dwMsgAndCertEncodingType;
    DWORD dwFindFlags;
    DWORD dwFindType;
    const void *pvFindPara;
} CERT_STORE_PROV_FIND_INFO, *PCERT_STORE_PROV_FIND_INFO;
typedef const CERT_STORE_PROV_FIND_INFO CCERT_STORE_PROV_FIND_INFO,
*PCCERT_STORE_PROV_FIND_INFO;
typedef _Success_(return != FALSE) BOOL (WINAPI *PFN_CERT_STORE_PROV_FIND_CERT)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCERT_STORE_PROV_FIND_INFO pFindInfo,
    _In_ PCCERT_CONTEXT pPrevCertContext,
    _In_ DWORD dwFlags,
    _Inout_ void **ppvStoreProvFindInfo,
    _Outptr_ PCCERT_CONTEXT *ppProvCertContext
    );
typedef BOOL (WINAPI *PFN_CERT_STORE_PROV_FREE_FIND_CERT)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCERT_CONTEXT pCertContext,
    _In_ void *pvStoreProvFindInfo,
    _In_ DWORD dwFlags
    );
typedef BOOL (WINAPI *PFN_CERT_STORE_PROV_GET_CERT_PROPERTY)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCERT_CONTEXT pCertContext,
    _In_ DWORD dwPropId,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*pcbData, *pcbData) void *pvData,
    _Inout_ DWORD *pcbData
    );
typedef _Success_(return != FALSE) BOOL (WINAPI *PFN_CERT_STORE_PROV_FIND_CRL)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCERT_STORE_PROV_FIND_INFO pFindInfo,
    _In_ PCCRL_CONTEXT pPrevCrlContext,
    _In_ DWORD dwFlags,
    _Inout_ void **ppvStoreProvFindInfo,
    _Outptr_ PCCRL_CONTEXT *ppProvCrlContext
    );
typedef BOOL (WINAPI *PFN_CERT_STORE_PROV_FREE_FIND_CRL)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCRL_CONTEXT pCrlContext,
    _In_ void *pvStoreProvFindInfo,
    _In_ DWORD dwFlags
    );
typedef BOOL (WINAPI *PFN_CERT_STORE_PROV_GET_CRL_PROPERTY)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCRL_CONTEXT pCrlContext,
    _In_ DWORD dwPropId,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*pcbData, *pcbData) void *pvData,
    _Inout_ DWORD *pcbData
    );
typedef _Success_(return != FALSE) BOOL (WINAPI *PFN_CERT_STORE_PROV_FIND_CTL)(
    _In_ HCERTSTOREPROV hStoreProv,
    _In_ PCCERT_STORE_PROV_FIND_INFO pFindInfo,
    _In_ PCCTL_CONTEXT pPrevCtlContext,
    _In_ DWORD dwFlags,
    _Inout_ void **ppvStoreProvFindInfo,
    _Outptr_ PCCTL_CONTEXT *ppProvCtlContext
    );
typedef BOOL (WINAPI *PFN_CERT_STORE_PROV_FREE_FIND_CTL)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCTL_CONTEXT pCtlContext,
    _In_ void *pvStoreProvFindInfo,
    _In_ DWORD dwFlags
    );
typedef BOOL (WINAPI *PFN_CERT_STORE_PROV_GET_CTL_PROPERTY)(
    _Inout_ HCERTSTOREPROV hStoreProv,
    _In_ PCCTL_CONTEXT pCtlContext,
    _In_ DWORD dwPropId,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*pcbData, *pcbData) void *pvData,
    _Inout_ DWORD *pcbData
    );
WINCRYPT32API
HCERTSTORE
WINAPI
CertDuplicateStore(
    _In_ HCERTSTORE hCertStore
    );
WINCRYPT32API
BOOL
WINAPI
CertSaveStore(
    _In_ HCERTSTORE hCertStore,
    _In_ DWORD dwEncodingType,
    _In_ DWORD dwSaveAs,
    _In_ DWORD dwSaveTo,
    _Inout_ void *pvSaveToPara,
    _In_ DWORD dwFlags
    );
WINCRYPT32API
BOOL
WINAPI
CertCloseStore(
    _In_opt_ HCERTSTORE hCertStore,
    _In_ DWORD dwFlags
    );
WINCRYPT32API
PCCERT_CONTEXT
WINAPI
CertGetSubjectCertificateFromStore(
    _In_ HCERTSTORE hCertStore,
    _In_ DWORD dwCertEncodingType,
    _In_ PCERT_INFO pCertId
    );
WINCRYPT32API
PCCERT_CONTEXT
WINAPI
CertEnumCertificatesInStore(
    _In_ HCERTSTORE hCertStore,
    _In_opt_ PCCERT_CONTEXT pPrevCertContext
    );
WINCRYPT32API
PCCERT_CONTEXT
WINAPI
CertFindCertificateInStore(
    _In_ HCERTSTORE hCertStore,
    _In_ DWORD dwCertEncodingType,
    _In_ DWORD dwFindFlags,
    _In_ DWORD dwFindType,
    _In_opt_ const void *pvFindPara,
    _In_opt_ PCCERT_CONTEXT pPrevCertContext
    );
                                 CERT_INFO_SUBJECT_FLAG)
                                 CERT_INFO_SUBJECT_FLAG)
                                 CERT_INFO_ISSUER_FLAG)
                                 CERT_INFO_ISSUER_FLAG)
                                 CERT_INFO_SUBJECT_FLAG)
                                 CERT_INFO_SUBJECT_FLAG)
                                 CERT_INFO_ISSUER_FLAG)
                                 CERT_INFO_ISSUER_FLAG)
                    (CERT_COMPARE_CROSS_CERT_DIST_POINTS << CERT_COMPARE_SHIFT)
                    (CERT_COMPARE_PUBKEY_MD5_HASH << CERT_COMPARE_SHIFT)
                    (CERT_COMPARE_SUBJECT_INFO_ACCESS << CERT_COMPARE_SHIFT)
        CERT_FIND_EXT_ONLY_ENHKEY_USAGE_FLAG
        CERT_FIND_PROP_ONLY_ENHKEY_USAGE_FLAG
WINCRYPT32API
PCCERT_CONTEXT
WINAPI
CertGetIssuerCertificateFromStore(
    _In_ HCERTSTORE hCertStore,
    _In_ PCCERT_CONTEXT pSubjectContext,
    _In_opt_ PCCERT_CONTEXT pPrevIssuerContext,
    _Inout_ DWORD *pdwFlags
    );
WINCRYPT32API
BOOL
WINAPI
CertVerifySubjectCertificateContext(
    _In_ PCCERT_CONTEXT pSubject,
    _In_opt_ PCCERT_CONTEXT pIssuer,
    _Inout_ DWORD *pdwFlags
    );
WINCRYPT32API
PCCERT_CONTEXT
WINAPI
CertDuplicateCertificateContext(
    _In_opt_ PCCERT_CONTEXT pCertContext
    );
WINCRYPT32API
PCCERT_CONTEXT
WINAPI
CertCreateCertificateContext(
    _In_ DWORD dwCertEncodingType,
    _In_reads_bytes_(cbCertEncoded) const BYTE *pbCertEncoded,
    _In_ DWORD cbCertEncoded
    );
WINCRYPT32API
BOOL
WINAPI
CertFreeCertificateContext(
    _In_opt_ PCCERT_CONTEXT pCertContext
    );
WINCRYPT32API
BOOL
WINAPI
CertSetCertificateContextProperty(
    _In_ PCCERT_CONTEXT pCertContext,
    _In_ DWORD dwPropId,
    _In_ DWORD dwFlags,
    _In_opt_ const void *pvData
    );
WINCRYPT32API
BOOL
WINAPI
CertGetCertificateContextProperty(
    _In_ PCCERT_CONTEXT pCertContext,
    _In_ DWORD dwPropId,
    _Out_writes_bytes_to_opt_(*pcbData, *pcbData) void *pvData,
    _Inout_ DWORD *pcbData
    );
WINCRYPT32API
DWORD
WINAPI
CertEnumCertificateContextProperties(
    _In_ PCCERT_CONTEXT pCertContext,
    _In_ DWORD dwPropId
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CertCreateCTLEntryFromCertificateContextProperties(
    _In_ PCCERT_CONTEXT pCertContext,
    _In_ DWORD cOptAttr,
    _In_reads_opt_(cOptAttr) PCRYPT_ATTRIBUTE rgOptAttr,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved,
    _Out_writes_bytes_to_opt_(*pcbCtlEntry, *pcbCtlEntry) PCTL_ENTRY pCtlEntry,
    _Inout_ DWORD *pcbCtlEntry
    );
WINCRYPT32API
BOOL
WINAPI
CertSetCertificateContextPropertiesFromCTLEntry(
    _In_ PCCERT_CONTEXT pCertContext,
    _In_ PCTL_ENTRY pCtlEntry,
    _In_ DWORD dwFlags
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
PCCRL_CONTEXT
WINAPI
CertGetCRLFromStore(
    _In_ HCERTSTORE hCertStore,
    _In_opt_ PCCERT_CONTEXT pIssuerContext,
    _In_opt_ PCCRL_CONTEXT pPrevCrlContext,
    _Inout_ DWORD *pdwFlags
    );
WINCRYPT32API
PCCRL_CONTEXT
WINAPI
CertEnumCRLsInStore(
    _In_ HCERTSTORE hCertStore,
    _In_opt_ PCCRL_CONTEXT pPrevCrlContext
    );
WINCRYPT32API
PCCRL_CONTEXT
WINAPI
CertFindCRLInStore(
    _In_ HCERTSTORE hCertStore,
    _In_ DWORD dwCertEncodingType,
    _In_ DWORD dwFindFlags,
    _In_ DWORD dwFindType,
    _In_opt_ const void *pvFindPara,
    _In_opt_ PCCRL_CONTEXT pPrevCrlContext
    );
typedef struct _CRL_FIND_ISSUED_FOR_PARA {
    PCCERT_CONTEXT pSubjectCert;
    PCCERT_CONTEXT pIssuerCert;
} CRL_FIND_ISSUED_FOR_PARA, *PCRL_FIND_ISSUED_FOR_PARA;
WINCRYPT32API
PCCRL_CONTEXT
WINAPI
CertDuplicateCRLContext(
    _In_opt_ PCCRL_CONTEXT pCrlContext
    );
WINCRYPT32API
PCCRL_CONTEXT
WINAPI
CertCreateCRLContext(
    _In_ DWORD dwCertEncodingType,
    _In_reads_bytes_(cbCrlEncoded) const BYTE *pbCrlEncoded,
    _In_ DWORD cbCrlEncoded
    );
WINCRYPT32API
BOOL
WINAPI
CertFreeCRLContext(
    _In_opt_ PCCRL_CONTEXT pCrlContext
    );
WINCRYPT32API
BOOL
WINAPI
CertSetCRLContextProperty(
    _In_ PCCRL_CONTEXT pCrlContext,
    _In_ DWORD dwPropId,
    _In_ DWORD dwFlags,
    _In_opt_ const void *pvData
    );
WINCRYPT32API
BOOL
WINAPI
CertGetCRLContextProperty(
    _In_ PCCRL_CONTEXT pCrlContext,
    _In_ DWORD dwPropId,
    _Out_writes_bytes_to_opt_(*pcbData, *pcbData) void *pvData,
    _Inout_ DWORD *pcbData
    );
WINCRYPT32API
DWORD
WINAPI
CertEnumCRLContextProperties(
    _In_ PCCRL_CONTEXT pCrlContext,
    _In_ DWORD dwPropId
    );
WINCRYPT32API
BOOL
WINAPI
CertFindCertificateInCRL(
    _In_ PCCERT_CONTEXT pCert,
    _In_ PCCRL_CONTEXT pCrlContext,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved,
    _Outptr_result_maybenull_ PCRL_ENTRY *ppCrlEntry
    );
WINCRYPT32API
BOOL
WINAPI
CertIsValidCRLForCertificate(
    _In_ PCCERT_CONTEXT pCert,
    _In_ PCCRL_CONTEXT pCrl,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved
    );
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CertAddEncodedCertificateToStore(
    _In_opt_ HCERTSTORE hCertStore,
    _In_ DWORD dwCertEncodingType,
    _In_reads_bytes_(cbCertEncoded) const BYTE *pbCertEncoded,
    _In_ DWORD cbCertEncoded,
    _In_ DWORD dwAddDisposition,
    _Outptr_opt_ PCCERT_CONTEXT *ppCertContext
    );
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CertAddCertificateContextToStore(
    _In_opt_ HCERTSTORE hCertStore,
    _In_ PCCERT_CONTEXT pCertContext,
    _In_ DWORD dwAddDisposition,
    _Outptr_opt_ PCCERT_CONTEXT *ppStoreContext
    );
                (1 << CERT_STORE_CERTIFICATE_CONTEXT)
                (1 << CERT_STORE_CRL_CONTEXT)
                (1 << CERT_STORE_CTL_CONTEXT)
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CertAddSerializedElementToStore(
    _In_opt_ HCERTSTORE hCertStore,
    _In_reads_bytes_(cbElement) const BYTE *pbElement,
    _In_ DWORD cbElement,
    _In_ DWORD dwAddDisposition,
    _In_ DWORD dwFlags,
    _In_ DWORD dwContextTypeFlags,
    _Out_opt_ DWORD *pdwContextType,
    _Outptr_opt_ const void **ppvContext
    );
WINCRYPT32API
BOOL
WINAPI
CertDeleteCertificateFromStore(
    _In_ PCCERT_CONTEXT pCertContext
    );
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CertAddEncodedCRLToStore(
    _In_opt_ HCERTSTORE hCertStore,
    _In_ DWORD dwCertEncodingType,
    _In_reads_bytes_(cbCrlEncoded) const BYTE *pbCrlEncoded,
    _In_ DWORD cbCrlEncoded,
    _In_ DWORD dwAddDisposition,
    _Outptr_opt_ PCCRL_CONTEXT *ppCrlContext
    );
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CertAddCRLContextToStore(
    _In_opt_ HCERTSTORE hCertStore,
    _In_ PCCRL_CONTEXT pCrlContext,
    _In_ DWORD dwAddDisposition,
    _Outptr_opt_ PCCRL_CONTEXT *ppStoreContext
    );
WINCRYPT32API
BOOL
WINAPI
CertDeleteCRLFromStore(
    _In_ PCCRL_CONTEXT pCrlContext
    );
WINCRYPT32API
BOOL
WINAPI
CertSerializeCertificateStoreElement(
    _In_ PCCERT_CONTEXT pCertContext,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*pcbElement, *pcbElement) BYTE *pbElement,
    _Inout_ DWORD *pcbElement
    );
WINCRYPT32API
BOOL
WINAPI
CertSerializeCRLStoreElement(
    _In_ PCCRL_CONTEXT pCrlContext,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*pcbElement, *pcbElement) BYTE *pbElement,
    _Inout_ DWORD *pcbElement
    );
WINCRYPT32API
PCCTL_CONTEXT
WINAPI
CertDuplicateCTLContext(
    _In_opt_ PCCTL_CONTEXT pCtlContext
    );
WINCRYPT32API
PCCTL_CONTEXT
WINAPI
CertCreateCTLContext(
    _In_ DWORD dwMsgAndCertEncodingType,
    _In_reads_bytes_(cbCtlEncoded) const BYTE *pbCtlEncoded,
    _In_ DWORD cbCtlEncoded
    );
WINCRYPT32API
BOOL
WINAPI
CertFreeCTLContext(
    _In_opt_ PCCTL_CONTEXT pCtlContext
    );
WINCRYPT32API
BOOL
WINAPI
CertSetCTLContextProperty(
    _In_ PCCTL_CONTEXT pCtlContext,
    _In_ DWORD dwPropId,
    _In_ DWORD dwFlags,
    _In_opt_ const void *pvData
    );
WINCRYPT32API
BOOL
WINAPI
CertGetCTLContextProperty(
    _In_ PCCTL_CONTEXT pCtlContext,
    _In_ DWORD dwPropId,
    _Out_writes_bytes_to_opt_(*pcbData, *pcbData) void *pvData,
    _Inout_ DWORD *pcbData
    );
WINCRYPT32API
DWORD
WINAPI
CertEnumCTLContextProperties(
    _In_ PCCTL_CONTEXT pCtlContext,
    _In_ DWORD dwPropId
    );
WINCRYPT32API
PCCTL_CONTEXT
WINAPI
CertEnumCTLsInStore(
    _In_ HCERTSTORE hCertStore,
    _In_opt_ PCCTL_CONTEXT pPrevCtlContext
    );
WINCRYPT32API
PCTL_ENTRY
WINAPI
CertFindSubjectInCTL(
    _In_ DWORD dwEncodingType,
    _In_ DWORD dwSubjectType,
    _In_ void *pvSubject,
    _In_ PCCTL_CONTEXT pCtlContext,
    _In_ DWORD dwFlags
    );
typedef struct _CTL_ANY_SUBJECT_INFO {
    CRYPT_ALGORITHM_IDENTIFIER SubjectAlgorithm;
    CRYPT_DATA_BLOB SubjectIdentifier;
} CTL_ANY_SUBJECT_INFO, *PCTL_ANY_SUBJECT_INFO;
WINCRYPT32API
PCCTL_CONTEXT
WINAPI
CertFindCTLInStore(
    _In_ HCERTSTORE hCertStore,
    _In_ DWORD dwMsgAndCertEncodingType,
    _In_ DWORD dwFindFlags,
    _In_ DWORD dwFindType,
    _In_opt_ const void *pvFindPara,
    _In_opt_ PCCTL_CONTEXT pPrevCtlContext
    );
typedef struct _CTL_FIND_USAGE_PARA {
    DWORD cbSize;
    CTL_USAGE SubjectUsage;
    CRYPT_DATA_BLOB ListIdentifier;
    PCERT_INFO pSigner;
} CTL_FIND_USAGE_PARA, *PCTL_FIND_USAGE_PARA;
typedef struct _CTL_FIND_SUBJECT_PARA {
    DWORD cbSize;
    PCTL_FIND_USAGE_PARA pUsagePara;
    DWORD dwSubjectType;
    void *pvSubject;
} CTL_FIND_SUBJECT_PARA, *PCTL_FIND_SUBJECT_PARA;
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CertAddEncodedCTLToStore(
    _In_opt_ HCERTSTORE hCertStore,
    _In_ DWORD dwMsgAndCertEncodingType,
    _In_reads_bytes_(cbCtlEncoded) const BYTE *pbCtlEncoded,
    _In_ DWORD cbCtlEncoded,
    _In_ DWORD dwAddDisposition,
    _Outptr_opt_ PCCTL_CONTEXT *ppCtlContext
    );
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CertAddCTLContextToStore(
    _In_opt_ HCERTSTORE hCertStore,
    _In_ PCCTL_CONTEXT pCtlContext,
    _In_ DWORD dwAddDisposition,
    _Outptr_opt_ PCCTL_CONTEXT *ppStoreContext
    );
WINCRYPT32API
BOOL
WINAPI
CertSerializeCTLStoreElement(
    _In_ PCCTL_CONTEXT pCtlContext,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*pcbElement, *pcbElement) BYTE *pbElement,
    _Inout_ DWORD *pcbElement
    );
WINCRYPT32API
BOOL
WINAPI
CertDeleteCTLFromStore(
    _In_ PCCTL_CONTEXT pCtlContext
    );
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CertAddCertificateLinkToStore(
    _In_ HCERTSTORE hCertStore,
    _In_ PCCERT_CONTEXT pCertContext,
    _In_ DWORD dwAddDisposition,
    _Outptr_opt_ PCCERT_CONTEXT *ppStoreContext
    );
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CertAddCRLLinkToStore(
    _In_ HCERTSTORE hCertStore,
    _In_ PCCRL_CONTEXT pCrlContext,
    _In_ DWORD dwAddDisposition,
    _Outptr_opt_ PCCRL_CONTEXT *ppStoreContext
    );
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CertAddCTLLinkToStore(
    _In_ HCERTSTORE hCertStore,
    _In_ PCCTL_CONTEXT pCtlContext,
    _In_ DWORD dwAddDisposition,
    _Outptr_opt_ PCCTL_CONTEXT *ppStoreContext
    );
WINCRYPT32API
BOOL
WINAPI
CertAddStoreToCollection(
    _In_ HCERTSTORE hCollectionStore,
    _In_opt_ HCERTSTORE hSiblingStore,
    _In_ DWORD dwUpdateFlags,
    _In_ DWORD dwPriority
    );
WINCRYPT32API
void
WINAPI
CertRemoveStoreFromCollection(
    _In_ HCERTSTORE hCollectionStore,
    _In_ HCERTSTORE hSiblingStore
    );
WINCRYPT32API
BOOL
WINAPI
CertControlStore(
    _In_ HCERTSTORE hCertStore,
    _In_ DWORD dwFlags,
    _In_ DWORD dwCtrlType,
    _In_opt_ void const *pvCtrlPara
    );
WINCRYPT32API
BOOL
WINAPI
CertSetStoreProperty(
    _In_ HCERTSTORE hCertStore,
    _In_ DWORD dwPropId,
    _In_ DWORD dwFlags,
    _In_opt_ const void *pvData
    );
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CertGetStoreProperty(
    _In_ HCERTSTORE hCertStore,
    _In_ DWORD dwPropId,
    _Out_writes_bytes_to_opt_(*pcbData, *pcbData) void *pvData,
    _Inout_ DWORD *pcbData
    );
typedef BOOL (WINAPI *PFN_CERT_CREATE_CONTEXT_SORT_FUNC)(
    _In_ DWORD cbTotalEncoded,
    _In_ DWORD cbRemainEncoded,
    _In_ DWORD cEntry,
    _Inout_opt_ void *pvSort
    );
typedef struct _CERT_CREATE_CONTEXT_PARA {
    DWORD cbSize;
    PFN_CRYPT_FREE pfnFree;
    void *pvFree;
    PFN_CERT_CREATE_CONTEXT_SORT_FUNC pfnSort;
    void *pvSort;
} CERT_CREATE_CONTEXT_PARA, *PCERT_CREATE_CONTEXT_PARA;
WINCRYPT32API
const void *
WINAPI
CertCreateContext(
    _In_ DWORD dwContextType,
    _In_ DWORD dwEncodingType,
    _In_reads_bytes_(cbEncoded) const BYTE *pbEncoded,
    _In_ DWORD cbEncoded,
    _In_ DWORD dwFlags,
    _In_opt_ PCERT_CREATE_CONTEXT_PARA pCreatePara
    );
typedef struct _CERT_SYSTEM_STORE_INFO {
    DWORD cbSize;
} CERT_SYSTEM_STORE_INFO, *PCERT_SYSTEM_STORE_INFO;
typedef struct _CERT_PHYSICAL_STORE_INFO {
    DWORD cbSize;
    LPSTR pszOpenStoreProvider;
    DWORD dwOpenEncodingType;
    DWORD dwOpenFlags;
    CRYPT_DATA_BLOB OpenParameters;
    DWORD dwFlags;
    DWORD dwPriority;
} CERT_PHYSICAL_STORE_INFO, *PCERT_PHYSICAL_STORE_INFO;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
BOOL
WINAPI
CertRegisterSystemStore(
    _In_ const void *pvSystemStore,
    _In_ DWORD dwFlags,
    _In_opt_ PCERT_SYSTEM_STORE_INFO pStoreInfo,
    _Reserved_ void *pvReserved
    );
WINCRYPT32API
BOOL
WINAPI
CertRegisterPhysicalStore(
    _In_ const void *pvSystemStore,
    _In_ DWORD dwFlags,
    _In_ LPCWSTR pwszStoreName,
    _In_ PCERT_PHYSICAL_STORE_INFO pStoreInfo,
    _Reserved_ void *pvReserved
    );
WINCRYPT32API
BOOL
WINAPI
CertUnregisterSystemStore(
    _In_ const void *pvSystemStore,
    _In_ DWORD dwFlags
    );
WINCRYPT32API
BOOL
WINAPI
CertUnregisterPhysicalStore(
    _In_ const void *pvSystemStore,
    _In_ DWORD dwFlags,
    _In_ LPCWSTR pwszStoreName
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef BOOL (WINAPI *PFN_CERT_ENUM_SYSTEM_STORE_LOCATION)(
    _In_ LPCWSTR pwszStoreLocation,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved,
    _Inout_opt_ void *pvArg
    );
typedef BOOL (WINAPI *PFN_CERT_ENUM_SYSTEM_STORE)(
    _In_ const void *pvSystemStore,
    _In_ DWORD dwFlags,
    _In_ PCERT_SYSTEM_STORE_INFO pStoreInfo,
    _Reserved_ void *pvReserved,
    _Inout_opt_ void *pvArg
    );
typedef BOOL (WINAPI *PFN_CERT_ENUM_PHYSICAL_STORE)(
    _In_ const void *pvSystemStore,
    _In_ DWORD dwFlags,
    _In_ LPCWSTR pwszStoreName,
    _In_ PCERT_PHYSICAL_STORE_INFO pStoreInfo,
    _Reserved_ void *pvReserved,
    _Inout_opt_ void *pvArg
    );
            L".LocalMachineGroupPolicy"
WINCRYPT32API
BOOL
WINAPI
CertEnumSystemStoreLocation(
    _In_ DWORD dwFlags,
    _Inout_opt_ void *pvArg,
    __callback PFN_CERT_ENUM_SYSTEM_STORE_LOCATION pfnEnum
    );
WINCRYPT32API
BOOL
WINAPI
CertEnumSystemStore(
    _In_ DWORD dwFlags,
    _In_opt_ void *pvSystemStoreLocationPara,
    _Inout_opt_ void *pvArg,
    __callback PFN_CERT_ENUM_SYSTEM_STORE pfnEnum
    );
WINCRYPT32API
BOOL
WINAPI
CertEnumPhysicalStore(
    _In_ const void *pvSystemStore,
    _In_ DWORD dwFlags,
    _Inout_opt_ void *pvArg,
    __callback PFN_CERT_ENUM_PHYSICAL_STORE pfnEnum
    );
WINCRYPT32API
BOOL
WINAPI
CertGetEnhancedKeyUsage(
    _In_ PCCERT_CONTEXT pCertContext,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*pcbUsage, *pcbUsage) PCERT_ENHKEY_USAGE pUsage,
    _Inout_ DWORD *pcbUsage
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
BOOL
WINAPI
CertSetEnhancedKeyUsage(
    _In_ PCCERT_CONTEXT pCertContext,
    _In_opt_ PCERT_ENHKEY_USAGE pUsage
    );
WINCRYPT32API
BOOL
WINAPI
CertAddEnhancedKeyUsageIdentifier(
    _In_ PCCERT_CONTEXT pCertContext,
    _In_ LPCSTR pszUsageIdentifier
    );
WINCRYPT32API
BOOL
WINAPI
CertRemoveEnhancedKeyUsageIdentifier(
    _In_ PCCERT_CONTEXT pCertContext,
    _In_ LPCSTR pszUsageIdentifier
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CertGetValidUsages(
    _In_ DWORD cCerts,
    _In_reads_(cCerts) PCCERT_CONTEXT *rghCerts,
    _Out_ int *cNumOIDs,
    _Out_writes_bytes_to_opt_(*pcbOIDs, *pcbOIDs) LPSTR *rghOIDs,
    _Inout_ DWORD *pcbOIDs);
WINCRYPT32API
_Success_(return == TRUE)
BOOL
WINAPI
CryptMsgGetAndVerifySigner(
    _In_ HCRYPTMSG hCryptMsg,
    _In_ DWORD cSignerStore,
    _In_reads_opt_(cSignerStore) HCERTSTORE *rghSignerStore,
    _In_ DWORD dwFlags,
    _Outptr_opt_ PCCERT_CONTEXT *ppSigner,
    _Inout_opt_ DWORD *pdwSignerIndex
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
BOOL
WINAPI
CryptMsgSignCTL(
    _In_ DWORD dwMsgEncodingType,
    _In_reads_bytes_(cbCtlContent) BYTE *pbCtlContent,
    _In_ DWORD cbCtlContent,
    _In_ PCMSG_SIGNED_ENCODE_INFO pSignInfo,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*pcbEncoded, *pcbEncoded) BYTE *pbEncoded,
    _Inout_ DWORD *pcbEncoded
    );
WINCRYPT32API
BOOL
WINAPI
CryptMsgEncodeAndSignCTL(
    _In_ DWORD dwMsgEncodingType,
    _In_ PCTL_INFO pCtlInfo,
    _In_ PCMSG_SIGNED_ENCODE_INFO pSignInfo,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*pcbEncoded, *pcbEncoded) BYTE *pbEncoded,
    _Inout_ DWORD *pcbEncoded
    );
WINCRYPT32API
BOOL
WINAPI
CertFindSubjectInSortedCTL(
    _In_ PCRYPT_DATA_BLOB pSubjectIdentifier,
    _In_ PCCTL_CONTEXT pCtlContext,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved,
    _Out_opt_ PCRYPT_DER_BLOB pEncodedAttributes
    );
WINCRYPT32API
BOOL
WINAPI
CertEnumSubjectInSortedCTL(
    _In_ PCCTL_CONTEXT pCtlContext,
    _Inout_ void **ppvNextSubject,
    _Out_opt_ PCRYPT_DER_BLOB pSubjectIdentifier,
    _Out_opt_ PCRYPT_DER_BLOB pEncodedAttributes
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct _CTL_VERIFY_USAGE_PARA {
    DWORD cbSize;
    CRYPT_DATA_BLOB ListIdentifier;
    DWORD cCtlStore;
    HCERTSTORE *rghCtlStore;
    DWORD cSignerStore;
    HCERTSTORE *rghSignerStore;
} CTL_VERIFY_USAGE_PARA, *PCTL_VERIFY_USAGE_PARA;
typedef struct _CTL_VERIFY_USAGE_STATUS {
    DWORD cbSize;
    DWORD dwError;
    DWORD dwFlags;
    PCCTL_CONTEXT *ppCtl;
    DWORD dwCtlEntryIndex;
    PCCERT_CONTEXT *ppSigner;
    DWORD dwSignerIndex;
} CTL_VERIFY_USAGE_STATUS, *PCTL_VERIFY_USAGE_STATUS;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
BOOL
WINAPI
CertVerifyCTLUsage(
    _In_ DWORD dwEncodingType,
    _In_ DWORD dwSubjectType,
    _In_ void *pvSubject,
    _In_ PCTL_USAGE pSubjectUsage,
    _In_ DWORD dwFlags,
    _In_opt_ PCTL_VERIFY_USAGE_PARA pVerifyUsagePara,
    _Inout_ PCTL_VERIFY_USAGE_STATUS pVerifyUsageStatus
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct _CERT_REVOCATION_CRL_INFO {
    DWORD cbSize;
    PCCRL_CONTEXT pBaseCrlContext;
    PCCRL_CONTEXT pDeltaCrlContext;
    PCRL_ENTRY pCrlEntry;
    BOOL fDeltaCrlEntry;
} CERT_REVOCATION_CRL_INFO, *PCERT_REVOCATION_CRL_INFO;
typedef struct _CERT_REVOCATION_CHAIN_PARA
    CERT_REVOCATION_CHAIN_PARA,
    *PCERT_REVOCATION_CHAIN_PARA;
typedef struct _CERT_REVOCATION_PARA {
    DWORD cbSize;
    PCCERT_CONTEXT pIssuerCert;
    DWORD cCertStore;
    HCERTSTORE *rgCertStore;
    HCERTSTORE hCrlStore;
    LPFILETIME pftTimeToUse;
    DWORD dwUrlRetrievalTimeout;
    BOOL fCheckFreshnessTime;
    DWORD dwFreshnessTime;
    LPFILETIME pftCurrentTime;
    PCERT_REVOCATION_CRL_INFO pCrlInfo;
    LPFILETIME pftCacheResync;
    PCERT_REVOCATION_CHAIN_PARA pChainPara;
} CERT_REVOCATION_PARA, *PCERT_REVOCATION_PARA;
typedef struct _CERT_REVOCATION_STATUS {
    DWORD cbSize;
    DWORD dwIndex;
    DWORD dwError;
    DWORD dwReason;
    BOOL fHasFreshnessTime;
    DWORD dwFreshnessTime;
} CERT_REVOCATION_STATUS, *PCERT_REVOCATION_STATUS;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
BOOL
WINAPI
CertVerifyRevocation(
    _In_ DWORD dwEncodingType,
    _In_ DWORD dwRevType,
    _In_ DWORD cContext,
    _In_reads_(cContext) PVOID rgpvContext[],
    _In_ DWORD dwFlags,
    _In_opt_ PCERT_REVOCATION_PARA pRevPara,
    _Inout_ PCERT_REVOCATION_STATUS pRevStatus
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
BOOL
WINAPI
CertCompareIntegerBlob(
    _In_ PCRYPT_INTEGER_BLOB pInt1,
    _In_ PCRYPT_INTEGER_BLOB pInt2
    );
WINCRYPT32API
BOOL
WINAPI
CertCompareCertificate(
    _In_ DWORD dwCertEncodingType,
    _In_ PCERT_INFO pCertId1,
    _In_ PCERT_INFO pCertId2
    );
WINCRYPT32API
BOOL
WINAPI
CertCompareCertificateName(
    _In_ DWORD dwCertEncodingType,
    _In_ PCERT_NAME_BLOB pCertName1,
    _In_ PCERT_NAME_BLOB pCertName2
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
BOOL
WINAPI
CertIsRDNAttrsInCertificateName(
    _In_ DWORD dwCertEncodingType,
    _In_ DWORD dwFlags,
    _In_ PCERT_NAME_BLOB pCertName,
    _In_ PCERT_RDN pRDN
    );
WINCRYPT32API
BOOL
WINAPI
CertComparePublicKeyInfo(
    _In_ DWORD dwCertEncodingType,
    _In_ PCERT_PUBLIC_KEY_INFO pPublicKey1,
    _In_ PCERT_PUBLIC_KEY_INFO pPublicKey2
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
DWORD
WINAPI
CertGetPublicKeyLength(
    _In_ DWORD dwCertEncodingType,
    _In_ PCERT_PUBLIC_KEY_INFO pPublicKey
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
_Must_inspect_result_
BOOL
WINAPI
CryptVerifyCertificateSignature(
    _In_opt_ HCRYPTPROV_LEGACY hCryptProv,
    _In_ DWORD dwCertEncodingType,
    _In_reads_bytes_(cbEncoded) const BYTE *pbEncoded,
    _In_ DWORD cbEncoded,
    _In_ PCERT_PUBLIC_KEY_INFO pPublicKey
    );
WINCRYPT32API
_Must_inspect_result_
BOOL
WINAPI
CryptVerifyCertificateSignatureEx(
    _In_opt_ HCRYPTPROV_LEGACY hCryptProv,
    _In_ DWORD dwCertEncodingType,
    _In_ DWORD dwSubjectType,
    _In_ void *pvSubject,
    _In_ DWORD dwIssuerType,
    _In_opt_ void *pvIssuer,
    _In_ DWORD dwFlags,
    _Inout_opt_ void *pvExtra
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct _CRYPT_VERIFY_CERT_SIGN_STRONG_PROPERTIES_INFO {
    CRYPT_DATA_BLOB CertSignHashCNGAlgPropData;
    CRYPT_DATA_BLOB CertIssuerPubKeyBitLengthPropData;
} CRYPT_VERIFY_CERT_SIGN_STRONG_PROPERTIES_INFO,
    *PCRYPT_VERIFY_CERT_SIGN_STRONG_PROPERTIES_INFO;
typedef struct _CRYPT_VERIFY_CERT_SIGN_WEAK_HASH_INFO {
    DWORD cCNGHashAlgid;
    PCWSTR *rgpwszCNGHashAlgid;
    DWORD dwWeakIndex;
} CRYPT_VERIFY_CERT_SIGN_WEAK_HASH_INFO,
    *PCRYPT_VERIFY_CERT_SIGN_WEAK_HASH_INFO;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
BOOL
WINAPI
CertIsStrongHashToSign(
    _In_ PCCERT_STRONG_SIGN_PARA pStrongSignPara,
    _In_ LPCWSTR pwszCNGHashAlgid,
    _In_opt_ PCCERT_CONTEXT pSigningCert
    );
WINCRYPT32API
BOOL
WINAPI
CryptHashToBeSigned(
    _In_opt_ HCRYPTPROV_LEGACY hCryptProv,
    _In_ DWORD dwCertEncodingType,
    _In_reads_bytes_(cbEncoded) const BYTE *pbEncoded,
    _In_ DWORD cbEncoded,
    _Out_writes_bytes_to_opt_(*pcbComputedHash, *pcbComputedHash) BYTE *pbComputedHash,
    _Inout_ DWORD *pcbComputedHash
    );
WINCRYPT32API
BOOL
WINAPI
CryptHashCertificate(
    _In_opt_ HCRYPTPROV_LEGACY hCryptProv,
    _In_ ALG_ID Algid,
    _In_ DWORD dwFlags,
    _In_reads_bytes_(cbEncoded) const BYTE *pbEncoded,
    _In_ DWORD cbEncoded,
    _Out_writes_bytes_to_opt_(*pcbComputedHash, *pcbComputedHash) BYTE *pbComputedHash,
    _Inout_ DWORD *pcbComputedHash
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CryptHashCertificate2(
    _In_ LPCWSTR pwszCNGHashAlgid,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved,
    _In_reads_bytes_opt_(cbEncoded) const BYTE *pbEncoded,
    _In_ DWORD cbEncoded,
    _Out_writes_bytes_to_opt_(*pcbComputedHash, *pcbComputedHash) BYTE *pbComputedHash,
    _Inout_ DWORD *pcbComputedHash
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
BOOL
WINAPI
CryptSignCertificate(
    _In_ BCRYPT_KEY_HANDLE hBCryptKey,
    _In_opt_ DWORD dwKeySpec,
    _In_ DWORD dwCertEncodingType,
    _In_reads_bytes_(cbEncodedToBeSigned) const BYTE *pbEncodedToBeSigned,
    _In_ DWORD cbEncodedToBeSigned,
    _In_ PCRYPT_ALGORITHM_IDENTIFIER pSignatureAlgorithm,
    _In_opt_ const void *pvHashAuxInfo,
    _Out_writes_bytes_to_opt_(*pcbSignature, *pcbSignature) BYTE *pbSignature,
    _Inout_ DWORD *pcbSignature
    );
WINCRYPT32API
BOOL
WINAPI
CryptSignAndEncodeCertificate(
    _In_ BCRYPT_KEY_HANDLE hBCryptKey,
    _In_opt_ DWORD dwKeySpec,
    _In_ DWORD dwCertEncodingType,
    _In_ LPCSTR lpszStructType,
    _In_ const void *pvStructInfo,
    _In_ PCRYPT_ALGORITHM_IDENTIFIER pSignatureAlgorithm,
    _In_opt_ const void *pvHashAuxInfo,
    _Out_writes_bytes_to_opt_(*pcbEncoded, *pcbEncoded) BYTE *pbEncoded,
    _Inout_ DWORD *pcbEncoded
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
    "CryptDllExtractEncodedSignatureParameters"
typedef BOOL (WINAPI *PFN_CRYPT_EXTRACT_ENCODED_SIGNATURE_PARAMETERS_FUNC)(
    _In_ DWORD dwCertEncodingType,
    _In_ PCRYPT_ALGORITHM_IDENTIFIER pSignatureAlgorithm,
    _Outptr_result_maybenull_ void **ppvDecodedSignPara,
    _Outptr_ LPWSTR *ppwszCNGHashAlgid
    );
    "CryptDllSignAndEncodeHash"
typedef BOOL (WINAPI *PFN_CRYPT_SIGN_AND_ENCODE_HASH_FUNC)(
    _In_ NCRYPT_KEY_HANDLE hKey,
    _In_ DWORD dwCertEncodingType,
    _In_ PCRYPT_ALGORITHM_IDENTIFIER pSignatureAlgorithm,
    _In_opt_ void *pvDecodedSignPara,
    _In_ LPCWSTR pwszCNGPubKeyAlgid,
    _In_ LPCWSTR pwszCNGHashAlgid,
    _In_reads_bytes_(cbComputedHash) BYTE *pbComputedHash,
    _In_ DWORD cbComputedHash,
    _Out_writes_bytes_to_opt_(*pcbSignature, *pcbSignature) BYTE *pbSignature,
    _Inout_ DWORD *pcbSignature
    );
    "CryptDllVerifyEncodedSignature"
typedef BOOL (WINAPI *PFN_CRYPT_VERIFY_ENCODED_SIGNATURE_FUNC)(
    _In_ DWORD dwCertEncodingType,
    _In_ PCERT_PUBLIC_KEY_INFO pPubKeyInfo,
    _In_ PCRYPT_ALGORITHM_IDENTIFIER pSignatureAlgorithm,
    _In_opt_ void *pvDecodedSignPara,
    _In_ LPCWSTR pwszCNGPubKeyAlgid,
    _In_ LPCWSTR pwszCNGHashAlgid,
    _In_reads_bytes_(cbComputedHash) BYTE *pbComputedHash,
    _In_ DWORD cbComputedHash,
    _In_reads_bytes_(cbSignature) BYTE *pbSignature,
    _In_ DWORD cbSignature
    );
WINCRYPT32API
LONG
WINAPI
CertVerifyTimeValidity(
    _In_opt_ LPFILETIME pTimeToVerify,
    _In_ PCERT_INFO pCertInfo
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
LONG
WINAPI
CertVerifyCRLTimeValidity(
    _In_opt_ LPFILETIME pTimeToVerify,
    _In_ PCRL_INFO pCrlInfo
    );
WINCRYPT32API
BOOL
WINAPI
CertVerifyValidityNesting(
    _In_ PCERT_INFO pSubjectInfo,
    _In_ PCERT_INFO pIssuerInfo
    );
WINCRYPT32API
BOOL
WINAPI
CertVerifyCRLRevocation(
    _In_ DWORD dwCertEncodingType,
    _In_ PCERT_INFO pCertId,
    _In_ DWORD cCrlInfo,
    _In_reads_(cCrlInfo) PCRL_INFO rgpCrlInfo[]
    );
WINCRYPT32API
LPCSTR
WINAPI
CertAlgIdToOID(
    _In_ DWORD dwAlgId
    );
WINCRYPT32API
DWORD
WINAPI
CertOIDToAlgId(
    _In_ LPCSTR pszObjId
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
PCERT_EXTENSION
WINAPI
CertFindExtension(
    _In_ LPCSTR pszObjId,
    _In_ DWORD cExtensions,
    _In_reads_(cExtensions) CERT_EXTENSION rgExtensions[]
    );
WINCRYPT32API
PCRYPT_ATTRIBUTE
WINAPI
CertFindAttribute(
    _In_ LPCSTR pszObjId,
    _In_ DWORD cAttr,
    _In_reads_(cAttr) CRYPT_ATTRIBUTE rgAttr[]
    );
WINCRYPT32API
PCERT_RDN_ATTR
WINAPI
CertFindRDNAttr(
    _In_ LPCSTR pszObjId,
    _In_ PCERT_NAME_INFO pName
    );
WINCRYPT32API
BOOL
WINAPI
CertGetIntendedKeyUsage(
    _In_ DWORD dwCertEncodingType,
    _In_ PCERT_INFO pCertInfo,
    _Out_writes_bytes_all_(cbKeyUsage) BYTE *pbKeyUsage,
    _In_ DWORD cbKeyUsage
    );
typedef void *HCRYPTDEFAULTCONTEXT;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
BOOL
WINAPI
CryptInstallDefaultContext(
    _In_ HCRYPTPROV hCryptProv,
    _In_ DWORD dwDefaultType,
    _In_opt_ const void *pvDefaultPara,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved,
    _Out_ HCRYPTDEFAULTCONTEXT *phDefaultContext
    );
typedef struct _CRYPT_DEFAULT_CONTEXT_MULTI_OID_PARA {
    DWORD cOID;
    LPSTR *rgpszOID;
} CRYPT_DEFAULT_CONTEXT_MULTI_OID_PARA, *PCRYPT_DEFAULT_CONTEXT_MULTI_OID_PARA;
WINCRYPT32API
BOOL
WINAPI
CryptUninstallDefaultContext(
    _In_opt_ HCRYPTDEFAULTCONTEXT hDefaultContext,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved
    );
WINCRYPT32API
BOOL
WINAPI
CryptExportPublicKeyInfo(
    _In_ HCRYPTPROV_OR_NCRYPT_KEY_HANDLE hCryptProvOrNCryptKey,
    _In_opt_ DWORD dwKeySpec,
    _In_ DWORD dwCertEncodingType,
    _Out_writes_bytes_to_opt_(*pcbInfo, *pcbInfo) PCERT_PUBLIC_KEY_INFO pInfo,
    _Inout_ DWORD *pcbInfo
    );
WINCRYPT32API
BOOL
WINAPI
CryptExportPublicKeyInfoEx(
    _In_ HCRYPTPROV_OR_NCRYPT_KEY_HANDLE hCryptProvOrNCryptKey,
    _In_opt_ DWORD dwKeySpec,
    _In_ DWORD dwCertEncodingType,
    _In_opt_ LPSTR pszPublicKeyObjId,
    _In_ DWORD dwFlags,
    _In_opt_ void *pvAuxInfo,
    _Out_writes_bytes_to_opt_(*pcbInfo, *pcbInfo) PCERT_PUBLIC_KEY_INFO pInfo,
    _Inout_ DWORD *pcbInfo
    );
    "CryptDllExportPublicKeyInfoEx2"
typedef BOOL (WINAPI *PFN_CRYPT_EXPORT_PUBLIC_KEY_INFO_EX2_FUNC) (
    _In_ NCRYPT_KEY_HANDLE hNCryptKey,
    _In_ DWORD dwCertEncodingType,
    _In_ LPSTR pszPublicKeyObjId,
    _In_ DWORD dwFlags,
    _In_opt_ void *pvAuxInfo,
    _Out_writes_bytes_to_opt_(*pcbInfo, *pcbInfo) PCERT_PUBLIC_KEY_INFO pInfo,
    _Inout_ DWORD *pcbInfo
    );
WINCRYPT32API
BOOL
WINAPI
CryptExportPublicKeyInfoFromBCryptKeyHandle(
    _In_ BCRYPT_KEY_HANDLE hBCryptKey,
    _In_ DWORD dwCertEncodingType,
    _In_opt_ LPSTR pszPublicKeyObjId,
    _In_ DWORD dwFlags,
    _In_opt_ void *pvAuxInfo,
    _Out_writes_bytes_to_opt_(*pcbInfo, *pcbInfo) PCERT_PUBLIC_KEY_INFO pInfo,
    _Inout_ DWORD *pcbInfo
    );
    "CryptDllExportPublicKeyInfoFromBCryptKeyHandle"
typedef BOOL (WINAPI *PFN_CRYPT_EXPORT_PUBLIC_KEY_INFO_FROM_BCRYPT_HANDLE_FUNC) (
    _In_ BCRYPT_KEY_HANDLE hBCryptKey,
    _In_ DWORD dwCertEncodingType,
    _In_ LPSTR pszPublicKeyObjId,
    _In_ DWORD dwFlags,
    _In_opt_ void *pvAuxInfo,
    _Out_writes_bytes_to_opt_(*pcbInfo, *pcbInfo) PCERT_PUBLIC_KEY_INFO pInfo,
    _Inout_ DWORD *pcbInfo
    );
WINCRYPT32API
BOOL
WINAPI
CryptImportPublicKeyInfo(
    _In_ HCRYPTPROV hCryptProv,
    _In_ DWORD dwCertEncodingType,
    _In_ PCERT_PUBLIC_KEY_INFO pInfo,
    _Out_ HCRYPTKEY *phKey
    );
WINCRYPT32API
BOOL
WINAPI
CryptImportPublicKeyInfoEx(
    _In_ HCRYPTPROV hCryptProv,
    _In_ DWORD dwCertEncodingType,
    _In_ PCERT_PUBLIC_KEY_INFO pInfo,
    _In_ ALG_ID aiKeyAlg,
    _In_ DWORD dwFlags,
    _In_opt_ void *pvAuxInfo,
    _Out_ HCRYPTKEY *phKey
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
BOOL
WINAPI
CryptImportPublicKeyInfoEx2(
    _In_ DWORD dwCertEncodingType,
    _In_ PCERT_PUBLIC_KEY_INFO pInfo,
    _In_ DWORD dwFlags,
    _In_opt_ void *pvAuxInfo,
    _Out_ BCRYPT_KEY_HANDLE *phKey
    );
    "CryptDllImportPublicKeyInfoEx2"
typedef BOOL (WINAPI *PFN_IMPORT_PUBLIC_KEY_INFO_EX2_FUNC) (
    _In_ DWORD dwCertEncodingType,
    _In_ PCERT_PUBLIC_KEY_INFO pInfo,
    _In_ DWORD dwFlags,
    _In_opt_ void *pvAuxInfo,
    _Out_ BCRYPT_KEY_HANDLE *phKey
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
BOOL
WINAPI
CryptAcquireCertificatePrivateKey(
    _In_ PCCERT_CONTEXT pCert,
    _In_ DWORD dwFlags,
    _In_opt_ void *pvParameters,
    _Out_ HCRYPTPROV_OR_NCRYPT_KEY_HANDLE *phCryptProvOrNCryptKey,
    _Out_opt_ DWORD *pdwKeySpec,
    _Out_opt_ BOOL *pfCallerFreeProvOrNCryptKey
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
BOOL
WINAPI
CryptFindCertificateKeyProvInfo(
    _In_ PCCERT_CONTEXT pCert,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved
    );
typedef BOOL (WINAPI *PFN_IMPORT_PRIV_KEY_FUNC) (
    _In_ HCRYPTPROV hCryptProv,
    _In_ CRYPT_PRIVATE_KEY_INFO* pPrivateKeyInfo,
    _In_ DWORD dwFlags,
    _In_opt_ void* pvAuxInfo
    );
WINCRYPT32API
BOOL
WINAPI
CryptImportPKCS8(
    _In_ CRYPT_PKCS8_IMPORT_PARAMS sPrivateKeyAndParams,
    _In_ DWORD dwFlags,
    _Out_opt_ HCRYPTPROV *phCryptProv,
    _In_opt_ void* pvAuxInfo
    );
typedef BOOL (WINAPI *PFN_EXPORT_PRIV_KEY_FUNC) (
    _In_ HCRYPTPROV hCryptProv,
    _In_ DWORD dwKeySpec,
    _In_ LPSTR pszPrivateKeyObjId,
    _In_ DWORD dwFlags,
    _In_opt_ void* pvAuxInfo,
    _Out_writes_bytes_opt_ (*pcbPrivateKeyInfo) CRYPT_PRIVATE_KEY_INFO* pPrivateKeyInfo,
    _Inout_ DWORD* pcbPrivateKeyInfo
    );
WINCRYPT32API
BOOL
WINAPI
CryptExportPKCS8(
    _In_ HCRYPTPROV hCryptProv,
    _In_ DWORD dwKeySpec,
    _In_ LPSTR pszPrivateKeyObjId,
    _In_ DWORD dwFlags,
    _In_opt_ void* pvAuxInfo,
    _Out_writes_bytes_opt_ (*pcbPrivateKeyBlob) BYTE* pbPrivateKeyBlob,
    _Inout_ DWORD *pcbPrivateKeyBlob
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED)
WINCRYPT32API
BOOL
WINAPI
CryptExportPKCS8Ex(
    _In_ CRYPT_PKCS8_EXPORT_PARAMS* psExportParams,
    _In_ DWORD dwFlags,
    _In_opt_ void* pvAuxInfo,
    _Out_writes_bytes_opt_ (*pcbPrivateKeyBlob) BYTE* pbPrivateKeyBlob,
    _Inout_ DWORD* pcbPrivateKeyBlob
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
BOOL
WINAPI
CryptHashPublicKeyInfo(
    _In_opt_ HCRYPTPROV_LEGACY hCryptProv,
    _In_ ALG_ID Algid,
    _In_ DWORD dwFlags,
    _In_ DWORD dwCertEncodingType,
    _In_ PCERT_PUBLIC_KEY_INFO pInfo,
    _Out_writes_bytes_to_opt_(*pcbComputedHash, *pcbComputedHash) BYTE *pbComputedHash,
    _Inout_ DWORD *pcbComputedHash
    );
WINCRYPT32API
DWORD
WINAPI
CertRDNValueToStrA(
    _In_ DWORD dwValueType,
    _In_ PCERT_RDN_VALUE_BLOB pValue,
    _Out_writes_to_opt_(csz, return) LPSTR psz,
    _In_ DWORD csz
    );
WINCRYPT32API
DWORD
WINAPI
CertRDNValueToStrW(
    _In_ DWORD dwValueType,
    _In_ PCERT_RDN_VALUE_BLOB pValue,
    _Out_writes_to_opt_(csz, return) LPWSTR psz,
    _In_ DWORD csz
    );
WINCRYPT32API
DWORD
WINAPI
CertNameToStrA(
    _In_ DWORD dwCertEncodingType,
    _In_ PCERT_NAME_BLOB pName,
    _In_ DWORD dwStrType,
    _Out_writes_to_opt_(csz, return) LPSTR psz,
    _In_ DWORD csz
    );
WINCRYPT32API
DWORD
WINAPI
CertNameToStrW(
    _In_ DWORD dwCertEncodingType,
    _In_ PCERT_NAME_BLOB pName,
    _In_ DWORD dwStrType,
    _Out_writes_to_opt_(csz, return) LPWSTR psz,
    _In_ DWORD csz
    );
WINCRYPT32API
BOOL
WINAPI
CertStrToNameA(
    _In_ DWORD dwCertEncodingType,
    _In_ LPCSTR pszX500,
    _In_ DWORD dwStrType,
    _Reserved_ void *pvReserved,
    _Out_writes_bytes_to_opt_(*pcbEncoded, *pcbEncoded) BYTE *pbEncoded,
    _Inout_ DWORD *pcbEncoded,
    _Outptr_opt_result_maybenull_ LPCSTR *ppszError
    );
WINCRYPT32API
BOOL
WINAPI
CertStrToNameW(
    _In_ DWORD dwCertEncodingType,
    _In_ LPCWSTR pszX500,
    _In_ DWORD dwStrType,
    _Reserved_ void *pvReserved,
    _Out_writes_bytes_to_opt_(*pcbEncoded, *pcbEncoded) BYTE *pbEncoded,
    _Inout_ DWORD *pcbEncoded,
    _Outptr_opt_result_maybenull_ LPCWSTR *ppszError
    );
WINCRYPT32API
DWORD
WINAPI
CertGetNameStringA(
    _In_ PCCERT_CONTEXT pCertContext,
    _In_ DWORD dwType,
    _In_ DWORD dwFlags,
    _In_opt_ void *pvTypePara,
    _Out_writes_to_opt_(cchNameString, return) LPSTR pszNameString,
    _In_ DWORD cchNameString
    );
WINCRYPT32API
DWORD
WINAPI
CertGetNameStringW(
    _In_ PCCERT_CONTEXT pCertContext,
    _In_ DWORD dwType,
    _In_ DWORD dwFlags,
    _In_opt_ void *pvTypePara,
    _Out_writes_to_opt_(cchNameString, return) LPWSTR pszNameString,
    _In_ DWORD cchNameString
    );
typedef PCCERT_CONTEXT (WINAPI *PFN_CRYPT_GET_SIGNER_CERTIFICATE)(
    _Inout_opt_ void *pvGetArg,
    _In_ DWORD dwCertEncodingType,
    _In_ PCERT_INFO pSignerId,
    _In_ HCERTSTORE hMsgCertStore
    );
typedef struct _CRYPT_SIGN_MESSAGE_PARA {
    DWORD cbSize;
    DWORD dwMsgEncodingType;
    PCCERT_CONTEXT pSigningCert;
    CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
    void *pvHashAuxInfo;
    DWORD cMsgCert;
    PCCERT_CONTEXT *rgpMsgCert;
    DWORD cMsgCrl;
    PCCRL_CONTEXT *rgpMsgCrl;
    DWORD cAuthAttr;
    PCRYPT_ATTRIBUTE rgAuthAttr;
    DWORD cUnauthAttr;
    PCRYPT_ATTRIBUTE rgUnauthAttr;
    DWORD dwFlags;
    DWORD dwInnerContentType;
    CRYPT_ALGORITHM_IDENTIFIER HashEncryptionAlgorithm;
    void *pvHashEncryptionAuxInfo;
} CRYPT_SIGN_MESSAGE_PARA, *PCRYPT_SIGN_MESSAGE_PARA;
typedef struct _CRYPT_VERIFY_MESSAGE_PARA {
    DWORD cbSize;
    DWORD dwMsgAndCertEncodingType;
    HCRYPTPROV_LEGACY hCryptProv;
    PFN_CRYPT_GET_SIGNER_CERTIFICATE pfnGetSignerCertificate;
    void *pvGetArg;
    PCCERT_STRONG_SIGN_PARA pStrongSignPara;
} CRYPT_VERIFY_MESSAGE_PARA, *PCRYPT_VERIFY_MESSAGE_PARA;
typedef struct _CRYPT_ENCRYPT_MESSAGE_PARA {
    DWORD cbSize;
    DWORD dwMsgEncodingType;
    HCRYPTPROV_LEGACY hCryptProv;
    CRYPT_ALGORITHM_IDENTIFIER ContentEncryptionAlgorithm;
    void *pvEncryptionAuxInfo;
    DWORD dwFlags;
    DWORD dwInnerContentType;
} CRYPT_ENCRYPT_MESSAGE_PARA, *PCRYPT_ENCRYPT_MESSAGE_PARA;
typedef struct _CRYPT_DECRYPT_MESSAGE_PARA {
    DWORD cbSize;
    DWORD dwMsgAndCertEncodingType;
    DWORD cCertStore;
    HCERTSTORE *rghCertStore;
    DWORD dwFlags;
} CRYPT_DECRYPT_MESSAGE_PARA, *PCRYPT_DECRYPT_MESSAGE_PARA;
typedef struct _CRYPT_HASH_MESSAGE_PARA {
    DWORD cbSize;
    DWORD dwMsgEncodingType;
    HCRYPTPROV_LEGACY hCryptProv;
    CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
    void *pvHashAuxInfo;
} CRYPT_HASH_MESSAGE_PARA, *PCRYPT_HASH_MESSAGE_PARA;
typedef struct _CRYPT_KEY_SIGN_MESSAGE_PARA {
    DWORD cbSize;
    DWORD dwMsgAndCertEncodingType;
    union {
        HCRYPTPROV hCryptProv;
        NCRYPT_KEY_HANDLE hNCryptKey;
    } DUMMYUNIONNAME;
    DWORD dwKeySpec;
    CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
    void *pvHashAuxInfo;
    CRYPT_ALGORITHM_IDENTIFIER PubKeyAlgorithm;
} CRYPT_KEY_SIGN_MESSAGE_PARA, *PCRYPT_KEY_SIGN_MESSAGE_PARA;
typedef struct _CRYPT_KEY_VERIFY_MESSAGE_PARA {
    DWORD cbSize;
    DWORD dwMsgEncodingType;
    HCRYPTPROV_LEGACY hCryptProv;
} CRYPT_KEY_VERIFY_MESSAGE_PARA, *PCRYPT_KEY_VERIFY_MESSAGE_PARA;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
BOOL
WINAPI
CryptSignMessage(
    _In_ PCRYPT_SIGN_MESSAGE_PARA pSignPara,
    _In_ BOOL fDetachedSignature,
    _In_ DWORD cToBeSigned,
    _In_reads_opt_(cToBeSigned) const BYTE *rgpbToBeSigned[],
    _In_reads_(cToBeSigned) DWORD rgcbToBeSigned[],
    _Out_writes_bytes_to_opt_(*pcbSignedBlob, *pcbSignedBlob) BYTE *pbSignedBlob,
    _Inout_ DWORD *pcbSignedBlob
    );
WINCRYPT32API
BOOL
WINAPI
CryptVerifyMessageSignature(
    _In_ PCRYPT_VERIFY_MESSAGE_PARA pVerifyPara,
    _In_ DWORD dwSignerIndex,
    _In_reads_bytes_(cbSignedBlob) const BYTE *pbSignedBlob,
    _In_ DWORD cbSignedBlob,
    _Out_writes_bytes_to_opt_(*pcbDecoded, *pcbDecoded) BYTE *pbDecoded,
    _Inout_opt_ DWORD *pcbDecoded,
    _Outptr_opt_result_maybenull_ PCCERT_CONTEXT *ppSignerCert
    );
WINCRYPT32API
LONG
WINAPI
CryptGetMessageSignerCount(
    _In_ DWORD dwMsgEncodingType,
    _In_reads_bytes_(cbSignedBlob) const BYTE *pbSignedBlob,
    _In_ DWORD cbSignedBlob
    );
WINCRYPT32API
HCERTSTORE
WINAPI
CryptGetMessageCertificates(
    _In_ DWORD dwMsgAndCertEncodingType,
    _In_opt_ HCRYPTPROV_LEGACY hCryptProv,
    _In_ DWORD dwFlags,
    _In_reads_bytes_(cbSignedBlob) const BYTE *pbSignedBlob,
    _In_ DWORD cbSignedBlob
    );
WINCRYPT32API
BOOL
WINAPI
CryptVerifyDetachedMessageSignature(
    _In_ PCRYPT_VERIFY_MESSAGE_PARA pVerifyPara,
    _In_ DWORD dwSignerIndex,
    _In_reads_bytes_(cbDetachedSignBlob) const BYTE *pbDetachedSignBlob,
    _In_ DWORD cbDetachedSignBlob,
    _In_ DWORD cToBeSigned,
    _In_reads_(cToBeSigned) const BYTE *rgpbToBeSigned[],
    _In_reads_(cToBeSigned) DWORD rgcbToBeSigned[],
    _Outptr_opt_result_maybenull_ PCCERT_CONTEXT *ppSignerCert
    );
WINCRYPT32API
BOOL
WINAPI
CryptEncryptMessage(
    _In_ PCRYPT_ENCRYPT_MESSAGE_PARA pEncryptPara,
    _In_ DWORD cRecipientCert,
    _In_reads_(cRecipientCert) PCCERT_CONTEXT rgpRecipientCert[],
    _In_reads_bytes_opt_(cbToBeEncrypted) const BYTE *pbToBeEncrypted,
    _In_ DWORD cbToBeEncrypted,
    _Out_writes_bytes_to_opt_(*pcbEncryptedBlob, *pcbEncryptedBlob) BYTE *pbEncryptedBlob,
    _Inout_ DWORD *pcbEncryptedBlob
    );
WINCRYPT32API
BOOL
WINAPI
CryptDecryptMessage(
    _In_ PCRYPT_DECRYPT_MESSAGE_PARA pDecryptPara,
    _In_reads_bytes_(cbEncryptedBlob) const BYTE *pbEncryptedBlob,
    _In_ DWORD cbEncryptedBlob,
    _Out_writes_bytes_to_opt_(*pcbDecrypted, *pcbDecrypted) BYTE *pbDecrypted,
    _Inout_opt_ DWORD *pcbDecrypted,
    _Outptr_opt_result_maybenull_ PCCERT_CONTEXT *ppXchgCert
    );
WINCRYPT32API
BOOL
WINAPI
CryptSignAndEncryptMessage(
    _In_ PCRYPT_SIGN_MESSAGE_PARA pSignPara,
    _In_ PCRYPT_ENCRYPT_MESSAGE_PARA pEncryptPara,
    _In_ DWORD cRecipientCert,
    _In_reads_(cRecipientCert) PCCERT_CONTEXT rgpRecipientCert[],
    _In_reads_bytes_(cbToBeSignedAndEncrypted) const BYTE *pbToBeSignedAndEncrypted,
    _In_ DWORD cbToBeSignedAndEncrypted,
    _Out_writes_bytes_to_opt_(*pcbSignedAndEncryptedBlob, *pcbSignedAndEncryptedBlob) BYTE *pbSignedAndEncryptedBlob,
    _Inout_ DWORD *pcbSignedAndEncryptedBlob
    );
WINCRYPT32API
BOOL
WINAPI
CryptDecryptAndVerifyMessageSignature(
    _In_ PCRYPT_DECRYPT_MESSAGE_PARA pDecryptPara,
    _In_ PCRYPT_VERIFY_MESSAGE_PARA pVerifyPara,
    _In_ DWORD dwSignerIndex,
    _In_reads_bytes_(cbEncryptedBlob) const BYTE *pbEncryptedBlob,
    _In_ DWORD cbEncryptedBlob,
    _Out_writes_bytes_to_opt_(*pcbDecrypted, *pcbDecrypted) BYTE *pbDecrypted,
    _Inout_opt_ DWORD *pcbDecrypted,
    _Outptr_opt_result_maybenull_ PCCERT_CONTEXT *ppXchgCert,
    _Outptr_opt_result_maybenull_ PCCERT_CONTEXT *ppSignerCert
    );
WINCRYPT32API
BOOL
WINAPI
CryptDecodeMessage(
    _In_ DWORD dwMsgTypeFlags,
    _In_opt_ PCRYPT_DECRYPT_MESSAGE_PARA pDecryptPara,
    _In_opt_ PCRYPT_VERIFY_MESSAGE_PARA pVerifyPara,
    _In_ DWORD dwSignerIndex,
    _In_reads_bytes_(cbEncodedBlob) const BYTE *pbEncodedBlob,
    _In_ DWORD cbEncodedBlob,
    _In_ DWORD dwPrevInnerContentType,
    _Out_opt_ DWORD *pdwMsgType,
    _Out_opt_ DWORD *pdwInnerContentType,
    _Out_writes_bytes_to_opt_(*pcbDecoded, *pcbDecoded) BYTE *pbDecoded,
    _Inout_opt_ DWORD *pcbDecoded,
    _Outptr_opt_result_maybenull_ PCCERT_CONTEXT *ppXchgCert,
    _Outptr_opt_result_maybenull_ PCCERT_CONTEXT *ppSignerCert
    );
WINCRYPT32API
BOOL
WINAPI
CryptHashMessage(
    _In_ PCRYPT_HASH_MESSAGE_PARA pHashPara,
    _In_ BOOL fDetachedHash,
    _In_ DWORD cToBeHashed,
    _In_reads_(cToBeHashed) const BYTE *rgpbToBeHashed[],
    _In_reads_(cToBeHashed) DWORD rgcbToBeHashed[],
    _Out_writes_bytes_to_opt_(*pcbHashedBlob, *pcbHashedBlob) BYTE *pbHashedBlob,
    _Inout_opt_ DWORD *pcbHashedBlob,
    _Out_writes_bytes_to_opt_(*pcbComputedHash, *pcbComputedHash) BYTE *pbComputedHash,
    _Inout_opt_ DWORD *pcbComputedHash
    );
WINCRYPT32API
BOOL
WINAPI
CryptVerifyMessageHash(
    _In_ PCRYPT_HASH_MESSAGE_PARA pHashPara,
    _In_reads_bytes_(cbHashedBlob) BYTE *pbHashedBlob,
    _In_ DWORD cbHashedBlob,
    _Out_writes_bytes_to_opt_(*pcbToBeHashed, *pcbToBeHashed) BYTE *pbToBeHashed,
    _Inout_opt_ DWORD *pcbToBeHashed,
    _Out_writes_bytes_to_opt_(*pcbComputedHash, *pcbComputedHash) BYTE *pbComputedHash,
    _Inout_opt_ DWORD *pcbComputedHash
    );
WINCRYPT32API
BOOL
WINAPI
CryptVerifyDetachedMessageHash(
    _In_ PCRYPT_HASH_MESSAGE_PARA pHashPara,
    _In_reads_bytes_(cbDetachedHashBlob) BYTE *pbDetachedHashBlob,
    _In_ DWORD cbDetachedHashBlob,
    _In_ DWORD cToBeHashed,
    _In_reads_(cToBeHashed) const BYTE *rgpbToBeHashed[],
    _In_reads_(cToBeHashed) DWORD rgcbToBeHashed[],
    _Out_writes_bytes_to_opt_(*pcbComputedHash, *pcbComputedHash) BYTE *pbComputedHash,
    _Inout_opt_ DWORD *pcbComputedHash
    );
WINCRYPT32API
BOOL
WINAPI
CryptSignMessageWithKey(
    _In_ PCRYPT_KEY_SIGN_MESSAGE_PARA pSignPara,
    _In_reads_bytes_(cbToBeSigned) const BYTE *pbToBeSigned,
    _In_ DWORD cbToBeSigned,
    _Out_writes_bytes_to_opt_(*pcbSignedBlob, *pcbSignedBlob) BYTE *pbSignedBlob,
    _Inout_ DWORD *pcbSignedBlob
    );
WINCRYPT32API
BOOL
WINAPI
CryptVerifyMessageSignatureWithKey(
    _In_ PCRYPT_KEY_VERIFY_MESSAGE_PARA pVerifyPara,
    _In_opt_ PCERT_PUBLIC_KEY_INFO pPublicKeyInfo,
    _In_reads_bytes_(cbSignedBlob) const BYTE *pbSignedBlob,
    _In_ DWORD cbSignedBlob,
    _Out_writes_bytes_to_opt_(*pcbDecoded, *pcbDecoded) BYTE *pbDecoded,
    _Inout_opt_ DWORD *pcbDecoded
    );
WINCRYPT32API
HCERTSTORE
WINAPI
CertOpenSystemStoreA(
    _In_opt_ HCRYPTPROV_LEGACY hProv,
    _In_ LPCSTR szSubsystemProtocol
    );
WINCRYPT32API
HCERTSTORE
WINAPI
CertOpenSystemStoreW(
    _In_opt_ HCRYPTPROV_LEGACY hProv,
    _In_ LPCWSTR szSubsystemProtocol
    );
WINCRYPT32API
BOOL
WINAPI
CertAddEncodedCertificateToSystemStoreA(
    _In_ LPCSTR szCertStoreName,
    _In_reads_bytes_(cbCertEncoded) const BYTE * pbCertEncoded,
    _In_ DWORD cbCertEncoded
    );
WINCRYPT32API
BOOL
WINAPI
CertAddEncodedCertificateToSystemStoreW(
    _In_ LPCWSTR szCertStoreName,
    _In_reads_bytes_(cbCertEncoded) const BYTE * pbCertEncoded,
    _In_ DWORD cbCertEncoded
    );
#endif
#pragma endregion
#pragma region Desktop Family or Wintrust Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP |WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_PKG_WINTRUST)
typedef struct _CERT_CHAIN {
    DWORD cCerts;
    PCERT_BLOB certs;
    CRYPT_KEY_PROV_INFO keyLocatorInfo;
} CERT_CHAIN, *PCERT_CHAIN;
HRESULT
WINAPI
FindCertsByIssuer(
    _Out_writes_bytes_to_opt_(*pcbCertChains, *pcbCertChains) PCERT_CHAIN pCertChains,
    _Inout_ DWORD *pcbCertChains,
    _Out_ DWORD *pcCertChains,
    _In_reads_bytes_opt_(cbEncodedIssuerName) BYTE* pbEncodedIssuerName,
    _In_ DWORD cbEncodedIssuerName,
    _In_opt_ LPCWSTR pwszPurpose,
    _In_ DWORD dwKeySpec
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
BOOL
WINAPI
CryptQueryObject(
    _In_ DWORD dwObjectType,
    _In_ const void *pvObject,
    _In_ DWORD dwExpectedContentTypeFlags,
    _In_ DWORD dwExpectedFormatTypeFlags,
    _In_ DWORD dwFlags,
    _Out_opt_ DWORD *pdwMsgAndCertEncodingType,
    _Out_opt_ DWORD *pdwContentType,
    _Out_opt_ DWORD *pdwFormatType,
    _Out_opt_ HCERTSTORE *phCertStore,
    _Out_opt_ HCRYPTMSG *phMsg,
    _Outptr_opt_result_maybenull_ const void **ppvContext
    );
                ( 1 << CERT_QUERY_CONTENT_CERT)
                ( 1 << CERT_QUERY_CONTENT_CTL)
                ( 1 << CERT_QUERY_CONTENT_CRL)
                ( 1 << CERT_QUERY_CONTENT_SERIALIZED_STORE)
                ( 1 << CERT_QUERY_CONTENT_SERIALIZED_CERT)
                ( 1 << CERT_QUERY_CONTENT_SERIALIZED_CTL)
                ( 1 << CERT_QUERY_CONTENT_SERIALIZED_CRL)
                ( 1 << CERT_QUERY_CONTENT_PKCS7_SIGNED)
                ( 1 << CERT_QUERY_CONTENT_PKCS7_UNSIGNED)
                ( 1 << CERT_QUERY_CONTENT_PKCS7_SIGNED_EMBED)
                ( 1 << CERT_QUERY_CONTENT_PKCS10)
                ( 1 << CERT_QUERY_CONTENT_PFX)
                ( 1 << CERT_QUERY_CONTENT_CERT_PAIR)
                ( 1 << CERT_QUERY_CONTENT_PFX_AND_LOAD)
              ( CERT_QUERY_CONTENT_FLAG_CERT | \
                CERT_QUERY_CONTENT_FLAG_CTL | \
                CERT_QUERY_CONTENT_FLAG_CRL | \
                CERT_QUERY_CONTENT_FLAG_SERIALIZED_STORE | \
                CERT_QUERY_CONTENT_FLAG_SERIALIZED_CERT | \
                CERT_QUERY_CONTENT_FLAG_SERIALIZED_CTL | \
                CERT_QUERY_CONTENT_FLAG_SERIALIZED_CRL | \
                CERT_QUERY_CONTENT_FLAG_PKCS7_SIGNED | \
                CERT_QUERY_CONTENT_FLAG_PKCS7_UNSIGNED | \
                CERT_QUERY_CONTENT_FLAG_PKCS7_SIGNED_EMBED | \
                CERT_QUERY_CONTENT_FLAG_PKCS10 | \
                CERT_QUERY_CONTENT_FLAG_PFX | \
                CERT_QUERY_CONTENT_FLAG_CERT_PAIR )
              ( CERT_QUERY_CONTENT_FLAG_CERT | \
                CERT_QUERY_CONTENT_FLAG_SERIALIZED_STORE | \
                CERT_QUERY_CONTENT_FLAG_SERIALIZED_CERT | \
                CERT_QUERY_CONTENT_FLAG_PKCS7_SIGNED | \
                CERT_QUERY_CONTENT_FLAG_PKCS7_UNSIGNED )
                ( 1 << CERT_QUERY_FORMAT_BINARY)
                ( 1 << CERT_QUERY_FORMAT_BASE64_ENCODED)
                ( 1 << CERT_QUERY_FORMAT_ASN_ASCII_HEX_ENCODED)
          ( CERT_QUERY_FORMAT_FLAG_BINARY | \
            CERT_QUERY_FORMAT_FLAG_BASE64_ENCODED | \
            CERT_QUERY_FORMAT_FLAG_ASN_ASCII_HEX_ENCODED )
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
LPVOID
WINAPI
CryptMemAlloc (
    _In_ ULONG cbSize
    );
WINCRYPT32API
LPVOID
WINAPI
CryptMemRealloc (
    _In_opt_ LPVOID pv,
    _In_ ULONG cbSize
    );
WINCRYPT32API
VOID
WINAPI
CryptMemFree (
    _In_opt_ LPVOID pv
    );
typedef HANDLE HCRYPTASYNC, *PHCRYPTASYNC;
typedef VOID (WINAPI *PFN_CRYPT_ASYNC_PARAM_FREE_FUNC) (
    _In_ LPSTR pszParamOid,
    _In_ LPVOID pvParam
    );
WINCRYPT32API
BOOL
WINAPI
CryptCreateAsyncHandle (
    _In_ DWORD dwFlags,
    _Out_ PHCRYPTASYNC phAsync
    );
WINCRYPT32API
BOOL
WINAPI
CryptSetAsyncParam (
    _In_ HCRYPTASYNC hAsync,
    _In_ LPSTR pszParamOid,
    _In_opt_ LPVOID pvParam,
    __callback PFN_CRYPT_ASYNC_PARAM_FREE_FUNC pfnFree
    );
WINCRYPT32API
BOOL
WINAPI
CryptGetAsyncParam (
    _In_ HCRYPTASYNC hAsync,
    _In_ LPSTR pszParamOid,
    _Outptr_opt_result_maybenull_ LPVOID* ppvParam,
    _Outptr_opt_result_maybenull_ __callback PFN_CRYPT_ASYNC_PARAM_FREE_FUNC* ppfnFree
    );
WINCRYPT32API
BOOL
WINAPI
CryptCloseAsyncHandle (
    _In_opt_ HCRYPTASYNC hAsync
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct _CRYPT_BLOB_ARRAY {
    DWORD cBlob;
    PCRYPT_DATA_BLOB rgBlob;
} CRYPT_BLOB_ARRAY, *PCRYPT_BLOB_ARRAY;
typedef struct _CRYPT_CREDENTIALS {
    DWORD cbSize;
    LPCSTR pszCredentialsOid;
    LPVOID pvCredentials;
} CRYPT_CREDENTIALS, *PCRYPT_CREDENTIALS;
typedef struct _CRYPT_PASSWORD_CREDENTIALSA {
    DWORD cbSize;
    LPSTR pszUsername;
    LPSTR pszPassword;
} CRYPT_PASSWORD_CREDENTIALSA, *PCRYPT_PASSWORD_CREDENTIALSA;
typedef struct _CRYPT_PASSWORD_CREDENTIALSW {
    DWORD cbSize;
    LPWSTR pszUsername;
    LPWSTR pszPassword;
} CRYPT_PASSWORD_CREDENTIALSW, *PCRYPT_PASSWORD_CREDENTIALSW;
typedef CRYPT_PASSWORD_CREDENTIALSW CRYPT_PASSWORD_CREDENTIALS;
typedef PCRYPT_PASSWORD_CREDENTIALSW PCRYPT_PASSWORD_CREDENTIALS;
typedef VOID (WINAPI *PFN_FREE_ENCODED_OBJECT_FUNC) (
    _In_opt_ LPCSTR pszObjectOid,
    _Inout_ PCRYPT_BLOB_ARRAY pObject,
    _Inout_opt_ LPVOID pvFreeContext
    );
typedef struct _CRYPTNET_URL_CACHE_PRE_FETCH_INFO {
    DWORD cbSize;
    DWORD dwObjectType;
    DWORD dwError;
    DWORD dwReserved;
    FILETIME ThisUpdateTime;
    FILETIME NextUpdateTime;
    FILETIME PublishTime;
} CRYPTNET_URL_CACHE_PRE_FETCH_INFO, *PCRYPTNET_URL_CACHE_PRE_FETCH_INFO;
typedef struct _CRYPTNET_URL_CACHE_FLUSH_INFO {
    DWORD cbSize;
    DWORD dwExemptSeconds;
    FILETIME ExpireTime;
} CRYPTNET_URL_CACHE_FLUSH_INFO, *PCRYPTNET_URL_CACHE_FLUSH_INFO;
typedef struct _CRYPTNET_URL_CACHE_RESPONSE_INFO {
    DWORD cbSize;
    WORD wResponseType;
    WORD wResponseFlags;
    FILETIME LastModifiedTime;
    DWORD dwMaxAge;
    LPCWSTR pwszETag;
    DWORD dwProxyId;
} CRYPTNET_URL_CACHE_RESPONSE_INFO, *PCRYPTNET_URL_CACHE_RESPONSE_INFO;
typedef struct _CRYPT_RETRIEVE_AUX_INFO {
    DWORD cbSize;
    FILETIME *pLastSyncTime;
    DWORD dwMaxUrlRetrievalByteCount;
    PCRYPTNET_URL_CACHE_PRE_FETCH_INFO pPreFetchInfo;
    PCRYPTNET_URL_CACHE_FLUSH_INFO pFlushInfo;
    PCRYPTNET_URL_CACHE_RESPONSE_INFO *ppResponseInfo;
    LPWSTR pwszCacheFileNamePrefix;
    LPFILETIME pftCacheResync;
    BOOL fProxyCacheRetrieval;
    DWORD dwHttpStatusCode;
    LPWSTR *ppwszErrorResponseHeaders;
    PCRYPT_DATA_BLOB *ppErrorContentBlob;
} CRYPT_RETRIEVE_AUX_INFO, *PCRYPT_RETRIEVE_AUX_INFO;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
_Success_(return == TRUE)
BOOL
WINAPI
CryptRetrieveObjectByUrlA (
    _In_ LPCSTR pszUrl,
    _In_opt_ LPCSTR pszObjectOid,
    _In_ DWORD dwRetrievalFlags,
    _In_ DWORD dwTimeout,
    _Outptr_ LPVOID* ppvObject,
    _In_opt_ HCRYPTASYNC hAsyncRetrieve,
    _In_opt_ PCRYPT_CREDENTIALS pCredentials,
    _In_opt_ LPVOID pvVerify,
    _Inout_opt_ PCRYPT_RETRIEVE_AUX_INFO pAuxInfo
    );
WINCRYPT32API
_Success_(return == TRUE)
BOOL
WINAPI
CryptRetrieveObjectByUrlW (
    _In_ LPCWSTR pszUrl,
    _In_opt_ LPCSTR pszObjectOid,
    _In_ DWORD dwRetrievalFlags,
    _In_ DWORD dwTimeout,
    _Outptr_ LPVOID* ppvObject,
    _In_opt_ HCRYPTASYNC hAsyncRetrieve,
    _In_opt_ PCRYPT_CREDENTIALS pCredentials,
    _In_opt_ LPVOID pvVerify,
    _Inout_opt_ PCRYPT_RETRIEVE_AUX_INFO pAuxInfo
    );
typedef BOOL (WINAPI *PFN_CRYPT_CANCEL_RETRIEVAL)(
    _In_ DWORD dwFlags,
    _Inout_opt_ void *pvArg
    );
WINCRYPT32API
BOOL
WINAPI
CryptInstallCancelRetrieval(
    __callback PFN_CRYPT_CANCEL_RETRIEVAL pfnCancel,
    _In_opt_ const void *pvArg,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved
);
WINCRYPT32API
BOOL
WINAPI
CryptUninstallCancelRetrieval(
        _In_ DWORD dwFlags,
        _Reserved_ void *pvReserved
        );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED)
WINCRYPT32API
BOOL
WINAPI
CryptCancelAsyncRetrieval (
    _In_opt_ HCRYPTASYNC hAsyncRetrieval
    );
typedef VOID (WINAPI *PFN_CRYPT_ASYNC_RETRIEVAL_COMPLETION_FUNC) (
    _Inout_opt_ LPVOID pvCompletion,
    _In_ DWORD dwCompletionCode,
    _In_ LPCSTR pszUrl,
    _In_opt_ LPSTR pszObjectOid,
    _In_ LPVOID pvObject
    );
typedef struct _CRYPT_ASYNC_RETRIEVAL_COMPLETION {
    __callback PFN_CRYPT_ASYNC_RETRIEVAL_COMPLETION_FUNC pfnCompletion;
    _Inout_opt_ LPVOID pvCompletion;
} CRYPT_ASYNC_RETRIEVAL_COMPLETION, *PCRYPT_ASYNC_RETRIEVAL_COMPLETION;
typedef BOOL (WINAPI *PFN_CANCEL_ASYNC_RETRIEVAL_FUNC) (
    _In_opt_ HCRYPTASYNC hAsyncRetrieve
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
typedef struct _CRYPT_URL_ARRAY {
    DWORD cUrl;
    LPWSTR* rgwszUrl;
} CRYPT_URL_ARRAY, *PCRYPT_URL_ARRAY;
typedef struct _CRYPT_URL_INFO {
    DWORD cbSize;
    DWORD dwSyncDeltaTime;
    DWORD cGroup;
    DWORD *rgcGroupEntry;
} CRYPT_URL_INFO, *PCRYPT_URL_INFO;
WINCRYPT32API
BOOL
WINAPI
CryptGetObjectUrl (
    _In_ LPCSTR pszUrlOid,
    _In_ LPVOID pvPara,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*pcbUrlArray, *pcbUrlArray) PCRYPT_URL_ARRAY pUrlArray,
    _Inout_ DWORD* pcbUrlArray,
    _Out_writes_bytes_to_opt_(*pcbUrlInfo, *pcbUrlInfo) PCRYPT_URL_INFO pUrlInfo,
    _Inout_opt_ DWORD* pcbUrlInfo,
    _Reserved_ LPVOID pvReserved
    );
typedef struct _CERT_CRL_CONTEXT_PAIR {
    PCCERT_CONTEXT pCertContext;
    PCCRL_CONTEXT pCrlContext;
} CERT_CRL_CONTEXT_PAIR, *PCERT_CRL_CONTEXT_PAIR;
typedef const CERT_CRL_CONTEXT_PAIR *PCCERT_CRL_CONTEXT_PAIR;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED)
typedef struct _CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO {
    DWORD cbSize;
    int iDeltaCrlIndicator;
    LPFILETIME pftCacheResync;
    LPFILETIME pLastSyncTime;
    LPFILETIME pMaxAgeTime;
    PCERT_REVOCATION_CHAIN_PARA pChainPara;
    PCRYPT_INTEGER_BLOB pDeltaCrlIndicator;
} CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO,
    *PCRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO;
WINCRYPT32API
_Success_(return == TRUE)
BOOL
WINAPI
CryptGetTimeValidObject (
    _In_ LPCSTR pszTimeValidOid,
    _In_ LPVOID pvPara,
    _In_ PCCERT_CONTEXT pIssuer,
    _In_opt_ LPFILETIME pftValidFor,
    _In_ DWORD dwFlags,
    _In_ DWORD dwTimeout,
    _Outptr_opt_ LPVOID* ppvObject,
    _In_opt_ PCRYPT_CREDENTIALS pCredentials,
    _Inout_opt_ PCRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO pExtraInfo
    );
WINCRYPT32API
BOOL
WINAPI
CryptFlushTimeValidObject (
     _In_ LPCSTR pszFlushTimeValidOid,
     _In_ LPVOID pvPara,
     _In_ PCCERT_CONTEXT pIssuer,
     _In_ DWORD dwFlags,
     _Reserved_ LPVOID pvReserved
     );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
PCCERT_CONTEXT
WINAPI
CertCreateSelfSignCertificate(
    _In_opt_ HCRYPTPROV_OR_NCRYPT_KEY_HANDLE hCryptProvOrNCryptKey,
    _In_ PCERT_NAME_BLOB pSubjectIssuerBlob,
    _In_ DWORD dwFlags,
    _In_opt_ PCRYPT_KEY_PROV_INFO pKeyProvInfo,
    _In_opt_ PCRYPT_ALGORITHM_IDENTIFIER pSignatureAlgorithm,
    _In_opt_ PSYSTEMTIME pStartTime,
    _In_opt_ PSYSTEMTIME pEndTime,
    _In_opt_ PCERT_EXTENSIONS pExtensions
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
BOOL
WINAPI
CryptGetKeyIdentifierProperty(
    _In_ const CRYPT_HASH_BLOB *pKeyIdentifier,
    _In_ DWORD dwPropId,
    _In_ DWORD dwFlags,
    _In_opt_ LPCWSTR pwszComputerName,
    _Reserved_ void *pvReserved,
    _Out_writes_bytes_to_opt_(*pcbData, *pcbData) void *pvData,
    _Inout_ DWORD *pcbData
    );
WINCRYPT32API
BOOL
WINAPI
CryptSetKeyIdentifierProperty(
    _In_ const CRYPT_HASH_BLOB *pKeyIdentifier,
    _In_ DWORD dwPropId,
    _In_ DWORD dwFlags,
    _In_opt_ LPCWSTR pwszComputerName,
    _Reserved_ void *pvReserved,
    _In_opt_ const void *pvData
    );
typedef BOOL (WINAPI *PFN_CRYPT_ENUM_KEYID_PROP)(
    _In_ const CRYPT_HASH_BLOB *pKeyIdentifier,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved,
    _Inout_opt_ void *pvArg,
    _In_ DWORD cProp,
    _In_reads_(cProp) DWORD *rgdwPropId,
    _In_reads_(cProp) void **rgpvData,
    _In_reads_(cProp) DWORD *rgcbData
    );
WINCRYPT32API
BOOL
WINAPI
CryptEnumKeyIdentifierProperties(
    _In_opt_ const CRYPT_HASH_BLOB *pKeyIdentifier,
    _In_ DWORD dwPropId,
    _In_ DWORD dwFlags,
    _In_opt_ LPCWSTR pwszComputerName,
    _Reserved_ void *pvReserved,
    _Inout_opt_ void *pvArg,
    __callback PFN_CRYPT_ENUM_KEYID_PROP pfnEnum
    );
WINCRYPT32API
BOOL
WINAPI
CryptCreateKeyIdentifierFromCSP(
    _In_ DWORD dwCertEncodingType,
    _In_opt_ LPCSTR pszPubKeyOID,
    _In_reads_bytes_(cbPubKeyStruc) const PUBLICKEYSTRUC *pPubKeyStruc,
    _In_ DWORD cbPubKeyStruc,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved,
    _Out_writes_bytes_to_opt_(*pcbHash, *pcbHash) BYTE *pbHash,
    _Inout_ DWORD *pcbHash
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
    L"Software\\Microsoft\\Cryptography\\OID\\EncodingType 0\\CertDllCreateCertificateChainEngine\\Config"
    L"MaxUrlRetrievalByteCount"
    L"ChainCacheResyncFiletime"
    L"DisableMandatoryBasicConstraints"
    L"DisableCANameConstraints"
    L"DisableUnsupportedCriticalExtensions"
    L"MaxAIAUrlCountInCert"
    L"MaxAIAUrlRetrievalCountPerChain"
    L"MaxAIAUrlRetrievalByteCount"
    L"MaxAIAUrlRetrievalCertCount"
    L"OcspValiditySeconds"
    L"DisableSerialChain"
    L"SerialChainLogFileName"
    L"DisableSyncWithSslTime"
    L"MaxSslTimeUpdatedEventCount"
    L"SslHandshakeLogFileName"
    L"EnableWeakSignatureFlags"
    L"MinRsaPubKeyBitLength"
    0xFFFFFFFF
    L"WeakRsaPubKeyTime"
    0x01CA8A755C6E0000ui64
    L"WeakSignatureLogDir"
    0xFFFFFFFF
    CERT_CHAIN_DISABLE_ALL_EKU_WEAK_FLAG | \
    CERT_CHAIN_DISABLE_SERVER_AUTH_WEAK_FLAG | \
    CERT_CHAIN_DISABLE_OPT_IN_SERVER_AUTH_WEAK_FLAG | \
    CERT_CHAIN_DISABLE_CODE_SIGNING_WEAK_FLAG | \
    CERT_CHAIN_DISABLE_MOTW_CODE_SIGNING_WEAK_FLAG | \
    CERT_CHAIN_DISABLE_TIMESTAMP_WEAK_FLAG | \
    CERT_CHAIN_DISABLE_MOTW_TIMESTAMP_WEAK_FLAG )
    CERT_CHAIN_DISABLE_FILE_HASH_WEAK_FLAG | \
    CERT_CHAIN_DISABLE_MOTW_FILE_HASH_WEAK_FLAG )
    CERT_CHAIN_DISABLE_TIMESTAMP_HASH_WEAK_FLAG | \
    CERT_CHAIN_DISABLE_MOTW_TIMESTAMP_HASH_WEAK_FLAG )
    CERT_CHAIN_ENABLE_ALL_EKU_HYGIENE_FLAG | \
    CERT_CHAIN_ENABLE_SERVER_AUTH_HYGIENE_FLAG | \
    CERT_CHAIN_ENABLE_CODE_SIGNING_HYGIENE_FLAG | \
    CERT_CHAIN_ENABLE_MOTW_CODE_SIGNING_HYGIENE_FLAG | \
    CERT_CHAIN_ENABLE_TIMESTAMP_HYGIENE_FLAG | \
    CERT_CHAIN_ENABLE_MOTW_TIMESTAMP_HYGIENE_FLAG )
    CERT_CHAIN_DISABLE_MOTW_CODE_SIGNING_WEAK_FLAG | \
    CERT_CHAIN_DISABLE_MOTW_TIMESTAMP_WEAK_FLAG | \
    CERT_CHAIN_ENABLE_MOTW_CODE_SIGNING_HYGIENE_FLAG | \
    CERT_CHAIN_ENABLE_MOTW_TIMESTAMP_HYGIENE_FLAG | \
    CERT_CHAIN_MOTW_IGNORE_AFTER_TIME_WEAK_FLAG)
    CERT_CHAIN_DISABLE_OPT_IN_SERVER_AUTH_WEAK_FLAG)
    L"AutoFlags"
    CERT_CHAIN_AUTO_LOG_CREATE_FLAG | \
    CERT_CHAIN_AUTO_LOG_FREE_FLAG | \
    CERT_CHAIN_AUTO_LOG_FLUSH_FLAG )
    L"AutoFlushFirstDeltaSeconds"
    (5 * 60)
    L"AutoFlushNextDeltaSeconds"
    (30 * 60)
    L"AutoLogFileName"
    L"DisableAutoFlushProcessNameList"
    L"SrvOcspRespMinValiditySeconds"
    (10 * 60)
    L"SrvOcspRespUrlRetrievalTimeoutMilliseconds"
    (15 * 1000)
    L"SrvOcspRespMaxBeforeNextUpdateSeconds"
    (4 * 60 * 60)
    L"SrvOcspRespMinBeforeNextUpdateSeconds"
    (2 * 60)
    L"SrvOcspRespMinAfterNextUpdateSeconds"
    (1 * 60)
    L"SrvOcspRespMinSyncCertFileSeconds"
    5
    L"SrvOcspRespMaxSyncCertFileSeconds"
    (1 * 60 * 60)
    L"CryptnetMaxCachedOcspPerCrlCount"
    500
    0xFFFFFFFF
    L"CryptnetDefaultFlushExemptSeconds"
    (28 * 24 * 60 * 60)
    L"CryptnetPreFetchMinMaxAgeSeconds"
    (1 * 60 * 60)
    L"CryptnetPreFetchMaxMaxAgeSeconds"
    (14 * 24 * 60 * 60)
    L"CryptnetPreFetchMinOcspValidityPeriodSeconds"
    (14 * 24 * 60 * 60)
    L"CryptnetPreFetchAfterPublishPreFetchDivisor"
    10
    L"CryptnetPreFetchBeforeNextUpdatePreFetchDivisor"
    20
    L"CryptnetPreFetchMinBeforeNextUpdatePreFetchSeconds"
    (1 * 60 * 60)
    L"CryptnetPreFetchValidityPeriodAfterNextUpdatePreFetchDivisor"
    10
    L"CryptnetPreFetchMaxAfterNextUpdatePreFetchPeriodSeconds"
    (4 * 60 * 60)
    L"CryptnetPreFetchMinAfterNextUpdatePreFetchPeriodSeconds"
    (30 * 60)
    L"CryptnetPreFetchAfterCurrentTimePreFetchPeriodSeconds"
    (30 * 60)
    L"CryptnetPreFetchTriggerPeriodSeconds"
    (10 * 60)
    0xFFFFFFFF
    L"CryptnetPreFetchScanAfterTriggerDelaySeconds"
    60
    L"CryptnetPreFetchRetrievalTimeoutSeconds"
    (5 * 60)
    CERT_CHAIN_CONFIG_REGPATH L"\\CrlPreFetch"
    L"ProcessNameList"
    L"PreFetchUrlList"
    L"DisableInformationEvents"
    L"LogFileName"
    L"TimeoutSeconds"
    (5 * 60)
    L"MaxAgeSeconds"
    (2 * 60 * 60)
    (5 * 60)
    L"PublishBeforeNextUpdateSeconds"
    (1 * 60 * 60)
    L"PublishRandomIntervalSeconds"
    (5 * 60)
    L"MinBeforeNextUpdateSeconds"
    (5 * 60)
    L"MinAfterNextUpdateSeconds"
    (5 * 60)
    CERT_GROUP_POLICY_SYSTEM_STORE_REGPATH L"\\ChainEngine\\Config"
    L"ChainUrlRetrievalTimeoutMilliseconds"
    (15 * 1000)
    L"ChainRevAccumulativeUrlRetrievalTimeoutMilliseconds"
    (20 * 1000)
    L"CryptnetCachedOcspSwitchToCrlCount"
    50
    0xFFFFFFFF
    L"DisableAIAUrlRetrieval"
    L"Options"
    L"CrossCertDownloadIntervalHours"
    L"CRLValidityExtensionPeriod"
typedef HANDLE HCERTCHAINENGINE;
typedef struct _CERT_CHAIN_ENGINE_CONFIG {
    DWORD cbSize;
    HCERTSTORE hRestrictedRoot;
    HCERTSTORE hRestrictedTrust;
    HCERTSTORE hRestrictedOther;
    DWORD cAdditionalStore;
    HCERTSTORE* rghAdditionalStore;
    DWORD dwFlags;
    DWORD dwUrlRetrievalTimeout;
    DWORD MaximumCachedCertificates;
    DWORD CycleDetectionModulus;
    HCERTSTORE hExclusiveRoot;
    HCERTSTORE hExclusiveTrustedPeople;
    DWORD dwExclusiveFlags;
} CERT_CHAIN_ENGINE_CONFIG, *PCERT_CHAIN_ENGINE_CONFIG;
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CertCreateCertificateChainEngine (
    _In_ PCERT_CHAIN_ENGINE_CONFIG pConfig,
    _Out_ HCERTCHAINENGINE* phChainEngine
    );
WINCRYPT32API
VOID
WINAPI
CertFreeCertificateChainEngine (
    _In_opt_ HCERTCHAINENGINE hChainEngine
    );
WINCRYPT32API
BOOL
WINAPI
CertResyncCertificateChainEngine (
    _In_opt_ HCERTCHAINENGINE hChainEngine
    );
typedef struct _CERT_TRUST_STATUS {
    DWORD dwErrorStatus;
    DWORD dwInfoStatus;
} CERT_TRUST_STATUS, *PCERT_TRUST_STATUS;
typedef struct _CERT_REVOCATION_INFO {
    DWORD cbSize;
    DWORD dwRevocationResult;
    LPCSTR pszRevocationOid;
    LPVOID pvOidSpecificInfo;
    BOOL fHasFreshnessTime;
    DWORD dwFreshnessTime;
    PCERT_REVOCATION_CRL_INFO pCrlInfo;
} CERT_REVOCATION_INFO, *PCERT_REVOCATION_INFO;
typedef struct _CERT_TRUST_LIST_INFO {
    DWORD cbSize;
    PCTL_ENTRY pCtlEntry;
    PCCTL_CONTEXT pCtlContext;
} CERT_TRUST_LIST_INFO, *PCERT_TRUST_LIST_INFO;
typedef struct _CERT_CHAIN_ELEMENT {
    DWORD cbSize;
    PCCERT_CONTEXT pCertContext;
    CERT_TRUST_STATUS TrustStatus;
    PCERT_REVOCATION_INFO pRevocationInfo;
    PCERT_ENHKEY_USAGE pIssuanceUsage;
    PCERT_ENHKEY_USAGE pApplicationUsage;
    LPCWSTR pwszExtendedErrorInfo;
} CERT_CHAIN_ELEMENT, *PCERT_CHAIN_ELEMENT;
typedef const CERT_CHAIN_ELEMENT* PCCERT_CHAIN_ELEMENT;
typedef struct _CERT_SIMPLE_CHAIN {
    DWORD cbSize;
    CERT_TRUST_STATUS TrustStatus;
    DWORD cElement;
    PCERT_CHAIN_ELEMENT* rgpElement;
    PCERT_TRUST_LIST_INFO pTrustListInfo;
    BOOL fHasRevocationFreshnessTime;
    DWORD dwRevocationFreshnessTime;
} CERT_SIMPLE_CHAIN, *PCERT_SIMPLE_CHAIN;
typedef const CERT_SIMPLE_CHAIN* PCCERT_SIMPLE_CHAIN;
typedef struct _CERT_CHAIN_CONTEXT CERT_CHAIN_CONTEXT, *PCERT_CHAIN_CONTEXT;
typedef const CERT_CHAIN_CONTEXT *PCCERT_CHAIN_CONTEXT;
struct _CERT_CHAIN_CONTEXT {
    DWORD cbSize;
    CERT_TRUST_STATUS TrustStatus;
    DWORD cChain;
    PCERT_SIMPLE_CHAIN* rgpChain;
    DWORD cLowerQualityChainContext;
    PCCERT_CHAIN_CONTEXT* rgpLowerQualityChainContext;
    BOOL fHasRevocationFreshnessTime;
    DWORD dwRevocationFreshnessTime;
    DWORD dwCreateFlags;
    GUID ChainId;
};
typedef struct _CERT_USAGE_MATCH {
    DWORD dwType;
    CERT_ENHKEY_USAGE Usage;
} CERT_USAGE_MATCH, *PCERT_USAGE_MATCH;
typedef struct _CTL_USAGE_MATCH {
    DWORD dwType;
    CTL_USAGE Usage;
} CTL_USAGE_MATCH, *PCTL_USAGE_MATCH;
typedef struct _CERT_CHAIN_PARA {
    DWORD cbSize;
    CERT_USAGE_MATCH RequestedUsage;
    CERT_USAGE_MATCH RequestedIssuancePolicy;
    DWORD dwUrlRetrievalTimeout;
    BOOL fCheckRevocationFreshnessTime;
    DWORD dwRevocationFreshnessTime;
    LPFILETIME pftCacheResync;
    PCCERT_STRONG_SIGN_PARA pStrongSignPara;
    DWORD dwStrongSignFlags;
} CERT_CHAIN_PARA, *PCERT_CHAIN_PARA;
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CertGetCertificateChain (
    _In_opt_ HCERTCHAINENGINE hChainEngine,
    _In_ PCCERT_CONTEXT pCertContext,
    _In_opt_ LPFILETIME pTime,
    _In_opt_ HCERTSTORE hAdditionalStore,
    _In_ PCERT_CHAIN_PARA pChainPara,
    _In_ DWORD dwFlags,
    _Reserved_ LPVOID pvReserved,
    _Out_ PCCERT_CHAIN_CONTEXT* ppChainContext
    );
WINCRYPT32API
VOID
WINAPI
CertFreeCertificateChain (
    _In_ PCCERT_CHAIN_CONTEXT pChainContext
    );
WINCRYPT32API
PCCERT_CHAIN_CONTEXT
WINAPI
CertDuplicateCertificateChain (
    _In_ PCCERT_CHAIN_CONTEXT pChainContext
    );
struct _CERT_REVOCATION_CHAIN_PARA {
    DWORD cbSize;
    HCERTCHAINENGINE hChainEngine;
    HCERTSTORE hAdditionalStore;
    DWORD dwChainFlags;
    DWORD dwUrlRetrievalTimeout;
    LPFILETIME pftCurrentTime;
    LPFILETIME pftCacheResync;
    DWORD cbMaxUrlRetrievalByteCount;
};
typedef struct _CRL_REVOCATION_INFO {
    PCRL_ENTRY pCrlEntry;
    PCCRL_CONTEXT pCrlContext;
    PCCERT_CHAIN_CONTEXT pCrlIssuerChain;
} CRL_REVOCATION_INFO, *PCRL_REVOCATION_INFO;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
WINCRYPT32API
PCCERT_CHAIN_CONTEXT
WINAPI
CertFindChainInStore(
    _In_ HCERTSTORE hCertStore,
    _In_ DWORD dwCertEncodingType,
    _In_ DWORD dwFindFlags,
    _In_ DWORD dwFindType,
    _In_opt_ const void *pvFindPara,
    _In_opt_ PCCERT_CHAIN_CONTEXT pPrevChainContext
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef BOOL (WINAPI *PFN_CERT_CHAIN_FIND_BY_ISSUER_CALLBACK)(
    _In_ PCCERT_CONTEXT pCert,
    _Inout_opt_ void *pvFindArg
    );
typedef struct _CERT_CHAIN_FIND_BY_ISSUER_PARA {
    DWORD cbSize;
    LPCSTR pszUsageIdentifier;
    DWORD dwKeySpec;
    DWORD dwAcquirePrivateKeyFlags;
    DWORD cIssuer;
    CERT_NAME_BLOB *rgIssuer;
    PFN_CERT_CHAIN_FIND_BY_ISSUER_CALLBACK pfnFindCallback;
    void *pvFindArg;
    DWORD *pdwIssuerChainIndex;
    DWORD *pdwIssuerElementIndex;
} CERT_CHAIN_FIND_ISSUER_PARA, *PCERT_CHAIN_FIND_ISSUER_PARA,
    CERT_CHAIN_FIND_BY_ISSUER_PARA, *PCERT_CHAIN_FIND_BY_ISSUER_PARA;
typedef struct _CERT_CHAIN_POLICY_PARA {
    DWORD cbSize;
    DWORD dwFlags;
    void *pvExtraPolicyPara;
} CERT_CHAIN_POLICY_PARA, *PCERT_CHAIN_POLICY_PARA;
typedef struct _CERT_CHAIN_POLICY_STATUS {
    DWORD cbSize;
    DWORD dwError;
    LONG lChainIndex;
    LONG lElementIndex;
    void *pvExtraPolicyStatus;
} CERT_CHAIN_POLICY_STATUS, *PCERT_CHAIN_POLICY_STATUS;
    CERT_CHAIN_POLICY_IGNORE_NOT_TIME_VALID_FLAG | \
    CERT_CHAIN_POLICY_IGNORE_CTL_NOT_TIME_VALID_FLAG | \
    CERT_CHAIN_POLICY_IGNORE_NOT_TIME_NESTED_FLAG \
    )
    CERT_CHAIN_POLICY_IGNORE_END_REV_UNKNOWN_FLAG | \
    CERT_CHAIN_POLICY_IGNORE_CTL_SIGNER_REV_UNKNOWN_FLAG | \
    CERT_CHAIN_POLICY_IGNORE_CA_REV_UNKNOWN_FLAG | \
    CERT_CHAIN_POLICY_IGNORE_ROOT_REV_UNKNOWN_FLAG \
    )
WINCRYPT32API
BOOL
WINAPI
CertVerifyCertificateChainPolicy(
    _In_ LPCSTR pszPolicyOID,
    _In_ PCCERT_CHAIN_CONTEXT pChainContext,
    _In_ PCERT_CHAIN_POLICY_PARA pPolicyPara,
    _Inout_ PCERT_CHAIN_POLICY_STATUS pPolicyStatus
    );
    "CertDllVerifyCertificateChainPolicy"
typedef struct _AUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_PARA {
    DWORD cbSize;
    DWORD dwRegPolicySettings;
    PCMSG_SIGNER_INFO pSignerInfo;
} AUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_PARA,
    *PAUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_PARA;
typedef struct _AUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_STATUS {
    DWORD cbSize;
    BOOL fCommercial;
} AUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_STATUS,
    *PAUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_STATUS;
typedef struct _AUTHENTICODE_TS_EXTRA_CERT_CHAIN_POLICY_PARA {
    DWORD cbSize;
    DWORD dwRegPolicySettings;
    BOOL fCommercial;
} AUTHENTICODE_TS_EXTRA_CERT_CHAIN_POLICY_PARA,
    *PAUTHENTICODE_TS_EXTRA_CERT_CHAIN_POLICY_PARA;
typedef struct _HTTPSPolicyCallbackData
{
    union {
        DWORD cbStruct;
        DWORD cbSize;
    } DUMMYUNIONNAME;
    DWORD dwAuthType;
    DWORD fdwChecks;
    WCHAR *pwszServerName;
} HTTPSPolicyCallbackData, *PHTTPSPolicyCallbackData,
    SSL_EXTRA_CERT_CHAIN_POLICY_PARA, *PSSL_EXTRA_CERT_CHAIN_POLICY_PARA;
typedef struct _EV_EXTRA_CERT_CHAIN_POLICY_PARA {
    DWORD cbSize;
    DWORD dwRootProgramQualifierFlags;
} EV_EXTRA_CERT_CHAIN_POLICY_PARA,
    *PEV_EXTRA_CERT_CHAIN_POLICY_PARA;
typedef struct _EV_EXTRA_CERT_CHAIN_POLICY_STATUS {
    DWORD cbSize;
    DWORD dwQualifiers;
    DWORD dwIssuanceUsageIndex;
} EV_EXTRA_CERT_CHAIN_POLICY_STATUS, *PEV_EXTRA_CERT_CHAIN_POLICY_STATUS;
typedef struct _SSL_F12_EXTRA_CERT_CHAIN_POLICY_STATUS {
    DWORD cbSize;
    DWORD dwErrorLevel;
    DWORD dwErrorCategory;
    DWORD dwReserved;
    WCHAR wszErrorText[SSL_F12_ERROR_TEXT_LENGTH];
} SSL_F12_EXTRA_CERT_CHAIN_POLICY_STATUS, *PSSL_F12_EXTRA_CERT_CHAIN_POLICY_STATUS;
typedef struct _SSL_HPKP_HEADER_EXTRA_CERT_CHAIN_POLICY_PARA {
    DWORD cbSize;
    DWORD dwReserved;
    LPWSTR pwszServerName;
    LPSTR rgpszHpkpValue[SSL_HPKP_HEADER_COUNT];
} SSL_HPKP_HEADER_EXTRA_CERT_CHAIN_POLICY_PARA,
    *PSSL_HPKP_HEADER_EXTRA_CERT_CHAIN_POLICY_PARA;
typedef struct _SSL_KEY_PIN_EXTRA_CERT_CHAIN_POLICY_PARA {
    DWORD cbSize;
    DWORD dwReserved;
    PCWSTR pwszServerName;
} SSL_KEY_PIN_EXTRA_CERT_CHAIN_POLICY_PARA, *PSSL_KEY_PIN_EXTRA_CERT_CHAIN_POLICY_PARA;
typedef struct _SSL_KEY_PIN_EXTRA_CERT_CHAIN_POLICY_STATUS {
    DWORD cbSize;
    LONG lError;
    WCHAR wszErrorText[SSL_KEY_PIN_ERROR_TEXT_LENGTH];
} SSL_KEY_PIN_EXTRA_CERT_CHAIN_POLICY_STATUS, *PSSL_KEY_PIN_EXTRA_CERT_CHAIN_POLICY_STATUS;
_Success_(return)
WINCRYPT32STRINGAPI
BOOL
WINAPI
CryptStringToBinaryA(
    _In_reads_(cchString) LPCSTR pszString,
    _In_ DWORD cchString,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*pcbBinary, *pcbBinary) BYTE *pbBinary,
    _Inout_ DWORD *pcbBinary,
    _Out_opt_ DWORD *pdwSkip,
    _Out_opt_ DWORD *pdwFlags
    );
_Success_(return)
WINCRYPT32STRINGAPI
BOOL
WINAPI
CryptStringToBinaryW(
    _In_reads_(cchString) LPCWSTR pszString,
    _In_ DWORD cchString,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_to_opt_(*pcbBinary, *pcbBinary) BYTE *pbBinary,
    _Inout_ DWORD *pcbBinary,
    _Out_opt_ DWORD *pdwSkip,
    _Out_opt_ DWORD *pdwFlags
    );
_Success_(return)
WINCRYPT32STRINGAPI
BOOL
WINAPI
CryptBinaryToStringA(
    _In_reads_bytes_(cbBinary) CONST BYTE *pbBinary,
    _In_ DWORD cbBinary,
    _In_ DWORD dwFlags,
    _Out_writes_to_opt_(*pcchString, *pcchString) LPSTR pszString,
    _Inout_ DWORD *pcchString
    );
_Success_(return)
WINCRYPT32STRINGAPI
BOOL
WINAPI
CryptBinaryToStringW(
    _In_reads_bytes_(cbBinary) CONST BYTE *pbBinary,
    _In_ DWORD cbBinary,
    _In_ DWORD dwFlags,
    _Out_writes_to_opt_(*pcchString, *pcchString) LPWSTR pszString,
    _Inout_ DWORD *pcchString
    );
typedef struct _CRYPT_PKCS12_PBE_PARAMS
{
    int iIterations;
    ULONG cbSalt;
}
CRYPT_PKCS12_PBE_PARAMS;
WINCRYPT32API
HCERTSTORE
WINAPI
PFXImportCertStore(
    _In_ CRYPT_DATA_BLOB* pPFX,
    _In_ LPCWSTR szPassword,
    _In_ DWORD dwFlags);
              ( PKCS12_ALWAYS_CNG_KSP | \
                PKCS12_NO_PERSIST_KEY | \
                PKCS12_IMPORT_SILENT | \
                PKCS12_INCLUDE_EXTENDED_PROPERTIES )
WINCRYPT32API
BOOL
WINAPI
PFXIsPFXBlob(
    _In_ CRYPT_DATA_BLOB* pPFX);
WINCRYPT32API
BOOL
WINAPI
PFXVerifyPassword(
    _In_ CRYPT_DATA_BLOB* pPFX,
    _In_ LPCWSTR szPassword,
    _In_ DWORD dwFlags);
WINCRYPT32API
BOOL
WINAPI
PFXExportCertStoreEx(
    _In_ HCERTSTORE hStore,
    _Inout_ CRYPT_DATA_BLOB* pPFX,
    _In_ LPCWSTR szPassword,
    _In_ void* pvPara,
    _In_ DWORD dwFlags);
typedef struct _PKCS12_PBES2_EXPORT_PARAMS
{
    DWORD dwSize;
    PVOID hNcryptDescriptor;
    LPWSTR pwszPbes2Alg;
} PKCS12_PBES2_EXPORT_PARAMS, *PPKCS12_PBES2_EXPORT_PARAMS;
    L"Software\\Microsoft\\Windows\\CurrentVersion\\PFX"
    L"EncryptCertificates"
WINCRYPT32API
BOOL
WINAPI
PFXExportCertStore(
    _In_ HCERTSTORE hStore,
    _Inout_ CRYPT_DATA_BLOB* pPFX,
    _In_ LPCWSTR szPassword,
    _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
typedef VOID *HCERT_SERVER_OCSP_RESPONSE;
typedef struct _CERT_SERVER_OCSP_RESPONSE_CONTEXT
    CERT_SERVER_OCSP_RESPONSE_CONTEXT,
    *PCERT_SERVER_OCSP_RESPONSE_CONTEXT;
typedef const CERT_SERVER_OCSP_RESPONSE_CONTEXT
    *PCCERT_SERVER_OCSP_RESPONSE_CONTEXT;
struct _CERT_SERVER_OCSP_RESPONSE_CONTEXT {
    DWORD cbSize;
    BYTE *pbEncodedOcspResponse;
    DWORD cbEncodedOcspResponse;
};
typedef VOID (CALLBACK *PFN_CERT_SERVER_OCSP_RESPONSE_UPDATE_CALLBACK)(
    _In_ PCCERT_CHAIN_CONTEXT pChainContext,
    _In_ PCCERT_SERVER_OCSP_RESPONSE_CONTEXT pServerOcspResponseContext,
    _In_ PCCRL_CONTEXT pNewCrlContext,
    _In_opt_ PCCRL_CONTEXT pPrevCrlContext,
    _Inout_opt_ PVOID pvArg,
    _In_ DWORD dwWriteOcspFileError
    );
typedef struct _CERT_SERVER_OCSP_RESPONSE_OPEN_PARA {
    DWORD cbSize;
    DWORD dwFlags;
    DWORD *pcbUsedSize;
    PWSTR pwszOcspDirectory;
    PFN_CERT_SERVER_OCSP_RESPONSE_UPDATE_CALLBACK pfnUpdateCallback;
    PVOID pvUpdateCallbackArg;
} CERT_SERVER_OCSP_RESPONSE_OPEN_PARA, *PCERT_SERVER_OCSP_RESPONSE_OPEN_PARA;
WINCRYPT32API
HCERT_SERVER_OCSP_RESPONSE
WINAPI
CertOpenServerOcspResponse(
    _In_ PCCERT_CHAIN_CONTEXT pChainContext,
    _In_ DWORD dwFlags,
    _In_opt_ PCERT_SERVER_OCSP_RESPONSE_OPEN_PARA pOpenPara
    );
WINCRYPT32API
VOID
WINAPI
CertAddRefServerOcspResponse(
    _In_opt_ HCERT_SERVER_OCSP_RESPONSE hServerOcspResponse
    );
WINCRYPT32API
VOID
WINAPI
CertCloseServerOcspResponse(
    _In_opt_ HCERT_SERVER_OCSP_RESPONSE hServerOcspResponse,
    _In_ DWORD dwFlags
    );
WINCRYPT32API
PCCERT_SERVER_OCSP_RESPONSE_CONTEXT
WINAPI
CertGetServerOcspResponseContext(
    _In_ HCERT_SERVER_OCSP_RESPONSE hServerOcspResponse,
    _In_ DWORD dwFlags,
    _Reserved_ LPVOID pvReserved
    );
WINCRYPT32API
VOID
WINAPI
CertAddRefServerOcspResponseContext(
    _In_opt_ PCCERT_SERVER_OCSP_RESPONSE_CONTEXT pServerOcspResponseContext
    );
WINCRYPT32API
VOID
WINAPI
CertFreeServerOcspResponseContext(
    _In_opt_ PCCERT_SERVER_OCSP_RESPONSE_CONTEXT pServerOcspResponseContext
    );
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CertRetrieveLogoOrBiometricInfo(
    _In_ PCCERT_CONTEXT pCertContext,
    _In_ LPCSTR lpszLogoOrBiometricType,
    _In_ DWORD dwRetrievalFlags,
    _In_ DWORD dwTimeout,
    _In_ DWORD dwFlags,
    _Reserved_ void *pvReserved,
    _Outptr_result_bytebuffer_(*pcbData) BYTE **ppbData,
    _Out_ DWORD *pcbData,
    _Outptr_opt_result_maybenull_ LPWSTR *ppwszMimeType
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
    (CERT_RETRIEVE_BIOMETRIC_PREDEFINED_BASE_TYPE + CERT_BIOMETRIC_PICTURE_TYPE)
    (CERT_RETRIEVE_BIOMETRIC_PREDEFINED_BASE_TYPE + CERT_BIOMETRIC_SIGNATURE_TYPE)
typedef struct _CERT_SELECT_CHAIN_PARA
{
    HCERTCHAINENGINE hChainEngine;
    PFILETIME pTime;
    HCERTSTORE hAdditionalStore;
    PCERT_CHAIN_PARA pChainPara;
    DWORD dwFlags;
}
CERT_SELECT_CHAIN_PARA, *PCERT_SELECT_CHAIN_PARA;
typedef const CERT_SELECT_CHAIN_PARA* PCCERT_SELECT_CHAIN_PARA;
typedef struct _CERT_SELECT_CRITERIA
{
    DWORD dwType;
    DWORD cPara;
    _Field_size_(cPara) void** ppPara;
}
CERT_SELECT_CRITERIA, *PCERT_SELECT_CRITERIA;
typedef const CERT_SELECT_CRITERIA* PCCERT_SELECT_CRITERIA;
WINCRYPT32API
_Success_(return != FALSE)
BOOL
WINAPI
CertSelectCertificateChains(
    _In_opt_ LPCGUID pSelectionContext,
    _In_ DWORD dwFlags,
    _In_opt_ PCCERT_SELECT_CHAIN_PARA pChainParameters,
    _In_ DWORD cCriteria,
    _In_reads_opt_(cCriteria) PCCERT_SELECT_CRITERIA rgpCriteria,
    _In_ HCERTSTORE hStore,
    _Out_ PDWORD pcSelection,
    _Outptr_result_buffer_(*pcSelection) PCCERT_CHAIN_CONTEXT** pprgpSelection
    );
WINCRYPT32API
VOID
WINAPI
CertFreeCertificateChainList(
    _In_ PCCERT_CHAIN_CONTEXT* prgpSelection
    );
typedef struct _CRYPT_TIMESTAMP_REQUEST
{
    DWORD dwVersion;
    CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
    CRYPT_DER_BLOB HashedMessage;
    LPSTR pszTSAPolicyId;
    CRYPT_INTEGER_BLOB Nonce;
    BOOL fCertReq;
    DWORD cExtension;
    _Field_size_(cExtension)
    PCERT_EXTENSION rgExtension;
} CRYPT_TIMESTAMP_REQUEST, *PCRYPT_TIMESTAMP_REQUEST;
typedef struct _CRYPT_TIMESTAMP_RESPONSE
{
    DWORD dwStatus;
    DWORD cFreeText;
    _Field_size_(cFreeText)
    LPWSTR* rgFreeText;
    CRYPT_BIT_BLOB FailureInfo;
    CRYPT_DER_BLOB ContentInfo;
} CRYPT_TIMESTAMP_RESPONSE, *PCRYPT_TIMESTAMP_RESPONSE;
typedef struct _CRYPT_TIMESTAMP_ACCURACY
{
    DWORD dwSeconds;
    DWORD dwMillis;
    DWORD dwMicros;
} CRYPT_TIMESTAMP_ACCURACY, *PCRYPT_TIMESTAMP_ACCURACY;
typedef struct _CRYPT_TIMESTAMP_INFO
{
    DWORD dwVersion;
    LPSTR pszTSAPolicyId;
    CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
    CRYPT_DER_BLOB HashedMessage;
    CRYPT_INTEGER_BLOB SerialNumber;
    FILETIME ftTime;
    PCRYPT_TIMESTAMP_ACCURACY pvAccuracy;
    BOOL fOrdering;
    CRYPT_DER_BLOB Nonce;
    CRYPT_DER_BLOB Tsa;
    DWORD cExtension;
    _Field_size_(cExtension)
    PCERT_EXTENSION rgExtension;
} CRYPT_TIMESTAMP_INFO, *PCRYPT_TIMESTAMP_INFO;
typedef struct _CRYPT_TIMESTAMP_CONTEXT
{
    DWORD cbEncoded;
    _Field_size_bytes_(cbEncoded)
    BYTE *pbEncoded;
    PCRYPT_TIMESTAMP_INFO pTimeStamp;
} CRYPT_TIMESTAMP_CONTEXT, *PCRYPT_TIMESTAMP_CONTEXT;
typedef struct _CRYPT_TIMESTAMP_PARA
{
    LPCSTR pszTSAPolicyId;
    BOOL fRequestCerts;
    CRYPT_INTEGER_BLOB Nonce;
    DWORD cExtension;
    _Field_size_(cExtension)
    PCERT_EXTENSION rgExtension;
} CRYPT_TIMESTAMP_PARA, *PCRYPT_TIMESTAMP_PARA;
BOOL
WINAPI
CryptRetrieveTimeStamp(
    _In_ LPCWSTR wszUrl,
                                DWORD dwRetrievalFlags,
                                DWORD dwTimeout,
    _In_ LPCSTR pszHashId,
    _In_opt_ const CRYPT_TIMESTAMP_PARA *pPara,
    _In_reads_bytes_(cbData)
                                const BYTE *pbData,
                                DWORD cbData,
    _Outptr_ PCRYPT_TIMESTAMP_CONTEXT *ppTsContext,
    _Outptr_result_maybenull_ PCCERT_CONTEXT *ppTsSigner,
    _Out_opt_ HCERTSTORE *phStore
    );
_Success_(return == TRUE)
BOOL
WINAPI
CryptVerifyTimeStampSignature (
    _In_reads_bytes_( cbTSContentInfo )
                                const BYTE *pbTSContentInfo,
                                DWORD cbTSContentInfo,
    _In_reads_bytes_opt_(cbData)
                                const BYTE *pbData,
                                DWORD cbData,
    _In_opt_ HCERTSTORE hAdditionalStore,
    _Outptr_ PCRYPT_TIMESTAMP_CONTEXT *ppTsContext,
    _Outptr_result_maybenull_ PCCERT_CONTEXT *ppTsSigner,
    _Out_opt_ HCERTSTORE *phStore
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP|WINAPI_PARTITION_PHONE_RESTRICTED | WINAPI_PARTITION_SYSTEM)
_Success_(return != 0)
typedef BOOL (WINAPI *PFN_CRYPT_OBJECT_LOCATOR_PROVIDER_FLUSH)(
    _In_ LPVOID pContext,
    _In_reads_(dwIdentifierOrNameListCount) PCERT_NAME_BLOB *rgIdentifierOrNameList,
    _In_ DWORD dwIdentifierOrNameListCount);
_Success_(return != 0)
typedef BOOL (WINAPI *PFN_CRYPT_OBJECT_LOCATOR_PROVIDER_GET)(
    _In_opt_ LPVOID pPluginContext,
    _In_opt_ PCRYPT_DATA_BLOB pIdentifier,
    _In_ DWORD dwNameType,
    _In_ PCERT_NAME_BLOB pNameBlob,
    _Outptr_result_bytebuffer_(*pcbContent) PBYTE *ppbContent,
    _Out_ DWORD *pcbContent,
    _Outptr_result_maybenull_ PCWSTR *ppwszPassword,
    _Outptr_result_maybenull_ PCRYPT_DATA_BLOB *ppIdentifier);
typedef void (WINAPI * PFN_CRYPT_OBJECT_LOCATOR_PROVIDER_RELEASE)(
    _In_ DWORD dwReason,
    _In_opt_ LPVOID pPluginContext);
typedef void (WINAPI *PFN_CRYPT_OBJECT_LOCATOR_PROVIDER_FREE_PASSWORD)(
    _In_opt_ LPVOID pPluginContext,
    _In_ PCWSTR pwszPassword
);
typedef void (WINAPI *PFN_CRYPT_OBJECT_LOCATOR_PROVIDER_FREE)(
    _In_opt_ LPVOID pPluginContext,
    _In_ PBYTE pbData
);
typedef void (WINAPI *PFN_CRYPT_OBJECT_LOCATOR_PROVIDER_FREE_IDENTIFIER)(
    _In_opt_ LPVOID pPluginContext,
    _In_ PCRYPT_DATA_BLOB pIdentifier);
typedef struct _CRYPT_OBJECT_LOCATOR_PROVIDER_TABLE
{
    _Field_range_(sizeof(CRYPT_OBJECT_LOCATOR_PROVIDER_TABLE), sizeof(CRYPT_OBJECT_LOCATOR_PROVIDER_TABLE)) DWORD cbSize;
    PFN_CRYPT_OBJECT_LOCATOR_PROVIDER_GET pfnGet;
    PFN_CRYPT_OBJECT_LOCATOR_PROVIDER_RELEASE pfnRelease;
    PFN_CRYPT_OBJECT_LOCATOR_PROVIDER_FREE_PASSWORD pfnFreePassword;
    PFN_CRYPT_OBJECT_LOCATOR_PROVIDER_FREE pfnFree;
    PFN_CRYPT_OBJECT_LOCATOR_PROVIDER_FREE_IDENTIFIER pfnFreeIdentifier;
} CRYPT_OBJECT_LOCATOR_PROVIDER_TABLE, *PCRYPT_OBJECT_LOCATOR_PROVIDER_TABLE;
_Success_(return != 0)
typedef BOOL (WINAPI *PFN_CRYPT_OBJECT_LOCATOR_PROVIDER_INITIALIZE)(
    _In_ PFN_CRYPT_OBJECT_LOCATOR_PROVIDER_FLUSH pfnFlush,
    _In_ LPVOID pContext,
    _Out_ DWORD *pdwExpectedObjectCount,
    _Outptr_ PCRYPT_OBJECT_LOCATOR_PROVIDER_TABLE *ppFuncTable,
    _Outptr_result_maybenull_ void **ppPluginContext);
WINCRYPT32API
BOOL
WINAPI
CertIsWeakHash(
    _In_ DWORD dwHashUseType,
    _In_ LPCWSTR pwszCNGHashAlgid,
    _In_ DWORD dwChainFlags,
    _In_opt_ PCCERT_CHAIN_CONTEXT pSignerChainContext,
    _In_opt_ LPFILETIME pTimeStamp,
    _In_opt_ LPCWSTR pwszFileName
    );
typedef WINCRYPT32API BOOL (WINAPI *PFN_CERT_IS_WEAK_HASH)(
    _In_ DWORD dwHashUseType,
    _In_ LPCWSTR pwszCNGHashAlgid,
    _In_ DWORD dwChainFlags,
    _In_opt_ PCCERT_CHAIN_CONTEXT pSignerChainContext,
    _In_opt_ LPFILETIME pTimeStamp,
    _In_opt_ LPCWSTR pwszFileName
    );
#endif
#pragma endregion
}
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#include <dpapi.h>
#endif
#pragma endregion
