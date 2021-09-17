       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
extern "C" {
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Success_(return != FALSE)
BOOL
WINAPI
ConvertSidToStringSidA(
    _In_ PSID Sid,
    _Outptr_ LPSTR *StringSid
    );
_Success_(return != FALSE)
BOOL
WINAPI
ConvertSidToStringSidW(
    _In_ PSID Sid,
    _Outptr_ LPWSTR* StringSid
    );
_Success_(return != FALSE)
BOOL
WINAPI
ConvertStringSidToSidA(
    _In_ LPCSTR StringSid,
    _Outptr_ PSID *Sid
    );
_Success_(return != FALSE)
BOOL
WINAPI
ConvertStringSidToSidW(
    _In_ LPCWSTR StringSid,
    _Outptr_ PSID* Sid
    );
_Success_(return != FALSE)
BOOL
WINAPI
ConvertStringSecurityDescriptorToSecurityDescriptorA(
    _In_ LPCSTR StringSecurityDescriptor,
    _In_ DWORD StringSDRevision,
    _Outptr_ PSECURITY_DESCRIPTOR *SecurityDescriptor,
    _Out_opt_ PULONG SecurityDescriptorSize
    );
_Success_(return != FALSE)
BOOL
WINAPI
ConvertStringSecurityDescriptorToSecurityDescriptorW(
    _In_ LPCWSTR StringSecurityDescriptor,
    _In_ DWORD StringSDRevision,
    _Outptr_ PSECURITY_DESCRIPTOR* SecurityDescriptor,
    _Out_opt_ PULONG SecurityDescriptorSize
    );
_Success_(return != FALSE)
BOOL
WINAPI
ConvertSecurityDescriptorToStringSecurityDescriptorA(
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ DWORD RequestedStringSDRevision,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _Outptr_ LPSTR *StringSecurityDescriptor,
    _Out_opt_ PULONG StringSecurityDescriptorLen
    );
_Success_(return != FALSE)
BOOL
WINAPI
ConvertSecurityDescriptorToStringSecurityDescriptorW(
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ DWORD RequestedStringSDRevision,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _Outptr_ LPWSTR* StringSecurityDescriptor,
    _Out_opt_ PULONG StringSecurityDescriptorLen
    );
#pragma endregion
#endif
}
