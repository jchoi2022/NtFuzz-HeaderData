#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <commctrl.h>
#include <SpecStrings.h>
typedef HANDLE HTHEME;
BOOL WINAPI
BeginPanningFeedback(
_In_ HWND hwnd);
BOOL WINAPI
UpdatePanningFeedback(
 _In_ HWND hwnd,
 _In_ LONG lTotalOverpanOffsetX,
 _In_ LONG lTotalOverpanOffsetY,
 _In_ BOOL fInInertia);
BOOL WINAPI
EndPanningFeedback(
 _In_ HWND hwnd,
 _In_ BOOL fAnimateBack);
typedef enum TA_PROPERTY
{
    TAP_FLAGS,
    TAP_TRANSFORMCOUNT,
    TAP_STAGGERDELAY,
    TAP_STAGGERDELAYCAP,
    TAP_STAGGERDELAYFACTOR,
    TAP_ZORDER,
} TA_PROPERTY;
typedef enum TA_PROPERTY_FLAG
{
    TAPF_NONE = 0x0,
    TAPF_HASSTAGGER = 0x1,
    TAPF_ISRTLAWARE = 0x2,
    TAPF_ALLOWCOLLECTION = 0x4,
    TAPF_HASBACKGROUND = 0x8,
    TAPF_HASPERSPECTIVE = 0x10,
} TA_PROPERTY_FLAG;
DEFINE_ENUM_FLAG_OPERATORS(TA_PROPERTY_FLAG);
THEMEAPI GetThemeAnimationProperty(
    _In_ HTHEME hTheme,
    _In_ int iStoryboardId,
    _In_ int iTargetId,
    _In_ TA_PROPERTY eProperty,
    _Out_writes_bytes_to_opt_(cbSize, *pcbSizeOut) VOID *pvProperty,
    _In_ DWORD cbSize,
    _Out_ DWORD *pcbSizeOut);
typedef enum TA_TRANSFORM_TYPE
{
    TATT_TRANSLATE_2D,
    TATT_SCALE_2D,
    TATT_OPACITY,
    TATT_CLIP,
} TA_TRANSFORM_TYPE;
typedef enum TA_TRANSFORM_FLAG
{
    TATF_NONE = 0x0,
    TATF_TARGETVALUES_USER = 0x1,
    TATF_HASINITIALVALUES = 0x2,
    TATF_HASORIGINVALUES = 0x4,
} TA_TRANSFORM_FLAG;
DEFINE_ENUM_FLAG_OPERATORS(TA_TRANSFORM_FLAG)
#include <pshpack8.h>
typedef struct TA_TRANSFORM
{
    TA_TRANSFORM_TYPE eTransformType;
    DWORD dwTimingFunctionId;
    DWORD dwStartTime;
    DWORD dwDurationTime;
    TA_TRANSFORM_FLAG eFlags;
} TA_TRANSFORM, *PTA_TRANSFORM;
typedef struct TA_TRANSFORM_2D
{
    TA_TRANSFORM header;
    float rX;
    float rY;
    float rInitialX;
    float rInitialY;
    float rOriginX;
    float rOriginY;
} TA_TRANSFORM_2D, *PTA_TRANSFORM_2D;
typedef struct TA_TRANSFORM_OPACITY
{
    TA_TRANSFORM header;
    float rOpacity;
    float rInitialOpacity;
} TA_TRANSFORM_OPACITY, *PTA_TRANSFORM_OPACITY;
typedef struct TA_TRANSFORM_CLIP
{
    TA_TRANSFORM header;
    float rLeft;
    float rTop;
    float rRight;
    float rBottom;
    float rInitialLeft;
    float rInitialTop;
    float rInitialRight;
    float rInitialBottom;
} TA_TRANSFORM_CLIP, *PTA_TRANSFORM_CLIP;
#include <poppack.h>
THEMEAPI GetThemeAnimationTransform(
    _In_ HTHEME hTheme,
    _In_ int iStoryboardId,
    _In_ int iTargetId,
    _In_ DWORD dwTransformIndex,
    _Out_writes_bytes_to_opt_(cbSize, *pcbSizeOut) TA_TRANSFORM *pTransform,
    _In_ DWORD cbSize,
    _Out_ DWORD *pcbSizeOut);
typedef enum TA_TIMINGFUNCTION_TYPE
{
    TTFT_UNDEFINED,
    TTFT_CUBIC_BEZIER,
} TA_TIMINGFUNCTION_TYPE;
#include <pshpack8.h>
typedef struct TA_TIMINGFUNCTION
{
    TA_TIMINGFUNCTION_TYPE eTimingFunctionType;
} TA_TIMINGFUNCTION, *PTA_TIMINGFUNCTION;
typedef struct TA_CUBIC_BEZIER
{
    TA_TIMINGFUNCTION header;
    float rX0;
    float rY0;
    float rX1;
    float rY1;
} TA_CUBIC_BEZIER, *PTA_CUBIC_BEZIER;
#include <poppack.h>
THEMEAPI GetThemeTimingFunction(
    _In_ HTHEME hTheme,
    _In_ int iTimingFunctionId,
    _Out_writes_bytes_to_opt_(cbSize, *pcbSizeOut) TA_TIMINGFUNCTION *pTimingFunction,
    _In_ DWORD cbSize,
    _Out_ DWORD *pcbSizeOut);
THEMEAPI_(HTHEME)
OpenThemeData(
    _In_opt_ HWND hwnd,
    _In_ LPCWSTR pszClassList
    );
                                 OTD_NONCLIENT)
THEMEAPI_(HTHEME)
OpenThemeDataForDpi(
    _In_opt_ HWND hwnd,
    _In_ LPCWSTR pszClassList,
    _In_ UINT dpi
    );
THEMEAPI_(HTHEME)
OpenThemeDataEx(
    _In_opt_ HWND hwnd,
    _In_ LPCWSTR pszClassList,
    _In_ DWORD dwFlags
    );
THEMEAPI
CloseThemeData(
    _In_ HTHEME hTheme
    );
THEMEAPI
DrawThemeBackground(
    _In_ HTHEME hTheme,
    _In_ HDC hdc,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ LPCRECT pRect,
    _In_opt_ LPCRECT pClipRect
    );
                                 DTBG_DRAWSOLID | \
                                 DTBG_OMITBORDER | \
                                 DTBG_OMITCONTENT | \
                                 DTBG_COMPUTINGREGION | \
                                 DTBG_MIRRORDC | \
                                 DTBG_NOMIRROR)
typedef struct _DTBGOPTS
{
    DWORD dwSize;
    DWORD dwFlags;
    RECT rcClip;
} DTBGOPTS, *PDTBGOPTS;
THEMEAPI
DrawThemeBackgroundEx(
    _In_ HTHEME hTheme,
    _In_ HDC hdc,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ LPCRECT pRect,
    _In_opt_ const DTBGOPTS *pOptions
    );
THEMEAPI
DrawThemeText(
    _In_ HTHEME hTheme,
    _In_ HDC hdc,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_reads_(cchText) LPCWSTR pszText,
    _In_ int cchText,
    _In_ DWORD dwTextFlags,
    _In_ DWORD dwTextFlags2,
    _In_ LPCRECT pRect
    );
THEMEAPI
GetThemeBackgroundContentRect(
    _In_ HTHEME hTheme,
    _In_opt_ HDC hdc,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ LPCRECT pBoundingRect,
    _Out_ LPRECT pContentRect
    );
THEMEAPI
GetThemeBackgroundExtent(
    _In_ HTHEME hTheme,
    _In_opt_ HDC hdc,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ LPCRECT pContentRect,
    _Out_ LPRECT pExtentRect
    );
THEMEAPI
GetThemeBackgroundRegion(
    _In_ HTHEME hTheme,
    _In_opt_ HDC hdc,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ LPCRECT pRect,
    _Out_ HRGN *pRegion
    );
enum THEMESIZE
{
    TS_MIN,
    TS_TRUE,
    TS_DRAW
};
THEMEAPI
GetThemePartSize(
    _In_ HTHEME hTheme,
    _In_opt_ HDC hdc,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_opt_ LPCRECT prc,
    _In_ enum THEMESIZE eSize,
    _Out_ SIZE *psz
    );
THEMEAPI
GetThemeTextExtent(
    _In_ HTHEME hTheme,
    _In_ HDC hdc,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_reads_(cchCharCount) LPCWSTR pszText,
    _In_ int cchCharCount,
    _In_ DWORD dwTextFlags,
    _In_opt_ LPCRECT pBoundingRect,
    _Out_ LPRECT pExtentRect
    );
THEMEAPI
GetThemeTextMetrics(
    _In_ HTHEME hTheme,
    _In_ HDC hdc,
    _In_ int iPartId,
    _In_ int iStateId,
    _Out_ TEXTMETRICW *ptm
    );
                                     HTTB_RESIZINGBORDER_TOP | \
                                     HTTB_RESIZINGBORDER_RIGHT | \
                                     HTTB_RESIZINGBORDER_BOTTOM)
THEMEAPI
HitTestThemeBackground(
    _In_ HTHEME hTheme,
    _In_opt_ HDC hdc,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ DWORD dwOptions,
    _In_ LPCRECT pRect,
    _In_opt_ HRGN hrgn,
    _In_ POINT ptTest,
    _Out_ WORD *pwHitTestCode
    );
THEMEAPI
DrawThemeEdge(
    _In_ HTHEME hTheme,
    _In_ HDC hdc,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ LPCRECT pDestRect,
    _In_ UINT uEdge,
    _In_ UINT uFlags,
    _Out_opt_ LPRECT pContentRect
    );
THEMEAPI
DrawThemeIcon(
    _In_ HTHEME hTheme,
    _In_ HDC hdc,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ LPCRECT pRect,
    _In_ HIMAGELIST himl,
    _In_ int iImageIndex
    );
THEMEAPI_(BOOL)
IsThemePartDefined(
    _In_ HTHEME hTheme,
    _In_ int iPartId,
    _In_ int iStateId
    );
THEMEAPI_(BOOL)
IsThemeBackgroundPartiallyTransparent(
    _In_ HTHEME hTheme,
    _In_ int iPartId,
    _In_ int iStateId
    );
THEMEAPI
GetThemeColor(
    _In_ HTHEME hTheme,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ int iPropId,
    _Out_ COLORREF *pColor
    );
THEMEAPI
GetThemeMetric(
    _In_ HTHEME hTheme,
    _In_opt_ HDC hdc,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ int iPropId,
    _Out_ int *piVal
    );
THEMEAPI
GetThemeString(
    _In_ HTHEME hTheme,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ int iPropId,
    _Out_writes_(cchMaxBuffChars) LPWSTR pszBuff,
    _In_ int cchMaxBuffChars
    );
THEMEAPI
GetThemeBool(
    _In_ HTHEME hTheme,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ int iPropId,
    _Out_ BOOL *pfVal
    );
THEMEAPI
GetThemeInt(
    _In_ HTHEME hTheme,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ int iPropId,
    _Out_ int *piVal
    );
THEMEAPI
GetThemeEnumValue(
    _In_ HTHEME hTheme,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ int iPropId,
    _Out_ int *piVal
    );
THEMEAPI
GetThemePosition(
    _In_ HTHEME hTheme,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ int iPropId,
    _Out_ POINT *pPoint
    );
THEMEAPI
GetThemeFont(
    _In_ HTHEME hTheme,
    _In_opt_ HDC hdc,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ int iPropId,
    _Out_ LOGFONTW *pFont
    );
THEMEAPI
GetThemeRect(
    _In_ HTHEME hTheme,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ int iPropId,
    _Out_ LPRECT pRect
    );
typedef struct _MARGINS
{
    int cxLeftWidth;
    int cxRightWidth;
    int cyTopHeight;
    int cyBottomHeight;
} MARGINS, *PMARGINS;
THEMEAPI
GetThemeMargins(
    _In_ HTHEME hTheme,
    _In_opt_ HDC hdc,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ int iPropId,
    _In_opt_ LPCRECT prc,
    _Out_ MARGINS *pMargins
    );
typedef struct _INTLIST
{
    int iValueCount;
    int iValues[MAX_INTLIST_COUNT];
} INTLIST, *PINTLIST;
THEMEAPI
GetThemeIntList(
    _In_ HTHEME hTheme,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ int iPropId,
    _Out_ INTLIST *pIntList
    );
enum PROPERTYORIGIN
{
    PO_STATE,
    PO_PART,
    PO_CLASS,
    PO_GLOBAL,
    PO_NOTFOUND
};
THEMEAPI
GetThemePropertyOrigin(
    _In_ HTHEME hTheme,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ int iPropId,
    _Out_ enum PROPERTYORIGIN *pOrigin
    );
THEMEAPI
SetWindowTheme(
    _In_ HWND hwnd,
    _In_opt_ LPCWSTR pszSubAppName,
    _In_opt_ LPCWSTR pszSubIdList
    );
THEMEAPI
GetThemeFilename(
    _In_ HTHEME hTheme,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ int iPropId,
    _Out_writes_(cchMaxBuffChars) LPWSTR pszThemeFileName,
    _In_ int cchMaxBuffChars
    );
THEMEAPI_(COLORREF)
GetThemeSysColor(
    _In_opt_ HTHEME hTheme,
    _In_ int iColorId
    );
THEMEAPI_(HBRUSH)
GetThemeSysColorBrush(
    _In_opt_ HTHEME hTheme,
    _In_ int iColorId
    );
THEMEAPI_(BOOL)
GetThemeSysBool(
    _In_opt_ HTHEME hTheme,
    _In_ int iBoolId
    );
THEMEAPI_(int)
GetThemeSysSize(
    _In_opt_ HTHEME hTheme,
    _In_ int iSizeId
    );
THEMEAPI
GetThemeSysFont(
    _In_opt_ HTHEME hTheme,
    _In_ int iFontId,
    _Out_ LOGFONTW *plf
    );
THEMEAPI
GetThemeSysString(
    _In_ HTHEME hTheme,
    _In_ int iStringId,
    _Out_writes_(cchMaxStringChars) LPWSTR pszStringBuff,
    _In_ int cchMaxStringChars
    );
THEMEAPI
GetThemeSysInt(
    _In_ HTHEME hTheme,
    _In_ int iIntId,
    _Out_ int *piValue
    );
THEMEAPI_(BOOL)
IsThemeActive(
    VOID
    );
THEMEAPI_(BOOL)
IsAppThemed(
    VOID
    );
THEMEAPI_(HTHEME)
GetWindowTheme(
    _In_ HWND hwnd
    );
                                     ETDT_USETABTEXTURE)
                                     ETDT_USEAEROWIZARDTABTEXTURE)
                                     ETDT_ENABLE | \
                                     ETDT_USETABTEXTURE | \
                                     ETDT_USEAEROWIZARDTABTEXTURE)
THEMEAPI
EnableThemeDialogTexture(
    _In_ HWND hwnd,
    _In_ DWORD dwFlags
    );
THEMEAPI_(BOOL)
IsThemeDialogTextureEnabled(
    _In_ HWND hwnd
    );
                                 STAP_ALLOW_CONTROLS | \
                                 STAP_ALLOW_WEBCONTENT)
THEMEAPI_(DWORD)
GetThemeAppProperties(
    VOID
    );
THEMEAPI_(void)
SetThemeAppProperties(
    _In_ DWORD dwFlags
    );
THEMEAPI GetCurrentThemeName(
    _Out_writes_(cchMaxNameChars) LPWSTR pszThemeFileName,
    _In_ int cchMaxNameChars,
    _Out_writes_opt_(cchMaxColorChars) LPWSTR pszColorBuff,
    _In_ int cchMaxColorChars,
    _Out_writes_opt_(cchMaxSizeChars) LPWSTR pszSizeBuff,
    _In_ int cchMaxSizeChars
    );
THEMEAPI
GetThemeDocumentationProperty(
    _In_ LPCWSTR pszThemeName,
    _In_ LPCWSTR pszPropertyName,
    _Out_writes_(cchMaxValChars) LPWSTR pszValueBuff,
    _In_ int cchMaxValChars
    );
THEMEAPI
DrawThemeParentBackground(
    _In_ HWND hwnd,
    _In_ HDC hdc,
    _In_opt_ const RECT* prc
    );
THEMEAPI
EnableTheming(
    _In_ BOOL fEnable
    );
                         GBF_COPY)
THEMEAPI
DrawThemeParentBackgroundEx(
    _In_ HWND hwnd,
    _In_ HDC hdc,
    _In_ DWORD dwFlags,
    _In_opt_ const RECT* prc
    );
enum WINDOWTHEMEATTRIBUTETYPE
{
    WTA_NONCLIENT = 1
};
typedef struct _WTA_OPTIONS
{
    DWORD dwFlags;
    DWORD dwMask;
} WTA_OPTIONS, *PWTA_OPTIONS;
                                   WTNCA_NODRAWICON | \
                                   WTNCA_NOSYSMENU | \
                                   WTNCA_NOMIRRORHELP)
THEMEAPI
SetWindowThemeAttribute(
    _In_ HWND hwnd,
    _In_ enum WINDOWTHEMEATTRIBUTETYPE eAttribute,
    _In_reads_bytes_(cbAttribute) PVOID pvAttribute,
    _In_ DWORD cbAttribute
    );
__inline HRESULT SetWindowThemeNonClientAttributes(HWND hwnd, DWORD dwMask, DWORD dwAttributes)
{
    WTA_OPTIONS wta;
    wta.dwFlags = dwAttributes;
    wta.dwMask = dwMask;
    return SetWindowThemeAttribute(hwnd, WTA_NONCLIENT, (void*)&(wta), sizeof(wta));
}
typedef
int
(WINAPI *DTT_CALLBACK_PROC)
(
    _In_ HDC hdc,
    _Inout_updates_(cchText) LPWSTR pszText,
    _In_ int cchText,
    _Inout_ LPRECT prc,
    _In_ UINT dwFlags,
    _In_ LPARAM lParam);
                             DTT_BORDERCOLOR | \
                             DTT_SHADOWCOLOR | \
                             DTT_SHADOWTYPE | \
                             DTT_SHADOWOFFSET | \
                             DTT_BORDERSIZE | \
                             DTT_FONTPROP | \
                             DTT_COLORPROP | \
                             DTT_STATEID | \
                             DTT_CALCRECT | \
                             DTT_APPLYOVERLAY | \
                             DTT_GLOWSIZE | \
                             DTT_COMPOSITED)
typedef struct _DTTOPTS
{
    DWORD dwSize;
    DWORD dwFlags;
    COLORREF crText;
    COLORREF crBorder;
    COLORREF crShadow;
    int iTextShadowType;
    POINT ptShadowOffset;
    int iBorderSize;
    int iFontPropId;
    int iColorPropId;
    int iStateId;
    BOOL fApplyOverlay;
    int iGlowSize;
    DTT_CALLBACK_PROC pfnDrawTextCallback;
    LPARAM lParam;
} DTTOPTS, *PDTTOPTS;
THEMEAPI
DrawThemeTextEx(
    _In_ HTHEME hTheme,
    _In_ HDC hdc,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_reads_(cchText) LPCWSTR pszText,
    _In_ int cchText,
    _In_ DWORD dwTextFlags,
    _Inout_ LPRECT pRect,
    _In_opt_ const DTTOPTS *pOptions
    );
THEMEAPI
GetThemeBitmap(
    _In_ HTHEME hTheme,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ int iPropId,
    _In_ ULONG dwFlags,
    _Out_ HBITMAP* phBitmap
    );
THEMEAPI
GetThemeStream(
    _In_ HTHEME hTheme,
    _In_ int iPartId,
    _In_ int iStateId,
    _In_ int iPropId,
    _Out_ VOID **ppvStream,
    _Out_opt_ DWORD *pcbStream,
    _In_opt_ HINSTANCE hInst
    );
THEMEAPI
BufferedPaintInit(
    VOID
    );
THEMEAPI
BufferedPaintUnInit(
    VOID
    );
typedef HANDLE HPAINTBUFFER;
typedef enum _BP_BUFFERFORMAT
{
    BPBF_COMPATIBLEBITMAP,
    BPBF_DIB,
    BPBF_TOPDOWNDIB,
    BPBF_TOPDOWNMONODIB
} BP_BUFFERFORMAT;
typedef enum _BP_ANIMATIONSTYLE
{
    BPAS_NONE,
    BPAS_LINEAR,
    BPAS_CUBIC,
    BPAS_SINE
} BP_ANIMATIONSTYLE;
typedef struct _BP_ANIMATIONPARAMS
{
    DWORD cbSize;
    DWORD dwFlags;
    BP_ANIMATIONSTYLE style;
    DWORD dwDuration;
} BP_ANIMATIONPARAMS, *PBP_ANIMATIONPARAMS;
typedef struct _BP_PAINTPARAMS
{
    DWORD cbSize;
    DWORD dwFlags;
    const RECT * prcExclude;
    const BLENDFUNCTION * pBlendFunction;
} BP_PAINTPARAMS, *PBP_PAINTPARAMS;
THEMEAPI_(_Success_(return != NULL) HPAINTBUFFER)
BeginBufferedPaint(
    _In_ HDC hdcTarget,
    _In_ const RECT* prcTarget,
    _In_ BP_BUFFERFORMAT dwFormat,
    _In_opt_ BP_PAINTPARAMS *pPaintParams,
    _Out_ HDC *phdc
    );
THEMEAPI
EndBufferedPaint(
    _In_ HPAINTBUFFER hBufferedPaint,
    _In_ BOOL fUpdateTarget
    );
THEMEAPI
GetBufferedPaintTargetRect(
    _In_ HPAINTBUFFER hBufferedPaint,
    _Out_ RECT *prc
    );
THEMEAPI_(HDC)
GetBufferedPaintTargetDC(
    _In_ HPAINTBUFFER hBufferedPaint
    );
THEMEAPI_(HDC)
GetBufferedPaintDC(
    _In_ HPAINTBUFFER hBufferedPaint
    );
THEMEAPI
GetBufferedPaintBits(
    _In_ HPAINTBUFFER hBufferedPaint,
    _Out_ RGBQUAD **ppbBuffer,
    _Out_ int *pcxRow
    );
THEMEAPI
BufferedPaintClear(
    _In_ HPAINTBUFFER hBufferedPaint,
    _In_opt_ const RECT *prc
    );
THEMEAPI
BufferedPaintSetAlpha(
    _In_ HPAINTBUFFER hBufferedPaint,
    _In_opt_ const RECT *prc,
    _In_ BYTE alpha
    );
THEMEAPI
BufferedPaintStopAllAnimations(
    _In_ HWND hwnd
    );
typedef HANDLE HANIMATIONBUFFER;
THEMEAPI_(HANIMATIONBUFFER)
BeginBufferedAnimation(
    _In_ HWND hwnd,
    _In_ HDC hdcTarget,
    _In_ const RECT* prcTarget,
    _In_ BP_BUFFERFORMAT dwFormat,
    _In_opt_ BP_PAINTPARAMS *pPaintParams,
    _In_ BP_ANIMATIONPARAMS *pAnimationParams,
    _Out_ HDC *phdcFrom,
    _Out_ HDC *phdcTo
    );
THEMEAPI
EndBufferedAnimation(
    _In_ HANIMATIONBUFFER hbpAnimation,
    _In_ BOOL fUpdateTarget
    );
THEMEAPI_(BOOL)
BufferedPaintRenderAnimation(
    _In_ HWND hwnd,
    _In_ HDC hdcTarget
    );
THEMEAPI_(BOOL) IsCompositionActive();
THEMEAPI
GetThemeTransitionDuration(
    _In_ HTHEME hTheme,
    _In_ int iPartId,
    _In_ int iStateIdFrom,
    _In_ int iStateIdTo,
    _In_ int iPropId,
    _Out_ DWORD *pdwDuration
    );
#endif
#pragma endregion
