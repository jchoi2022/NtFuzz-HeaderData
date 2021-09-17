#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
DWORD
APIENTRY
TraceRegisterExA(
    IN LPCSTR lpszCallerName,
    IN DWORD dwFlags
    );
DWORD
APIENTRY
TraceDeregisterA(
    IN DWORD dwTraceID
    );
DWORD
APIENTRY
TraceDeregisterExA(
    IN DWORD dwTraceID,
    IN DWORD dwFlags
    );
DWORD
APIENTRY
TraceGetConsoleA(
    IN DWORD dwTraceID,
    OUT LPHANDLE lphConsole
    );
DWORD
__cdecl
TracePrintfA(
    IN DWORD dwTraceID,
    IN LPCSTR lpszFormat,
    IN ... OPTIONAL
    );
DWORD
__cdecl
TracePrintfExA(
    IN DWORD dwTraceID,
    IN DWORD dwFlags,
    IN LPCSTR lpszFormat,
    IN ... OPTIONAL
    );
DWORD
APIENTRY
TraceVprintfExA(
    IN DWORD dwTraceID,
    IN DWORD dwFlags,
    IN LPCSTR lpszFormat,
    IN va_list arglist
    );
DWORD
APIENTRY
TracePutsExA(
    IN DWORD dwTraceID,
    IN DWORD dwFlags,
    IN LPCSTR lpszString
    );
DWORD
APIENTRY
TraceDumpExA(
    IN DWORD dwTraceID,
    IN DWORD dwFlags,
    IN LPBYTE lpbBytes,
    IN DWORD dwByteCount,
    IN DWORD dwGroupSize,
    IN BOOL bAddressPrefix,
    IN LPCSTR lpszPrefix
    );
DWORD
APIENTRY
TraceRegisterExW(
    IN LPCWSTR lpszCallerName,
    IN DWORD dwFlags
    );
DWORD
APIENTRY
TraceDeregisterW(
    IN DWORD dwTraceID
    );
DWORD
APIENTRY
TraceDeregisterExW(
    IN DWORD dwTraceID,
    IN DWORD dwFlags
    );
DWORD
APIENTRY
TraceGetConsoleW(
    IN DWORD dwTraceID,
    OUT LPHANDLE lphConsole
    );
DWORD
__cdecl
TracePrintfW(
    IN DWORD dwTraceID,
    IN LPCWSTR lpszFormat,
    IN ... OPTIONAL
    );
DWORD
__cdecl
TracePrintfExW(
    IN DWORD dwTraceID,
    IN DWORD dwFlags,
    IN LPCWSTR lpszFormat,
    IN ... OPTIONAL
    );
DWORD
APIENTRY
TraceVprintfExW(
    IN DWORD dwTraceID,
    IN DWORD dwFlags,
    IN LPCWSTR lpszFormat,
    IN va_list arglist
    );
DWORD
APIENTRY
TracePutsExW(
    IN DWORD dwTraceID,
    IN DWORD dwFlags,
    IN LPCWSTR lpszString
    );
DWORD
APIENTRY
TraceDumpExW(
    IN DWORD dwTraceID,
    IN DWORD dwFlags,
    IN LPBYTE lpbBytes,
    IN DWORD dwByteCount,
    IN DWORD dwGroupSize,
    IN BOOL bAddressPrefix,
    IN LPCWSTR lpszPrefix
    );
VOID
APIENTRY
LogErrorA(
    IN DWORD dwMessageId,
    IN DWORD cNumberOfSubStrings,
    _In_reads_(cNumberOfSubStrings) IN LPSTR *plpwsSubStrings,
    IN DWORD dwErrorCode
);
VOID
APIENTRY
LogEventA(
    IN DWORD wEventType,
    IN DWORD dwMessageId,
    IN DWORD cNumberOfSubStrings,
    _In_reads_(cNumberOfSubStrings) IN LPSTR *plpwsSubStrings
);
VOID
LogErrorW(
    IN DWORD dwMessageId,
    IN DWORD cNumberOfSubStrings,
    _In_reads_(cNumberOfSubStrings) IN LPWSTR *plpwsSubStrings,
    IN DWORD dwErrorCode
);
VOID
LogEventW(
    IN DWORD wEventType,
    IN DWORD dwMessageId,
    IN DWORD cNumberOfSubStrings,
    _In_reads_(cNumberOfSubStrings) IN LPWSTR *plpwsSubStrings
);
HANDLE
RouterLogRegisterA(
    LPCSTR lpszSource
    );
VOID
RouterLogDeregisterA(
    HANDLE hLogHandle
    );
VOID
RouterLogEventA(
    IN HANDLE hLogHandle,
    IN DWORD dwEventType,
    IN DWORD dwMessageId,
    IN DWORD dwSubStringCount,
    IN _In_reads_opt_(dwSubStringCount) LPSTR *plpszSubStringArray,
    IN DWORD dwErrorCode
    );
VOID
RouterLogEventDataA(
    IN HANDLE hLogHandle,
    IN DWORD dwEventType,
    IN DWORD dwMessageId,
    IN DWORD dwSubStringCount,
    _In_reads_opt_(dwSubStringCount) IN LPSTR *plpszSubStringArray,
    IN DWORD dwDataBytes,
    IN LPBYTE lpDataBytes
    );
VOID
RouterLogEventStringA(
    IN HANDLE hLogHandle,
    IN DWORD dwEventType,
    IN DWORD dwMessageId,
    IN DWORD dwSubStringCount,
    _In_reads_(dwSubStringCount) IN LPSTR *plpszSubStringArray,
    IN DWORD dwErrorCode,
    IN DWORD dwErrorIndex
    );
VOID
__cdecl
RouterLogEventExA(
    IN HANDLE hLogHandle,
    IN DWORD dwEventType,
    IN DWORD dwErrorCode,
    IN DWORD dwMessageId,
    IN LPCSTR ptszFormat,
    ...
    );
VOID
RouterLogEventValistExA(
    IN HANDLE hLogHandle,
    IN DWORD dwEventType,
    IN DWORD dwErrorCode,
    IN DWORD dwMessageId,
    IN LPCSTR ptszFormat,
    IN va_list arglist
    );
DWORD
RouterGetErrorStringA(
    IN DWORD dwErrorCode,
    _Out_ OUT LPSTR * lplpszErrorString
    );
        RouterLogEventA(h,EVENTLOG_ERROR_TYPE,msg,count,array,err)
        RouterLogEventA(h,EVENTLOG_WARNING_TYPE,msg,count,array,err)
        RouterLogEventA(h,EVENTLOG_INFORMATION_TYPE,msg,count,array,err)
        RouterLogEventDataA(h,EVENTLOG_ERROR_TYPE,msg,count,array,c,buf)
        RouterLogEventDataA(h,EVENTLOG_WARNING_TYPE,msg,count,array,c,buf)
        RouterLogEventDataA(h,EVENTLOG_INFORMATION_TYPE,msg,count,array,c,buf)
        RouterLogEventStringA(h,EVENTLOG_ERROR_TYPE,msg,count,array, err,index)
        RouterLogEventStringA(h,EVENTLOG_WARNING_TYPE,msg,count,array,err,index)
        RouterLogEventStringA(h,EVENTLOG_INFORMATION_TYPE,msg,count,array,err,\
                              index)
HANDLE
RouterLogRegisterW(
    LPCWSTR lpszSource
    );
VOID
RouterLogDeregisterW(
    HANDLE hLogHandle
    );
VOID
RouterLogEventW(
    IN HANDLE hLogHandle,
    IN DWORD dwEventType,
    IN DWORD dwMessageId,
    IN DWORD dwSubStringCount,
    IN _In_reads_opt_(dwSubStringCount) LPWSTR *plpszSubStringArray,
    IN DWORD dwErrorCode
    );
VOID
RouterLogEventDataW(
    IN HANDLE hLogHandle,
    IN DWORD dwEventType,
    IN DWORD dwMessageId,
    IN DWORD dwSubStringCount,
    _In_reads_opt_(dwSubStringCount) IN LPWSTR *plpszSubStringArray,
    IN DWORD dwDataBytes,
    IN LPBYTE lpDataBytes
    );
VOID
RouterLogEventStringW(
    IN HANDLE hLogHandle,
    IN DWORD dwEventType,
    IN DWORD dwMessageId,
    IN DWORD dwSubStringCount,
    _In_reads_(dwSubStringCount) IN LPWSTR *plpszSubStringArray,
    IN DWORD dwErrorCode,
    IN DWORD dwErrorIndex
    );
VOID
__cdecl
RouterLogEventExW(
    IN HANDLE hLogHandle,
    IN DWORD dwEventType,
    IN DWORD dwErrorCode,
    IN DWORD dwMessageId,
    IN LPCWSTR ptszFormat,
    ...
    );
VOID
RouterLogEventValistExW(
    IN HANDLE hLogHandle,
    IN DWORD dwEventType,
    IN DWORD dwErrorCode,
    IN DWORD dwMessageId,
    IN LPCWSTR ptszFormat,
    IN va_list arglist
    );
DWORD
RouterGetErrorStringW(
    IN DWORD dwErrorCode,
    _Out_ OUT LPWSTR * lplpwszErrorString
    );
        RouterLogEventW(h,EVENTLOG_ERROR_TYPE,msg,count,array,err)
        RouterLogEventW(h,EVENTLOG_WARNING_TYPE,msg,count,array,err)
        RouterLogEventW(h,EVENTLOG_INFORMATION_TYPE,msg,count,array,err)
        RouterLogEventDataW(h,EVENTLOG_ERROR_TYPE,msg,count,array,c,buf)
        RouterLogEventDataW(h,EVENTLOG_WARNING_TYPE,msg,count,array,c,buf)
        RouterLogEventDataW(h,EVENTLOG_INFORMATION_TYPE,msg,count,array,c,buf)
        RouterLogEventStringW(h,EVENTLOG_ERROR_TYPE,msg,count,array,err,index)
        RouterLogEventStringW(h,EVENTLOG_WARNING_TYPE,msg,count,array,err,index)
        RouterLogEventStringW(h,EVENTLOG_INFORMATION_TYPE,msg,count,array,err,\
                              index)
typedef VOID (APIENTRY * WORKERFUNCTION)(PVOID);
_Analysis_noreturn_
VOID
RouterAssert(
    _In_ IN PSTR pszFailedAssertion,
    _In_ IN PSTR pszFileName,
    _In_ IN DWORD dwLineNumber,
    _In_ IN PSTR pszMessage OPTIONAL
    );
typedef struct _MPR_PROTOCOL_0 {
    DWORD dwProtocolId;
    WCHAR wszProtocol[RTUTILS_MAX_PROTOCOL_NAME_LEN+1];
    WCHAR wszDLLName[RTUTILS_MAX_PROTOCOL_DLL_LEN+1];
} MPR_PROTOCOL_0;
DWORD APIENTRY
MprSetupProtocolEnum(
    IN DWORD dwTransportId,
    OUT LPBYTE* lplpBuffer,
    OUT LPDWORD lpdwEntriesRead
    );
DWORD APIENTRY
MprSetupProtocolFree(
    IN LPVOID lpBuffer
    );
}
#endif
#pragma endregion
