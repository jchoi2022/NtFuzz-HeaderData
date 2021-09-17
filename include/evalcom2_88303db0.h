       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <objbase.h>
typedef enum RESULTTYPES
{
 ieUnknown = 0,
 ieError,
 ieWarning,
 ieInfo,
}RESULTTYPES;
typedef enum STATUSTYPES
{
 ieStatusGetCUB,
 ieStatusICECount,
 ieStatusMerge,
 ieStatusSummaryInfo,
 ieStatusCreateEngine,
 ieStatusStarting,
 ieStatusRunICE,
 ieStatusShutdown,
 ieStatusSuccess,
 ieStatusFail,
 ieStatusCancel
}STATUSTYPES;
typedef BOOL (WINAPI* LPDISPLAYVAL)(LPVOID pContext, RESULTTYPES uiType, LPCWSTR szwVal, LPCWSTR szwDescription, LPCWSTR szwLocation);
typedef BOOL (WINAPI* LPEVALCOMCALLBACK)(STATUSTYPES iStatus, LPCWSTR szData, LPVOID pContext);
interface IValidate : IUnknown
{
 virtual HRESULT __stdcall OpenDatabase(LPCOLESTR szDatabase) = 0;
 virtual HRESULT __stdcall OpenCUB(LPCOLESTR szCUBFile) = 0;
 virtual HRESULT __stdcall CloseDatabase() = 0;
 virtual HRESULT __stdcall CloseCUB() = 0;
 virtual HRESULT __stdcall SetDisplay(LPDISPLAYVAL pDisplayFunction, LPVOID pContext) = 0;
 virtual HRESULT __stdcall SetStatus(LPEVALCOMCALLBACK pStatusFunction, LPVOID pContext) = 0;
 virtual HRESULT __stdcall Validate(const WCHAR *wzICEs = NULL) = 0;
};
DEFINE_GUID(CLSID_EvalCom2, 0x6e5e1910, 0x8053, 0x4660, 0xb7, 0x95, 0x6b, 0x61, 0x2e, 0x29, 0xbc, 0x58);
DEFINE_GUID(IID_IValidate, 0xe482e5c6, 0xe31e, 0x4143, 0xa2, 0xe6, 0xdb, 0xc3, 0xd8, 0xe4, 0xb8, 0xd3);
#endif
#pragma endregion
