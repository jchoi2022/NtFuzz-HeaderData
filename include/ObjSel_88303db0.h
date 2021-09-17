#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C const GUID DECLSPEC_SELECTANY CLSID_DsObjectPicker =
    {0x17d6ccd8,0x3b7b,0x11d2,{0xb9, 0xe0, 0x00, 0xc0, 0x4f, 0xd8, 0xdb, 0xf7}};
EXTERN_C const GUID DECLSPEC_SELECTANY IID_IDsObjectPicker =
    {0x0c87e64e,0x3b7a,0x11d2,{0xb9,0xe0,0x00,0xc0,0x4f,0xd8,0xdb,0xf7}};
EXTERN_C const GUID DECLSPEC_SELECTANY IID_IDsObjectPickerCredentials =
    {0xe2d3ec9b,0xd041,0x445a,{0x8f,0x16,0x47,0x48,0xde,0x8f,0xb1,0xcf}};
typedef struct _DSOP_UPLEVEL_FILTER_FLAGS
{
    ULONG flBothModes;
    ULONG flMixedModeOnly;
    ULONG flNativeModeOnly;
} DSOP_UPLEVEL_FILTER_FLAGS;
typedef struct _DSOP_FILTER_FLAGS
{
    DSOP_UPLEVEL_FILTER_FLAGS Uplevel;
    ULONG flDownlevel;
} DSOP_FILTER_FLAGS;
typedef struct _DSOP_SCOPE_INIT_INFO
{
    ULONG cbSize;
    ULONG flType;
    ULONG flScope;
    DSOP_FILTER_FLAGS FilterFlags;
    PCWSTR pwzDcName;
    PCWSTR pwzADsPath;
    HRESULT hr;
} DSOP_SCOPE_INIT_INFO, *PDSOP_SCOPE_INIT_INFO;
typedef const DSOP_SCOPE_INIT_INFO *PCDSOP_SCOPE_INIT_INFO;
typedef struct _DSOP_INIT_INFO
{
    ULONG cbSize;
    PCWSTR pwzTargetComputer;
    ULONG cDsScopeInfos;
    _Field_size_(cDsScopeInfos)
    PDSOP_SCOPE_INIT_INFO aDsScopeInfos;
    ULONG flOptions;
    ULONG cAttributesToFetch;
    PCWSTR *apwzAttributeNames;
} DSOP_INIT_INFO, *PDSOP_INIT_INFO;
typedef const DSOP_INIT_INFO *PCDSOP_INIT_INFO;
typedef struct _DS_SELECTION
{
    PWSTR pwzName;
    PWSTR pwzADsPath;
    PWSTR pwzClass;
    PWSTR pwzUPN;
    VARIANT *pvarFetchedAttributes;
    ULONG flScopeType;
} DS_SELECTION, *PDS_SELECTION;
typedef struct _DS_SELECTION_LIST
{
    ULONG cItems;
    ULONG cFetchedAttributes;
    DS_SELECTION aDsSelection[ANYSIZE_ARRAY];
} DS_SELECTION_LIST, *PDS_SELECTION_LIST;
DECLARE_INTERFACE_(IDsObjectPicker, IUnknown)
{
    STDMETHOD(QueryInterface)(
        THIS_
        REFIID riid,
        PVOID *ppv) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(Initialize)(
        THIS_
        PDSOP_INIT_INFO pInitInfo) PURE;
    STDMETHOD(InvokeDialog)(
         THIS_
         HWND hwndParent,
         IDataObject **ppdoSelections) PURE;
};
DECLARE_INTERFACE_(IDsObjectPickerCredentials, IDsObjectPicker)
{
    STDMETHOD(QueryInterface)(
        THIS_
        REFIID riid,
        PVOID *ppv) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(SetCredentials)(
        THIS_
        LPCWSTR szUserName,
        LPCWSTR szPassword);
};
#endif
#pragma endregion
