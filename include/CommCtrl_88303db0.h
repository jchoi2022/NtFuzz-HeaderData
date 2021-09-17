#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef _Return_type_success_(return >= 0) long HRESULT;
extern "C" {
#include <prsht.h>
        #pragma comment(lib, "comctld.lib")
    #pragma comment(linker, "/macres:comctl.rsc")
WINCOMMCTRLAPI void WINAPI InitCommonControls(void);
typedef struct tagINITCOMMONCONTROLSEX {
    DWORD dwSize;
    DWORD dwICC;
} INITCOMMONCONTROLSEX, *LPINITCOMMONCONTROLSEX;
WINCOMMCTRLAPI BOOL WINAPI InitCommonControlsEx(_In_ const INITCOMMONCONTROLSEX *picce);
typedef struct tagCOLORSCHEME {
   DWORD dwSize;
   COLORREF clrBtnHighlight;
   COLORREF clrBtnShadow;
} COLORSCHEME, *LPCOLORSCHEME;
    (fn)((hwnd), (int)(wParam), (NMHDR *)(lParam))
    (LRESULT)(fn)((hwnd), WM_NOTIFY, (WPARAM)(int)(idFrom), (LPARAM)(NMHDR *)(pnmhdr))
typedef struct tagNMTOOLTIPSCREATED
{
    NMHDR hdr;
    HWND hwndToolTips;
} NMTOOLTIPSCREATED, * LPNMTOOLTIPSCREATED;
typedef struct tagNMMOUSE {
    NMHDR hdr;
    DWORD_PTR dwItemSpec;
    DWORD_PTR dwItemData;
    POINT pt;
    LPARAM dwHitInfo;
} NMMOUSE, *LPNMMOUSE;
typedef NMMOUSE NMCLICK;
typedef LPNMMOUSE LPNMCLICK;
typedef struct tagNMOBJECTNOTIFY {
    NMHDR hdr;
    int iItem;
    const IID *piid;
    void *pObject;
    HRESULT hResult;
    DWORD dwFlags;
} NMOBJECTNOTIFY, *LPNMOBJECTNOTIFY;
typedef struct tagNMKEY
{
    NMHDR hdr;
    UINT nVKey;
    UINT uFlags;
} NMKEY, *LPNMKEY;
typedef struct tagNMCHAR {
    NMHDR hdr;
    UINT ch;
    DWORD dwItemPrev;
    DWORD dwItemNext;
} NMCHAR, *LPNMCHAR;
typedef struct tagNMCUSTOMDRAWINFO
{
    NMHDR hdr;
    DWORD dwDrawStage;
    HDC hdc;
    RECT rc;
    DWORD_PTR dwItemSpec;
    UINT uItemState;
    LPARAM lItemlParam;
} NMCUSTOMDRAW, *LPNMCUSTOMDRAW;
typedef struct tagNMTTCUSTOMDRAW
{
    NMCUSTOMDRAW nmcd;
    UINT uDrawFlags;
} NMTTCUSTOMDRAW, *LPNMTTCUSTOMDRAW;
typedef struct tagNMCUSTOMSPLITRECTINFO
{
    NMHDR hdr;
    RECT rcClient;
    RECT rcButton;
    RECT rcSplit;
} NMCUSTOMSPLITRECTINFO, *LPNMCUSTOMSPLITRECTINFO;
struct _IMAGELIST;
typedef struct _IMAGELIST* HIMAGELIST;
typedef struct _IMAGELISTDRAWPARAMS
{
    DWORD cbSize;
    HIMAGELIST himl;
    int i;
    HDC hdcDst;
    int x;
    int y;
    int cx;
    int cy;
    int xBitmap;
    int yBitmap;
    COLORREF rgbBk;
    COLORREF rgbFg;
    UINT fStyle;
    DWORD dwRop;
} IMAGELISTDRAWPARAMS, *LPIMAGELISTDRAWPARAMS;
WINCOMMCTRLAPI HIMAGELIST WINAPI ImageList_Create(int cx, int cy, UINT flags, int cInitial, int cGrow);
WINCOMMCTRLAPI BOOL WINAPI ImageList_Destroy(_In_opt_ HIMAGELIST himl);
WINCOMMCTRLAPI int WINAPI ImageList_GetImageCount(_In_ HIMAGELIST himl);
WINCOMMCTRLAPI BOOL WINAPI ImageList_SetImageCount(_In_ HIMAGELIST himl, _In_ UINT uNewCount);
WINCOMMCTRLAPI int WINAPI ImageList_Add(_In_ HIMAGELIST himl, _In_ HBITMAP hbmImage, _In_opt_ HBITMAP hbmMask);
WINCOMMCTRLAPI int WINAPI ImageList_ReplaceIcon(_In_ HIMAGELIST himl, _In_ int i, _In_ HICON hicon);
WINCOMMCTRLAPI COLORREF WINAPI ImageList_SetBkColor(_In_ HIMAGELIST himl, _In_ COLORREF clrBk);
WINCOMMCTRLAPI COLORREF WINAPI ImageList_GetBkColor(_In_ HIMAGELIST himl);
WINCOMMCTRLAPI BOOL WINAPI ImageList_SetOverlayImage(_In_ HIMAGELIST himl, _In_ int iImage, _In_ int iOverlay);
WINCOMMCTRLAPI BOOL WINAPI ImageList_Draw(_In_ HIMAGELIST himl, _In_ int i, _In_ HDC hdcDst, _In_ int x, _In_ int y, _In_ UINT fStyle);
WINCOMMCTRLAPI BOOL WINAPI ImageList_Replace(_In_ HIMAGELIST himl, _In_ int i, _In_ HBITMAP hbmImage, _In_opt_ HBITMAP hbmMask);
WINCOMMCTRLAPI int WINAPI ImageList_AddMasked(_In_ HIMAGELIST himl, _In_ HBITMAP hbmImage, _In_ COLORREF crMask);
WINCOMMCTRLAPI BOOL WINAPI ImageList_DrawEx(_In_ HIMAGELIST himl, _In_ int i, _In_ HDC hdcDst, _In_ int x, _In_ int y, _In_ int dx, _In_ int dy, _In_ COLORREF rgbBk, _In_ COLORREF rgbFg, _In_ UINT fStyle);
WINCOMMCTRLAPI BOOL WINAPI ImageList_DrawIndirect(_In_ IMAGELISTDRAWPARAMS* pimldp);
WINCOMMCTRLAPI BOOL WINAPI ImageList_Remove(_In_ HIMAGELIST himl, _In_ int i);
WINCOMMCTRLAPI HICON WINAPI ImageList_GetIcon(_In_ HIMAGELIST himl, _In_ int i, _In_ UINT flags);
WINCOMMCTRLAPI HIMAGELIST WINAPI ImageList_LoadImageA(HINSTANCE hi, LPCSTR lpbmp, int cx, int cGrow, COLORREF crMask, UINT uType, UINT uFlags);
WINCOMMCTRLAPI HIMAGELIST WINAPI ImageList_LoadImageW(HINSTANCE hi, LPCWSTR lpbmp, int cx, int cGrow, COLORREF crMask, UINT uType, UINT uFlags);
WINCOMMCTRLAPI BOOL WINAPI ImageList_Copy(_In_ HIMAGELIST himlDst, _In_ int iDst, _In_ HIMAGELIST himlSrc, _In_ int iSrc, _In_ UINT uFlags);
WINCOMMCTRLAPI BOOL WINAPI ImageList_BeginDrag(_In_ HIMAGELIST himlTrack, _In_ int iTrack, _In_ int dxHotspot, _In_ int dyHotspot);
WINCOMMCTRLAPI void WINAPI ImageList_EndDrag(void);
WINCOMMCTRLAPI BOOL WINAPI ImageList_DragEnter(HWND hwndLock, int x, int y);
WINCOMMCTRLAPI BOOL WINAPI ImageList_DragLeave(HWND hwndLock);
WINCOMMCTRLAPI BOOL WINAPI ImageList_DragMove(int x, int y);
WINCOMMCTRLAPI BOOL WINAPI ImageList_SetDragCursorImage(_In_ HIMAGELIST himlDrag, _In_ int iDrag, _In_ int dxHotspot, _In_ int dyHotspot);
WINCOMMCTRLAPI BOOL WINAPI ImageList_DragShowNolock(BOOL fShow);
_Success_(return != NULL) WINCOMMCTRLAPI HIMAGELIST WINAPI ImageList_GetDragImage(_Out_opt_ POINT *ppt, _Out_opt_ POINT *pptHotspot);
struct IStream;
WINCOMMCTRLAPI HIMAGELIST WINAPI ImageList_Read(_In_ struct IStream *pstm);
WINCOMMCTRLAPI BOOL WINAPI ImageList_Write(_In_ HIMAGELIST himl, _In_ struct IStream *pstm);
WINCOMMCTRLAPI HRESULT WINAPI ImageList_ReadEx(_In_ DWORD dwFlags, _In_ struct IStream *pstm, _In_ REFIID riid, _Outptr_ PVOID* ppv);
WINCOMMCTRLAPI HRESULT WINAPI ImageList_WriteEx(_In_ HIMAGELIST himl, _In_ DWORD dwFlags, _In_ struct IStream *pstm);
typedef struct _IMAGEINFO
{
    HBITMAP hbmImage;
    HBITMAP hbmMask;
    int Unused1;
    int Unused2;
    RECT rcImage;
} IMAGEINFO, *LPIMAGEINFO;
_Success_(return) WINCOMMCTRLAPI BOOL WINAPI ImageList_GetIconSize(_In_ HIMAGELIST himl, _Out_opt_ int *cx, _Out_opt_ int *cy);
_Success_(return) WINCOMMCTRLAPI BOOL WINAPI ImageList_SetIconSize(_In_ HIMAGELIST himl, _In_ int cx, _In_ int cy);
_Success_(return) WINCOMMCTRLAPI BOOL WINAPI ImageList_GetImageInfo(_In_ HIMAGELIST himl, _In_ int i, _Out_ IMAGEINFO *pImageInfo);
WINCOMMCTRLAPI HIMAGELIST WINAPI ImageList_Merge(_In_ HIMAGELIST himl1, _In_ int i1, _In_ HIMAGELIST himl2, _In_ int i2, _In_ int dx, _In_ int dy);
WINCOMMCTRLAPI HIMAGELIST WINAPI ImageList_Duplicate(_In_ HIMAGELIST himl);
WINCOMMCTRLAPI HRESULT WINAPI HIMAGELIST_QueryInterface(_In_ HIMAGELIST himl, _In_ REFIID riid, _Outptr_ void **ppv);
FORCEINLINE HIMAGELIST IImageListToHIMAGELIST(struct IImageList *himl)
{
    return reinterpret_cast<HIMAGELIST>(himl);
}
typedef struct _HD_TEXTFILTERA
{
    LPSTR pszText;
    INT cchTextMax;
} HD_TEXTFILTERA, *LPHD_TEXTFILTERA;
typedef struct _HD_TEXTFILTERW
{
    LPWSTR pszText;
    INT cchTextMax;
} HD_TEXTFILTERW, *LPHD_TEXTFILTERW;
typedef struct _HD_ITEMA
{
    UINT mask;
    int cxy;
    LPSTR pszText;
    HBITMAP hbm;
    int cchTextMax;
    int fmt;
    LPARAM lParam;
    int iImage;
    int iOrder;
    UINT type;
    void * pvFilter;
    UINT state;
} HDITEMA, *LPHDITEMA;
typedef struct _HD_ITEMW
{
    UINT mask;
    int cxy;
    LPWSTR pszText;
    HBITMAP hbm;
    int cchTextMax;
    int fmt;
    LPARAM lParam;
    int iImage;
    int iOrder;
    UINT type;
    void * pvFilter;
    UINT state;
} HDITEMW, *LPHDITEMW;
    (int)SNDMSG((hwndHD), HDM_GETITEMCOUNT, 0, 0L)
    (int)SNDMSG((hwndHD), HDM_INSERTITEM, (WPARAM)(int)(i), (LPARAM)(const HD_ITEM *)(phdi))
    (BOOL)SNDMSG((hwndHD), HDM_DELETEITEM, (WPARAM)(int)(i), 0L)
    (BOOL)SNDMSG((hwndHD), HDM_GETITEM, (WPARAM)(int)(i), (LPARAM)(HD_ITEM *)(phdi))
    (BOOL)SNDMSG((hwndHD), HDM_SETITEM, (WPARAM)(int)(i), (LPARAM)(const HD_ITEM *)(phdi))
typedef struct _HD_LAYOUT
{
    RECT *prc;
    WINDOWPOS *pwpos;
} HDLAYOUT, *LPHDLAYOUT;
    (BOOL)SNDMSG((hwndHD), HDM_LAYOUT, 0, (LPARAM)(HD_LAYOUT *)(playout))
typedef struct _HD_HITTESTINFO
{
    POINT pt;
    UINT flags;
    int iItem;
} HDHITTESTINFO, *LPHDHITTESTINFO;
        (BOOL)SNDMSG((hwnd), HDM_GETITEMRECT, (WPARAM)(iItem), (LPARAM)(lprc))
        (HIMAGELIST)SNDMSG((hwnd), HDM_SETIMAGELIST, HDSIL_NORMAL, (LPARAM)(himl))
        (HIMAGELIST)SNDMSG((hwnd), HDM_SETIMAGELIST, HDSIL_STATE, (LPARAM)(himl))
        (HIMAGELIST)SNDMSG((hwnd), HDM_GETIMAGELIST, HDSIL_NORMAL, 0)
        (HIMAGELIST)SNDMSG((hwnd), HDM_GETIMAGELIST, HDSIL_STATE, 0)
        (int)SNDMSG((hwnd), HDM_ORDERTOINDEX, (WPARAM)(i), 0)
        (HIMAGELIST)SNDMSG((hwnd), HDM_CREATEDRAGIMAGE, (WPARAM)(i), 0)
        (BOOL)SNDMSG((hwnd), HDM_GETORDERARRAY, (WPARAM)(iCount), (LPARAM)(lpi))
        (BOOL)SNDMSG((hwnd), HDM_SETORDERARRAY, (WPARAM)(iCount), (LPARAM)(lpi))
        (int)SNDMSG((hwnd), HDM_SETHOTDIVIDER, (WPARAM)(fPos), (LPARAM)(dw))
        (int)SNDMSG((hwnd), HDM_SETBITMAPMARGIN, (WPARAM)(iWidth), 0)
        (int)SNDMSG((hwnd), HDM_GETBITMAPMARGIN, 0, 0)
    (BOOL)SNDMSG((hwnd), HDM_SETUNICODEFORMAT, (WPARAM)(fUnicode), 0)
    (BOOL)SNDMSG((hwnd), HDM_GETUNICODEFORMAT, 0, 0)
        (int)SNDMSG((hwnd), HDM_SETFILTERCHANGETIMEOUT, 0, (LPARAM)(i))
        (int)SNDMSG((hwnd), HDM_EDITFILTER, (WPARAM)(i), MAKELPARAM(fDiscardChanges, 0))
        (int)SNDMSG((hwnd), HDM_CLEARFILTER, (WPARAM)(i), 0)
        (int)SNDMSG((hwnd), HDM_CLEARFILTER, (WPARAM)-1, 0)
        (BOOL)SNDMSG((hwnd), HDM_GETITEMDROPDOWNRECT, (WPARAM)(iItem), (LPARAM)(lprc))
        (BOOL)SNDMSG((hwnd), HDM_GETOVERFLOWRECT, 0, (LPARAM)(lprc))
        (int)SNDMSG((hwnd), HDM_GETFOCUSEDITEM, (WPARAM)(0), (LPARAM)(0))
        (BOOL)SNDMSG((hwnd), HDM_SETFOCUSEDITEM, (WPARAM)(0), (LPARAM)(iItem))
typedef struct tagNMHEADERA
{
    NMHDR hdr;
    int iItem;
    int iButton;
    HDITEMA *pitem;
} NMHEADERA, *LPNMHEADERA;
typedef struct tagNMHEADERW
{
    NMHDR hdr;
    int iItem;
    int iButton;
    HDITEMW *pitem;
} NMHEADERW, *LPNMHEADERW;
typedef struct tagNMHDDISPINFOW
{
    NMHDR hdr;
    int iItem;
    UINT mask;
    LPWSTR pszText;
    int cchTextMax;
    int iImage;
    LPARAM lParam;
} NMHDDISPINFOW, *LPNMHDDISPINFOW;
typedef struct tagNMHDDISPINFOA
{
    NMHDR hdr;
    int iItem;
    UINT mask;
    LPSTR pszText;
    int cchTextMax;
    int iImage;
    LPARAM lParam;
} NMHDDISPINFOA, *LPNMHDDISPINFOA;
typedef struct tagNMHDFILTERBTNCLICK
{
    NMHDR hdr;
    INT iItem;
    RECT rc;
} NMHDFILTERBTNCLICK, *LPNMHDFILTERBTNCLICK;
typedef struct _TBBUTTON {
    int iBitmap;
    int idCommand;
    BYTE fsState;
    BYTE fsStyle;
    BYTE bReserved[6];
    DWORD_PTR dwData;
    INT_PTR iString;
} TBBUTTON, NEAR* PTBBUTTON, *LPTBBUTTON;
typedef const TBBUTTON *LPCTBBUTTON;
typedef struct _COLORMAP {
    COLORREF from;
    COLORREF to;
} COLORMAP, *LPCOLORMAP;
WINCOMMCTRLAPI HWND WINAPI CreateToolbarEx(HWND hwnd, DWORD ws, UINT wID, int nBitmaps,
                        HINSTANCE hBMInst, UINT_PTR wBMID, LPCTBBUTTON lpButtons,
                        int iNumButtons, int dxButton, int dyButton,
                        int dxBitmap, int dyBitmap, UINT uStructSize);
WINCOMMCTRLAPI HBITMAP WINAPI CreateMappedBitmap(HINSTANCE hInstance, INT_PTR idBitmap,
                                  UINT wFlags, _In_opt_ LPCOLORMAP lpColorMap,
                                  int iNumMaps);
typedef struct _NMTBCUSTOMDRAW {
    NMCUSTOMDRAW nmcd;
    HBRUSH hbrMonoDither;
    HBRUSH hbrLines;
    HPEN hpenLines;
    COLORREF clrText;
    COLORREF clrMark;
    COLORREF clrTextHighlight;
    COLORREF clrBtnFace;
    COLORREF clrBtnHighlight;
    COLORREF clrHighlightHotTrack;
    RECT rcText;
    int nStringBkMode;
    int nHLStringBkMode;
    int iListGap;
} NMTBCUSTOMDRAW, * LPNMTBCUSTOMDRAW;
typedef struct tagTBADDBITMAP {
        HINSTANCE hInst;
        UINT_PTR nID;
} TBADDBITMAP, *LPTBADDBITMAP;
typedef struct tagTBSAVEPARAMSA {
    HKEY hkr;
    LPCSTR pszSubKey;
    LPCSTR pszValueName;
} TBSAVEPARAMSA, *LPTBSAVEPARAMSA;
typedef struct tagTBSAVEPARAMSW {
    HKEY hkr;
    LPCWSTR pszSubKey;
    LPCWSTR pszValueName;
} TBSAVEPARAMSW, *LPTBSAVEPARAMW;
typedef struct {
    int iButton;
    DWORD dwFlags;
} TBINSERTMARK, * LPTBINSERTMARK;
typedef struct {
    HINSTANCE hInstOld;
    UINT_PTR nIDOld;
    HINSTANCE hInstNew;
    UINT_PTR nIDNew;
    int nButtons;
} TBREPLACEBITMAP, *LPTBREPLACEBITMAP;
typedef struct {
    UINT cbSize;
    DWORD dwMask;
    int idCommand;
    int iImage;
    BYTE fsState;
    BYTE fsStyle;
    WORD cx;
    DWORD_PTR lParam;
    LPSTR pszText;
    int cchText;
} TBBUTTONINFOA, *LPTBBUTTONINFOA;
typedef struct {
    UINT cbSize;
    DWORD dwMask;
    int idCommand;
    int iImage;
    BYTE fsState;
    BYTE fsStyle;
    WORD cx;
    DWORD_PTR lParam;
    LPWSTR pszText;
    int cchText;
} TBBUTTONINFOW, *LPTBBUTTONINFOW;
typedef struct {
    UINT cbSize;
    DWORD dwMask;
    int cxPad;
    int cyPad;
    int cxBarPad;
    int cyBarPad;
    int cxButtonSpacing;
    int cyButtonSpacing;
} TBMETRICS, * LPTBMETRICS;
typedef struct tagNMTBHOTITEM
{
    NMHDR hdr;
    int idOld;
    int idNew;
    DWORD dwFlags;
} NMTBHOTITEM, * LPNMTBHOTITEM;
typedef struct tagNMTBSAVE
{
    NMHDR hdr;
    DWORD* pData;
    DWORD* pCurrent;
    UINT cbData;
    int iItem;
    int cButtons;
    TBBUTTON tbButton;
} NMTBSAVE, *LPNMTBSAVE;
typedef struct tagNMTBRESTORE
{
    NMHDR hdr;
    DWORD* pData;
    DWORD* pCurrent;
    UINT cbData;
    int iItem;
    int cButtons;
    int cbBytesPerRecord;
    TBBUTTON tbButton;
} NMTBRESTORE, *LPNMTBRESTORE;
typedef struct tagNMTBGETINFOTIPA
{
    NMHDR hdr;
    LPSTR pszText;
    int cchTextMax;
    int iItem;
    LPARAM lParam;
} NMTBGETINFOTIPA, *LPNMTBGETINFOTIPA;
typedef struct tagNMTBGETINFOTIPW
{
    NMHDR hdr;
    LPWSTR pszText;
    int cchTextMax;
    int iItem;
    LPARAM lParam;
} NMTBGETINFOTIPW, *LPNMTBGETINFOTIPW;
typedef struct {
    NMHDR hdr;
    DWORD dwMask;
    int idCommand;
    DWORD_PTR lParam;
    int iImage;
    LPSTR pszText;
    int cchText;
} NMTBDISPINFOA, *LPNMTBDISPINFOA;
typedef struct {
    NMHDR hdr;
    DWORD dwMask;
    int idCommand;
    DWORD_PTR lParam;
    int iImage;
    LPWSTR pszText;
    int cchText;
} NMTBDISPINFOW, *LPNMTBDISPINFOW;
typedef struct tagNMTOOLBARA {
    NMHDR hdr;
    int iItem;
    TBBUTTON tbButton;
    int cchText;
    LPSTR pszText;
    RECT rcButton;
} NMTOOLBARA, *LPNMTOOLBARA;
typedef struct tagNMTOOLBARW {
    NMHDR hdr;
    int iItem;
    TBBUTTON tbButton;
    int cchText;
    LPWSTR pszText;
    RECT rcButton;
} NMTOOLBARW, *LPNMTOOLBARW;
typedef struct tagREBARINFO
{
    UINT cbSize;
    UINT fMask;
    HIMAGELIST himl;
} REBARINFO, *LPREBARINFO;
typedef struct tagREBARBANDINFOA
{
    UINT cbSize;
    UINT fMask;
    UINT fStyle;
    COLORREF clrFore;
    COLORREF clrBack;
    LPSTR lpText;
    UINT cch;
    int iImage;
    HWND hwndChild;
    UINT cxMinChild;
    UINT cyMinChild;
    UINT cx;
    HBITMAP hbmBack;
    UINT wID;
    UINT cyChild;
    UINT cyMaxChild;
    UINT cyIntegral;
    UINT cxIdeal;
    LPARAM lParam;
    UINT cxHeader;
    RECT rcChevronLocation;
    UINT uChevronState;
} REBARBANDINFOA, *LPREBARBANDINFOA;
typedef REBARBANDINFOA CONST *LPCREBARBANDINFOA;
typedef struct tagREBARBANDINFOW
{
    UINT cbSize;
    UINT fMask;
    UINT fStyle;
    COLORREF clrFore;
    COLORREF clrBack;
    LPWSTR lpText;
    UINT cch;
    int iImage;
    HWND hwndChild;
    UINT cxMinChild;
    UINT cyMinChild;
    UINT cx;
    HBITMAP hbmBack;
    UINT wID;
    UINT cyChild;
    UINT cyMaxChild;
    UINT cyIntegral;
    UINT cxIdeal;
    LPARAM lParam;
    UINT cxHeader;
    RECT rcChevronLocation;
    UINT uChevronState;
} REBARBANDINFOW, *LPREBARBANDINFOW;
typedef REBARBANDINFOW CONST *LPCREBARBANDINFOW;
typedef struct tagNMREBARCHILDSIZE
{
    NMHDR hdr;
    UINT uBand;
    UINT wID;
    RECT rcChild;
    RECT rcBand;
} NMREBARCHILDSIZE, *LPNMREBARCHILDSIZE;
typedef struct tagNMREBAR
{
    NMHDR hdr;
    DWORD dwMask;
    UINT uBand;
    UINT fStyle;
    UINT wID;
    LPARAM lParam;
} NMREBAR, *LPNMREBAR;
typedef struct tagNMRBAUTOSIZE
{
    NMHDR hdr;
    BOOL fChanged;
    RECT rcTarget;
    RECT rcActual;
} NMRBAUTOSIZE, *LPNMRBAUTOSIZE;
typedef struct tagNMREBARCHEVRON
{
    NMHDR hdr;
    UINT uBand;
    UINT wID;
    LPARAM lParam;
    RECT rc;
    LPARAM lParamNM;
} NMREBARCHEVRON, *LPNMREBARCHEVRON;
typedef struct tagNMREBARAUTOBREAK
{
    NMHDR hdr;
    UINT uBand;
    UINT wID;
    LPARAM lParam;
    UINT uMsg;
    UINT fStyleCurrent;
    BOOL fAutoBreak;
} NMREBARAUTOBREAK, *LPNMREBARAUTOBREAK;
typedef struct _RB_HITTESTINFO
{
    POINT pt;
    UINT flags;
    int iBand;
} RBHITTESTINFO, *LPRBHITTESTINFO;
typedef struct tagTOOLINFOA {
    UINT cbSize;
    UINT uFlags;
    HWND hwnd;
    UINT_PTR uId;
    RECT rect;
    HINSTANCE hinst;
    LPSTR lpszText;
    LPARAM lParam;
    void *lpReserved;
} TTTOOLINFOA, NEAR *PTOOLINFOA, *LPTTTOOLINFOA;
typedef struct tagTOOLINFOW {
    UINT cbSize;
    UINT uFlags;
    HWND hwnd;
    UINT_PTR uId;
    RECT rect;
    HINSTANCE hinst;
    LPWSTR lpszText;
    LPARAM lParam;
    void *lpReserved;
} TTTOOLINFOW, NEAR *PTOOLINFOW, *LPTTTOOLINFOW;
typedef struct _TTGETTITLE
{
    DWORD dwSize;
    UINT uTitleBitmap;
    UINT cch;
    WCHAR* pszTitle;
} TTGETTITLE, *PTTGETTITLE;
typedef struct _TT_HITTESTINFOA {
    HWND hwnd;
    POINT pt;
    TTTOOLINFOA ti;
} TTHITTESTINFOA, *LPTTHITTESTINFOA;
typedef struct _TT_HITTESTINFOW {
    HWND hwnd;
    POINT pt;
    TTTOOLINFOW ti;
} TTHITTESTINFOW, *LPTTHITTESTINFOW;
typedef struct tagNMTTDISPINFOA {
    NMHDR hdr;
    LPSTR lpszText;
    char szText[80];
    HINSTANCE hinst;
    UINT uFlags;
    LPARAM lParam;
} NMTTDISPINFOA, *LPNMTTDISPINFOA;
typedef struct tagNMTTDISPINFOW {
    NMHDR hdr;
    LPWSTR lpszText;
    WCHAR szText[80];
    HINSTANCE hinst;
    UINT uFlags;
    LPARAM lParam;
} NMTTDISPINFOW, *LPNMTTDISPINFOW;
WINCOMMCTRLAPI void WINAPI DrawStatusTextA(HDC hDC, LPCRECT lprc, LPCSTR pszText, UINT uFlags);
WINCOMMCTRLAPI void WINAPI DrawStatusTextW(HDC hDC, LPCRECT lprc, LPCWSTR pszText, UINT uFlags);
WINCOMMCTRLAPI HWND WINAPI CreateStatusWindowA(LONG style, LPCSTR lpszText, HWND hwndParent, UINT wID);
WINCOMMCTRLAPI HWND WINAPI CreateStatusWindowW(LONG style, LPCWSTR lpszText, HWND hwndParent, UINT wID);
WINCOMMCTRLAPI void WINAPI MenuHelp(UINT uMsg, WPARAM wParam, LPARAM lParam, HMENU hMainMenu, HINSTANCE hInst, HWND hwndStatus, _In_reads_(_Inexpressible_(2 + 2n && n >= 1)) UINT *lpwIDs);
WINCOMMCTRLAPI BOOL WINAPI ShowHideMenuCtl(_In_ HWND hWnd, _In_ UINT_PTR uFlags, _In_z_ LPINT lpInfo);
WINCOMMCTRLAPI void WINAPI GetEffectiveClientRect(_In_ HWND hWnd, _Out_ LPRECT lprc, _In_z_ const INT *lpInfo);
typedef struct tagTRBTHUMBPOSCHANGING
{
    NMHDR hdr;
    DWORD dwPos;
    int nReason;
} NMTRBTHUMBPOSCHANGING;
typedef struct tagDRAGLISTINFO {
    UINT uNotification;
    HWND hWnd;
    POINT ptCursor;
} DRAGLISTINFO, *LPDRAGLISTINFO;
WINCOMMCTRLAPI BOOL WINAPI MakeDragList(HWND hLB);
WINCOMMCTRLAPI void WINAPI DrawInsert(HWND handParent, HWND hLB, int nItem);
WINCOMMCTRLAPI int WINAPI LBItemFromPt(HWND hLB, POINT pt, BOOL bAutoScroll);
typedef struct _UDACCEL {
    UINT nSec;
    UINT nInc;
} UDACCEL, *LPUDACCEL;
WINCOMMCTRLAPI HWND WINAPI CreateUpDownControl(DWORD dwStyle, int x, int y, int cx, int cy,
                                HWND hParent, int nID, HINSTANCE hInst,
                                HWND hBuddy,
                                int nUpper, int nLower, int nPos);
typedef struct _NM_UPDOWN
{
    NMHDR hdr;
    int iPos;
    int iDelta;
} NMUPDOWN, *LPNMUPDOWN;
typedef struct
{
   int iLow;
   int iHigh;
} PBRANGE, *PPBRANGE;
typedef struct tagLITEM
{
    UINT mask ;
    int iLink ;
    UINT state ;
    UINT stateMask ;
    WCHAR szID[MAX_LINKID_TEXT] ;
    WCHAR szUrl[L_MAX_URL_LENGTH] ;
} LITEM, * PLITEM ;
typedef struct tagLHITTESTINFO
{
    POINT pt ;
    LITEM item ;
} LHITTESTINFO, *PLHITTESTINFO ;
typedef struct tagNMLINK
{
    NMHDR hdr;
    LITEM item ;
} NMLINK, *PNMLINK;
    (BOOL)SNDMSG((hwnd), LVM_SETUNICODEFORMAT, (WPARAM)(fUnicode), 0)
    (BOOL)SNDMSG((hwnd), LVM_GETUNICODEFORMAT, 0, 0)
    (COLORREF)SNDMSG((hwnd), LVM_GETBKCOLOR, 0, 0L)
    (BOOL)SNDMSG((hwnd), LVM_SETBKCOLOR, 0, (LPARAM)(COLORREF)(clrBk))
    (HIMAGELIST)SNDMSG((hwnd), LVM_GETIMAGELIST, (WPARAM)(INT)(iImageList), 0L)
    (HIMAGELIST)SNDMSG((hwnd), LVM_SETIMAGELIST, (WPARAM)(iImageList), (LPARAM)(HIMAGELIST)(himl))
    (int)SNDMSG((hwnd), LVM_GETITEMCOUNT, 0, 0L)
typedef struct tagLVITEMA
{
    UINT mask;
    int iItem;
    int iSubItem;
    UINT state;
    UINT stateMask;
    LPSTR pszText;
    int cchTextMax;
    int iImage;
    LPARAM lParam;
    int iIndent;
    int iGroupId;
    UINT cColumns;
    PUINT puColumns;
    int* piColFmt;
    int iGroup;
} LVITEMA, *LPLVITEMA;
typedef struct tagLVITEMW
{
    UINT mask;
    int iItem;
    int iSubItem;
    UINT state;
    UINT stateMask;
    LPWSTR pszText;
    int cchTextMax;
    int iImage;
    LPARAM lParam;
    int iIndent;
    int iGroupId;
    UINT cColumns;
    PUINT puColumns;
    int* piColFmt;
    int iGroup;
} LVITEMW, *LPLVITEMW;
    (BOOL)SNDMSG((hwnd), LVM_GETITEM, 0, (LPARAM)(LV_ITEM *)(pitem))
    (BOOL)SNDMSG((hwnd), LVM_SETITEM, 0, (LPARAM)(const LV_ITEM *)(pitem))
    (int)SNDMSG((hwnd), LVM_INSERTITEM, 0, (LPARAM)(const LV_ITEM *)(pitem))
    (BOOL)SNDMSG((hwnd), LVM_DELETEITEM, (WPARAM)(int)(i), 0L)
    (BOOL)SNDMSG((hwnd), LVM_DELETEALLITEMS, 0, 0L)
    (BOOL)SNDMSG((hwnd), LVM_GETCALLBACKMASK, 0, 0)
    (BOOL)SNDMSG((hwnd), LVM_SETCALLBACKMASK, (WPARAM)(UINT)(mask), 0)
    (int)SNDMSG((hwnd), LVM_GETNEXTITEM, (WPARAM)(int)(i), MAKELPARAM((flags), 0))
typedef struct tagLVFINDINFOA
{
    UINT flags;
    LPCSTR psz;
    LPARAM lParam;
    POINT pt;
    UINT vkDirection;
} LVFINDINFOA, *LPFINDINFOA;
typedef struct tagLVFINDINFOW
{
    UINT flags;
    LPCWSTR psz;
    LPARAM lParam;
    POINT pt;
    UINT vkDirection;
} LVFINDINFOW, *LPFINDINFOW;
    (int)SNDMSG((hwnd), LVM_FINDITEM, (WPARAM)(int)(iStart), (LPARAM)(const LV_FINDINFO *)(plvfi))
     (BOOL)SNDMSG((hwnd), LVM_GETITEMRECT, (WPARAM)(int)(i), \
           ((prc) ? (((RECT *)(prc))->left = (code),(LPARAM)(RECT *)(prc)) : (LPARAM)(RECT *)NULL))
    (BOOL)SNDMSG((hwndLV), LVM_SETITEMPOSITION, (WPARAM)(int)(i), MAKELPARAM((x), (y)))
    (BOOL)SNDMSG((hwndLV), LVM_GETITEMPOSITION, (WPARAM)(int)(i), (LPARAM)(POINT *)(ppt))
    (int)SNDMSG((hwndLV), LVM_GETSTRINGWIDTH, 0, (LPARAM)(LPCTSTR)(psz))
typedef struct tagLVHITTESTINFO
{
    POINT pt;
    UINT flags;
    int iItem;
    int iSubItem;
    int iGroup;
} LVHITTESTINFO, *LPLVHITTESTINFO;
    (int)SNDMSG((hwndLV), LVM_HITTEST, 0, (LPARAM)(LV_HITTESTINFO *)(pinfo))
    (int)SNDMSG((hwndLV), LVM_HITTEST, (WPARAM)-1, (LPARAM)(LV_HITTESTINFO *)(pinfo))
    (BOOL)SNDMSG((hwndLV), LVM_ENSUREVISIBLE, (WPARAM)(int)(i), MAKELPARAM((fPartialOK), 0))
    (BOOL)SNDMSG((hwndLV), LVM_SCROLL, (WPARAM)(int)(dx), (LPARAM)(int)(dy))
    (BOOL)SNDMSG((hwndLV), LVM_REDRAWITEMS, (WPARAM)(int)(iFirst), (LPARAM)(int)(iLast))
    (BOOL)SNDMSG((hwndLV), LVM_ARRANGE, (WPARAM)(UINT)(code), 0L)
    (HWND)SNDMSG((hwndLV), LVM_EDITLABEL, (WPARAM)(int)(i), 0L)
    (HWND)SNDMSG((hwndLV), LVM_GETEDITCONTROL, 0, 0L)
typedef struct tagLVCOLUMNA
{
    UINT mask;
    int fmt;
    int cx;
    LPSTR pszText;
    int cchTextMax;
    int iSubItem;
    int iImage;
    int iOrder;
    int cxMin;
    int cxDefault;
    int cxIdeal;
} LVCOLUMNA, *LPLVCOLUMNA;
typedef struct tagLVCOLUMNW
{
    UINT mask;
    int fmt;
    int cx;
    LPWSTR pszText;
    int cchTextMax;
    int iSubItem;
    int iImage;
    int iOrder;
    int cxMin;
    int cxDefault;
    int cxIdeal;
} LVCOLUMNW, *LPLVCOLUMNW;
    (BOOL)SNDMSG((hwnd), LVM_GETCOLUMN, (WPARAM)(int)(iCol), (LPARAM)(LV_COLUMN *)(pcol))
    (BOOL)SNDMSG((hwnd), LVM_SETCOLUMN, (WPARAM)(int)(iCol), (LPARAM)(const LV_COLUMN *)(pcol))
    (int)SNDMSG((hwnd), LVM_INSERTCOLUMN, (WPARAM)(int)(iCol), (LPARAM)(const LV_COLUMN *)(pcol))
    (BOOL)SNDMSG((hwnd), LVM_DELETECOLUMN, (WPARAM)(int)(iCol), 0)
    (int)SNDMSG((hwnd), LVM_GETCOLUMNWIDTH, (WPARAM)(int)(iCol), 0)
    (BOOL)SNDMSG((hwnd), LVM_SETCOLUMNWIDTH, (WPARAM)(int)(iCol), MAKELPARAM((cx), 0))
    (HWND)SNDMSG((hwnd), LVM_GETHEADER, 0, 0L)
    (HIMAGELIST)SNDMSG((hwnd), LVM_CREATEDRAGIMAGE, (WPARAM)(int)(i), (LPARAM)(LPPOINT)(lpptUpLeft))
    (BOOL)SNDMSG((hwnd), LVM_GETVIEWRECT, 0, (LPARAM)(RECT *)(prc))
    (COLORREF)SNDMSG((hwnd), LVM_GETTEXTCOLOR, 0, 0L)
    (BOOL)SNDMSG((hwnd), LVM_SETTEXTCOLOR, 0, (LPARAM)(COLORREF)(clrText))
    (COLORREF)SNDMSG((hwnd), LVM_GETTEXTBKCOLOR, 0, 0L)
    (BOOL)SNDMSG((hwnd), LVM_SETTEXTBKCOLOR, 0, (LPARAM)(COLORREF)(clrTextBk))
    (int)SNDMSG((hwndLV), LVM_GETTOPINDEX, 0, 0)
    (int)SNDMSG((hwndLV), LVM_GETCOUNTPERPAGE, 0, 0)
    (BOOL)SNDMSG((hwndLV), LVM_GETORIGIN, (WPARAM)0, (LPARAM)(POINT *)(ppt))
    (BOOL)SNDMSG((hwndLV), LVM_UPDATE, (WPARAM)(i), 0L)
{ LV_ITEM _macro_lvi;\
  _macro_lvi.stateMask = (mask);\
  _macro_lvi.state = (data);\
  SNDMSG((hwndLV), LVM_SETITEMSTATE, (WPARAM)(i), (LPARAM)(LV_ITEM *)&_macro_lvi);\
}
  ListView_SetItemState(hwndLV, i, INDEXTOSTATEIMAGEMASK((fCheck)?2:1), LVIS_STATEIMAGEMASK)
   (UINT)SNDMSG((hwndLV), LVM_GETITEMSTATE, (WPARAM)(i), (LPARAM)(mask))
   ((((UINT)(SNDMSG((hwndLV), LVM_GETITEMSTATE, (WPARAM)(i), LVIS_STATEIMAGEMASK))) >> 12) -1)
{ LV_ITEM _macro_lvi;\
  _macro_lvi.iSubItem = (iSubItem_);\
  _macro_lvi.cchTextMax = (cchTextMax_);\
  _macro_lvi.pszText = (pszText_);\
  SNDMSG((hwndLV), LVM_GETITEMTEXT, (WPARAM)(i), (LPARAM)(LV_ITEM *)&_macro_lvi);\
}
{ LV_ITEM _macro_lvi;\
  _macro_lvi.iSubItem = (iSubItem_);\
  _macro_lvi.pszText = (pszText_);\
  SNDMSG((hwndLV), LVM_SETITEMTEXT, (WPARAM)(i), (LPARAM)(LV_ITEM *)&_macro_lvi);\
}
  SNDMSG((hwndLV), LVM_SETITEMCOUNT, (WPARAM)(cItems), 0)
  SNDMSG((hwndLV), LVM_SETITEMCOUNT, (WPARAM)(cItems), (LPARAM)(dwFlags))
typedef int (CALLBACK *PFNLVCOMPARE)(LPARAM, LPARAM, LPARAM);
  (BOOL)SNDMSG((hwndLV), LVM_SORTITEMS, (WPARAM)(LPARAM)(_lPrm), \
  (LPARAM)(PFNLVCOMPARE)(_pfnCompare))
{ POINT ptNewPos; \
    ptNewPos.x = (x0); ptNewPos.y = (y0); \
    SNDMSG((hwndLV), LVM_SETITEMPOSITION32, (WPARAM)(int)(i), (LPARAM)&ptNewPos); \
}
    (UINT)SNDMSG((hwndLV), LVM_GETSELECTEDCOUNT, 0, 0L)
        (DWORD)SNDMSG((hwndLV), LVM_GETITEMSPACING, fSmall, 0L)
        (BOOL)SNDMSG((hwndLV), LVM_GETISEARCHSTRING, 0, (LPARAM)(LPTSTR)(lpsz))
        (DWORD)SNDMSG((hwndLV), LVM_SETICONSPACING, 0, MAKELONG(cx,cy))
        (DWORD)SNDMSG((hwndLV), LVM_SETEXTENDEDLISTVIEWSTYLE, 0, dw)
        (DWORD)SNDMSG((hwndLV), LVM_SETEXTENDEDLISTVIEWSTYLE, dwMask, dw)
        (DWORD)SNDMSG((hwndLV), LVM_GETEXTENDEDLISTVIEWSTYLE, 0, 0)
        (BOOL)SNDMSG((hwnd), LVM_GETSUBITEMRECT, (WPARAM)(int)(iItem), \
                ((prc) ? ((((LPRECT)(prc))->top = (iSubItem)), (((LPRECT)(prc))->left = (code)), (LPARAM)(prc)) : (LPARAM)(LPRECT)NULL))
        (int)SNDMSG((hwnd), LVM_SUBITEMHITTEST, 0, (LPARAM)(LPLVHITTESTINFO)(plvhti))
        (int)SNDMSG((hwnd), LVM_SUBITEMHITTEST, (WPARAM)-1, (LPARAM)(LPLVHITTESTINFO)(plvhti))
        (BOOL)SNDMSG((hwnd), LVM_SETCOLUMNORDERARRAY, (WPARAM)(iCount), (LPARAM)(LPINT)(pi))
        (BOOL)SNDMSG((hwnd), LVM_GETCOLUMNORDERARRAY, (WPARAM)(iCount), (LPARAM)(LPINT)(pi))
        (int)SNDMSG((hwnd), LVM_SETHOTITEM, (WPARAM)(i), 0)
        (int)SNDMSG((hwnd), LVM_GETHOTITEM, 0, 0)
        (HCURSOR)SNDMSG((hwnd), LVM_SETHOTCURSOR, 0, (LPARAM)(hcur))
        (HCURSOR)SNDMSG((hwnd), LVM_GETHOTCURSOR, 0, 0)
        (DWORD)SNDMSG((hwnd), LVM_APPROXIMATEVIEWRECT, (WPARAM)(iCount), MAKELPARAM(iWidth, iHeight))
    (BOOL)SNDMSG((hwnd), LVM_SETWORKAREAS, (WPARAM)(int)(nWorkAreas), (LPARAM)(RECT *)(prc))
    (BOOL)SNDMSG((hwnd), LVM_GETWORKAREAS, (WPARAM)(int)(nWorkAreas), (LPARAM)(RECT *)(prc))
    (BOOL)SNDMSG((hwnd), LVM_GETNUMBEROFWORKAREAS, 0, (LPARAM)(UINT *)(pnWorkAreas))
    (int)SNDMSG((hwnd), LVM_GETSELECTIONMARK, 0, 0)
    (int)SNDMSG((hwnd), LVM_SETSELECTIONMARK, 0, (LPARAM)(i))
        (DWORD)SNDMSG((hwndLV), LVM_SETHOVERTIME, 0, (LPARAM)(dwHoverTimeMs))
        (DWORD)SNDMSG((hwndLV), LVM_GETHOVERTIME, 0, 0)
        (HWND)SNDMSG((hwndLV), LVM_SETTOOLTIPS, (WPARAM)(hwndNewHwnd), 0)
        (HWND)SNDMSG((hwndLV), LVM_GETTOOLTIPS, 0, 0)
  (BOOL)SNDMSG((hwndLV), LVM_SORTITEMSEX, (WPARAM)(LPARAM)(_lPrm), (LPARAM)(PFNLVCOMPARE)(_pfnCompare))
typedef struct tagLVBKIMAGEA
{
    ULONG ulFlags;
    HBITMAP hbm;
    LPSTR pszImage;
    UINT cchImageMax;
    int xOffsetPercent;
    int yOffsetPercent;
} LVBKIMAGEA, *LPLVBKIMAGEA;
typedef struct tagLVBKIMAGEW
{
    ULONG ulFlags;
    HBITMAP hbm;
    LPWSTR pszImage;
    UINT cchImageMax;
    int xOffsetPercent;
    int yOffsetPercent;
} LVBKIMAGEW, *LPLVBKIMAGEW;
    SNDMSG((hwnd), LVM_SETSELECTEDCOLUMN, (WPARAM)(iCol), 0)
    (DWORD)SNDMSG((hwnd), LVM_SETVIEW, (WPARAM)(DWORD)(iView), 0)
    (DWORD)SNDMSG((hwnd), LVM_GETVIEW, 0, 0)
typedef struct tagLVGROUP
{
    UINT cbSize;
    UINT mask;
    LPWSTR pszHeader;
    int cchHeader;
    LPWSTR pszFooter;
    int cchFooter;
    int iGroupId;
    UINT stateMask;
    UINT state;
    UINT uAlign;
    LPWSTR pszSubtitle;
    UINT cchSubtitle;
    LPWSTR pszTask;
    UINT cchTask;
    LPWSTR pszDescriptionTop;
    UINT cchDescriptionTop;
    LPWSTR pszDescriptionBottom;
    UINT cchDescriptionBottom;
    int iTitleImage;
    int iExtendedImage;
    int iFirstItem;
    UINT cItems;
    LPWSTR pszSubsetTitle;
    UINT cchSubsetTitle;
} LVGROUP, *PLVGROUP;
    SNDMSG((hwnd), LVM_INSERTGROUP, (WPARAM)(index), (LPARAM)(pgrp))
    SNDMSG((hwnd), LVM_SETGROUPINFO, (WPARAM)(iGroupId), (LPARAM)(pgrp))
    SNDMSG((hwnd), LVM_GETGROUPINFO, (WPARAM)(iGroupId), (LPARAM)(pgrp))
    SNDMSG((hwnd), LVM_REMOVEGROUP, (WPARAM)(iGroupId), 0)
    SNDMSG((hwnd), LVM_MOVEGROUP, (WPARAM)(iGroupId), (LPARAM)(toIndex))
    SNDMSG((hwnd), LVM_GETGROUPCOUNT, (WPARAM)0, (LPARAM)0)
    SNDMSG((hwnd), LVM_GETGROUPINFOBYINDEX, (WPARAM)(iIndex), (LPARAM)(pgrp))
    SNDMSG((hwnd), LVM_MOVEITEMTOGROUP, (WPARAM)(idItemFrom), (LPARAM)(idGroupTo))
    SNDMSG((hwnd), LVM_GETGROUPRECT, (WPARAM)(iGroupId), \
        ((prc) ? (((RECT*)(prc))->top = (type)), (LPARAM)(RECT*)(prc) : (LPARAM)(RECT*)NULL))
typedef struct tagLVGROUPMETRICS
{
    UINT cbSize;
    UINT mask;
    UINT Left;
    UINT Top;
    UINT Right;
    UINT Bottom;
    COLORREF crLeft;
    COLORREF crTop;
    COLORREF crRight;
    COLORREF crBottom;
    COLORREF crHeader;
    COLORREF crFooter;
} LVGROUPMETRICS, *PLVGROUPMETRICS;
    SNDMSG((hwnd), LVM_SETGROUPMETRICS, 0, (LPARAM)(pGroupMetrics))
    SNDMSG((hwnd), LVM_GETGROUPMETRICS, 0, (LPARAM)(pGroupMetrics))
    SNDMSG((hwnd), LVM_ENABLEGROUPVIEW, (WPARAM)(fEnable), 0)
typedef int (CALLBACK *PFNLVGROUPCOMPARE)(int, int, void *);
    SNDMSG((hwnd), LVM_SORTGROUPS, (WPARAM)(_pfnGroupCompate), (LPARAM)(_plv))
typedef struct tagLVINSERTGROUPSORTED
{
    PFNLVGROUPCOMPARE pfnGroupCompare;
    void *pvData;
    LVGROUP lvGroup;
}LVINSERTGROUPSORTED, *PLVINSERTGROUPSORTED;
    SNDMSG((hwnd), LVM_INSERTGROUPSORTED, (WPARAM)(structInsert), 0)
    SNDMSG((hwnd), LVM_REMOVEALLGROUPS, 0, 0)
    SNDMSG((hwnd), LVM_HASGROUP, dwGroupId, 0)
{ LVGROUP _macro_lvg;\
  _macro_lvg.cbSize = sizeof(_macro_lvg);\
  _macro_lvg.mask = LVGF_STATE;\
  _macro_lvg.stateMask = dwMask;\
  _macro_lvg.state = dwState;\
  SNDMSG((hwnd), LVM_SETGROUPINFO, (WPARAM)(dwGroupId), (LPARAM)(LVGROUP *)&_macro_lvg);\
}
  (UINT) SNDMSG((hwnd), LVM_GETGROUPSTATE, (WPARAM)(dwGroupId), (LPARAM)(dwMask))
    SNDMSG((hwnd), LVM_GETFOCUSEDGROUP, 0, 0)
typedef struct tagLVTILEVIEWINFO
{
    UINT cbSize;
    DWORD dwMask;
    DWORD dwFlags;
    SIZE sizeTile;
    int cLines;
    RECT rcLabelMargin;
} LVTILEVIEWINFO, *PLVTILEVIEWINFO;
typedef struct tagLVTILEINFO
{
    UINT cbSize;
    int iItem;
    UINT cColumns;
    PUINT puColumns;
    int* piColFmt;
} LVTILEINFO, *PLVTILEINFO;
    SNDMSG((hwnd), LVM_SETTILEVIEWINFO, 0, (LPARAM)(ptvi))
    SNDMSG((hwnd), LVM_GETTILEVIEWINFO, 0, (LPARAM)(ptvi))
    SNDMSG((hwnd), LVM_SETTILEINFO, 0, (LPARAM)(pti))
    SNDMSG((hwnd), LVM_GETTILEINFO, 0, (LPARAM)(pti))
typedef struct
{
    UINT cbSize;
    DWORD dwFlags;
    int iItem;
    DWORD dwReserved;
} LVINSERTMARK, * LPLVINSERTMARK;
    (BOOL)SNDMSG((hwnd), LVM_SETINSERTMARK, (WPARAM) 0, (LPARAM) (lvim))
    (BOOL)SNDMSG((hwnd), LVM_GETINSERTMARK, (WPARAM) 0, (LPARAM) (lvim))
    (int)SNDMSG((hwnd), LVM_INSERTMARKHITTEST, (WPARAM)(LPPOINT)(point), (LPARAM)(LPLVINSERTMARK)(lvim))
    (int)SNDMSG((hwnd), LVM_GETINSERTMARKRECT, (WPARAM)0, (LPARAM)(LPRECT)(rc))
    (COLORREF)SNDMSG((hwnd), LVM_SETINSERTMARKCOLOR, (WPARAM)0, (LPARAM)(COLORREF)(color))
    (COLORREF)SNDMSG((hwnd), LVM_GETINSERTMARKCOLOR, (WPARAM)0, (LPARAM)0)
typedef struct tagLVSETINFOTIP
{
    UINT cbSize;
    DWORD dwFlags;
    LPWSTR pszText;
    int iItem;
    int iSubItem;
} LVSETINFOTIP, *PLVSETINFOTIP;
        (BOOL)SNDMSG((hwndLV), LVM_SETINFOTIP, (WPARAM)0, (LPARAM)(plvInfoTip))
    (UINT)SNDMSG((hwnd), LVM_GETSELECTEDCOLUMN, 0, 0)
    (BOOL)SNDMSG((hwnd), LVM_ISGROUPVIEWENABLED, 0, 0)
    (COLORREF)SNDMSG((hwnd), LVM_GETOUTLINECOLOR, 0, 0)
    (COLORREF)SNDMSG((hwnd), LVM_SETOUTLINECOLOR, (WPARAM)0, (LPARAM)(COLORREF)(color))
    (VOID)SNDMSG((hwnd), LVM_CANCELEDITLABEL, (WPARAM)0, (LPARAM)0)
    (UINT)SNDMSG((hwnd), LVM_MAPINDEXTOID, (WPARAM)(index), (LPARAM)0)
    (UINT)SNDMSG((hwnd), LVM_MAPIDTOINDEX, (WPARAM)(id), (LPARAM)0)
    (UINT)SNDMSG((hwnd), LVM_ISITEMVISIBLE, (WPARAM)(index), (LPARAM)0)
    (HIMAGELIST)SNDMSG((hwnd), LVM_SETIMAGELIST, (WPARAM)LVSIL_GROUPHEADER, (LPARAM)(HIMAGELIST)(himl))
    (HIMAGELIST)SNDMSG((hwnd), LVM_GETIMAGELIST, (WPARAM)LVSIL_GROUPHEADER, 0L)
    (BOOL)SNDMSG((hwnd), LVM_GETEMPTYTEXT, (WPARAM)(cchText), (LPARAM)(pszText))
    (BOOL)SNDMSG((hwnd), LVM_GETFOOTERRECT, (WPARAM)(0), (LPARAM)(prc))
typedef struct tagLVFOOTERINFO
{
    UINT mask;
    LPWSTR pszText;
    int cchTextMax;
    UINT cItems;
} LVFOOTERINFO, *LPLVFOOTERINFO;
    (BOOL)SNDMSG((hwnd), LVM_GETFOOTERINFO, (WPARAM)(0), (LPARAM)(plvfi))
    (BOOL)SNDMSG((hwnd), LVM_GETFOOTERITEMRECT, (WPARAM)(iItem), (LPARAM)(prc))
typedef struct tagLVFOOTERITEM
{
    UINT mask;
    int iItem;
    LPWSTR pszText;
    int cchTextMax;
    UINT state;
    UINT stateMask;
} LVFOOTERITEM, *LPLVFOOTERITEM;
    (BOOL)SNDMSG((hwnd), LVM_GETFOOTERITEM, (WPARAM)(iItem), (LPARAM)(pfi))
typedef struct tagLVITEMINDEX
{
    int iItem;
    int iGroup;
} LVITEMINDEX, *PLVITEMINDEX;
        (BOOL)SNDMSG((hwnd), LVM_GETITEMINDEXRECT, (WPARAM)(LVITEMINDEX*)(plvii), \
                ((prc) ? ((((LPRECT)(prc))->top = (iSubItem)), (((LPRECT)(prc))->left = (code)), (LPARAM)(prc)) : (LPARAM)(LPRECT)NULL))
{ LV_ITEM _macro_lvi;\
  _macro_lvi.stateMask = (mask);\
  _macro_lvi.state = (data);\
  SNDMSG((hwndLV), LVM_SETITEMINDEXSTATE, (WPARAM)(LVITEMINDEX*)(plvii), (LPARAM)(LV_ITEM *)&_macro_lvi);\
}
    (BOOL)SNDMSG((hwnd), LVM_GETNEXTITEMINDEX, (WPARAM)(LVITEMINDEX*)(plvii), MAKELPARAM((flags), 0))
    (BOOL)SNDMSG((hwnd), LVM_SETBKIMAGE, 0, (LPARAM)(plvbki))
    (BOOL)SNDMSG((hwnd), LVM_GETBKIMAGE, 0, (LPARAM)(plvbki))
typedef struct tagNMLISTVIEW
{
    NMHDR hdr;
    int iItem;
    int iSubItem;
    UINT uNewState;
    UINT uOldState;
    UINT uChanged;
    POINT ptAction;
    LPARAM lParam;
} NMLISTVIEW, *LPNMLISTVIEW;
typedef struct tagNMITEMACTIVATE
{
    NMHDR hdr;
    int iItem;
    int iSubItem;
    UINT uNewState;
    UINT uOldState;
    UINT uChanged;
    POINT ptAction;
    LPARAM lParam;
    UINT uKeyFlags;
} NMITEMACTIVATE, *LPNMITEMACTIVATE;
typedef struct tagNMLVCUSTOMDRAW
{
    NMCUSTOMDRAW nmcd;
    COLORREF clrText;
    COLORREF clrTextBk;
    int iSubItem;
    DWORD dwItemType;
    COLORREF clrFace;
    int iIconEffect;
    int iIconPhase;
    int iPartId;
    int iStateId;
    RECT rcText;
    UINT uAlign;
} NMLVCUSTOMDRAW, *LPNMLVCUSTOMDRAW;
typedef struct tagNMLVCACHEHINT
{
    NMHDR hdr;
    int iFrom;
    int iTo;
} NMLVCACHEHINT, *LPNMLVCACHEHINT;
typedef struct tagNMLVFINDITEMA
{
    NMHDR hdr;
    int iStart;
    LVFINDINFOA lvfi;
} NMLVFINDITEMA, *LPNMLVFINDITEMA;
typedef struct tagNMLVFINDITEMW
{
    NMHDR hdr;
    int iStart;
    LVFINDINFOW lvfi;
} NMLVFINDITEMW, *LPNMLVFINDITEMW;
typedef struct tagNMLVODSTATECHANGE
{
    NMHDR hdr;
    int iFrom;
    int iTo;
    UINT uNewState;
    UINT uOldState;
} NMLVODSTATECHANGE, *LPNMLVODSTATECHANGE;
typedef struct tagLVDISPINFO {
    NMHDR hdr;
    LVITEMA item;
} NMLVDISPINFOA, *LPNMLVDISPINFOA;
typedef struct tagLVDISPINFOW {
    NMHDR hdr;
    LVITEMW item;
} NMLVDISPINFOW, *LPNMLVDISPINFOW;
#include <pshpack1.h>
typedef struct tagLVKEYDOWN
{
    NMHDR hdr;
    WORD wVKey;
    UINT flags;
} NMLVKEYDOWN, *LPNMLVKEYDOWN;
#include <poppack.h>
typedef struct tagNMLVLINK
{
    NMHDR hdr;
    LITEM link;
    int iItem;
    int iSubItem;
} NMLVLINK, *PNMLVLINK;
typedef struct tagNMLVGETINFOTIPA
{
    NMHDR hdr;
    DWORD dwFlags;
    LPSTR pszText;
    int cchTextMax;
    int iItem;
    int iSubItem;
    LPARAM lParam;
} NMLVGETINFOTIPA, *LPNMLVGETINFOTIPA;
typedef struct tagNMLVGETINFOTIPW
{
    NMHDR hdr;
    DWORD dwFlags;
    LPWSTR pszText;
    int cchTextMax;
    int iItem;
    int iSubItem;
    LPARAM lParam;
} NMLVGETINFOTIPW, *LPNMLVGETINFOTIPW;
typedef struct tagNMLVSCROLL
{
    NMHDR hdr;
    int dx;
    int dy;
} NMLVSCROLL, *LPNMLVSCROLL;
typedef struct tagNMLVEMPTYMARKUP
{
    NMHDR hdr;
    DWORD dwFlags;
    WCHAR szMarkup[L_MAX_URL_LENGTH];
} NMLVEMPTYMARKUP;
struct _TREEITEM;
typedef struct _TREEITEM *HTREEITEM;
typedef struct tagTVITEMA {
    UINT mask;
    HTREEITEM hItem;
    UINT state;
    UINT stateMask;
    LPSTR pszText;
    int cchTextMax;
    int iImage;
    int iSelectedImage;
    int cChildren;
    LPARAM lParam;
} TVITEMA, *LPTVITEMA;
typedef struct tagTVITEMW {
    UINT mask;
    HTREEITEM hItem;
    UINT state;
    UINT stateMask;
    LPWSTR pszText;
    int cchTextMax;
    int iImage;
    int iSelectedImage;
    int cChildren;
    LPARAM lParam;
} TVITEMW, *LPTVITEMW;
typedef struct tagTVITEMEXA {
    UINT mask;
    HTREEITEM hItem;
    UINT state;
    UINT stateMask;
    LPSTR pszText;
    int cchTextMax;
    int iImage;
    int iSelectedImage;
    int cChildren;
    LPARAM lParam;
    int iIntegral;
    int iReserved;
} TVITEMEXA, *LPTVITEMEXA;
typedef struct tagTVITEMEXW {
    UINT mask;
    HTREEITEM hItem;
    UINT state;
    UINT stateMask;
    LPWSTR pszText;
    int cchTextMax;
    int iImage;
    int iSelectedImage;
    int cChildren;
    LPARAM lParam;
    int iIntegral;
    int iReserved;
} TVITEMEXW, *LPTVITEMEXW;
typedef TVITEMEXW TVITEMEX;
typedef LPTVITEMEXW LPTVITEMEX;
typedef struct tagTVINSERTSTRUCTA {
    HTREEITEM hParent;
    HTREEITEM hInsertAfter;
    union
    {
        TVITEMEXA itemex;
        TV_ITEMA item;
    } DUMMYUNIONNAME;
} TVINSERTSTRUCTA, *LPTVINSERTSTRUCTA;
typedef struct tagTVINSERTSTRUCTW {
    HTREEITEM hParent;
    HTREEITEM hInsertAfter;
    union
    {
        TVITEMEXW itemex;
        TV_ITEMW item;
    } DUMMYUNIONNAME;
} TVINSERTSTRUCTW, *LPTVINSERTSTRUCTW;
    (HTREEITEM)SNDMSG((hwnd), TVM_INSERTITEM, 0, (LPARAM)(LPTV_INSERTSTRUCT)(lpis))
    (BOOL)SNDMSG((hwnd), TVM_DELETEITEM, 0, (LPARAM)(HTREEITEM)(hitem))
    (BOOL)SNDMSG((hwnd), TVM_DELETEITEM, 0, (LPARAM)TVI_ROOT)
    (BOOL)SNDMSG((hwnd), TVM_EXPAND, (WPARAM)(code), (LPARAM)(HTREEITEM)(hitem))
    (*(HTREEITEM *)(prc) = (hitem), (BOOL)SNDMSG((hwnd), TVM_GETITEMRECT, (WPARAM)(code), (LPARAM)(RECT *)(prc)))
    (UINT)SNDMSG((hwnd), TVM_GETCOUNT, 0, 0)
    (UINT)SNDMSG((hwnd), TVM_GETINDENT, 0, 0)
    (BOOL)SNDMSG((hwnd), TVM_SETINDENT, (WPARAM)(indent), 0)
    (HIMAGELIST)SNDMSG((hwnd), TVM_GETIMAGELIST, iImage, 0)
    (HIMAGELIST)SNDMSG((hwnd), TVM_SETIMAGELIST, iImage, (LPARAM)(HIMAGELIST)(himl))
    (HTREEITEM)SNDMSG((hwnd), TVM_GETNEXTITEM, (WPARAM)(code), (LPARAM)(HTREEITEM)(hitem))
    (BOOL)SNDMSG((hwnd), TVM_SELECTITEM, (WPARAM)(code), (LPARAM)(HTREEITEM)(hitem))
    (BOOL)SNDMSG((hwnd), TVM_GETITEM, 0, (LPARAM)(TV_ITEM *)(pitem))
    (BOOL)SNDMSG((hwnd), TVM_SETITEM, 0, (LPARAM)(const TV_ITEM *)(pitem))
    (HWND)SNDMSG((hwnd), TVM_EDITLABEL, 0, (LPARAM)(HTREEITEM)(hitem))
    (HWND)SNDMSG((hwnd), TVM_GETEDITCONTROL, 0, 0)
    (UINT)SNDMSG((hwnd), TVM_GETVISIBLECOUNT, 0, 0)
    (HTREEITEM)SNDMSG((hwnd), TVM_HITTEST, 0, (LPARAM)(LPTV_HITTESTINFO)(lpht))
typedef struct tagTVHITTESTINFO {
    POINT pt;
    UINT flags;
    HTREEITEM hItem;
} TVHITTESTINFO, *LPTVHITTESTINFO;
    (HIMAGELIST)SNDMSG((hwnd), TVM_CREATEDRAGIMAGE, 0, (LPARAM)(HTREEITEM)(hitem))
    (BOOL)SNDMSG((hwnd), TVM_SORTCHILDREN, (WPARAM)(recurse), (LPARAM)(HTREEITEM)(hitem))
    (BOOL)SNDMSG((hwnd), TVM_ENSUREVISIBLE, 0, (LPARAM)(HTREEITEM)(hitem))
    (BOOL)SNDMSG((hwnd), TVM_SORTCHILDRENCB, (WPARAM)(recurse), \
    (LPARAM)(LPTV_SORTCB)(psort))
    (BOOL)SNDMSG((hwnd), TVM_ENDEDITLABELNOW, (WPARAM)(fCancel), 0)
    (HWND)SNDMSG((hwnd), TVM_SETTOOLTIPS, (WPARAM)(hwndTT), 0)
    (HWND)SNDMSG((hwnd), TVM_GETTOOLTIPS, 0, 0)
        (BOOL)SNDMSG((hwndTV), TVM_GETISEARCHSTRING, 0, (LPARAM)(LPTSTR)(lpsz))
        (BOOL)SNDMSG((hwnd), TVM_SETINSERTMARK, (WPARAM) (fAfter), (LPARAM) (hItem))
    (BOOL)SNDMSG((hwnd), TVM_SETUNICODEFORMAT, (WPARAM)(fUnicode), 0)
    (BOOL)SNDMSG((hwnd), TVM_GETUNICODEFORMAT, 0, 0)
    (int)SNDMSG((hwnd), TVM_SETITEMHEIGHT, (WPARAM)(iHeight), 0)
    (int)SNDMSG((hwnd), TVM_GETITEMHEIGHT, 0, 0)
    (COLORREF)SNDMSG((hwnd), TVM_SETBKCOLOR, 0, (LPARAM)(clr))
    (COLORREF)SNDMSG((hwnd), TVM_SETTEXTCOLOR, 0, (LPARAM)(clr))
    (COLORREF)SNDMSG((hwnd), TVM_GETBKCOLOR, 0, 0)
    (COLORREF)SNDMSG((hwnd), TVM_GETTEXTCOLOR, 0, 0)
    (UINT)SNDMSG((hwnd), TVM_SETSCROLLTIME, uTime, 0)
    (UINT)SNDMSG((hwnd), TVM_GETSCROLLTIME, 0, 0)
    (COLORREF)SNDMSG((hwnd), TVM_SETINSERTMARKCOLOR, 0, (LPARAM)(clr))
    (COLORREF)SNDMSG((hwnd), TVM_GETINSERTMARKCOLOR, 0, 0)
    (int)SNDMSG((hwnd), TVM_SETBORDER, (WPARAM)(dwFlags), MAKELPARAM(xBorder, yBorder))
{ TVITEM _ms_TVi;\
  _ms_TVi.mask = TVIF_STATE; \
  _ms_TVi.hItem = (hti); \
  _ms_TVi.stateMask = (_mask);\
  _ms_TVi.state = (data);\
  SNDMSG((hwndTV), TVM_SETITEM, 0, (LPARAM)(TV_ITEM *)&_ms_TVi);\
}
  TreeView_SetItemState(hwndTV, hti, INDEXTOSTATEIMAGEMASK((fCheck)?2:1), TVIS_STATEIMAGEMASK)
   (UINT)SNDMSG((hwndTV), TVM_GETITEMSTATE, (WPARAM)(hti), (LPARAM)(mask))
   ((((UINT)(SNDMSG((hwndTV), TVM_GETITEMSTATE, (WPARAM)(hti), TVIS_STATEIMAGEMASK))) >> 12) -1)
    (COLORREF)SNDMSG((hwnd), TVM_SETLINECOLOR, 0, (LPARAM)(clr))
    (COLORREF)SNDMSG((hwnd), TVM_GETLINECOLOR, 0, 0)
    (HTREEITEM)SNDMSG((hwnd), TVM_MAPACCIDTOHTREEITEM, id, 0)
    (UINT)SNDMSG((hwnd), TVM_MAPHTREEITEMTOACCID, (WPARAM)(htreeitem), 0)
    (DWORD)SNDMSG((hwnd), TVM_SETEXTENDEDSTYLE, mask, dw)
    (DWORD)SNDMSG((hwnd), TVM_GETEXTENDEDSTYLE, 0, 0)
    SNDMSG((hwnd), TVM_SETAUTOSCROLLINFO, (WPARAM)(uPixPerSec), (LPARAM)(uUpdateTime))
    SNDMSG((hwnd), TVM_SETHOT, 0, (LPARAM)(hitem))
    (DWORD)SNDMSG((hwnd), TVM_GETSELECTEDCOUNT, 0, 0)
    (DWORD)SNDMSG((hwnd), TVM_SHOWINFOTIP, 0, (LPARAM)(hitem))
typedef enum _TVITEMPART
{
    TVGIPR_BUTTON = 0x0001,
} TVITEMPART;
typedef struct tagTVGETITEMPARTRECTINFO {
    HTREEITEM hti;
    RECT* prc;
    TVITEMPART partID;
} TVGETITEMPARTRECTINFO;
{ TVGETITEMPARTRECTINFO info; \
  info.hti = (hitem); \
  info.prc = (prc); \
  info.partID = (partid); \
  (BOOL)SNDMSG((hwnd), TVM_GETITEMPARTRECT, 0, (LPARAM)&info); \
}
typedef int (CALLBACK *PFNTVCOMPARE)(LPARAM lParam1, LPARAM lParam2, LPARAM lParamSort);
typedef struct tagTVSORTCB
{
    HTREEITEM hParent;
    PFNTVCOMPARE lpfnCompare;
    LPARAM lParam;
} TVSORTCB, *LPTVSORTCB;
typedef struct tagNMTREEVIEWA {
    NMHDR hdr;
    UINT action;
    TVITEMA itemOld;
    TVITEMA itemNew;
    POINT ptDrag;
} NMTREEVIEWA, *LPNMTREEVIEWA;
typedef struct tagNMTREEVIEWW {
    NMHDR hdr;
    UINT action;
    TVITEMW itemOld;
    TVITEMW itemNew;
    POINT ptDrag;
} NMTREEVIEWW, *LPNMTREEVIEWW;
typedef struct tagTVDISPINFOA {
    NMHDR hdr;
    TVITEMA item;
} NMTVDISPINFOA, *LPNMTVDISPINFOA;
typedef struct tagTVDISPINFOW {
    NMHDR hdr;
    TVITEMW item;
} NMTVDISPINFOW, *LPNMTVDISPINFOW;
#include <pshpack1.h>
typedef struct tagTVKEYDOWN {
    NMHDR hdr;
    WORD wVKey;
    UINT flags;
} NMTVKEYDOWN, *LPNMTVKEYDOWN;
#include <poppack.h>
typedef struct tagNMTVCUSTOMDRAW
{
    NMCUSTOMDRAW nmcd;
    COLORREF clrText;
    COLORREF clrTextBk;
    int iLevel;
} NMTVCUSTOMDRAW, *LPNMTVCUSTOMDRAW;
typedef struct tagNMTVGETINFOTIPA
{
    NMHDR hdr;
    LPSTR pszText;
    int cchTextMax;
    HTREEITEM hItem;
    LPARAM lParam;
} NMTVGETINFOTIPA, *LPNMTVGETINFOTIPA;
typedef struct tagNMTVGETINFOTIPW
{
    NMHDR hdr;
    LPWSTR pszText;
    int cchTextMax;
    HTREEITEM hItem;
    LPARAM lParam;
} NMTVGETINFOTIPW, *LPNMTVGETINFOTIPW;
typedef struct tagCOMBOBOXEXITEMA
{
    UINT mask;
    INT_PTR iItem;
    LPSTR pszText;
    int cchTextMax;
    int iImage;
    int iSelectedImage;
    int iOverlay;
    int iIndent;
    LPARAM lParam;
} COMBOBOXEXITEMA, *PCOMBOBOXEXITEMA;
typedef COMBOBOXEXITEMA CONST *PCCOMBOEXITEMA;
typedef struct tagCOMBOBOXEXITEMW
{
    UINT mask;
    INT_PTR iItem;
    LPWSTR pszText;
    int cchTextMax;
    int iImage;
    int iSelectedImage;
    int iOverlay;
    int iIndent;
    LPARAM lParam;
} COMBOBOXEXITEMW, *PCOMBOBOXEXITEMW;
typedef COMBOBOXEXITEMW CONST *PCCOMBOEXITEMW;
typedef struct {
    NMHDR hdr;
    COMBOBOXEXITEMA ceItem;
} NMCOMBOBOXEXA, *PNMCOMBOBOXEXA;
typedef struct {
    NMHDR hdr;
    COMBOBOXEXITEMW ceItem;
} NMCOMBOBOXEXW, *PNMCOMBOBOXEXW;
typedef struct {
    NMHDR hdr;
    int iItemid;
    WCHAR szText[CBEMAXSTRLEN];
}NMCBEDRAGBEGINW, *LPNMCBEDRAGBEGINW, *PNMCBEDRAGBEGINW;
typedef struct {
    NMHDR hdr;
    int iItemid;
    char szText[CBEMAXSTRLEN];
}NMCBEDRAGBEGINA, *LPNMCBEDRAGBEGINA, *PNMCBEDRAGBEGINA;
typedef struct {
        NMHDR hdr;
        BOOL fChanged;
        int iNewSelection;
        WCHAR szText[CBEMAXSTRLEN];
        int iWhy;
} NMCBEENDEDITW, *LPNMCBEENDEDITW, *PNMCBEENDEDITW;
typedef struct {
        NMHDR hdr;
        BOOL fChanged;
        int iNewSelection;
        char szText[CBEMAXSTRLEN];
        int iWhy;
} NMCBEENDEDITA, *LPNMCBEENDEDITA,*PNMCBEENDEDITA;
    (HIMAGELIST)SNDMSG((hwnd), TCM_GETIMAGELIST, 0, 0L)
    (HIMAGELIST)SNDMSG((hwnd), TCM_SETIMAGELIST, 0, (LPARAM)(HIMAGELIST)(himl))
    (int)SNDMSG((hwnd), TCM_GETITEMCOUNT, 0, 0L)
typedef struct tagTCITEMHEADERA
{
    UINT mask;
    UINT lpReserved1;
    UINT lpReserved2;
    LPSTR pszText;
    int cchTextMax;
    int iImage;
} TCITEMHEADERA, *LPTCITEMHEADERA;
typedef struct tagTCITEMHEADERW
{
    UINT mask;
    UINT lpReserved1;
    UINT lpReserved2;
    LPWSTR pszText;
    int cchTextMax;
    int iImage;
} TCITEMHEADERW, *LPTCITEMHEADERW;
typedef struct tagTCITEMA
{
    UINT mask;
    DWORD dwState;
    DWORD dwStateMask;
    LPSTR pszText;
    int cchTextMax;
    int iImage;
    LPARAM lParam;
} TCITEMA, *LPTCITEMA;
typedef struct tagTCITEMW
{
    UINT mask;
    DWORD dwState;
    DWORD dwStateMask;
    LPWSTR pszText;
    int cchTextMax;
    int iImage;
    LPARAM lParam;
} TCITEMW, *LPTCITEMW;
    (BOOL)SNDMSG((hwnd), TCM_GETITEM, (WPARAM)(int)(iItem), (LPARAM)(TC_ITEM *)(pitem))
    (BOOL)SNDMSG((hwnd), TCM_SETITEM, (WPARAM)(int)(iItem), (LPARAM)(TC_ITEM *)(pitem))
    (int)SNDMSG((hwnd), TCM_INSERTITEM, (WPARAM)(int)(iItem), (LPARAM)(const TC_ITEM *)(pitem))
    (BOOL)SNDMSG((hwnd), TCM_DELETEITEM, (WPARAM)(int)(i), 0L)
    (BOOL)SNDMSG((hwnd), TCM_DELETEALLITEMS, 0, 0L)
    (BOOL)SNDMSG((hwnd), TCM_GETITEMRECT, (WPARAM)(int)(i), (LPARAM)(RECT *)(prc))
    (int)SNDMSG((hwnd), TCM_GETCURSEL, 0, 0)
    (int)SNDMSG((hwnd), TCM_SETCURSEL, (WPARAM)(i), 0)
typedef struct tagTCHITTESTINFO
{
    POINT pt;
    UINT flags;
} TCHITTESTINFO, *LPTCHITTESTINFO;
    (int)SNDMSG((hwndTC), TCM_HITTEST, 0, (LPARAM)(TC_HITTESTINFO *)(pinfo))
    (BOOL)SNDMSG((hwndTC), TCM_SETITEMEXTRA, (WPARAM)(cb), 0L)
    (int)SNDMSG(hwnd, TCM_ADJUSTRECT, (WPARAM)(BOOL)(bLarger), (LPARAM)(RECT *)(prc))
    (DWORD)SNDMSG((hwnd), TCM_SETITEMSIZE, 0, MAKELPARAM(x,y))
        (void)SNDMSG((hwnd), TCM_REMOVEIMAGE, i, 0L)
        (void)SNDMSG((hwnd), TCM_SETPADDING, 0, MAKELPARAM(cx, cy))
        (int)SNDMSG((hwnd), TCM_GETROWCOUNT, 0, 0L)
        (HWND)SNDMSG((hwnd), TCM_GETTOOLTIPS, 0, 0L)
        (void)SNDMSG((hwnd), TCM_SETTOOLTIPS, (WPARAM)(hwndTT), 0L)
    (int)SNDMSG((hwnd), TCM_GETCURFOCUS, 0, 0)
    SNDMSG((hwnd),TCM_SETCURFOCUS, i, 0)
        (int)SNDMSG((hwnd), TCM_SETMINTABWIDTH, 0, x)
        (void)SNDMSG((hwnd), TCM_DESELECTALL, fExcludeFocus, 0)
    (BOOL)SNDMSG((hwnd), TCM_HIGHLIGHTITEM, (WPARAM)(i), (LPARAM)MAKELONG (fHighlight, 0))
        (DWORD)SNDMSG((hwnd), TCM_SETEXTENDEDSTYLE, 0, dw)
        (DWORD)SNDMSG((hwnd), TCM_GETEXTENDEDSTYLE, 0, 0)
    (BOOL)SNDMSG((hwnd), TCM_SETUNICODEFORMAT, (WPARAM)(fUnicode), 0)
    (BOOL)SNDMSG((hwnd), TCM_GETUNICODEFORMAT, 0, 0)
#include <pshpack1.h>
typedef struct tagTCKEYDOWN
{
    NMHDR hdr;
    WORD wVKey;
    UINT flags;
} NMTCKEYDOWN;
#include <poppack.h>
            CreateWindow(ANIMATE_CLASS, NULL, \
                dwStyle, 0, 0, 0, 0, hwndP, (HMENU)(id), hInstance, NULL)
typedef DWORD MONTHDAYSTATE, *LPMONTHDAYSTATE;
        SNDMSG(hmc, MCM_HITTEST, 0, (LPARAM)(PMCHITTESTINFO)(pinfo))
typedef struct {
        UINT cbSize;
        POINT pt;
        UINT uHit;
        SYSTEMTIME st;
        RECT rc;
        int iOffset;
        int iRow;
        int iCol;
} MCHITTESTINFO, *PMCHITTESTINFO;
        SNDMSG(hmc, MCM_SETFIRSTDAYOFWEEK, 0, iDay)
        (DWORD)SNDMSG(hmc, MCM_GETFIRSTDAYOFWEEK, 0, 0)
        (DWORD)SNDMSG(hmc, MCM_GETRANGE, 0, (LPARAM)(rgst))
        (BOOL)SNDMSG(hmc, MCM_SETRANGE, (WPARAM)(gd), (LPARAM)(rgst))
        (int)SNDMSG(hmc, MCM_GETMONTHDELTA, 0, 0)
        (int)SNDMSG(hmc, MCM_SETMONTHDELTA, n, 0)
        (DWORD)SNDMSG(hmc, MCM_GETMAXTODAYWIDTH, 0, 0)
    (BOOL)SNDMSG((hwnd), MCM_SETUNICODEFORMAT, (WPARAM)(fUnicode), 0)
    (BOOL)SNDMSG((hwnd), MCM_GETUNICODEFORMAT, 0, 0)
        (DWORD)SNDMSG(hmc, MCM_GETCURRENTVIEW, 0, 0)
        (DWORD)SNDMSG(hmc, MCM_GETCALENDARCOUNT, 0, 0)
typedef struct tagMCGRIDINFO {
    UINT cbSize;
    DWORD dwPart;
    DWORD dwFlags;
    int iCalendar;
    int iRow;
    int iCol;
    BOOL bSelected;
    SYSTEMTIME stStart;
    SYSTEMTIME stEnd;
    RECT rc;
    PWSTR pszName;
    size_t cchName;
} MCGRIDINFO, *PMCGRIDINFO;
        (BOOL)SNDMSG(hmc, MCM_GETCALENDARGRIDINFO, 0, (LPARAM)(PMCGRIDINFO)(pmcGridInfo))
        (CALID)SNDMSG(hmc, MCM_GETCALID, 0, 0)
        SNDMSG(hmc, MCM_SETCALID, (WPARAM)(calid), 0)
        SNDMSG(hmc, MCM_SIZERECTTOMIN, 0, (LPARAM)(prc))
        SNDMSG(hmc, MCM_SETCALENDARBORDER, (WPARAM)(fset), (LPARAM)(xyborder))
        (int)SNDMSG(hmc, MCM_GETCALENDARBORDER, 0, 0)
        (BOOL)SNDMSG(hmc, MCM_SETCURRENTVIEW, 0, (LPARAM)(dwNewView))
typedef struct tagNMSELCHANGE
{
    NMHDR nmhdr;
    SYSTEMTIME stSelStart;
    SYSTEMTIME stSelEnd;
} NMSELCHANGE, *LPNMSELCHANGE;
typedef struct tagNMDAYSTATE
{
    NMHDR nmhdr;
    SYSTEMTIME stStart;
    int cDayState;
    LPMONTHDAYSTATE prgDayState;
} NMDAYSTATE, *LPNMDAYSTATE;
typedef NMSELCHANGE NMSELECT, *LPNMSELECT;
typedef struct tagNMVIEWCHANGE
{
    NMHDR nmhdr;
    DWORD dwOldView;
    DWORD dwNewView;
} NMVIEWCHANGE, *LPNMVIEWCHANGE;
typedef struct tagDATETIMEPICKERINFO
{
    DWORD cbSize;
    RECT rcCheck;
    DWORD stateCheck;
    RECT rcButton;
    DWORD stateButton;
    HWND hwndEdit;
    HWND hwndUD;
    HWND hwndDropDown;
} DATETIMEPICKERINFO, *LPDATETIMEPICKERINFO;
typedef struct tagNMDATETIMECHANGE
{
    NMHDR nmhdr;
    DWORD dwFlags;
    SYSTEMTIME st;
} NMDATETIMECHANGE, *LPNMDATETIMECHANGE;
typedef struct tagNMDATETIMESTRINGA
{
    NMHDR nmhdr;
    LPCSTR pszUserString;
    SYSTEMTIME st;
    DWORD dwFlags;
} NMDATETIMESTRINGA, *LPNMDATETIMESTRINGA;
typedef struct tagNMDATETIMESTRINGW
{
    NMHDR nmhdr;
    LPCWSTR pszUserString;
    SYSTEMTIME st;
    DWORD dwFlags;
} NMDATETIMESTRINGW, *LPNMDATETIMESTRINGW;
typedef struct tagNMDATETIMEWMKEYDOWNA
{
    NMHDR nmhdr;
    int nVirtKey;
    LPCSTR pszFormat;
    SYSTEMTIME st;
} NMDATETIMEWMKEYDOWNA, *LPNMDATETIMEWMKEYDOWNA;
typedef struct tagNMDATETIMEWMKEYDOWNW
{
    NMHDR nmhdr;
    int nVirtKey;
    LPCWSTR pszFormat;
    SYSTEMTIME st;
} NMDATETIMEWMKEYDOWNW, *LPNMDATETIMEWMKEYDOWNW;
typedef struct tagNMDATETIMEFORMATA
{
    NMHDR nmhdr;
    LPCSTR pszFormat;
    SYSTEMTIME st;
    LPCSTR pszDisplay;
    CHAR szDisplay[64];
} NMDATETIMEFORMATA, *LPNMDATETIMEFORMATA;
typedef struct tagNMDATETIMEFORMATW
{
    NMHDR nmhdr;
    LPCWSTR pszFormat;
    SYSTEMTIME st;
    LPCWSTR pszDisplay;
    WCHAR szDisplay[64];
} NMDATETIMEFORMATW, *LPNMDATETIMEFORMATW;
typedef struct tagNMDATETIMEFORMATQUERYA
{
    NMHDR nmhdr;
    LPCSTR pszFormat;
    SIZE szMax;
} NMDATETIMEFORMATQUERYA, *LPNMDATETIMEFORMATQUERYA;
typedef struct tagNMDATETIMEFORMATQUERYW
{
    NMHDR nmhdr;
    LPCWSTR pszFormat;
    SIZE szMax;
} NMDATETIMEFORMATQUERYW, *LPNMDATETIMEFORMATQUERYW;
typedef struct tagNMIPADDRESS
{
        NMHDR hdr;
        int iField;
        int iValue;
} NMIPADDRESS, *LPNMIPADDRESS;
        (void)SNDMSG((hwnd), PGM_SETCHILD, 0, (LPARAM)(hwndChild))
        (void)SNDMSG((hwnd), PGM_RECALCSIZE, 0, 0)
        (void)SNDMSG((hwnd), PGM_FORWARDMOUSE, (WPARAM)(bForward), 0)
        (COLORREF)SNDMSG((hwnd), PGM_SETBKCOLOR, 0, (LPARAM)(clr))
        (COLORREF)SNDMSG((hwnd), PGM_GETBKCOLOR, 0, 0)
        (int)SNDMSG((hwnd), PGM_SETBORDER, 0, (LPARAM)(iBorder))
        (int)SNDMSG((hwnd), PGM_GETBORDER, 0, 0)
        (int)SNDMSG((hwnd), PGM_SETPOS, 0, (LPARAM)(iPos))
        (int)SNDMSG((hwnd), PGM_GETPOS, 0, 0)
        (int)SNDMSG((hwnd), PGM_SETBUTTONSIZE, 0, (LPARAM)(iSize))
        (int)SNDMSG((hwnd), PGM_GETBUTTONSIZE, 0,0)
        (DWORD)SNDMSG((hwnd), PGM_GETBUTTONSTATE, 0, (LPARAM)(iButton))
        (void)SNDMSG((hwnd), PGM_GETDROPTARGET, 0, (LPARAM)(ppdt))
        (void) SNDMSG((hwnd), PGM_SETSCROLLINFO, cTimeOut, MAKELONG(cLinesPer, cPixelsPerLine))
#include <pshpack1.h>
typedef struct {
    NMHDR hdr;
    WORD fwKeys;
    RECT rcParent;
    int iDir;
    int iXpos;
    int iYpos;
    int iScroll;
}NMPGSCROLL, *LPNMPGSCROLL;
#include <poppack.h>
typedef struct {
    NMHDR hdr;
    DWORD dwFlag;
    int iWidth;
    int iHeight;
}NMPGCALCSIZE, *LPNMPGCALCSIZE;
typedef struct tagNMPGHOTITEM
{
    NMHDR hdr;
    int idOld;
    int idNew;
    DWORD dwFlags;
} NMPGHOTITEM, * LPNMPGHOTITEM;
typedef struct
{
    HIMAGELIST himl;
    RECT margin;
    UINT uAlign;
} BUTTON_IMAGELIST, *PBUTTON_IMAGELIST;
    (BOOL)SNDMSG((hwnd), BCM_GETIDEALSIZE, 0, (LPARAM)(psize))
    (BOOL)SNDMSG((hwnd), BCM_SETIMAGELIST, 0, (LPARAM)(pbuttonImagelist))
    (BOOL)SNDMSG((hwnd), BCM_GETIMAGELIST, 0, (LPARAM)(pbuttonImagelist))
    (BOOL)SNDMSG((hwnd), BCM_SETTEXTMARGIN, 0, (LPARAM)(pmargin))
    (BOOL)SNDMSG((hwnd), BCM_GETTEXTMARGIN, 0, (LPARAM)(pmargin))
typedef struct tagNMBCHOTITEM
{
    NMHDR hdr;
    DWORD dwFlags;
} NMBCHOTITEM, * LPNMBCHOTITEM;
typedef struct tagBUTTON_SPLITINFO
{
    UINT mask;
    HIMAGELIST himlGlyph;
    UINT uSplitStyle;
    SIZE size;
} BUTTON_SPLITINFO, * PBUTTON_SPLITINFO;
    (BOOL)SNDMSG((hwnd), BCM_SETDROPDOWNSTATE, (WPARAM)(fDropDown), 0)
    (BOOL)SNDMSG((hwnd), BCM_SETSPLITINFO, 0, (LPARAM)(pInfo))
    (BOOL)SNDMSG((hwnd), BCM_GETSPLITINFO, 0, (LPARAM)(pInfo))
    (BOOL)SNDMSG((hwnd), BCM_SETNOTE, 0, (LPARAM)(psz))
    (BOOL)SNDMSG((hwnd), BCM_GETNOTE, (WPARAM)pcc, (LPARAM)psz)
    (LRESULT)SNDMSG((hwnd), BCM_GETNOTELENGTH, 0, 0)
    (LRESULT)SNDMSG((hwnd), BCM_SETSHIELD, 0, (LPARAM)fRequired)
typedef struct tagNMBCDROPDOWN
{
    NMHDR hdr;
    RECT rcButton;
} NMBCDROPDOWN, * LPNMBCDROPDOWN;
        (BOOL)SNDMSG((hwnd), EM_SETCUEBANNER, 0, (LPARAM)(lpcwText))
        (BOOL)SNDMSG((hwnd), EM_SETCUEBANNER, (WPARAM)fDrawFocused, (LPARAM)lpcwText)
        (BOOL)SNDMSG((hwnd), EM_GETCUEBANNER, (WPARAM)(lpwText), (LPARAM)(cchText))
typedef struct _tagEDITBALLOONTIP
{
    DWORD cbStruct;
    LPCWSTR pszTitle;
    LPCWSTR pszText;
    INT ttiIcon;
} EDITBALLOONTIP, *PEDITBALLOONTIP;
        (BOOL)SNDMSG((hwnd), EM_SHOWBALLOONTIP, 0, (LPARAM)(peditballoontip))
        (BOOL)SNDMSG((hwnd), EM_HIDEBALLOONTIP, 0, 0)
typedef enum EC_ENDOFLINE {
    EC_ENDOFLINE_DETECTFROMCONTENT = 0,
    EC_ENDOFLINE_CRLF = 1,
    EC_ENDOFLINE_CR = 2,
    EC_ENDOFLINE_LF = 3,
} EC_ENDOFLINE;
        (DWORD)SNDMSG((hwndCtl), EM_SETEXTENDEDSTYLE, (dwMask), (dw))
        (DWORD)SNDMSG((hwndCtl), EM_GETEXTENDEDSTYLE, 0, 0)
        (DWORD)SNDMSG((hwndCtl), EM_SETENDOFLINE, (eolType), 0)
        (EC_ENDOFLINE)SNDMSG((hwndCtl), EM_GETENDOFLINE, 0, 0)
        (BOOL)SNDMSG((hwndCtl), EM_ENABLESEARCHWEB, (WPARAM)(enable), 0)
        (BOOL)SNDMSG((hwndCtl), EM_SEARCHWEB, 0, 0)
        (BOOL)SNDMSG((hwndCtl), EM_SETCARETINDEX, (WPARAM)(newCaretIndex), 0)
        (DWORD)SNDMSG((hwndCtl), EM_GETCARETINDEX, 0, 0)
        (BOOL)SNDMSG((hwndCtl), EM_GETZOOM, (WPARAM)(numerator), (LPARAM)(denominator))
        (BOOL)SNDMSG((hwndCtl), EM_SETZOOM, (WPARAM)(numerator), (LPARAM)(denominator))
        (DWORD)SNDMSG((hwndCtl), EM_FILELINEFROMCHAR, (WPARAM)(characterIndex), 0)
        (DWORD)SNDMSG((hwndCtl), EM_FILELINEINDEX, (WPARAM)(lineNumber), 0)
        (DWORD)SNDMSG((hwndCtl), EM_FILELINELENGTH, (WPARAM)(characterIndex), 0)
        (DWORD)SNDMSG((hwndCtl), EM_GETFILELINE, (WPARAM)(lineNumber), (LPARAM)(textBuffer))
        (DWORD)SNDMSG((hwndCtl), EM_GETFILELINECOUNT, 0, 0)
typedef enum EC_SEARCHWEB_ENTRYPOINT {
    EC_SEARCHWEB_ENTRYPOINT_EXTERNAL = 0,
    EC_SEARCHWEB_ENTRYPOINT_CONTEXTMENU = 1,
} EC_SEARCHWEB_ENTRYPOINT;
typedef struct NMSEARCHWEB
{
    NMHDR hdr;
    EC_SEARCHWEB_ENTRYPOINT entrypoint;
    BOOL hasQueryText;
    BOOL invokeSucceeded;
} NMSEARCHWEB;
            (BOOL)SNDMSG((hwnd), CB_SETMINVISIBLE, (WPARAM)(iMinVisible), 0)
            (int)SNDMSG((hwnd), CB_GETMINVISIBLE, 0, 0)
            (BOOL)SNDMSG((hwnd), CB_SETCUEBANNER, 0, (LPARAM)(lpcwText))
            (BOOL)SNDMSG((hwnd), CB_GETCUEBANNER, (WPARAM)(lpwText), (LPARAM)(cchText))
#include <pshpack1.h>
typedef HRESULT (CALLBACK *PFTASKDIALOGCALLBACK)(_In_ HWND hwnd, _In_ UINT msg, _In_ WPARAM wParam, _In_ LPARAM lParam, _In_ LONG_PTR lpRefData);
enum _TASKDIALOG_FLAGS
{
    TDF_ENABLE_HYPERLINKS = 0x0001,
    TDF_USE_HICON_MAIN = 0x0002,
    TDF_USE_HICON_FOOTER = 0x0004,
    TDF_ALLOW_DIALOG_CANCELLATION = 0x0008,
    TDF_USE_COMMAND_LINKS = 0x0010,
    TDF_USE_COMMAND_LINKS_NO_ICON = 0x0020,
    TDF_EXPAND_FOOTER_AREA = 0x0040,
    TDF_EXPANDED_BY_DEFAULT = 0x0080,
    TDF_VERIFICATION_FLAG_CHECKED = 0x0100,
    TDF_SHOW_PROGRESS_BAR = 0x0200,
    TDF_SHOW_MARQUEE_PROGRESS_BAR = 0x0400,
    TDF_CALLBACK_TIMER = 0x0800,
    TDF_POSITION_RELATIVE_TO_WINDOW = 0x1000,
    TDF_RTL_LAYOUT = 0x2000,
    TDF_NO_DEFAULT_RADIO_BUTTON = 0x4000,
    TDF_CAN_BE_MINIMIZED = 0x8000,
    TDF_NO_SET_FOREGROUND = 0x00010000,
    TDF_SIZE_TO_CONTENT = 0x01000000
};
typedef int TASKDIALOG_FLAGS;
typedef enum _TASKDIALOG_MESSAGES
{
    TDM_NAVIGATE_PAGE = WM_USER+101,
    TDM_CLICK_BUTTON = WM_USER+102,
    TDM_SET_MARQUEE_PROGRESS_BAR = WM_USER+103,
    TDM_SET_PROGRESS_BAR_STATE = WM_USER+104,
    TDM_SET_PROGRESS_BAR_RANGE = WM_USER+105,
    TDM_SET_PROGRESS_BAR_POS = WM_USER+106,
    TDM_SET_PROGRESS_BAR_MARQUEE = WM_USER+107,
    TDM_SET_ELEMENT_TEXT = WM_USER+108,
    TDM_CLICK_RADIO_BUTTON = WM_USER+110,
    TDM_ENABLE_BUTTON = WM_USER+111,
    TDM_ENABLE_RADIO_BUTTON = WM_USER+112,
    TDM_CLICK_VERIFICATION = WM_USER+113,
    TDM_UPDATE_ELEMENT_TEXT = WM_USER+114,
    TDM_SET_BUTTON_ELEVATION_REQUIRED_STATE = WM_USER+115,
    TDM_UPDATE_ICON = WM_USER+116
} TASKDIALOG_MESSAGES;
typedef enum _TASKDIALOG_NOTIFICATIONS
{
    TDN_CREATED = 0,
    TDN_NAVIGATED = 1,
    TDN_BUTTON_CLICKED = 2,
    TDN_HYPERLINK_CLICKED = 3,
    TDN_TIMER = 4,
    TDN_DESTROYED = 5,
    TDN_RADIO_BUTTON_CLICKED = 6,
    TDN_DIALOG_CONSTRUCTED = 7,
    TDN_VERIFICATION_CLICKED = 8,
    TDN_HELP = 9,
    TDN_EXPANDO_BUTTON_CLICKED = 10
} TASKDIALOG_NOTIFICATIONS;
typedef struct _TASKDIALOG_BUTTON
{
    int nButtonID;
    PCWSTR pszButtonText;
} TASKDIALOG_BUTTON;
typedef enum _TASKDIALOG_ELEMENTS
{
    TDE_CONTENT,
    TDE_EXPANDED_INFORMATION,
    TDE_FOOTER,
    TDE_MAIN_INSTRUCTION
} TASKDIALOG_ELEMENTS;
typedef enum _TASKDIALOG_ICON_ELEMENTS
{
    TDIE_ICON_MAIN,
    TDIE_ICON_FOOTER
} TASKDIALOG_ICON_ELEMENTS;
enum _TASKDIALOG_COMMON_BUTTON_FLAGS
{
    TDCBF_OK_BUTTON = 0x0001,
    TDCBF_YES_BUTTON = 0x0002,
    TDCBF_NO_BUTTON = 0x0004,
    TDCBF_CANCEL_BUTTON = 0x0008,
    TDCBF_RETRY_BUTTON = 0x0010,
    TDCBF_CLOSE_BUTTON = 0x0020
};
typedef int TASKDIALOG_COMMON_BUTTON_FLAGS;
typedef struct _TASKDIALOGCONFIG
{
    UINT cbSize;
    HWND hwndParent;
    HINSTANCE hInstance;
    TASKDIALOG_FLAGS dwFlags;
    TASKDIALOG_COMMON_BUTTON_FLAGS dwCommonButtons;
    PCWSTR pszWindowTitle;
    union
    {
        HICON hMainIcon;
        PCWSTR pszMainIcon;
    } DUMMYUNIONNAME;
    PCWSTR pszMainInstruction;
    PCWSTR pszContent;
    UINT cButtons;
    const TASKDIALOG_BUTTON *pButtons;
    int nDefaultButton;
    UINT cRadioButtons;
    const TASKDIALOG_BUTTON *pRadioButtons;
    int nDefaultRadioButton;
    PCWSTR pszVerificationText;
    PCWSTR pszExpandedInformation;
    PCWSTR pszExpandedControlText;
    PCWSTR pszCollapsedControlText;
    union
    {
        HICON hFooterIcon;
        PCWSTR pszFooterIcon;
    } DUMMYUNIONNAME2;
    PCWSTR pszFooter;
    PFTASKDIALOGCALLBACK pfCallback;
    LONG_PTR lpCallbackData;
    UINT cxWidth;
} TASKDIALOGCONFIG;
WINCOMMCTRLAPI HRESULT WINAPI TaskDialogIndirect(_In_ const TASKDIALOGCONFIG *pTaskConfig, _Out_opt_ int *pnButton, _Out_opt_ int *pnRadioButton, _Out_opt_ BOOL *pfVerificationFlagChecked);
WINCOMMCTRLAPI HRESULT WINAPI TaskDialog(_In_opt_ HWND hwndOwner, _In_opt_ HINSTANCE hInstance, _In_opt_ PCWSTR pszWindowTitle, _In_opt_ PCWSTR pszMainInstruction, _In_opt_ PCWSTR pszContent, TASKDIALOG_COMMON_BUTTON_FLAGS dwCommonButtons, _In_opt_ PCWSTR pszIcon, _Out_opt_ int *pnButton);
#include <poppack.h>
void WINAPI InitMUILanguage(LANGID uiLang);
LANGID WINAPI GetMUILanguage(void);
#include <dpa_dsa.h>
typedef struct tagTRACKMOUSEEVENT {
    DWORD cbSize;
    DWORD dwFlags;
    HWND hwndTrack;
    DWORD dwHoverTime;
} TRACKMOUSEEVENT, *LPTRACKMOUSEEVENT;
WINCOMMCTRLAPI
BOOL
WINAPI
_TrackMouseEvent(
    _Inout_ LPTRACKMOUSEEVENT lpEventTrack);
WINCOMMCTRLAPI BOOL WINAPI FlatSB_EnableScrollBar(HWND, int, UINT);
WINCOMMCTRLAPI BOOL WINAPI FlatSB_ShowScrollBar(HWND, int code, BOOL);
WINCOMMCTRLAPI BOOL WINAPI FlatSB_GetScrollRange(HWND, int code, LPINT, LPINT);
WINCOMMCTRLAPI BOOL WINAPI FlatSB_GetScrollInfo(HWND, int code, LPSCROLLINFO);
WINCOMMCTRLAPI int WINAPI FlatSB_GetScrollPos(HWND, int code);
WINCOMMCTRLAPI BOOL WINAPI FlatSB_GetScrollProp(HWND, int propIndex, LPINT);
WINCOMMCTRLAPI BOOL WINAPI FlatSB_GetScrollPropPtr(HWND, int propIndex, PINT_PTR);
WINCOMMCTRLAPI int WINAPI FlatSB_SetScrollPos(HWND, int code, int pos, BOOL fRedraw);
WINCOMMCTRLAPI int WINAPI FlatSB_SetScrollInfo(HWND, int code, LPSCROLLINFO psi, BOOL fRedraw);
WINCOMMCTRLAPI int WINAPI FlatSB_SetScrollRange(HWND, int code, int min, int max, BOOL fRedraw);
WINCOMMCTRLAPI BOOL WINAPI FlatSB_SetScrollProp(HWND, UINT index, INT_PTR newValue, BOOL);
WINCOMMCTRLAPI BOOL WINAPI InitializeFlatSB(HWND);
WINCOMMCTRLAPI HRESULT WINAPI UninitializeFlatSB(HWND);
typedef LRESULT (CALLBACK *SUBCLASSPROC)(HWND hWnd, UINT uMsg, WPARAM wParam,
    LPARAM lParam, UINT_PTR uIdSubclass, DWORD_PTR dwRefData);
_Success_(return) BOOL WINAPI SetWindowSubclass(_In_ HWND hWnd, _In_ SUBCLASSPROC pfnSubclass, _In_ UINT_PTR uIdSubclass,
    _In_ DWORD_PTR dwRefData);
_Success_(return) BOOL WINAPI GetWindowSubclass(_In_ HWND hWnd, _In_ SUBCLASSPROC pfnSubclass, _In_ UINT_PTR uIdSubclass,
    _Out_opt_ DWORD_PTR *pdwRefData);
_Success_(return) BOOL WINAPI RemoveWindowSubclass(_In_ HWND hWnd, _In_ SUBCLASSPROC pfnSubclass,
    _In_ UINT_PTR uIdSubclass);
LRESULT WINAPI DefSubclassProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
enum _LI_METRIC
{
   LIM_SMALL,
   LIM_LARGE,
};
WINCOMMCTRLAPI HRESULT WINAPI LoadIconMetric(HINSTANCE hinst, PCWSTR pszName, int lims, _Out_ HICON *phico);
WINCOMMCTRLAPI HRESULT WINAPI LoadIconWithScaleDown(HINSTANCE hinst, PCWSTR pszName, int cx, int cy, _Out_ HICON *phico);
int WINAPI DrawShadowText(_In_ HDC hdc, _In_reads_(cch) LPCWSTR pszText, _In_ UINT cch, _In_ RECT* prc, _In_ DWORD dwFlags, _In_ COLORREF crText, _In_ COLORREF crShadow,
    _In_ int ixOffset, _In_ int iyOffset);
}
#endif
#pragma endregion
