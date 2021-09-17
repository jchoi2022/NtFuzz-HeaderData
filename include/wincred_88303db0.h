#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
typedef struct _SecHandle
{
    ULONG_PTR dwLower ;
    ULONG_PTR dwUpper ;
} SecHandle, * PSecHandle ;
typedef PSecHandle PCtxtHandle;
typedef struct _FILETIME
    {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
    } FILETIME;
typedef struct _FILETIME *PFILETIME;
typedef struct _FILETIME *LPFILETIME;
typedef _Return_type_success_(return >= 0) LONG NTSTATUS, *PNTSTATUS;
        (_Status) == ERROR_LOGON_FAILURE || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_LOGON_FAILURE ) || \
        (_Status) == STATUS_LOGON_FAILURE || \
        (_Status) == HRESULT_FROM_NT( STATUS_LOGON_FAILURE ) || \
        (_Status) == ERROR_ACCESS_DENIED || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_ACCESS_DENIED ) || \
        (_Status) == STATUS_ACCESS_DENIED || \
        (_Status) == HRESULT_FROM_NT( STATUS_ACCESS_DENIED ) || \
        (_Status) == ERROR_INVALID_PASSWORD || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_INVALID_PASSWORD ) || \
        (_Status) == STATUS_WRONG_PASSWORD || \
        (_Status) == HRESULT_FROM_NT( STATUS_WRONG_PASSWORD ) || \
        (_Status) == STATUS_NO_SUCH_USER || \
        (_Status) == HRESULT_FROM_NT( STATUS_NO_SUCH_USER ) || \
        (_Status) == ERROR_NO_SUCH_USER || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_NO_SUCH_USER ) || \
        (_Status) == ERROR_NO_SUCH_LOGON_SESSION || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_NO_SUCH_LOGON_SESSION ) || \
        (_Status) == STATUS_NO_SUCH_LOGON_SESSION || \
        (_Status) == HRESULT_FROM_NT( STATUS_NO_SUCH_LOGON_SESSION ) || \
        (_Status) == SEC_E_NO_CREDENTIALS || \
        (_Status) == SEC_E_LOGON_DENIED || \
        (_Status) == SEC_E_NO_CONTEXT || \
        (_Status) == STATUS_NO_SECURITY_CONTEXT )
        (_Status) == ERROR_DOWNGRADE_DETECTED || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_DOWNGRADE_DETECTED ) || \
        (_Status) == STATUS_DOWNGRADE_DETECTED || \
        (_Status) == HRESULT_FROM_NT( STATUS_DOWNGRADE_DETECTED ) || \
        (_Status) == SEC_E_DOWNGRADE_DETECTED \
)
        (_Status) == ERROR_PASSWORD_EXPIRED || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_PASSWORD_EXPIRED ) || \
        (_Status) == STATUS_PASSWORD_EXPIRED || \
        (_Status) == HRESULT_FROM_NT( STATUS_PASSWORD_EXPIRED ) || \
        (_Status) == ERROR_PASSWORD_MUST_CHANGE || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_PASSWORD_MUST_CHANGE ) || \
        (_Status) == STATUS_PASSWORD_MUST_CHANGE || \
        (_Status) == HRESULT_FROM_NT( STATUS_PASSWORD_MUST_CHANGE ) || \
        (_Status) == NERR_PasswordExpired || \
        (_Status) == __HRESULT_FROM_WIN32( NERR_PasswordExpired ) \
)
        CREDUIP_IS_USER_PASSWORD_ERROR( _Status ) || \
        CREDUIP_IS_DOWNGRADE_ERROR( _Status ) || \
        CREDUIP_IS_EXPIRED_ERROR( _Status ) \
)
        (_Status) == ERROR_AUTHENTICATION_FIREWALL_FAILED || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_AUTHENTICATION_FIREWALL_FAILED ) || \
        (_Status) == STATUS_AUTHENTICATION_FIREWALL_FAILED || \
        (_Status) == HRESULT_FROM_NT( STATUS_AUTHENTICATION_FIREWALL_FAILED ) || \
        (_Status) == ERROR_ACCOUNT_DISABLED || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_ACCOUNT_DISABLED ) || \
        (_Status) == STATUS_ACCOUNT_DISABLED || \
        (_Status) == HRESULT_FROM_NT( STATUS_ACCOUNT_DISABLED ) || \
        (_Status) == ERROR_ACCOUNT_RESTRICTION || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_ACCOUNT_RESTRICTION ) || \
        (_Status) == STATUS_ACCOUNT_RESTRICTION || \
        (_Status) == HRESULT_FROM_NT( STATUS_ACCOUNT_RESTRICTION ) || \
        (_Status) == ERROR_ACCOUNT_LOCKED_OUT || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_ACCOUNT_LOCKED_OUT ) || \
        (_Status) == STATUS_ACCOUNT_LOCKED_OUT || \
        (_Status) == HRESULT_FROM_NT( STATUS_ACCOUNT_LOCKED_OUT ) || \
        (_Status) == ERROR_ACCOUNT_EXPIRED || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_ACCOUNT_EXPIRED ) || \
        (_Status) == STATUS_ACCOUNT_EXPIRED || \
        (_Status) == HRESULT_FROM_NT( STATUS_ACCOUNT_EXPIRED ) || \
        (_Status) == ERROR_LOGON_TYPE_NOT_GRANTED || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_LOGON_TYPE_NOT_GRANTED ) || \
        (_Status) == STATUS_LOGON_TYPE_NOT_GRANTED || \
        (_Status) == HRESULT_FROM_NT( STATUS_LOGON_TYPE_NOT_GRANTED ) \
)
typedef struct _CREDENTIAL_ATTRIBUTEA {
    LPSTR Keyword;
    DWORD Flags;
    DWORD ValueSize;
    LPBYTE Value;
} CREDENTIAL_ATTRIBUTEA, *PCREDENTIAL_ATTRIBUTEA;
typedef struct _CREDENTIAL_ATTRIBUTEW {
    [string] wchar_t * Keyword;
    DWORD Flags;
    [range(0,CRED_MAX_VALUE_SIZE)]
    DWORD ValueSize;
    [size_is(ValueSize)]
    LPBYTE Value;
} CREDENTIAL_ATTRIBUTEW, *PCREDENTIAL_ATTRIBUTEW;
typedef CREDENTIAL_ATTRIBUTEW CREDENTIAL_ATTRIBUTE;
typedef PCREDENTIAL_ATTRIBUTEW PCREDENTIAL_ATTRIBUTE;
typedef struct _CREDENTIALA {
    DWORD Flags;
    DWORD Type;
    LPSTR TargetName;
    LPSTR Comment;
    FILETIME LastWritten;
    DWORD CredentialBlobSize;
    _Field_size_bytes_(CredentialBlobSize) LPBYTE CredentialBlob;
    DWORD Persist;
    DWORD AttributeCount;
    PCREDENTIAL_ATTRIBUTEA Attributes;
    LPSTR TargetAlias;
    LPSTR UserName;
} CREDENTIALA, *PCREDENTIALA;
typedef struct _CREDENTIALW {
    DWORD Flags;
    DWORD Type;
    [string,max_is(CRED_MAX_GENERIC_TARGET_NAME_LENGTH-1)] wchar_t *TargetName;
    [string,max_is(CRED_MAX_STRING_LENGTH-1)] wchar_t *Comment;
    FILETIME LastWritten;
    [range(0,CRED_MAX_CREDENTIAL_BLOB_SIZE)]
    DWORD CredentialBlobSize;
    [size_is(CredentialBlobSize)]
    LPBYTE CredentialBlob;
    DWORD Persist;
    [range(0,CRED_MAX_ATTRIBUTES)]
    DWORD AttributeCount;
    [size_is(AttributeCount)]
    PCREDENTIAL_ATTRIBUTEW Attributes;
    [string,max_is(CRED_MAX_STRING_LENGTH-1)] wchar_t *TargetAlias;
    [string,max_is(CRED_MAX_USERNAME_LENGTH-1)] wchar_t *UserName;
} CREDENTIALW, *PCREDENTIALW;
typedef CREDENTIALW CREDENTIAL;
typedef PCREDENTIALW PCREDENTIAL;
typedef struct _CREDENTIAL_TARGET_INFORMATIONA {
    LPSTR TargetName;
    LPSTR NetbiosServerName;
    LPSTR DnsServerName;
    LPSTR NetbiosDomainName;
    LPSTR DnsDomainName;
    LPSTR DnsTreeName;
    LPSTR PackageName;
    ULONG Flags;
    DWORD CredTypeCount;
    LPDWORD CredTypes;
} CREDENTIAL_TARGET_INFORMATIONA, *PCREDENTIAL_TARGET_INFORMATIONA;
typedef struct _CREDENTIAL_TARGET_INFORMATIONW {
    [string,max_is(CRED_MAX_DOMAIN_TARGET_NAME_LENGTH-1)] wchar_t *TargetName;
    [string,max_is(CRED_MAX_DOMAIN_TARGET_NAME_LENGTH-1)] wchar_t *NetbiosServerName;
    [string,max_is(CRED_MAX_DOMAIN_TARGET_NAME_LENGTH-1)] wchar_t *DnsServerName;
    [string,max_is(CRED_MAX_DOMAIN_TARGET_NAME_LENGTH-1)] wchar_t *NetbiosDomainName;
    [string,max_is(CRED_MAX_DOMAIN_TARGET_NAME_LENGTH-1)] wchar_t *DnsDomainName;
    [string,max_is(CRED_MAX_DOMAIN_TARGET_NAME_LENGTH-1)] wchar_t *DnsTreeName;
    [string,max_is(CRED_MAX_STRING_LENGTH-1)] wchar_t *PackageName;
    ULONG Flags;
    [range(0,CRED_TYPE_MAXIMUM_EX)]
    DWORD CredTypeCount;
    [size_is(CredTypeCount)]
    LPDWORD CredTypes;
} CREDENTIAL_TARGET_INFORMATIONW, *PCREDENTIAL_TARGET_INFORMATIONW;
typedef CREDENTIAL_TARGET_INFORMATIONW CREDENTIAL_TARGET_INFORMATION;
typedef PCREDENTIAL_TARGET_INFORMATIONW PCREDENTIAL_TARGET_INFORMATION;
typedef struct _CERT_CREDENTIAL_INFO {
    ULONG cbSize;
    UCHAR rgbHashOfCert[CERT_HASH_LENGTH];
} CERT_CREDENTIAL_INFO, *PCERT_CREDENTIAL_INFO;
typedef struct _USERNAME_TARGET_CREDENTIAL_INFO {
    LPWSTR UserName;
} USERNAME_TARGET_CREDENTIAL_INFO, *PUSERNAME_TARGET_CREDENTIAL_INFO;
typedef struct _BINARY_BLOB_CREDENTIAL_INFO {
    ULONG cbBlob;
    LPBYTE pbBlob;
} BINARY_BLOB_CREDENTIAL_INFO, *PBINARY_BLOB_CREDENTIAL_INFO;
typedef enum _CRED_MARSHAL_TYPE {
    CertCredential = 1,
    UsernameTargetCredential,
    BinaryBlobCredential,
    UsernameForPackedCredentials,
    BinaryBlobForSystem,
} CRED_MARSHAL_TYPE, *PCRED_MARSHAL_TYPE;
typedef enum _CRED_PROTECTION_TYPE {
    CredUnprotected,
    CredUserProtection,
    CredTrustedProtection,
    CredForSystemProtection,
} CRED_PROTECTION_TYPE, *PCRED_PROTECTION_TYPE;
typedef struct _CREDUI_INFOA
{
    DWORD cbSize;
    HWND hwndParent;
    PCSTR pszMessageText;
    PCSTR pszCaptionText;
    HBITMAP hbmBanner;
} CREDUI_INFOA, *PCREDUI_INFOA;
typedef struct _CREDUI_INFOW
{
    DWORD cbSize;
    HWND hwndParent;
    PCWSTR pszMessageText;
    PCWSTR pszCaptionText;
    HBITMAP hbmBanner;
} CREDUI_INFOW, *PCREDUI_INFOW;
typedef CREDUI_INFOW CREDUI_INFO;
typedef PCREDUI_INFOW PCREDUI_INFO;
        CREDUI_FLAGS_INCORRECT_PASSWORD | \
        CREDUI_FLAGS_DO_NOT_PERSIST | \
        CREDUI_FLAGS_REQUEST_ADMINISTRATOR | \
        CREDUI_FLAGS_EXCLUDE_CERTIFICATES | \
        CREDUI_FLAGS_REQUIRE_CERTIFICATE | \
        CREDUI_FLAGS_SHOW_SAVE_CHECK_BOX | \
        CREDUI_FLAGS_ALWAYS_SHOW_UI | \
        CREDUI_FLAGS_REQUIRE_SMARTCARD | \
        CREDUI_FLAGS_PASSWORD_ONLY_OK | \
        CREDUI_FLAGS_VALIDATE_USERNAME | \
        CREDUI_FLAGS_COMPLETE_USERNAME | \
        CREDUI_FLAGS_PERSIST | \
        CREDUI_FLAGS_SERVER_CREDENTIAL | \
        CREDUI_FLAGS_EXPECT_CONFIRMATION | \
        CREDUI_FLAGS_GENERIC_CREDENTIALS | \
        CREDUI_FLAGS_USERNAME_TARGET_CREDENTIALS | \
        CREDUI_FLAGS_KEEP_USERNAME )
        CREDUIWIN_GENERIC | \
        CREDUIWIN_CHECKBOX | \
        CREDUIWIN_AUTHPACKAGE_ONLY | \
        CREDUIWIN_IN_CRED_ONLY | \
        CREDUIWIN_ENUMERATE_ADMINS | \
        CREDUIWIN_ENUMERATE_CURRENT_USER | \
        CREDUIWIN_SECURE_PROMPT | \
        CREDUIWIN_PREPROMPTING | \
        CREDUIWIN_PACK_32_WOW )
WINADVAPI
BOOL
WINAPI
CredWriteW (
    _In_ PCREDENTIALW Credential,
    _In_ DWORD Flags
    );
WINADVAPI
BOOL
WINAPI
CredWriteA (
    _In_ PCREDENTIALA Credential,
    _In_ DWORD Flags
    );
WINADVAPI
BOOL
WINAPI
CredReadW (
    _In_ LPCWSTR TargetName,
    _In_ DWORD Type,
    _Reserved_ DWORD Flags,
    _Out_ PCREDENTIALW *Credential
    );
WINADVAPI
BOOL
WINAPI
CredReadA (
    _In_ LPCSTR TargetName,
    _In_ DWORD Type,
    _Reserved_ DWORD Flags,
    _Out_ PCREDENTIALA *Credential
    );
WINADVAPI
BOOL
WINAPI
CredEnumerateW (
    _In_opt_ LPCWSTR Filter,
    _Reserved_ DWORD Flags,
    _Out_ DWORD *Count,
    _Outptr_result_buffer_(*Count) PCREDENTIALW **Credential
    );
WINADVAPI
BOOL
WINAPI
CredEnumerateA (
    _In_opt_ LPCSTR Filter,
    _Reserved_ DWORD Flags,
    _Out_ DWORD *Count,
    _Outptr_result_buffer_(*Count) PCREDENTIALA **Credential
    );
WINADVAPI
BOOL
WINAPI
CredWriteDomainCredentialsW (
    _In_ PCREDENTIAL_TARGET_INFORMATIONW TargetInfo,
    _In_ PCREDENTIALW Credential,
    _In_ DWORD Flags
    );
WINADVAPI
BOOL
WINAPI
CredWriteDomainCredentialsA (
    _In_ PCREDENTIAL_TARGET_INFORMATIONA TargetInfo,
    _In_ PCREDENTIALA Credential,
    _In_ DWORD Flags
    );
WINADVAPI
BOOL
WINAPI
CredReadDomainCredentialsW (
    _In_ PCREDENTIAL_TARGET_INFORMATIONW TargetInfo,
    _In_ DWORD Flags,
    _Out_ DWORD *Count,
    _Outptr_result_buffer_(*Count) PCREDENTIALW **Credential
    );
WINADVAPI
BOOL
WINAPI
CredReadDomainCredentialsA (
    _In_ PCREDENTIAL_TARGET_INFORMATIONA TargetInfo,
    _In_ DWORD Flags,
    _Out_ DWORD *Count,
    _Outptr_result_buffer_(*Count) PCREDENTIALA **Credential
    );
WINADVAPI
BOOL
WINAPI
CredDeleteW (
    _In_ LPCWSTR TargetName,
    _In_ DWORD Type,
    _Reserved_ DWORD Flags
    );
WINADVAPI
BOOL
WINAPI
CredDeleteA (
    _In_ LPCSTR TargetName,
    _In_ DWORD Type,
    _Reserved_ DWORD Flags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINADVAPI
BOOL
WINAPI
CredRenameW (
    _In_ LPCWSTR OldTargetName,
    _In_ LPCWSTR NewTargetName,
    _In_ DWORD Type,
    _Reserved_ DWORD Flags
    );
WINADVAPI
BOOL
WINAPI
CredRenameA (
    _In_ LPCSTR OldTargetName,
    _In_ LPCSTR NewTargetName,
    _In_ DWORD Type,
    _Reserved_ DWORD Flags
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINADVAPI
BOOL
WINAPI
CredGetTargetInfoW (
    _In_ LPCWSTR TargetName,
    _In_ DWORD Flags,
    _Out_ PCREDENTIAL_TARGET_INFORMATIONW *TargetInfo
    );
WINADVAPI
BOOL
WINAPI
CredGetTargetInfoA (
    _In_ LPCSTR TargetName,
    _In_ DWORD Flags,
    _Out_ PCREDENTIAL_TARGET_INFORMATIONA *TargetInfo
    );
WINADVAPI
BOOL
WINAPI
CredMarshalCredentialW(
    _In_ CRED_MARSHAL_TYPE CredType,
    _In_ PVOID Credential,
    _Out_ LPWSTR *MarshaledCredential
    );
WINADVAPI
BOOL
WINAPI
CredMarshalCredentialA(
    _In_ CRED_MARSHAL_TYPE CredType,
    _In_ PVOID Credential,
    _Out_ LPSTR *MarshaledCredential
    );
WINADVAPI
BOOL
WINAPI
CredUnmarshalCredentialW(
    _In_ LPCWSTR MarshaledCredential,
    _Out_ PCRED_MARSHAL_TYPE CredType,
    _Out_ PVOID *Credential
    );
WINADVAPI
BOOL
WINAPI
CredUnmarshalCredentialA(
    _In_ LPCSTR MarshaledCredential,
    _Out_ PCRED_MARSHAL_TYPE CredType,
    _Out_ PVOID *Credential
    );
WINADVAPI
BOOL
WINAPI
CredIsMarshaledCredentialW(
    _In_ LPCWSTR MarshaledCredential
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINADVAPI
BOOL
WINAPI
CredIsMarshaledCredentialA(
    _In_ LPCSTR MarshaledCredential
    );
CREDUIAPI
BOOL
WINAPI
CredUnPackAuthenticationBufferW(
    _In_ DWORD dwFlags,
    _In_reads_bytes_(cbAuthBuffer) PVOID pAuthBuffer,
    _In_ DWORD cbAuthBuffer,
    _Out_writes_opt_(*pcchMaxUserName) LPWSTR pszUserName,
    _Inout_ DWORD* pcchMaxUserName,
    _Out_writes_opt_(*pcchMaxDomainName) LPWSTR pszDomainName,
    _Inout_opt_ DWORD* pcchMaxDomainName,
    _Out_writes_opt_(*pcchMaxPassword) LPWSTR pszPassword,
    _Inout_ DWORD* pcchMaxPassword
    );
CREDUIAPI
BOOL
WINAPI
CredUnPackAuthenticationBufferA(
    _In_ DWORD dwFlags,
    _In_reads_bytes_(cbAuthBuffer) PVOID pAuthBuffer,
    _In_ DWORD cbAuthBuffer,
    _Out_writes_opt_(*pcchlMaxUserName) LPSTR pszUserName,
    _Inout_ DWORD* pcchlMaxUserName,
    _Out_writes_opt_(*pcchMaxDomainName) LPSTR pszDomainName,
    _Inout_opt_ DWORD* pcchMaxDomainName,
    _Out_writes_opt_(*pcchMaxPassword) LPSTR pszPassword,
    _Inout_ DWORD* pcchMaxPassword
    );
CREDUIAPI
BOOL
WINAPI
CredPackAuthenticationBufferW(
    _In_ DWORD dwFlags,
    _In_ LPWSTR pszUserName,
    _In_ LPWSTR pszPassword,
    _Out_writes_bytes_opt_(*pcbPackedCredentials) PBYTE pPackedCredentials,
    _Inout_ DWORD* pcbPackedCredentials
    );
CREDUIAPI
BOOL
WINAPI
CredPackAuthenticationBufferA(
    _In_ DWORD dwFlags,
    _In_ LPSTR pszUserName,
    _In_ LPSTR pszPassword,
    _Out_writes_bytes_opt_(*pcbPackedCredentials) PBYTE pPackedCredentials,
    _Inout_ DWORD* pcbPackedCredentials
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Success_(return)
WINADVAPI
BOOL
WINAPI
CredProtectW(
    _In_ BOOL fAsSelf,
    _In_reads_(cchCredentials) LPWSTR pszCredentials,
    _In_ DWORD cchCredentials,
    _Out_writes_to_(*pcchMaxChars, *pcchMaxChars) LPWSTR pszProtectedCredentials,
    _Inout_ DWORD* pcchMaxChars,
    _Out_opt_ CRED_PROTECTION_TYPE* ProtectionType
    );
_Success_(return)
WINADVAPI
BOOL
WINAPI
CredProtectEx(
    _In_ ULONG Flags,
    _In_reads_(cchCredentials) LPWSTR pszCredentials,
    _In_ DWORD cchCredentials,
    _Out_writes_to_(*pcchMaxChars, *pcchMaxChars) LPWSTR pszProtectedCredentials,
    _Inout_ DWORD* pcchMaxChars,
    _Out_opt_ CRED_PROTECTION_TYPE* ProtectionType
    );
WINADVAPI
BOOL
WINAPI
CredProtectA(
    _In_ BOOL fAsSelf,
    _In_reads_(cchCredentials) LPSTR pszCredentials,
    _In_ DWORD cchCredentials,
    _Out_writes_(*pcchMaxChars) LPSTR pszProtectedCredentials,
    _Inout_ DWORD* pcchMaxChars,
    _Out_opt_ CRED_PROTECTION_TYPE* ProtectionType
    );
_Success_(return)
WINADVAPI
BOOL
WINAPI
CredUnprotectW(
    _In_ BOOL fAsSelf,
    _In_reads_(cchProtectedCredentials) LPWSTR pszProtectedCredentials,
    _In_ DWORD cchProtectedCredentials,
    _Out_writes_to_opt_(*pcchMaxChars, *pcchMaxChars) LPWSTR pszCredentials,
    _Inout_ DWORD* pcchMaxChars
    );
_Success_(return)
WINADVAPI
BOOL
WINAPI
CredUnprotectEx(
    _In_ ULONG Flags,
    _In_reads_(cchProtectedCredentials) LPWSTR pszProtectedCredentials,
    _In_ DWORD cchProtectedCredentials,
    _Out_writes_to_opt_(*pcchMaxChars, *pcchMaxChars) LPWSTR pszCredentials,
    _Inout_ DWORD* pcchMaxChars
    );
WINADVAPI
BOOL
WINAPI
CredUnprotectA(
    _In_ BOOL fAsSelf,
    _In_reads_(cchProtectedCredentials) LPSTR pszProtectedCredentials,
    _In_ DWORD cchProtectedCredentials,
    _Out_writes_opt_(*pcchMaxChars) LPSTR pszCredentials,
    _Inout_ DWORD* pcchMaxChars
    );
WINADVAPI
BOOL
WINAPI
CredIsProtectedW(
    _In_ LPWSTR pszProtectedCredentials,
    _Out_ CRED_PROTECTION_TYPE* pProtectionType
    );
WINADVAPI
BOOL
WINAPI
CredIsProtectedA(
    _In_ LPSTR pszProtectedCredentials,
    _Out_ CRED_PROTECTION_TYPE* pProtectionType
    );
WINADVAPI
BOOL
WINAPI
CredFindBestCredentialW (
    _In_ LPCWSTR TargetName,
    _In_ DWORD Type,
    _In_ DWORD Flags,
    _Out_ PCREDENTIALW *Credential
    );
WINADVAPI
BOOL
WINAPI
CredFindBestCredentialA (
    _In_ LPCSTR TargetName,
    _In_ DWORD Type,
    _In_ DWORD Flags,
    _Out_ PCREDENTIALA *Credential
    );
WINADVAPI
BOOL
WINAPI
CredGetSessionTypes (
    _In_ DWORD MaximumPersistCount,
    _Out_writes_(MaximumPersistCount) LPDWORD MaximumPersist
    );
WINADVAPI
VOID
WINAPI
CredFree (
    _In_ PVOID Buffer
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
CREDUIAPI
DWORD
WINAPI
CredUIPromptForCredentialsW(
    _In_opt_ PCREDUI_INFOW pUiInfo,
    _In_opt_ PCWSTR pszTargetName,
    _Reserved_ PCtxtHandle pContext,
    _In_ DWORD dwAuthError,
    _Inout_updates_(ulUserNameBufferSize) PWSTR pszUserName,
    _In_ ULONG ulUserNameBufferSize,
    _Inout_updates_(ulPasswordBufferSize) PWSTR pszPassword,
    _In_ ULONG ulPasswordBufferSize,
    _Inout_opt_ BOOL *save,
    _In_ DWORD dwFlags
    );
CREDUIAPI
DWORD
WINAPI
CredUIPromptForCredentialsA(
    _In_opt_ PCREDUI_INFOA pUiInfo,
    _In_opt_ PCSTR pszTargetName,
    _Reserved_ PCtxtHandle pContext,
    _In_ DWORD dwAuthError,
    _Inout_updates_(ulUserNameBufferSize) PSTR pszUserName,
    _In_ ULONG ulUserNameBufferSize,
    _Inout_updates_(ulPasswordBufferSize) PSTR pszPassword,
    _In_ ULONG ulPasswordBufferSize,
    _Inout_opt_ BOOL *save,
    _In_ DWORD dwFlags
    );
CREDUIAPI
DWORD
WINAPI
CredUIPromptForWindowsCredentialsW(
    _In_opt_ PCREDUI_INFOW pUiInfo,
    _In_ DWORD dwAuthError,
    _Inout_ ULONG *pulAuthPackage,
    _In_reads_bytes_opt_(ulInAuthBufferSize) LPCVOID pvInAuthBuffer,
    _In_ ULONG ulInAuthBufferSize,
    _Outptr_result_bytebuffer_to_(*pulOutAuthBufferSize, *pulOutAuthBufferSize) LPVOID * ppvOutAuthBuffer,
    _Out_ ULONG * pulOutAuthBufferSize,
    _Inout_opt_ BOOL *pfSave,
    _In_ DWORD dwFlags
    );
CREDUIAPI
DWORD
WINAPI
CredUIPromptForWindowsCredentialsA(
    _In_opt_ PCREDUI_INFOA pUiInfo,
    _In_ DWORD dwAuthError,
    _Inout_ ULONG *pulAuthPackage,
    _In_reads_bytes_opt_(ulInAuthBufferSize) LPCVOID pvInAuthBuffer,
    _In_ ULONG ulInAuthBufferSize,
    _Outptr_result_bytebuffer_to_(*pulOutAuthBufferSize, *pulOutAuthBufferSize) LPVOID * ppvOutAuthBuffer,
    _Out_ ULONG * pulOutAuthBufferSize,
    _Inout_opt_ BOOL *pfSave,
    _In_ DWORD dwFlags
    );
CREDUIAPI
DWORD
WINAPI
CredUIParseUserNameW(
    _In_ PCWSTR UserName,
    _Out_writes_(userBufferSize) WCHAR *user,
    _In_ ULONG userBufferSize,
    _Out_writes_(domainBufferSize) WCHAR *domain,
    _In_ ULONG domainBufferSize
    );
CREDUIAPI
DWORD
WINAPI
CredUIParseUserNameA(
    _In_ PCSTR userName,
    _Out_writes_(userBufferSize) CHAR *user,
    _In_ ULONG userBufferSize,
    _Out_writes_(domainBufferSize) CHAR *domain,
    _In_ ULONG domainBufferSize
    );
CREDUIAPI
DWORD
WINAPI
CredUICmdLinePromptForCredentialsW(
    _In_opt_ PCWSTR pszTargetName,
    _Reserved_ PCtxtHandle pContext,
    _In_ DWORD dwAuthError,
    _Inout_updates_(ulUserBufferSize) PWSTR UserName,
    _In_ ULONG ulUserBufferSize,
    _Inout_updates_(ulPasswordBufferSize) PWSTR pszPassword,
    _In_ ULONG ulPasswordBufferSize,
    _Inout_opt_ PBOOL pfSave,
    _In_ DWORD dwFlags
    );
CREDUIAPI
DWORD
WINAPI
CredUICmdLinePromptForCredentialsA(
    _In_opt_ PCSTR pszTargetName,
    _Reserved_ PCtxtHandle pContext,
    _In_ DWORD dwAuthError,
    _Inout_updates_(ulUserBufferSize) PSTR UserName,
    _In_ ULONG ulUserBufferSize,
    _Inout_updates_(ulPasswordBufferSize) PSTR pszPassword,
    _In_ ULONG ulPasswordBufferSize,
    _Inout_opt_ PBOOL pfSave,
    _In_ DWORD dwFlags
    );
CREDUIAPI
DWORD
WINAPI
CredUIConfirmCredentialsW(
    _In_ PCWSTR pszTargetName,
    _In_ BOOL bConfirm
    );
CREDUIAPI
DWORD
WINAPI
CredUIConfirmCredentialsA(
    _In_ PCSTR pszTargetName,
    _In_ BOOL bConfirm
    );
CREDUIAPI
DWORD
WINAPI
CredUIStoreSSOCredW (
    _In_opt_ PCWSTR pszRealm,
    _In_ PCWSTR pszUsername,
    _In_ PCWSTR pszPassword,
    _In_ BOOL bPersist
    );
CREDUIAPI
DWORD
WINAPI
CredUIReadSSOCredW (
    _In_opt_ PCWSTR pszRealm,
    _Outptr_ PWSTR* ppszUsername
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
}
#endif
#pragma endregion
