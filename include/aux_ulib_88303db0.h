#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windows.h>
extern "C" {
BOOL
WINAPI
AuxUlibInitialize (
    VOID
    );
BOOL
WINAPI
AuxUlibSetSystemFileCacheSize (
    _In_ SIZE_T MinimumFileCacheSize,
    _In_ SIZE_T MaximumFileCacheSize,
    _In_ DWORD Flags
   );
BOOL
WINAPI
AuxUlibIsDLLSynchronizationHeld (
    _Out_ PBOOL SynchronizationHeld
    );
}
#endif
#pragma endregion
