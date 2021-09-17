       
#include <shtypes.h>
#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef enum
{
    DEVICE_PRIMARY = 0,
    DEVICE_IMMERSIVE = 1,
} DISPLAY_DEVICE_TYPE;
typedef enum
{
    SCF_VALUE_NONE = 0x00,
    SCF_SCALE = 0x01,
    SCF_PHYSICAL = 0x02,
} SCALE_CHANGE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(SCALE_CHANGE_FLAGS);
STDAPI_(DEVICE_SCALE_FACTOR) GetScaleFactorForDevice(_In_ DISPLAY_DEVICE_TYPE deviceType);
STDAPI RegisterScaleChangeNotifications(_In_ DISPLAY_DEVICE_TYPE displayDevice, _In_ HWND hwndNotify, _In_ UINT uMsgNotify, _Out_ DWORD *pdwCookie);
STDAPI RevokeScaleChangeNotifications(_In_ DISPLAY_DEVICE_TYPE displayDevice, _In_ DWORD dwCookie);
STDAPI GetScaleFactorForMonitor(_In_ HMONITOR hMon, _Out_ DEVICE_SCALE_FACTOR *pScale);
STDAPI RegisterScaleChangeEvent(_In_ HANDLE hEvent, _Out_ DWORD_PTR *pdwCookie);
STDAPI UnregisterScaleChangeEvent(_In_ DWORD_PTR dwCookie);
typedef enum PROCESS_DPI_AWARENESS {
    PROCESS_DPI_UNAWARE = 0,
    PROCESS_SYSTEM_DPI_AWARE = 1,
    PROCESS_PER_MONITOR_DPI_AWARE = 2
} PROCESS_DPI_AWARENESS;
typedef enum MONITOR_DPI_TYPE {
    MDT_EFFECTIVE_DPI = 0,
    MDT_ANGULAR_DPI = 1,
    MDT_RAW_DPI = 2,
    MDT_DEFAULT = MDT_EFFECTIVE_DPI
} MONITOR_DPI_TYPE;
STDAPI SetProcessDpiAwareness(
    _In_ PROCESS_DPI_AWARENESS value);
STDAPI GetProcessDpiAwareness(
    _In_opt_ HANDLE hprocess,
    _Out_ PROCESS_DPI_AWARENESS *value);
STDAPI GetDpiForMonitor(
    _In_ HMONITOR hmonitor,
    _In_ MONITOR_DPI_TYPE dpiType,
    _Out_ UINT *dpiX,
    _Out_ UINT *dpiY);
typedef enum
{
    SHELL_UI_COMPONENT_TASKBARS = 0,
    SHELL_UI_COMPONENT_NOTIFICATIONAREA = 1,
    SHELL_UI_COMPONENT_DESKBAND = 2,
} SHELL_UI_COMPONENT;
STDAPI_(UINT) GetDpiForShellUIComponent(
    _In_ SHELL_UI_COMPONENT);
#endif
#pragma endregion
