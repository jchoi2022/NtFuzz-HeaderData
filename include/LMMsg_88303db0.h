#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
NET_API_STATUS NET_API_FUNCTION
NetMessageNameAdd (
    _In_opt_ LPCWSTR servername,
    _In_ LPCWSTR msgname
    );
NET_API_STATUS NET_API_FUNCTION
NetMessageNameEnum (
    _In_opt_ LPCWSTR servername,
    _In_ DWORD level,
    _In_ LPBYTE *bufptr,
    _In_ DWORD prefmaxlen,
    _Out_ LPDWORD entriesread,
    _Out_ LPDWORD totalentries,
    _Out_ LPDWORD resume_handle
    );
NET_API_STATUS NET_API_FUNCTION
NetMessageNameGetInfo (
    _In_opt_ LPCWSTR servername,
    _In_ LPCWSTR msgname,
    _In_ DWORD level,
    _In_ LPBYTE *bufptr
    );
NET_API_STATUS NET_API_FUNCTION
NetMessageNameDel (
    _In_opt_ LPCWSTR servername,
    _In_ LPCWSTR msgname
    );
NET_API_STATUS NET_API_FUNCTION
NetMessageBufferSend (
    _In_opt_ LPCWSTR servername,
    _In_ LPCWSTR msgname,
    _In_ LPCWSTR fromname,
    _In_ LPBYTE buf,
    _In_ DWORD buflen
    );
typedef struct _MSG_INFO_0 {
    LPWSTR msgi0_name;
}MSG_INFO_0, *PMSG_INFO_0, *LPMSG_INFO_0;
typedef struct _MSG_INFO_1 {
    LPWSTR msgi1_name;
    DWORD msgi1_forward_flag;
    LPWSTR msgi1_forward;
}MSG_INFO_1, *PMSG_INFO_1, *LPMSG_INFO_1;
}
#endif
#pragma endregion
