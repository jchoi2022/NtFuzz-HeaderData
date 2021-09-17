#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
UINT WINAPI ShutdownMsi(DWORD dwReserved);
UINT WINAPI RestartMsi(DWORD dwReserved);
}
#endif
#pragma endregion
