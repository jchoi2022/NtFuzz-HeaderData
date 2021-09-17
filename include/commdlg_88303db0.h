#include <winapifamily.h>
DEFINE_GUID(IID_IPrintDialogCallback, 0x5852a2c3, 0x6530, 0x11d1, 0xb6, 0xa3, 0x0, 0x0, 0xf8, 0x75, 0x7b, 0xf9);
DEFINE_GUID(IID_IPrintDialogServices, 0x509aaeda, 0x5639, 0x11d1, 0xb6, 0xa1, 0x0, 0x0, 0xf8, 0x75, 0x7b, 0xf9);
#include <prsht.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagEDITMENU
{
   HMENU hmenu;
   WORD idEdit;
   WORD idCut;
   WORD idCopy;
   WORD idPaste;
   WORD idClear;
   WORD idUndo;
} EDITMENU;
typedef EDITMENU *LPEDITMENU;
typedef UINT_PTR (CALLBACK *LPOFNHOOKPROC) (HWND, UINT, WPARAM, LPARAM);
typedef struct tagOFN_NT4A {
   DWORD lStructSize;
   HWND hwndOwner;
   HINSTANCE hInstance;
   LPCSTR lpstrFilter;
   LPSTR lpstrCustomFilter;
   DWORD nMaxCustFilter;
   DWORD nFilterIndex;
   LPSTR lpstrFile;
   DWORD nMaxFile;
   LPSTR lpstrFileTitle;
   DWORD nMaxFileTitle;
   LPCSTR lpstrInitialDir;
   LPCSTR lpstrTitle;
   DWORD Flags;
   WORD nFileOffset;
   WORD nFileExtension;
   LPCSTR lpstrDefExt;
   LPARAM lCustData;
   LPOFNHOOKPROC lpfnHook;
   LPCSTR lpTemplateName;
} OPENFILENAME_NT4A, *LPOPENFILENAME_NT4A;
typedef struct tagOFN_NT4W {
   DWORD lStructSize;
   HWND hwndOwner;
   HINSTANCE hInstance;
   LPCWSTR lpstrFilter;
   LPWSTR lpstrCustomFilter;
   DWORD nMaxCustFilter;
   DWORD nFilterIndex;
   LPWSTR lpstrFile;
   DWORD nMaxFile;
   LPWSTR lpstrFileTitle;
   DWORD nMaxFileTitle;
   LPCWSTR lpstrInitialDir;
   LPCWSTR lpstrTitle;
   DWORD Flags;
   WORD nFileOffset;
   WORD nFileExtension;
   LPCWSTR lpstrDefExt;
   LPARAM lCustData;
   LPOFNHOOKPROC lpfnHook;
   LPCWSTR lpTemplateName;
} OPENFILENAME_NT4W, *LPOPENFILENAME_NT4W;
typedef OPENFILENAME_NT4W OPENFILENAME_NT4;
typedef LPOPENFILENAME_NT4W LPOPENFILENAME_NT4;
typedef struct tagOFNA {
   DWORD lStructSize;
   HWND hwndOwner;
   HINSTANCE hInstance;
   LPCSTR lpstrFilter;
   LPSTR lpstrCustomFilter;
   DWORD nMaxCustFilter;
   DWORD nFilterIndex;
   LPSTR lpstrFile;
   DWORD nMaxFile;
   LPSTR lpstrFileTitle;
   DWORD nMaxFileTitle;
   LPCSTR lpstrInitialDir;
   LPCSTR lpstrTitle;
   DWORD Flags;
   WORD nFileOffset;
   WORD nFileExtension;
   LPCSTR lpstrDefExt;
   LPARAM lCustData;
   LPOFNHOOKPROC lpfnHook;
   LPCSTR lpTemplateName;
   LPEDITMENU lpEditInfo;
   LPCSTR lpstrPrompt;
   void * pvReserved;
   DWORD dwReserved;
   DWORD FlagsEx;
} OPENFILENAMEA, *LPOPENFILENAMEA;
typedef struct tagOFNW {
   DWORD lStructSize;
   HWND hwndOwner;
   HINSTANCE hInstance;
   LPCWSTR lpstrFilter;
   LPWSTR lpstrCustomFilter;
   DWORD nMaxCustFilter;
   DWORD nFilterIndex;
   LPWSTR lpstrFile;
   DWORD nMaxFile;
   LPWSTR lpstrFileTitle;
   DWORD nMaxFileTitle;
   LPCWSTR lpstrInitialDir;
   LPCWSTR lpstrTitle;
   DWORD Flags;
   WORD nFileOffset;
   WORD nFileExtension;
   LPCWSTR lpstrDefExt;
   LPARAM lCustData;
   LPOFNHOOKPROC lpfnHook;
   LPCWSTR lpTemplateName;
   LPEDITMENU lpEditInfo;
   LPCSTR lpstrPrompt;
   void * pvReserved;
   DWORD dwReserved;
   DWORD FlagsEx;
} OPENFILENAMEW, *LPOPENFILENAMEW;
typedef OPENFILENAMEW OPENFILENAME;
typedef LPOPENFILENAMEW LPOPENFILENAME;
WINCOMMDLGAPI BOOL APIENTRY GetOpenFileNameA(LPOPENFILENAMEA);
WINCOMMDLGAPI BOOL APIENTRY GetOpenFileNameW(LPOPENFILENAMEW);
WINCOMMDLGAPI BOOL APIENTRY GetSaveFileNameA(LPOPENFILENAMEA);
WINCOMMDLGAPI BOOL APIENTRY GetSaveFileNameW(LPOPENFILENAMEW);
WINCOMMDLGAPI short APIENTRY GetFileTitleA(LPCSTR, _Out_writes_(cchSize) LPSTR Buf, _In_ WORD cchSize);
WINCOMMDLGAPI short APIENTRY GetFileTitleW(LPCWSTR, _Out_writes_(cchSize) LPWSTR Buf, _In_ WORD cchSize);
typedef UINT_PTR (CALLBACK *LPCCHOOKPROC) (HWND, UINT, WPARAM, LPARAM);
typedef struct _OFNOTIFYA
{
        NMHDR hdr;
        LPOPENFILENAMEA lpOFN;
        LPSTR pszFile;
} OFNOTIFYA, *LPOFNOTIFYA;
typedef struct _OFNOTIFYW
{
        NMHDR hdr;
        LPOPENFILENAMEW lpOFN;
        LPWSTR pszFile;
} OFNOTIFYW, *LPOFNOTIFYW;
typedef OFNOTIFYW OFNOTIFY;
typedef LPOFNOTIFYW LPOFNOTIFY;
typedef struct _OFNOTIFYEXA
{
        NMHDR hdr;
        LPOPENFILENAMEA lpOFN;
        LPVOID psf;
        LPVOID pidl;
} OFNOTIFYEXA, *LPOFNOTIFYEXA;
typedef struct _OFNOTIFYEXW
{
        NMHDR hdr;
        LPOPENFILENAMEW lpOFN;
        LPVOID psf;
        LPVOID pidl;
} OFNOTIFYEXW, *LPOFNOTIFYEXW;
typedef OFNOTIFYEXW OFNOTIFYEX;
typedef LPOFNOTIFYEXW LPOFNOTIFYEX;
        (int)SNDMSG(_hdlg, CDM_GETSPEC, (WPARAM)(_cbmax), (LPARAM)(LPSTR)(_psz))
        (int)SNDMSG(_hdlg, CDM_GETSPEC, (WPARAM)(_cbmax), (LPARAM)(LPWSTR)(_psz))
        (int)SNDMSG(_hdlg, CDM_GETFILEPATH, (WPARAM)(_cbmax), (LPARAM)(LPSTR)(_psz))
        (int)SNDMSG(_hdlg, CDM_GETFILEPATH, (WPARAM)(_cbmax), (LPARAM)(LPWSTR)(_psz))
        (int)SNDMSG(_hdlg, CDM_GETFOLDERPATH, (WPARAM)(_cbmax), (LPARAM)(LPSTR)(_psz))
        (int)SNDMSG(_hdlg, CDM_GETFOLDERPATH, (WPARAM)(_cbmax), (LPARAM)(LPWSTR)(_psz))
        (int)SNDMSG(_hdlg, CDM_GETFOLDERIDLIST, (WPARAM)(_cbmax), (LPARAM)(LPVOID)(_pidl))
        (void)SNDMSG(_hdlg, CDM_SETCONTROLTEXT, (WPARAM)(_id), (LPARAM)(LPSTR)(_text))
        (void)SNDMSG(_hdlg, CDM_HIDECONTROL, (WPARAM)(_id), 0)
        (void)SNDMSG(_hdlg, CDM_SETDEFEXT, 0, (LPARAM)(LPSTR)(_pszext))
typedef struct tagCHOOSECOLORA {
   DWORD lStructSize;
   HWND hwndOwner;
   HWND hInstance;
   COLORREF rgbResult;
   COLORREF* lpCustColors;
   DWORD Flags;
   LPARAM lCustData;
   LPCCHOOKPROC lpfnHook;
   LPCSTR lpTemplateName;
} CHOOSECOLORA, *LPCHOOSECOLORA;
typedef struct tagCHOOSECOLORW {
   DWORD lStructSize;
   HWND hwndOwner;
   HWND hInstance;
   COLORREF rgbResult;
   COLORREF* lpCustColors;
   DWORD Flags;
   LPARAM lCustData;
   LPCCHOOKPROC lpfnHook;
   LPCWSTR lpTemplateName;
} CHOOSECOLORW, *LPCHOOSECOLORW;
typedef CHOOSECOLORW CHOOSECOLOR;
typedef LPCHOOSECOLORW LPCHOOSECOLOR;
WINCOMMDLGAPI BOOL APIENTRY ChooseColorA(LPCHOOSECOLORA);
WINCOMMDLGAPI BOOL APIENTRY ChooseColorW(LPCHOOSECOLORW);
typedef UINT_PTR (CALLBACK *LPFRHOOKPROC) (HWND, UINT, WPARAM, LPARAM);
typedef struct tagFINDREPLACEA {
   DWORD lStructSize;
   HWND hwndOwner;
   HINSTANCE hInstance;
   DWORD Flags;
   LPSTR lpstrFindWhat;
   LPSTR lpstrReplaceWith;
   WORD wFindWhatLen;
   WORD wReplaceWithLen;
   LPARAM lCustData;
   LPFRHOOKPROC lpfnHook;
   LPCSTR lpTemplateName;
} FINDREPLACEA, *LPFINDREPLACEA;
typedef struct tagFINDREPLACEW {
   DWORD lStructSize;
   HWND hwndOwner;
   HINSTANCE hInstance;
   DWORD Flags;
   LPWSTR lpstrFindWhat;
   LPWSTR lpstrReplaceWith;
   WORD wFindWhatLen;
   WORD wReplaceWithLen;
   LPARAM lCustData;
   LPFRHOOKPROC lpfnHook;
   LPCWSTR lpTemplateName;
} FINDREPLACEW, *LPFINDREPLACEW;
typedef FINDREPLACEW FINDREPLACE;
typedef LPFINDREPLACEW LPFINDREPLACE;
WINCOMMDLGAPI HWND APIENTRY FindTextA(LPFINDREPLACEA);
WINCOMMDLGAPI HWND APIENTRY FindTextW(LPFINDREPLACEW);
WINCOMMDLGAPI HWND APIENTRY ReplaceTextA(LPFINDREPLACEA);
WINCOMMDLGAPI HWND APIENTRY ReplaceTextW(LPFINDREPLACEW);
        (void)SNDMSG(_hdlg, FRM_SETOPERATIONRESULT, (WPARAM)(_flags), (LPARAM)(_fr))
        (void)SNDMSG(_hdlg, FRM_SETOPERATIONRESULTTEXT, 0, (LPARAM)(LPSTR)(_psz))
typedef UINT_PTR (CALLBACK *LPCFHOOKPROC) (HWND, UINT, WPARAM, LPARAM);
typedef struct tagCHOOSEFONTA {
   DWORD lStructSize;
   HWND hwndOwner;
   HDC hDC;
   LPLOGFONTA lpLogFont;
   INT iPointSize;
   DWORD Flags;
   COLORREF rgbColors;
   LPARAM lCustData;
   LPCFHOOKPROC lpfnHook;
   LPCSTR lpTemplateName;
   HINSTANCE hInstance;
   LPSTR lpszStyle;
   WORD nFontType;
   WORD ___MISSING_ALIGNMENT__;
   INT nSizeMin;
   INT nSizeMax;
} CHOOSEFONTA;
typedef struct tagCHOOSEFONTW {
   DWORD lStructSize;
   HWND hwndOwner;
   HDC hDC;
   LPLOGFONTW lpLogFont;
   INT iPointSize;
   DWORD Flags;
   COLORREF rgbColors;
   LPARAM lCustData;
   LPCFHOOKPROC lpfnHook;
   LPCWSTR lpTemplateName;
   HINSTANCE hInstance;
   LPWSTR lpszStyle;
   WORD nFontType;
   WORD ___MISSING_ALIGNMENT__;
   INT nSizeMin;
   INT nSizeMax;
} CHOOSEFONTW;
typedef CHOOSEFONTW CHOOSEFONT;
typedef CHOOSEFONTA *LPCHOOSEFONTA;
typedef CHOOSEFONTW *LPCHOOSEFONTW;
typedef LPCHOOSEFONTW LPCHOOSEFONT;
typedef const CHOOSEFONTA *PCCHOOSEFONTA;
typedef const CHOOSEFONTW *PCCHOOSEFONTW;
typedef CHOOSEFONTW CHOOSEFONT;
typedef PCCHOOSEFONTW PCCHOOSEFONT;
WINCOMMDLGAPI BOOL APIENTRY ChooseFontA(LPCHOOSEFONTA);
WINCOMMDLGAPI BOOL APIENTRY ChooseFontW(LPCHOOSEFONTW);
typedef UINT_PTR (CALLBACK *LPPRINTHOOKPROC) (HWND, UINT, WPARAM, LPARAM);
typedef UINT_PTR (CALLBACK *LPSETUPHOOKPROC) (HWND, UINT, WPARAM, LPARAM);
typedef struct tagPDA {
   DWORD lStructSize;
   HWND hwndOwner;
   HGLOBAL hDevMode;
   HGLOBAL hDevNames;
   HDC hDC;
   DWORD Flags;
   WORD nFromPage;
   WORD nToPage;
   WORD nMinPage;
   WORD nMaxPage;
   WORD nCopies;
   HINSTANCE hInstance;
   LPARAM lCustData;
   LPPRINTHOOKPROC lpfnPrintHook;
   LPSETUPHOOKPROC lpfnSetupHook;
   LPCSTR lpPrintTemplateName;
   LPCSTR lpSetupTemplateName;
   HGLOBAL hPrintTemplate;
   HGLOBAL hSetupTemplate;
} PRINTDLGA, *LPPRINTDLGA;
typedef struct tagPDW {
   DWORD lStructSize;
   HWND hwndOwner;
   HGLOBAL hDevMode;
   HGLOBAL hDevNames;
   HDC hDC;
   DWORD Flags;
   WORD nFromPage;
   WORD nToPage;
   WORD nMinPage;
   WORD nMaxPage;
   WORD nCopies;
   HINSTANCE hInstance;
   LPARAM lCustData;
   LPPRINTHOOKPROC lpfnPrintHook;
   LPSETUPHOOKPROC lpfnSetupHook;
   LPCWSTR lpPrintTemplateName;
   LPCWSTR lpSetupTemplateName;
   HGLOBAL hPrintTemplate;
   HGLOBAL hSetupTemplate;
} PRINTDLGW, *LPPRINTDLGW;
typedef PRINTDLGW PRINTDLG;
typedef LPPRINTDLGW LPPRINTDLG;
WINCOMMDLGAPI _Success_(return != FALSE) BOOL APIENTRY PrintDlgA(_Inout_ LPPRINTDLGA pPD);
WINCOMMDLGAPI _Success_(return != FALSE) BOOL APIENTRY PrintDlgW(_Inout_ LPPRINTDLGW pPD);
DECLARE_INTERFACE_IID_(IPrintDialogCallback, IUnknown, "5852A2C3-6530-11D1-B6A3-0000F8757BF9")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(InitDone) (THIS) PURE;
    STDMETHOD(SelectionChange) (THIS) PURE;
    STDMETHOD(HandleMessage) (THIS_ HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT *pResult) PURE;
};
DECLARE_INTERFACE_IID_(IPrintDialogServices, IUnknown, "509AAEDA-5639-11D1-B6A1-0000F8757BF9")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetCurrentDevMode) (THIS_ _Inout_ LPDEVMODE pDevMode, _Inout_ UINT *pcbSize) PURE;
    STDMETHOD(GetCurrentPrinterName) (THIS_ _Out_writes_opt_(*pcchSize) LPWSTR pPrinterName, _Inout_ UINT *pcchSize) PURE;
    STDMETHOD(GetCurrentPortName) (THIS_ _Out_writes_opt_(*pcchSize) LPWSTR pPortName, _Inout_ UINT *pcchSize) PURE;
};
typedef struct tagPRINTPAGERANGE {
   DWORD nFromPage;
   DWORD nToPage;
} PRINTPAGERANGE;
typedef PRINTPAGERANGE *LPPRINTPAGERANGE;
typedef const PRINTPAGERANGE *PCPRINTPAGERANGE;
typedef struct tagPDEXA {
   DWORD lStructSize;
   HWND hwndOwner;
   HGLOBAL hDevMode;
   HGLOBAL hDevNames;
   HDC hDC;
   DWORD Flags;
   DWORD Flags2;
   DWORD ExclusionFlags;
   DWORD nPageRanges;
   DWORD nMaxPageRanges;
   LPPRINTPAGERANGE lpPageRanges;
   DWORD nMinPage;
   DWORD nMaxPage;
   DWORD nCopies;
   HINSTANCE hInstance;
   LPCSTR lpPrintTemplateName;
   LPUNKNOWN lpCallback;
   DWORD nPropertyPages;
   HPROPSHEETPAGE *lphPropertyPages;
   DWORD nStartPage;
   DWORD dwResultAction;
} PRINTDLGEXA, *LPPRINTDLGEXA;
typedef struct tagPDEXW {
   DWORD lStructSize;
   HWND hwndOwner;
   HGLOBAL hDevMode;
   HGLOBAL hDevNames;
   HDC hDC;
   DWORD Flags;
   DWORD Flags2;
   DWORD ExclusionFlags;
   DWORD nPageRanges;
   DWORD nMaxPageRanges;
   LPPRINTPAGERANGE lpPageRanges;
   DWORD nMinPage;
   DWORD nMaxPage;
   DWORD nCopies;
   HINSTANCE hInstance;
   LPCWSTR lpPrintTemplateName;
   LPUNKNOWN lpCallback;
   DWORD nPropertyPages;
   HPROPSHEETPAGE *lphPropertyPages;
   DWORD nStartPage;
   DWORD dwResultAction;
} PRINTDLGEXW, *LPPRINTDLGEXW;
typedef PRINTDLGEXW PRINTDLGEX;
typedef LPPRINTDLGEXW LPPRINTDLGEX;
WINCOMMDLGAPI HRESULT APIENTRY PrintDlgExA(_Inout_ LPPRINTDLGEXA pPD);
WINCOMMDLGAPI HRESULT APIENTRY PrintDlgExW(_Inout_ LPPRINTDLGEXW pPD);
typedef struct tagDEVNAMES {
   WORD wDriverOffset;
   WORD wDeviceOffset;
   WORD wOutputOffset;
   WORD wDefault;
} DEVNAMES;
typedef DEVNAMES *LPDEVNAMES;
typedef const DEVNAMES *PCDEVNAMES;
WINCOMMDLGAPI DWORD APIENTRY CommDlgExtendedError(VOID);
typedef UINT_PTR (CALLBACK* LPPAGEPAINTHOOK)( HWND, UINT, WPARAM, LPARAM );
typedef UINT_PTR (CALLBACK* LPPAGESETUPHOOK)( HWND, UINT, WPARAM, LPARAM );
typedef struct tagPSDA
{
    DWORD lStructSize;
    HWND hwndOwner;
    HGLOBAL hDevMode;
    HGLOBAL hDevNames;
    DWORD Flags;
    POINT ptPaperSize;
    RECT rtMinMargin;
    RECT rtMargin;
    HINSTANCE hInstance;
    LPARAM lCustData;
    LPPAGESETUPHOOK lpfnPageSetupHook;
    LPPAGEPAINTHOOK lpfnPagePaintHook;
    LPCSTR lpPageSetupTemplateName;
    HGLOBAL hPageSetupTemplate;
} PAGESETUPDLGA, * LPPAGESETUPDLGA;
typedef struct tagPSDW
{
    DWORD lStructSize;
    HWND hwndOwner;
    HGLOBAL hDevMode;
    HGLOBAL hDevNames;
    DWORD Flags;
    POINT ptPaperSize;
    RECT rtMinMargin;
    RECT rtMargin;
    HINSTANCE hInstance;
    LPARAM lCustData;
    LPPAGESETUPHOOK lpfnPageSetupHook;
    LPPAGEPAINTHOOK lpfnPagePaintHook;
    LPCWSTR lpPageSetupTemplateName;
    HGLOBAL hPageSetupTemplate;
} PAGESETUPDLGW, * LPPAGESETUPDLGW;
typedef PAGESETUPDLGW PAGESETUPDLG;
typedef LPPAGESETUPDLGW LPPAGESETUPDLG;
WINCOMMDLGAPI BOOL APIENTRY PageSetupDlgA( LPPAGESETUPDLGA );
WINCOMMDLGAPI BOOL APIENTRY PageSetupDlgW( LPPAGESETUPDLGW );
#endif
#pragma endregion
}
