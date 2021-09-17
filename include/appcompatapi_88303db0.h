#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
BOOL
SDBAPI
ApphelpCheckShellObject(
    _In_ REFCLSID ObjectCLSID,
    _In_ BOOL bShimIfNecessary,
    _Out_ ULONGLONG* pullFlags
    );
}
#endif
#pragma endregion
