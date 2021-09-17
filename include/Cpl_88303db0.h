#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <pshpack1.h>
extern "C" {
typedef LONG (APIENTRY *APPLET_PROC)(HWND hwndCpl, UINT msg, LPARAM lParam1, LPARAM lParam2);
typedef struct tagCPLINFO
{
    int idIcon;
    int idName;
    int idInfo;
    LONG_PTR lData;
} CPLINFO, *LPCPLINFO;
typedef struct tagNEWCPLINFOA
{
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwHelpContext;
    LONG_PTR lData;
    HICON hIcon;
    CHAR szName[32];
    CHAR szInfo[64];
    CHAR szHelpFile[128];
} NEWCPLINFOA, *LPNEWCPLINFOA;
typedef struct tagNEWCPLINFOW
{
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwHelpContext;
    LONG_PTR lData;
    HICON hIcon;
    WCHAR szName[32];
    WCHAR szInfo[64];
    WCHAR szHelpFile[128];
} NEWCPLINFOW, *LPNEWCPLINFOW;
typedef NEWCPLINFOW NEWCPLINFO;
typedef LPNEWCPLINFOW LPNEWCPLINFO;
}
#include <poppack.h>
#endif
#pragma endregion
