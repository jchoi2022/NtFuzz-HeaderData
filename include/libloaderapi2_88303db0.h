       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>
extern "C" {
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Ret_maybenull_
HMODULE
WINAPI
LoadPackagedLibrary(
    _In_ LPCWSTR lpwLibFileName,
    _Reserved_ DWORD Reserved
    );
WINBASEAPI
BOOL
WINAPI
QueryOptionalDelayLoadedAPI(
    _In_ HMODULE hParentModule,
    _In_ LPCSTR lpDllName,
    _In_ LPCSTR lpProcName,
    _Reserved_ DWORD Reserved
    );
#endif
#pragma endregion
}
