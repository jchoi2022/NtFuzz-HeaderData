extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef
VOID
(CALLBACK *OOBE_COMPLETED_CALLBACK)(
    _In_opt_ PVOID CallbackContext
    );
_Check_return_
_Success_(return != FALSE)
BOOL
WINAPI
OOBEComplete(
    _Out_ PBOOL isOOBEComplete
    );
_Check_return_
_Success_(return != FALSE)
BOOL
WINAPI
RegisterWaitUntilOOBECompleted(
    _In_ OOBE_COMPLETED_CALLBACK OOBECompletedCallback,
    _In_opt_ PVOID CallbackContext,
    _Out_ PVOID* WaitHandle
    );
_Check_return_
_Success_(return != FALSE)
BOOL
WINAPI
UnregisterWaitUntilOOBECompleted(
    _In_ PVOID WaitHandle
    );
#endif
#pragma endregion
}
