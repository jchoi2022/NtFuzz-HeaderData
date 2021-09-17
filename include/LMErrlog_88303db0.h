#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct _ERROR_LOG {
     DWORD el_len;
     DWORD el_reserved;
     DWORD el_time;
     DWORD el_error;
     LPWSTR el_name;
     LPWSTR el_text;
     LPBYTE el_data;
     DWORD el_data_size;
     DWORD el_nstrings;
} ERROR_LOG, *PERROR_LOG, *LPERROR_LOG;
typedef struct _HLOG {
     DWORD time;
     DWORD last_flags;
     DWORD offset;
     DWORD rec_offset;
} HLOG, *PHLOG, *LPHLOG;
NET_API_STATUS NET_API_FUNCTION
NetErrorLogClear (
    _In_opt_ LPCWSTR UncServerName,
    _In_opt_ LPCWSTR BackupFile,
    _In_opt_ LPBYTE Reserved
    );
NET_API_STATUS NET_API_FUNCTION
NetErrorLogRead (
    _In_opt_ LPCWSTR UncServerName,
    _In_opt_ LPWSTR Reserved1,
    _In_ LPHLOG ErrorLogHandle,
    _In_ DWORD Offset,
    _In_opt_ LPDWORD Reserved2,
    _In_ DWORD Reserved3,
    _In_ DWORD OffsetFlag,
    _Outptr_ LPBYTE *BufPtr,
    _In_ DWORD PrefMaxSize,
    _Out_ LPDWORD BytesRead,
    _Out_ LPDWORD TotalAvailable
    );
NET_API_STATUS NET_API_FUNCTION
NetErrorLogWrite (
    _In_opt_ LPBYTE Reserved1,
    _In_ DWORD Code,
    _In_ LPCWSTR Component,
    _In_ LPBYTE Buffer,
    _In_ DWORD NumBytes,
    _In_ LPBYTE MsgBuf,
    _In_ DWORD StrCount,
    _In_opt_ LPBYTE Reserved2
    );
}
#endif
#pragma endregion
