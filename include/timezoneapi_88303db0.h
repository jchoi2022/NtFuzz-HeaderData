       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>
extern "C" {
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[ 32 ];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[ 32 ];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
} TIME_ZONE_INFORMATION, *PTIME_ZONE_INFORMATION, *LPTIME_ZONE_INFORMATION;
typedef struct _TIME_DYNAMIC_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[ 32 ];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[ 32 ];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
    WCHAR TimeZoneKeyName[ 128 ];
    BOOLEAN DynamicDaylightTimeDisabled;
} DYNAMIC_TIME_ZONE_INFORMATION, *PDYNAMIC_TIME_ZONE_INFORMATION;
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
SystemTimeToTzSpecificLocalTime(
    _In_opt_ CONST TIME_ZONE_INFORMATION* lpTimeZoneInformation,
    _In_ CONST SYSTEMTIME* lpUniversalTime,
    _Out_ LPSYSTEMTIME lpLocalTime
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
TzSpecificLocalTimeToSystemTime(
    _In_opt_ CONST TIME_ZONE_INFORMATION* lpTimeZoneInformation,
    _In_ CONST SYSTEMTIME* lpLocalTime,
    _Out_ LPSYSTEMTIME lpUniversalTime
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
FileTimeToSystemTime(
    _In_ CONST FILETIME* lpFileTime,
    _Out_ LPSYSTEMTIME lpSystemTime
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
SystemTimeToFileTime(
    _In_ CONST SYSTEMTIME* lpSystemTime,
    _Out_ LPFILETIME lpFileTime
    );
WINBASEAPI
_Success_(return != TIME_ZONE_ID_INVALID)
DWORD
WINAPI
GetTimeZoneInformation(
    _Out_ LPTIME_ZONE_INFORMATION lpTimeZoneInformation
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINBASEAPI
BOOL
WINAPI
SetTimeZoneInformation(
    _In_ CONST TIME_ZONE_INFORMATION* lpTimeZoneInformation
    );
WINBASEAPI
BOOL
WINAPI
SetDynamicTimeZoneInformation(
    _In_ CONST DYNAMIC_TIME_ZONE_INFORMATION* lpTimeZoneInformation
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINBASEAPI
_Success_(return != TIME_ZONE_ID_INVALID)
DWORD
WINAPI
GetDynamicTimeZoneInformation(
    _Out_ PDYNAMIC_TIME_ZONE_INFORMATION pTimeZoneInformation
    );
_Success_(return != FALSE)
BOOL
WINAPI
GetTimeZoneInformationForYear(
    _In_ USHORT wYear,
    _In_opt_ PDYNAMIC_TIME_ZONE_INFORMATION pdtzi,
    _Out_ LPTIME_ZONE_INFORMATION ptzi
    );
WINBASEAPI
_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
EnumDynamicTimeZoneInformation(
    _In_ CONST DWORD dwIndex,
    _Out_ PDYNAMIC_TIME_ZONE_INFORMATION lpTimeZoneInformation
    );
WINBASEAPI
_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
GetDynamicTimeZoneInformationEffectiveYears(
    _In_ CONST PDYNAMIC_TIME_ZONE_INFORMATION lpTimeZoneInformation,
    _Out_ LPDWORD FirstYear,
    _Out_ LPDWORD LastYear
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
SystemTimeToTzSpecificLocalTimeEx(
    _In_opt_ CONST DYNAMIC_TIME_ZONE_INFORMATION* lpTimeZoneInformation,
    _In_ CONST SYSTEMTIME* lpUniversalTime,
    _Out_ LPSYSTEMTIME lpLocalTime
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
TzSpecificLocalTimeToSystemTimeEx(
    _In_opt_ CONST DYNAMIC_TIME_ZONE_INFORMATION* lpTimeZoneInformation,
    _In_ CONST SYSTEMTIME* lpLocalTime,
    _Out_ LPSYSTEMTIME lpUniversalTime
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
LocalFileTimeToLocalSystemTime(
    _In_opt_ CONST TIME_ZONE_INFORMATION* timeZoneInformation,
    _In_ CONST FILETIME* localFileTime,
    _Out_ SYSTEMTIME* localSystemTime
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
LocalSystemTimeToLocalFileTime(
    _In_opt_ CONST TIME_ZONE_INFORMATION* timeZoneInformation,
    _In_ CONST SYSTEMTIME* localSystemTime,
    _Out_ FILETIME* localFileTime
    );
#endif
#pragma endregion
}
