#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C const IID IID_ITextServices;
EXTERN_C const IID IID_ITextHost;
EXTERN_C const IID IID_IRicheditWindowlessAccessibility;
EXTERN_C const IID IID_IRichEditUiaInformation;
EXTERN_C const IID IID_IRicheditUiaOverrides;
 MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_ITF, 0x201)
enum TXTBACKSTYLE {
 TXTBACK_TRANSPARENT = 0,
 TXTBACK_OPAQUE,
};
enum TXTHITRESULT {
 TXTHITRESULT_NOHIT = 0,
 TXTHITRESULT_TRANSPARENT = 1,
 TXTHITRESULT_CLOSE = 2,
 TXTHITRESULT_HIT = 3
};
enum TXTNATURALSIZE {
 TXTNS_FITTOCONTENT2 = 0,
 TXTNS_FITTOCONTENT = 1,
 TXTNS_ROUNDTOLINE = 2,
 TXTNS_FITTOCONTENT3 = 3,
 TXTNS_FITTOCONTENTWSP = 4,
 TXTNS_INCLUDELASTLINE = 0x40000000,
 TXTNS_EMU = 0x80000000
};
enum TXTVIEW {
 TXTVIEW_ACTIVE = 0,
 TXTVIEW_INACTIVE = -1
};
enum CHANGETYPE
{
 CN_GENERIC = 0,
 CN_TEXTCHANGED = 1,
 CN_NEWUNDO = 2,
 CN_NEWREDO = 4
};
struct CHANGENOTIFY {
 DWORD dwChangeType;
 void * pvCookieData;
};
class ITextServices : public IUnknown
{
public:
 virtual HRESULT TxSendMessage(
       UINT msg,
       WPARAM wparam,
       LPARAM lparam,
       LRESULT *plresult) = 0;
 virtual HRESULT TxDraw(
       DWORD dwDrawAspect,
       LONG lindex,
       void * pvAspect,
       DVTARGETDEVICE * ptd,
       HDC hdcDraw,
       HDC hicTargetDev,
       LPCRECTL lprcBounds,
       LPCRECTL lprcWBounds,
       LPRECT lprcUpdate,
       BOOL (CALLBACK * pfnContinue) (DWORD),
       DWORD dwContinue,
       LONG lViewId) = 0;
 virtual HRESULT TxGetHScroll(
       LONG *plMin,
       LONG *plMax,
       LONG *plPos,
       LONG *plPage,
       BOOL * pfEnabled ) = 0;
 virtual HRESULT TxGetVScroll(
       LONG *plMin,
       LONG *plMax,
       LONG *plPos,
       LONG *plPage,
       BOOL * pfEnabled ) = 0;
 virtual HRESULT OnTxSetCursor(
       DWORD dwDrawAspect,
       LONG lindex,
       void * pvAspect,
       DVTARGETDEVICE * ptd,
       HDC hdcDraw,
       HDC hicTargetDev,
       LPCRECT lprcClient,
       INT x,
       INT y) = 0;
 virtual HRESULT TxQueryHitPoint(
       DWORD dwDrawAspect,
       LONG lindex,
       void * pvAspect,
       DVTARGETDEVICE * ptd,
       HDC hdcDraw,
       HDC hicTargetDev,
       LPCRECT lprcClient,
       INT x,
       INT y,
       DWORD * pHitResult) = 0;
 virtual HRESULT OnTxInPlaceActivate(LPCRECT prcClient) = 0;
 virtual HRESULT OnTxInPlaceDeactivate() = 0;
 virtual HRESULT OnTxUIActivate() = 0;
 virtual HRESULT OnTxUIDeactivate() = 0;
 virtual HRESULT TxGetText(BSTR *pbstrText) = 0;
 virtual HRESULT TxSetText(LPCWSTR pszText) = 0;
 virtual HRESULT TxGetCurTargetX(LONG *) = 0;
 virtual HRESULT TxGetBaseLinePos(LONG *) = 0;
 virtual HRESULT TxGetNaturalSize(
       DWORD dwAspect,
       HDC hdcDraw,
       HDC hicTargetDev,
       DVTARGETDEVICE *ptd,
       DWORD dwMode,
       const SIZEL *psizelExtent,
       LONG *pwidth,
       LONG *pheight) = 0;
 virtual HRESULT TxGetDropTarget( IDropTarget **ppDropTarget ) = 0;
 virtual HRESULT OnTxPropertyBitsChange(DWORD dwMask, DWORD dwBits) = 0;
 virtual HRESULT TxGetCachedSize(DWORD *pdwWidth, DWORD *pdwHeight)=0;
};
enum CARET_FLAGS
{
 CARET_NONE = 0,
 CARET_CUSTOM = 1,
 CARET_RTL = 2,
 CARET_ITALIC = 32,
 CARET_NULL = 64,
 CARET_ROTATE90 = 128
};
union CARET_INFO
{
 HBITMAP hbitmap;
 CARET_FLAGS caretFlags;
 CARET_INFO(HBITMAP hbmp) : hbitmap(hbmp) {};
 CARET_INFO(CARET_FLAGS flags) : caretFlags(flags) {};
 operator const HBITMAP () const { return hbitmap; };
 operator const CARET_FLAGS () const { return caretFlags; };
};
class ITextHost : public IUnknown
{
public:
 virtual HDC TxGetDC() = 0;
 virtual INT TxReleaseDC(HDC hdc) = 0;
 virtual BOOL TxShowScrollBar(INT fnBar, BOOL fShow) = 0;
 virtual BOOL TxEnableScrollBar (INT fuSBFlags, INT fuArrowflags) = 0;
 virtual BOOL TxSetScrollRange(
       INT fnBar,
       LONG nMinPos,
       INT nMaxPos,
       BOOL fRedraw) = 0;
 virtual BOOL TxSetScrollPos (INT fnBar, INT nPos, BOOL fRedraw) = 0;
 virtual void TxInvalidateRect(LPCRECT prc, BOOL fMode) = 0;
 virtual void TxViewChange(BOOL fUpdate) = 0;
 virtual BOOL TxCreateCaret(HBITMAP hbmp, INT xWidth, INT yHeight) = 0;
 virtual BOOL TxShowCaret(BOOL fShow) = 0;
 virtual BOOL TxSetCaretPos(INT x, INT y) = 0;
 virtual BOOL TxSetTimer(UINT idTimer, UINT uTimeout) = 0;
 virtual void TxKillTimer(UINT idTimer) = 0;
 virtual void TxScrollWindowEx (
       INT dx,
       INT dy,
       LPCRECT lprcScroll,
       LPCRECT lprcClip,
       HRGN hrgnUpdate,
       LPRECT lprcUpdate,
       UINT fuScroll) = 0;
 virtual void TxSetCapture(BOOL fCapture) = 0;
 virtual void TxSetFocus() = 0;
 virtual void TxSetCursor(HCURSOR hcur, BOOL fText) = 0;
 virtual BOOL TxScreenToClient (LPPOINT lppt) = 0;
 virtual BOOL TxClientToScreen (LPPOINT lppt) = 0;
 virtual HRESULT TxActivate( LONG * plOldState ) = 0;
 virtual HRESULT TxDeactivate( LONG lNewState ) = 0;
 virtual HRESULT TxGetClientRect(LPRECT prc) = 0;
 virtual HRESULT TxGetViewInset(LPRECT prc) = 0;
 virtual HRESULT TxGetCharFormat(const CHARFORMATW **ppCF ) = 0;
 virtual HRESULT TxGetParaFormat(const PARAFORMAT **ppPF) = 0;
 virtual COLORREF TxGetSysColor(int nIndex) = 0;
 virtual HRESULT TxGetBackStyle(TXTBACKSTYLE *pstyle) = 0;
 virtual HRESULT TxGetMaxLength(DWORD *plength) = 0;
 virtual HRESULT TxGetScrollBars(DWORD *pdwScrollBar) = 0;
 virtual HRESULT TxGetPasswordChar(_Out_ TCHAR *pch) = 0;
 virtual HRESULT TxGetAcceleratorPos(LONG *pcp) = 0;
 virtual HRESULT TxGetExtent(LPSIZEL lpExtent) = 0;
 virtual HRESULT OnTxCharFormatChange (const CHARFORMATW * pCF) = 0;
 virtual HRESULT OnTxParaFormatChange (const PARAFORMAT * pPF) = 0;
 virtual HRESULT TxGetPropertyBits(DWORD dwMask, DWORD *pdwBits) = 0;
 virtual HRESULT TxNotify(DWORD iNotify, void *pv) = 0;
 virtual HIMC TxImmGetContext() = 0;
 virtual void TxImmReleaseContext( HIMC himc ) = 0;
 virtual HRESULT TxGetSelectionBarWidth (LONG *lSelBarWidth) = 0;
};
interface IRawElementProviderWindowlessSite;
interface IRawElementProviderSimple;
interface IRicheditWindowlessAccessibility : public IUnknown
{
 virtual HRESULT STDMETHODCALLTYPE CreateProvider(
  IRawElementProviderWindowlessSite *pSite,
  IRawElementProviderSimple **ppProvider) = 0;
};
struct UiaRect;
interface IRichEditUiaInformation : public IUnknown
{
 virtual HRESULT STDMETHODCALLTYPE GetBoundaryRectangle(UiaRect *pUiaRect) = 0;
 virtual HRESULT STDMETHODCALLTYPE IsVisible() = 0;
};
typedef int PROPERTYID;
interface IRicheditUiaOverrides : public IUnknown
{
 virtual HRESULT STDMETHODCALLTYPE GetPropertyOverrideValue(
  PROPERTYID propertyId,
  VARIANT *pRetValue) = 0;
};
STDAPI CreateTextServices(
 IUnknown *punkOuter,
 ITextHost *pITextHost,
 IUnknown **ppUnk);
typedef HRESULT (STDAPICALLTYPE * PCreateTextServices)(
 IUnknown *punkOuter,
 ITextHost *pITextHost,
 IUnknown **ppUnk);
STDAPI ShutdownTextServices(IUnknown *pTextServices);
typedef HRESULT (STDAPICALLTYPE * PShutdownTextServices)(
 IUnknown *pTextServices);
EXTERN_C const IID IID_ITextServices2;
EXTERN_C const IID IID_ITextHost2;
interface ID2D1RenderTarget;
class ITextHost2 : public ITextHost
{
public:
 virtual BOOL TxIsDoubleClickPending() = 0;
 virtual HRESULT TxGetWindow(HWND *phwnd) = 0;
 virtual HRESULT TxSetForegroundWindow() = 0;
 virtual HPALETTE TxGetPalette() = 0;
 virtual HRESULT TxGetEastAsianFlags(LONG *pFlags) = 0;
 virtual HCURSOR TxSetCursor2(HCURSOR hcur, BOOL bText) = 0;
 virtual void TxFreeTextServicesNotification() = 0;
 virtual HRESULT TxGetEditStyle(DWORD dwItem, DWORD *pdwData) = 0;
 virtual HRESULT TxGetWindowStyles(DWORD *pdwStyle, DWORD *pdwExStyle) = 0;
 virtual HRESULT TxShowDropCaret(BOOL fShow, HDC hdc, LPCRECT prc) = 0;
 virtual HRESULT TxDestroyCaret() = 0;
 virtual HRESULT TxGetHorzExtent(LONG *plHorzExtent) = 0;
};
class ITextServices2 : public ITextServices
{
public:
 virtual HRESULT TxGetNaturalSize2(
       DWORD dwAspect,
       HDC hdcDraw,
       HDC hicTargetDev,
       DVTARGETDEVICE *ptd,
       DWORD dwMode,
       const SIZEL *psizelExtent,
       LONG *pwidth,
       LONG *pheight,
       LONG *pascent) = 0;
 virtual HRESULT TxDrawD2D(
       ID2D1RenderTarget* pRenderTarget,
       LPCRECTL lprcBounds,
       LPRECT lprcUpdate,
       LONG lViewId) = 0;
};
#endif
#pragma endregion
