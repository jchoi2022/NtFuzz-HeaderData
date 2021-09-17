#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct _WABACTIONITEM * LPWABACTIONITEM;
        MAPIMETHOD(GetLastError) \
            (THIS_ HRESULT hResult, \
                    ULONG ulFlags, \
                    LPMAPIERROR* lppMAPIError) IPURE; \
        MAPIMETHOD(AllocateBuffer) \
            (THIS_ _In_ ULONG cbSize, \
                    _Outptr_result_bytebuffer_(cbSize) LPVOID* lppBuffer) IPURE; \
        MAPIMETHOD(AllocateMore) \
            (THIS_ _In_ ULONG cbSize, \
                    _In_ LPVOID lpObject, \
                    _Outptr_result_bytebuffer_(cbSize) LPVOID* lppBuffer) IPURE; \
        MAPIMETHOD(FreeBuffer) \
            (THIS_ _In_ LPVOID lpBuffer) IPURE; \
        MAPIMETHOD(Backup) \
            (THIS_ _In_ LPSTR lpFileName) IPURE; \
        MAPIMETHOD(Import) \
            (THIS_ _In_ LPSTR lpWIP) IPURE; \
        MAPIMETHOD(Find) \
            (THIS_ _In_ LPADRBOOK lpIAB, \
                    _In_opt_ HWND hWnd) IPURE; \
        MAPIMETHOD(VCardDisplay) \
            (THIS_ _In_ LPADRBOOK lpIAB, \
                    _In_opt_ HWND hWnd, \
                    _In_ LPSTR lpszFileName) IPURE; \
        MAPIMETHOD(LDAPUrl) \
            (THIS_ _In_ LPADRBOOK lpIAB, \
                    _In_opt_ HWND hWnd, \
                    ULONG ulFlags, \
                    _In_ LPSTR lpszURL, \
                    _Outptr_result_maybenull_ LPMAILUSER *lppMailUser) IPURE; \
        MAPIMETHOD(VCardCreate) \
            (THIS_ _In_ LPADRBOOK lpIAB, \
                    ULONG ulFlags, \
                    _In_ LPSTR lpszVCard, \
                    _In_ LPMAILUSER lpMailUser) IPURE; \
        MAPIMETHOD(VCardRetrieve) \
            (THIS_ _In_ LPADRBOOK lpIAB, \
                    ULONG ulFlags, \
                    _In_ LPSTR lpszVCard, \
                    _Outptr_ LPMAILUSER *lppMailUser) IPURE; \
        MAPIMETHOD(GetMe) \
            (THIS_ _In_ LPADRBOOK lpIAB, \
                    ULONG ulFlags, \
                    _Out_ DWORD* lpdwAction, \
                    _Out_ SBinary* lpsbEID, \
                    _In_opt_ HWND hwnd) IPURE; \
        MAPIMETHOD(SetMe) \
            (THIS_ _In_ LPADRBOOK lpIAB, \
                    ULONG ulFlags, \
                    SBinary sbEID, \
                    _In_opt_ HWND hwnd) IPURE; \
DECLARE_MAPI_INTERFACE_(IWABObject, IUnknown)
{
        BEGIN_INTERFACE
        MAPI_IUNKNOWN_METHODS(PURE)
        WAB_IWABOBJECT_METHODS(PURE)
};
DECLARE_MAPI_INTERFACE_PTR(IWABObject, LPWABOBJECT);
                MAPI_IUNKNOWN_METHODS(IMPL)
       WAB_IWABOBJECT_METHODS(IMPL)
                MAPI_IUNKNOWN_METHODS(IMPL)
       WAB_IWABOBJECT_METHODS(IMPL)
DECLARE_MAPI_INTERFACE(IWABOBJECT_)
{
        BEGIN_INTERFACE
        MAPI_IUNKNOWN_METHODS(IMPL)
   WAB_IWABOBJECT_METHODS(IMPL)
};
typedef struct _tagWAB_PARAM
{
    ULONG cbSize;
    HWND hwnd;
    LPSTR szFileName;
    ULONG ulFlags;
    GUID guidPSExt;
} WAB_PARAM, * LPWAB_PARAM;
STDMETHODIMP WABOpen(
    _Outptr_ LPADRBOOK* lppAdrBook,
    _Outptr_ LPWABOBJECT* lppWABObject,
    _In_opt_ LPWAB_PARAM lpWP,
    DWORD Reserved2);
typedef HRESULT (STDMETHODCALLTYPE WABOPEN)(
    LPADRBOOK FAR * lppAdrBook,
    LPWABOBJECT FAR * lppWABObject,
    LPWAB_PARAM lpWP,
    DWORD Reserved2
);
typedef WABOPEN FAR * LPWABOPEN;
STDMETHODIMP WABOpenEx(
    _Outptr_ LPADRBOOK* lppAdrBook,
    _Outptr_ LPWABOBJECT* lppWABObject,
    _In_opt_ LPWAB_PARAM lpWP,
    DWORD Reserved,
    ALLOCATEBUFFER * fnAllocateBuffer,
    ALLOCATEMORE * fnAllocateMore,
    FREEBUFFER * fnFreeBuffer);
typedef HRESULT (STDMETHODCALLTYPE WABOPENEX)(
    LPADRBOOK FAR * lppAdrBook,
    LPWABOBJECT FAR * lppWABObject,
    LPWAB_PARAM lpWP,
    DWORD Reserved,
    ALLOCATEBUFFER * fnAllocateBuffer,
    ALLOCATEMORE * fnAllocateMore,
    FREEBUFFER * fnFreeBuffer
);
typedef WABOPENEX FAR * LPWABOPENEX;
typedef struct _WABIMPORTPARAM
{
    ULONG cbSize;
    LPADRBOOK lpAdrBook;
    HWND hWnd;
    ULONG ulFlags;
    LPSTR lpszFileName;
} WABIMPORTPARAM, FAR * LPWABIMPORTPARAM;
typedef struct _WABEXTDISPLAY
{
    ULONG cbSize;
    LPWABOBJECT lpWABObject;
    LPADRBOOK lpAdrBook;
    LPMAPIPROP lpPropObj;
    BOOL fReadOnly;
    BOOL fDataChanged;
    ULONG ulFlags;
    LPVOID lpv;
    LPTSTR lpsz;
} WABEXTDISPLAY, FAR * LPWABEXTDISPLAY;
        MAPIMETHOD(Initialize) \
            (THIS_ LPWABEXTDISPLAY lpWABExtDisplay) IPURE; \
DECLARE_MAPI_INTERFACE_(IWABExtInit, IUnknown)
{
        BEGIN_INTERFACE
        MAPI_IUNKNOWN_METHODS(PURE)
        WAB_IWABEXTINIT_METHODS(PURE)
};
DECLARE_MAPI_INTERFACE_PTR(IWABExtInit, LPWABEXTINIT);
DEFINE_GUID(IID_IWABExtInit,
0xea22ebf0, 0x87a4, 0x11d1, 0x9a, 0xcf, 0x0, 0xa0, 0xc9, 0x1f, 0x9c, 0x8b);
}
#endif
#pragma endregion
