#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
    typedef unsigned __int64 ULONG_PTR, *PULONG_PTR;
enum SF_REQ_TYPE
{
    SF_REQ_SEND_RESPONSE_HEADER,
    SF_REQ_ADD_HEADERS_ON_DENIAL,
    SF_REQ_SET_NEXT_READ_SIZE,
    SF_REQ_SET_PROXY_INFO,
    SF_REQ_GET_CONNID,
    SF_REQ_SET_CERTIFICATE_INFO,
    SF_REQ_GET_PROPERTY,
    SF_REQ_NORMALIZE_URL,
    SF_REQ_DISABLE_NOTIFICATIONS,
} ;
enum SF_PROPERTY_IIS
{
    SF_PROPERTY_SSL_CTXT,
    SF_PROPERTY_INSTANCE_NUM_ID
} ;
enum SF_STATUS_TYPE
{
    SF_STATUS_REQ_FINISHED = 0x8000000,
    SF_STATUS_REQ_FINISHED_KEEP_CONN,
    SF_STATUS_REQ_NEXT_NOTIFICATION,
    SF_STATUS_REQ_HANDLED_NOTIFICATION,
    SF_STATUS_REQ_ERROR,
    SF_STATUS_REQ_READ_NEXT
};
typedef struct _HTTP_FILTER_CONTEXT
{
    DWORD cbSize;
    DWORD Revision;
    PVOID ServerContext;
    DWORD ulReserved;
    BOOL fIsSecurePort;
    PVOID pFilterContext;
    BOOL (WINAPI * GetServerVariable) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        LPSTR lpszVariableName,
        LPVOID lpvBuffer,
        LPDWORD lpdwSize
        );
    BOOL (WINAPI * AddResponseHeaders) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        LPSTR lpszHeaders,
        DWORD dwReserved
        );
    BOOL (WINAPI * WriteClient) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        LPVOID Buffer,
        LPDWORD lpdwBytes,
        DWORD dwReserved
        );
    VOID * (WINAPI * AllocMem) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        DWORD cbSize,
        DWORD dwReserved
        );
    BOOL (WINAPI * ServerSupportFunction) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        enum SF_REQ_TYPE sfReq,
        PVOID pData,
        ULONG_PTR ul1,
        ULONG_PTR ul2
        );
} HTTP_FILTER_CONTEXT, *PHTTP_FILTER_CONTEXT;
typedef struct _HTTP_FILTER_RAW_DATA
{
    PVOID pvInData;
    DWORD cbInData;
    DWORD cbInBuffer;
    DWORD dwReserved;
} HTTP_FILTER_RAW_DATA, *PHTTP_FILTER_RAW_DATA;
typedef struct _HTTP_FILTER_PREPROC_HEADERS
{
    BOOL (WINAPI * GetHeader) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        LPSTR lpszName,
        LPVOID lpvBuffer,
        LPDWORD lpdwSize
        );
    BOOL (WINAPI * SetHeader) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        LPSTR lpszName,
        LPSTR lpszValue
        );
    BOOL (WINAPI * AddHeader) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        LPSTR lpszName,
        LPSTR lpszValue
        );
    DWORD HttpStatus;
    DWORD dwReserved;
} HTTP_FILTER_PREPROC_HEADERS, *PHTTP_FILTER_PREPROC_HEADERS;
typedef HTTP_FILTER_PREPROC_HEADERS HTTP_FILTER_SEND_RESPONSE;
typedef HTTP_FILTER_PREPROC_HEADERS *PHTTP_FILTER_SEND_RESPONSE;
typedef struct _HTTP_FILTER_AUTHENT
{
    CHAR * pszUser;
    DWORD cbUserBuff;
    CHAR * pszPassword;
    DWORD cbPasswordBuff;
} HTTP_FILTER_AUTHENT, *PHTTP_FILTER_AUTHENT;
typedef struct _HTTP_FILTER_URL_MAP
{
    const CHAR * pszURL;
    CHAR * pszPhysicalPath;
    DWORD cbPathBuff;
} HTTP_FILTER_URL_MAP, *PHTTP_FILTER_URL_MAP;
typedef struct _HTTP_FILTER_URL_MAP_EX
{
    const CHAR * pszURL;
    CHAR * pszPhysicalPath;
    DWORD cbPathBuff;
    DWORD dwFlags;
    DWORD cchMatchingPath;
    DWORD cchMatchingURL;
    const CHAR * pszScriptMapEntry;
} HTTP_FILTER_URL_MAP_EX, *PHTTP_FILTER_URL_MAP_EX;
typedef struct _HTTP_FILTER_ACCESS_DENIED
{
    const CHAR * pszURL;
    const CHAR * pszPhysicalPath;
    DWORD dwReason;
} HTTP_FILTER_ACCESS_DENIED, *PHTTP_FILTER_ACCESS_DENIED;
typedef struct _HTTP_FILTER_LOG
{
    const CHAR * pszClientHostName;
    const CHAR * pszClientUserName;
    const CHAR * pszServerName;
    const CHAR * pszOperation;
    const CHAR * pszTarget;
    const CHAR * pszParameters;
    DWORD dwHttpStatus;
    DWORD dwWin32Status;
    DWORD dwBytesSent;
    DWORD dwBytesRecvd;
    DWORD msTimeForProcessing;
} HTTP_FILTER_LOG, *PHTTP_FILTER_LOG;
typedef struct _HTTP_FILTER_AUTH_COMPLETE_INFO
{
    BOOL (WINAPI * GetHeader) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        LPSTR lpszName,
        LPVOID lpvBuffer,
        LPDWORD lpdwSize
        );
    BOOL (WINAPI * SetHeader) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        LPSTR lpszName,
        LPSTR lpszValue
        );
    BOOL (WINAPI * AddHeader) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        LPSTR lpszName,
        LPSTR lpszValue
        );
    BOOL (WINAPI * GetUserToken) (
        struct _HTTP_FILTER_CONTEXT * pfc,
        HANDLE * phToken
        );
    DWORD HttpStatus;
    BOOL fResetAuth;
    DWORD dwReserved;
} HTTP_FILTER_AUTH_COMPLETE_INFO, *PHTTP_FILTER_AUTH_COMPLETE_INFO;
                                            SF_NOTIFY_ORDER_MEDIUM | \
                                            SF_NOTIFY_ORDER_LOW)
typedef struct _HTTP_FILTER_VERSION
{
    DWORD dwServerFilterVersion;
    DWORD dwFilterVersion;
    CHAR lpszFilterDesc[SF_MAX_FILTER_DESC_LEN];
    DWORD dwFlags;
} HTTP_FILTER_VERSION, *PHTTP_FILTER_VERSION;
DWORD
WINAPI
HttpFilterProc(
    HTTP_FILTER_CONTEXT * pfc,
    DWORD NotificationType,
    VOID * pvNotification
    );
BOOL
WINAPI
GetFilterVersion(
    HTTP_FILTER_VERSION * pVer
    );
BOOL
WINAPI
TerminateFilter(
    DWORD dwFlags
    );
}
#endif
#pragma endregion
