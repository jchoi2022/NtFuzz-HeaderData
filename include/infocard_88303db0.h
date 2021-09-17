       
#include <assert.h>
#include <stdlib.h>
#include <windows.h>
#include <wincrypt.h>
extern "C" {
typedef enum _HandleType
{
    Asymmetric = 1,
    Symmetric = 2,
    Transform = 3,
    Hash = 4
} HandleType;
typedef enum _PaddingMode
{
    None = 1,
    PKCS7 = 2,
    Zeros = 3,
    ANSIX923 = 4,
    ISO10126 = 5
} PaddingMode;
typedef enum _Direction
{
    DirectionEncrypt = 1,
    DirectionDecrypt = 2
} Direction;
typedef struct _INFORMATIONCARD_ASYMMETRIC_CRYPTO_PARAMETERS
{
    int keySize;
    LPWSTR keyExchangeAlgorithm;
    LPWSTR signatureAlgorithm;
} INFORMATIONCARD_ASYMMETRIC_CRYPTO_PARAMETERS, *PINFORMATIONCARD_ASYMMETRIC_CRYPTO_PARAMETERS;
typedef struct _INFORMATIONCARD_SYMMETRIC_CRYPTO_PARAMETERS
{
    int keySize;
    int blockSize;
    int feedbackSize;
} INFORMATIONCARD_SYMMETRIC_CRYPTO_PARAMETERS, *PINFORMATIONCARD_SYMMETRIC_CRYPTO_PARAMETERS;
typedef struct _INFORMATIONCARD_TRANSFORM_CRYPTO_PARAMETERS
{
    int inputBlockSize;
    int outputBlockSize;
    BOOL canTransformMultipleBlocks;
    BOOL canReuseTransform;
} INFORMATIONCARD_TRANSFORM_CRYPTO_PARAMETERS, *PINFORMATIONCARD_TRANSFORM_CRYPTO_PARAMETERS;
typedef struct _INFORMATIONCARD_HASH_CRYPTO_PARAMETERS
{
    int hashSize;
    INFORMATIONCARD_TRANSFORM_CRYPTO_PARAMETERS transform;
} INFORMATIONCARD_HASH_CRYPTO_PARAMETERS, *PINFORMATIONCARD_HASH_CRYPTO_PARAMETERS;
typedef struct _INFORMATIONCARD_CRYPTO_HANDLE
{
    HandleType type;
    LONGLONG expiration;
    PVOID cryptoParameters;
} INFORMATIONCARD_CRYPTO_HANDLE, *PINFORMATIONCARD_CRYPTO_HANDLE;
#pragma pack(1)
typedef struct _GENERIC_XML_TOKEN
{
    FILETIME createDate;
    FILETIME expiryDate;
    LPWSTR xmlToken;
    LPWSTR internalTokenReference;
    LPWSTR externalTokenReference;
} GENERIC_XML_TOKEN,*PGENERIC_XML_TOKEN;
#pragma pack()
typedef struct _POLICY_ELEMENT
{
    LPCWSTR targetEndpointAddress;
    LPCWSTR issuerEndpointAddress;
    LPCWSTR issuedTokenParameters;
    LPCWSTR privacyNoticeLink;
    DWORD privacyNoticeVersion;
    BOOL useManagedPresentation;
} POLICY_ELEMENT, *PPOLICY_ELEMENT;
typedef struct _ENDPOINTADDRESS
{
    LPCWSTR serviceUrl;
    LPCWSTR policyUrl;
    DATA_BLOB rawCertificate;
}ENDPOINTADDRESS, *PENDPOINTADDRESS;
typedef struct _ENDPOINTADDRESS2
{
    LPCWSTR serviceUrl;
    LPCWSTR policyUrl;
    DWORD identityType;
    PVOID identityBytes;
}ENDPOINTADDRESS2, *PENDPOINTADDRESS2;
typedef struct _CERTIFICATE_CHAIN_BLOB
{
    DWORD certCount;
    DATA_BLOB* rawCertificates;
}CERTIFICATE_CHAIN_BLOB, *PCERTIFICATE_CHAIN_BLOB;
typedef struct _CLAIMLIST
{
    DWORD count;
    LPCWSTR* claims;
}CLAIMLIST, *PCLAIMLIST;
typedef struct _RECIPIENTPOLICY
{
    ENDPOINTADDRESS recipient;
    ENDPOINTADDRESS issuer;
    LPCWSTR tokenType;
    CLAIMLIST requiredClaims;
    CLAIMLIST optionalClaims;
    LPCWSTR privacyUrl;
    UINT privacyVersion;
}RECIPIENTPOLICY, *PRECIPIENTPOLICY;
typedef struct _RECIPIENTPOLICY2
{
    ENDPOINTADDRESS2 recipient;
    ENDPOINTADDRESS2 issuer;
    LPCWSTR tokenType;
    CLAIMLIST requiredClaims;
    CLAIMLIST optionalClaims;
    LPCWSTR privacyUrl;
    UINT privacyVersion;
}RECIPIENTPOLICY2, *PRECIPIENTPOLICY2;
HRESULT
CARDSPACECALL GetToken(
        __in DWORD cPolicyChain,
        __in_ecount( cPolicyChain ) PPOLICY_ELEMENT pPolicyChain,
        __deref_out PGENERIC_XML_TOKEN* securityToken,
        __deref_out PINFORMATIONCARD_CRYPTO_HANDLE* phProofTokenCrypto );
HRESULT
CARDSPACECALL
ManageCardSpace();
HRESULT
CARDSPACECALL
ImportInformationCard( __in LPCWSTR fileName );
HRESULT
CARDSPACECALL Encrypt(
                      __in PINFORMATIONCARD_CRYPTO_HANDLE hCrypto,
                      __in BOOL fOAEP,
                      __in DWORD cbInData,
                      __in_bcount( cbInData ) PBYTE pInData,
                      __out DWORD *pcbOutData,
                      __out_bcount( *pcbOutData ) PBYTE* ppOutData );
HRESULT
CARDSPACECALL Decrypt(
                      __in PINFORMATIONCARD_CRYPTO_HANDLE hCrypto,
                      __in BOOL fOAEP,
                      __in DWORD cbInData,
                      __in_bcount( cbInData )PBYTE pInData,
                      __out DWORD* pcbOutData,
                      __out_bcount( *pcbOutData ) PBYTE* ppOutData );
HRESULT
CARDSPACECALL SignHash(
                       __in PINFORMATIONCARD_CRYPTO_HANDLE hCrypto,
                       __in DWORD cbHash,
                       __in_bcount( cbHash ) PBYTE pHash,
                       __in LPCWSTR hashAlgOid,
                       __out DWORD* pcbSig,
                       __out_bcount( *pcbSig ) PBYTE* ppSig );
HRESULT
CARDSPACECALL VerifyHash(
                         __in PINFORMATIONCARD_CRYPTO_HANDLE hCrypto,
                         __in DWORD cbHash,
                         __in_bcount( cbHash ) BYTE* pHash,
                         __in LPCWSTR hashAlgOid,
                         __in DWORD cbSig,
                         __in_bcount( cbSig ) BYTE* pSig,
                         __out BOOL* pfVerified );
HRESULT
CARDSPACECALL GetCryptoTransform(
                         __in PINFORMATIONCARD_CRYPTO_HANDLE hSymmetricCrypto,
                         __in DWORD mode,
                         __in PaddingMode padding,
                         __in DWORD feedbackSize,
                         __in Direction direction,
                         __in DWORD cbIV,
                         __in_bcount( cbIV ) BYTE* pIV,
                         __deref_out PINFORMATIONCARD_CRYPTO_HANDLE* pphTransform );
HRESULT
CARDSPACECALL GetKeyedHash(
                         __in PINFORMATIONCARD_CRYPTO_HANDLE hSymmetricCrypto,
                         __deref_out PINFORMATIONCARD_CRYPTO_HANDLE* pphHash );
HRESULT
CARDSPACECALL TransformBlock(
                       __in PINFORMATIONCARD_CRYPTO_HANDLE hCrypto,
                       __in DWORD cbInData,
                       __in_bcount( cbInData ) PBYTE pInData,
                       __out DWORD* pcbOutData,
                       __out_bcount( *pcbOutData ) PBYTE* ppOutData );
HRESULT
CARDSPACECALL TransformFinalBlock(
                       __in PINFORMATIONCARD_CRYPTO_HANDLE hCrypto,
                       __in DWORD cbInData,
                       __in_bcount( cbInData ) PBYTE pInData,
                       __out DWORD* pcbOutData,
                       __out_bcount( *pcbOutData ) PBYTE* ppOutData );
HRESULT
CARDSPACECALL HashCore(
                       __in PINFORMATIONCARD_CRYPTO_HANDLE hCrypto,
                       __in DWORD cbInData,
                       __in_bcount( cbInData ) PBYTE pInData );
HRESULT
CARDSPACECALL HashFinal(
                       __in PINFORMATIONCARD_CRYPTO_HANDLE hCrypto,
                       __in DWORD cbInData,
                       __in_bcount( cbInData ) PBYTE pInData,
                       __out DWORD* pcbOutData,
                       __out_bcount( *pcbOutData ) PBYTE* ppOutData );
BOOL
CARDSPACECALL FreeToken( __in PGENERIC_XML_TOKEN pAllocMemory );
HRESULT
CARDSPACECALL CloseCryptoHandle( __in PINFORMATIONCARD_CRYPTO_HANDLE hCrypto );
HRESULT
CARDSPACECALL GenerateDerivedKey(
                       __in PINFORMATIONCARD_CRYPTO_HANDLE hCrypto,
                       __in DWORD cbLabel,
                       __in_bcount( cbLabel ) PBYTE pLabel,
                       __in DWORD cbNonce,
                       __in_bcount( cbNonce ) PBYTE pNonce,
                       __in DWORD derivedKeyLength,
                       __in DWORD offset,
                       __in LPCWSTR algId,
                       __out DWORD* pcbKey,
                       __out_bcount( *pcbKey ) PBYTE* ppKey );
HRESULT
CARDSPACECALL GetBrowserToken(
                    __in DWORD dwParamType,
                    __in PVOID pParam,
                    __out_opt DWORD* pcbToken,
                    __out_bcount_opt(*pcbToken) PBYTE* ppToken );
}
