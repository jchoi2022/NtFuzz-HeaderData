#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <specstrings.h>
STDAPI_(DWORD)
OfflineFilesEnable(
    _In_ BOOL bEnable,
    _Out_ BOOL *pbRebootRequired
    );
STDAPI_(DWORD)
OfflineFilesStart(
    );
STDAPI_(DWORD)
OfflineFilesQueryStatus(
    _Out_opt_ BOOL *pbActive,
    _Out_opt_ BOOL *pbEnabled
    );
STDAPI_(DWORD)
OfflineFilesQueryStatusEx(
    _Out_opt_ BOOL *pbActive,
    _Out_opt_ BOOL *pbEnabled,
    _Out_opt_ BOOL *pbAvailable
    );
#endif
#pragma endregion
