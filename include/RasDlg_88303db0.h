#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <pshpack4.h>
extern "C" {
#include <ras.h>
typedef VOID (WINAPI* RASPBDLGFUNCW)( ULONG_PTR, DWORD, LPWSTR, LPVOID );
typedef VOID (WINAPI* RASPBDLGFUNCA)( ULONG_PTR, DWORD, LPSTR, LPVOID );
RASNOUSERW
{
    IN DWORD dwSize;
    IN DWORD dwFlags;
    OUT DWORD dwTimeoutMs;
    OUT WCHAR szUserName[ UNLEN + 1 ];
    OUT WCHAR szPassword[ PWLEN + 1 ];
    OUT WCHAR szDomain[ DNLEN + 1 ];
};
RASNOUSERA
{
    IN DWORD dwSize;
    IN DWORD dwFlags;
    OUT DWORD dwTimeoutMs;
    OUT CHAR szUserName[ UNLEN + 1 ];
    OUT CHAR szPassword[ PWLEN + 1 ];
    OUT CHAR szDomain[ DNLEN + 1 ];
};
RASPBDLGW
{
    IN DWORD dwSize;
    IN HWND hwndOwner;
    IN DWORD dwFlags;
    IN LONG xDlg;
    IN LONG yDlg;
    IN ULONG_PTR dwCallbackId;
    IN RASPBDLGFUNCW pCallback;
    OUT DWORD dwError;
    IN ULONG_PTR reserved;
    IN ULONG_PTR reserved2;
};
RASPBDLGA
{
    IN DWORD dwSize;
    IN HWND hwndOwner;
    IN DWORD dwFlags;
    IN LONG xDlg;
    IN LONG yDlg;
    IN ULONG_PTR dwCallbackId;
    IN RASPBDLGFUNCA pCallback;
    OUT DWORD dwError;
    IN ULONG_PTR reserved;
    IN ULONG_PTR reserved2;
};
RASENTRYDLGW
{
    IN DWORD dwSize;
    IN HWND hwndOwner;
    IN DWORD dwFlags;
    IN LONG xDlg;
    IN LONG yDlg;
    OUT WCHAR szEntry[ RAS_MaxEntryName + 1 ];
    OUT DWORD dwError;
    IN ULONG_PTR reserved;
    IN ULONG_PTR reserved2;
};
RASENTRYDLGA
{
    IN DWORD dwSize;
    IN HWND hwndOwner;
    IN DWORD dwFlags;
    IN LONG xDlg;
    IN LONG yDlg;
    OUT CHAR szEntry[ RAS_MaxEntryName + 1 ];
    OUT DWORD dwError;
    IN ULONG_PTR reserved;
    IN ULONG_PTR reserved2;
};
RASDIALDLG
{
    IN DWORD dwSize;
    IN HWND hwndOwner;
    IN DWORD dwFlags;
    IN LONG xDlg;
    IN LONG yDlg;
    IN DWORD dwSubEntry;
    OUT DWORD dwError;
    IN ULONG_PTR reserved;
    IN ULONG_PTR reserved2;
};
typedef BOOL (WINAPI *RasCustomDialDlgFn) (
                            HINSTANCE hInstDll,
                            DWORD dwFlags,
                            LPWSTR lpszPhonebook,
                            LPWSTR lpszEntry,
                            LPWSTR lpszPhoneNumber,
                            LPRASDIALDLG lpInfo,
                            PVOID pvInfo
                            );
typedef BOOL (WINAPI *RasCustomEntryDlgFn) (
                            HINSTANCE hInstDll,
                            LPWSTR lpszPhonebook,
                            LPWSTR lpszEntry,
                            LPRASENTRYDLG lpInfo,
                            DWORD dwFlags
                            );
BOOL APIENTRY RasPhonebookDlgA(
    _In_opt_ LPSTR lpszPhonebook, _In_opt_ LPSTR lpszEntry, LPRASPBDLGA lpInfo );
BOOL APIENTRY RasPhonebookDlgW(
    _In_opt_ LPWSTR lpszPhonebook, _In_opt_ LPWSTR lpszEntry, LPRASPBDLGW lpInfo );
BOOL APIENTRY RasEntryDlgA(
    _In_opt_ LPSTR lpszPhonebook, _In_opt_ LPSTR lpszEntry, LPRASENTRYDLGA lpInfo );
BOOL APIENTRY RasEntryDlgW(
    _In_opt_ LPWSTR lpszPhonebook, _In_opt_ LPWSTR lpszEntry, LPRASENTRYDLGW lpInfo );
BOOL APIENTRY RasDialDlgA(
    _In_opt_ LPSTR lpszPhonebook, _In_opt_ LPSTR lpszEntry, _In_opt_ LPSTR lpszPhoneNumber,
    _Inout_ LPRASDIALDLG lpInfo );
BOOL APIENTRY RasDialDlgW(
    _In_opt_ LPWSTR lpszPhonebook, _In_opt_ LPWSTR lpszEntry, _In_opt_ LPWSTR lpszPhoneNumber,
    _Inout_ LPRASDIALDLG lpInfo );
}
#include <poppack.h>
#endif
#pragma endregion
