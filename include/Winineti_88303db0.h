#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <iedial.h>
#include <schannel.h>
#include <sspi.h>
                                      INTERNET_FLAG_FTP_FOLDER_VIEW)
typedef struct {
    DWORD dwStatus;
    DWORD dwSize;
} INTERNET_PREFETCH_STATUS, * LPINTERNET_PREFETCH_STATUS;
typedef struct {
    SOCKADDR_STORAGE LocalAddress;
    SOCKADDR_STORAGE RemoteAddress;
} INTERNET_CONNECTION_INFO, *PINTERNET_CONNECTION_INFO;
typedef struct {
    DWORD dwSize;
    PCCERT_CONTEXT pCertificate;
    PCCERT_CHAIN_CONTEXT pcCertChain;
    SecPkgContext_ConnectionInfo connectionInfo;
    SecPkgContext_CipherInfo cipherInfo;
    PCCERT_CHAIN_CONTEXT pcUnverifiedCertChain;
    SecPkgContext_Bindings channelBindingToken;
} INTERNET_SECURITY_INFO, * LPINTERNET_SECURITY_INFO;
typedef struct {
    DWORD dwSize;
    BOOL fSecure;
    SecPkgContext_ConnectionInfo connectionInfo;
    SecPkgContext_CipherInfo cipherInfo;
} INTERNET_SECURITY_CONNECTION_INFO , * LPINTERNET_SECURITY_CONNECTION_INFO;
BOOLAPI InternetAlgIdToStringA(
    _In_ ALG_ID ai,
    _Out_writes_(*lpdwstrLength) LPSTR lpstr,
    _Inout_ LPDWORD lpdwstrLength,
    _Reserved_ DWORD dwReserved
    );
BOOLAPI InternetAlgIdToStringW(
    _In_ ALG_ID ai,
    _Out_writes_(*lpdwstrLength) LPWSTR lpstr,
    _Inout_ LPDWORD lpdwstrLength,
    _Reserved_ DWORD dwReserved
    );
BOOLAPI
InternetSecurityProtocolToStringA(
    _In_ DWORD dwProtocol,
    _Out_writes_to_opt_(*lpdwstrLength, *lpdwstrLength) LPSTR lpstr,
    _Inout_ LPDWORD lpdwstrLength,
    _Reserved_ DWORD dwReserved
    );
BOOLAPI
InternetSecurityProtocolToStringW(
    _In_ DWORD dwProtocol,
    _Out_writes_to_opt_(*lpdwstrLength, *lpdwstrLength) LPWSTR lpstr,
    _Inout_ LPDWORD lpdwstrLength,
    _Reserved_ DWORD dwReserved
    );
BOOLAPI InternetGetSecurityInfoByURLA(
    _In_ LPSTR lpszURL,
    _Out_ PCCERT_CHAIN_CONTEXT * ppCertChain,
    _Out_ DWORD *pdwSecureFlags
    );
BOOLAPI InternetGetSecurityInfoByURLW(
    _In_ LPCWSTR lpszURL,
    _Out_ PCCERT_CHAIN_CONTEXT * ppCertChain,
    _Out_ DWORD *pdwSecureFlags
    );
INTERNETAPI_(DWORD) ShowSecurityInfo(
    _In_ HWND hWndParent,
    _In_ LPINTERNET_SECURITY_INFO pSecurityInfo
    );
INTERNETAPI_(DWORD) ShowX509EncodedCertificate(
    _In_ HWND hWndParent,
    _In_reads_bytes_(cbCert) LPBYTE lpCert,
    _In_ DWORD cbCert
    );
INTERNETAPI_(DWORD) ShowClientAuthCerts(
    _In_ HWND hWndParent
    );
INTERNETAPI_(DWORD) ParseX509EncodedCertificateForListBoxEntry(
    _In_reads_bytes_(cbCert) LPBYTE lpCert,
    _In_ DWORD cbCert,
    _Out_writes_opt_(*lpdwListBoxEntry) LPSTR lpszListBoxEntry,
    _Inout_ LPDWORD lpdwListBoxEntry
    );
BOOLAPI InternetShowSecurityInfoByURLA(
    _In_ LPSTR lpszURL,
    _In_ HWND hwndParent
    );
BOOLAPI InternetShowSecurityInfoByURLW(
    _In_ LPCWSTR lpszURL,
    _In_ HWND hwndParent
    );
typedef enum {
    FORTCMD_LOGON = 1,
    FORTCMD_LOGOFF = 2,
    FORTCMD_CHG_PERSONALITY = 3,
} FORTCMD;
BOOLAPI InternetFortezzaCommand(
    _In_ DWORD dwCommand,
    _In_ HWND hwnd,
    _Reserved_ DWORD_PTR dwReserved);
typedef enum {
    FORTSTAT_INSTALLED = 0x00000001,
    FORTSTAT_LOGGEDON = 0x00000002,
} FORTSTAT ;
BOOLAPI InternetQueryFortezzaStatus(
    _Out_ DWORD *pdwStatus,
    _Reserved_ DWORD_PTR dwReserved
);
BOOLAPI InternetDebugGetLocalTime(
    _Out_ SYSTEMTIME * pstLocalTime,
    _Out_opt_ DWORD * pdwReserved
    );
    InternetConnect(hInternet, \
                    lpszUrl, \
                    INTERNET_INVALID_PORT_NUMBER, \
                    NULL, \
                    NULL, \
                    INTERNET_SERVICE_URL, \
                    dwFlags, \
                    dwContext \
                    )
BOOLAPI InternetWriteFileExA(
    _In_ HINTERNET hFile,
    _In_ LPINTERNET_BUFFERSA lpBuffersIn,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
BOOLAPI InternetWriteFileExW(
    _In_ HINTERNET hFile,
    _In_ LPINTERNET_BUFFERSW lpBuffersIn,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
typedef struct _INTERNET_DOWNLOAD_MODE_HANDLE
{
    PCWSTR pcwszFileName;
    HANDLE *phFile;
} INTERNET_DOWNLOAD_MODE_HANDLE, *PINTERNET_DOWNLOAD_MODE_HANDLE;
typedef enum _REQUEST_TIMES
{
    NameResolutionStart = 0,
    NameResolutionEnd,
    ConnectionEstablishmentStart,
    ConnectionEstablishmentEnd,
    TLSHandshakeStart,
    TLSHandshakeEnd,
    HttpRequestTimeMax = 32
} REQUEST_TIMES;
typedef struct _HTTP_REQUEST_TIMES
{
    ULONG cTimes;
    ULONGLONG rgTimes[HttpRequestTimeMax];
} HTTP_REQUEST_TIMES;
typedef struct _INTERNET_SERVER_CONNECTION_STATE {
    LPCWSTR lpcwszHostName;
    BOOL fProxy;
    DWORD dwCounter;
    DWORD dwConnectionLimit;
    DWORD dwAvailableCreates;
    DWORD dwAvailableKeepAlives;
    DWORD dwActiveConnections;
    DWORD dwWaiters;
} INTERNET_SERVER_CONNECTION_STATE, *PINTERNET_SERVER_CONNECTION_STATE;
typedef struct _INTERNET_END_BROWSER_SESSION_DATA {
    LPVOID lpBuffer;
    DWORD dwBufferLength;
} INTERNET_END_BROWSER_SESSION_DATA, *PINTERNET_END_BROWSER_SESSION_DATA;
typedef struct _INTERNET_CALLBACK_COOKIE {
    PCWSTR pcwszName;
    PCWSTR pcwszValue;
    PCWSTR pcwszDomain;
    PCWSTR pcwszPath;
    FILETIME ftExpires;
    DWORD dwFlags;
} INTERNET_CALLBACK_COOKIE, *PINTERNET_CALLBACK_COOKIE;
#pragma warning(disable:4201)
typedef struct _INTERNET_CREDENTIALS {
    LPCWSTR lpcwszHostName;
    DWORD dwPort;
    DWORD dwScheme;
    LPCWSTR lpcwszUrl;
    LPCWSTR lpcwszRealm;
    BOOL fAuthIdentity;
    union {
        struct {
            LPCWSTR lpcwszUserName;
            LPCWSTR lpcwszPassword;
        };
        PVOID pAuthIdentityOpaque;
    };
} INTERNET_CREDENTIALS, *PINTERNET_CREDENTIALS;
#pragma warning(default:4201)
INTERNETAPI_(int) FindP3PPolicySymbol(_In_ const char *pszSymbol);
INTERNETAPI_(DWORD)
HttpGetServerCredentials(
    _In_ PWSTR pwszUrl,
    _Outptr_result_z_ PWSTR *ppwszUserName,
    _Outptr_result_z_ PWSTR *ppwszPassword
);
DECLARE_HANDLE(HTTP_PUSH_WAIT_HANDLE);
typedef struct _HTTP_PUSH_TRANSPORT_SETTING
{
    GUID TransportSettingId;
    GUID BrokerEventId;
} HTTP_PUSH_TRANSPORT_SETTING, *PHTTP_PUSH_TRANSPORT_SETTING;
typedef struct _HTTP_PUSH_NOTIFICATION_STATUS
{
    BOOL ChannelStatusValid;
    DWORD ChannelStatus;
} HTTP_PUSH_NOTIFICATION_STATUS, *PHTTP_NOTIFICATION_STATUS;
typedef enum _HTTP_PUSH_WAIT_TYPE
{
    HttpPushWaitEnableComplete,
    HttpPushWaitReceiveComplete,
    HttpPushWaitSendComplete
} HTTP_PUSH_WAIT_TYPE;
INTERNETAPI_(DWORD)
HttpPushEnable(
    _In_ HINTERNET hRequest,
    _In_ HTTP_PUSH_TRANSPORT_SETTING *pTransportSetting,
    _Out_ HTTP_PUSH_WAIT_HANDLE *phWait
);
INTERNETAPI_(DWORD)
HttpPushWait(
    _In_ HTTP_PUSH_WAIT_HANDLE hWait,
    _In_ HTTP_PUSH_WAIT_TYPE eType,
    _Out_opt_ HTTP_PUSH_NOTIFICATION_STATUS *pNotificationStatus
);
INTERNETAPI_(VOID)
HttpPushClose(
    _In_ HTTP_PUSH_WAIT_HANDLE hWait
);
typedef struct _INTERNET_COOKIE {
    DWORD cbSize;
    LPSTR pszName;
    LPSTR pszData;
    LPSTR pszDomain;
    LPSTR pszPath;
    FILETIME *pftExpires;
    DWORD dwFlags;
    LPSTR pszUrl;
    LPSTR pszP3PPolicy;
} INTERNET_COOKIE, *PINTERNET_COOKIE;
typedef struct _COOKIE_DLG_INFO {
    LPWSTR pszServer;
    PINTERNET_COOKIE pic;
    DWORD dwStopWarning;
    INT cx;
    INT cy;
    LPWSTR pszHeader;
    DWORD dwOperation;
} COOKIE_DLG_INFO, *PCOOKIE_DLG_INFO;
                                          INTERNET_COOKIE_PROMPT_REQUIRED | \
                                          INTERNET_COOKIE_EVALUATE_P3P | \
                                          INTERNET_COOKIE_NON_SCRIPT | \
                                          INTERNET_COOKIE_RESTRICTED_ZONE | \
                                          INTERNET_COOKIE_NO_CALLBACK | \
                                          INTERNET_COOKIE_APPLY_HOST_ONLY | \
                                          INTERNET_COOKIE_EDGE_COOKIES \
                                        )
                                          INTERNET_COOKIE_IS_SESSION | \
                                          INTERNET_COOKIE_IS_RESTRICTED | \
                                          INTERNET_COOKIE_HTTPONLY | \
                                          INTERNET_COOKIE_HOST_ONLY | \
                                          INTERNET_COOKIE_HOST_ONLY_APPLIED | \
                                          INTERNET_COOKIE_ECTX_3RDPARTY | \
                                          INTERNET_COOKIE_SAME_SITE_STRICT | \
                                          INTERNET_COOKIE_SAME_SITE_LAX \
                                        )
                                          INTERNET_COOKIE_THIRD_PARTY | \
                                          INTERNET_COOKIE_SAME_SITE_LEVEL_CROSS_SITE | \
                                          INTERNET_FLAG_RESTRICTED_ZONE | \
                                          INTERNET_COOKIE_ALL_COOKIES | \
                                          INTERNET_COOKIE_EDGE_COOKIES \
                                        )
BOOLAPI HttpCheckDavComplianceA(
    _In_ LPCSTR lpszUrl,
    _In_ LPCSTR lpszComplianceToken,
    _Inout_ LPBOOL lpfFound,
    _In_ HWND hWnd,
    _In_ LPVOID lpvReserved
    );
BOOLAPI HttpCheckDavComplianceW(
    _In_ LPCWSTR lpszUrl,
    _In_ LPCWSTR lpszComplianceToken,
    _Inout_ LPBOOL lpfFound,
    _In_ HWND hWnd,
    _In_ LPVOID lpvReserved
    );
  ( HTTP_1_1_CACHE_ENTRY \
  | STATIC_CACHE_ENTRY \
  | MUST_REVALIDATE_CACHE_ENTRY \
  | PRIVACY_IMPACTED_CACHE_ENTRY \
  | POST_CHECK_CACHE_ENTRY \
  | COOKIE_ACCEPTED_CACHE_ENTRY \
  | COOKIE_LEASHED_CACHE_ENTRY \
  | COOKIE_DOWNGRADED_CACHE_ENTRY \
  | COOKIE_REJECTED_CACHE_ENTRY \
  | SHORTPATH_CACHE_ENTRY \
  | IMMUTABLE_CACHE_ENTRY \
  )
typedef struct _INTERNET_CACHE_CONFIG_PATH_ENTRYA {
    CHAR CachePath[MAX_PATH];
    DWORD dwCacheSize;
} INTERNET_CACHE_CONFIG_PATH_ENTRYA, * LPINTERNET_CACHE_CONFIG_PATH_ENTRYA;
typedef struct _INTERNET_CACHE_CONFIG_PATH_ENTRYW {
    WCHAR CachePath[MAX_PATH];
    DWORD dwCacheSize;
} INTERNET_CACHE_CONFIG_PATH_ENTRYW, * LPINTERNET_CACHE_CONFIG_PATH_ENTRYW;
typedef INTERNET_CACHE_CONFIG_PATH_ENTRYW INTERNET_CACHE_CONFIG_PATH_ENTRY;
typedef LPINTERNET_CACHE_CONFIG_PATH_ENTRYW LPINTERNET_CACHE_CONFIG_PATH_ENTRY;
#pragma warning(disable:4201)
typedef struct _INTERNET_CACHE_CONFIG_INFOA {
    DWORD dwStructSize;
    DWORD dwContainer;
    DWORD dwQuota;
    DWORD dwReserved4;
    BOOL fPerUser;
    DWORD dwSyncMode;
    DWORD dwNumCachePaths;
    union
    {
        struct
        {
            CHAR CachePath[MAX_PATH];
            DWORD dwCacheSize;
        };
        INTERNET_CACHE_CONFIG_PATH_ENTRYA CachePaths[ANYSIZE_ARRAY];
    };
    DWORD dwNormalUsage;
    DWORD dwExemptUsage;
} INTERNET_CACHE_CONFIG_INFOA, * LPINTERNET_CACHE_CONFIG_INFOA;
typedef struct _INTERNET_CACHE_CONFIG_INFOW {
    DWORD dwStructSize;
    DWORD dwContainer;
    DWORD dwQuota;
    DWORD dwReserved4;
    BOOL fPerUser;
    DWORD dwSyncMode;
    DWORD dwNumCachePaths;
    union
    {
        struct
        {
            WCHAR CachePath[MAX_PATH];
            DWORD dwCacheSize;
        };
        INTERNET_CACHE_CONFIG_PATH_ENTRYW CachePaths[ANYSIZE_ARRAY];
    };
    DWORD dwNormalUsage;
    DWORD dwExemptUsage;
} INTERNET_CACHE_CONFIG_INFOW, * LPINTERNET_CACHE_CONFIG_INFOW;
typedef INTERNET_CACHE_CONFIG_INFOW INTERNET_CACHE_CONFIG_INFO;
typedef LPINTERNET_CACHE_CONFIG_INFOW LPINTERNET_CACHE_CONFIG_INFO;
#pragma warning(default:4201)
BOOLAPI IsUrlCacheEntryExpiredA(
    _In_ LPCSTR lpszUrlName,
    _In_ DWORD dwFlags,
    _Inout_ FILETIME* pftLastModified
    );
BOOLAPI IsUrlCacheEntryExpiredW(
    _In_ LPCWSTR lpszUrlName,
    _In_ DWORD dwFlags,
    _Inout_ FILETIME* pftLastModified
    );
BOOLAPI CreateUrlCacheEntryExW(
    _In_ LPCWSTR lpszUrlName,
    _In_ DWORD dwExpectedFileSize,
    _In_opt_ LPCWSTR lpszFileExtension,
    _Inout_updates_(MAX_PATH) LPWSTR lpszFileName,
    _In_ DWORD dwReserved,
    _In_ BOOL fPreserveIncomingFileName
    );
URLCACHEAPI_(DWORD) GetUrlCacheEntryBinaryBlob(
    _In_ PCWSTR pwszUrlName,
    _Out_ DWORD *dwType,
    _Out_ FILETIME *pftExpireTime,
    _Out_ FILETIME *pftAccessTime,
    _Out_ FILETIME *pftModifiedTime,
    _Outptr_result_buffer_all_maybenull_(*pcbBlob) BYTE **ppbBlob,
    _Out_ DWORD *pcbBlob
);
URLCACHEAPI_(DWORD) CommitUrlCacheEntryBinaryBlob(
    _In_ PCWSTR pwszUrlName,
    _In_ DWORD dwType,
    _In_ FILETIME ftExpireTime,
    _In_ FILETIME ftModifiedTime,
    _In_reads_opt_(cbBlob) const BYTE *pbBlob,
    _In_ DWORD cbBlob
);
BOOLAPI CreateUrlCacheContainerA(
    _In_ LPCSTR Name,
    _In_ LPCSTR lpCachePrefix,
    _In_opt_ LPCSTR lpszCachePath,
    _In_ DWORD KBCacheLimit,
    _In_ DWORD dwContainerType,
    _In_ DWORD dwOptions,
    _Reserved_ LPVOID pvBuffer,
    _Reserved_ LPDWORD cbBuffer
    );
BOOLAPI CreateUrlCacheContainerW(
    _In_ LPCWSTR Name,
    _In_ LPCWSTR lpCachePrefix,
    _In_opt_ LPCWSTR lpszCachePath,
    _In_ DWORD KBCacheLimit,
    _In_ DWORD dwContainerType,
    _In_ DWORD dwOptions,
    _Reserved_ LPVOID pvBuffer,
    _Reserved_ LPDWORD cbBuffer
    );
BOOLAPI DeleteUrlCacheContainerA(
    _In_ LPCSTR Name,
    _In_ DWORD dwOptions
    );
BOOLAPI DeleteUrlCacheContainerW(
    _In_ LPCWSTR Name,
    _In_ DWORD dwOptions
    );
typedef struct _INTERNET_CACHE_CONTAINER_INFOA {
    DWORD dwCacheVersion;
    LPSTR lpszName;
    LPSTR lpszCachePrefix;
    LPSTR lpszVolumeLabel;
    LPSTR lpszVolumeTitle;
} INTERNET_CACHE_CONTAINER_INFOA, * LPINTERNET_CACHE_CONTAINER_INFOA;
typedef struct _INTERNET_CACHE_CONTAINER_INFOW {
    DWORD dwCacheVersion;
    LPWSTR lpszName;
    LPWSTR lpszCachePrefix;
    LPWSTR lpszVolumeLabel;
    LPWSTR lpszVolumeTitle;
} INTERNET_CACHE_CONTAINER_INFOW, * LPINTERNET_CACHE_CONTAINER_INFOW;
typedef INTERNET_CACHE_CONTAINER_INFOW INTERNET_CACHE_CONTAINER_INFO;
typedef LPINTERNET_CACHE_CONTAINER_INFOW LPINTERNET_CACHE_CONTAINER_INFO;
INTERNETAPI_(HANDLE)
FindFirstUrlCacheContainerA(
    _Inout_ LPDWORD pdwModified,
    _Out_writes_bytes_(*lpcbContainerInfo) LPINTERNET_CACHE_CONTAINER_INFOA lpContainerInfo,
    _Inout_ LPDWORD lpcbContainerInfo,
    _In_ DWORD dwOptions
    );
INTERNETAPI_(HANDLE)
FindFirstUrlCacheContainerW(
    _Inout_ LPDWORD pdwModified,
    _Out_writes_bytes_(*lpcbContainerInfo) LPINTERNET_CACHE_CONTAINER_INFOW lpContainerInfo,
    _Inout_ LPDWORD lpcbContainerInfo,
    _In_ DWORD dwOptions
    );
BOOLAPI
FindNextUrlCacheContainerA(
    _In_ HANDLE hEnumHandle,
    _Out_writes_bytes_(*lpcbContainerInfo) LPINTERNET_CACHE_CONTAINER_INFOA lpContainerInfo,
    _Inout_ LPDWORD lpcbContainerInfo
    );
BOOLAPI
FindNextUrlCacheContainerW(
    _In_ HANDLE hEnumHandle,
    _Out_writes_bytes_(*lpcbContainerInfo) LPINTERNET_CACHE_CONTAINER_INFOW lpContainerInfo,
    _Inout_ LPDWORD lpcbContainerInfo
    );
typedef enum {
    WININET_SYNC_MODE_NEVER=0,
    WININET_SYNC_MODE_ON_EXPIRY,
    WININET_SYNC_MODE_ONCE_PER_SESSION,
    WININET_SYNC_MODE_ALWAYS,
    WININET_SYNC_MODE_AUTOMATIC,
    WININET_SYNC_MODE_DEFAULT = WININET_SYNC_MODE_AUTOMATIC
} WININET_SYNC_MODE;
BOOLAPI FreeUrlCacheSpaceA(
    _In_opt_ LPCSTR lpszCachePath,
    _In_ DWORD dwSize,
    _In_ DWORD dwFilter
    );
BOOLAPI FreeUrlCacheSpaceW(
    _In_opt_ LPCWSTR lpszCachePath,
    _In_ DWORD dwSize,
    _In_ DWORD dwFilter
    );
DWORD UrlCacheFreeGlobalSpace(
    _In_ ULONGLONG ullTargetSize,
    _In_ DWORD dwFilter
    );
DWORD UrlCacheGetGlobalCacheSize(
    _In_ DWORD dwFilter,
    _Out_ PULONGLONG pullSize,
    _Out_ PULONGLONG pullLimit
    );
BOOLAPI
GetUrlCacheConfigInfoA(
    _Inout_ LPINTERNET_CACHE_CONFIG_INFOA lpCacheConfigInfo,
    _Reserved_ LPDWORD lpcbCacheConfigInfo,
    _In_ DWORD dwFieldControl
    );
BOOLAPI
GetUrlCacheConfigInfoW(
    _Inout_ LPINTERNET_CACHE_CONFIG_INFOW lpCacheConfigInfo,
    _Reserved_ LPDWORD lpcbCacheConfigInfo,
    _In_ DWORD dwFieldControl
    );
BOOLAPI SetUrlCacheConfigInfoA(
    _In_ LPINTERNET_CACHE_CONFIG_INFOA lpCacheConfigInfo,
    _In_ DWORD dwFieldControl
    );
BOOLAPI SetUrlCacheConfigInfoW(
    _In_ LPINTERNET_CACHE_CONFIG_INFOW lpCacheConfigInfo,
    _In_ DWORD dwFieldControl
    );
INTERNETAPI_(DWORD) RunOnceUrlCache(
        _In_ HWND hwnd,
        _In_ HINSTANCE hinst,
        _In_ LPSTR lpszCmd,
        _In_ int nCmdShow);
INTERNETAPI_(DWORD) DeleteIE3Cache(
        _In_ HWND hwnd,
        _In_ HINSTANCE hinst,
        _In_ LPSTR lpszCmd,
        _In_ int nCmdShow);
BOOLAPI UpdateUrlCacheContentPath(_In_ LPCSTR szNewPath);
BOOLAPI
RegisterUrlCacheNotification(
    _In_opt_ HWND hWnd,
    _In_ UINT uMsg,
    _In_ GROUPID gid,
    _In_ DWORD dwOpsFilter,
    _In_ DWORD dwReserved
    );
BOOLAPI
GetUrlCacheHeaderData(_In_ DWORD nIdx, _Out_ LPDWORD lpdwData);
BOOLAPI
SetUrlCacheHeaderData(_In_ DWORD nIdx, _In_ DWORD dwData);
BOOLAPI
IncrementUrlCacheHeaderData(_In_ DWORD nIdx, _Out_ LPDWORD lpdwData);
BOOLAPI
LoadUrlCacheContent();
BOOLAPI
GetUrlCacheContainerInfoA(
    _In_ LPSTR lpszUrlName,
    _Out_writes_bytes_(*lpcbContainerInfo) LPINTERNET_CACHE_CONTAINER_INFOA lpContainerInfo,
    _Inout_ LPDWORD lpcbContainerInfo,
    _In_ DWORD dwOptions
    );
BOOLAPI
GetUrlCacheContainerInfoW(
    _In_ LPWSTR lpszUrlName,
    _Out_writes_bytes_(*lpcbContainerInfo) LPINTERNET_CACHE_CONTAINER_INFOW lpContainerInfo,
    _Inout_ LPDWORD lpcbContainerInfo,
    _In_ DWORD dwOptions
    );
INTERNETAPI_(DWORD)
HttpGetTunnelSocket(
    _In_ HINTERNET hRequest,
    _Out_ SOCKET *pSocket,
    _Outptr_result_buffer_all_maybenull_(*pdwDataLength) PBYTE *ppbData,
    _Out_ PDWORD pdwDataLength
    );
typedef PVOID APP_CACHE_HANDLE;
INTERNETAPI_(DWORD)
AppCacheLookup(
    _In_ PCWSTR pwszUrl,
    _In_ DWORD dwFlags,
    _Out_ APP_CACHE_HANDLE *phAppCache
    );
typedef enum _APP_CACHE_STATE
{
    AppCacheStateNoUpdateNeeded,
    AppCacheStateUpdateNeeded,
    AppCacheStateUpdateNeededNew,
    AppCacheStateUpdateNeededMasterOnly
} APP_CACHE_STATE;
INTERNETAPI_(DWORD)
AppCacheCheckManifest(
    _In_opt_ PCWSTR pwszMasterUrl,
    _In_ PCWSTR pwszManifestUrl,
    _In_reads_bytes_(dwManifestDataSize) const BYTE *pbManifestData,
    _In_ DWORD dwManifestDataSize,
    _In_reads_bytes_(dwManifestResponseHeadersSize) const BYTE *pbManifestResponseHeaders,
    _In_ DWORD dwManifestResponseHeadersSize,
    _Out_ APP_CACHE_STATE *peState,
    _Out_ APP_CACHE_HANDLE *phNewAppCache
    );
typedef struct _APP_CACHE_DOWNLOAD_ENTRY
{
    PWSTR pwszUrl;
    DWORD dwEntryType;
} APP_CACHE_DOWNLOAD_ENTRY;
typedef struct _APP_CACHE_DOWNLOAD_LIST
{
    DWORD dwEntryCount;
    _Field_size_(dwEntryCount) APP_CACHE_DOWNLOAD_ENTRY *pEntries;
} APP_CACHE_DOWNLOAD_LIST;
INTERNETAPI_(DWORD)
AppCacheGetDownloadList(
    _In_ APP_CACHE_HANDLE hAppCache,
    _Out_ APP_CACHE_DOWNLOAD_LIST *pDownloadList
    );
INTERNETAPI_(VOID)
AppCacheFreeDownloadList(
    _Inout_ APP_CACHE_DOWNLOAD_LIST *pDownloadList
    );
typedef enum _APP_CACHE_FINALIZE_STATE
{
    AppCacheFinalizeStateIncomplete,
    AppCacheFinalizeStateManifestChange,
    AppCacheFinalizeStateComplete
} APP_CACHE_FINALIZE_STATE;
INTERNETAPI_(DWORD)
AppCacheFinalize(
    _In_ APP_CACHE_HANDLE hAppCache,
    _In_reads_bytes_(dwManifestDataSize) const BYTE *pbManifestData,
    _In_ DWORD dwManifestDataSize,
    _Out_ APP_CACHE_FINALIZE_STATE *peState
    );
INTERNETAPI_(DWORD)
AppCacheGetFallbackUrl(
    _In_ APP_CACHE_HANDLE hAppCache,
    _In_ PCWSTR pwszUrl,
    _Outptr_result_z_ PWSTR *ppwszFallbackUrl
    );
INTERNETAPI_(DWORD)
AppCacheGetManifestUrl(
    _In_ APP_CACHE_HANDLE hAppCache,
    _Outptr_result_z_ PWSTR *ppwszManifestUrl
    );
INTERNETAPI_(DWORD)
AppCacheDuplicateHandle(
    _In_ APP_CACHE_HANDLE hAppCache,
    _Outptr_ APP_CACHE_HANDLE *phDuplicatedAppCache
    );
INTERNETAPI_(VOID)
AppCacheCloseHandle(
    _In_ APP_CACHE_HANDLE hAppCache
    );
typedef struct _APP_CACHE_GROUP_INFO
{
    PWSTR pwszManifestUrl;
    FILETIME ftLastAccessTime;
    ULONGLONG ullSize;
} APP_CACHE_GROUP_INFO;
typedef struct _APP_CACHE_GROUP_LIST
{
    DWORD dwAppCacheGroupCount;
    APP_CACHE_GROUP_INFO *pAppCacheGroups;
} APP_CACHE_GROUP_LIST;
INTERNETAPI_(VOID)
AppCacheFreeGroupList(
    _Inout_ APP_CACHE_GROUP_LIST *pAppCacheGroupList
    );
INTERNETAPI_(DWORD)
AppCacheGetGroupList(
    _Out_ APP_CACHE_GROUP_LIST *pAppCacheGroupList
    );
INTERNETAPI_(DWORD)
AppCacheGetInfo(
    _In_ APP_CACHE_HANDLE hAppCache,
    _Out_ APP_CACHE_GROUP_INFO *pAppCacheInfo
    );
INTERNETAPI_(DWORD)
AppCacheDeleteGroup(
    _In_ PCWSTR pwszManifestUrl
   );
INTERNETAPI_(DWORD)
AppCacheFreeSpace(
    _In_ FILETIME ftCutOff
    );
INTERNETAPI_(DWORD)
AppCacheGetIEGroupList(
    _Out_ APP_CACHE_GROUP_LIST *pAppCacheGroupList
    );
INTERNETAPI_(DWORD)
AppCacheDeleteIEGroup(
    _In_ PCWSTR pwszManifestUrl
    );
INTERNETAPI_(DWORD)
AppCacheFreeIESpace(
    _In_ FILETIME ftCutOff
    );
INTERNETAPI_(DWORD)
AppCacheCreateAndCommitFile(
    _In_ APP_CACHE_HANDLE hAppCache,
    _In_ PCWSTR pwszSourceFilePath,
    _In_ PCWSTR pwszUrl,
    _In_reads_bytes_(dwResponseHeadersSize) const BYTE *pbResponseHeaders,
    _In_ DWORD dwResponseHeadersSize
    );
typedef PVOID HTTP_DEPENDENCY_HANDLE;
INTERNETAPI_(DWORD)
HttpOpenDependencyHandle(
    _In_ HINTERNET hRequestHandle,
    _In_ BOOL fBackground,
    _Outptr_ HTTP_DEPENDENCY_HANDLE *phDependencyHandle
);
INTERNETAPI_(VOID)
HttpCloseDependencyHandle(
    _In_ HTTP_DEPENDENCY_HANDLE hDependencyHandle
);
INTERNETAPI_(DWORD)
HttpDuplicateDependencyHandle(
    _In_ HTTP_DEPENDENCY_HANDLE hDependencyHandle,
    _Outptr_ HTTP_DEPENDENCY_HANDLE *phDuplicatedDependencyHandle
);
INTERNETAPI_(DWORD)
HttpIndicatePageLoadComplete(
    _In_ HTTP_DEPENDENCY_HANDLE hDependencyHandle
);
typedef PVOID URLCACHE_HANDLE;
typedef struct _URLCACHE_ENTRY_INFO {
  PWSTR pwszSourceUrlName;
  PWSTR pwszLocalFileName;
  DWORD dwCacheEntryType;
  DWORD dwUseCount;
  DWORD dwHitRate;
  DWORD dwSizeLow;
  DWORD dwSizeHigh;
  FILETIME ftLastModifiedTime;
  FILETIME ftExpireTime;
  FILETIME ftLastAccessTime;
  FILETIME ftLastSyncTime;
  PBYTE pbHeaderInfo;
  DWORD cbHeaderInfoSize;
  PBYTE pbExtraData;
  DWORD cbExtraDataSize;
} URLCACHE_ENTRY_INFO, *PURLCACHE_ENTRY_INFO;
URLCACHEAPI_(VOID)
UrlCacheFreeEntryInfo(
    _Inout_ PURLCACHE_ENTRY_INFO pCacheEntryInfo
    );
URLCACHEAPI
UrlCacheGetEntryInfo(
    _In_opt_ APP_CACHE_HANDLE hAppCache,
    _In_ PCWSTR pcwszUrl,
    _Out_opt_ PURLCACHE_ENTRY_INFO pCacheEntryInfo
    );
URLCACHEAPI_(VOID)
UrlCacheCloseEntryHandle(
    _In_ URLCACHE_HANDLE hEntryFile
    );
URLCACHEAPI
UrlCacheRetrieveEntryFile(
    _In_opt_ APP_CACHE_HANDLE hAppCache,
    _In_ PCWSTR pcwszUrl,
    _Out_ PURLCACHE_ENTRY_INFO pCacheEntryInfo,
    _Out_ URLCACHE_HANDLE *phEntryFile
    );
URLCACHEAPI
UrlCacheReadEntryStream(
    _In_ URLCACHE_HANDLE hUrlCacheStream,
    _In_ ULONGLONG ullLocation,
    _Inout_ PVOID pBuffer,
    _In_ DWORD dwBufferLen,
    _Out_ PDWORD pdwBufferLen
    );
URLCACHEAPI
UrlCacheRetrieveEntryStream(
    _In_opt_ APP_CACHE_HANDLE hAppCache,
    _In_ PCWSTR pcwszUrl,
    _In_ BOOL fRandomRead,
    _Out_ PURLCACHE_ENTRY_INFO pCacheEntryInfo,
    _Out_ URLCACHE_HANDLE *phEntryStream
    );
URLCACHEAPI
UrlCacheUpdateEntryExtraData(
    _In_opt_ APP_CACHE_HANDLE hAppCache,
    _In_ PCWSTR pcwszUrl,
    _In_reads_bytes_(cbExtraData) const BYTE *pbExtraData,
    _In_ DWORD cbExtraData
    );
URLCACHEAPI
UrlCacheCreateContainer(
    _In_z_ const WCHAR *pwszName,
    _In_z_ const WCHAR *pwszPrefix,
    _In_z_ const WCHAR *pwszDirectory,
    _In_ ULONGLONG ullLimit,
    _In_ DWORD dwOptions
    );
URLCACHEAPI
UrlCacheCheckEntriesExist(
    _In_reads_(cEntries) PCWSTR *rgpwszUrls,
    _In_ DWORD cEntries,
    _Out_writes_(cEntries) BOOL *rgfExist
    );
URLCACHEAPI
UrlCacheGetContentPaths(
    _Outptr_result_buffer_(*pcDirectories) PWSTR **pppwszDirectories,
    _Out_ DWORD *pcDirectories
    );
typedef enum _URL_CACHE_LIMIT_TYPE
{
    UrlCacheLimitTypeIE = 0,
    UrlCacheLimitTypeIETotal,
    UrlCacheLimitTypeAppContainer,
    UrlCacheLimitTypeAppContainerTotal,
    UrlCacheLimitTypeNum
} URL_CACHE_LIMIT_TYPE;
URLCACHEAPI
UrlCacheGetGlobalLimit(
    _In_ URL_CACHE_LIMIT_TYPE limitType,
    _Out_ ULONGLONG *pullLimit
);
URLCACHEAPI
UrlCacheSetGlobalLimit(
    _In_ URL_CACHE_LIMIT_TYPE limitType,
    _In_ ULONGLONG ullLimit
);
URLCACHEAPI
UrlCacheReloadSettings(
);
URLCACHEAPI
UrlCacheContainerSetEntryMaximumAge(
    _In_z_ const WCHAR *pwszPrefix,
    _In_ DWORD dwEntryMaxAge
);
URLCACHEAPI
UrlCacheFindFirstEntry(
    _In_opt_z_ const WCHAR *pwszPrefix,
    _In_ DWORD dwFlags,
    _In_ DWORD dwFilter,
    _In_ GROUPID GroupId,
    _Out_ PURLCACHE_ENTRY_INFO pCacheEntryInfo,
    _Out_ HANDLE *phFind
);
URLCACHEAPI
UrlCacheFindNextEntry(
    _In_ HANDLE hFind,
    _Out_ PURLCACHE_ENTRY_INFO pCacheEntryInfo
);
URLCACHEAPI
UrlCacheServer(
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
INTERNETAPI
InternetGetDialEngineW(
    _In_ LPWSTR pwzConnectoid,
    _In_ IDialEventSink * pdes,
    _Out_ IDialEngine ** ppde
    );
INTERNETAPI
InternetGetDialBrandingW(
    _In_ LPWSTR pwzConnectoid,
    _Out_ IDialBranding ** ppdb
    );
BOOLAPI
ReadGuidsForConnectedNetworks(
    _Out_opt_ DWORD *pcNetworks,
    _Out_opt_ PWSTR **pppwszNetworkGuids,
    _Out_opt_ BSTR **pppbstrNetworkNames,
    _Out_opt_ PWSTR **pppwszGWMacs,
    _Out_opt_ DWORD *pcGatewayMacs,
    _Out_opt_ DWORD *pdwFlags
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
BOOLAPI IsHostInProxyBypassList(
    _In_ INTERNET_SCHEME tScheme,
    _In_reads_(cchHost) LPCSTR lpszHost,
    _In_ DWORD cchHost);
typedef struct _WININET_PROXY_INFO
{
    BOOL fProxy;
    BOOL fBypass;
    INTERNET_SCHEME ProxyScheme;
    PWSTR pwszProxy;
    INTERNET_PORT ProxyPort;
} WININET_PROXY_INFO;
typedef struct _WININET_PROXY_INFO_LIST
{
    DWORD dwProxyInfoCount;
    WININET_PROXY_INFO *pProxyInfo;
} WININET_PROXY_INFO_LIST;
INTERNETAPI_(VOID)
InternetFreeProxyInfoList(
    _Inout_ WININET_PROXY_INFO_LIST *pProxyInfoList
);
INTERNETAPI_(DWORD)
InternetGetProxyForUrl(
    _In_ HINTERNET hInternet,
    _In_ PCWSTR pcwszUrl,
    _Out_ WININET_PROXY_INFO_LIST *pProxyInfoList
);
BOOL DoConnectoidsExist(void);
BOOLAPI GetDiskInfoA(
    _In_ PCSTR pszPath,
    _Out_opt_ PDWORD pdwClusterSize,
    _Out_opt_ PDWORDLONG pdlAvail,
    _Out_opt_ PDWORDLONG pdlTotal);
typedef BOOL (*CACHE_OPERATOR)(INTERNET_CACHE_ENTRY_INFO* pcei, PDWORD pcbcei, PVOID pOpData);
BOOL PerformOperationOverUrlCacheA(
    _In_opt_ PCSTR pszUrlSearchPattern,
    _In_ DWORD dwFlags,
    _In_ DWORD dwFilter,
    _In_ GROUPID GroupId,
    _Reserved_ PVOID pReserved1,
    _Reserved_ PDWORD pdwReserved2,
    _Reserved_ PVOID pReserved3,
    _In_ CACHE_OPERATOR op,
    _Inout_ PVOID pOperatorData
    );
BOOL IsProfilesEnabled();
INTERNETAPI_(DWORD) _GetFileExtensionFromUrl(
    _In_ LPSTR lpszUrl,
    _In_ DWORD dwFlags,
    _Inout_updates_bytes_(*pcchExt) LPSTR lpszExt,
    _Inout_ DWORD *pcchExt
);
INTERNETAPI_(DWORD) InternalInternetGetCookie(
    _In_ LPCSTR lpszUrl,
    _Out_writes_(*lpdwDataSize) LPSTR lpszCookieData,
    _Inout_ DWORD *lpdwDataSize
);
BOOLAPI ImportCookieFileA(
    _In_ LPCSTR szFilename
);
BOOLAPI ImportCookieFileW(
    _In_ LPCWSTR szFilename
);
BOOLAPI ExportCookieFileA(
    _In_ LPCSTR szFilename,
    _In_ BOOL fAppend
);
BOOLAPI ExportCookieFileW(
    _In_ LPCWSTR szFilename,
    _In_ BOOL fAppend
);
BOOLAPI IsDomainLegalCookieDomainA(
    _In_ LPCSTR pchDomain,
    _In_ LPCSTR pchFullDomain
);
BOOLAPI IsDomainLegalCookieDomainW(
    _In_ LPCWSTR pchDomain,
    _In_ LPCWSTR pchFullDomain
);
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
typedef enum _HTTP_WEB_SOCKET_OPERATION
{
    HTTP_WEB_SOCKET_SEND_OPERATION = 0,
    HTTP_WEB_SOCKET_RECEIVE_OPERATION = 1,
    HTTP_WEB_SOCKET_CLOSE_OPERATION = 2,
    HTTP_WEB_SOCKET_SHUTDOWN_OPERATION = 3
} HTTP_WEB_SOCKET_OPERATION;
typedef enum _HTTP_WEB_SOCKET_BUFFER_TYPE
{
    HTTP_WEB_SOCKET_BINARY_MESSAGE_TYPE = 0,
    HTTP_WEB_SOCKET_BINARY_FRAGMENT_TYPE = 1,
    HTTP_WEB_SOCKET_UTF8_MESSAGE_TYPE = 2,
    HTTP_WEB_SOCKET_UTF8_FRAGMENT_TYPE = 3,
    HTTP_WEB_SOCKET_CLOSE_TYPE = 4,
    HTTP_WEB_SOCKET_PING_TYPE = 5
} HTTP_WEB_SOCKET_BUFFER_TYPE;
typedef enum _HTTP_WEB_SOCKET_CLOSE_STATUS
{
    HTTP_WEB_SOCKET_SUCCESS_CLOSE_STATUS = 1000,
    HTTP_WEB_SOCKET_ENDPOINT_TERMINATED_CLOSE_STATUS = 1001,
    HTTP_WEB_SOCKET_PROTOCOL_ERROR_CLOSE_STATUS = 1002,
    HTTP_WEB_SOCKET_INVALID_DATA_TYPE_CLOSE_STATUS = 1003,
    HTTP_WEB_SOCKET_EMPTY_CLOSE_STATUS = 1005,
    HTTP_WEB_SOCKET_ABORTED_CLOSE_STATUS = 1006,
    HTTP_WEB_SOCKET_INVALID_PAYLOAD_CLOSE_STATUS = 1007,
    HTTP_WEB_SOCKET_POLICY_VIOLATION_CLOSE_STATUS = 1008,
    HTTP_WEB_SOCKET_MESSAGE_TOO_BIG_CLOSE_STATUS = 1009,
    HTTP_WEB_SOCKET_UNSUPPORTED_EXTENSIONS_CLOSE_STATUS = 1010,
    HTTP_WEB_SOCKET_SERVER_ERROR_CLOSE_STATUS = 1011,
    HTTP_WEB_SOCKET_SECURE_HANDSHAKE_ERROR_CLOSE_STATUS = 1015
} HTTP_WEB_SOCKET_CLOSE_STATUS;
typedef struct _HTTP_WEB_SOCKET_ASYNC_RESULT
{
    INTERNET_ASYNC_RESULT AsyncResult;
    HTTP_WEB_SOCKET_OPERATION Operation;
    HTTP_WEB_SOCKET_BUFFER_TYPE BufferType;
    DWORD dwBytesTransferred;
} HTTP_WEB_SOCKET_ASYNC_RESULT;
INTERNETAPI_(HINTERNET) HttpWebSocketCompleteUpgrade(
    _In_ HINTERNET hRequest,
    _In_ DWORD_PTR dwContext);
BOOLAPI HttpWebSocketSend(
    _In_ HINTERNET hWebSocket,
    _In_ HTTP_WEB_SOCKET_BUFFER_TYPE BufferType,
    _In_reads_bytes_opt_(dwBufferLength) PVOID pvBuffer,
    _In_ DWORD dwBufferLength);
BOOLAPI HttpWebSocketReceive(
    _In_ HINTERNET hWebSocket,
    _Out_writes_bytes_to_(dwBufferLength, *pdwBytesRead) PVOID pvBuffer,
    _In_ DWORD dwBufferLength,
    _Out_range_(0, dwBufferLength) DWORD *pdwBytesRead,
    _Out_ HTTP_WEB_SOCKET_BUFFER_TYPE *pBufferType);
BOOLAPI HttpWebSocketClose(
    _In_ HINTERNET hWebSocket,
    _In_ USHORT usStatus,
    _In_reads_bytes_opt_(dwReasonLength) PVOID pvReason,
    _In_range_(0, HTTP_WEB_SOCKET_MAX_CLOSE_REASON_LENGTH) DWORD dwReasonLength);
BOOLAPI HttpWebSocketShutdown(
    _In_ HINTERNET hWebSocket,
    _In_ USHORT usStatus,
    _In_reads_bytes_opt_(dwReasonLength) PVOID pvReason,
    _In_range_(0, HTTP_WEB_SOCKET_MAX_CLOSE_REASON_LENGTH) DWORD dwReasonLength);
BOOLAPI HttpWebSocketQueryCloseStatus(
    _In_ HINTERNET hWebSocket,
    _Out_ USHORT *pusStatus,
    _Out_writes_bytes_to_opt_(dwReasonLength, *pdwReasonLengthConsumed) PVOID pvReason,
    _In_range_(0, HTTP_WEB_SOCKET_MAX_CLOSE_REASON_LENGTH) DWORD dwReasonLength,
    _Out_range_(0, HTTP_WEB_SOCKET_MAX_CLOSE_REASON_LENGTH) DWORD *pdwReasonLengthConsumed);
STDAPI_(DWORD)
InternetConvertUrlFromWireToWideChar(
    _In_reads_(cchUrl) PCSTR pcszUrl,
    _In_ DWORD cchUrl,
    _In_ PCWSTR pcwszBaseUrl,
    _In_ DWORD dwCodePageHost,
    _In_ DWORD dwCodePagePath,
    _In_ BOOL fEncodePathExtra,
    _In_ DWORD dwCodePageExtra,
    _Outptr_result_z_ PWSTR *ppwszConvertedUrl
);
STDAPI_(DWORD)
HttpPreConnect(
    _In_ HANDLE hRequest,
    _In_ PCWSTR pwszUrl,
    _In_ DWORD cConnections
);
#endif
#pragma endregion
