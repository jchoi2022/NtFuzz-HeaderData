#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
typedef CHAR DESC_CHAR;
typedef LPSTR LPDESC;
_Check_return_
_Success_( return == 0 )
NET_API_STATUS NET_API_FUNCTION
NetRemoteTOD (
    _In_opt_ LPCWSTR UncServerName,
    _Outptr_result_bytebuffer_(sizeof(TIME_OF_DAY_INFO)) LPBYTE *BufferPtr
    );
NET_API_STATUS NET_API_FUNCTION
NetRemoteComputerSupports(
    IN LPCWSTR UncServerName OPTIONAL,
    IN DWORD OptionsWanted,
    OUT LPDWORD OptionsSupported
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
NET_API_STATUS
__cdecl
RxRemoteApi(
    IN DWORD ApiNumber,
    _In_ IN LPCWSTR UncServerName,
    _In_ IN LPDESC ParmDescString,
    _In_opt_ IN LPDESC DataDesc16 OPTIONAL,
    _In_opt_ IN LPDESC DataDesc32 OPTIONAL,
    _In_opt_ IN LPDESC DataDescSmb OPTIONAL,
    _In_opt_ IN LPDESC AuxDesc16 OPTIONAL,
    _In_opt_ IN LPDESC AuxDesc32 OPTIONAL,
    _In_opt_ IN LPDESC AuxDescSmb OPTIONAL,
    IN DWORD Flags,
    ...
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef struct _TIME_OF_DAY_INFO {
    DWORD tod_elapsedt;
    DWORD tod_msecs;
    DWORD tod_hours;
    DWORD tod_mins;
    DWORD tod_secs;
    DWORD tod_hunds;
    LONG tod_timezone;
    DWORD tod_tinterval;
    DWORD tod_day;
    DWORD tod_month;
    DWORD tod_year;
    DWORD tod_weekday;
} TIME_OF_DAY_INFO, *PTIME_OF_DAY_INFO, *LPTIME_OF_DAY_INFO;
}
#endif
#pragma endregion
