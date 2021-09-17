#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windows.h>
#include <ole2.h>
#include <strsafe.h>
#include <stdio.h>
#include <stdlib.h>
extern "C" {
UINT WINAPI UiCreatePatchPackageA(LPCSTR szPcpPath, LPCSTR szPatchPath, LPCSTR szLogPath, HWND hwndStatus, LPCSTR szTempFolder, BOOL fRemoveTempFolderIfPresent);
UINT WINAPI UiCreatePatchPackageW(LPCWSTR szPcpPath, LPCWSTR szPatchPath, LPCWSTR szLogPath, HWND hwndStatus, LPCWSTR szTempFolder, BOOL fRemoveTempFolderIfPresent);
UINT WINAPI UiCreatePatchPackageExA(LPCSTR szPcpPath, LPCSTR szPatchPath, LPCSTR szLogPath, HWND hwndStatus, LPCSTR szTempFolder, BOOL fRemoveTempFolderIfPresent, IN DWORD dwFlags, IN DWORD dwReserved);
UINT WINAPI UiCreatePatchPackageExW(LPCWSTR szPcpPath, LPCWSTR szPatchPath, LPCWSTR szLogPath, HWND hwndStatus, LPCWSTR szTempFolder, BOOL fRemoveTempFolderIfPresent, IN DWORD dwFlags, IN DWORD dwReserved);
}
const int cchMaxInteger = 12;
const UINT LOGNONE = 0x00000000;
const UINT LOGINFO = 0x00000001;
const UINT LOGWARN = 0x00000002;
const UINT LOGERR = 0x00000004;
const UINT LOGPERFMESSAGES = 0x00000008;
const UINT LOGALL = LOGINFO | LOGWARN | LOGERR | LOGPERFMESSAGES;
const UINT UINONE = 0x00000000;
const UINT UILOGBITS = 15;
const UINT UIALL = 1 << UILOGBITS;
const UINT DEFAULT_MINIMUM_REQUIRED_MSI_VERSION = 100;
const UINT DEFAULT_FILE_SEQUENCE_START = 2;
const UINT DEFAULT_DISK_ID = 2;
#endif
#pragma endregion
