#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
LONG
SerialDisplayAdvancedSettings(_In_ HWND ParentHwnd,
                              _In_ HDEVINFO DeviceInfoSet,
                              _In_ PSP_DEVINFO_DATA DeviceInfoData
                              );
typedef
BOOL
(*PPORT_ADVANCED_DIALOG) (
    _In_ HWND ParentHwnd,
    _In_ BOOL HidePollingUI,
    _In_ HDEVINFO DeviceInfoSet,
    _In_ PSP_DEVINFO_DATA DeviceInfoData,
    _In_opt_ PVOID Reserved
    );
DECLARE_HANDLE(HCOMDB);
typedef HCOMDB *PHCOMDB;
LONG
WINAPI
ComDBOpen (
    _Out_ PHCOMDB PHComDB
    );
LONG
WINAPI
ComDBClose (
    _In_ HCOMDB HComDB
    );
LONG
WINAPI
ComDBGetCurrentPortUsage (
    _In_ HCOMDB HComDB,
    _Out_writes_bytes_opt_(BufferSize) PBYTE Buffer,
    _In_ DWORD BufferSize,
    _In_ ULONG ReportType,
    _Out_opt_ LPDWORD MaxPortsReported
    );
LONG
WINAPI
ComDBClaimNextFreePort (
    _In_ HCOMDB HComDB,
    _Out_ LPDWORD ComNumber
    );
LONG
WINAPI
ComDBClaimPort (
    _In_ HCOMDB HComDB,
    _In_ DWORD ComNumber,
    _In_ BOOL ForceClaim,
    _Out_opt_ PBOOL Forced
    );
LONG
WINAPI
ComDBReleasePort (
    _In_ HCOMDB HComDB,
    _In_ DWORD ComNumber
    );
LONG
WINAPI
ComDBResizeDatabase (
    _In_ HCOMDB HComDB,
    _In_ DWORD NewSize
    );
}
#endif
#pragma endregion
