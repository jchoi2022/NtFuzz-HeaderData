#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct tagMONITORINFO
{
    DWORD cbSize;
    RECT rcMonitor;
    RECT rcWork;
    DWORD dwFlags;
} MONITORINFO, *LPMONITORINFO;
typedef struct tagMONITORINFOEXA : public tagMONITORINFO
{
    CHAR szDevice[CCHDEVICENAME];
} MONITORINFOEXA, *LPMONITORINFOEXA;
typedef struct tagMONITORINFOEXW : public tagMONITORINFO
{
    WCHAR szDevice[CCHDEVICENAME];
} MONITORINFOEXW, *LPMONITORINFOEXW;
typedef MONITORINFOEXW MONITORINFOEX;
typedef LPMONITORINFOEXW LPMONITORINFOEX;
typedef BOOL (CALLBACK* MONITORENUMPROC)(HMONITOR, HDC, LPRECT, LPARAM);
typedef struct _DISPLAY_DEVICEA {
    DWORD cb;
    CHAR DeviceName[32];
    CHAR DeviceString[128];
    DWORD StateFlags;
    CHAR DeviceID[128];
    CHAR DeviceKey[128];
} DISPLAY_DEVICEA, *PDISPLAY_DEVICEA, *LPDISPLAY_DEVICEA;
typedef struct _DISPLAY_DEVICEW {
    DWORD cb;
    WCHAR DeviceName[32];
    WCHAR DeviceString[128];
    DWORD StateFlags;
    WCHAR DeviceID[128];
    WCHAR DeviceKey[128];
} DISPLAY_DEVICEW, *PDISPLAY_DEVICEW, *LPDISPLAY_DEVICEW;
typedef DISPLAY_DEVICEW DISPLAY_DEVICE;
typedef PDISPLAY_DEVICEW PDISPLAY_DEVICE;
typedef LPDISPLAY_DEVICEW LPDISPLAY_DEVICE;
int (WINAPI* g_pfnGetSystemMetrics)(int) = NULL;
HMONITOR (WINAPI* g_pfnMonitorFromWindow)(HWND, DWORD) = NULL;
HMONITOR (WINAPI* g_pfnMonitorFromRect)(LPCRECT, DWORD) = NULL;
HMONITOR (WINAPI* g_pfnMonitorFromPoint)(POINT, DWORD) = NULL;
BOOL (WINAPI* g_pfnGetMonitorInfo)(HMONITOR, LPMONITORINFO) = NULL;
BOOL (WINAPI* g_pfnEnumDisplayMonitors)(HDC, LPCRECT, MONITORENUMPROC, LPARAM) = NULL;
BOOL (WINAPI* g_pfnEnumDisplayDevices)(PVOID, DWORD, PDISPLAY_DEVICE,DWORD) = NULL;
BOOL g_fMultiMonInitDone = FALSE;
BOOL g_fMultimonPlatformNT = FALSE;
BOOL IsPlatformNT()
{
    OSVERSIONINFOA osvi = {0};
    osvi.dwOSVersionInfoSize = sizeof(osvi);
    GetVersionExA((OSVERSIONINFOA*)&osvi);
    return (VER_PLATFORM_WIN32_NT == osvi.dwPlatformId);
}
BOOL InitMultipleMonitorStubs(void)
{
    HMODULE hUser32;
    if (g_fMultiMonInitDone)
    {
        return g_pfnGetMonitorInfo != NULL;
    }
    g_fMultimonPlatformNT = IsPlatformNT();
    hUser32 = GetModuleHandle(TEXT("USER32"));
    if (hUser32 &&
        (*(FARPROC*)&g_pfnGetSystemMetrics = GetProcAddress(hUser32,"GetSystemMetrics")) != NULL &&
        (*(FARPROC*)&g_pfnMonitorFromWindow = GetProcAddress(hUser32,"MonitorFromWindow")) != NULL &&
        (*(FARPROC*)&g_pfnMonitorFromRect = GetProcAddress(hUser32,"MonitorFromRect")) != NULL &&
        (*(FARPROC*)&g_pfnMonitorFromPoint = GetProcAddress(hUser32,"MonitorFromPoint")) != NULL &&
        (*(FARPROC*)&g_pfnEnumDisplayMonitors = GetProcAddress(hUser32,"EnumDisplayMonitors")) != NULL &&
        (*(FARPROC*)&g_pfnEnumDisplayDevices = GetProcAddress(hUser32,"EnumDisplayDevicesW")) != NULL &&
        (*(FARPROC*)&g_pfnGetMonitorInfo = g_fMultimonPlatformNT ? GetProcAddress(hUser32,"GetMonitorInfoW") :
                                                GetProcAddress(hUser32,"GetMonitorInfoA")) != NULL
    ) {
        g_fMultiMonInitDone = TRUE;
        return TRUE;
    }
    else
    {
        g_pfnGetSystemMetrics = NULL;
        g_pfnMonitorFromWindow = NULL;
        g_pfnMonitorFromRect = NULL;
        g_pfnMonitorFromPoint = NULL;
        g_pfnGetMonitorInfo = NULL;
        g_pfnEnumDisplayMonitors = NULL;
        g_pfnEnumDisplayDevices = NULL;
        g_fMultiMonInitDone = TRUE;
        return FALSE;
    }
}
int WINAPI
xGetSystemMetrics(int nIndex)
{
    if (InitMultipleMonitorStubs())
        return g_pfnGetSystemMetrics(nIndex);
    switch (nIndex)
    {
    case SM_CMONITORS:
    case SM_SAMEDISPLAYFORMAT:
        return 1;
    case SM_XVIRTUALSCREEN:
    case SM_YVIRTUALSCREEN:
        return 0;
    case SM_CXVIRTUALSCREEN:
        nIndex = SM_CXSCREEN;
        break;
    case SM_CYVIRTUALSCREEN:
        nIndex = SM_CYSCREEN;
        break;
    }
    return GetSystemMetrics(nIndex);
}
HMONITOR WINAPI
xMonitorFromPoint(POINT ptScreenCoords, DWORD dwFlags)
{
    if (InitMultipleMonitorStubs())
        return g_pfnMonitorFromPoint(ptScreenCoords, dwFlags);
    if ((dwFlags & (MONITOR_DEFAULTTOPRIMARY | MONITOR_DEFAULTTONEAREST)) ||
        ((ptScreenCoords.x >= 0) &&
        (ptScreenCoords.x < GetSystemMetrics(SM_CXSCREEN)) &&
        (ptScreenCoords.y >= 0) &&
        (ptScreenCoords.y < GetSystemMetrics(SM_CYSCREEN))))
    {
        return xPRIMARY_MONITOR;
    }
    return NULL;
}
HMONITOR WINAPI
xMonitorFromRect(LPCRECT lprcScreenCoords, DWORD dwFlags)
{
    if (InitMultipleMonitorStubs())
        return g_pfnMonitorFromRect(lprcScreenCoords, dwFlags);
    if ((dwFlags & (MONITOR_DEFAULTTOPRIMARY | MONITOR_DEFAULTTONEAREST)) ||
        ((lprcScreenCoords->right > 0) &&
        (lprcScreenCoords->bottom > 0) &&
        (lprcScreenCoords->left < GetSystemMetrics(SM_CXSCREEN)) &&
        (lprcScreenCoords->top < GetSystemMetrics(SM_CYSCREEN))))
    {
        return xPRIMARY_MONITOR;
    }
    return NULL;
}
HMONITOR WINAPI
xMonitorFromWindow(HWND hWnd, DWORD dwFlags)
{
    WINDOWPLACEMENT wp;
    if (InitMultipleMonitorStubs())
        return g_pfnMonitorFromWindow(hWnd, dwFlags);
    if (dwFlags & (MONITOR_DEFAULTTOPRIMARY | MONITOR_DEFAULTTONEAREST))
        return xPRIMARY_MONITOR;
    if (IsIconic(hWnd) ?
            GetWindowPlacement(hWnd, &wp) :
            GetWindowRect(hWnd, &wp.rcNormalPosition)) {
        return xMonitorFromRect(&wp.rcNormalPosition, dwFlags);
    }
    return NULL;
}
BOOL WINAPI
xGetMonitorInfo(HMONITOR hMonitor, _Inout_ LPMONITORINFO lpMonitorInfo)
{
    RECT rcWork;
    if (InitMultipleMonitorStubs())
    {
        BOOL f = g_pfnGetMonitorInfo(hMonitor, lpMonitorInfo);
        if (f && !g_fMultimonPlatformNT && (lpMonitorInfo->cbSize >= sizeof(MONITORINFOEX)))
        {
            MultiByteToWideChar(CP_ACP, 0,
                (LPSTR)((MONITORINFOEX*)lpMonitorInfo)->szDevice, -1,
                ((MONITORINFOEX*)lpMonitorInfo)->szDevice, (sizeof(((MONITORINFOEX*)lpMonitorInfo)->szDevice)/sizeof(TCHAR)));
        }
        return f;
    }
    if ((hMonitor == xPRIMARY_MONITOR) &&
        lpMonitorInfo &&
        (lpMonitorInfo->cbSize >= sizeof(MONITORINFO)) &&
        SystemParametersInfoA(SPI_GETWORKAREA, 0, &rcWork, 0))
    {
        lpMonitorInfo->rcMonitor.left = 0;
        lpMonitorInfo->rcMonitor.top = 0;
        lpMonitorInfo->rcMonitor.right = GetSystemMetrics(SM_CXSCREEN);
        lpMonitorInfo->rcMonitor.bottom = GetSystemMetrics(SM_CYSCREEN);
        lpMonitorInfo->rcWork = rcWork;
        lpMonitorInfo->dwFlags = MONITORINFOF_PRIMARY;
        if (lpMonitorInfo->cbSize >= sizeof(MONITORINFOEX))
        {
            MultiByteToWideChar(CP_ACP, 0, "DISPLAY", -1, ((MONITORINFOEX*)lpMonitorInfo)->szDevice, (sizeof(((MONITORINFOEX*)lpMonitorInfo)->szDevice)/sizeof(TCHAR)));
        }
        return TRUE;
    }
    return FALSE;
}
BOOL WINAPI
xEnumDisplayMonitors(
        HDC hdcOptionalForPainting,
        LPCRECT lprcEnumMonitorsThatIntersect,
        MONITORENUMPROC lpfnEnumProc,
        LPARAM dwData)
{
    RECT rcLimit;
    if (InitMultipleMonitorStubs()) {
        return g_pfnEnumDisplayMonitors(
                hdcOptionalForPainting,
                lprcEnumMonitorsThatIntersect,
                lpfnEnumProc,
                dwData);
    }
    if (!lpfnEnumProc)
        return FALSE;
    rcLimit.left = 0;
    rcLimit.top = 0;
    rcLimit.right = GetSystemMetrics(SM_CXSCREEN);
    rcLimit.bottom = GetSystemMetrics(SM_CYSCREEN);
    if (hdcOptionalForPainting)
    {
        RECT rcClip;
        POINT ptOrg;
        switch (GetClipBox(hdcOptionalForPainting, &rcClip))
        {
        default:
            if (!GetDCOrgEx(hdcOptionalForPainting, &ptOrg))
                return FALSE;
            OffsetRect(&rcLimit, -ptOrg.x, -ptOrg.y);
            if (IntersectRect(&rcLimit, &rcLimit, &rcClip) &&
                (!lprcEnumMonitorsThatIntersect ||
                     IntersectRect(&rcLimit, &rcLimit, lprcEnumMonitorsThatIntersect))) {
                break;
            }
        case NULLREGION:
             return TRUE;
        case ERROR:
             return FALSE;
        }
    } else {
        if ( lprcEnumMonitorsThatIntersect &&
                !IntersectRect(&rcLimit, &rcLimit, lprcEnumMonitorsThatIntersect)) {
            return TRUE;
        }
    }
    return lpfnEnumProc(
            xPRIMARY_MONITOR,
            hdcOptionalForPainting,
            &rcLimit,
            dwData);
}
BOOL WINAPI
xEnumDisplayDevices(
    PVOID Unused,
    DWORD iDevNum,
    _Inout_ PDISPLAY_DEVICE lpDisplayDevice,
    DWORD dwFlags)
{
    if (InitMultipleMonitorStubs())
        return g_pfnEnumDisplayDevices(Unused, iDevNum, lpDisplayDevice, dwFlags);
    if (Unused != NULL)
        return FALSE;
    if (iDevNum != 0)
        return FALSE;
    if (lpDisplayDevice == NULL || lpDisplayDevice->cb < sizeof(DISPLAY_DEVICE))
        return FALSE;
    MultiByteToWideChar(CP_ACP, 0, "DISPLAY", -1, lpDisplayDevice->DeviceName, (sizeof(lpDisplayDevice->DeviceName)/sizeof(TCHAR)));
    MultiByteToWideChar(CP_ACP, 0, "DISPLAY", -1, lpDisplayDevice->DeviceString, (sizeof(lpDisplayDevice->DeviceString)/sizeof(TCHAR)));
    lpDisplayDevice->StateFlags = DISPLAY_DEVICE_ATTACHED_TO_DESKTOP | DISPLAY_DEVICE_PRIMARY_DEVICE;
    return TRUE;
}
}
#endif
#pragma endregion
