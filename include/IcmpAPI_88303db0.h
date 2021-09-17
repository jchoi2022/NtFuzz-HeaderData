#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
extern "C" {
IPHLPAPI_DLL_LINKAGE
HANDLE
WINAPI
IcmpCreateFile(
    VOID
    );
IPHLPAPI_DLL_LINKAGE
HANDLE
WINAPI
Icmp6CreateFile(
    VOID
    );
IPHLPAPI_DLL_LINKAGE
BOOL
WINAPI
IcmpCloseHandle(
    _In_ HANDLE IcmpHandle
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
IcmpSendEcho(
    _In_ HANDLE IcmpHandle,
    _In_ IPAddr DestinationAddress,
    _In_reads_bytes_(RequestSize) LPVOID RequestData,
    _In_ WORD RequestSize,
    _In_opt_ PIP_OPTION_INFORMATION RequestOptions,
    _Out_writes_bytes_(ReplySize) LPVOID ReplyBuffer,
    _In_range_(>=, sizeof(ICMP_ECHO_REPLY) + RequestSize + 8)
    DWORD ReplySize,
    _In_ DWORD Timeout
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
IcmpSendEcho2(
    _In_ HANDLE IcmpHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _In_ IPAddr DestinationAddress,
    _In_reads_bytes_(RequestSize) LPVOID RequestData,
    _In_ WORD RequestSize,
    _In_opt_ PIP_OPTION_INFORMATION RequestOptions,
    _Out_writes_bytes_(ReplySize) LPVOID ReplyBuffer,
    _In_range_(>=, sizeof(ICMP_ECHO_REPLY) + RequestSize + 8)
    DWORD ReplySize,
    _In_ DWORD Timeout
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
IcmpSendEcho2Ex(
    _In_ HANDLE IcmpHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _In_ IPAddr SourceAddress,
    _In_ IPAddr DestinationAddress,
    _In_reads_bytes_(RequestSize) LPVOID RequestData,
    _In_ WORD RequestSize,
    _In_opt_ PIP_OPTION_INFORMATION RequestOptions,
    _Out_writes_bytes_(ReplySize) LPVOID ReplyBuffer,
    _In_range_(>=, sizeof(ICMP_ECHO_REPLY) + RequestSize + 8)
    DWORD ReplySize,
    _In_ DWORD Timeout
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
Icmp6SendEcho2(
    _In_ HANDLE IcmpHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _In_ struct sockaddr_in6 *SourceAddress,
    _In_ struct sockaddr_in6 *DestinationAddress,
    _In_reads_bytes_(RequestSize) LPVOID RequestData,
    _In_ WORD RequestSize,
    _In_opt_ PIP_OPTION_INFORMATION RequestOptions,
    _Out_writes_bytes_(ReplySize) LPVOID ReplyBuffer,
    _In_range_(>=, sizeof(ICMPV6_ECHO_REPLY) + RequestSize + 8)
    DWORD ReplySize,
    _In_ DWORD Timeout
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
IcmpParseReplies(
    _Out_writes_bytes_(ReplySize) LPVOID ReplyBuffer,
    _In_range_(>=, sizeof(ICMP_ECHO_REPLY) + 8)
    DWORD ReplySize
    );
IPHLPAPI_DLL_LINKAGE
DWORD
WINAPI
Icmp6ParseReplies(
    _Out_writes_bytes_(ReplySize) LPVOID ReplyBuffer,
    _In_range_(>, sizeof(ICMPV6_ECHO_REPLY) + 8)
    DWORD ReplySize
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
}
#endif
#pragma endregion
