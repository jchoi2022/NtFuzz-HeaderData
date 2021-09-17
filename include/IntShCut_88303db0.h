#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <isguids.h>
extern "C" {
typedef enum iurl_seturl_flags
{
   IURL_SETURL_FL_GUESS_PROTOCOL = 0x0001,
   IURL_SETURL_FL_USE_DEFAULT_PROTOCOL = 0x0002,
}
IURL_SETURL_FLAGS;
typedef enum iurl_invokecommand_flags
{
   IURL_INVOKECOMMAND_FL_ALLOW_UI = 0x0001,
   IURL_INVOKECOMMAND_FL_USE_DEFAULT_VERB = 0x0002,
   IURL_INVOKECOMMAND_FL_DDEWAIT = 0x0004,
   IURL_INVOKECOMMAND_FL_ASYNCOK = 0x0008,
   IURL_INVOKECOMMAND_FL_LOG_USAGE = 0x0010,
}
IURL_INVOKECOMMAND_FLAGS;
typedef struct urlinvokecommandinfoA
{
   DWORD dwcbSize;
   DWORD dwFlags;
   HWND hwndParent;
   LPCSTR pcszVerb;
}
URLINVOKECOMMANDINFOA;
typedef URLINVOKECOMMANDINFOA *PURLINVOKECOMMANDINFOA;
typedef const URLINVOKECOMMANDINFOA CURLINVOKECOMMANDINFOA;
typedef const URLINVOKECOMMANDINFOA *PCURLINVOKECOMMANDINFOA;
typedef struct urlinvokecommandinfoW
{
   DWORD dwcbSize;
   DWORD dwFlags;
   HWND hwndParent;
   LPCWSTR pcszVerb;
}
URLINVOKECOMMANDINFOW;
typedef URLINVOKECOMMANDINFOW *PURLINVOKECOMMANDINFOW;
typedef const URLINVOKECOMMANDINFOW CURLINVOKECOMMANDINFOW;
typedef const URLINVOKECOMMANDINFOW *PCURLINVOKECOMMANDINFOW;
DECLARE_INTERFACE_IID_(IUniformResourceLocatorA, IUnknown, "fbf23b80-e3f0-101b-8488-00aa003e56f8")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
   STDMETHOD(SetURL)(THIS_
                     LPCSTR pcszURL,
                     DWORD dwInFlags) PURE;
   STDMETHOD(GetURL)(THIS_
                     _Outptr_ LPSTR *ppszURL) PURE;
   STDMETHOD(InvokeCommand)(THIS_
                            PURLINVOKECOMMANDINFOA purlici) PURE;
};
DECLARE_INTERFACE_IID_(IUniformResourceLocatorW, IUnknown, "cabb0da0-da57-11cf-9974-0020afd79762")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
   STDMETHOD(SetURL)(THIS_
                     LPCWSTR pcszURL,
                     DWORD dwInFlags) PURE;
   STDMETHOD(GetURL)(THIS_
                     _Outptr_ LPWSTR *ppszURL) PURE;
   STDMETHOD(InvokeCommand)(THIS_
                            PURLINVOKECOMMANDINFOW purlici) PURE;
};
typedef IUniformResourceLocator *PIUniformResourceLocator;
typedef const IUniformResourceLocator CIUniformResourceLocator;
typedef const IUniformResourceLocator *PCIUniformResourceLocator;
typedef enum translateurl_in_flags
{
   TRANSLATEURL_FL_GUESS_PROTOCOL = 0x0001,
   TRANSLATEURL_FL_USE_DEFAULT_PROTOCOL = 0x0002,
}
TRANSLATEURL_IN_FLAGS;
INTSHCUTAPI HRESULT WINAPI TranslateURLA(PCSTR pcszURL,
                                         DWORD dwInFlags,
                                         _Out_ PSTR *ppszTranslatedURL);
INTSHCUTAPI HRESULT WINAPI TranslateURLW(PCWSTR pcszURL,
                                         DWORD dwInFlags,
                                         _Out_ PWSTR UNALIGNED *ppszTranslatedURL);
typedef enum urlassociationdialog_in_flags
{
   URLASSOCDLG_FL_USE_DEFAULT_NAME = 0x0001,
   URLASSOCDLG_FL_REGISTER_ASSOC = 0x0002
}
URLASSOCIATIONDIALOG_IN_FLAGS;
INTSHCUTAPI HRESULT WINAPI URLAssociationDialogA(HWND hwndParent,
                                                 DWORD dwInFlags,
                                                 PCSTR pcszFile,
                                                 PCSTR pcszURL,
                                                 _Out_writes_(ucAppBufLen) PSTR pszAppBuf,
                                                 UINT ucAppBufLen);
INTSHCUTAPI HRESULT WINAPI URLAssociationDialogW(HWND hwndParent,
                                                 DWORD dwInFlags,
                                                 PCWSTR pcszFile,
                                                 PCWSTR pcszURL,
                                                 _Out_writes_(ucAppBufLen) PWSTR pszAppBuf,
                                                 UINT ucAppBufLen);
typedef enum mimeassociationdialog_in_flags
{
   MIMEASSOCDLG_FL_REGISTER_ASSOC = 0x0001
}
MIMEASSOCIATIONDIALOG_IN_FLAGS;
INTSHCUTAPI HRESULT WINAPI MIMEAssociationDialogA(HWND hwndParent,
                                                  DWORD dwInFlags,
                                                  PCSTR pcszFile,
                                                  PCSTR pcszMIMEContentType,
                                                  _Out_writes_(ucAppBufLen) PSTR pszAppBuf,
                                                  UINT ucAppBufLen);
INTSHCUTAPI HRESULT WINAPI MIMEAssociationDialogW(HWND hwndParent,
                                                  DWORD dwInFlags,
                                                  PCWSTR pcszFile,
                                                  PCWSTR pcszMIMEContentType,
                                                  _Out_writes_(ucAppBufLen) PWSTR pszAppBuf,
                                                  UINT ucAppBufLen);
INTSHCUTAPI
BOOL
WINAPI
InetIsOffline(
    DWORD dwFlags);
}
#endif
#pragma endregion
