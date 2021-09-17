       
#include <winapifamily.h>
#pragma region Desktop Family or Appx Deployment Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_APPXDEPLOYMENT)
#include <specstrings.h>
#include <wincrypt.h>
#include <bcrypt.h>
#include <ncrypt.h>
extern "C" {
typedef struct _CRYPT_XML_BLOB CRYPT_XML_BLOB, *PCRYPT_XML_BLOB;
typedef struct _CRYPT_XML_DATA_BLOB CRYPT_XML_DATA_BLOB, *PCRYPT_XML_DATA_BLOB;
typedef struct _CRYPT_XML_STATUS CRYPT_XML_STATUS, *PCRYPT_XML_STATUS;
typedef struct _CRYPT_XML_TRANSFORM_INFO CRYPT_XML_TRANSFORM_INFO, *PCRYPT_XML_TRANSFORM_INFO;
typedef struct _CRYPT_XML_TRANSFORM_CHAIN_CONFIG CRYPT_XML_TRANSFORM_CHAIN_CONFIG, *PCRYPT_XML_TRANSFORM_CHAIN_CONFIG;
typedef struct _CRYPT_XML_KEY_INFO CRYPT_XML_KEY_INFO, *PCRYPT_XML_KEY_INFO;
typedef struct _CRYPT_XML_ALGORITHM CRYPT_XML_ALGORITHM, *PCRYPT_XML_ALGORITHM;
typedef struct _CRYPT_XML_REFERENCE CRYPT_XML_REFERENCE, *PCRYPT_XML_REFERENCE;
typedef struct _CRYPT_XML_REFERENCES CRYPT_XML_REFERENCES, *PCRYPT_XML_REFERENCES;
typedef struct _CRYPT_XML_SIGNED_INFO CRYPT_XML_SIGNED_INFO, *PCRYPT_XML_SIGNED_INFO;
typedef struct _CRYPT_XML_OBJECT CRYPT_XML_OBJECT, *PCRYPT_XML_OBJECT;
typedef struct _CRYPT_XML_SIGNATURE CRYPT_XML_SIGNATURE, *PCRYPT_XML_SIGNATURE;
typedef struct _CRYPT_XML_ALGORITHM_INFO CRYPT_XML_ALGORITHM_INFO, *PCRYPT_XML_ALGORITHM_INFO;
typedef struct _CRYPT_XML_CRYPTOGRAPHIC_INTERFACE CRYPT_XML_CRYPTOGRAPHIC_INTERFACE, *PCRYPT_XML_CRYPTO_PROVIDER;
typedef void* HCRYPTXML;
typedef enum
{
    CRYPT_XML_CHARSET_AUTO = 0,
    CRYPT_XML_CHARSET_UTF8 = 1,
    CRYPT_XML_CHARSET_UTF16LE = 2,
    CRYPT_XML_CHARSET_UTF16BE = 3,
}CRYPT_XML_CHARSET;
typedef struct _CRYPT_XML_BLOB{
    CRYPT_XML_CHARSET dwCharset;
    _Field_range_( 0, CRYPT_XML_BLOB_MAX )
    ULONG cbData;
    _Field_size_(cbData)
    BYTE *pbData;
}CRYPT_XML_BLOB, *PCRYPT_XML_BLOB;
typedef struct _CRYPT_XML_DATA_BLOB{
    _Field_range_( 0, CRYPT_XML_BLOB_MAX )
    ULONG cbData;
    _Field_size_(cbData)
    BYTE *pbData;
}CRYPT_XML_DATA_BLOB, *PCRYPT_XML_DATA_BLOB;
typedef enum
{
    CRYPT_XML_PROPERTY_MAX_HEAP_SIZE = 1,
    CRYPT_XML_PROPERTY_SIGNATURE_LOCATION = 2,
    CRYPT_XML_PROPERTY_MAX_SIGNATURES = 3,
    CRYPT_XML_PROPERTY_DOC_DECLARATION = 4,
    CRYPT_XML_PROPERTY_XML_OUTPUT_CHARSET = 5,
}CRYPT_XML_PROPERTY_ID;
typedef struct _CRYPT_XML_PROPERTY{
    CRYPT_XML_PROPERTY_ID dwPropId;
    _Field_size_bytes_( cbValue )
    const void* pvValue;
    ULONG cbValue;
}CRYPT_XML_PROPERTY, *PCRYPT_XML_PROPERTY;
typedef
_Success_( return == 0 )
HRESULT
(CALLBACK* PFN_CRYPT_XML_WRITE_CALLBACK)(
    _Inout_ void *pvCallbackState,
    _In_reads_bytes_( cbData )
                    const BYTE *pbData,
                    ULONG cbData
    );
typedef
_Success_( return == 0 )
HRESULT
(CALLBACK *PFN_CRYPT_XML_DATA_PROVIDER_READ)(
    _Inout_ void *pvCallbackState,
    _Out_writes_bytes_to_( cbData, *pcbRead )
                    BYTE *pbData,
    _In_ ULONG cbData,
    _Out_range_( 0, cbData )
                    ULONG *pcbRead
    );
typedef
_Success_( return == 0 )
HRESULT
(CALLBACK *PFN_CRYPT_XML_DATA_PROVIDER_CLOSE)(
    _Inout_ void *pvCallbackState
    );
typedef struct _CRYPT_XML_DATA_PROVIDER{
        void *pvCallbackState;
        ULONG cbBufferSize;
        PFN_CRYPT_XML_DATA_PROVIDER_READ pfnRead;
        PFN_CRYPT_XML_DATA_PROVIDER_CLOSE pfnClose;
}CRYPT_XML_DATA_PROVIDER, *PCRYPT_XML_DATA_PROVIDER;
typedef
_Success_( return == 0 )
HRESULT
(CALLBACK *PFN_CRYPT_XML_CREATE_TRANSFORM)(
    _In_ const CRYPT_XML_ALGORITHM *pTransform,
    _In_ CRYPT_XML_DATA_PROVIDER *pProviderIn,
    _Out_ CRYPT_XML_DATA_PROVIDER *pProviderOut
    );
typedef struct _CRYPT_XML_STATUS{
    ULONG cbSize;
    DWORD dwErrorStatus;
    DWORD dwInfoStatus;
}CRYPT_XML_STATUS, *PCRYPT_XML_STATUS;
typedef struct _CRYPT_XML_ALGORITHM{
    ULONG cbSize;
    LPCWSTR wszAlgorithm;
    CRYPT_XML_BLOB Encoded;
}CRYPT_XML_ALGORITHM, *PCRYPT_XML_ALGORITHM;
typedef struct _CRYPT_XML_TRANSFORM_INFO{
    ULONG cbSize;
    LPCWSTR wszAlgorithm;
    ULONG cbBufferSize;
    DWORD dwFlags;
    PFN_CRYPT_XML_CREATE_TRANSFORM pfnCreateTransform;
}CRYPT_XML_TRANSFORM_INFO, *PCRYPT_XML_TRANSFORM_INFO;
typedef struct _CRYPT_XML_TRANSFORM_CHAIN_CONFIG{
    ULONG cbSize;
    ULONG cTransformInfo;
    _Field_size_(cTransformInfo)
    PCRYPT_XML_TRANSFORM_INFO *rgpTransformInfo;
} CRYPT_XML_TRANSFORM_CHAIN_CONFIG, *PCRYPT_XML_TRANSFORM_CHAIN_CONFIG;
typedef struct _CRYPT_XML_KEY_DSA_KEY_VALUE{
    CRYPT_XML_DATA_BLOB P;
    CRYPT_XML_DATA_BLOB Q;
    CRYPT_XML_DATA_BLOB G;
    CRYPT_XML_DATA_BLOB Y;
    CRYPT_XML_DATA_BLOB J;
    CRYPT_XML_DATA_BLOB Seed;
    CRYPT_XML_DATA_BLOB Counter;
} CRYPT_XML_KEY_DSA_KEY_VALUE;
typedef struct _CRYPT_XML_KEY_ECDSA_KEY_VALUE{
    LPCWSTR wszNamedCurve;
    CRYPT_XML_DATA_BLOB X;
    CRYPT_XML_DATA_BLOB Y;
    CRYPT_XML_BLOB ExplicitPara;
} CRYPT_XML_KEY_ECDSA_KEY_VALUE;
typedef struct _CRYPT_XML_KEY_RSA_KEY_VALUE{
    CRYPT_XML_DATA_BLOB Modulus;
    CRYPT_XML_DATA_BLOB Exponent;
} CRYPT_XML_KEY_RSA_KEY_VALUE;
typedef struct _CRYPT_XML_KEY_VALUE{
    DWORD dwType;
    union
    {
        CRYPT_XML_KEY_DSA_KEY_VALUE DSAKeyValue;
        CRYPT_XML_KEY_RSA_KEY_VALUE RSAKeyValue;
        CRYPT_XML_KEY_ECDSA_KEY_VALUE ECDSAKeyValue;
        CRYPT_XML_BLOB Custom;
    };
} CRYPT_XML_KEY_VALUE;
typedef struct _CRYPT_XML_ISSUER_SERIAL{
    LPCWSTR wszIssuer;
    LPCWSTR wszSerial;
} CRYPT_XML_ISSUER_SERIAL;
typedef struct _CRYPT_XML_X509DATA_ITEM{
    DWORD dwType;
    union
    {
        CRYPT_XML_ISSUER_SERIAL IssuerSerial;
        CRYPT_XML_DATA_BLOB SKI;
        LPCWSTR wszSubjectName;
        CRYPT_XML_DATA_BLOB Certificate;
        CRYPT_XML_DATA_BLOB CRL;
        CRYPT_XML_BLOB Custom;
    };
} CRYPT_XML_X509DATA_ITEM;
typedef struct _CRYPT_XML_X509DATA{
    UINT cX509Data;
    _Field_size_(cX509Data)
    CRYPT_XML_X509DATA_ITEM *rgX509Data;
} CRYPT_XML_X509DATA;
typedef struct _CRYPT_XML_KEY_INFO_ITEM{
    DWORD dwType;
    union
    {
        LPCWSTR wszKeyName;
        CRYPT_XML_KEY_VALUE KeyValue;
        CRYPT_XML_BLOB RetrievalMethod;
        CRYPT_XML_X509DATA X509Data;
        CRYPT_XML_BLOB Custom;
    };
} CRYPT_XML_KEY_INFO_ITEM;
typedef struct _CRYPT_XML_KEY_INFO{
    ULONG cbSize;
    LPCWSTR wszId;
    UINT cKeyInfo;
    _Field_size_(cKeyInfo)
    CRYPT_XML_KEY_INFO_ITEM *rgKeyInfo;
    BCRYPT_KEY_HANDLE hVerifyKey;
}CRYPT_XML_KEY_INFO, *PCRYPT_XML_KEY_INFO;
typedef struct _CRYPT_XML_REFERENCE{
    ULONG cbSize;
    HCRYPTXML hReference;
    LPCWSTR wszId;
    LPCWSTR wszUri;
    LPCWSTR wszType;
    CRYPT_XML_ALGORITHM DigestMethod;
    CRYPT_DATA_BLOB DigestValue;
    ULONG cTransform;
    _Field_size_(cTransform)
    CRYPT_XML_ALGORITHM *rgTransform;
}CRYPT_XML_REFERENCE, *PCRYPT_XML_REFERENCE;
typedef struct _CRYPT_XML_REFERENCES{
    ULONG cReference;
    _Field_size_(cReference)
    PCRYPT_XML_REFERENCE *rgpReference;
}CRYPT_XML_REFERENCES, *PCRYPT_XML_REFERENCES;
typedef struct _CRYPT_XML_SIGNED_INFO{
    ULONG cbSize;
    LPCWSTR wszId;
    CRYPT_XML_ALGORITHM Canonicalization;
    CRYPT_XML_ALGORITHM SignatureMethod;
    ULONG cReference;
    _Field_size_(cReference)
    PCRYPT_XML_REFERENCE *rgpReference;
    CRYPT_XML_BLOB Encoded;
}CRYPT_XML_SIGNED_INFO, *PCRYPT_XML_SIGNED_INFO;
typedef struct _CRYPT_XML_OBJECT{
    ULONG cbSize;
    HCRYPTXML hObject;
    LPCWSTR wszId;
    LPCWSTR wszMimeType;
    LPCWSTR wszEncoding;
    CRYPT_XML_REFERENCES Manifest;
    CRYPT_XML_BLOB Encoded;
}CRYPT_XML_OBJECT, *PCRYPT_XML_OBJECT;
typedef struct _CRYPT_XML_SIGNATURE{
    ULONG cbSize;
    HCRYPTXML hSignature;
    LPCWSTR wszId;
    CRYPT_XML_SIGNED_INFO SignedInfo;
    CRYPT_DATA_BLOB SignatureValue;
    CRYPT_XML_KEY_INFO *pKeyInfo;
    ULONG cObject;
    _Field_size_(cObject)
    PCRYPT_XML_OBJECT *rgpObject;
}CRYPT_XML_SIGNATURE, *PCRYPT_XML_SIGNATURE;
typedef struct _CRYPT_XML_DOC_CTXT{
    ULONG cbSize;
    HCRYPTXML hDocCtxt;
    CRYPT_XML_TRANSFORM_CHAIN_CONFIG *pTransformsConfig;
    ULONG cSignature;
    _Field_size_(cSignature)
    PCRYPT_XML_SIGNATURE *rgpSignature;
}CRYPT_XML_DOC_CTXT, *PCRYPT_XML_DOC_CTXT;
_Success_( return == 0 )
HRESULT
WINAPI
CryptXmlClose(
    _In_ HCRYPTXML hCryptXml
    );
_Success_( return == 0 )
HRESULT
WINAPI
CryptXmlGetTransforms(
    _Outptr_ const CRYPT_XML_TRANSFORM_CHAIN_CONFIG **ppConfig
    );
_Success_( return == 0 )
HRESULT
WINAPI
CryptXmlOpenToEncode(
    _In_opt_ const CRYPT_XML_TRANSFORM_CHAIN_CONFIG *pConfig,
                    DWORD dwFlags,
    _In_opt_ LPCWSTR wszId,
    _In_reads_opt_(cProperty)
                    const CRYPT_XML_PROPERTY* rgProperty,
    _In_ ULONG cProperty,
    _In_opt_ const CRYPT_XML_BLOB *pEncoded,
    _Outptr_ HCRYPTXML *phSignature
    );
_Success_( return == 0 )
HRESULT
WINAPI
CryptXmlOpenToDecode(
    _In_opt_ const CRYPT_XML_TRANSFORM_CHAIN_CONFIG *pConfig,
                    DWORD dwFlags,
    _In_reads_opt_(cProperty)
                    const CRYPT_XML_PROPERTY* rgProperty,
    _In_ ULONG cProperty,
    _In_ const CRYPT_XML_BLOB *pEncoded,
    _Outptr_ HCRYPTXML *phCryptXml
    );
_Success_( return == 0 )
HRESULT
WINAPI
CryptXmlAddObject(
    _In_ HCRYPTXML hSignatureOrObject,
                    DWORD dwFlags,
    _In_reads_opt_(cProperty)
                    const CRYPT_XML_PROPERTY* rgProperty,
    _In_ ULONG cProperty,
    _In_ const CRYPT_XML_BLOB *pEncoded,
    _Outptr_result_maybenull_ const CRYPT_XML_OBJECT **ppObject
    );
_Success_( return == 0 )
HRESULT
WINAPI
CryptXmlCreateReference(
    _In_ HCRYPTXML hCryptXml,
                    DWORD dwFlags,
    _In_opt_ LPCWSTR wszId,
    _In_opt_ LPCWSTR wszURI,
    _In_opt_ LPCWSTR wszType,
    _In_ const CRYPT_XML_ALGORITHM *pDigestMethod,
                    ULONG cTransform,
    _In_reads_opt_(cTransform)
                    const CRYPT_XML_ALGORITHM *rgTransform,
    _Outptr_ HCRYPTXML *phReference
    );
_Success_( return == 0 )
HRESULT
WINAPI
CryptXmlDigestReference(
    _In_ HCRYPTXML hReference,
                    DWORD dwFlags,
    _In_ CRYPT_XML_DATA_PROVIDER *pDataProviderIn
    );
_Success_( return == 0 )
HRESULT
WINAPI
CryptXmlSetHMACSecret(
    _In_ HCRYPTXML hSignature,
    _In_reads_bytes_( cbSecret )
                    const BYTE *pbSecret,
                    ULONG cbSecret
    );
typedef struct _CRYPT_XML_KEYINFO_PARAM
{
    LPCWSTR wszId;
    LPCWSTR wszKeyName;
    CERT_BLOB SKI;
    LPCWSTR wszSubjectName;
    ULONG cCertificate;
    _Field_size_(cCertificate)
    CERT_BLOB *rgCertificate;
    ULONG cCRL;
    _Field_size_(cCRL)
    CERT_BLOB *rgCRL;
}CRYPT_XML_KEYINFO_PARAM;
typedef enum
{
    CRYPT_XML_KEYINFO_SPEC_NONE = 0,
    CRYPT_XML_KEYINFO_SPEC_ENCODED = 1,
    CRYPT_XML_KEYINFO_SPEC_PARAM = 2,
}CRYPT_XML_KEYINFO_SPEC;
_Success_( return == 0 )
HRESULT
WINAPI
CryptXmlSign(
    _In_ HCRYPTXML hSignature,
    _In_opt_ HCRYPTPROV_OR_NCRYPT_KEY_HANDLE hKey,
                    DWORD dwKeySpec,
                    DWORD dwFlags,
                    CRYPT_XML_KEYINFO_SPEC dwKeyInfoSpec,
    _In_opt_ const void *pvKeyInfoSpec,
    _In_ const CRYPT_XML_ALGORITHM *pSignatureMethod,
    _In_ const CRYPT_XML_ALGORITHM *pCanonicalization
    );
_Success_( return == 0 )
HRESULT
WINAPI
CryptXmlImportPublicKey(
                    DWORD dwFlags,
    _In_ const CRYPT_XML_KEY_VALUE *pKeyValue,
    _Out_ BCRYPT_KEY_HANDLE *phKey
    );
_Success_( return == 0 )
HRESULT
WINAPI
CryptXmlVerifySignature(
    _In_ HCRYPTXML hSignature,
    _In_opt_ BCRYPT_KEY_HANDLE hKey,
                    DWORD dwFlags
    );
_Success_( return == 0 )
HRESULT
WINAPI
CryptXmlGetDocContext(
    _In_ HCRYPTXML hCryptXml,
    _Outptr_ const CRYPT_XML_DOC_CTXT **ppStruct
    );
_Success_( return == 0 )
HRESULT
WINAPI
CryptXmlGetSignature(
    _In_ HCRYPTXML hCryptXml,
    _Outptr_ const CRYPT_XML_SIGNATURE **ppStruct
    );
_Success_( return == 0 )
HRESULT
WINAPI
CryptXmlGetReference(
    _In_ HCRYPTXML hCryptXml,
    _Outptr_ const CRYPT_XML_REFERENCE **ppStruct
    );
_Success_( return == 0 )
HRESULT
WINAPI
CryptXmlGetStatus(
    _In_ HCRYPTXML hCryptXml,
    _Out_ CRYPT_XML_STATUS *pStatus
    );
_Success_( return == 0 )
HRESULT
WINAPI
CryptXmlEncode(
    _In_ HCRYPTXML hCryptXml,
                    CRYPT_XML_CHARSET dwCharset,
    _In_reads_opt_(cProperty)
                    const CRYPT_XML_PROPERTY* rgProperty,
    _In_ ULONG cProperty,
    _Inout_ void *pvCallbackState,
    _In_ PFN_CRYPT_XML_WRITE_CALLBACK pfnWrite
    );
typedef
struct _CRYPT_XML_ALGORITHM_INFO
{
    DWORD cbSize;
    WCHAR *wszAlgorithmURI;
    WCHAR *wszName;
    DWORD dwGroupId;
    WCHAR *wszCNGAlgid;
    WCHAR *wszCNGExtraAlgid;
    DWORD dwSignFlags;
    DWORD dwVerifyFlags;
    void *pvPaddingInfo;
    void *pvExtraInfo;
}CRYPT_XML_ALGORITHM_INFO, *PCRYPT_XML_ALGORITHM_INFO;
_Success_( return == 0 )
HRESULT
WINAPI
CryptXmlGetAlgorithmInfo(
    _In_ const CRYPT_XML_ALGORITHM *pXmlAlgorithm,
                    DWORD dwFlags,
    _Outptr_ CRYPT_XML_ALGORITHM_INFO **ppAlgInfo
    );
const CRYPT_XML_ALGORITHM_INFO*
WINAPI
CryptXmlFindAlgorithmInfo(
    _In_ DWORD dwFindByType,
    _In_ const void *pvFindBy,
    _In_ DWORD dwGroupId,
                    DWORD dwFlags
    );
typedef BOOL (WINAPI * PFN_CRYPT_XML_ENUM_ALG_INFO)(
    _In_ const CRYPT_XML_ALGORITHM_INFO *pInfo,
    _Inout_opt_ void *pvArg
    );
_Success_( return == 0 )
HRESULT
WINAPI
CryptXmlEnumAlgorithmInfo(
    _In_ DWORD dwGroupId,
    _In_ DWORD dwFlags,
    _Inout_opt_ void *pvArg,
    __callback PFN_CRYPT_XML_ENUM_ALG_INFO pfnEnumAlgInfo
    );
typedef
_Success_( return == 0 )
HRESULT
(WINAPI *CryptXmlDllGetInterface)(
                    DWORD dwFlags,
    _In_ const CRYPT_XML_ALGORITHM_INFO *pMethod,
    _Out_ CRYPT_XML_CRYPTOGRAPHIC_INTERFACE *pInterface
    );
typedef
_Success_( return == 0 )
HRESULT
(WINAPI *CryptXmlDllEncodeAlgorithm)(
    _In_ const CRYPT_XML_ALGORITHM_INFO *pAlgInfo,
                    CRYPT_XML_CHARSET dwCharset,
    _Inout_ void *pvCallbackState,
    _In_ PFN_CRYPT_XML_WRITE_CALLBACK pfnWrite
    );
typedef void* CRYPT_XML_DIGEST;
typedef
_Success_( return == 0 )
HRESULT
(WINAPI *CryptXmlDllCreateDigest)(
    _In_ const CRYPT_XML_ALGORITHM *pDigestMethod,
    _Out_range_( 0, CRYPT_XML_DIGEST_VALUE_MAX )
                    ULONG *pcbSize,
    _Out_ CRYPT_XML_DIGEST *phDigest
    );
typedef
_Success_( return == 0 )
HRESULT
(WINAPI *CryptXmlDllDigestData)(
    _In_ CRYPT_XML_DIGEST hDigest,
    _In_reads_bytes_(cbData)
              const BYTE *pbData,
              ULONG cbData
    );
typedef
_Success_( return == 0 )
HRESULT
(WINAPI *CryptXmlDllFinalizeDigest)(
    _In_ CRYPT_XML_DIGEST hDigest,
    _Out_writes_bytes_(cbDigest)
                    BYTE *pbDigest,
                    ULONG cbDigest
    );
typedef
_Success_( return == 0 )
HRESULT
(WINAPI *CryptXmlDllCloseDigest)(
    _In_ CRYPT_XML_DIGEST hDigest
    );
typedef
_Success_( return == 0 )
HRESULT
(WINAPI *CryptXmlDllSignData)(
    _In_ const CRYPT_XML_ALGORITHM *pSignatureMethod,
    _In_ HCRYPTPROV_OR_NCRYPT_KEY_HANDLE hCryptProvOrNCryptKey,
    _In_ DWORD dwKeySpec,
    _In_reads_bytes_(cbInput)
                    const BYTE *pbInput,
    _In_ ULONG cbInput,
    _Out_writes_bytes_to_opt_(cbOutput, *pcbResult)
                    BYTE *pbOutput,
    _In_ ULONG cbOutput,
    _Out_range_( 0, cbOutput )
                    ULONG *pcbResult
    );
typedef
_Success_( return == 0 )
HRESULT
(WINAPI *CryptXmlDllVerifySignature)(
    _In_ const CRYPT_XML_ALGORITHM *pSignatureMethod,
    _In_ BCRYPT_KEY_HANDLE hKey,
    _In_reads_bytes_(cbInput)
                    const BYTE *pbInput,
    _In_ ULONG cbInput,
    _In_reads_bytes_(cbSignature)
                    const BYTE *pbSignature,
    _In_ ULONG cbSignature
    );
typedef
_Success_( return == 0 )
HRESULT
(WINAPI *CryptXmlDllGetAlgorithmInfo)(
    _In_ const CRYPT_XML_ALGORITHM *pXmlAlgorithm,
    _Outptr_ CRYPT_XML_ALGORITHM_INFO **ppAlgInfo
    );
typedef struct _CRYPT_XML_CRYPTOGRAPHIC_INTERFACE{
    ULONG cbSize;
    CryptXmlDllEncodeAlgorithm fpCryptXmlEncodeAlgorithm;
    CryptXmlDllCreateDigest fpCryptXmlCreateDigest;
    CryptXmlDllDigestData fpCryptXmlDigestData;
    CryptXmlDllFinalizeDigest fpCryptXmlFinalizeDigest;
    CryptXmlDllCloseDigest fpCryptXmlCloseDigest;
    CryptXmlDllSignData fpCryptXmlSignData;
    CryptXmlDllVerifySignature fpCryptXmlVerifySignature;
    CryptXmlDllGetAlgorithmInfo fpCryptXmlGetAlgorithmInfo;
}CRYPT_XML_CRYPTOGRAPHIC_INTERFACE, *PCRYPT_XML_CRYPTOGRAPHIC_INTERFACE;
typedef
_Success_( return == 0 )
HRESULT
(WINAPI * CryptXmlDllEncodeKeyValue)(
    _In_ NCRYPT_KEY_HANDLE hKey,
                    CRYPT_XML_CHARSET dwCharset,
    _Inout_ void *pvCallbackState,
    _In_ PFN_CRYPT_XML_WRITE_CALLBACK pfnWrite
    );
typedef
_Success_( return == 0 )
HRESULT
(WINAPI * CryptXmlDllCreateKey)(
    _In_ const CRYPT_XML_BLOB *pEncoded,
    _Out_ BCRYPT_KEY_HANDLE *phKey
    );
}
#endif
#pragma endregion
