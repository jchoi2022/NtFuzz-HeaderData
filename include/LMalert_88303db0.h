#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
NET_API_STATUS NET_API_FUNCTION
NetAlertRaise(
    _In_ LPCWSTR AlertType,
    _In_ LPVOID Buffer,
    _In_ DWORD BufferSize
    );
NET_API_STATUS NET_API_FUNCTION
NetAlertRaiseEx(
    _In_ LPCWSTR AlertType,
    _In_ LPVOID VariableInfo,
    _In_ DWORD VariableInfoSize,
    _In_ LPCWSTR ServiceName
    );
typedef struct _STD_ALERT {
    DWORD alrt_timestamp;
    WCHAR alrt_eventname[EVLEN + 1];
    WCHAR alrt_servicename[SNLEN + 1];
}STD_ALERT, *PSTD_ALERT, *LPSTD_ALERT;
typedef struct _ADMIN_OTHER_INFO {
    DWORD alrtad_errcode;
    DWORD alrtad_numstrings;
}ADMIN_OTHER_INFO, *PADMIN_OTHER_INFO, *LPADMIN_OTHER_INFO;
typedef struct _ERRLOG_OTHER_INFO {
    DWORD alrter_errcode;
    DWORD alrter_offset;
}ERRLOG_OTHER_INFO, *PERRLOG_OTHER_INFO, *LPERRLOG_OTHER_INFO;
typedef struct _PRINT_OTHER_INFO {
    DWORD alrtpr_jobid;
    DWORD alrtpr_status;
    DWORD alrtpr_submitted;
    DWORD alrtpr_size;
}PRINT_OTHER_INFO, *PPRINT_OTHER_INFO, *LPPRINT_OTHER_INFO;
typedef struct _USER_OTHER_INFO {
    DWORD alrtus_errcode;
    DWORD alrtus_numstrings;
}USER_OTHER_INFO, *PUSER_OTHER_INFO, *LPUSER_OTHER_INFO;
}
#endif
#pragma endregion
