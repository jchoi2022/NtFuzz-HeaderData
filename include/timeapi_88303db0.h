       
#include <apiset.h>
#include <apisetcconv.h>
#include <mmsyscom.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef struct timecaps_tag {
    UINT wPeriodMin;
    UINT wPeriodMax;
} TIMECAPS, *PTIMECAPS, NEAR *NPTIMECAPS, FAR *LPTIMECAPS;
WINMMAPI
MMRESULT
WINAPI
timeGetSystemTime(
    _Out_writes_bytes_(cbmmt) LPMMTIME pmmt,
    _In_ UINT cbmmt
    );
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINMMAPI
DWORD
WINAPI
timeGetTime(
    void
    );
#endif
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINMMAPI
MMRESULT
WINAPI
timeGetDevCaps(
    _Out_writes_bytes_(cbtc) LPTIMECAPS ptc,
    _In_ UINT cbtc
    );
WINMMAPI
MMRESULT
WINAPI
timeBeginPeriod(
    _In_ UINT uPeriod
    );
WINMMAPI
MMRESULT
WINAPI
timeEndPeriod(
    _In_ UINT uPeriod
    );
#endif
#endif
#pragma endregion
}
