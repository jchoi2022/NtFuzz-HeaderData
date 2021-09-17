#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(IID_IQueryForm, 0x8cfcee30, 0x39bd, 0x11d0, 0xb8, 0xd1, 0x0, 0xa0, 0x24, 0xab, 0x2d, 0xbb);
DEFINE_GUID(IID_IPersistQuery, 0x1a3114b8, 0xa62e, 0x11d0, 0xa6, 0xc5, 0x0, 0xa0, 0xc9, 0x06, 0xaf, 0x45);
DEFINE_GUID(CLSID_CommonQuery, 0x83bc5ec0, 0x6f2a, 0x11d0, 0xa1, 0xc4, 0x0, 0xaa, 0x00, 0xc1, 0x6e, 0x65);
DEFINE_GUID(IID_ICommonQuery, 0xab50dec0, 0x6f1d, 0x11d0, 0xa1, 0xc4, 0x0, 0xaa, 0x00, 0xc1, 0x6e, 0x65);
typedef struct
{
    DWORD cbStruct;
    DWORD dwFlags;
    CLSID clsid;
    HICON hIcon;
    LPCWSTR pszTitle;
} CQFORM, * LPCQFORM;
typedef HRESULT (CALLBACK *LPCQADDFORMSPROC)(LPARAM lParam, LPCQFORM pForm);
struct _cqpage;
typedef struct _cqpage CQPAGE, * LPCQPAGE;
typedef HRESULT (CALLBACK *LPCQADDPAGESPROC)(LPARAM lParam, REFCLSID clsidForm, LPCQPAGE pPage);
typedef HRESULT (CALLBACK *LPCQPAGEPROC)(LPCQPAGE pPage, HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
struct _cqpage
{
    DWORD cbStruct;
    DWORD dwFlags;
    LPCQPAGEPROC pPageProc;
    HINSTANCE hInstance;
    INT idPageName;
    INT idPageTemplate;
    DLGPROC pDlgProc;
    LPARAM lParam;
};
DECLARE_INTERFACE_IID_(IQueryForm, IUnknown, "8cfcee30-39bd-11d0-b8d1-00a024ab2dbb")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(Initialize)(THIS_ HKEY hkForm) PURE;
    STDMETHOD(AddForms)(THIS_ LPCQADDFORMSPROC pAddFormsProc, LPARAM lParam) PURE;
    STDMETHOD(AddPages)(THIS_ LPCQADDPAGESPROC pAddPagesProc, LPARAM lParam) PURE;
};
DECLARE_INTERFACE_IID_(IPersistQuery, IPersist, "1a3114b8-a62e-11d0-a6c5-00a0c906af45")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetClassID)(THIS_ CLSID* pClassID) PURE;
    STDMETHOD(WriteString)(THIS_ LPCWSTR pSection, LPCWSTR pValueName, LPCWSTR pValue) PURE;
    STDMETHOD(ReadString)(THIS_ LPCWSTR pSection, LPCWSTR pValueName, _Out_ LPWSTR pBuffer, INT cchBuffer) PURE;
    STDMETHOD(WriteInt)(THIS_ LPCWSTR pSection, LPCWSTR pValueName, INT value) PURE;
    STDMETHOD(ReadInt)(THIS_ LPCWSTR pSection, LPCWSTR pValueName, LPINT pValue) PURE;
    STDMETHOD(WriteStruct)(THIS_ LPCWSTR pSection, LPCWSTR pValueName, LPVOID pStruct, DWORD cbStruct) PURE;
    STDMETHOD(ReadStruct)(THIS_ LPCWSTR pSection, LPCWSTR pValueName, LPVOID pStruct, DWORD cbStruct) PURE;
    STDMETHOD(Clear)(THIS) PURE;
};
typedef struct
{
    DWORD cbStruct;
    DWORD dwFlags;
    CLSID clsidHandler;
    LPVOID pHandlerParameters;
    CLSID clsidDefaultForm;
    IPersistQuery* pPersistQuery;
    union
    {
        void* pFormParameters;
        IPropertyBag* ppbFormParameters;
    };
} OPENQUERYWINDOW, * LPOPENQUERYWINDOW;
DECLARE_INTERFACE_IID_(ICommonQuery, IUnknown, "ab50dec0-6f1d-11d0-a1c4-00aa00c16e65")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(OpenQueryWindow)(THIS_ HWND hwndParent, LPOPENQUERYWINDOW pQueryWnd, IDataObject** ppDataObject) PURE;
};
#endif
#pragma endregion
