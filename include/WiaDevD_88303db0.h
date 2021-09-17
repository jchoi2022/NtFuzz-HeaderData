#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "wia.h"
#include <pshpack8.h>
typedef struct tagDEVICEDIALOGDATA2
{
    DWORD cbSize;
    IWiaItem2 *pIWiaItemRoot;
    DWORD dwFlags;
    HWND hwndParent;
    BSTR bstrFolderName;
    BSTR bstrFilename;
    LONG lNumFiles;
    BSTR *pbstrFilePaths;
    IWiaItem2 *pWiaItem;
} DEVICEDIALOGDATA2, *LPDEVICEDIALOGDATA2, *PDEVICEDIALOGDATA2;
DECLARE_INTERFACE_IID_(IWiaUIExtension2, IUnknown, "305600d7-5088-46d7-9a15-b77b09cdba7a")
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _COM_Outptr_ LPVOID* ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(DeviceDialog)(_In_ THIS_ PDEVICEDIALOGDATA2 pDeviceDialogData ) PURE;
    STDMETHOD(GetDeviceIcon)(_In_ THIS_ BSTR bstrDeviceId, _Out_ HICON *phIcon, ULONG nSize) PURE;
};
DEFINE_GUID(IID_IWiaUIExtension2, 0x305600D7, 0x5088, 0x46D7, 0x9A, 0x15, 0xB7, 0x7B, 0x09, 0xCD, 0xBA, 0x7A);
typedef struct tagDEVICEDIALOGDATA
{
    DWORD cbSize;
    HWND hwndParent;
    IWiaItem *pIWiaItemRoot;
    DWORD dwFlags;
    LONG lIntent;
    LONG lItemCount;
    IWiaItem **ppWiaItems;
} DEVICEDIALOGDATA, *LPDEVICEDIALOGDATA, *PDEVICEDIALOGDATA;
HRESULT WINAPI DeviceDialog(_In_ PDEVICEDIALOGDATA pDeviceDialogData);
DECLARE_INTERFACE_IID_(IWiaUIExtension, IUnknown, "da319113-50ee-4c80-b460-57d005d44a2c")
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _COM_Outptr_ LPVOID* ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(DeviceDialog)(_In_ THIS_ PDEVICEDIALOGDATA pDeviceDialogData) PURE;
    STDMETHOD(GetDeviceIcon)(_In_ THIS_ BSTR bstrDeviceId, _Out_ HICON *phIcon, ULONG nSize) PURE;
    STDMETHOD(GetDeviceBitmapLogo)(_In_ THIS_ BSTR bstrDeviceId, _Out_ HBITMAP *phBitmap, ULONG nMaxWidth, ULONG nMaxHeight) PURE;
};
DEFINE_GUID(IID_IWiaUIExtension, 0xDA319113, 0x50EE, 0x4C80, 0xB4, 0x60, 0x57, 0xD0, 0x05, 0xD4, 0x4A, 0x2C);
typedef HRESULT (WINAPI *DeviceDialogFunction)(PDEVICEDIALOGDATA);
#include <poppack.h>
#endif
#pragma endregion
