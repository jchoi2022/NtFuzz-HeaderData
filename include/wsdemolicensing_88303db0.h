#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
STDAPI
AddDemoAppLicense(
    _In_ UINT cbLicenseBlob,
    _In_reads_bytes_(cbLicenseBlob) CONST BYTE* pbLicenseBlob
    );
STDAPI
RemoveDemoAppLicense(
    _In_ LPCWSTR pwszPackageFamilyName
    );
#endif
#pragma endregion
