#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windows.h>
#include <shellapi.h>
#include <commdlg.h>
#include <ole2.h>
#include <string.h>
#include <tchar.h>
#include <dlgs.h>
extern "C" {
#pragma pack(push, 8)
typedef UINT (CALLBACK *LPFNOLEUIHOOK)(HWND, UINT, WPARAM, LPARAM);
STDAPI_(BOOL) OleUIAddVerbMenuW(_In_opt_ LPOLEOBJECT lpOleObj, _In_opt_ LPCWSTR lpszShortType,
        HMENU hMenu, UINT uPos, UINT uIDVerbMin, UINT uIDVerbMax,
        BOOL bAddConvert, UINT idConvert, _Out_ HMENU *lphMenu);
STDAPI_(BOOL) OleUIAddVerbMenuA(_In_opt_ LPOLEOBJECT lpOleObj, _In_opt_ LPCSTR lpszShortType,
        HMENU hMenu, UINT uPos, UINT uIDVerbMin, UINT uIDVerbMax,
        BOOL bAddConvert, UINT idConvert, _Out_ HMENU *lphMenu);
typedef struct tagOLEUIINSERTOBJECTW
{
        DWORD cbStruct;
        DWORD dwFlags;
        HWND hWndOwner;
        LPCWSTR lpszCaption;
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        HINSTANCE hInstance;
        LPCWSTR lpszTemplate;
        HRSRC hResource;
        CLSID clsid;
        LPWSTR lpszFile;
        UINT cchFile;
        UINT cClsidExclude;
        LPCLSID lpClsidExclude;
        IID iid;
        DWORD oleRender;
        LPFORMATETC lpFormatEtc;
        LPOLECLIENTSITE lpIOleClientSite;
        LPSTORAGE lpIStorage;
        LPVOID *ppvObj;
        SCODE sc;
        HGLOBAL hMetaPict;
} OLEUIINSERTOBJECTW, *POLEUIINSERTOBJECTW, *LPOLEUIINSERTOBJECTW;
typedef struct tagOLEUIINSERTOBJECTA
{
        DWORD cbStruct;
        DWORD dwFlags;
        HWND hWndOwner;
        LPCSTR lpszCaption;
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        HINSTANCE hInstance;
        LPCSTR lpszTemplate;
        HRSRC hResource;
        CLSID clsid;
        LPSTR lpszFile;
        UINT cchFile;
        UINT cClsidExclude;
        LPCLSID lpClsidExclude;
        IID iid;
        DWORD oleRender;
        LPFORMATETC lpFormatEtc;
        LPOLECLIENTSITE lpIOleClientSite;
        LPSTORAGE lpIStorage;
        LPVOID *ppvObj;
        SCODE sc;
        HGLOBAL hMetaPict;
} OLEUIINSERTOBJECTA, *POLEUIINSERTOBJECTA, *LPOLEUIINSERTOBJECTA;
STDAPI_(UINT) OleUIInsertObjectW(_In_ LPOLEUIINSERTOBJECTW);
STDAPI_(UINT) OleUIInsertObjectA(_In_ LPOLEUIINSERTOBJECTA);
typedef enum tagOLEUIPASTEFLAG
{
   OLEUIPASTE_ENABLEICON = 2048,
   OLEUIPASTE_PASTEONLY = 0,
   OLEUIPASTE_PASTE = 512,
   OLEUIPASTE_LINKANYTYPE = 1024,
   OLEUIPASTE_LINKTYPE1 = 1,
   OLEUIPASTE_LINKTYPE2 = 2,
   OLEUIPASTE_LINKTYPE3 = 4,
   OLEUIPASTE_LINKTYPE4 = 8,
   OLEUIPASTE_LINKTYPE5 = 16,
   OLEUIPASTE_LINKTYPE6 = 32,
   OLEUIPASTE_LINKTYPE7 = 64,
   OLEUIPASTE_LINKTYPE8 = 128
} OLEUIPASTEFLAG;
typedef struct tagOLEUIPASTEENTRYW
{
   FORMATETC fmtetc;
   LPCWSTR lpstrFormatName;
   LPCWSTR lpstrResultText;
   DWORD dwFlags;
   DWORD dwScratchSpace;
} OLEUIPASTEENTRYW, *POLEUIPASTEENTRYW, *LPOLEUIPASTEENTRYW;
typedef struct tagOLEUIPASTEENTRYA
{
   FORMATETC fmtetc;
   LPCSTR lpstrFormatName;
   LPCSTR lpstrResultText;
   DWORD dwFlags;
   DWORD dwScratchSpace;
} OLEUIPASTEENTRYA, *POLEUIPASTEENTRYA, *LPOLEUIPASTEENTRYA;
typedef struct tagOLEUIPASTESPECIALW
{
        DWORD cbStruct;
        DWORD dwFlags;
        HWND hWndOwner;
        LPCWSTR lpszCaption;
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        HINSTANCE hInstance;
        LPCWSTR lpszTemplate;
        HRSRC hResource;
        LPDATAOBJECT lpSrcDataObj;
        LPOLEUIPASTEENTRYW arrPasteEntries;
        int cPasteEntries;
        UINT FAR* arrLinkTypes;
        int cLinkTypes;
        UINT cClsidExclude;
        LPCLSID lpClsidExclude;
        int nSelectedIndex;
        BOOL fLink;
        HGLOBAL hMetaPict;
        SIZEL sizel;
} OLEUIPASTESPECIALW, *POLEUIPASTESPECIALW, *LPOLEUIPASTESPECIALW;
typedef struct tagOLEUIPASTESPECIALA
{
        DWORD cbStruct;
        DWORD dwFlags;
        HWND hWndOwner;
        LPCSTR lpszCaption;
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        HINSTANCE hInstance;
        LPCSTR lpszTemplate;
        HRSRC hResource;
        LPDATAOBJECT lpSrcDataObj;
        LPOLEUIPASTEENTRYA arrPasteEntries;
        int cPasteEntries;
        UINT FAR* arrLinkTypes;
        int cLinkTypes;
        UINT cClsidExclude;
        LPCLSID lpClsidExclude;
        int nSelectedIndex;
        BOOL fLink;
        HGLOBAL hMetaPict;
        SIZEL sizel;
} OLEUIPASTESPECIALA, *POLEUIPASTESPECIALA, *LPOLEUIPASTESPECIALA;
STDAPI_(UINT) OleUIPasteSpecialW(_In_ LPOLEUIPASTESPECIALW);
STDAPI_(UINT) OleUIPasteSpecialA(_In_ LPOLEUIPASTESPECIALA);
DECLARE_INTERFACE_(IOleUILinkContainerW, IUnknown)
{
        STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ LPVOID FAR* ppvObj) PURE;
        STDMETHOD_(ULONG,AddRef) (THIS) PURE;
        STDMETHOD_(ULONG,Release) (THIS) PURE;
        STDMETHOD_(DWORD,GetNextLink) (THIS_ DWORD dwLink) PURE;
        STDMETHOD(SetLinkUpdateOptions) (THIS_ DWORD dwLink,
                DWORD dwUpdateOpt) PURE;
        STDMETHOD(GetLinkUpdateOptions) (THIS_ DWORD dwLink,
                _Out_ DWORD FAR* lpdwUpdateOpt) PURE;
        STDMETHOD(SetLinkSource) (THIS_ DWORD dwLink, _In_ LPWSTR lpszDisplayName,
                ULONG lenFileName, _Out_ ULONG FAR* pchEaten, BOOL fValidateSource) PURE;
        STDMETHOD(GetLinkSource) (THIS_ DWORD dwLink,
                _Outptr_opt_result_maybenull_ LPWSTR FAR* lplpszDisplayName, _Out_ ULONG FAR* lplenFileName,
                _Outptr_opt_result_maybenull_ LPWSTR FAR* lplpszFullLinkType, _Outptr_opt_result_maybenull_ LPWSTR FAR* lplpszShortLinkType,
                _Out_ BOOL FAR* lpfSourceAvailable, _Out_ BOOL FAR* lpfIsSelected) PURE;
        STDMETHOD(OpenLinkSource) (THIS_ DWORD dwLink) PURE;
        STDMETHOD(UpdateLink) (THIS_ DWORD dwLink,
                BOOL fErrorMessage, BOOL fReserved) PURE;
        STDMETHOD(CancelLink) (THIS_ DWORD dwLink) PURE;
};
typedef IOleUILinkContainerW FAR* LPOLEUILINKCONTAINERW;
DECLARE_INTERFACE_(IOleUILinkContainerA, IUnknown)
{
        STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ LPVOID FAR* ppvObj) PURE;
        STDMETHOD_(ULONG,AddRef) (THIS) PURE;
        STDMETHOD_(ULONG,Release) (THIS) PURE;
        STDMETHOD_(DWORD,GetNextLink) (THIS_ DWORD dwLink) PURE;
        STDMETHOD(SetLinkUpdateOptions) (THIS_ DWORD dwLink,
                DWORD dwUpdateOpt) PURE;
        STDMETHOD(GetLinkUpdateOptions) (THIS_ DWORD dwLink,
                _Out_ DWORD FAR* lpdwUpdateOpt) PURE;
        STDMETHOD(SetLinkSource) (THIS_ DWORD dwLink, _In_ LPSTR lpszDisplayName,
                ULONG lenFileName, _Out_ ULONG FAR* pchEaten, BOOL fValidateSource) PURE;
        STDMETHOD(GetLinkSource) (THIS_ DWORD dwLink,
                _Outptr_opt_result_maybenull_ LPSTR FAR* lplpszDisplayName, _Out_ ULONG FAR* lplenFileName,
                _Outptr_opt_result_maybenull_ LPSTR FAR* lplpszFullLinkType, _Outptr_opt_result_maybenull_ LPSTR FAR* lplpszShortLinkType,
                _Out_ BOOL FAR* lpfSourceAvailable, _Out_ BOOL FAR* lpfIsSelected) PURE;
        STDMETHOD(OpenLinkSource) (THIS_ DWORD dwLink) PURE;
        STDMETHOD(UpdateLink) (THIS_ DWORD dwLink,
                BOOL fErrorMessage, BOOL fReserved) PURE;
        STDMETHOD(CancelLink) (THIS_ DWORD dwLink) PURE;
};
typedef IOleUILinkContainerA FAR* LPOLEUILINKCONTAINERA;
typedef struct tagOLEUIEDITLINKSW
{
        DWORD cbStruct;
        DWORD dwFlags;
        HWND hWndOwner;
        LPCWSTR lpszCaption;
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        HINSTANCE hInstance;
        LPCWSTR lpszTemplate;
        HRSRC hResource;
        LPOLEUILINKCONTAINERW lpOleUILinkContainer;
} OLEUIEDITLINKSW, *POLEUIEDITLINKSW, *LPOLEUIEDITLINKSW;
typedef struct tagOLEUIEDITLINKSA
{
        DWORD cbStruct;
        DWORD dwFlags;
        HWND hWndOwner;
        LPCSTR lpszCaption;
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        HINSTANCE hInstance;
        LPCSTR lpszTemplate;
        HRSRC hResource;
        LPOLEUILINKCONTAINERA lpOleUILinkContainer;
} OLEUIEDITLINKSA, *POLEUIEDITLINKSA, *LPOLEUIEDITLINKSA;
STDAPI_(UINT) OleUIEditLinksW(_In_ LPOLEUIEDITLINKSW);
STDAPI_(UINT) OleUIEditLinksA(_In_ LPOLEUIEDITLINKSA);
typedef struct tagOLEUICHANGEICONW
{
        DWORD cbStruct;
        DWORD dwFlags;
        HWND hWndOwner;
        LPCWSTR lpszCaption;
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        HINSTANCE hInstance;
        LPCWSTR lpszTemplate;
        HRSRC hResource;
        HGLOBAL hMetaPict;
        CLSID clsid;
        WCHAR szIconExe[MAX_PATH];
        int cchIconExe;
} OLEUICHANGEICONW, *POLEUICHANGEICONW, *LPOLEUICHANGEICONW;
typedef struct tagOLEUICHANGEICONA
{
        DWORD cbStruct;
        DWORD dwFlags;
        HWND hWndOwner;
        LPCSTR lpszCaption;
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        HINSTANCE hInstance;
        LPCSTR lpszTemplate;
        HRSRC hResource;
        HGLOBAL hMetaPict;
        CLSID clsid;
        CHAR szIconExe[MAX_PATH];
        int cchIconExe;
} OLEUICHANGEICONA, *POLEUICHANGEICONA, *LPOLEUICHANGEICONA;
STDAPI_(UINT) OleUIChangeIconW(_In_ LPOLEUICHANGEICONW);
STDAPI_(UINT) OleUIChangeIconA(_In_ LPOLEUICHANGEICONA);
typedef struct tagOLEUICONVERTW
{
        DWORD cbStruct;
        DWORD dwFlags;
        HWND hWndOwner;
        LPCWSTR lpszCaption;
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        HINSTANCE hInstance;
        LPCWSTR lpszTemplate;
        HRSRC hResource;
        CLSID clsid;
        CLSID clsidConvertDefault;
        CLSID clsidActivateDefault;
        CLSID clsidNew;
        DWORD dvAspect;
        WORD wFormat;
        BOOL fIsLinkedObject;
        HGLOBAL hMetaPict;
        LPWSTR lpszUserType;
        BOOL fObjectsIconChanged;
        LPWSTR lpszDefLabel;
        UINT cClsidExclude;
        LPCLSID lpClsidExclude;
} OLEUICONVERTW, *POLEUICONVERTW, *LPOLEUICONVERTW;
typedef struct tagOLEUICONVERTA
{
        DWORD cbStruct;
        DWORD dwFlags;
        HWND hWndOwner;
        LPCSTR lpszCaption;
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        HINSTANCE hInstance;
        LPCSTR lpszTemplate;
        HRSRC hResource;
        CLSID clsid;
        CLSID clsidConvertDefault;
        CLSID clsidActivateDefault;
        CLSID clsidNew;
        DWORD dvAspect;
        WORD wFormat;
        BOOL fIsLinkedObject;
        HGLOBAL hMetaPict;
        LPSTR lpszUserType;
        BOOL fObjectsIconChanged;
        LPSTR lpszDefLabel;
        UINT cClsidExclude;
        LPCLSID lpClsidExclude;
} OLEUICONVERTA, *POLEUICONVERTA, *LPOLEUICONVERTA;
STDAPI_(UINT) OleUIConvertW(_In_ LPOLEUICONVERTW);
STDAPI_(UINT) OleUIConvertA(_In_ LPOLEUICONVERTA);
STDAPI_(BOOL) OleUICanConvertOrActivateAs(
        _In_ REFCLSID rClsid, BOOL fIsLinkedObject, WORD wFormat);
typedef struct tagOLEUIBUSYW
{
        DWORD cbStruct;
        DWORD dwFlags;
        HWND hWndOwner;
        LPCWSTR lpszCaption;
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        HINSTANCE hInstance;
        LPCWSTR lpszTemplate;
        HRSRC hResource;
        HTASK hTask;
        HWND * lphWndDialog;
} OLEUIBUSYW, *POLEUIBUSYW, *LPOLEUIBUSYW;
typedef struct tagOLEUIBUSYA
{
        DWORD cbStruct;
        DWORD dwFlags;
        HWND hWndOwner;
        LPCSTR lpszCaption;
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        HINSTANCE hInstance;
        LPCSTR lpszTemplate;
        HRSRC hResource;
        HTASK hTask;
        HWND * lphWndDialog;
} OLEUIBUSYA, *POLEUIBUSYA, *LPOLEUIBUSYA;
STDAPI_(UINT) OleUIBusyW(_In_ LPOLEUIBUSYW);
STDAPI_(UINT) OleUIBusyA(_In_ LPOLEUIBUSYA);
typedef struct tagOLEUICHANGESOURCEW
{
        DWORD cbStruct;
        DWORD dwFlags;
        HWND hWndOwner;
        LPCWSTR lpszCaption;
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        HINSTANCE hInstance;
        LPCWSTR lpszTemplate;
        HRSRC hResource;
        OPENFILENAMEW* lpOFN;
        DWORD dwReserved1[4];
        LPOLEUILINKCONTAINERW lpOleUILinkContainer;
        DWORD dwLink;
        LPWSTR lpszDisplayName;
        ULONG nFileLength;
        LPWSTR lpszFrom;
        LPWSTR lpszTo;
} OLEUICHANGESOURCEW, *POLEUICHANGESOURCEW, *LPOLEUICHANGESOURCEW;
typedef struct tagOLEUICHANGESOURCEA
{
        DWORD cbStruct;
        DWORD dwFlags;
        HWND hWndOwner;
        LPCSTR lpszCaption;
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        HINSTANCE hInstance;
        LPCSTR lpszTemplate;
        HRSRC hResource;
        OPENFILENAMEA* lpOFN;
        DWORD dwReserved1[4];
        LPOLEUILINKCONTAINERA lpOleUILinkContainer;
        DWORD dwLink;
        LPSTR lpszDisplayName;
        ULONG nFileLength;
        LPSTR lpszFrom;
        LPSTR lpszTo;
} OLEUICHANGESOURCEA, *POLEUICHANGESOURCEA, *LPOLEUICHANGESOURCEA;
STDAPI_(UINT) OleUIChangeSourceW(_In_ LPOLEUICHANGESOURCEW);
STDAPI_(UINT) OleUIChangeSourceA(_In_ LPOLEUICHANGESOURCEA);
DECLARE_INTERFACE_(IOleUIObjInfoW, IUnknown)
{
        STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ LPVOID FAR* ppvObj) PURE;
        STDMETHOD_(ULONG,AddRef) (THIS) PURE;
        STDMETHOD_(ULONG,Release) (THIS) PURE;
        STDMETHOD(GetObjectInfo) (THIS_ DWORD dwObject,
                _Out_ DWORD FAR* lpdwObjSize, _Outptr_opt_result_maybenull_ LPWSTR FAR* lplpszLabel,
                _Outptr_opt_result_maybenull_ LPWSTR FAR* lplpszType, _Outptr_opt_result_maybenull_ LPWSTR FAR* lplpszShortType,
                _Outptr_opt_result_maybenull_ LPWSTR FAR* lplpszLocation) PURE;
        STDMETHOD(GetConvertInfo) (THIS_ DWORD dwObject,
                _Out_ CLSID FAR* lpClassID, _Out_ WORD FAR* lpwFormat,
                _Out_ CLSID FAR* lpConvertDefaultClassID,
                _Outptr_result_maybenull_ LPCLSID FAR* lplpClsidExclude, _Out_opt_ UINT FAR* lpcClsidExclude) PURE;
        STDMETHOD(ConvertObject) (THIS_ DWORD dwObject, _In_ REFCLSID clsidNew) PURE;
        STDMETHOD(GetViewInfo) (THIS_ DWORD dwObject,
                _In_opt_ HGLOBAL FAR* phMetaPict, _In_opt_ DWORD* pdvAspect, _In_opt_ int* pnCurrentScale) PURE;
        STDMETHOD(SetViewInfo) (THIS_ DWORD dwObject,
                HGLOBAL hMetaPict, DWORD dvAspect,
                int nCurrentScale, BOOL bRelativeToOrig) PURE;
};
typedef IOleUIObjInfoW FAR* LPOLEUIOBJINFOW;
DECLARE_INTERFACE_(IOleUIObjInfoA, IUnknown)
{
        STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ LPVOID FAR* ppvObj) PURE;
        STDMETHOD_(ULONG,AddRef) (THIS) PURE;
        STDMETHOD_(ULONG,Release) (THIS) PURE;
        STDMETHOD(GetObjectInfo) (THIS_ DWORD dwObject,
                _Out_ DWORD FAR* lpdwObjSize, _Outptr_opt_result_maybenull_ LPSTR FAR* lplpszLabel,
                _Outptr_opt_result_maybenull_ LPSTR FAR* lplpszType, _Outptr_opt_result_maybenull_ LPSTR FAR* lplpszShortType,
                _Outptr_opt_result_maybenull_ LPSTR FAR* lplpszLocation) PURE;
        STDMETHOD(GetConvertInfo) (THIS_ DWORD dwObject,
                _Out_ CLSID FAR* lpClassID, _Out_ WORD FAR* lpwFormat,
                _Out_ CLSID FAR* lpConvertDefaultClassID,
                _Outptr_result_maybenull_ LPCLSID FAR* lplpClsidExclude, _Out_opt_ UINT FAR* lpcClsidExclude) PURE;
        STDMETHOD(ConvertObject) (THIS_ DWORD dwObject, _In_ REFCLSID clsidNew) PURE;
        STDMETHOD(GetViewInfo) (THIS_ DWORD dwObject,
                _In_opt_ HGLOBAL FAR* phMetaPict, _In_opt_ DWORD* pdvAspect, _In_opt_ int* pnCurrentScale) PURE;
        STDMETHOD(SetViewInfo) (THIS_ DWORD dwObject,
                HGLOBAL hMetaPict, DWORD dvAspect,
                int nCurrentScale, BOOL bRelativeToOrig) PURE;
};
typedef IOleUIObjInfoA FAR* LPOLEUIOBJINFOA;
DECLARE_INTERFACE_(IOleUILinkInfoW, IOleUILinkContainerW)
{
        STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ LPVOID FAR* ppvObj) PURE;
        STDMETHOD_(ULONG,AddRef) (THIS) PURE;
        STDMETHOD_(ULONG,Release) (THIS) PURE;
        STDMETHOD_(DWORD,GetNextLink) (THIS_ DWORD dwLink) PURE;
        STDMETHOD(SetLinkUpdateOptions) (THIS_ DWORD dwLink,
                DWORD dwUpdateOpt) PURE;
        STDMETHOD(GetLinkUpdateOptions) (THIS_ DWORD dwLink,
                _Out_ DWORD FAR* lpdwUpdateOpt) PURE;
        STDMETHOD(SetLinkSource) (THIS_ DWORD dwLink, _In_ LPWSTR lpszDisplayName,
                ULONG lenFileName, _Out_ ULONG FAR* pchEaten, BOOL fValidateSource) PURE;
        STDMETHOD(GetLinkSource) (THIS_ DWORD dwLink,
                _Outptr_opt_result_maybenull_ LPWSTR FAR* lplpszDisplayName, _Out_ ULONG FAR* lplenFileName,
                _Outptr_opt_result_maybenull_ LPWSTR FAR* lplpszFullLinkType, _Outptr_opt_result_maybenull_ LPWSTR FAR* lplpszShortLinkType,
                _Out_ BOOL FAR* lpfSourceAvailable, _Out_ BOOL FAR* lpfIsSelected) PURE;
        STDMETHOD(OpenLinkSource) (THIS_ DWORD dwLink) PURE;
        STDMETHOD(UpdateLink) (THIS_ DWORD dwLink,
                BOOL fErrorMessage, BOOL fReserved) PURE;
        STDMETHOD(CancelLink) (THIS_ DWORD dwLink) PURE;
        STDMETHOD(GetLastUpdate) (THIS_ DWORD dwLink,
                _Out_ FILETIME FAR* lpLastUpdate) PURE;
};
typedef IOleUILinkInfoW FAR* LPOLEUILINKINFOW;
DECLARE_INTERFACE_(IOleUILinkInfoA, IOleUILinkContainerA)
{
        STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ LPVOID FAR* ppvObj) PURE;
        STDMETHOD_(ULONG,AddRef) (THIS) PURE;
        STDMETHOD_(ULONG,Release) (THIS) PURE;
        STDMETHOD_(DWORD,GetNextLink) (THIS_ DWORD dwLink) PURE;
        STDMETHOD(SetLinkUpdateOptions) (THIS_ DWORD dwLink,
                DWORD dwUpdateOpt) PURE;
        STDMETHOD(GetLinkUpdateOptions) (THIS_ DWORD dwLink,
                _Out_ DWORD FAR* lpdwUpdateOpt) PURE;
        STDMETHOD(SetLinkSource) (THIS_ DWORD dwLink, _In_ LPSTR lpszDisplayName,
                ULONG lenFileName, _Out_ ULONG FAR* pchEaten, BOOL fValidateSource) PURE;
        STDMETHOD(GetLinkSource) (THIS_ DWORD dwLink,
                _Outptr_opt_result_maybenull_ LPSTR FAR* lplpszDisplayName, _Out_ ULONG FAR* lplenFileName,
                _Outptr_opt_result_maybenull_ LPSTR FAR* lplpszFullLinkType, _Outptr_opt_result_maybenull_ LPSTR FAR* lplpszShortLinkType,
                _Out_ BOOL FAR* lpfSourceAvailable, _Out_ BOOL FAR* lpfIsSelected) PURE;
        STDMETHOD(OpenLinkSource) (THIS_ DWORD dwLink) PURE;
        STDMETHOD(UpdateLink) (THIS_ DWORD dwLink,
                BOOL fErrorMessage, BOOL fReserved) PURE;
        STDMETHOD(CancelLink) (THIS_ DWORD dwLink) PURE;
        STDMETHOD(GetLastUpdate) (THIS_ DWORD dwLink,
                _Out_ FILETIME FAR* lpLastUpdate) PURE;
};
typedef IOleUILinkInfoA FAR* LPOLEUILINKINFOA;
struct tagOLEUIOBJECTPROPSW;
struct tagOLEUIOBJECTPROPSA;
typedef struct tagOLEUIGNRLPROPSW
{
        DWORD cbStruct;
        DWORD dwFlags;
        DWORD dwReserved1[2];
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        DWORD dwReserved2[3];
        struct tagOLEUIOBJECTPROPSW* lpOP;
} OLEUIGNRLPROPSW, *POLEUIGNRLPROPSW, FAR* LPOLEUIGNRLPROPSW;
typedef struct tagOLEUIGNRLPROPSA
{
        DWORD cbStruct;
        DWORD dwFlags;
        DWORD dwReserved1[2];
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        DWORD dwReserved2[3];
        struct tagOLEUIOBJECTPROPSA* lpOP;
} OLEUIGNRLPROPSA, *POLEUIGNRLPROPSA, FAR* LPOLEUIGNRLPROPSA;
typedef struct tagOLEUIVIEWPROPSW
{
        DWORD cbStruct;
        DWORD dwFlags;
        DWORD dwReserved1[2];
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        DWORD dwReserved2[3];
        struct tagOLEUIOBJECTPROPSW* lpOP;
        int nScaleMin;
        int nScaleMax;
} OLEUIVIEWPROPSW, *POLEUIVIEWPROPSW, FAR* LPOLEUIVIEWPROPSW;
typedef struct tagOLEUIVIEWPROPSA
{
        DWORD cbStruct;
        DWORD dwFlags;
        DWORD dwReserved1[2];
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        DWORD dwReserved2[3];
        struct tagOLEUIOBJECTPROPSA* lpOP;
        int nScaleMin;
        int nScaleMax;
} OLEUIVIEWPROPSA, *POLEUIVIEWPROPSA, FAR* LPOLEUIVIEWPROPSA;
typedef struct tagOLEUILINKPROPSW
{
        DWORD cbStruct;
        DWORD dwFlags;
        DWORD dwReserved1[2];
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        DWORD dwReserved2[3];
        struct tagOLEUIOBJECTPROPSW* lpOP;
} OLEUILINKPROPSW, *POLEUILINKPROPSW, FAR* LPOLEUILINKPROPSW;
typedef struct tagOLEUILINKPROPSA
{
        DWORD cbStruct;
        DWORD dwFlags;
        DWORD dwReserved1[2];
        LPFNOLEUIHOOK lpfnHook;
        LPARAM lCustData;
        DWORD dwReserved2[3];
        struct tagOLEUIOBJECTPROPSA* lpOP;
} OLEUILINKPROPSA, *POLEUILINKPROPSA, FAR* LPOLEUILINKPROPSA;
#include <prsht.h>
typedef struct _PROPSHEETHEADER FAR* LPPROPSHEETHEADERW;
typedef struct _PROPSHEETHEADER FAR* LPPROPSHEETHEADERA;
typedef struct tagOLEUIOBJECTPROPSW
{
        DWORD cbStruct;
        DWORD dwFlags;
        LPPROPSHEETHEADERW lpPS;
        DWORD dwObject;
        LPOLEUIOBJINFOW lpObjInfo;
        DWORD dwLink;
        LPOLEUILINKINFOW lpLinkInfo;
        LPOLEUIGNRLPROPSW lpGP;
        LPOLEUIVIEWPROPSW lpVP;
        LPOLEUILINKPROPSW lpLP;
} OLEUIOBJECTPROPSW, *POLEUIOBJECTPROPSW, FAR* LPOLEUIOBJECTPROPSW;
typedef struct tagOLEUIOBJECTPROPSA
{
        DWORD cbStruct;
        DWORD dwFlags;
        LPPROPSHEETHEADERA lpPS;
        DWORD dwObject;
        LPOLEUIOBJINFOA lpObjInfo;
        DWORD dwLink;
        LPOLEUILINKINFOA lpLinkInfo;
        LPOLEUIGNRLPROPSA lpGP;
        LPOLEUIVIEWPROPSA lpVP;
        LPOLEUILINKPROPSA lpLP;
} OLEUIOBJECTPROPSA, *POLEUIOBJECTPROPSA, FAR* LPOLEUIOBJECTPROPSA;
STDAPI_(UINT) OleUIObjectPropertiesW(_In_ LPOLEUIOBJECTPROPSW);
STDAPI_(UINT) OleUIObjectPropertiesA(_In_ LPOLEUIOBJECTPROPSA);
int __cdecl OleUIPromptUserW(int nTemplate, HWND hwndParent, ...);
int __cdecl OleUIPromptUserA(int nTemplate, HWND hwndParent, ...);
STDAPI_(BOOL) OleUIUpdateLinksW(LPOLEUILINKCONTAINERW lpOleUILinkCntr,
        HWND hwndParent, _In_ LPWSTR lpszTitle, int cLinks);
STDAPI_(BOOL) OleUIUpdateLinksA(LPOLEUILINKCONTAINERA lpOleUILinkCntr,
        HWND hwndParent, _In_ LPSTR lpszTitle, int cLinks);
#pragma pack(pop)
}
#endif
#pragma endregion
