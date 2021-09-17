       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
STDAPI
RegisterDeviceWithLocalManagement(
    _Out_opt_ BOOL* alreadyRegistered);
STDAPI
ApplyLocalManagementSyncML(
    _In_ PCWSTR syncMLRequest,
    _Outptr_opt_result_maybenull_ PWSTR* syncMLResult
    );
STDAPI
UnregisterDeviceWithLocalManagement();
#endif
#pragma endregion
