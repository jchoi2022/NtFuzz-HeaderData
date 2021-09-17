#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C"
{
DWORD
WDSBPAPI
WdsBpParseInitialize (
    _In_reads_bytes_(uPacketLen) PVOID pPacket,
    _In_ ULONG uPacketLen,
    _Out_opt_ PBYTE pbPacketType,
    _Out_ HANDLE *phHandle
    );
DWORD
WDSBPAPI
WdsBpParseInitializev6 (
    _In_reads_bytes_(uPacketLen) PVOID pPacket,
    _In_ ULONG uPacketLen,
    _Out_opt_ PBYTE pbPacketType,
    _Out_ HANDLE *phHandle
    );
DWORD
WDSBPAPI
WdsBpInitialize (
    _In_ BYTE bPacketType,
    _Out_ HANDLE *phHandle
    );
DWORD
WDSBPAPI
WdsBpCloseHandle (
    _In_ HANDLE hHandle
    );
_Success_(return == ERROR_SUCCESS)
DWORD
WDSBPAPI
WdsBpQueryOption (
    _In_ HANDLE hHandle,
    _In_ ULONG uOption,
    _In_ ULONG uValueLen,
    _Out_writes_bytes_(uValueLen) PVOID pValue,
    _Out_opt_ PULONG puBytes
    );
DWORD
WDSBPAPI
WdsBpAddOption (
    _In_ HANDLE hHandle,
    _In_ ULONG uOption,
    _In_ ULONG uValueLen,
    _In_reads_bytes_(uValueLen) PVOID pValue
    );
_Success_(return == ERROR_SUCCESS)
DWORD
WDSBPAPI
WdsBpGetOptionBuffer (
    _In_ HANDLE hHandle,
    _In_ ULONG uBufferLen,
    _Out_writes_bytes_(uBufferLen) PVOID pBuffer,
    _Out_ PULONG puBytes
    );
}
#endif
#pragma endregion
