#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma intrinsic(memcmp,memset)
#include <objbase.h>
#include <stireg.h>
#include <stierr.h>
extern "C" {
DEFINE_GUID(IID_IStiUSD, 0x0C9BB460L, 0x51AC, 0x11D0, 0x90, 0xEA, 0x00, 0xAA, 0x00, 0x60, 0xF8, 0x6C);
DEFINE_GUID(IID_IStiDeviceControl, 0x128A9860L, 0x52DC, 0x11D0, 0x9E, 0xDF, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00);
typedef struct _STI_USD_CAPS {
    DWORD dwVersion;
    DWORD dwGenericCaps;
} STI_USD_CAPS,*PSTI_USD_CAPS;
typedef DWORD USD_CONTROL_CODE;
struct IStiUSD;
struct IStiDeviceControl;
typedef struct IStiUSD *PSTIUSD;
typedef struct IStiDeviceControl *PSTIDEVICECONTROL;
DECLARE_INTERFACE_(IStiDeviceControl, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _COM_Outptr_ LPVOID* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release) (THIS) PURE;
    STDMETHOD(Initialize) (THIS_ DWORD dwDeviceType,DWORD dwMode,LPCWSTR pwszPortName,DWORD dwFlags )PURE;
    STDMETHOD(RawReadData)(THIS_ LPVOID lpBuffer,LPDWORD lpdwNumberOfBytes,LPOVERLAPPED lpOverlapped) PURE;
    STDMETHOD(RawWriteData)(THIS_ LPVOID lpBuffer,DWORD nNumberOfBytes,LPOVERLAPPED lpOverlapped) PURE;
    STDMETHOD(RawReadCommand)(THIS_ LPVOID lpBuffer,LPDWORD lpdwNumberOfBytes,LPOVERLAPPED lpOverlapped) PURE;
    STDMETHOD(RawWriteCommand)(THIS_ LPVOID lpBuffer,DWORD nNumberOfBytes,LPOVERLAPPED lpOverlapped) PURE;
    STDMETHOD(RawDeviceControl)(THIS_ USD_CONTROL_CODE EscapeFunction,LPVOID lpInData,DWORD cbInDataSize,LPVOID pOutData,DWORD dwOutDataSize,LPDWORD pdwActualData) PURE ;
    STDMETHOD(GetLastError)(THIS_ LPDWORD lpdwLastError) PURE;
    STDMETHOD(GetMyDevicePortName)(THIS_ _Out_writes_(cwDevicePathSize) LPWSTR lpszDevicePath, DWORD cwDevicePathSize ) PURE;
    STDMETHOD(GetMyDeviceHandle)(THIS_ LPHANDLE lph) PURE;
    STDMETHOD(GetMyDeviceOpenMode)(THIS_ LPDWORD pdwOpenMode ) PURE;
    STDMETHOD(WriteToErrorLog)(THIS_ DWORD dwMessageType,LPCWSTR pszMessage,DWORD dwErrorCode) PURE;
} ;
DECLARE_INTERFACE_(IStiUSD, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _COM_Outptr_ LPVOID* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release) (THIS) PURE;
    STDMETHOD(Initialize) (THIS_ _In_ PSTIDEVICECONTROL pHelDcb, DWORD dwStiVersion, _In_ HKEY hParametersKey) PURE;
    STDMETHOD(GetCapabilities) (THIS_ _Out_ PSTI_USD_CAPS pDevCaps) PURE;
    STDMETHOD(GetStatus) (THIS_ _Inout_ PSTI_DEVICE_STATUS pDevStatus) PURE;
    STDMETHOD(DeviceReset)(THIS ) PURE;
    STDMETHOD(Diagnostic)(THIS_ _Inout_ LPSTI_DIAG pBuffer) PURE;
    STDMETHOD(Escape)(THIS_ STI_RAW_CONTROL_CODE EscapeFunction, _In_reads_bytes_(cbInDataSize) LPVOID lpInData, DWORD cbInDataSize, _Out_writes_bytes_(cbOutDataSize) LPVOID pOutData, DWORD cbOutDataSize, _Out_ LPDWORD pdwActualData) PURE ;
    STDMETHOD(GetLastError) (THIS_ _Out_ LPDWORD pdwLastDeviceError) PURE;
    STDMETHOD(LockDevice) (THIS ) PURE;
    STDMETHOD(UnLockDevice) (THIS ) PURE;
    STDMETHOD(RawReadData)(THIS_ _Out_writes_bytes_(*lpdwNumberOfBytes) LPVOID lpBuffer, _Inout_ LPDWORD lpdwNumberOfBytes, _In_opt_ LPOVERLAPPED lpOverlapped) PURE;
    STDMETHOD(RawWriteData)(THIS_ _In_reads_bytes_(nNumberOfBytes) LPVOID lpBuffer, DWORD nNumberOfBytes, _In_opt_ LPOVERLAPPED lpOverlapped) PURE;
    STDMETHOD(RawReadCommand)(THIS_ _Out_writes_bytes_(*lpdwNumberOfBytes) LPVOID lpBuffer, _Inout_ LPDWORD lpdwNumberOfBytes, _In_opt_ LPOVERLAPPED lpOverlapped) PURE;
    STDMETHOD(RawWriteCommand)(THIS_ _In_reads_bytes_(nNumberOfBytes) LPVOID lpBuffer, DWORD nNumberOfBytes, _In_opt_ LPOVERLAPPED lpOverlapped) PURE;
    STDMETHOD(SetNotificationHandle)(THIS_ _In_opt_ HANDLE hEvent) PURE;
    STDMETHOD(GetNotificationData)(THIS_ _Out_ LPSTINOTIFY lpNotify) PURE;
    STDMETHOD(GetLastErrorInfo) (THIS_ _Out_ STI_ERROR_INFO *pLastErrorInfo) PURE;
} ;
};
#endif
#pragma endregion
