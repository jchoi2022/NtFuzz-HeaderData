#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <wincrypt.h>
#include <sipbase.h>
#include <mscat.h>
#include <mssip.h>
#include <wintrust.h>
extern "C" {
typedef struct _JAVA_TRUST {
    DWORD cbSize;
    DWORD flag;
    BOOL fAllActiveXPermissions;
    BOOL fAllPermissions;
    DWORD dwEncodingType;
    PBYTE pbJavaPermissions;
    DWORD cbJavaPermissions;
    PBYTE pbSigner;
    DWORD cbSigner;
    LPCWSTR pwszZone;
    GUID guidZone;
    HRESULT hVerify;
} JAVA_TRUST, *PJAVA_TRUST;
}
#endif
#pragma endregion
