       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
BOOL
WINAPI
GetAppContainerNamedObjectPath(
    _In_opt_ HANDLE Token,
    _In_opt_ PSID AppContainerSid,
    _In_ ULONG ObjectPathLength,
    _Out_writes_opt_(ObjectPathLength) LPWSTR ObjectPath,
    _Out_ PULONG ReturnLength
    );
}
#endif
#pragma endregion
