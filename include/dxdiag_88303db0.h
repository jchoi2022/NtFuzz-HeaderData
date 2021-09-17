#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <ole2.h>
extern "C" {
DEFINE_GUID(CLSID_DxDiagProvider,
0xA65B8071, 0x3BFE, 0x4213, 0x9A, 0x5B, 0x49, 0x1D, 0xA4, 0x46, 0x1C, 0xA7);
DEFINE_GUID(IID_IDxDiagProvider,
0x9C6B4CB0, 0x23F8, 0x49CC, 0xA3, 0xED, 0x45, 0xA5, 0x50, 0x00, 0xA6, 0xD2);
DEFINE_GUID(IID_IDxDiagContainer,
0x7D0F462F, 0x4064, 0x4862, 0xBC, 0x7F, 0x93, 0x3E, 0x50, 0x58, 0xC1, 0x0F);
typedef struct IDxDiagProvider *LPDXDIAGPROVIDER, *PDXDIAGPROVIDER;
typedef struct IDxDiagContainer *LPDXDIAGCONTAINER, *PDXDIAGCONTAINER;
typedef struct _DXDIAG_INIT_PARAMS
{
    DWORD dwSize;
    DWORD dwDxDiagHeaderVersion;
    BOOL bAllowWHQLChecks;
    VOID* pReserved;
} DXDIAG_INIT_PARAMS;
DECLARE_INTERFACE_(IDxDiagProvider,IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID *ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(Initialize) (THIS_ DXDIAG_INIT_PARAMS* pParams) PURE;
    STDMETHOD(GetRootContainer) (THIS_ IDxDiagContainer **ppInstance) PURE;
};
DECLARE_INTERFACE_(IDxDiagContainer,IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID *ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(GetNumberOfChildContainers) (THIS_ DWORD *pdwCount) PURE;
    STDMETHOD(EnumChildContainerNames) (THIS_ DWORD dwIndex, LPWSTR pwszContainer, DWORD cchContainer) PURE;
    STDMETHOD(GetChildContainer) (THIS_ LPCWSTR pwszContainer, IDxDiagContainer **ppInstance) PURE;
    STDMETHOD(GetNumberOfProps) (THIS_ DWORD *pdwCount) PURE;
    STDMETHOD(EnumPropNames) (THIS_ DWORD dwIndex, LPWSTR pwszPropName, DWORD cchPropName) PURE;
    STDMETHOD(GetProp) (THIS_ LPCWSTR pwszPropName, VARIANT *pvarProp) PURE;
};
}
#endif
#pragma endregion
