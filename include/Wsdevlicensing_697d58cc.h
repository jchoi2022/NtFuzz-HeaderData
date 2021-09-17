#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
STDAPI
CheckDeveloperLicense(
    _Out_ FILETIME *pExpiration
    );
STDAPI
AcquireDeveloperLicense(
    _In_opt_ HWND hwndParent,
    _Out_ FILETIME *pExpiration
    );
STDAPI
RemoveDeveloperLicense(
    _In_opt_ HWND hwndParent
    );
#endif
#pragma endregion
