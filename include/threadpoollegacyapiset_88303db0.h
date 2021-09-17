       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
QueueUserWorkItem(
    _In_ LPTHREAD_START_ROUTINE Function,
    _In_opt_ PVOID Context,
    _In_ ULONG Flags
    );
WINBASEAPI
_Must_inspect_result_
BOOL
WINAPI
UnregisterWaitEx(
    _In_ HANDLE WaitHandle,
    _In_opt_ HANDLE CompletionEvent
    );
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
CreateTimerQueue(
    VOID
    );
WINBASEAPI
BOOL
WINAPI
CreateTimerQueueTimer(
    _Outptr_ PHANDLE phNewTimer,
    _In_opt_ HANDLE TimerQueue,
    _In_ WAITORTIMERCALLBACK Callback,
    _In_opt_ PVOID Parameter,
    _In_ DWORD DueTime,
    _In_ DWORD Period,
    _In_ ULONG Flags
    );
WINBASEAPI
_Must_inspect_result_
BOOL
WINAPI
ChangeTimerQueueTimer(
    _In_opt_ HANDLE TimerQueue,
    _Inout_ HANDLE Timer,
    _In_ ULONG DueTime,
    _In_ ULONG Period
    );
WINBASEAPI
_Must_inspect_result_
BOOL
WINAPI
DeleteTimerQueueTimer(
    _In_opt_ HANDLE TimerQueue,
    _In_ HANDLE Timer,
    _In_opt_ HANDLE CompletionEvent
    );
WINBASEAPI
_Must_inspect_result_
BOOL
WINAPI
DeleteTimerQueueEx(
    _In_ HANDLE TimerQueue,
    _In_opt_ HANDLE CompletionEvent
    );
#endif
#pragma endregion
}
