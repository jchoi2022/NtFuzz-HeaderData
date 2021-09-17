#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
STDAPI
GetNetScheduleAccountInformation(
    IN LPCWSTR pwszServerName,
    OUT DWORD ccAccount,
    OUT _Out_writes_(ccAccount) WCHAR wszAccount[]
    );
STDAPI
SetNetScheduleAccountInformation(
    IN LPCWSTR pwszServerName,
    IN LPCWSTR pwszAccount,
    IN LPCWSTR pwszPassword
    );
}
#endif
#pragma endregion
