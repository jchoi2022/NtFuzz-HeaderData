extern "C" {
#pragma region App Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
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
typedef struct _CRYPTPROTECT_PROMPTSTRUCT
{
    DWORD cbSize;
    DWORD dwPromptFlags;
    HWND hwndApp;
    LPCWSTR szPrompt;
} CRYPTPROTECT_PROMPTSTRUCT, *PCRYPTPROTECT_PROMPTSTRUCT;
DPAPI_IMP
BOOL
WINAPI
CryptProtectData(
    _In_ DATA_BLOB* pDataIn,
    _In_opt_ LPCWSTR szDataDescr,
    _In_opt_ DATA_BLOB* pOptionalEntropy,
    _Reserved_ PVOID pvReserved,
    _In_opt_ CRYPTPROTECT_PROMPTSTRUCT* pPromptStruct,
    _In_ DWORD dwFlags,
    _Out_ DATA_BLOB* pDataOut
    );
DPAPI_IMP
BOOL
WINAPI
CryptUnprotectData(
    _In_ DATA_BLOB* pDataIn,
    _Outptr_opt_result_maybenull_ LPWSTR* ppszDataDescr,
    _In_opt_ DATA_BLOB* pOptionalEntropy,
    _Reserved_ PVOID pvReserved,
    _In_opt_ CRYPTPROTECT_PROMPTSTRUCT* pPromptStruct,
    _In_ DWORD dwFlags,
    _Out_ DATA_BLOB* pDataOut
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
BOOL
WINAPI
CryptProtectDataNoUI(
    _In_ DATA_BLOB* pDataIn,
    _In_opt_ LPCWSTR szDataDescr,
    _In_opt_ DATA_BLOB* pOptionalEntropy,
    _Reserved_ PVOID pvReserved,
    _In_opt_ CRYPTPROTECT_PROMPTSTRUCT* pPromptStruct,
    _In_ DWORD dwFlags,
    _In_reads_bytes_opt_(cbOptionalPassword)
                    const BYTE *pbOptionalPassword,
                    DWORD cbOptionalPassword,
    _Out_ DATA_BLOB* pDataOut
    );
BOOL
WINAPI
CryptUnprotectDataNoUI(
    _In_ DATA_BLOB* pDataIn,
    _Outptr_opt_result_maybenull_ LPWSTR* ppszDataDescr,
    _In_opt_ DATA_BLOB* pOptionalEntropy,
    _Reserved_ PVOID pvReserved,
    _In_opt_ CRYPTPROTECT_PROMPTSTRUCT* pPromptStruct,
    _In_ DWORD dwFlags,
    _In_reads_bytes_opt_(cbOptionalPassword)
                    const BYTE *pbOptionalPassword,
                    DWORD cbOptionalPassword,
    _Out_ DATA_BLOB* pDataOut
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
DPAPI_IMP
BOOL
WINAPI
CryptUpdateProtectedState(
    _In_opt_ PSID pOldSid,
    _In_opt_ LPCWSTR pwszOldPassword,
    _In_ DWORD dwFlags,
    _Out_opt_ DWORD *pdwSuccessCount,
    _Out_opt_ DWORD *pdwFailureCount);
#endif
#pragma endregion
#pragma region App Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
DPAPI_IMP
BOOL
WINAPI
CryptProtectMemory(
    _Inout_ LPVOID pDataIn,
    _In_ DWORD cbDataIn,
    _In_ DWORD dwFlags
    );
DPAPI_IMP
BOOL
WINAPI
CryptUnprotectMemory(
    _Inout_ LPVOID pDataIn,
    _In_ DWORD cbDataIn,
    _In_ DWORD dwFlags
    );
#endif
#pragma endregion
}
