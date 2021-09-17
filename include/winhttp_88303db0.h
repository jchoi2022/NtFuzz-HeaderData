#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#include <pshpack8.h>
typedef LPVOID HINTERNET;
typedef HINTERNET * LPHINTERNET;
typedef WORD INTERNET_PORT;
typedef INTERNET_PORT * LPINTERNET_PORT;
typedef struct
{
    DWORD_PTR dwResult;
    DWORD dwError;
} WINHTTP_ASYNC_RESULT, *LPWINHTTP_ASYNC_RESULT;
typedef struct
{
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
} HTTP_VERSION_INFO, *LPHTTP_VERSION_INFO;
typedef int INTERNET_SCHEME, *LPINTERNET_SCHEME;
#pragma warning( disable : 4121 )
typedef struct
{
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
} URL_COMPONENTS, *LPURL_COMPONENTS;
typedef URL_COMPONENTS URL_COMPONENTSW;
typedef LPURL_COMPONENTS LPURL_COMPONENTSW;
#pragma warning( default : 4121 )
typedef struct
{
    DWORD dwAccessType;
    LPWSTR lpszProxy;
    LPWSTR lpszProxyBypass;
} WINHTTP_PROXY_INFO, *LPWINHTTP_PROXY_INFO;
typedef WINHTTP_PROXY_INFO WINHTTP_PROXY_INFOW;
typedef LPWINHTTP_PROXY_INFO LPWINHTTP_PROXY_INFOW;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef struct
{
    DWORD dwFlags;
    DWORD dwAutoDetectFlags;
    LPCWSTR lpszAutoConfigUrl;
    LPVOID lpvReserved;
    DWORD dwReserved;
    BOOL fAutoLogonIfChallenged;
} WINHTTP_AUTOPROXY_OPTIONS;
typedef struct _WINHTTP_PROXY_RESULT_ENTRY
{
    BOOL fProxy;
    BOOL fBypass;
    INTERNET_SCHEME ProxyScheme;
    PWSTR pwszProxy;
    INTERNET_PORT ProxyPort;
} WINHTTP_PROXY_RESULT_ENTRY;
typedef struct _WINHTTP_PROXY_RESULT
{
    DWORD cEntries;
    WINHTTP_PROXY_RESULT_ENTRY *pEntries;
} WINHTTP_PROXY_RESULT;
typedef struct _WINHTTP_PROXY_RESULT_EX
{
    DWORD cEntries;
    WINHTTP_PROXY_RESULT_ENTRY *pEntries;
    HANDLE hProxyDetectionHandle;
    DWORD dwProxyInterfaceAffinity;
} WINHTTP_PROXY_RESULT_EX;
typedef struct _WinHttpProxyNetworkKey
{
    unsigned char pbBuffer[NETWORKING_KEY_BUFSIZE];
} WINHTTP_PROXY_NETWORKING_KEY, *PWINHTTP_PROXY_NETWORKING_KEY;
typedef struct _WINHTTP_PROXY_SETTINGS
{
    DWORD dwStructSize;
    DWORD dwFlags;
    DWORD dwCurrentSettingsVersion;
    PWSTR pwszConnectionName;
    PWSTR pwszProxy;
    PWSTR pwszProxyBypass;
    PWSTR pwszAutoconfigUrl;
    PWSTR pwszAutoconfigSecondaryUrl;
    DWORD dwAutoDiscoveryFlags;
    PWSTR pwszLastKnownGoodAutoConfigUrl;
    DWORD dwAutoconfigReloadDelayMins;
    FILETIME ftLastKnownDetectTime;
    DWORD dwDetectedInterfaceIpCount;
    PDWORD pdwDetectedInterfaceIp;
    DWORD cNetworkKeys;
    PWINHTTP_PROXY_NETWORKING_KEY pNetworkKeys;
} WINHTTP_PROXY_SETTINGS, *PWINHTTP_PROXY_SETTINGS;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef struct
{
    FILETIME ftExpiry;
    FILETIME ftStart;
    LPWSTR lpszSubjectInfo;
    LPWSTR lpszIssuerInfo;
    LPWSTR lpszProtocolName;
    LPWSTR lpszSignatureAlgName;
    LPWSTR lpszEncryptionAlgName;
    DWORD dwKeySize;
} WINHTTP_CERTIFICATE_INFO;
typedef struct _WINHTTP_CONNECTION_INFO
{
    DWORD cbSize;
    SOCKADDR_STORAGE LocalAddress;
    SOCKADDR_STORAGE RemoteAddress;
} WINHTTP_CONNECTION_INFO, *PWINHTTP_CONNECTION_INFO;
typedef enum _WINHTTP_REQUEST_TIME_ENTRY
{
    WinHttpProxyDetectionStart = 0,
    WinHttpProxyDetectionEnd,
    WinHttpConnectionAcquireStart,
    WinHttpConnectionAcquireWaitEnd,
    WinHttpConnectionAcquireEnd,
    WinHttpNameResolutionStart,
    WinHttpNameResolutionEnd,
    WinHttpConnectionEstablishmentStart,
    WinHttpConnectionEstablishmentEnd,
    WinHttpTlsHandshakeClientLeg1Start,
    WinHttpTlsHandshakeClientLeg1End,
    WinHttpTlsHandshakeClientLeg2Start,
    WinHttpTlsHandshakeClientLeg2End,
    WinHttpTlsHandshakeClientLeg3Start,
    WinHttpTlsHandshakeClientLeg3End,
    WinHttpStreamWaitStart,
    WinHttpStreamWaitEnd,
    WinHttpSendRequestStart,
    WinHttpSendRequestHeadersCompressionStart,
    WinHttpSendRequestHeadersCompressionEnd,
    WinHttpSendRequestHeadersEnd,
    WinHttpSendRequestEnd,
    WinHttpReceiveResponseStart,
    WinHttpReceiveResponseHeadersDecompressionStart,
    WinHttpReceiveResponseHeadersDecompressionEnd,
    WinHttpReceiveResponseHeadersEnd,
    WinHttpReceiveResponseBodyDecompressionDelta,
    WinHttpReceiveResponseEnd,
    WinHttpProxyTunnelStart,
    WinHttpProxyTunnelEnd,
    WinHttpProxyTlsHandshakeClientLeg1Start,
    WinHttpProxyTlsHandshakeClientLeg1End,
    WinHttpProxyTlsHandshakeClientLeg2Start,
    WinHttpProxyTlsHandshakeClientLeg2End,
    WinHttpProxyTlsHandshakeClientLeg3Start,
    WinHttpProxyTlsHandshakeClientLeg3End,
    WinHttpRequestTimeLast,
    WinHttpRequestTimeMax = 64
} WINHTTP_REQUEST_TIME_ENTRY;
typedef struct _WINHTTP_REQUEST_TIMES
{
    ULONG cTimes;
    ULONGLONG rgullTimes[WinHttpRequestTimeMax];
} WINHTTP_REQUEST_TIMES, *PWINHTTP_REQUEST_TIMES;
typedef enum _WINHTTP_REQUEST_STAT_ENTRY
{
    WinHttpConnectFailureCount = 0,
    WinHttpProxyFailureCount,
    WinHttpTlsHandshakeClientLeg1Size,
    WinHttpTlsHandshakeServerLeg1Size,
    WinHttpTlsHandshakeClientLeg2Size,
    WinHttpTlsHandshakeServerLeg2Size,
    WinHttpRequestHeadersSize,
    WinHttpRequestHeadersCompressedSize,
    WinHttpResponseHeadersSize,
    WinHttpResponseHeadersCompressedSize,
    WinHttpResponseBodySize,
    WinHttpResponseBodyCompressedSize,
    WinHttpProxyTlsHandshakeClientLeg1Size,
    WinHttpProxyTlsHandshakeServerLeg1Size,
    WinHttpProxyTlsHandshakeClientLeg2Size,
    WinHttpProxyTlsHandshakeServerLeg2Size,
    WinHttpRequestStatLast,
    WinHttpRequestStatMax = 32
} WINHTTP_REQUEST_STAT_ENTRY;
typedef struct _WINHTTP_REQUEST_STATS
{
    ULONGLONG ullFlags;
    ULONG ulIndex;
    ULONG cStats;
    ULONGLONG rgullStats[WinHttpRequestStatMax];
} WINHTTP_REQUEST_STATS, *PWINHTTP_REQUEST_STATS;
    WINHTTP_DECOMPRESSION_FLAG_GZIP | \
    WINHTTP_DECOMPRESSION_FLAG_DEFLATE)
typedef struct tagWINHTTP_CREDS
{
    LPSTR lpszUserName;
    LPSTR lpszPassword;
    LPSTR lpszRealm;
    DWORD dwAuthScheme;
    LPSTR lpszHostName;
    DWORD dwPort;
} WINHTTP_CREDS, *PWINHTTP_CREDS;
typedef struct tagWINHTTP_CREDS_EX
{
    LPSTR lpszUserName;
    LPSTR lpszPassword;
    LPSTR lpszRealm;
    DWORD dwAuthScheme;
    LPSTR lpszHostName;
    DWORD dwPort;
    LPSTR lpszUrl;
} WINHTTP_CREDS_EX, *PWINHTTP_CREDS_EX;
                                             WINHTTP_FLAG_SECURE_PROTOCOL_SSL3 | \
                                             WINHTTP_FLAG_SECURE_PROTOCOL_TLS1)
typedef
VOID
(CALLBACK * WINHTTP_STATUS_CALLBACK)(
    IN HINTERNET hInternet,
    IN DWORD_PTR dwContext,
    IN DWORD dwInternetStatus,
    IN LPVOID lpvStatusInformation OPTIONAL,
    IN DWORD dwStatusInformationLength
    );
typedef WINHTTP_STATUS_CALLBACK * LPWINHTTP_STATUS_CALLBACK;
                                                        | WINHTTP_CALLBACK_STATUS_HEADERS_AVAILABLE \
                                                        | WINHTTP_CALLBACK_STATUS_DATA_AVAILABLE \
                                                        | WINHTTP_CALLBACK_STATUS_READ_COMPLETE \
                                                        | WINHTTP_CALLBACK_STATUS_WRITE_COMPLETE \
                                                        | WINHTTP_CALLBACK_STATUS_REQUEST_ERROR \
                                                        | WINHTTP_CALLBACK_STATUS_GETPROXYFORURL_COMPLETE)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef struct
{
    BOOL fAutoDetect;
    LPWSTR lpszAutoConfigUrl;
    LPWSTR lpszProxy;
    LPWSTR lpszProxyBypass;
} WINHTTP_CURRENT_USER_IE_PROXY_CONFIG;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINHTTPAPI
WINHTTP_STATUS_CALLBACK
WINAPI
WinHttpSetStatusCallback
(
    IN HINTERNET hInternet,
    IN WINHTTP_STATUS_CALLBACK lpfnInternetCallback,
    IN DWORD dwNotificationFlags,
    IN DWORD_PTR dwReserved
);
BOOLAPI
WinHttpTimeFromSystemTime
(
    _In_ CONST SYSTEMTIME *pst,
    _Out_writes_bytes_(WINHTTP_TIME_FORMAT_BUFSIZE) LPWSTR pwszTime
);
BOOLAPI
WinHttpTimeToSystemTime
(
    _In_z_ LPCWSTR pwszTime,
    _Out_ SYSTEMTIME *pst
);
BOOLAPI
WinHttpCrackUrl
(
    _In_reads_(dwUrlLength) LPCWSTR pwszUrl,
    _In_ DWORD dwUrlLength,
    _In_ DWORD dwFlags,
    _Inout_ LPURL_COMPONENTS lpUrlComponents
);
_Success_(return != FALSE)
BOOLAPI
WinHttpCreateUrl
(
    _In_ LPURL_COMPONENTS lpUrlComponents,
    _In_ DWORD dwFlags,
    _Out_writes_to_opt_(*pdwUrlLength, *pdwUrlLength) LPWSTR pwszUrl,
    _Inout_ LPDWORD pdwUrlLength
);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
BOOLAPI
WinHttpCheckPlatform(void);
WINHTTPAPI BOOL WINAPI WinHttpGetDefaultProxyConfiguration( IN OUT WINHTTP_PROXY_INFO * pProxyInfo);
WINHTTPAPI BOOL WINAPI WinHttpSetDefaultProxyConfiguration( IN WINHTTP_PROXY_INFO * pProxyInfo);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINHTTPAPI
HINTERNET
WINAPI
WinHttpOpen
(
    _In_opt_z_ LPCWSTR pszAgentW,
    _In_ DWORD dwAccessType,
    _In_opt_z_ LPCWSTR pszProxyW,
    _In_opt_z_ LPCWSTR pszProxyBypassW,
    _In_ DWORD dwFlags
);
BOOLAPI
WinHttpCloseHandle
(
    IN HINTERNET hInternet
);
WINHTTPAPI
HINTERNET
WINAPI
WinHttpConnect
(
    IN HINTERNET hSession,
    IN LPCWSTR pswzServerName,
    IN INTERNET_PORT nServerPort,
    IN DWORD dwReserved
);
BOOLAPI
WinHttpReadData
(
    IN HINTERNET hRequest,
    _Out_writes_bytes_to_(dwNumberOfBytesToRead, *lpdwNumberOfBytesRead) __out_data_source(NETWORK) LPVOID lpBuffer,
    IN DWORD dwNumberOfBytesToRead,
    OUT LPDWORD lpdwNumberOfBytesRead
);
BOOLAPI
WinHttpWriteData
(
    IN HINTERNET hRequest,
    _In_reads_bytes_opt_(dwNumberOfBytesToWrite) LPCVOID lpBuffer,
    IN DWORD dwNumberOfBytesToWrite,
    OUT LPDWORD lpdwNumberOfBytesWritten
);
BOOLAPI
WinHttpQueryDataAvailable
(
    IN HINTERNET hRequest,
    __out_data_source(NETWORK) LPDWORD lpdwNumberOfBytesAvailable
);
_Success_(return != FALSE)
BOOLAPI
WinHttpQueryOption
(
    IN HINTERNET hInternet,
    IN DWORD dwOption,
    _Out_writes_bytes_to_opt_(*lpdwBufferLength, *lpdwBufferLength) __out_data_source(NETWORK) LPVOID lpBuffer,
    IN OUT LPDWORD lpdwBufferLength
);
BOOLAPI
WinHttpSetOption(
    _In_opt_ HINTERNET hInternet,
    _In_ DWORD dwOption,
    _When_((dwOption == WINHTTP_OPTION_USERNAME ||
            dwOption == WINHTTP_OPTION_PASSWORD ||
            dwOption == WINHTTP_OPTION_PROXY_USERNAME ||
            dwOption == WINHTTP_OPTION_PROXY_PASSWORD ||
            dwOption == WINHTTP_OPTION_USER_AGENT),
           _At_((LPCWSTR)lpBuffer, _In_reads_(dwBufferLength)))
    _When_((dwOption == WINHTTP_OPTION_CLIENT_CERT_CONTEXT),
           _In_reads_bytes_opt_(dwBufferLength))
    _When_((dwOption != WINHTTP_OPTION_USERNAME &&
            dwOption != WINHTTP_OPTION_PASSWORD &&
            dwOption != WINHTTP_OPTION_PROXY_USERNAME &&
            dwOption != WINHTTP_OPTION_PROXY_PASSWORD &&
            dwOption != WINHTTP_OPTION_CLIENT_CERT_CONTEXT &&
            dwOption != WINHTTP_OPTION_USER_AGENT),
           _In_reads_bytes_(dwBufferLength))
    LPVOID lpBuffer,
    _In_ DWORD dwBufferLength
);
BOOLAPI
WinHttpSetTimeouts
(
    IN HINTERNET hInternet,
    IN int nResolveTimeout,
    IN int nConnectTimeout,
    IN int nSendTimeout,
    IN int nReceiveTimeout
);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINHTTPAPI
DWORD
WINAPI
WinHttpIsHostInProxyBypassList
(
    _In_ const WINHTTP_PROXY_INFO *pProxyInfo,
    _In_z_ PCWSTR pwszHost,
    _In_ INTERNET_SCHEME tScheme,
    _In_ INTERNET_PORT nPort,
    _Out_ BOOL *pfIsInBypassList
);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINHTTPAPI
HINTERNET
WINAPI
WinHttpOpenRequest
(
    IN HINTERNET hConnect,
    IN LPCWSTR pwszVerb,
    IN LPCWSTR pwszObjectName,
    IN LPCWSTR pwszVersion,
    IN LPCWSTR pwszReferrer OPTIONAL,
    IN LPCWSTR FAR * ppwszAcceptTypes OPTIONAL,
    IN DWORD dwFlags
);
BOOLAPI
WinHttpAddRequestHeaders
(
    IN HINTERNET hRequest,
    _When_(dwHeadersLength == (DWORD)-1, _In_z_)
    _When_(dwHeadersLength != (DWORD)-1, _In_reads_(dwHeadersLength))
    LPCWSTR lpszHeaders,
    IN DWORD dwHeadersLength,
    IN DWORD dwModifiers
);
BOOLAPI
WinHttpSendRequest
(
    IN HINTERNET hRequest,
    _In_reads_opt_(dwHeadersLength) LPCWSTR lpszHeaders,
    IN DWORD dwHeadersLength,
    _In_reads_bytes_opt_(dwOptionalLength) LPVOID lpOptional,
    IN DWORD dwOptionalLength,
    IN DWORD dwTotalLength,
    IN DWORD_PTR dwContext
);
BOOLAPI WinHttpSetCredentials
(
    IN HINTERNET hRequest,
    IN DWORD AuthTargets,
    IN DWORD AuthScheme,
    IN LPCWSTR pwszUserName,
    IN LPCWSTR pwszPassword,
    IN LPVOID pAuthParams
);
BOOLAPI WinHttpQueryAuthSchemes
(
    IN HINTERNET hRequest,
    OUT LPDWORD lpdwSupportedSchemes,
    OUT LPDWORD lpdwFirstScheme,
    OUT LPDWORD pdwAuthTarget
);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
BOOLAPI WinHttpQueryAuthParams(
    IN HINTERNET hRequest,
    IN DWORD AuthScheme,
    OUT LPVOID* pAuthParams
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINHTTPAPI
BOOL
WINAPI
WinHttpReceiveResponse
(
    IN HINTERNET hRequest,
    IN LPVOID lpReserved
);
_Success_(return != FALSE)
BOOLAPI
WinHttpQueryHeaders
(
    IN HINTERNET hRequest,
    IN DWORD dwInfoLevel,
    IN LPCWSTR pwszName OPTIONAL,
    _Out_writes_bytes_to_opt_(*lpdwBufferLength, *lpdwBufferLength) __out_data_source(NETWORK) LPVOID lpBuffer,
    IN OUT LPDWORD lpdwBufferLength,
    IN OUT LPDWORD lpdwIndex OPTIONAL
);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
BOOLAPI
WinHttpDetectAutoProxyConfigUrl
(
    DWORD dwAutoDetectFlags,
    _Outptr_result_maybenull_ LPWSTR * ppwstrAutoConfigUrl
);
BOOLAPI
WinHttpGetProxyForUrl
(
    IN HINTERNET hSession,
    IN LPCWSTR lpcwszUrl,
    IN WINHTTP_AUTOPROXY_OPTIONS * pAutoProxyOptions,
    OUT WINHTTP_PROXY_INFO * pProxyInfo
);
WINHTTPAPI
DWORD
WINAPI
WinHttpCreateProxyResolver
(
    _In_ HINTERNET hSession,
    _Out_ HINTERNET *phResolver
);
WINHTTPAPI
DWORD
WINAPI
WinHttpGetProxyForUrlEx
(
    _In_ HINTERNET hResolver,
    _In_ PCWSTR pcwszUrl,
    _In_ WINHTTP_AUTOPROXY_OPTIONS *pAutoProxyOptions,
    _In_opt_ DWORD_PTR pContext
);
WINHTTPAPI
DWORD
WINAPI
WinHttpGetProxyForUrlEx2
(
    _In_ HINTERNET hResolver,
    _In_ PCWSTR pcwszUrl,
    _In_ WINHTTP_AUTOPROXY_OPTIONS *pAutoProxyOptions,
    _In_ DWORD cbInterfaceSelectionContext,
    _In_reads_bytes_opt_(cbInterfaceSelectionContext) BYTE *pInterfaceSelectionContext,
    _In_opt_ DWORD_PTR pContext
);
WINHTTPAPI
DWORD
WINAPI
WinHttpGetProxyResult
(
    _In_ HINTERNET hResolver,
    _Out_ WINHTTP_PROXY_RESULT *pProxyResult
);
WINHTTPAPI
DWORD
WINAPI
WinHttpGetProxyResultEx
(
    _In_ HINTERNET hResolver,
    _Out_ WINHTTP_PROXY_RESULT_EX *pProxyResultEx
);
WINHTTPAPI
VOID
WINAPI
WinHttpFreeProxyResult
(
    _Inout_ WINHTTP_PROXY_RESULT *pProxyResult
);
WINHTTPAPI
VOID
WINAPI
WinHttpFreeProxyResultEx
(
    _Inout_ WINHTTP_PROXY_RESULT_EX *pProxyResultEx
);
WINHTTPAPI
DWORD
WINAPI
WinHttpResetAutoProxy
(
    _In_ HINTERNET hSession,
    _In_ DWORD dwFlags
);
BOOLAPI
WinHttpGetIEProxyConfigForCurrentUser
(
    IN OUT WINHTTP_CURRENT_USER_IE_PROXY_CONFIG * pProxyConfig
);
WINHTTPAPI
DWORD
WINAPI
WinHttpWriteProxySettings(
    _In_ HINTERNET hSession,
    _In_ BOOL fForceUpdate,
    _In_ WINHTTP_PROXY_SETTINGS *pWinHttpProxySettings
);
WINHTTPAPI
DWORD
WINAPI
WinHttpReadProxySettings(
    _In_ HINTERNET hSession,
    _In_opt_ PCWSTR pcwszConnectionName,
    _In_ BOOL fFallBackToDefaultSettings,
    _In_ BOOL fSetAutoDiscoverForDefaultSettings,
    _Out_ DWORD *pdwSettingsVersion,
    _Out_ BOOL *pfDefaultSettingsAreReturned,
    _Out_ WINHTTP_PROXY_SETTINGS *pWinHttpProxySettings
);
WINHTTPAPI
VOID
WINAPI
WinHttpFreeProxySettings(
    _In_ WINHTTP_PROXY_SETTINGS *pWinHttpProxySettings
);
WINHTTPAPI
DWORD
WINAPI
WinHttpGetProxySettingsVersion(
    _In_ HINTERNET hSession,
    _Out_ DWORD *pdwProxySettingsVersion
);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef enum _WINHTTP_WEB_SOCKET_OPERATION
{
    WINHTTP_WEB_SOCKET_SEND_OPERATION = 0,
    WINHTTP_WEB_SOCKET_RECEIVE_OPERATION = 1,
    WINHTTP_WEB_SOCKET_CLOSE_OPERATION = 2,
    WINHTTP_WEB_SOCKET_SHUTDOWN_OPERATION = 3
} WINHTTP_WEB_SOCKET_OPERATION;
typedef enum _WINHTTP_WEB_SOCKET_BUFFER_TYPE
{
    WINHTTP_WEB_SOCKET_BINARY_MESSAGE_BUFFER_TYPE = 0,
    WINHTTP_WEB_SOCKET_BINARY_FRAGMENT_BUFFER_TYPE = 1,
    WINHTTP_WEB_SOCKET_UTF8_MESSAGE_BUFFER_TYPE = 2,
    WINHTTP_WEB_SOCKET_UTF8_FRAGMENT_BUFFER_TYPE = 3,
    WINHTTP_WEB_SOCKET_CLOSE_BUFFER_TYPE = 4
} WINHTTP_WEB_SOCKET_BUFFER_TYPE;
typedef enum _WINHTTP_WEB_SOCKET_CLOSE_STATUS
{
    WINHTTP_WEB_SOCKET_SUCCESS_CLOSE_STATUS = 1000,
    WINHTTP_WEB_SOCKET_ENDPOINT_TERMINATED_CLOSE_STATUS = 1001,
    WINHTTP_WEB_SOCKET_PROTOCOL_ERROR_CLOSE_STATUS = 1002,
    WINHTTP_WEB_SOCKET_INVALID_DATA_TYPE_CLOSE_STATUS = 1003,
    WINHTTP_WEB_SOCKET_EMPTY_CLOSE_STATUS = 1005,
    WINHTTP_WEB_SOCKET_ABORTED_CLOSE_STATUS = 1006,
    WINHTTP_WEB_SOCKET_INVALID_PAYLOAD_CLOSE_STATUS = 1007,
    WINHTTP_WEB_SOCKET_POLICY_VIOLATION_CLOSE_STATUS = 1008,
    WINHTTP_WEB_SOCKET_MESSAGE_TOO_BIG_CLOSE_STATUS = 1009,
    WINHTTP_WEB_SOCKET_UNSUPPORTED_EXTENSIONS_CLOSE_STATUS = 1010,
    WINHTTP_WEB_SOCKET_SERVER_ERROR_CLOSE_STATUS = 1011,
    WINHTTP_WEB_SOCKET_SECURE_HANDSHAKE_ERROR_CLOSE_STATUS = 1015
} WINHTTP_WEB_SOCKET_CLOSE_STATUS;
typedef struct _WINHTTP_WEB_SOCKET_ASYNC_RESULT
{
    WINHTTP_ASYNC_RESULT AsyncResult;
    WINHTTP_WEB_SOCKET_OPERATION Operation;
} WINHTTP_WEB_SOCKET_ASYNC_RESULT;
typedef struct _WINHTTP_WEB_SOCKET_STATUS
{
    DWORD dwBytesTransferred;
    WINHTTP_WEB_SOCKET_BUFFER_TYPE eBufferType;
} WINHTTP_WEB_SOCKET_STATUS;
WINHTTPAPI
HINTERNET
WINAPI
WinHttpWebSocketCompleteUpgrade
(
    _In_ HINTERNET hRequest,
    _In_opt_ DWORD_PTR pContext
);
WINHTTPAPI
DWORD
WINAPI
WinHttpWebSocketSend
(
    _In_ HINTERNET hWebSocket,
    _In_ WINHTTP_WEB_SOCKET_BUFFER_TYPE eBufferType,
    _In_reads_opt_(dwBufferLength) PVOID pvBuffer,
    _In_ DWORD dwBufferLength
);
WINHTTPAPI
DWORD
WINAPI
WinHttpWebSocketReceive
(
    _In_ HINTERNET hWebSocket,
    _Out_writes_bytes_to_(dwBufferLength, *pdwBytesRead) PVOID pvBuffer,
    _In_ DWORD dwBufferLength,
    _Out_range_(0, dwBufferLength) DWORD *pdwBytesRead,
    _Out_ WINHTTP_WEB_SOCKET_BUFFER_TYPE *peBufferType
);
WINHTTPAPI
DWORD
WINAPI
WinHttpWebSocketShutdown
(
    _In_ HINTERNET hWebSocket,
    _In_ USHORT usStatus,
    _In_reads_bytes_opt_(dwReasonLength) PVOID pvReason,
    _In_range_(0, WINHTTP_WEB_SOCKET_MAX_CLOSE_REASON_LENGTH) DWORD dwReasonLength
);
WINHTTPAPI
DWORD
WINAPI
WinHttpWebSocketClose
(
    _In_ HINTERNET hWebSocket,
    _In_ USHORT usStatus,
    _In_reads_bytes_opt_(dwReasonLength) PVOID pvReason,
    _In_range_(0, WINHTTP_WEB_SOCKET_MAX_CLOSE_REASON_LENGTH) DWORD dwReasonLength
);
WINHTTPAPI
DWORD
WINAPI
WinHttpWebSocketQueryCloseStatus
(
    _In_ HINTERNET hWebSocket,
    _Out_ USHORT *pusStatus,
    _Out_writes_bytes_to_opt_(dwReasonLength, *pdwReasonLengthConsumed) PVOID pvReason,
    _In_range_(0, WINHTTP_WEB_SOCKET_MAX_CLOSE_REASON_LENGTH) DWORD dwReasonLength,
    _Out_range_(0, WINHTTP_WEB_SOCKET_MAX_CLOSE_REASON_LENGTH) DWORD *pdwReasonLengthConsumed
);
#include <poppack.h>
#endif
#pragma endregion
