       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
APICONTRACT
BOOL
APIENTRY
IsApiSetImplemented(
    _In_ PCSTR Contract
    );
#endif
#pragma endregion
}
