#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct _ADSPROPINITPARAMS {
    DWORD dwSize;
    DWORD dwFlags;
    HRESULT hr;
    IDirectoryObject * pDsObj;
    LPWSTR pwzCN;
    PADS_ATTR_INFO pWritableAttrs;
} ADSPROPINITPARAMS, * PADSPROPINITPARAMS;
typedef struct _ADSPROPERROR {
    HWND hwndPage;
    PWSTR pszPageTitle;
    PWSTR pszObjPath;
    PWSTR pszObjClass;
    HRESULT hr;
    PWSTR pszError;
} ADSPROPERROR, * PADSPROPERROR;
STDAPI
ADsPropCreateNotifyObj(LPDATAOBJECT pAppThdDataObj, _In_ PWSTR pwzADsObjName,
                       HWND * phNotifyObj);
STDAPI_(BOOL)
ADsPropGetInitInfo(HWND hNotifyObj, PADSPROPINITPARAMS pInitParams);
STDAPI_(BOOL)
ADsPropSetHwndWithTitle(HWND hNotifyObj, HWND hPage, _In_ PTSTR ptzTitle);
STDAPI_(BOOL)
ADsPropSetHwnd(HWND hNotifyObj, HWND hPage);
STDAPI_(BOOL)
ADsPropCheckIfWritable(_In_ const PWSTR pwzAttr, const PADS_ATTR_INFO pWritableAttrs);
STDAPI_(BOOL)
ADsPropSendErrorMessage(HWND hNotifyObj, PADSPROPERROR pError);
STDAPI_(BOOL)
ADsPropShowErrorDialog(HWND hNotifyObj, HWND hPage);
}
#endif
#pragma endregion
