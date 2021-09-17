       
#include <winapifamily.h>
#pragma region Desktop Family or RemoteFS Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_REMOTEFS)
extern "C" {
DWORD
WINAPI
RegisterAppInstance(
    _In_ HANDLE ProcessHandle,
    _In_ GUID* AppInstanceId,
    _In_ BOOL ChildrenInheritAppInstance
    );
typedef DWORD
(WINAPI * PREGISTER_APPINSTANCE)(
    _In_ HANDLE ProcessHandle,
    _In_ GUID* AppInstanceId,
    _In_ BOOL ChildrenInheritAppInstance
    );
DWORD
WINAPI
SetAppInstanceCsvFlags(
    _In_ HANDLE ProcessHandle,
    _In_ ULONG Mask,
    _In_ ULONG Flags
    );
typedef DWORD
(WINAPI *SET_APP_INSTANCE_CSV_FLAGS)(
    _In_ HANDLE ProcessHandle,
    _In_ ULONG Mask,
    _In_ ULONG Flags
    );
}
#endif
#pragma endregion
