#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <pshpack1.h>
extern "C" {
LRESULT WINAPI ScreenSaverProcW (HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
LRESULT WINAPI DefScreenSaverProc (HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
BOOL WINAPI ScreenSaverConfigureDialog (HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);
BOOL WINAPI RegisterDialogClasses (HANDLE hInst);
extern HINSTANCE hMainInstance;
extern HWND hMainWindow;
extern BOOL fChildPreview;
extern TCHAR szName[TITLEBARNAMELEN];
extern TCHAR szAppName[APPNAMEBUFFERLEN];
extern TCHAR szIniFile[MAXFILELEN];
extern TCHAR szScreenSaver[22];
extern TCHAR szHelpFile[MAXFILELEN];
extern TCHAR szNoHelpMemory[BUFFLEN];
extern UINT MyHelpMessage;
void WINAPI ScreenSaverChangePassword( HWND hParent );
}
#include <poppack.h>
#endif
#pragma endregion
