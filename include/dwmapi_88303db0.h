#include <winapifamily.h>
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <wtypes.h>
#include <uxtheme.h>
#include <pshpack1.h>
typedef struct _DWM_BLURBEHIND
{
    DWORD dwFlags;
    BOOL fEnable;
    HRGN hRgnBlur;
    BOOL fTransitionOnMaximized;
} DWM_BLURBEHIND, *PDWM_BLURBEHIND;
enum DWMWINDOWATTRIBUTE
{
    DWMWA_NCRENDERING_ENABLED = 1,
    DWMWA_NCRENDERING_POLICY,
    DWMWA_TRANSITIONS_FORCEDISABLED,
    DWMWA_ALLOW_NCPAINT,
    DWMWA_CAPTION_BUTTON_BOUNDS,
    DWMWA_NONCLIENT_RTL_LAYOUT,
    DWMWA_FORCE_ICONIC_REPRESENTATION,
    DWMWA_FLIP3D_POLICY,
    DWMWA_EXTENDED_FRAME_BOUNDS,
    DWMWA_HAS_ICONIC_BITMAP,
    DWMWA_DISALLOW_PEEK,
    DWMWA_EXCLUDED_FROM_PEEK,
    DWMWA_CLOAK,
    DWMWA_CLOAKED,
    DWMWA_FREEZE_REPRESENTATION,
    DWMWA_LAST
};
enum DWMNCRENDERINGPOLICY
{
    DWMNCRP_USEWINDOWSTYLE,
    DWMNCRP_DISABLED,
    DWMNCRP_ENABLED,
    DWMNCRP_LAST
};
enum DWMFLIP3DWINDOWPOLICY
{
    DWMFLIP3D_DEFAULT,
    DWMFLIP3D_EXCLUDEBELOW,
    DWMFLIP3D_EXCLUDEABOVE,
    DWMFLIP3D_LAST
};
#pragma region Thumbnails
typedef HANDLE HTHUMBNAIL;
typedef HTHUMBNAIL* PHTHUMBNAIL;
#pragma region Flags for DWM_THUMBNAIL_PROPERTIES
#pragma endregion
typedef struct _DWM_THUMBNAIL_PROPERTIES
{
    DWORD dwFlags;
    RECT rcDestination;
    RECT rcSource;
    BYTE opacity;
    BOOL fVisible;
    BOOL fSourceClientAreaOnly;
} DWM_THUMBNAIL_PROPERTIES, *PDWM_THUMBNAIL_PROPERTIES;
#pragma endregion
typedef ULONGLONG DWM_FRAME_COUNT;
typedef ULONGLONG QPC_TIME;
typedef struct _UNSIGNED_RATIO
{
    UINT32 uiNumerator;
    UINT32 uiDenominator;
} UNSIGNED_RATIO;
typedef struct _DWM_TIMING_INFO
{
    UINT32 cbSize;
    UNSIGNED_RATIO rateRefresh;
    QPC_TIME qpcRefreshPeriod;
    UNSIGNED_RATIO rateCompose;
    QPC_TIME qpcVBlank;
    DWM_FRAME_COUNT cRefresh;
    UINT cDXRefresh;
    QPC_TIME qpcCompose;
    DWM_FRAME_COUNT cFrame;
    UINT cDXPresent;
    DWM_FRAME_COUNT cRefreshFrame;
    DWM_FRAME_COUNT cFrameSubmitted;
    UINT cDXPresentSubmitted;
    DWM_FRAME_COUNT cFrameConfirmed;
    UINT cDXPresentConfirmed;
    DWM_FRAME_COUNT cRefreshConfirmed;
    UINT cDXRefreshConfirmed;
    DWM_FRAME_COUNT cFramesLate;
    UINT cFramesOutstanding;
    DWM_FRAME_COUNT cFrameDisplayed;
    QPC_TIME qpcFrameDisplayed;
    DWM_FRAME_COUNT cRefreshFrameDisplayed;
    DWM_FRAME_COUNT cFrameComplete;
    QPC_TIME qpcFrameComplete;
    DWM_FRAME_COUNT cFramePending;
    QPC_TIME qpcFramePending;
    DWM_FRAME_COUNT cFramesDisplayed;
    DWM_FRAME_COUNT cFramesComplete;
    DWM_FRAME_COUNT cFramesPending;
    DWM_FRAME_COUNT cFramesAvailable;
    DWM_FRAME_COUNT cFramesDropped;
    DWM_FRAME_COUNT cFramesMissed;
    DWM_FRAME_COUNT cRefreshNextDisplayed;
    DWM_FRAME_COUNT cRefreshNextPresented;
    DWM_FRAME_COUNT cRefreshesDisplayed;
    DWM_FRAME_COUNT cRefreshesPresented;
    DWM_FRAME_COUNT cRefreshStarted;
    ULONGLONG cPixelsReceived;
    ULONGLONG cPixelsDrawn;
    DWM_FRAME_COUNT cBuffersEmpty;
} DWM_TIMING_INFO;
typedef enum
{
    DWM_SOURCE_FRAME_SAMPLING_POINT,
    DWM_SOURCE_FRAME_SAMPLING_COVERAGE,
    DWM_SOURCE_FRAME_SAMPLING_LAST
} DWM_SOURCE_FRAME_SAMPLING;
EXTERN_C __declspec(selectany) const UINT c_DwmMaxQueuedBuffers = 8;
EXTERN_C __declspec(selectany) const UINT c_DwmMaxMonitors = 16;
EXTERN_C __declspec(selectany) const UINT c_DwmMaxAdapters = 16;
#pragma warning(push)
#pragma warning(disable:4201)
typedef struct _DWM_PRESENT_PARAMETERS
{
    UINT32 cbSize;
    BOOL fQueue;
    DWM_FRAME_COUNT cRefreshStart;
    UINT cBuffer;
    BOOL fUseSourceRate;
    UNSIGNED_RATIO rateSource;
    UINT cRefreshesPerFrame;
    DWM_SOURCE_FRAME_SAMPLING eSampling;
} DWM_PRESENT_PARAMETERS;
#pragma warning(pop)
DWMAPI_(BOOL)
DwmDefWindowProc(
    _In_ HWND hWnd,
    UINT msg,
    WPARAM wParam,
    LPARAM lParam,
    _Out_ LRESULT *plResult
    );
DWMAPI
DwmEnableBlurBehindWindow(
    HWND hWnd,
    _In_ const DWM_BLURBEHIND* pBlurBehind
    );
DWMAPI
DwmEnableComposition(
    UINT uCompositionAction
    );
#pragma deprecated (DwmEnableComposition)
DWMAPI
DwmEnableMMCSS(
    BOOL fEnableMMCSS
    );
DWMAPI
DwmExtendFrameIntoClientArea(
    HWND hWnd,
    _In_ const MARGINS* pMarInset
    );
DWMAPI
DwmGetColorizationColor(
    _Out_ DWORD* pcrColorization,
    _Out_ BOOL* pfOpaqueBlend
    );
DWMAPI
DwmGetCompositionTimingInfo(
    HWND hwnd,
    _Out_ DWM_TIMING_INFO* pTimingInfo
    );
DWMAPI
DwmGetWindowAttribute(
    HWND hwnd,
    DWORD dwAttribute,
    _Out_writes_bytes_(cbAttribute) PVOID pvAttribute,
    DWORD cbAttribute
    );
DWMAPI
DwmIsCompositionEnabled(
    _Out_ BOOL* pfEnabled
    );
DWMAPI
DwmModifyPreviousDxFrameDuration(
    HWND hwnd,
    INT cRefreshes,
    BOOL fRelative
    );
DWMAPI
DwmQueryThumbnailSourceSize(
    HTHUMBNAIL hThumbnail,
    _Out_ PSIZE pSize
    );
DWMAPI
DwmRegisterThumbnail(
    HWND hwndDestination,
    HWND hwndSource,
    _Out_ PHTHUMBNAIL phThumbnailId
    );
DWMAPI
DwmSetDxFrameDuration(
    HWND hwnd,
    INT cRefreshes
    );
DWMAPI
DwmSetPresentParameters(
    HWND hwnd,
   _Inout_ DWM_PRESENT_PARAMETERS* pPresentParams
    );
DWMAPI
DwmSetWindowAttribute(
    HWND hwnd,
    DWORD dwAttribute,
    _In_reads_bytes_(cbAttribute) LPCVOID pvAttribute,
    DWORD cbAttribute
    );
DWMAPI
DwmUnregisterThumbnail(
    HTHUMBNAIL hThumbnailId
    );
DWMAPI
DwmUpdateThumbnailProperties(
    HTHUMBNAIL hThumbnailId,
    _In_ const DWM_THUMBNAIL_PROPERTIES* ptnProperties
    );
DWMAPI DwmSetIconicThumbnail(
    HWND hwnd,
    HBITMAP hbmp,
    DWORD dwSITFlags
    );
DWMAPI DwmSetIconicLivePreviewBitmap(
    HWND hwnd,
    HBITMAP hbmp,
    _In_opt_ POINT *pptClient,
    DWORD dwSITFlags
    );
DWMAPI DwmInvalidateIconicBitmaps(
    HWND hwnd
    );
DWMAPI
DwmAttachMilContent(
    _In_ HWND hwnd
    );
DWMAPI
DwmDetachMilContent(
    _In_ HWND hwnd
    );
DWMAPI
DwmFlush();
typedef struct _MilMatrix3x2D
{
    DOUBLE S_11;
    DOUBLE S_12;
    DOUBLE S_21;
    DOUBLE S_22;
    DOUBLE DX;
    DOUBLE DY;
} MilMatrix3x2D;
typedef MilMatrix3x2D MIL_MATRIX3X2D;
DWMAPI
DwmGetGraphicsStreamTransformHint(
    UINT uIndex,
    _Out_ MilMatrix3x2D *pTransform
    );
DWMAPI
DwmGetGraphicsStreamClient(
    UINT uIndex,
    _Out_ UUID *pClientUuid
    );
DWMAPI
DwmGetTransportAttributes(
    _Out_writes_(1) BOOL *pfIsRemoting,
    _Out_writes_(1) BOOL *pfIsConnected,
    _Out_writes_(1) DWORD *pDwGeneration
    );
enum DWMTRANSITION_OWNEDWINDOW_TARGET
{
    DWMTRANSITION_OWNEDWINDOW_NULL = -1,
    DWMTRANSITION_OWNEDWINDOW_REPOSITION = 0,
};
DWMAPI
DwmTransitionOwnedWindow(
    HWND hwnd,
    enum DWMTRANSITION_OWNEDWINDOW_TARGET target
    );
enum GESTURE_TYPE
{
    GT_PEN_TAP = 0,
    GT_PEN_DOUBLETAP = 1,
    GT_PEN_RIGHTTAP = 2,
    GT_PEN_PRESSANDHOLD = 3,
    GT_PEN_PRESSANDHOLDABORT = 4,
    GT_TOUCH_TAP = 5,
    GT_TOUCH_DOUBLETAP = 6,
    GT_TOUCH_RIGHTTAP = 7,
    GT_TOUCH_PRESSANDHOLD = 8,
    GT_TOUCH_PRESSANDHOLDABORT = 9,
    GT_TOUCH_PRESSANDTAP = 10,
};
DWMAPI
DwmRenderGesture(
    _In_ enum GESTURE_TYPE gt,
    _In_ UINT cContacts,
    _In_reads_(cContacts) const DWORD *pdwPointerID,
    _In_reads_(cContacts) const POINT *pPoints
    );
DWMAPI
DwmTetherContact(
    DWORD dwPointerID,
    BOOL fEnable,
    POINT ptTether
    );
enum DWM_SHOWCONTACT
{
    DWMSC_DOWN = 0x00000001,
    DWMSC_UP = 0x00000002,
    DWMSC_DRAG = 0x00000004,
    DWMSC_HOLD = 0x00000008,
    DWMSC_PENBARREL = 0x00000010,
    DWMSC_NONE = 0x00000000,
    DWMSC_ALL = 0xFFFFFFFF
};
DEFINE_ENUM_FLAG_OPERATORS(DWM_SHOWCONTACT);
DWMAPI
DwmShowContact(
    DWORD dwPointerID,
    enum DWM_SHOWCONTACT eShowContact
    );
enum DWM_TAB_WINDOW_REQUIREMENTS
{
    DWMTWR_NONE = 0x0000,
    DWMTWR_IMPLEMENTED_BY_SYSTEM = 0x0001,
    DWMTWR_WINDOW_RELATIONSHIP = 0x0002,
    DWMTWR_WINDOW_STYLES = 0x0004,
    DWMTWR_WINDOW_REGION = 0x0008,
    DWMTWR_WINDOW_DWM_ATTRIBUTES = 0x0010,
    DWMTWR_WINDOW_MARGINS = 0x0020,
    DWMTWR_TABBING_ENABLED = 0x0040,
    DWMTWR_USER_POLICY = 0x0080,
    DWMTWR_GROUP_POLICY = 0x0100,
    DWMTWR_APP_COMPAT = 0x0200
};
DEFINE_ENUM_FLAG_OPERATORS(DWM_TAB_WINDOW_REQUIREMENTS);
DWMAPI DwmGetUnmetTabRequirements(_In_opt_ HWND appWindow, _Out_ enum DWM_TAB_WINDOW_REQUIREMENTS* value);
#include <poppack.h>
#endif
