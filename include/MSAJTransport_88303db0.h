       
extern "C" {
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
HANDLE
WINAPI
AllJoynConnectToBus(
    _In_opt_ PCWSTR connectionSpec);
BOOL
WINAPI
AllJoynCloseBusHandle(
    _In_ HANDLE busHandle);
BOOL
WINAPI
AllJoynSendToBus(
    _In_ HANDLE connectedBusHandle,
    _In_reads_bytes_opt_(bytesToWrite) const VOID *buffer,
    _In_ DWORD bytesToWrite,
    _Out_opt_ PDWORD bytesTransferred,
    _Inout_ PVOID reserved);
BOOL
WINAPI
AllJoynReceiveFromBus(
    _In_ HANDLE connectedBusHandle,
    _Out_writes_bytes_to_opt_(bytesToRead, *bytesTransferred) PVOID buffer,
    _In_ DWORD bytesToRead,
    _Out_opt_ PDWORD bytesTransferred,
    _Inout_ PVOID reserved);
BOOL
WINAPI
AllJoynEventSelect(
    _In_ HANDLE connectedBusHandle,
    _In_ HANDLE eventHandle,
    _In_ DWORD eventTypes);
BOOL
WINAPI
AllJoynEnumEvents(
    _In_ HANDLE connectedBusHandle,
    _In_opt_ HANDLE eventToReset,
    _Out_ PDWORD eventTypes);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
HANDLE
WINAPI
AllJoynCreateBus(
    _In_ DWORD outBufferSize,
    _In_ DWORD inBufferSize,
    _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes);
DWORD
WINAPI
AllJoynAcceptBusConnection(
    _In_ HANDLE serverBusHandle,
    _In_ HANDLE abortEvent);
#endif
#pragma endregion
}
