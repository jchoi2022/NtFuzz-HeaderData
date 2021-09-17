#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
                                JOB_ADD_CURRENT_DATE | \
                                JOB_NONINTERACTIVE )
                                JOB_EXEC_ERROR | \
                                JOB_RUNS_TODAY | \
                                JOB_NONINTERACTIVE )
typedef struct _AT_INFO {
    DWORD_PTR JobTime;
    DWORD DaysOfMonth;
    UCHAR DaysOfWeek;
    UCHAR Flags;
    LPWSTR Command;
} AT_INFO, *PAT_INFO, *LPAT_INFO;
typedef struct _AT_ENUM {
    DWORD JobId;
    DWORD_PTR JobTime;
    DWORD DaysOfMonth;
    UCHAR DaysOfWeek;
    UCHAR Flags;
    LPWSTR Command;
} AT_ENUM, *PAT_ENUM, *LPAT_ENUM;
NET_API_STATUS NET_API_FUNCTION
NetScheduleJobAdd(
    IN LPCWSTR Servername OPTIONAL,
    IN LPBYTE Buffer,
    OUT LPDWORD JobId
    );
NET_API_STATUS NET_API_FUNCTION
NetScheduleJobDel(
    IN LPCWSTR Servername OPTIONAL,
    IN DWORD MinJobId,
    IN DWORD MaxJobId
    );
NET_API_STATUS NET_API_FUNCTION
NetScheduleJobEnum(
    IN LPCWSTR Servername OPTIONAL,
    OUT LPBYTE * PointerToBuffer,
    IN DWORD PrefferedMaximumLength,
    OUT LPDWORD EntriesRead,
    OUT LPDWORD TotalEntries,
    IN OUT LPDWORD ResumeHandle
    );
NET_API_STATUS NET_API_FUNCTION
NetScheduleJobGetInfo(
    IN LPCWSTR Servername OPTIONAL,
    IN DWORD JobId,
    OUT LPBYTE * PointerToBuffer
    );
}
#endif
#pragma endregion
