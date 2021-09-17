#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C"
{
typedef DWORD (WINAPI *PFNCHECKCONNECTIONWIZARD) (DWORD, LPDWORD);
typedef DWORD (WINAPI *PFNSETSHELLNEXT) (_In_ PSTR);
DWORD WINAPI CheckConnectionWizard(DWORD, LPDWORD);
DWORD
WINAPI
SetShellNext(
    _In_ PSTR szShellNext
    );
}
#endif
#pragma endregion
