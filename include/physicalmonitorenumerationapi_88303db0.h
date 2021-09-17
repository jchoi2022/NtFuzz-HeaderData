#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <d3d9.h>
extern "C" {
#pragma pack( push, 1 )
typedef _Return_type_success_(return == TRUE) BOOL _BOOL;
typedef struct _PHYSICAL_MONITOR
{
    HANDLE hPhysicalMonitor;
    WCHAR szPhysicalMonitorDescription[PHYSICAL_MONITOR_DESCRIPTION_SIZE];
} PHYSICAL_MONITOR, *LPPHYSICAL_MONITOR;
_BOOL WINAPI GetNumberOfPhysicalMonitorsFromHMONITOR
    (
    HMONITOR hMonitor,
    _Out_ LPDWORD pdwNumberOfPhysicalMonitors
    );
HRESULT WINAPI GetNumberOfPhysicalMonitorsFromIDirect3DDevice9
    (
    _In_ IDirect3DDevice9* pDirect3DDevice9,
    _Out_ LPDWORD pdwNumberOfPhysicalMonitors
    );
_BOOL WINAPI GetPhysicalMonitorsFromHMONITOR
    (
    _In_ HMONITOR hMonitor,
    _In_ DWORD dwPhysicalMonitorArraySize,
    _Out_writes_(dwPhysicalMonitorArraySize) LPPHYSICAL_MONITOR pPhysicalMonitorArray
    );
HRESULT WINAPI GetPhysicalMonitorsFromIDirect3DDevice9
    (
    _In_ IDirect3DDevice9* pDirect3DDevice9,
    _In_ DWORD dwPhysicalMonitorArraySize,
    _Out_writes_(dwPhysicalMonitorArraySize) LPPHYSICAL_MONITOR pPhysicalMonitorArray
    );
_BOOL WINAPI DestroyPhysicalMonitor( _In_ HANDLE hMonitor );
_BOOL WINAPI DestroyPhysicalMonitors
    (
    _In_ DWORD dwPhysicalMonitorArraySize,
    _In_reads_(dwPhysicalMonitorArraySize) LPPHYSICAL_MONITOR pPhysicalMonitorArray
    );
#pragma pack( pop )
}
#endif
#pragma endregion
