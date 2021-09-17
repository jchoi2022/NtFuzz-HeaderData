#include <winapifamily.h>
#include <winsock2.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagUAL_DATA_BLOB
{
    DWORD Size;
    GUID RoleGuid;
    GUID TenantId;
    SOCKADDR_STORAGE Address;
    WCHAR UserName[MAX_PATH];
} UAL_DATA_BLOB, *PUAL_DATA_BLOB;
HRESULT
WINAPI
UalStart(
    _In_ PUAL_DATA_BLOB Data);
HRESULT
WINAPI
UalStop(
    _In_ PUAL_DATA_BLOB Data);
HRESULT
WINAPI
UalInstrument(
    _In_ PUAL_DATA_BLOB Data);
HRESULT
WINAPI
UalRegisterProduct(
    _In_z_ const WCHAR* wszProductName,
    _In_z_ const WCHAR* wszRoleName,
    _In_z_ const WCHAR* wszGuid);
#endif
#pragma endregion
}
