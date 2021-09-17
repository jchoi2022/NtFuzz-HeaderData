#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef unsigned int ALG_ID;
typedef struct _CERTIFICATE_BLOB {
    DWORD dwCertEncodingType;
    [range(0,32768)]
    DWORD cbData;
    [size_is(cbData)]
    PBYTE pbData;
} EFS_CERTIFICATE_BLOB, *PEFS_CERTIFICATE_BLOB;
typedef struct _EFS_HASH_BLOB {
    [range(0,100)]
    DWORD cbData;
    [size_is(cbData)]
    PBYTE pbData;
} EFS_HASH_BLOB, *PEFS_HASH_BLOB;
typedef struct _EFS_RPC_BLOB {
    [range(0,266240)]
    DWORD cbData;
    [size_is(cbData)]
    PBYTE pbData;
} EFS_RPC_BLOB, *PEFS_RPC_BLOB;
typedef struct _EFS_PIN_BLOB {
    [range(0,8)]
    DWORD cbPadding;
    [range(0,2048)]
    DWORD cbData;
    [size_is(cbData+cbPadding)]
    PBYTE pbData;
} EFS_PIN_BLOB, *PEFS_PIN_BLOB;
typedef struct _EFS_KEY_INFO {
    DWORD dwVersion;
    ULONG Entropy;
    ALG_ID Algorithm;
    ULONG KeyLength;
} EFS_KEY_INFO, *PEFS_KEY_INFO;
typedef struct _EFS_COMPATIBILITY_INFO {
    DWORD EfsVersion;
} EFS_COMPATIBILITY_INFO, *PEFS_COMPATIBILITY_INFO;
    ( (__v == EFS_COMPATIBILITY_VERSION_NCRYPT_PROTECTOR) || \
      (__v == EFS_COMPATIBILITY_VERSION_PFILE_PROTECTOR) )
typedef struct _EFS_VERSION_INFO {
    DWORD EfsVersion;
    DWORD SubVersion;
} EFS_VERSION_INFO, *PEFS_VERSION_INFO;
    ( (__v == EFS_COMPATIBILITY_VERSION_PFILE_PROTECTOR) && \
      (__subV == EFS_PFILE_SUBVER_APPX) )
typedef struct _EFS_DECRYPTION_STATUS_INFO {
    DWORD dwDecryptionError;
    DWORD dwHashOffset;
    DWORD cbHash;
} EFS_DECRYPTION_STATUS_INFO, *PEFS_DECRYPTION_STATUS_INFO;
typedef struct _EFS_ENCRYPTION_STATUS_INFO {
    BOOL bHasCurrentKey;
    DWORD dwEncryptionError;
} EFS_ENCRYPTION_STATUS_INFO, *PEFS_ENCRYPTION_STATUS_INFO;
typedef struct _ENCRYPTION_CERTIFICATE {
    DWORD cbTotalLength;
    SID * pUserSid;
    PEFS_CERTIFICATE_BLOB pCertBlob;
} ENCRYPTION_CERTIFICATE, *PENCRYPTION_CERTIFICATE;
typedef struct _ENCRYPTION_CERTIFICATE_HASH {
    DWORD cbTotalLength;
    SID * pUserSid;
    PEFS_HASH_BLOB pHash;
    [string]
    LPWSTR lpDisplayInformation;
} ENCRYPTION_CERTIFICATE_HASH, *PENCRYPTION_CERTIFICATE_HASH;
typedef struct _ENCRYPTION_CERTIFICATE_HASH_LIST {
    [range(0,500)]
    DWORD nCert_Hash;
    [size_is(nCert_Hash)]
     PENCRYPTION_CERTIFICATE_HASH * pUsers;
} ENCRYPTION_CERTIFICATE_HASH_LIST, *PENCRYPTION_CERTIFICATE_HASH_LIST;
typedef struct _ENCRYPTION_CERTIFICATE_LIST {
    [range(0,500)]
    DWORD nUsers;
    [size_is(nUsers)]
     PENCRYPTION_CERTIFICATE * pUsers;
} ENCRYPTION_CERTIFICATE_LIST, *PENCRYPTION_CERTIFICATE_LIST;
typedef struct _ENCRYPTED_FILE_METADATA_SIGNATURE {
 DWORD dwEfsAccessType;
 PENCRYPTION_CERTIFICATE_HASH_LIST pCertificatesAdded;
    PENCRYPTION_CERTIFICATE pEncryptionCertificate;
    PEFS_RPC_BLOB pEfsStreamSignature;
} ENCRYPTED_FILE_METADATA_SIGNATURE, *PENCRYPTED_FILE_METADATA_SIGNATURE;
typedef struct _ENCRYPTION_PROTECTOR{
    DWORD cbTotalLength;
    SID * pUserSid;
    [string]
    LPWSTR lpProtectorDescriptor;
} ENCRYPTION_PROTECTOR, *PENCRYPTION_PROTECTOR;
typedef struct _ENCRYPTION_PROTECTOR_LIST {
    DWORD nProtectors;
    [size_is(nProtectors)]
    PENCRYPTION_PROTECTOR *pProtectors;
} ENCRYPTION_PROTECTOR_LIST, *PENCRYPTION_PROTECTOR_LIST;
WINADVAPI
DWORD
WINAPI
QueryUsersOnEncryptedFile(
    _In_ LPCWSTR lpFileName,
    _Outptr_ PENCRYPTION_CERTIFICATE_HASH_LIST *pUsers
    );
WINADVAPI
DWORD
WINAPI
QueryRecoveryAgentsOnEncryptedFile(
    _In_ LPCWSTR lpFileName,
    _Outptr_ PENCRYPTION_CERTIFICATE_HASH_LIST *pRecoveryAgents
    );
WINADVAPI
DWORD
WINAPI
RemoveUsersFromEncryptedFile(
    _In_ LPCWSTR lpFileName,
    _In_ PENCRYPTION_CERTIFICATE_HASH_LIST pHashes
    );
WINADVAPI
DWORD
WINAPI
AddUsersToEncryptedFile(
    _In_ LPCWSTR lpFileName,
    _In_ PENCRYPTION_CERTIFICATE_LIST pEncryptionCertificates
    );
WINADVAPI
DWORD
WINAPI
SetUserFileEncryptionKey(
    _In_opt_ PENCRYPTION_CERTIFICATE pEncryptionCertificate
    );
WINADVAPI
DWORD
WINAPI
SetUserFileEncryptionKeyEx(
    _In_opt_ PENCRYPTION_CERTIFICATE pEncryptionCertificate,
                    DWORD dwCapabilities,
                    DWORD dwFlags,
    _Reserved_ LPVOID pvReserved
    );
WINADVAPI
VOID
WINAPI
FreeEncryptionCertificateHashList(
    _In_ PENCRYPTION_CERTIFICATE_HASH_LIST pUsers
    );
WINADVAPI
BOOL
WINAPI
EncryptionDisable(
    _In_ LPCWSTR DirPath,
         BOOL Disable
    );
WINADVAPI
DWORD
WINAPI
DuplicateEncryptionInfoFile(
     _In_ LPCWSTR SrcFileName,
     _In_ LPCWSTR DstFileName,
                DWORD dwCreationDistribution,
                DWORD dwAttributes,
     _In_opt_ CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes
     );
__declspec(deprecated)
WINADVAPI
DWORD
WINAPI
GetEncryptedFileMetadata(
    _In_ LPCWSTR lpFileName,
    _Out_ PDWORD pcbMetadata,
    _Outptr_result_bytebuffer_(*pcbMetadata) PBYTE *ppbMetadata
    );
__declspec(deprecated)
WINADVAPI
DWORD
WINAPI
SetEncryptedFileMetadata(
    _In_ LPCWSTR lpFileName,
    _In_opt_ PBYTE pbOldMetadata,
    _In_ PBYTE pbNewMetadata,
    _In_ PENCRYPTION_CERTIFICATE_HASH pOwnerHash,
                DWORD dwOperation,
    _In_opt_ PENCRYPTION_CERTIFICATE_HASH_LIST pCertificatesAdded
    );
__declspec(deprecated)
WINADVAPI
VOID
WINAPI
FreeEncryptedFileMetadata(
    _In_ PBYTE pbMetadata
    );
#endif
#pragma endregion
}
