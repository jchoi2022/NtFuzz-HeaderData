       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" BOOL WINAPI DoMsCtfMonitor(DWORD dwFlags, HANDLE hEventForServiceStop);
extern "C" HRESULT WINAPI InitLocalMsCtfMonitor(DWORD dwFlags);
extern "C" HRESULT WINAPI UninitLocalMsCtfMonitor();
#endif
#pragma endregion
