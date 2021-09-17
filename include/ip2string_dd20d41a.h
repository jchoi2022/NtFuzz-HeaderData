       
#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
struct in_addr;
struct in6_addr;
union _DL_EUI48;
typedef union _DL_EUI48 DL_EUI48, *PDL_EUI48;
NTSYSAPI
PSTR
NTAPI
RtlIpv4AddressToStringA (
    _In_ const struct in_addr *Addr,
    _Out_writes_(16) PSTR S
    );
NTSYSAPI
PSTR
NTAPI
RtlIpv6AddressToStringA (
    _In_ const struct in6_addr *Addr,
    _Out_writes_(46) PSTR S
    );
NTSYSAPI
PSTR
NTAPI
RtlEthernetAddressToStringA (
    _In_ const DL_EUI48 *Addr,
    _Out_writes_(18) PSTR S
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlIpv4AddressToStringExA(
    _In_ const struct in_addr *Address,
    _In_ USHORT Port,
    _Out_writes_to_(*AddressStringLength, *AddressStringLength) PSTR AddressString,
    _Inout_ PULONG AddressStringLength
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlIpv6AddressToStringExA(
    _In_ const struct in6_addr *Address,
    _In_ ULONG ScopeId,
    _In_ USHORT Port,
    _Out_writes_to_(*AddressStringLength, *AddressStringLength) PSTR AddressString,
    _Inout_ PULONG AddressStringLength
    );
NTSYSAPI
PWSTR
NTAPI
RtlIpv4AddressToStringW (
    _In_ const struct in_addr *Addr,
    _Out_writes_(16) PWSTR S
    );
NTSYSAPI
PWSTR
NTAPI
RtlIpv6AddressToStringW (
    _In_ const struct in6_addr *Addr,
    _Out_writes_(46) PWSTR S
    );
NTSYSAPI
PWSTR
NTAPI
RtlEthernetAddressToStringW (
    _In_ const DL_EUI48 *Addr,
    _Out_writes_(18) PWSTR S
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlIpv4AddressToStringExW(
    _In_ const struct in_addr *Address,
    _In_ USHORT Port,
    _Out_writes_to_(*AddressStringLength, *AddressStringLength) PWSTR AddressString,
    _Inout_ PULONG AddressStringLength
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlIpv6AddressToStringExW(
    _In_ const struct in6_addr *Address,
    _In_ ULONG ScopeId,
    _In_ USHORT Port,
    _Out_writes_to_(*AddressStringLength, *AddressStringLength) PWSTR AddressString,
    _Inout_ PULONG AddressStringLength
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlIpv4StringToAddressA (
    _In_ PCSTR S,
    _In_ BOOLEAN Strict,
    _Out_ PCSTR *Terminator,
    _Out_ struct in_addr *Addr
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlIpv6StringToAddressA (
    _In_ PCSTR S,
    _Out_ PCSTR *Terminator,
    _Out_ struct in6_addr *Addr
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlEthernetStringToAddressA (
    _In_ PCSTR S,
    _Out_ PCSTR *Terminator,
    _Out_ DL_EUI48 *Addr
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlIpv4StringToAddressExA (
    _In_ PCSTR AddressString,
    _In_ BOOLEAN Strict,
    _Out_ struct in_addr *Address,
    _Out_ PUSHORT Port
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlIpv6StringToAddressExA (
    _In_ PCSTR AddressString,
    _Out_ struct in6_addr *Address,
    _Out_ PULONG ScopeId,
    _Out_ PUSHORT Port
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlIpv4StringToAddressW (
    _In_ PCWSTR S,
    _In_ BOOLEAN Strict,
    _Out_ LPCWSTR *Terminator,
    _Out_ struct in_addr *Addr
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlIpv6StringToAddressW (
    _In_ PCWSTR S,
    _Out_ PCWSTR *Terminator,
    _Out_ struct in6_addr *Addr
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlEthernetStringToAddressW (
    _In_ PCWSTR S,
    _Out_ LPCWSTR *Terminator,
    _Out_ DL_EUI48 *Addr
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlIpv4StringToAddressExW (
    _In_ PCWSTR AddressString,
    _In_ BOOLEAN Strict,
    _Out_ struct in_addr *Address,
    _Out_ PUSHORT Port
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlIpv6StringToAddressExW (
    _In_ PCWSTR AddressString,
    _Out_ struct in6_addr *Address,
    _Out_ PULONG ScopeId,
    _Out_ PUSHORT Port
    );
}
#endif
#pragma endregion
