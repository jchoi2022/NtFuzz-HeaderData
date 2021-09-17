#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windows.h>
extern "C" {
                                                   (HSE_REQ_END_RESERVED+48)
typedef LPVOID HCONN;
typedef struct _HSE_VERSION_INFO {
    DWORD dwExtensionVersion;
    CHAR lpszExtensionDesc[HSE_MAX_EXT_DLL_NAME_LEN];
} HSE_VERSION_INFO, *LPHSE_VERSION_INFO;
typedef struct _EXTENSION_CONTROL_BLOCK {
    DWORD cbSize;
    DWORD dwVersion;
    HCONN ConnID;
    DWORD dwHttpStatusCode;
    CHAR lpszLogData[HSE_LOG_BUFFER_LEN];
    LPSTR lpszMethod;
    LPSTR lpszQueryString;
    LPSTR lpszPathInfo;
    LPSTR lpszPathTranslated;
    DWORD cbTotalBytes;
    DWORD cbAvailable;
    LPBYTE lpbData;
    LPSTR lpszContentType;
    BOOL (WINAPI * GetServerVariable) ( HCONN hConn,
                                        LPSTR lpszVariableName,
                                        LPVOID lpvBuffer,
                                        LPDWORD lpdwSize );
    BOOL (WINAPI * WriteClient) ( HCONN ConnID,
                                   LPVOID Buffer,
                                   LPDWORD lpdwBytes,
                                   DWORD dwReserved );
    BOOL (WINAPI * ReadClient) ( HCONN ConnID,
                                  LPVOID lpvBuffer,
                                  LPDWORD lpdwSize );
    BOOL (WINAPI * ServerSupportFunction)( HCONN hConn,
                                           DWORD dwHSERequest,
                                           LPVOID lpvBuffer,
                                           LPDWORD lpdwSize,
                                           LPDWORD lpdwDataType );
} EXTENSION_CONTROL_BLOCK, *LPEXTENSION_CONTROL_BLOCK;
typedef struct _HSE_URL_MAPEX_INFO {
    CHAR lpszPath[MAX_PATH];
    DWORD dwFlags;
    DWORD cchMatchingPath;
    DWORD cchMatchingURL;
    DWORD dwReserved1;
    DWORD dwReserved2;
} HSE_URL_MAPEX_INFO, * LPHSE_URL_MAPEX_INFO;
typedef struct _HSE_UNICODE_URL_MAPEX_INFO {
    WCHAR lpszPath[MAX_PATH];
    DWORD dwFlags;
    DWORD cchMatchingPath;
    DWORD cchMatchingURL;
} HSE_UNICODE_URL_MAPEX_INFO, * LPHSE_UNICODE_URL_MAPEX_INFO;
typedef VOID
  (WINAPI * PFN_HSE_IO_COMPLETION)(
                                   IN EXTENSION_CONTROL_BLOCK * pECB,
                                   IN PVOID pContext,
                                   IN DWORD cbIO,
                                   IN DWORD dwError
                                   );
typedef struct _HSE_TF_INFO {
    PFN_HSE_IO_COMPLETION pfnHseIO;
    PVOID pContext;
    HANDLE hFile;
    LPCSTR pszStatusCode;
    DWORD BytesToWrite;
    DWORD Offset;
    PVOID pHead;
    DWORD HeadLength;
    PVOID pTail;
    DWORD TailLength;
    DWORD dwFlags;
} HSE_TF_INFO, * LPHSE_TF_INFO;
typedef struct _HSE_SEND_HEADER_EX_INFO {
    LPCSTR pszStatus;
    LPCSTR pszHeader;
    DWORD cchStatus;
    DWORD cchHeader;
    BOOL fKeepConn;
} HSE_SEND_HEADER_EX_INFO, * LPHSE_SEND_HEADER_EX_INFO;
typedef struct _HSE_EXEC_URL_USER_INFO {
    HANDLE hImpersonationToken;
    LPSTR pszCustomUserName;
    LPSTR pszCustomAuthType;
} HSE_EXEC_URL_USER_INFO, * LPHSE_EXEC_URL_USER_INFO;
typedef struct _HSE_EXEC_URL_ENTITY_INFO {
    DWORD cbAvailable;
    LPVOID lpbData;
} HSE_EXEC_URL_ENTITY_INFO, * LPHSE_EXEC_URL_ENTITY_INFO;
typedef struct _HSE_EXEC_URL_STATUS {
    USHORT uHttpStatusCode;
    USHORT uHttpSubStatus;
    DWORD dwWin32Error;
} HSE_EXEC_URL_STATUS, * LPHSE_EXEC_URL_STATUS;
typedef struct _HSE_EXEC_URL_INFO {
    LPSTR pszUrl;
    LPSTR pszMethod;
    LPSTR pszChildHeaders;
    LPHSE_EXEC_URL_USER_INFO pUserInfo;
    LPHSE_EXEC_URL_ENTITY_INFO pEntity;
    DWORD dwExecUrlFlags;
} HSE_EXEC_URL_INFO, * LPHSE_EXEC_URL_INFO;
typedef struct _HSE_EXEC_UNICODE_URL_USER_INFO {
    HANDLE hImpersonationToken;
    LPWSTR pszCustomUserName;
    LPSTR pszCustomAuthType;
} HSE_EXEC_UNICODE_URL_USER_INFO, * LPHSE_EXEC_UNICODE_URL_USER_INFO;
typedef struct _HSE_EXEC_UNICODE_URL_INFO {
    LPWSTR pszUrl;
    LPSTR pszMethod;
    LPSTR pszChildHeaders;
    LPHSE_EXEC_UNICODE_URL_USER_INFO pUserInfo;
    LPHSE_EXEC_URL_ENTITY_INFO pEntity;
    DWORD dwExecUrlFlags;
} HSE_EXEC_UNICODE_URL_INFO, * LPHSE_EXEC_UNICODE_URL_INFO;
typedef struct _HSE_CUSTOM_ERROR_INFO {
    CHAR * pszStatus;
    USHORT uHttpSubError;
    BOOL fAsync;
} HSE_CUSTOM_ERROR_INFO, * LPHSE_CUSTOM_ERROR_INFO;
typedef struct _HSE_VECTOR_ELEMENT
{
    DWORD ElementType;
    PVOID pvContext;
    ULONGLONG cbOffset;
    ULONGLONG cbSize;
} HSE_VECTOR_ELEMENT, *LPHSE_VECTOR_ELEMENT;
typedef struct _HSE_RESPONSE_VECTOR
{
    DWORD dwFlags;
    LPSTR pszStatus;
    LPSTR pszHeaders;
    DWORD nElementCount;
    LPHSE_VECTOR_ELEMENT lpElementArray;
} HSE_RESPONSE_VECTOR, *LPHSE_RESPONSE_VECTOR;
typedef HRESULT
  (WINAPI * PFN_HSE_CACHE_INVALIDATION_CALLBACK)(
        WCHAR *pszUrl);
#include <wincrypt.h>
typedef struct _CERT_CONTEXT_EX {
    CERT_CONTEXT CertContext;
    DWORD cbAllocated;
    DWORD dwCertificateFlags;
} CERT_CONTEXT_EX;
typedef struct _HSE_TRACE_INFO
{
    BOOL fTraceRequest;
    BYTE TraceContextId[16];
    DWORD dwReserved1;
    DWORD dwReserved2;
} HSE_TRACE_INFO, *LPHSE_TRACE_INFO;
typedef HRESULT
  (WINAPI * PFN_HSE_GET_PROTOCOL_MANAGER_CUSTOM_INTERFACE_CALLBACK)(
                            LPCWSTR pszProtocolManagerDll,
                            LPCWSTR pszProtocolManagerDllInitFunction,
                            DWORD dwCustomInterfaceId,
                            PVOID* ppCustomInterface );
BOOL WINAPI GetExtensionVersion( _Out_ HSE_VERSION_INFO *pVer );
DWORD WINAPI HttpExtensionProc( _In_ EXTENSION_CONTROL_BLOCK *pECB );
BOOL WINAPI TerminateExtension( DWORD dwFlags );
typedef BOOL
    (WINAPI * PFN_GETEXTENSIONVERSION)( HSE_VERSION_INFO *pVer );
typedef DWORD
    (WINAPI * PFN_HTTPEXTENSIONPROC )( EXTENSION_CONTROL_BLOCK * pECB );
typedef BOOL (WINAPI * PFN_TERMINATEEXTENSION )( DWORD dwFlags );
}
#endif
#pragma endregion
