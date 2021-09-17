#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <pshpack1.h>
#include <setupapi.h>
extern "C" {
BOOL
WINAPI
UpdateDriverForPlugAndPlayDevicesA(
    _In_opt_ HWND hwndParent,
    _In_ LPCSTR HardwareId,
    _In_ LPCSTR FullInfPath,
    _In_ DWORD InstallFlags,
    _Out_opt_ PBOOL bRebootRequired
    );
BOOL
WINAPI
UpdateDriverForPlugAndPlayDevicesW(
    _In_opt_ HWND hwndParent,
    _In_ LPCWSTR HardwareId,
    _In_ LPCWSTR FullInfPath,
    _In_ DWORD InstallFlags,
    _Out_opt_ PBOOL bRebootRequired
    );
BOOL
WINAPI
DiInstallDevice(
    _In_opt_ HWND hwndParent,
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_opt_ PSP_DRVINFO_DATA DriverInfoData,
    _In_ DWORD Flags,
    _Out_opt_ PBOOL NeedReboot
    );
                               DIIRFLAG_HOTPATCH |\
                               DIIRFLAG_PRE_CONFIGURE_INF |\
                               DIIRFLAG_INSTALL_AS_SET )
                               DIIRFLAG_FORCE_INF |\
                               DIIRFLAG_HW_USING_THE_INF |\
                               DIIRFLAG_HOTPATCH |\
                               DIIRFLAG_NOBACKUP |\
                               DIIRFLAG_PRE_CONFIGURE_INF |\
                               DIIRFLAG_INSTALL_AS_SET )
BOOL
WINAPI
DiInstallDriverW(
    _In_opt_ HWND hwndParent,
    _In_ LPCWSTR InfPath,
    _In_ DWORD Flags,
    _Out_opt_ PBOOL NeedReboot
    );
BOOL
WINAPI
DiInstallDriverA(
    _In_opt_ HWND hwndParent,
    _In_ LPCSTR InfPath,
    _In_ DWORD Flags,
    _Out_opt_ PBOOL NeedReboot
    );
BOOL
WINAPI
DiUninstallDevice(
    _In_ HWND hwndParent,
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ DWORD Flags,
    _Out_opt_ PBOOL NeedReboot
    );
                                     DIURFLAG_RESERVED )
BOOL
WINAPI
DiUninstallDriverW(
    _In_opt_ HWND hwndParent,
    _In_ LPCWSTR InfPath,
    _In_ DWORD Flags,
    _Out_opt_ PBOOL NeedReboot
    );
BOOL
WINAPI
DiUninstallDriverA(
    _In_opt_ HWND hwndParent,
    _In_ LPCSTR InfPath,
    _In_ DWORD Flags,
    _Out_opt_ PBOOL NeedReboot
    );
BOOL
WINAPI
DiShowUpdateDevice(
    _In_opt_ HWND hwndParent,
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_ DWORD Flags,
    _Out_opt_ PBOOL NeedReboot
    );
BOOL
WINAPI
DiRollbackDriver(
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_opt_ HWND hwndParent,
    _In_ DWORD Flags,
    _Out_opt_ PBOOL NeedReboot
    );
BOOL
WINAPI
DiShowUpdateDriver(
    __in_opt HWND hwndParent,
    __in_opt PCWSTR FilePath,
    __in DWORD Flags,
    __out_opt PBOOL NeedReboot
    );
}
#include <poppack.h>
#endif
#pragma endregion
