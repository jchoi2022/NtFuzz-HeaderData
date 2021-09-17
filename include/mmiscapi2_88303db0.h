       
#include <apiset.h>
#include <apisetcconv.h>
#include <mmsyscom.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef void (CALLBACK TIMECALLBACK)(UINT uTimerID, UINT uMsg, DWORD_PTR dwUser, DWORD_PTR dw1, DWORD_PTR dw2);
typedef TIMECALLBACK FAR *LPTIMECALLBACK;
WINMMAPI
MMRESULT
WINAPI
timeSetEvent(
    _In_ UINT uDelay,
    _In_ UINT uResolution,
    _In_ LPTIMECALLBACK fptc,
    _In_ DWORD_PTR dwUser,
    _In_ UINT fuEvent
    );
WINMMAPI
MMRESULT
WINAPI
timeKillEvent(
    _In_ UINT uTimerID
    );
#endif
#pragma endregion
}
