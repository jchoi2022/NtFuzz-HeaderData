#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <prsht.h>
                                     VFW_HIDE_VIDEOSRC_PAGE |\
                                     VFW_HIDE_CAMERACONTROL_PAGE)
typedef
DWORD (CALLBACK FAR * VFWWDMExtensionProc)(
 LPVOID pfnDeviceIoControl,
 LPFNADDPROPSHEETPAGE pfnAddPropertyPage,
 LPARAM lParam);
typedef
BOOL (CALLBACK FAR * LPFNEXTDEVIO)(
     LPARAM lParam,
     DWORD dwFlags,
     DWORD dwIoControlCode,
     LPVOID lpInBuffer,
     DWORD nInBufferSize,
     LPVOID lpOutBuffer,
     DWORD nOutBufferSize,
     LPDWORD lpBytesReturned,
     LPOVERLAPPED lpOverlapped);
#endif
#pragma endregion
