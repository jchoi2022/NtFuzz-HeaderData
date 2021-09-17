#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <pshpack8.h>
#include <objbase.h>
#include <stireg.h>
#include <stierr.h>
#pragma warning(disable:4200)
extern "C" {
DEFINE_GUID(CLSID_Sti, 0xB323F8E0L, 0x2E68, 0x11D0, 0x90, 0xEA, 0x00, 0xAA, 0x00, 0x60, 0xF8, 0x6C);
DEFINE_GUID(IID_IStillImageW, 0x641BD880L, 0x2DC8, 0x11D0, 0x90, 0xEA, 0x00, 0xAA, 0x00, 0x60, 0xF8, 0x6C);
DEFINE_GUID(IID_IStiDevice, 0x6CFA5A80L, 0x2DC8, 0x11D0, 0x90, 0xEA, 0x00, 0xAA, 0x00, 0x60, 0xF8, 0x6C);
DEFINE_GUID(GUID_DeviceArrivedLaunch, 0x740d9ee6, 0x70f1, 0x11d1, 0xad, 0x10, 0x0, 0xa0, 0x24, 0x38, 0xad, 0x48);
DEFINE_GUID(GUID_ScanImage,
0xa6c5a715, 0x8c6e, 0x11d2, 0x97, 0x7a, 0x0, 0x0, 0xf8, 0x7a, 0x92, 0x6f);
DEFINE_GUID(GUID_ScanPrintImage,
0xb441f425, 0x8c6e, 0x11d2, 0x97, 0x7a, 0x0, 0x0, 0xf8, 0x7a, 0x92, 0x6f);
DEFINE_GUID(GUID_ScanFaxImage,
0xc00eb793, 0x8c6e, 0x11d2, 0x97, 0x7a, 0x0, 0x0, 0xf8, 0x7a, 0x92, 0x6f);
DEFINE_GUID(GUID_STIUserDefined1,
0xc00eb795, 0x8c6e, 0x11d2, 0x97, 0x7a, 0x0, 0x0, 0xf8, 0x7a, 0x92, 0x6f);
DEFINE_GUID(GUID_STIUserDefined2,
0xc77ae9c5, 0x8c6e, 0x11d2, 0x97, 0x7a, 0x0, 0x0, 0xf8, 0x7a, 0x92, 0x6f);
DEFINE_GUID(GUID_STIUserDefined3,
0xc77ae9c6, 0x8c6e, 0x11d2, 0x97, 0x7a, 0x0, 0x0, 0xf8, 0x7a, 0x92, 0x6f);
typedef enum _STI_DEVICE_MJ_TYPE {
    StiDeviceTypeDefault = 0,
    StiDeviceTypeScanner = 1,
    StiDeviceTypeDigitalCamera = 2,
    StiDeviceTypeStreamingVideo = 3
} STI_DEVICE_MJ_TYPE;
typedef DWORD STI_DEVICE_TYPE;
typedef struct _STI_DEV_CAPS {
    DWORD dwGeneric;
} STI_DEV_CAPS, *PSTI_DEV_CAPS;
typedef struct _STI_DEVICE_INFORMATIONW {
    DWORD dwSize;
    STI_DEVICE_TYPE DeviceType;
    WCHAR szDeviceInternalName[STI_MAX_INTERNAL_NAME_LENGTH];
    STI_DEV_CAPS DeviceCapabilities;
    DWORD dwHardwareConfiguration;
    LPWSTR pszVendorDescription;
    LPWSTR pszDeviceDescription;
    LPWSTR pszPortName;
    LPWSTR pszPropProvider;
    LPWSTR pszLocalName;
} STI_DEVICE_INFORMATIONW, *PSTI_DEVICE_INFORMATIONW;
typedef struct _STI_WIA_DEVICE_INFORMATIONW {
    DWORD dwSize;
    STI_DEVICE_TYPE DeviceType;
    WCHAR szDeviceInternalName[STI_MAX_INTERNAL_NAME_LENGTH];
    STI_DEV_CAPS DeviceCapabilities;
    DWORD dwHardwareConfiguration;
    LPWSTR pszVendorDescription;
    LPWSTR pszDeviceDescription;
    LPWSTR pszPortName;
    LPWSTR pszPropProvider;
    LPWSTR pszLocalName;
    LPWSTR pszUiDll;
    LPWSTR pszServer;
} STI_WIA_DEVICE_INFORMATIONW, *PSTI_WIA_DEVICE_INFORMATIONW;
typedef struct _STI_DEVICE_STATUS {
    DWORD dwSize;
    DWORD StatusMask;
    DWORD dwOnlineState;
    DWORD dwHardwareStatusCode;
    DWORD dwEventHandlingState;
    DWORD dwPollingInterval;
} STI_DEVICE_STATUS,*PSTI_DEVICE_STATUS;
typedef struct _ERROR_INFOW {
    DWORD dwSize;
    DWORD dwGenericError;
    DWORD dwVendorError;
    WCHAR szExtendedErrorText[255];
} STI_ERROR_INFOW,*PSTI_ERROR_INFOW;
typedef STI_ERROR_INFO* PSTI_ERROR_INFO;
typedef struct _STI_DIAG {
    DWORD dwSize;
    DWORD dwBasicDiagCode;
    DWORD dwVendorDiagCode;
    DWORD dwStatusMask;
    STI_ERROR_INFO sErrorInfo;
} STI_DIAG,*LPSTI_DIAG;
typedef STI_DIAG DIAG;
typedef LPSTI_DIAG LPDIAG;
typedef struct _STISUBSCRIBE {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwFilter;
    HWND hWndNotify;
    HANDLE hEvent;
    UINT uiNotificationMessage;
} STISUBSCRIBE,*LPSTISUBSCRIBE;
typedef struct _STINOTIFY {
    DWORD dwSize;
    GUID guidNotificationCode;
    BYTE abNotificationData[MAX_NOTIFICATION_DATA];
} STINOTIFY,*LPSTINOTIFY;
typedef DWORD STI_RAW_CONTROL_CODE;
interface IStillImageW;
interface IStiDevice;
STDMETHODIMP StiCreateInstanceW(HINSTANCE hinst, DWORD dwVer, interface IStillImageW **ppSti, LPUNKNOWN punkOuter);
typedef interface IStiDevice *LPSTILLIMAGEDEVICE;
typedef interface IStillImage *PSTI;
typedef interface IStiDevice *PSTIDEVICE;
typedef interface IStillImageW *PSTIW;
typedef interface IStiDeviceW *PSTIDEVICEW;
DECLARE_INTERFACE_(IStillImageW, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ LPVOID* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release) (THIS) PURE;
    STDMETHOD(Initialize) (THIS_ _In_ HINSTANCE hinst,DWORD dwVersion) PURE;
    STDMETHOD(GetDeviceList)(THIS_ DWORD dwType,DWORD dwFlags, _Out_ DWORD *pdwItemsReturned, _Out_ LPVOID *ppBuffer) PURE;
    STDMETHOD(GetDeviceInfo)(THIS_ _In_ LPWSTR pwszDeviceName, _Out_ LPVOID *ppBuffer) PURE;
    STDMETHOD(CreateDevice) (THIS_ _In_ LPWSTR pwszDeviceName, DWORD dwMode, _Out_ PSTIDEVICE *pDevice, _In_opt_ LPUNKNOWN punkOuter) PURE;
    STDMETHOD(GetDeviceValue)(THIS_ _In_ LPWSTR pwszDeviceName, _In_ LPWSTR pValueName, _Out_ LPDWORD pType, _Out_writes_bytes_(*cbData) LPBYTE pData, _Inout_ LPDWORD cbData);
    STDMETHOD(SetDeviceValue)(THIS_ _In_ LPWSTR pwszDeviceName, _In_ LPWSTR pValueName, DWORD Type, _In_reads_bytes_(cbData) LPBYTE pData, DWORD cbData);
    STDMETHOD(GetSTILaunchInformation)(THIS_ _Out_writes_(STI_MAX_INTERNAL_NAME_LENGTH) LPWSTR pwszDeviceName, _Out_opt_ DWORD *pdwEventCode, _Out_writes_(STI_MAX_INTERNAL_NAME_LENGTH) LPWSTR pwszEventName) PURE;
    STDMETHOD(RegisterLaunchApplication)(THIS_ _In_ LPWSTR pwszAppName, _In_ LPWSTR pwszCommandLine) PURE;
    STDMETHOD(UnregisterLaunchApplication)(THIS_ _In_ LPWSTR pwszAppName) PURE;
    STDMETHOD(EnableHwNotifications)(THIS_ _In_ LPCWSTR pwszDeviceName, BOOL bNewState) PURE;
    STDMETHOD(GetHwNotificationState)(THIS_ _In_ LPCWSTR pwszDeviceName, _Out_ BOOL *pbCurrentState) PURE;
    STDMETHOD(RefreshDeviceBus)(THIS_ _In_ LPCWSTR pwszDeviceName) PURE;
    STDMETHOD(LaunchApplicationForDevice)(THIS_ _In_ LPWSTR pwszDeviceName, _In_ LPWSTR pwszAppName, _In_ LPSTINOTIFY pStiNotify);
    STDMETHOD(SetupDeviceParameters)(THIS_ _Inout_ PSTI_DEVICE_INFORMATIONW);
    STDMETHOD(WriteToErrorLog)(THIS_ DWORD dwMessageType, _In_ LPCWSTR pszMessage) PURE;
        STIMETHOD(RegisterDeviceNotification(THIS_ _In_ LPWSTR pwszAppName, _Inout_ LPSUBSCRIBE lpSubscribe) PURE;
        STIMETHOD(UnregisterDeviceNotification(THIS_ ) PURE;
};
typedef struct IStillImageW *LPSTILLIMAGEW;
typedef struct IStillImage *LPSTILLIMAGE;
DECLARE_INTERFACE_(IStiDevice, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ LPVOID* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release) (THIS) PURE;
    STDMETHOD(Initialize) (THIS_ _In_ HINSTANCE hinst, _In_ LPCWSTR pwszDeviceName, DWORD dwVersion, DWORD dwMode) PURE;
    STDMETHOD(GetCapabilities) (THIS_ _Inout_ PSTI_DEV_CAPS pDevCaps) PURE;
    STDMETHOD(GetStatus) (THIS_ _Inout_ PSTI_DEVICE_STATUS pDevStatus) PURE;
    STDMETHOD(DeviceReset)(THIS) PURE;
    STDMETHOD(Diagnostic)(THIS_ _Inout_ LPSTI_DIAG pBuffer) PURE;
    STDMETHOD(Escape)(THIS_ STI_RAW_CONTROL_CODE EscapeFunction, _In_reads_bytes_(cbInDataSize) LPVOID lpInData, DWORD cbInDataSize,
        _Inout_updates_bytes_to_(dwOutDataSize, *pdwActualData) LPVOID pOutData, DWORD dwOutDataSize, _Out_ LPDWORD pdwActualData) PURE ;
    STDMETHOD(GetLastError) (THIS_ _Out_ LPDWORD pdwLastDeviceError) PURE;
    STDMETHOD(LockDevice) (THIS_ DWORD dwTimeOut) PURE;
    STDMETHOD(UnLockDevice) (THIS) PURE;
    STDMETHOD(RawReadData)(THIS_ _Inout_updates_bytes_(*lpdwNumberOfBytes) LPVOID lpBuffer, _Inout_ LPDWORD lpdwNumberOfBytes, _In_opt_ LPOVERLAPPED lpOverlapped) PURE;
    STDMETHOD(RawWriteData)(THIS_ _In_reads_bytes_(nNumberOfBytes) LPVOID lpBuffer, DWORD nNumberOfBytes, _In_opt_ LPOVERLAPPED lpOverlapped) PURE;
    STDMETHOD(RawReadCommand)(THIS_ _Inout_updates_bytes_(*lpdwNumberOfBytes) LPVOID lpBuffer, _Inout_ LPDWORD lpdwNumberOfBytes, _In_opt_ LPOVERLAPPED lpOverlapped) PURE;
    STDMETHOD(RawWriteCommand)(THIS_ _In_reads_bytes_(nNumberOfBytes) LPVOID lpBuffer, DWORD nNumberOfBytes, _In_opt_ LPOVERLAPPED lpOverlapped) PURE;
    STDMETHOD(Subscribe)(THIS_ _Inout_ LPSTISUBSCRIBE lpSubsribe) PURE;
    STDMETHOD(GetLastNotificationData)(THIS_ _Out_ LPSTINOTIFY lpNotify) PURE;
    STDMETHOD(UnSubscribe)(THIS) PURE;
    STDMETHOD(GetLastErrorInfo) (THIS_ _Out_ STI_ERROR_INFO *pLastErrorInfo) PURE;
};
};
#include <poppack.h>
#endif
#pragma endregion
