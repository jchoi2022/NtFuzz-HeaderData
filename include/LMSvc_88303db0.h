#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
#include <lmsname.h>
typedef struct _SERVICE_INFO_0 {
    LPWSTR svci0_name;
} SERVICE_INFO_0, *PSERVICE_INFO_0, * LPSERVICE_INFO_0;
typedef struct _SERVICE_INFO_1 {
    LPWSTR svci1_name;
    DWORD svci1_status;
    DWORD svci1_code;
    DWORD svci1_pid;
} SERVICE_INFO_1, *PSERVICE_INFO_1, * LPSERVICE_INFO_1;
typedef struct _SERVICE_INFO_2 {
    LPWSTR svci2_name;
    DWORD svci2_status;
    DWORD svci2_code;
    DWORD svci2_pid;
    LPWSTR svci2_text;
    DWORD svci2_specific_error;
    LPWSTR svci2_display_name;
} SERVICE_INFO_2, *PSERVICE_INFO_2, * LPSERVICE_INFO_2;
NET_API_STATUS NET_API_FUNCTION
NetServiceControl (
    _In_opt_ LPCWSTR servername,
    _In_ LPCWSTR service,
    _In_ DWORD opcode,
    _In_ DWORD arg,
    _Outptr_ LPBYTE *bufptr
    );
NET_API_STATUS NET_API_FUNCTION
NetServiceEnum (
    _In_opt_ LPCWSTR servername,
    _In_ DWORD level,
    _Outptr_result_buffer_(_Inexpressible_(entriesread)) LPBYTE *bufptr,
    _In_ DWORD prefmaxlen,
    _Out_ LPDWORD entriesread,
    _Out_ LPDWORD totalentries,
    _Inout_opt_ LPDWORD resume_handle
    );
NET_API_STATUS NET_API_FUNCTION
NetServiceGetInfo (
    _In_opt_ LPCWSTR servername,
    _In_ LPCWSTR service,
    _In_ DWORD level,
    _Outptr_ LPBYTE *bufptr
    );
NET_API_STATUS NET_API_FUNCTION
NetServiceInstall (
    _In_opt_ LPCWSTR servername,
    _In_ LPCWSTR service,
    _In_ DWORD argc,
    _In_reads_(argc) LPCWSTR argv[],
    _Outptr_ LPBYTE *bufptr
    );
  ((long)SERVICE_IP_QUERY_HINT|(long)(nn|(tt<<SERVICE_IP_WAITTIME_SHIFT)))
  ((long)SERVICE_CCP_QUERY_HINT|(long)(nn|(tt<<SERVICE_IP_WAITTIME_SHIFT)))
  ((long)(((long)cc<<16)|(long)(unsigned short)mm))
  ( \
    ((long)SERVICE_CCP_QUERY_HINT) | \
    ((long)(nn)) | \
    (((tt)&LOWER_HINT_MASK) << SERVICE_IP_WAITTIME_SHIFT) | \
    (((tt)&UPPER_HINT_MASK) << SERVICE_NTIP_WAITTIME_SHIFT) \
  )
    ( \
      (((code) & UPPER_GET_HINT_MASK) >> SERVICE_NTIP_WAITTIME_SHIFT) | \
      (((code) & LOWER_GET_HINT_MASK) >> SERVICE_IP_WAITTIME_SHIFT) \
    )
}
#endif
#pragma endregion
