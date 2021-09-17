       
#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
HRESULT WINAPI
WDStatus(
    _Out_ BOOL* pfEnabled);
HRESULT WINAPI
WDEnable(
    _In_ BOOL fEnable);
#endif
#pragma endregion
}
