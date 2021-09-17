#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <SpecStrings.h>
#include <pshpack8.h>
typedef LPVOID HINTERNET;
typedef HINTERNET * LPHINTERNET;
typedef WORD INTERNET_PORT;
typedef INTERNET_PORT * LPINTERNET_PORT;
                                        + sizeof("://") \
                                        + INTERNET_MAX_PATH_LENGTH)
                                 INTERNET_FLAG_IGNORE_CERT_DATE_INVALID | \
                                 INTERNET_FLAG_IGNORE_REDIRECT_TO_HTTPS | \
                                 INTERNET_FLAG_IGNORE_REDIRECT_TO_HTTP )
                                     INTERNET_FLAG_IGNORE_CERT_DATE_INVALID | \
                                     SECURITY_FLAG_IGNORE_UNKNOWN_CA | \
                                     SECURITY_FLAG_IGNORE_REVOCATION | \
                                     SECURITY_FLAG_IGNORE_WEAK_SIGNATURE)
                                | INTERNET_FLAG_RAW_DATA \
                                | INTERNET_FLAG_EXISTING_CONNECT \
                                | INTERNET_FLAG_ASYNC \
                                | INTERNET_FLAG_PASSIVE \
                                | INTERNET_FLAG_NO_CACHE_WRITE \
                                | INTERNET_FLAG_MAKE_PERSISTENT \
                                | INTERNET_FLAG_FROM_CACHE \
                                | INTERNET_FLAG_SECURE \
                                | INTERNET_FLAG_KEEP_CONNECTION \
                                | INTERNET_FLAG_NO_AUTO_REDIRECT \
                                | INTERNET_FLAG_READ_PREFETCH \
                                | INTERNET_FLAG_NO_COOKIES \
                                | INTERNET_FLAG_NO_AUTH \
                                | INTERNET_FLAG_CACHE_IF_NET_FAIL \
                                | SECURITY_INTERNET_MASK \
                                | INTERNET_FLAG_RESYNCHRONIZE \
                                | INTERNET_FLAG_HYPERLINK \
                                | INTERNET_FLAG_NO_UI \
                                | INTERNET_FLAG_PRAGMA_NOCACHE \
                                | INTERNET_FLAG_CACHE_ASYNC \
                                | INTERNET_FLAG_FORMS_SUBMIT \
                                | INTERNET_FLAG_NEED_FILE \
                                | INTERNET_FLAG_RESTRICTED_ZONE \
                                | INTERNET_FLAG_TRANSFER_BINARY \
                                | INTERNET_FLAG_TRANSFER_ASCII \
                                | INTERNET_FLAG_FWD_BACK \
                                | INTERNET_FLAG_BGUPDATE \
                                )
typedef enum {
    INTERNET_SCHEME_PARTIAL = -2,
    INTERNET_SCHEME_UNKNOWN = -1,
    INTERNET_SCHEME_DEFAULT = 0,
    INTERNET_SCHEME_FTP,
    INTERNET_SCHEME_GOPHER,
    INTERNET_SCHEME_HTTP,
    INTERNET_SCHEME_HTTPS,
    INTERNET_SCHEME_FILE,
    INTERNET_SCHEME_NEWS,
    INTERNET_SCHEME_MAILTO,
    INTERNET_SCHEME_SOCKS,
    INTERNET_SCHEME_JAVASCRIPT,
    INTERNET_SCHEME_VBSCRIPT,
    INTERNET_SCHEME_RES,
    INTERNET_SCHEME_FIRST = INTERNET_SCHEME_FTP,
    INTERNET_SCHEME_LAST = INTERNET_SCHEME_RES
} INTERNET_SCHEME, * LPINTERNET_SCHEME;
typedef struct {
    DWORD_PTR dwResult;
    DWORD dwError;
} INTERNET_ASYNC_RESULT, * LPINTERNET_ASYNC_RESULT;
typedef struct {
    DWORD_PTR Socket;
    DWORD SourcePort;
    DWORD DestPort;
    DWORD Flags;
} INTERNET_DIAGNOSTIC_SOCKET_INFO, * LPINTERNET_DIAGNOSTIC_SOCKET_INFO;
typedef struct {
    DWORD dwAccessType;
    LPCTSTR lpszProxy;
    LPCTSTR lpszProxyBypass;
} INTERNET_PROXY_INFO, * LPINTERNET_PROXY_INFO;
typedef struct {
    DWORD dwOption;
    union {
        DWORD dwValue;
        LPSTR pszValue;
        FILETIME ftValue;
    } Value;
} INTERNET_PER_CONN_OPTIONA, * LPINTERNET_PER_CONN_OPTIONA;
typedef struct {
    DWORD dwOption;
    union {
        DWORD dwValue;
        LPWSTR pszValue;
        FILETIME ftValue;
    } Value;
} INTERNET_PER_CONN_OPTIONW, * LPINTERNET_PER_CONN_OPTIONW;
typedef INTERNET_PER_CONN_OPTIONW INTERNET_PER_CONN_OPTION;
typedef LPINTERNET_PER_CONN_OPTIONW LPINTERNET_PER_CONN_OPTION;
typedef struct {
    DWORD dwSize;
    LPSTR pszConnection;
    DWORD dwOptionCount;
    DWORD dwOptionError;
    LPINTERNET_PER_CONN_OPTIONA pOptions;
} INTERNET_PER_CONN_OPTION_LISTA, * LPINTERNET_PER_CONN_OPTION_LISTA;
typedef struct {
    DWORD dwSize;
    LPWSTR pszConnection;
    DWORD dwOptionCount;
    DWORD dwOptionError;
    LPINTERNET_PER_CONN_OPTIONW pOptions;
} INTERNET_PER_CONN_OPTION_LISTW, * LPINTERNET_PER_CONN_OPTION_LISTW;
typedef INTERNET_PER_CONN_OPTION_LISTW INTERNET_PER_CONN_OPTION_LIST;
typedef LPINTERNET_PER_CONN_OPTION_LISTW LPINTERNET_PER_CONN_OPTION_LIST;
typedef struct {
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
} INTERNET_VERSION_INFO, * LPINTERNET_VERSION_INFO;
typedef struct {
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
} HTTP_VERSION_INFO, * LPHTTP_VERSION_INFO;
typedef struct {
    DWORD dwConnectedState;
    DWORD dwFlags;
} INTERNET_CONNECTED_INFO, * LPINTERNET_CONNECTED_INFO;
#pragma warning( disable : 4121 )
typedef struct {
    DWORD dwStructSize;
    LPSTR lpszScheme;
    DWORD dwSchemeLength;
    INTERNET_SCHEME nScheme;
    LPSTR lpszHostName;
    DWORD dwHostNameLength;
    INTERNET_PORT nPort;
    LPSTR lpszUserName;
    DWORD dwUserNameLength;
    LPSTR lpszPassword;
    DWORD dwPasswordLength;
    LPSTR lpszUrlPath;
    DWORD dwUrlPathLength;
    LPSTR lpszExtraInfo;
    DWORD dwExtraInfoLength;
} URL_COMPONENTSA, * LPURL_COMPONENTSA;
typedef struct {
    DWORD dwStructSize;
    LPWSTR lpszScheme;
    DWORD dwSchemeLength;
    INTERNET_SCHEME nScheme;
    LPWSTR lpszHostName;
    DWORD dwHostNameLength;
    INTERNET_PORT nPort;
    LPWSTR lpszUserName;
    DWORD dwUserNameLength;
    LPWSTR lpszPassword;
    DWORD dwPasswordLength;
    LPWSTR lpszUrlPath;
    DWORD dwUrlPathLength;
    LPWSTR lpszExtraInfo;
    DWORD dwExtraInfoLength;
} URL_COMPONENTSW, * LPURL_COMPONENTSW;
typedef URL_COMPONENTSW URL_COMPONENTS;
typedef LPURL_COMPONENTSW LPURL_COMPONENTS;
#pragma warning( default : 4121 )
typedef struct {
    FILETIME ftExpiry;
    FILETIME ftStart;
    LPTSTR lpszSubjectInfo;
    LPTSTR lpszIssuerInfo;
    LPTSTR lpszProtocolName;
    LPTSTR lpszSignatureAlgName;
    LPTSTR lpszEncryptionAlgName;
    DWORD dwKeySize;
} INTERNET_CERTIFICATE_INFO, * LPINTERNET_CERTIFICATE_INFO;
typedef struct _INTERNET_BUFFERSA {
    DWORD dwStructSize;
    struct _INTERNET_BUFFERSA * Next;
    LPCSTR lpcszHeader;
    DWORD dwHeadersLength;
    DWORD dwHeadersTotal;
    LPVOID lpvBuffer;
    DWORD dwBufferLength;
    DWORD dwBufferTotal;
    DWORD dwOffsetLow;
    DWORD dwOffsetHigh;
} INTERNET_BUFFERSA, * LPINTERNET_BUFFERSA;
typedef struct _INTERNET_BUFFERSW {
    DWORD dwStructSize;
    struct _INTERNET_BUFFERSW * Next;
    LPCWSTR lpcszHeader;
    DWORD dwHeadersLength;
    DWORD dwHeadersTotal;
    LPVOID lpvBuffer;
    DWORD dwBufferLength;
    DWORD dwBufferTotal;
    DWORD dwOffsetLow;
    DWORD dwOffsetHigh;
} INTERNET_BUFFERSW, * LPINTERNET_BUFFERSW;
typedef INTERNET_BUFFERSW INTERNET_BUFFERS;
typedef LPINTERNET_BUFFERSW LPINTERNET_BUFFERS;
BOOLAPI InternetTimeFromSystemTimeA(
    _In_ CONST SYSTEMTIME *pst,
    _In_ DWORD dwRFC,
    _Out_writes_bytes_(cbTime) LPSTR lpszTime,
    _In_ DWORD cbTime
    );
BOOLAPI InternetTimeFromSystemTimeW(
    _In_ CONST SYSTEMTIME *pst,
    _In_ DWORD dwRFC,
    _Out_writes_bytes_(cbTime) LPWSTR lpszTime,
    _In_ DWORD cbTime
    );
BOOLAPI InternetTimeToSystemTimeA(
    _In_ LPCSTR lpszTime,
    _Out_ SYSTEMTIME *pst,
    _Reserved_ DWORD dwReserved
    );
BOOLAPI InternetTimeToSystemTimeW(
    _In_ LPCWSTR lpszTime,
    _Out_ SYSTEMTIME *pst,
    _Reserved_ DWORD dwReserved
    );
BOOLAPI
InternetCrackUrlA(
    _In_reads_(dwUrlLength) LPCSTR lpszUrl,
    _In_ DWORD dwUrlLength,
    _In_ DWORD dwFlags,
    _Inout_ LPURL_COMPONENTSA lpUrlComponents
    );
BOOLAPI
InternetCrackUrlW(
    _In_reads_(dwUrlLength) LPCWSTR lpszUrl,
    _In_ DWORD dwUrlLength,
    _In_ DWORD dwFlags,
    _Inout_ LPURL_COMPONENTSW lpUrlComponents
    );
BOOLAPI
InternetCreateUrlA(
    _In_ LPURL_COMPONENTSA lpUrlComponents,
    _In_ DWORD dwFlags,
    _Out_writes_opt_(*lpdwUrlLength) LPSTR lpszUrl,
    _Inout_ LPDWORD lpdwUrlLength
    );
BOOLAPI
InternetCreateUrlW(
    _In_ LPURL_COMPONENTSW lpUrlComponents,
    _In_ DWORD dwFlags,
    _Out_writes_opt_(*lpdwUrlLength) LPWSTR lpszUrl,
    _Inout_ LPDWORD lpdwUrlLength
    );
BOOLAPI
InternetCanonicalizeUrlA(
    _In_ LPCSTR lpszUrl,
    _Out_writes_(*lpdwBufferLength) LPSTR lpszBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _In_ DWORD dwFlags
    );
BOOLAPI
InternetCanonicalizeUrlW(
    _In_ LPCWSTR lpszUrl,
    _Out_writes_(*lpdwBufferLength) LPWSTR lpszBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _In_ DWORD dwFlags
    );
BOOLAPI
InternetCombineUrlA(
    _In_ LPCSTR lpszBaseUrl,
    _In_ LPCSTR lpszRelativeUrl,
    _Out_writes_(*lpdwBufferLength) LPSTR lpszBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _In_ DWORD dwFlags
    );
BOOLAPI
InternetCombineUrlW(
    _In_ LPCWSTR lpszBaseUrl,
    _In_ LPCWSTR lpszRelativeUrl,
    _Out_writes_(*lpdwBufferLength) LPWSTR lpszBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _In_ DWORD dwFlags
    );
INTERNETAPI_(HINTERNET) InternetOpenA(
    _In_opt_ LPCSTR lpszAgent,
    _In_ DWORD dwAccessType,
    _In_opt_ LPCSTR lpszProxy,
    _In_opt_ LPCSTR lpszProxyBypass,
    _In_ DWORD dwFlags
    );
INTERNETAPI_(HINTERNET) InternetOpenW(
    _In_opt_ LPCWSTR lpszAgent,
    _In_ DWORD dwAccessType,
    _In_opt_ LPCWSTR lpszProxy,
    _In_opt_ LPCWSTR lpszProxyBypass,
    _In_ DWORD dwFlags
    );
BOOLAPI InternetCloseHandle(
    _In_ HINTERNET hInternet
    );
INTERNETAPI_(HINTERNET)
InternetConnectA(
    _In_ HINTERNET hInternet,
    _In_ LPCSTR lpszServerName,
    _In_ INTERNET_PORT nServerPort,
    _In_opt_ LPCSTR lpszUserName,
    _In_opt_ LPCSTR lpszPassword,
    _In_ DWORD dwService,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
INTERNETAPI_(HINTERNET)
InternetConnectW(
    _In_ HINTERNET hInternet,
    _In_ LPCWSTR lpszServerName,
    _In_ INTERNET_PORT nServerPort,
    _In_opt_ LPCWSTR lpszUserName,
    _In_opt_ LPCWSTR lpszPassword,
    _In_ DWORD dwService,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
INTERNETAPI_(HINTERNET) InternetOpenUrlA(
    _In_ HINTERNET hInternet,
    _In_ LPCSTR lpszUrl,
    _In_reads_opt_(dwHeadersLength) LPCSTR lpszHeaders,
    _In_ DWORD dwHeadersLength,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
INTERNETAPI_(HINTERNET) InternetOpenUrlW(
    _In_ HINTERNET hInternet,
    _In_ LPCWSTR lpszUrl,
    _In_reads_opt_(dwHeadersLength) LPCWSTR lpszHeaders,
    _In_ DWORD dwHeadersLength,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
BOOLAPI InternetReadFile(
    _In_ HINTERNET hFile,
    _Out_writes_bytes_(dwNumberOfBytesToRead) __out_data_source(NETWORK) LPVOID lpBuffer,
    _In_ DWORD dwNumberOfBytesToRead,
    _Out_ LPDWORD lpdwNumberOfBytesRead
    );
BOOLAPI InternetReadFileExA(
    _In_ HINTERNET hFile,
    _Out_ __out_data_source(NETWORK) LPINTERNET_BUFFERSA lpBuffersOut,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
BOOLAPI InternetReadFileExW(
    _In_ HINTERNET hFile,
    _Out_ __out_data_source(NETWORK) LPINTERNET_BUFFERSW lpBuffersOut,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
INTERNETAPI_(DWORD) InternetSetFilePointer(
    _In_ HINTERNET hFile,
    _In_ LONG lDistanceToMove,
    _Inout_opt_ PLONG lpDistanceToMoveHigh,
    _In_ DWORD dwMoveMethod,
    _Reserved_ DWORD_PTR dwContext
    );
BOOLAPI InternetWriteFile(
    _In_ HINTERNET hFile,
    _In_reads_bytes_(dwNumberOfBytesToWrite) LPCVOID lpBuffer,
    _In_ DWORD dwNumberOfBytesToWrite,
    _Out_ LPDWORD lpdwNumberOfBytesWritten
    );
BOOLAPI InternetQueryDataAvailable(
    _In_ HINTERNET hFile,
    _Out_opt_ __out_data_source(NETWORK) LPDWORD lpdwNumberOfBytesAvailable,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
BOOLAPI InternetFindNextFileA(
    _In_ HINTERNET hFind,
    _Out_ LPVOID lpvFindData
    );
BOOLAPI InternetFindNextFileW(
    _In_ HINTERNET hFind,
    _Out_ LPVOID lpvFindData
    );
BOOLAPI InternetQueryOptionA(
    _In_opt_ HINTERNET hInternet,
    _In_ DWORD dwOption,
    _Out_writes_bytes_to_opt_(*lpdwBufferLength, *lpdwBufferLength) __out_data_source(NETWORK) LPVOID lpBuffer,
    _Inout_ LPDWORD lpdwBufferLength
    );
BOOLAPI InternetQueryOptionW(
    _In_opt_ HINTERNET hInternet,
    _In_ DWORD dwOption,
    _Out_writes_bytes_to_opt_(*lpdwBufferLength, *lpdwBufferLength) __out_data_source(NETWORK) LPVOID lpBuffer,
    _Inout_ LPDWORD lpdwBufferLength
    );
BOOLAPI InternetSetOptionA(
    _In_opt_ HINTERNET hInternet,
    _In_ DWORD dwOption,
    _In_opt_ LPVOID lpBuffer,
    _In_ DWORD dwBufferLength
    );
BOOLAPI InternetSetOptionW(
    _In_opt_ HINTERNET hInternet,
    _In_ DWORD dwOption,
    _In_opt_ LPVOID lpBuffer,
    _In_ DWORD dwBufferLength
    );
BOOLAPI InternetSetOptionExA(
    _In_opt_ HINTERNET hInternet,
    _In_ DWORD dwOption,
    _In_opt_ LPVOID lpBuffer,
    _In_ DWORD dwBufferLength,
    _In_ DWORD dwFlags
    );
BOOLAPI InternetSetOptionExW(
    _In_opt_ HINTERNET hInternet,
    _In_ DWORD dwOption,
    _In_opt_ LPVOID lpBuffer,
    _In_ DWORD dwBufferLength,
    _In_ DWORD dwFlags
    );
BOOLAPI InternetLockRequestFile(
    _In_ HINTERNET hInternet,
    _Out_ HANDLE * lphLockRequestInfo
    );
BOOLAPI InternetUnlockRequestFile(
    _Inout_ HANDLE hLockRequestInfo
    );
                                 SECURITY_FLAG_IGNORE_UNKNOWN_CA |\
                                 SECURITY_FLAG_IGNORE_CERT_CN_INVALID |\
                                 SECURITY_FLAG_IGNORE_CERT_DATE_INVALID |\
                                 SECURITY_FLAG_IGNORE_WRONG_USAGE |\
                                 SECURITY_FLAG_IGNORE_WEAK_SIGNATURE)
BOOLAPI
InternetGetLastResponseInfoA(
    _Out_ LPDWORD lpdwError,
    _Out_writes_opt_(*lpdwBufferLength) LPSTR lpszBuffer,
    _Inout_ LPDWORD lpdwBufferLength
    );
BOOLAPI
InternetGetLastResponseInfoW(
    _Out_ LPDWORD lpdwError,
    _Out_writes_opt_(*lpdwBufferLength) LPWSTR lpszBuffer,
    _Inout_ LPDWORD lpdwBufferLength
    );
typedef
VOID
(CALLBACK * INTERNET_STATUS_CALLBACK)(
    _In_ HINTERNET hInternet,
    _In_opt_ DWORD_PTR dwContext,
    _In_ DWORD dwInternetStatus,
    _In_opt_ LPVOID lpvStatusInformation,
    _In_ DWORD dwStatusInformationLength
    );
typedef INTERNET_STATUS_CALLBACK * LPINTERNET_STATUS_CALLBACK;
INTERNETAPI_(INTERNET_STATUS_CALLBACK) InternetSetStatusCallbackA(
    _In_ HINTERNET hInternet,
    _In_opt_ INTERNET_STATUS_CALLBACK lpfnInternetCallback
    );
INTERNETAPI_(INTERNET_STATUS_CALLBACK) InternetSetStatusCallbackW(
    _In_ HINTERNET hInternet,
    _In_opt_ INTERNET_STATUS_CALLBACK lpfnInternetCallback
    );
typedef enum {
    COOKIE_STATE_UNKNOWN = 0x0,
    COOKIE_STATE_ACCEPT = 0x1,
    COOKIE_STATE_PROMPT = 0x2,
    COOKIE_STATE_LEASH = 0x3,
    COOKIE_STATE_DOWNGRADE = 0x4,
    COOKIE_STATE_REJECT = 0x5,
    COOKIE_STATE_MAX = COOKIE_STATE_REJECT,
}
InternetCookieState;
typedef struct {
    int cSession;
    int cPersistent;
    int cAccepted;
    int cLeashed;
    int cDowngraded;
    int cBlocked;
    const char *pszLocation;
}
IncomingCookieState;
typedef struct {
    int cSent;
    int cSuppressed;
    const char *pszLocation;
}
OutgoingCookieState;
typedef struct {
    BOOL fAccepted;
    BOOL fLeashed;
    BOOL fDowngraded;
    BOOL fRejected;
}
InternetCookieHistory;
typedef struct {
    DWORD dwCookieState;
    BOOL fAllowSession;
}
CookieDecision;
INTERNETAPI_(HINTERNET) FtpFindFirstFileA(
    _In_ HINTERNET hConnect,
    _In_opt_ LPCSTR lpszSearchFile,
    _Out_opt_ LPWIN32_FIND_DATAA lpFindFileData,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
INTERNETAPI_(HINTERNET) FtpFindFirstFileW(
    _In_ HINTERNET hConnect,
    _In_opt_ LPCWSTR lpszSearchFile,
    _Out_opt_ LPWIN32_FIND_DATAW lpFindFileData,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
BOOLAPI FtpGetFileA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszRemoteFile,
    _In_ LPCSTR lpszNewFile,
    _In_ BOOL fFailIfExists,
    _In_ DWORD dwFlagsAndAttributes,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
BOOLAPI FtpGetFileW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszRemoteFile,
    _In_ LPCWSTR lpszNewFile,
    _In_ BOOL fFailIfExists,
    _In_ DWORD dwFlagsAndAttributes,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
BOOLAPI FtpPutFileA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszLocalFile,
    _In_ LPCSTR lpszNewRemoteFile,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
BOOLAPI FtpPutFileW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszLocalFile,
    _In_ LPCWSTR lpszNewRemoteFile,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
BOOLAPI FtpGetFileEx(
    _In_ HINTERNET hFtpSession,
    _In_ LPCSTR lpszRemoteFile,
    _In_ LPCWSTR lpszNewFile,
    _In_ BOOL fFailIfExists,
    _In_ DWORD dwFlagsAndAttributes,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
BOOLAPI FtpPutFileEx(
    _In_ HINTERNET hFtpSession,
    _In_ LPCWSTR lpszLocalFile,
    _In_ LPCSTR lpszNewRemoteFile,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
BOOLAPI FtpDeleteFileA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszFileName
    );
BOOLAPI FtpDeleteFileW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszFileName
    );
BOOLAPI FtpRenameFileA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszExisting,
    _In_ LPCSTR lpszNew
    );
BOOLAPI FtpRenameFileW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszExisting,
    _In_ LPCWSTR lpszNew
    );
INTERNETAPI_(HINTERNET) FtpOpenFileA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszFileName,
    _In_ DWORD dwAccess,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
INTERNETAPI_(HINTERNET) FtpOpenFileW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszFileName,
    _In_ DWORD dwAccess,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
BOOLAPI FtpCreateDirectoryA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszDirectory
    );
BOOLAPI FtpCreateDirectoryW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszDirectory
    );
BOOLAPI FtpRemoveDirectoryA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszDirectory
    );
BOOLAPI FtpRemoveDirectoryW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszDirectory
    );
BOOLAPI FtpSetCurrentDirectoryA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszDirectory
    );
BOOLAPI FtpSetCurrentDirectoryW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszDirectory
    );
BOOLAPI FtpGetCurrentDirectoryA(
    _In_ HINTERNET hConnect,
    _Out_writes_(*lpdwCurrentDirectory) LPSTR lpszCurrentDirectory,
    _Inout_ LPDWORD lpdwCurrentDirectory
    );
BOOLAPI FtpGetCurrentDirectoryW(
    _In_ HINTERNET hConnect,
    _Out_writes_(*lpdwCurrentDirectory) LPWSTR lpszCurrentDirectory,
    _Inout_ LPDWORD lpdwCurrentDirectory
    );
BOOLAPI FtpCommandA(
    _In_ HINTERNET hConnect,
    _In_ BOOL fExpectResponse,
    _In_ DWORD dwFlags,
    _In_ LPCSTR lpszCommand,
    _In_opt_ DWORD_PTR dwContext,
    _Out_opt_ HINTERNET *phFtpCommand
    );
BOOLAPI FtpCommandW(
    _In_ HINTERNET hConnect,
    _In_ BOOL fExpectResponse,
    _In_ DWORD dwFlags,
    _In_ LPCWSTR lpszCommand,
    _In_opt_ DWORD_PTR dwContext,
    _Out_opt_ HINTERNET *phFtpCommand
    );
INTERNETAPI_(DWORD) FtpGetFileSize(
    _In_ HINTERNET hFile,
    _Out_opt_ LPDWORD lpdwFileSizeHigh
    );
                                    + MAX_GOPHER_DISPLAY_TEXT \
                                    + 1 \
                                    + MAX_GOPHER_SELECTOR_TEXT \
                                    + 1 \
                                    + MAX_GOPHER_HOST_NAME \
                                    + 1 \
                                    + INTERNET_MAX_PORT_NUMBER_LENGTH \
                                    + 1 \
                                    + 1 \
                                    + 2 \
                                    )
typedef struct {
    CHAR DisplayString[MAX_GOPHER_DISPLAY_TEXT + 1];
    DWORD GopherType;
    DWORD SizeLow;
    DWORD SizeHigh;
    FILETIME LastModificationTime;
    CHAR Locator[MAX_GOPHER_LOCATOR_LENGTH + 1];
} GOPHER_FIND_DATAA, * LPGOPHER_FIND_DATAA;
typedef struct {
    WCHAR DisplayString[MAX_GOPHER_DISPLAY_TEXT + 1];
    DWORD GopherType;
    DWORD SizeLow;
    DWORD SizeHigh;
    FILETIME LastModificationTime;
    WCHAR Locator[MAX_GOPHER_LOCATOR_LENGTH + 1];
} GOPHER_FIND_DATAW, * LPGOPHER_FIND_DATAW;
typedef GOPHER_FIND_DATAW GOPHER_FIND_DATA;
typedef LPGOPHER_FIND_DATAW LPGOPHER_FIND_DATA;
                                    | GOPHER_TYPE_MAC_BINHEX \
                                    | GOPHER_TYPE_DOS_ARCHIVE \
                                    | GOPHER_TYPE_UNIX_UUENCODED \
                                    | GOPHER_TYPE_BINARY \
                                    | GOPHER_TYPE_GIF \
                                    | GOPHER_TYPE_IMAGE \
                                    | GOPHER_TYPE_BITMAP \
                                    | GOPHER_TYPE_MOVIE \
                                    | GOPHER_TYPE_SOUND \
                                    | GOPHER_TYPE_HTML \
                                    | GOPHER_TYPE_PDF \
                                    | GOPHER_TYPE_CALENDAR \
                                    | GOPHER_TYPE_INLINE \
                                    )
typedef struct {
    LPCTSTR Comment;
    LPCTSTR EmailAddress;
} GOPHER_ADMIN_ATTRIBUTE_TYPE, * LPGOPHER_ADMIN_ATTRIBUTE_TYPE;
typedef struct {
    FILETIME DateAndTime;
} GOPHER_MOD_DATE_ATTRIBUTE_TYPE, * LPGOPHER_MOD_DATE_ATTRIBUTE_TYPE;
typedef struct {
    DWORD Ttl;
} GOPHER_TTL_ATTRIBUTE_TYPE, * LPGOPHER_TTL_ATTRIBUTE_TYPE;
typedef struct {
    INT Score;
} GOPHER_SCORE_ATTRIBUTE_TYPE, * LPGOPHER_SCORE_ATTRIBUTE_TYPE;
typedef struct {
    INT LowerBound;
    INT UpperBound;
} GOPHER_SCORE_RANGE_ATTRIBUTE_TYPE, * LPGOPHER_SCORE_RANGE_ATTRIBUTE_TYPE;
typedef struct {
    LPCTSTR Site;
} GOPHER_SITE_ATTRIBUTE_TYPE, * LPGOPHER_SITE_ATTRIBUTE_TYPE;
typedef struct {
    LPCTSTR Organization;
} GOPHER_ORGANIZATION_ATTRIBUTE_TYPE, * LPGOPHER_ORGANIZATION_ATTRIBUTE_TYPE;
typedef struct {
    LPCTSTR Location;
} GOPHER_LOCATION_ATTRIBUTE_TYPE, * LPGOPHER_LOCATION_ATTRIBUTE_TYPE;
typedef struct {
    INT DegreesNorth;
    INT MinutesNorth;
    INT SecondsNorth;
    INT DegreesEast;
    INT MinutesEast;
    INT SecondsEast;
} GOPHER_GEOGRAPHICAL_LOCATION_ATTRIBUTE_TYPE, * LPGOPHER_GEOGRAPHICAL_LOCATION_ATTRIBUTE_TYPE;
typedef struct {
    INT Zone;
} GOPHER_TIMEZONE_ATTRIBUTE_TYPE, * LPGOPHER_TIMEZONE_ATTRIBUTE_TYPE;
typedef struct {
    LPCTSTR Provider;
} GOPHER_PROVIDER_ATTRIBUTE_TYPE, * LPGOPHER_PROVIDER_ATTRIBUTE_TYPE;
typedef struct {
    LPCTSTR Version;
} GOPHER_VERSION_ATTRIBUTE_TYPE, * LPGOPHER_VERSION_ATTRIBUTE_TYPE;
typedef struct {
    LPCTSTR ShortAbstract;
    LPCTSTR AbstractFile;
} GOPHER_ABSTRACT_ATTRIBUTE_TYPE, * LPGOPHER_ABSTRACT_ATTRIBUTE_TYPE;
typedef struct {
    LPCTSTR ContentType;
    LPCTSTR Language;
    DWORD Size;
} GOPHER_VIEW_ATTRIBUTE_TYPE, * LPGOPHER_VIEW_ATTRIBUTE_TYPE;
typedef struct {
    BOOL TreeWalk;
} GOPHER_VERONICA_ATTRIBUTE_TYPE, * LPGOPHER_VERONICA_ATTRIBUTE_TYPE;
typedef struct {
    LPCTSTR QuestionType;
    LPCTSTR QuestionText;
} GOPHER_ASK_ATTRIBUTE_TYPE, * LPGOPHER_ASK_ATTRIBUTE_TYPE;
typedef struct {
    LPCTSTR Text;
} GOPHER_UNKNOWN_ATTRIBUTE_TYPE, * LPGOPHER_UNKNOWN_ATTRIBUTE_TYPE;
typedef struct {
    DWORD CategoryId;
    DWORD AttributeId;
    union {
        GOPHER_ADMIN_ATTRIBUTE_TYPE Admin;
        GOPHER_MOD_DATE_ATTRIBUTE_TYPE ModDate;
        GOPHER_TTL_ATTRIBUTE_TYPE Ttl;
        GOPHER_SCORE_ATTRIBUTE_TYPE Score;
        GOPHER_SCORE_RANGE_ATTRIBUTE_TYPE ScoreRange;
        GOPHER_SITE_ATTRIBUTE_TYPE Site;
        GOPHER_ORGANIZATION_ATTRIBUTE_TYPE Organization;
        GOPHER_LOCATION_ATTRIBUTE_TYPE Location;
        GOPHER_GEOGRAPHICAL_LOCATION_ATTRIBUTE_TYPE GeographicalLocation;
        GOPHER_TIMEZONE_ATTRIBUTE_TYPE TimeZone;
        GOPHER_PROVIDER_ATTRIBUTE_TYPE Provider;
        GOPHER_VERSION_ATTRIBUTE_TYPE Version;
        GOPHER_ABSTRACT_ATTRIBUTE_TYPE Abstract;
        GOPHER_VIEW_ATTRIBUTE_TYPE View;
        GOPHER_VERONICA_ATTRIBUTE_TYPE Veronica;
        GOPHER_ASK_ATTRIBUTE_TYPE Ask;
        GOPHER_UNKNOWN_ATTRIBUTE_TYPE Unknown;
    } AttributeType;
} GOPHER_ATTRIBUTE_TYPE, * LPGOPHER_ATTRIBUTE_TYPE;
BOOLAPI GopherCreateLocatorA(
    _In_ LPCSTR lpszHost,
    _In_ INTERNET_PORT nServerPort,
    _In_opt_ LPCSTR lpszDisplayString,
    _In_opt_ LPCSTR lpszSelectorString,
    _In_ DWORD dwGopherType,
    _Out_writes_opt_(*lpdwBufferLength) LPSTR lpszLocator,
    _Inout_ LPDWORD lpdwBufferLength
    );
BOOLAPI GopherCreateLocatorW(
    _In_ LPCWSTR lpszHost,
    _In_ INTERNET_PORT nServerPort,
    _In_opt_ LPCWSTR lpszDisplayString,
    _In_opt_ LPCWSTR lpszSelectorString,
    _In_ DWORD dwGopherType,
    _Out_writes_opt_(*lpdwBufferLength) LPWSTR lpszLocator,
    _Inout_ LPDWORD lpdwBufferLength
    );
BOOLAPI GopherGetLocatorTypeA(
    _In_ LPCSTR lpszLocator,
    _Out_ LPDWORD lpdwGopherType
    );
BOOLAPI GopherGetLocatorTypeW(
    _In_ LPCWSTR lpszLocator,
    _Out_ LPDWORD lpdwGopherType
    );
INTERNETAPI_(HINTERNET) GopherFindFirstFileA(
    _In_ HINTERNET hConnect,
    _In_opt_ LPCSTR lpszLocator,
    _In_opt_ LPCSTR lpszSearchString,
    _Out_opt_ LPGOPHER_FIND_DATAA lpFindData,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
INTERNETAPI_(HINTERNET) GopherFindFirstFileW(
    _In_ HINTERNET hConnect,
    _In_opt_ LPCWSTR lpszLocator,
    _In_opt_ LPCWSTR lpszSearchString,
    _Out_opt_ LPGOPHER_FIND_DATAW lpFindData,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
INTERNETAPI_(HINTERNET) GopherOpenFileA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszLocator,
    _In_opt_ LPCSTR lpszView,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
INTERNETAPI_(HINTERNET) GopherOpenFileW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszLocator,
    _In_opt_ LPCWSTR lpszView,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
typedef BOOL (CALLBACK * GOPHER_ATTRIBUTE_ENUMERATOR)(
    _In_ LPGOPHER_ATTRIBUTE_TYPE lpAttributeInfo,
    _In_ DWORD dwError
    );
BOOLAPI GopherGetAttributeA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszLocator,
    _In_opt_ LPCSTR lpszAttributeName,
    _At_((LPSTR)lpBuffer, _Out_writes_(dwBufferLength)) LPBYTE lpBuffer,
    _In_ DWORD dwBufferLength,
    _Out_ LPDWORD lpdwCharactersReturned,
    _In_opt_ GOPHER_ATTRIBUTE_ENUMERATOR lpfnEnumerator,
    _In_opt_ DWORD_PTR dwContext
    );
BOOLAPI GopherGetAttributeW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszLocator,
    _In_opt_ LPCWSTR lpszAttributeName,
    _At_((LPWSTR)lpBuffer, _Out_writes_(dwBufferLength)) LPBYTE lpBuffer,
    _In_ DWORD dwBufferLength,
    _Out_ LPDWORD lpdwCharactersReturned,
    _In_opt_ GOPHER_ATTRIBUTE_ENUMERATOR lpfnEnumerator,
    _In_opt_ DWORD_PTR dwContext
    );
                                                | HTTP_QUERY_FLAG_SYSTEMTIME \
                                                | HTTP_QUERY_FLAG_NUMBER \
                                                | HTTP_QUERY_FLAG_COALESCE \
                                                | HTTP_QUERY_FLAG_NUMBER64 \
                                                | HTTP_QUERY_FLAG_COALESCE_WITH_COMMA \
                                                )
INTERNETAPI_(HINTERNET) HttpOpenRequestA(
    _In_ HINTERNET hConnect,
    _In_opt_ LPCSTR lpszVerb,
    _In_opt_ LPCSTR lpszObjectName,
    _In_opt_ LPCSTR lpszVersion,
    _In_opt_ LPCSTR lpszReferrer,
    _In_opt_z_ LPCSTR FAR * lplpszAcceptTypes,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
INTERNETAPI_(HINTERNET) HttpOpenRequestW(
    _In_ HINTERNET hConnect,
    _In_opt_ LPCWSTR lpszVerb,
    _In_opt_ LPCWSTR lpszObjectName,
    _In_opt_ LPCWSTR lpszVersion,
    _In_opt_ LPCWSTR lpszReferrer,
    _In_opt_z_ LPCWSTR FAR * lplpszAcceptTypes,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
BOOLAPI HttpAddRequestHeadersA(
    _In_ HINTERNET hRequest,
    _When_(dwHeadersLength == (DWORD)-1, _In_z_)
    _When_(dwHeadersLength != (DWORD)-1, _In_reads_(dwHeadersLength))
    LPCSTR lpszHeaders,
    _In_ DWORD dwHeadersLength,
    _In_ DWORD dwModifiers
    );
BOOLAPI HttpAddRequestHeadersW(
    _In_ HINTERNET hRequest,
    _When_(dwHeadersLength == (DWORD)-1, _In_z_)
    _When_(dwHeadersLength != (DWORD)-1, _In_reads_(dwHeadersLength))
    LPCWSTR lpszHeaders,
    _In_ DWORD dwHeadersLength,
    _In_ DWORD dwModifiers
    );
BOOLAPI HttpSendRequestA(
    _In_ HINTERNET hRequest,
    _In_reads_opt_(dwHeadersLength) LPCSTR lpszHeaders,
    _In_ DWORD dwHeadersLength,
    _In_reads_bytes_opt_(dwOptionalLength) LPVOID lpOptional,
    _In_ DWORD dwOptionalLength
    );
BOOLAPI HttpSendRequestW(
    _In_ HINTERNET hRequest,
    _In_reads_opt_(dwHeadersLength) LPCWSTR lpszHeaders,
    _In_ DWORD dwHeadersLength,
    _In_reads_bytes_opt_(dwOptionalLength) LPVOID lpOptional,
    _In_ DWORD dwOptionalLength
    );
BOOLAPI HttpSendRequestExA(
    _In_ HINTERNET hRequest,
    _In_opt_ LPINTERNET_BUFFERSA lpBuffersIn,
    _Out_opt_ LPINTERNET_BUFFERSA lpBuffersOut,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
BOOLAPI HttpSendRequestExW(
    _In_ HINTERNET hRequest,
    _In_opt_ LPINTERNET_BUFFERSW lpBuffersIn,
    _Out_opt_ LPINTERNET_BUFFERSW lpBuffersOut,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
BOOLAPI HttpEndRequestA(
    _In_ HINTERNET hRequest,
    _Out_opt_ LPINTERNET_BUFFERSA lpBuffersOut,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
BOOLAPI HttpEndRequestW(
    _In_ HINTERNET hRequest,
    _Out_opt_ LPINTERNET_BUFFERSW lpBuffersOut,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
BOOLAPI
HttpQueryInfoA(
    _In_ HINTERNET hRequest,
    _In_ DWORD dwInfoLevel,
    _Inout_updates_bytes_to_opt_(*lpdwBufferLength, *lpdwBufferLength) __out_data_source(NETWORK) LPVOID lpBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _Inout_opt_ LPDWORD lpdwIndex
    );
BOOLAPI
HttpQueryInfoW(
    _In_ HINTERNET hRequest,
    _In_ DWORD dwInfoLevel,
    _Inout_updates_bytes_to_opt_(*lpdwBufferLength, *lpdwBufferLength) __out_data_source(NETWORK) LPVOID lpBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _Inout_opt_ LPDWORD lpdwIndex
    );
typedef struct
{
    PWSTR pwszName;
    PWSTR pwszValue;
    PWSTR pwszDomain;
    PWSTR pwszPath;
    DWORD dwFlags;
    FILETIME ftExpires;
    BOOL fExpiresSet;
} INTERNET_COOKIE2;
BOOLAPI
InternetSetCookieA(
    _In_ LPCSTR lpszUrl,
    _In_opt_ LPCSTR lpszCookieName,
    _In_ LPCSTR lpszCookieData
    );
BOOLAPI
InternetSetCookieW(
    _In_ LPCWSTR lpszUrl,
    _In_opt_ LPCWSTR lpszCookieName,
    _In_ LPCWSTR lpszCookieData
    );
BOOLAPI
InternetGetCookieA(
    _In_ LPCSTR lpszUrl,
    _In_opt_ LPCSTR lpszCookieName,
    _Out_writes_opt_(*lpdwSize) LPSTR lpszCookieData,
    _Inout_ LPDWORD lpdwSize
    );
BOOLAPI
InternetGetCookieW(
    _In_ LPCWSTR lpszUrl,
    _In_opt_ LPCWSTR lpszCookieName,
    _Out_writes_opt_(*lpdwSize) LPWSTR lpszCookieData,
    _Inout_ LPDWORD lpdwSize
    );
INTERNETAPI_(DWORD)
InternetSetCookieExA(
    _In_ LPCSTR lpszUrl,
    _In_opt_ LPCSTR lpszCookieName,
    _In_ LPCSTR lpszCookieData,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwReserved
    );
INTERNETAPI_(DWORD)
InternetSetCookieExW(
    _In_ LPCWSTR lpszUrl,
    _In_opt_ LPCWSTR lpszCookieName,
    _In_ LPCWSTR lpszCookieData,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwReserved
    );
BOOLAPI
InternetGetCookieExA(
    _In_ LPCSTR lpszUrl,
    _In_opt_ LPCSTR lpszCookieName,
    _In_reads_opt_(*lpdwSize) LPSTR lpszCookieData,
    _Inout_ LPDWORD lpdwSize,
    _In_ DWORD dwFlags,
    _Reserved_ LPVOID lpReserved
    );
BOOLAPI
InternetGetCookieExW(
    _In_ LPCWSTR lpszUrl,
    _In_opt_ LPCWSTR lpszCookieName,
    _In_reads_opt_(*lpdwSize) LPWSTR lpszCookieData,
    _Inout_ LPDWORD lpdwSize,
    _In_ DWORD dwFlags,
    _Reserved_ LPVOID lpReserved
    );
INTERNETAPI_(VOID)
InternetFreeCookies(
    _Inout_opt_ INTERNET_COOKIE2 *pCookies,
    _In_ DWORD dwCookieCount
);
INTERNETAPI_(DWORD)
InternetGetCookieEx2(
    _In_ PCWSTR pcwszUrl,
    _In_opt_ PCWSTR pcwszCookieName,
    _In_ DWORD dwFlags,
    _Outptr_ INTERNET_COOKIE2 **ppCookies,
    _Out_ PDWORD pdwCookieCount
);
INTERNETAPI_(DWORD)
InternetSetCookieEx2(
    _In_ PCWSTR pcwszUrl,
    _In_ const INTERNET_COOKIE2 *pCookie,
    _In_opt_ PCWSTR pcwszP3PPolicy,
    _In_ DWORD dwFlags,
    _Out_ PDWORD pdwCookieState
);
INTERNETAPI_(DWORD)
InternetAttemptConnect(
    _In_ DWORD dwReserved
    );
BOOLAPI
InternetCheckConnectionA(
    _In_ LPCSTR lpszUrl,
    _In_ DWORD dwFlags,
    _In_ DWORD dwReserved
    );
BOOLAPI
InternetCheckConnectionW(
    _In_ LPCWSTR lpszUrl,
    _In_ DWORD dwFlags,
    _In_ DWORD dwReserved
    );
DWORD InternetAuthNotifyCallback
(
    DWORD_PTR dwContext,
    DWORD dwReturn,
    LPVOID lpReserved
);
typedef DWORD (CALLBACK * PFN_AUTH_NOTIFY) (DWORD_PTR, DWORD, LPVOID);
typedef struct
{
    DWORD cbStruct;
    DWORD dwOptions;
    PFN_AUTH_NOTIFY pfnNotify;
    DWORD_PTR dwContext;
}
    INTERNET_AUTH_NOTIFY_DATA;
BOOLAPI ResumeSuspendedDownload(
    _In_ HINTERNET hRequest,
    _In_ DWORD dwResultCode
    );
INTERNETAPI_(DWORD) InternetErrorDlg(
    _In_ HWND hWnd,
    _Inout_opt_ HINTERNET hRequest,
    _In_ DWORD dwError,
    _In_ DWORD dwFlags,
    _Inout_opt_ LPVOID * lppvData
    );
INTERNETAPI_(DWORD) InternetConfirmZoneCrossingA(
    _In_ HWND hWnd,
    _In_ LPSTR szUrlPrev,
    _In_ LPSTR szUrlNew,
    _In_ BOOL bPost
    );
INTERNETAPI_(DWORD) InternetConfirmZoneCrossingW(
    _In_ HWND hWnd,
    _In_ LPWSTR szUrlPrev,
    _In_ LPWSTR szUrlNew,
    _In_ BOOL bPost
    );
                                    | COOKIE_CACHE_ENTRY \
                                    | URLHISTORY_CACHE_ENTRY \
                                    | TRACK_OFFLINE_CACHE_ENTRY \
                                    | TRACK_ONLINE_CACHE_ENTRY \
                                    | STICKY_CACHE_ENTRY
#pragma warning(disable:4201)
typedef struct _INTERNET_CACHE_ENTRY_INFOA {
    DWORD dwStructSize;
    LPSTR lpszSourceUrlName;
    LPSTR lpszLocalFileName;
    DWORD CacheEntryType;
    DWORD dwUseCount;
    DWORD dwHitRate;
    DWORD dwSizeLow;
    DWORD dwSizeHigh;
    FILETIME LastModifiedTime;
    FILETIME ExpireTime;
    FILETIME LastAccessTime;
    FILETIME LastSyncTime;
    LPSTR lpHeaderInfo;
    DWORD dwHeaderInfoSize;
    LPSTR lpszFileExtension;
        union {
                DWORD dwReserved;
                DWORD dwExemptDelta;
    };
} INTERNET_CACHE_ENTRY_INFOA, * LPINTERNET_CACHE_ENTRY_INFOA;
typedef struct _INTERNET_CACHE_ENTRY_INFOW {
    DWORD dwStructSize;
    LPWSTR lpszSourceUrlName;
    LPWSTR lpszLocalFileName;
    DWORD CacheEntryType;
    DWORD dwUseCount;
    DWORD dwHitRate;
    DWORD dwSizeLow;
    DWORD dwSizeHigh;
    FILETIME LastModifiedTime;
    FILETIME ExpireTime;
    FILETIME LastAccessTime;
    FILETIME LastSyncTime;
    LPWSTR lpHeaderInfo;
    DWORD dwHeaderInfoSize;
    LPWSTR lpszFileExtension;
        union {
                DWORD dwReserved;
                DWORD dwExemptDelta;
    };
} INTERNET_CACHE_ENTRY_INFOW, * LPINTERNET_CACHE_ENTRY_INFOW;
typedef INTERNET_CACHE_ENTRY_INFOW INTERNET_CACHE_ENTRY_INFO;
typedef LPINTERNET_CACHE_ENTRY_INFOW LPINTERNET_CACHE_ENTRY_INFO;
#pragma warning(default:4201)
typedef struct _INTERNET_CACHE_TIMESTAMPS {
    FILETIME ftExpires;
    FILETIME ftLastModified;
} INTERNET_CACHE_TIMESTAMPS, *LPINTERNET_CACHE_TIMESTAMPS;
typedef LONGLONG GROUPID;
            CACHEGROUP_ATTRIBUTE_TYPE \
        | CACHEGROUP_ATTRIBUTE_QUOTA \
        | CACHEGROUP_ATTRIBUTE_GROUPNAME \
        | CACHEGROUP_ATTRIBUTE_STORAGE
typedef struct _INTERNET_CACHE_GROUP_INFOA {
    DWORD dwGroupSize;
    DWORD dwGroupFlags;
    DWORD dwGroupType;
    DWORD dwDiskUsage;
    DWORD dwDiskQuota;
    DWORD dwOwnerStorage[GROUP_OWNER_STORAGE_SIZE];
    CHAR szGroupName[GROUPNAME_MAX_LENGTH];
} INTERNET_CACHE_GROUP_INFOA, * LPINTERNET_CACHE_GROUP_INFOA;
typedef struct _INTERNET_CACHE_GROUP_INFOW {
    DWORD dwGroupSize;
    DWORD dwGroupFlags;
    DWORD dwGroupType;
    DWORD dwDiskUsage;
    DWORD dwDiskQuota;
    DWORD dwOwnerStorage[GROUP_OWNER_STORAGE_SIZE];
    WCHAR szGroupName[GROUPNAME_MAX_LENGTH];
} INTERNET_CACHE_GROUP_INFOW, * LPINTERNET_CACHE_GROUP_INFOW;
typedef INTERNET_CACHE_GROUP_INFOW INTERNET_CACHE_GROUP_INFO;
typedef LPINTERNET_CACHE_GROUP_INFOW LPINTERNET_CACHE_GROUP_INFO;
BOOLAPI CreateUrlCacheEntryA(
    _In_ LPCSTR lpszUrlName,
    _In_ DWORD dwExpectedFileSize,
    _In_opt_ LPCSTR lpszFileExtension,
    _Inout_updates_(MAX_PATH) LPSTR lpszFileName,
    _In_ DWORD dwReserved
    );
BOOLAPI CreateUrlCacheEntryW(
    _In_ LPCWSTR lpszUrlName,
    _In_ DWORD dwExpectedFileSize,
    _In_opt_ LPCWSTR lpszFileExtension,
    _Inout_updates_(MAX_PATH) LPWSTR lpszFileName,
    _In_ DWORD dwReserved
    );
BOOLAPI
CommitUrlCacheEntryA(
    _In_ LPCSTR lpszUrlName,
    _In_opt_ LPCSTR lpszLocalFileName,
    _In_ FILETIME ExpireTime,
    _In_ FILETIME LastModifiedTime,
    _In_ DWORD CacheEntryType,
    _In_reads_opt_(cchHeaderInfo) LPBYTE lpHeaderInfo,
    _In_ DWORD cchHeaderInfo,
    _Reserved_ LPCSTR lpszFileExtension,
    _In_opt_ LPCSTR lpszOriginalUrl
    );
BOOLAPI
CommitUrlCacheEntryW(
    _In_ LPCWSTR lpszUrlName,
    _In_opt_ LPCWSTR lpszLocalFileName,
    _In_ FILETIME ExpireTime,
    _In_ FILETIME LastModifiedTime,
    _In_ DWORD CacheEntryType,
    _In_reads_opt_(cchHeaderInfo) LPWSTR lpszHeaderInfo,
    _In_ DWORD cchHeaderInfo,
    _Reserved_ LPCWSTR lpszFileExtension,
    _In_opt_ LPCWSTR lpszOriginalUrl
    );
BOOLAPI
RetrieveUrlCacheEntryFileA(
    _In_ LPCSTR lpszUrlName,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ DWORD dwReserved
    );
BOOLAPI
RetrieveUrlCacheEntryFileW(
    _In_ LPCWSTR lpszUrlName,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ DWORD dwReserved
    );
BOOLAPI UnlockUrlCacheEntryFileA(
    _In_ LPCSTR lpszUrlName,
    _Reserved_ DWORD dwReserved
    );
BOOLAPI UnlockUrlCacheEntryFileW(
    _In_ LPCWSTR lpszUrlName,
    _Reserved_ DWORD dwReserved
    );
INTERNETAPI_(HANDLE)
RetrieveUrlCacheEntryStreamA(
    _In_ LPCSTR lpszUrlName,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _In_ BOOL fRandomRead,
    _Reserved_ DWORD dwReserved
    );
INTERNETAPI_(HANDLE)
RetrieveUrlCacheEntryStreamW(
    _In_ LPCWSTR lpszUrlName,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _In_ BOOL fRandomRead,
    _Reserved_ DWORD dwReserved
    );
BOOLAPI
ReadUrlCacheEntryStream(
    _In_ HANDLE hUrlCacheStream,
    _In_ DWORD dwLocation,
    _Out_writes_bytes_(*lpdwLen) __out_data_source(NETWORK) LPVOID lpBuffer,
    _Inout_ LPDWORD lpdwLen,
    _Reserved_ DWORD Reserved
    );
BOOLAPI
ReadUrlCacheEntryStreamEx(
    _In_ HANDLE hUrlCacheStream,
    _In_ DWORDLONG qwLocation,
    _Out_writes_bytes_(*lpdwLen) __out_data_source(NETWORK) LPVOID lpBuffer,
    _Inout_ LPDWORD lpdwLen
    );
BOOLAPI
UnlockUrlCacheEntryStream(
    _In_ HANDLE hUrlCacheStream,
    _Reserved_ DWORD Reserved
    );
BOOLAPI
GetUrlCacheEntryInfoA(
    _In_ LPCSTR lpszUrlName,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo,
    _Inout_opt_ LPDWORD lpcbCacheEntryInfo
    );
BOOLAPI
GetUrlCacheEntryInfoW(
    _In_ LPCWSTR lpszUrlName,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo,
    _Inout_opt_ LPDWORD lpcbCacheEntryInfo
    );
URLCACHEAPI_(HANDLE) FindFirstUrlCacheGroup(
    _In_ DWORD dwFlags,
    _In_ DWORD dwFilter,
    _Reserved_ LPVOID lpSearchCondition,
    _Reserved_ DWORD dwSearchCondition,
    _Out_ GROUPID* lpGroupId,
    _Reserved_ LPVOID lpReserved
    );
BOOLAPI FindNextUrlCacheGroup(
    _In_ HANDLE hFind,
    _Out_ GROUPID* lpGroupId,
    _Reserved_ LPVOID lpReserved
    );
BOOLAPI GetUrlCacheGroupAttributeA(
    _In_ GROUPID gid,
    _Reserved_ DWORD dwFlags,
    _In_ DWORD dwAttributes,
    _Out_writes_bytes_(*lpcbGroupInfo) LPINTERNET_CACHE_GROUP_INFOA lpGroupInfo,
    _Inout_ LPDWORD lpcbGroupInfo,
    _Reserved_ LPVOID lpReserved
    );
BOOLAPI GetUrlCacheGroupAttributeW(
    _In_ GROUPID gid,
    _Reserved_ DWORD dwFlags,
    _In_ DWORD dwAttributes,
    _Out_writes_bytes_(*lpcbGroupInfo) LPINTERNET_CACHE_GROUP_INFOW lpGroupInfo,
    _Inout_ LPDWORD lpcbGroupInfo,
    _Reserved_ LPVOID lpReserved
    );
BOOLAPI SetUrlCacheGroupAttributeA(
    _In_ GROUPID gid,
    _Reserved_ DWORD dwFlags,
    _In_ DWORD dwAttributes,
    _In_ LPINTERNET_CACHE_GROUP_INFOA lpGroupInfo,
    _Reserved_ LPVOID lpReserved
    );
BOOLAPI SetUrlCacheGroupAttributeW(
    _In_ GROUPID gid,
    _Reserved_ DWORD dwFlags,
    _In_ DWORD dwAttributes,
    _In_ LPINTERNET_CACHE_GROUP_INFOW lpGroupInfo,
    _Reserved_ LPVOID lpReserved
    );
BOOLAPI
GetUrlCacheEntryInfoExA(
    _In_ LPCSTR lpszUrl,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo,
    _Inout_opt_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ LPSTR lpszRedirectUrl,
    _Reserved_ LPDWORD lpcbRedirectUrl,
    _Reserved_ LPVOID lpReserved,
    _In_ DWORD dwFlags
    );
BOOLAPI
GetUrlCacheEntryInfoExW(
    _In_ LPCWSTR lpszUrl,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo,
    _Inout_opt_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ LPWSTR lpszRedirectUrl,
    _Reserved_ LPDWORD lpcbRedirectUrl,
    _Reserved_ LPVOID lpReserved,
    _In_ DWORD dwFlags
    );
BOOLAPI SetUrlCacheEntryInfoA(
    _In_ LPCSTR lpszUrlName,
    _In_ LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo,
    _In_ DWORD dwFieldControl
    );
BOOLAPI SetUrlCacheEntryInfoW(
    _In_ LPCWSTR lpszUrlName,
    _In_ LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo,
    _In_ DWORD dwFieldControl
    );
INTERNETAPI_(GROUPID) CreateUrlCacheGroup(
    _In_ DWORD dwFlags,
    _Reserved_ LPVOID lpReserved
    );
BOOLAPI DeleteUrlCacheGroup(
    _In_ GROUPID GroupId,
    _In_ DWORD dwFlags,
    _Reserved_ LPVOID lpReserved
    );
BOOLAPI SetUrlCacheEntryGroupA(
    _In_ LPCSTR lpszUrlName,
    _In_ DWORD dwFlags,
    _In_ GROUPID GroupId,
    _Reserved_ LPBYTE pbGroupAttributes,
    _Reserved_ DWORD cbGroupAttributes,
    _Reserved_ LPVOID lpReserved
    );
BOOLAPI SetUrlCacheEntryGroupW(
    _In_ LPCWSTR lpszUrlName,
    _In_ DWORD dwFlags,
    _In_ GROUPID GroupId,
    _Reserved_ LPBYTE pbGroupAttributes,
    _Reserved_ DWORD cbGroupAttributes,
    _Reserved_ LPVOID lpReserved
    );
INTERNETAPI_(HANDLE)
FindFirstUrlCacheEntryExA(
    _In_opt_ LPCSTR lpszUrlSearchPattern,
    _In_ DWORD dwFlags,
    _In_ DWORD dwFilter,
    _In_ GROUPID GroupId,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpFirstCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ LPVOID lpGroupAttributes,
    _Reserved_ LPDWORD lpcbGroupAttributes,
    _Reserved_ LPVOID lpReserved
    );
INTERNETAPI_(HANDLE)
FindFirstUrlCacheEntryExW(
    _In_opt_ LPCWSTR lpszUrlSearchPattern,
    _In_ DWORD dwFlags,
    _In_ DWORD dwFilter,
    _In_ GROUPID GroupId,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpFirstCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ LPVOID lpGroupAttributes,
    _Reserved_ LPDWORD lpcbGroupAttributes,
    _Reserved_ LPVOID lpReserved
    );
BOOLAPI
FindNextUrlCacheEntryExA(
    _In_ HANDLE hEnumHandle,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpNextCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ LPVOID lpGroupAttributes,
    _Reserved_ LPDWORD lpcbGroupAttributes,
    _Reserved_ LPVOID lpReserved
    );
BOOLAPI
FindNextUrlCacheEntryExW(
    _In_ HANDLE hEnumHandle,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpNextCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ LPVOID lpGroupAttributes,
    _Reserved_ LPDWORD lpcbGroupAttributes,
    _Reserved_ LPVOID lpReserved
    );
INTERNETAPI_(HANDLE)
FindFirstUrlCacheEntryA(
    _In_opt_ LPCSTR lpszUrlSearchPattern,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpFirstCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo
    );
INTERNETAPI_(HANDLE)
FindFirstUrlCacheEntryW(
    _In_opt_ LPCWSTR lpszUrlSearchPattern,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpFirstCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo
    );
BOOLAPI
FindNextUrlCacheEntryA(
    _In_ HANDLE hEnumHandle,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpNextCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo
    );
BOOLAPI
FindNextUrlCacheEntryW(
    _In_ HANDLE hEnumHandle,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpNextCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo
    );
BOOLAPI FindCloseUrlCache(
    _In_ HANDLE hEnumHandle
    );
BOOLAPI DeleteUrlCacheEntryA(
    _In_ LPCSTR lpszUrlName
    );
BOOLAPI DeleteUrlCacheEntryW(
    _In_ LPCWSTR lpszUrlName
    );
INTERNETAPI_(DWORD) InternetDialA(
    _In_ HWND hwndParent,
    _In_opt_ LPSTR lpszConnectoid,
    _In_ DWORD dwFlags,
    _Out_ DWORD_PTR *lpdwConnection,
    _Reserved_ DWORD dwReserved
    );
INTERNETAPI_(DWORD) InternetDialW(
    _In_ HWND hwndParent,
    _In_opt_ LPWSTR lpszConnectoid,
    _In_ DWORD dwFlags,
    _Out_ DWORD_PTR *lpdwConnection,
    _Reserved_ DWORD dwReserved
    );
INTERNETAPI_(DWORD) InternetHangUp(
    _In_ DWORD_PTR dwConnection,
    _Reserved_ DWORD dwReserved);
BOOLAPI InternetGoOnlineA(
    _In_opt_ LPCSTR lpszURL,
    _In_ HWND hwndParent,
    _In_ DWORD dwFlags
    );
BOOLAPI InternetGoOnlineW(
    _In_opt_ LPCWSTR lpszURL,
    _In_ HWND hwndParent,
    _In_ DWORD dwFlags
    );
BOOLAPI InternetAutodial(
    _In_ DWORD dwFlags,
    _In_opt_ HWND hwndParent);
BOOLAPI InternetAutodialHangup(
    _Reserved_ DWORD dwReserved);
BOOLAPI InternetGetConnectedState(
    _Out_ LPDWORD lpdwFlags,
    _Reserved_ DWORD dwReserved);
BOOLAPI
InternetGetConnectedStateExA(
    _Out_opt_ LPDWORD lpdwFlags,
    _Out_writes_opt_(cchNameLen) LPSTR lpszConnectionName,
    _In_ DWORD cchNameLen,
    _Reserved_ DWORD dwReserved
);
BOOLAPI
InternetGetConnectedStateExW(
    _Out_opt_ LPDWORD lpdwFlags,
    _Out_writes_opt_(cchNameLen) LPWSTR lpszConnectionName,
    _In_ DWORD cchNameLen,
    _Reserved_ DWORD dwReserved
);
struct AutoProxyHelperFunctions;
typedef struct AutoProxyHelperVtbl
{
    BOOL ( __stdcall *IsResolvable )(
            LPSTR lpszHost);
    DWORD ( __stdcall *GetIPAddress )(
           LPSTR lpszIPAddress,
           LPDWORD lpdwIPAddressSize);
    DWORD ( __stdcall *ResolveHostName )(
           LPSTR lpszHostName,
           LPSTR lpszIPAddress,
           LPDWORD lpdwIPAddressSize);
    BOOL ( __stdcall *IsInNet )(
            LPSTR lpszIPAddress,
            LPSTR lpszDest,
            LPSTR lpszMask);
    BOOL ( __stdcall *IsResolvableEx )(
            LPSTR lpszHost
        );
    DWORD ( __stdcall *GetIPAddressEx )(
            LPSTR lpszIPAddress,
            LPDWORD lpdwIPAddressSize
        );
    DWORD ( __stdcall *ResolveHostNameEx )(
            LPSTR lpszHostName,
            LPSTR lpszIPAddress,
            LPDWORD lpdwIPAddressSize
        );
    BOOL ( __stdcall *IsInNetEx )(
            LPSTR lpszIPAddress,
            LPSTR lpszIPPrefix
        );
    DWORD ( __stdcall *SortIpList )(
            LPSTR lpszIPAddressList,
            LPSTR lpszIPSortedList,
            LPDWORD lpdwIPSortedListSize
        );
}AutoProxyHelperVtbl;
typedef struct
{
    DWORD dwStructSize;
    LPSTR lpszScriptBuffer;
    DWORD dwScriptBufferSize;
} AUTO_PROXY_SCRIPT_BUFFER, *LPAUTO_PROXY_SCRIPT_BUFFER;
typedef struct AutoProxyHelperFunctions
{
    const struct AutoProxyHelperVtbl * lpVtbl;
} AutoProxyHelperFunctions;
typedef BOOL ( CALLBACK *pfnInternetInitializeAutoProxyDll)(DWORD dwVersion,
                           LPSTR lpszDownloadedTempFile,
                           LPSTR lpszMime,
                           AutoProxyHelperFunctions* lpAutoProxyCallbacks,
                           LPAUTO_PROXY_SCRIPT_BUFFER lpAutoProxyScriptBuffer );
typedef BOOL (CALLBACK *pfnInternetDeInitializeAutoProxyDll)(LPSTR lpszMime,
                           DWORD dwReserved);
typedef BOOL (CALLBACK *pfnInternetGetProxyInfo)(LPCSTR lpszUrl,
                           DWORD dwUrlLength,
                           LPSTR lpszUrlHostName,
                           DWORD dwUrlHostNameLength,
                           LPSTR* lplpszProxyHostName,
                           LPDWORD lpdwProxyHostNameLength);
typedef enum{
    WPAD_CACHE_DELETE_CURRENT = 0x0,
    WPAD_CACHE_DELETE_ALL = 0x1
} WPAD_CACHE_DELETE;
BOOLAPI DeleteWpadCacheForNetworks(
    _In_ WPAD_CACHE_DELETE
);
BOOLAPI InternetInitializeAutoProxyDll(
    _In_ DWORD dwReserved
    );
BOOLAPI DetectAutoProxyUrl(
    _Out_writes_(cchAutoProxyUrl) PSTR pszAutoProxyUrl,
    _In_ DWORD cchAutoProxyUrl,
    _In_ DWORD dwDetectFlags
    );
BOOLAPI CreateMD5SSOHash (
    _In_ PWSTR pszChallengeInfo,
    _In_ PWSTR pwszRealm,
    _In_ PWSTR pwszTarget,
    _Out_ PBYTE pbHexHash
    );
typedef DWORD (CALLBACK * PFN_DIAL_HANDLER) (HWND, LPCSTR, DWORD, LPDWORD);
BOOLAPI InternetSetDialStateA(
    _In_opt_ LPCSTR lpszConnectoid,
    _In_ DWORD dwState,
    _Reserved_ DWORD dwReserved
    );
BOOLAPI InternetSetDialStateW(
    _In_opt_ LPCWSTR lpszConnectoid,
    _In_ DWORD dwState,
    _Reserved_ DWORD dwReserved
    );
BOOLAPI InternetSetPerSiteCookieDecisionA(
    _In_ LPCSTR pchHostName,
    _In_ DWORD dwDecision
);
BOOLAPI InternetSetPerSiteCookieDecisionW(
    _In_ LPCWSTR pchHostName,
    _In_ DWORD dwDecision
);
BOOLAPI InternetGetPerSiteCookieDecisionA(
    _In_ LPCSTR pchHostName,
    _Out_ unsigned long* pResult
);
BOOLAPI InternetGetPerSiteCookieDecisionW(
    _In_ LPCWSTR pchHostName,
    _Out_ unsigned long* pResult
);
BOOLAPI InternetClearAllPerSiteCookieDecisions();
BOOLAPI InternetEnumPerSiteCookieDecisionA(
    _Out_writes_to_(*pcSiteNameSize, *pcSiteNameSize) LPSTR pszSiteName,
    _Inout_ unsigned long *pcSiteNameSize,
    _Out_ unsigned long *pdwDecision,
    _In_ unsigned long dwIndex
);
BOOLAPI InternetEnumPerSiteCookieDecisionW(
    _Out_writes_to_(*pcSiteNameSize, *pcSiteNameSize) LPWSTR pszSiteName,
    _Inout_ unsigned long *pcSiteNameSize,
    _Out_ unsigned long *pdwDecision,
    _In_ unsigned long dwIndex
);
INTERNETAPI_(DWORD)
PrivacySetZonePreferenceW(
    _In_ DWORD dwZone,
    _In_ DWORD dwType,
    _In_ DWORD dwTemplate,
    _In_opt_ LPCWSTR pszPreference
    );
INTERNETAPI_(DWORD)
PrivacyGetZonePreferenceW(
    _In_ DWORD dwZone,
    _In_ DWORD dwType,
    _Out_opt_ LPDWORD pdwTemplate,
    _Out_writes_opt_(*pdwBufferLength) LPWSTR pszBuffer,
    _Inout_opt_ LPDWORD pdwBufferLength
    );
INTERNETAPI_(DWORD)
HttpIsHostHstsEnabled(
    _In_z_ PCWSTR pcwszUrl,
    _Out_ PBOOL pfIsHsts
);
#include <poppack.h>
#endif
#pragma endregion
