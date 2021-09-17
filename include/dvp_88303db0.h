#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
struct IDirectDraw;
struct IDirectDrawSurface;
struct IDirectDrawPalette;
struct IDirectDrawClipper;
typedef struct IDDVideoPortContainer FAR *LPDDVIDEOPORTCONTAINER;
typedef struct IDirectDrawVideoPort FAR *LPDIRECTDRAWVIDEOPORT;
typedef struct IDirectDrawVideoPortNotify FAR *LPDIRECTDRAWVIDEOPORTNOTIFY;
typedef struct _DDVIDEOPORTCONNECT FAR *LPDDVIDEOPORTCONNECT;
typedef struct _DDVIDEOPORTCAPS FAR *LPDDVIDEOPORTCAPS;
typedef struct _DDVIDEOPORTDESC FAR *LPDDVIDEOPORTDESC;
typedef struct _DDVIDEOPORTINFO FAR *LPDDVIDEOPORTINFO;
typedef struct _DDVIDEOPORTBANDWIDTH FAR *LPDDVIDEOPORTBANDWIDTH;
typedef struct _DDVIDEOPORTSTATUS FAR *LPDDVIDEOPORTSTATUS;
typedef struct _DDVIDEOPORTNOTIFY FAR *LPDDVIDEOPORTNOTIFY;
typedef struct IDDVideoPortContainerVtbl DDVIDEOPORTCONTAINERCALLBACKS;
typedef struct IDirectDrawVideoPortVtbl DIRECTDRAWVIDEOPORTCALLBACKS;
typedef struct IDirectDrawVideoPortNotifyVtbl DIRECTDRAWVIDEOPORTNOTIFYCALLBACKS;
typedef HRESULT (FAR PASCAL * LPDDENUMVIDEOCALLBACK)(LPDDVIDEOPORTCAPS, LPVOID);
typedef struct _DDVIDEOPORTCONNECT
{
    DWORD dwSize;
    DWORD dwPortWidth;
    GUID guidTypeID;
    DWORD dwFlags;
    ULONG_PTR dwReserved1;
} DDVIDEOPORTCONNECT;
typedef struct _DDVIDEOPORTCAPS
{
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwMaxWidth;
    DWORD dwMaxVBIWidth;
    DWORD dwMaxHeight;
    DWORD dwVideoPortID;
    DWORD dwCaps;
    DWORD dwFX;
    DWORD dwNumAutoFlipSurfaces;
    DWORD dwAlignVideoPortBoundary;
    DWORD dwAlignVideoPortPrescaleWidth;
    DWORD dwAlignVideoPortCropBoundary;
    DWORD dwAlignVideoPortCropWidth;
    DWORD dwPreshrinkXStep;
    DWORD dwPreshrinkYStep;
    DWORD dwNumVBIAutoFlipSurfaces;
    DWORD dwNumPreferredAutoflip;
    WORD wNumFilterTapsX;
    WORD wNumFilterTapsY;
} DDVIDEOPORTCAPS;
typedef struct _DDVIDEOPORTDESC
{
    DWORD dwSize;
    DWORD dwFieldWidth;
    DWORD dwVBIWidth;
    DWORD dwFieldHeight;
    DWORD dwMicrosecondsPerField;
    DWORD dwMaxPixelsPerSecond;
    DWORD dwVideoPortID;
    DWORD dwReserved1;
    DDVIDEOPORTCONNECT VideoPortType;
    ULONG_PTR dwReserved2;
    ULONG_PTR dwReserved3;
} DDVIDEOPORTDESC;
typedef struct _DDVIDEOPORTINFO
{
    DWORD dwSize;
    DWORD dwOriginX;
    DWORD dwOriginY;
    DWORD dwVPFlags;
    RECT rCrop;
    DWORD dwPrescaleWidth;
    DWORD dwPrescaleHeight;
    LPDDPIXELFORMAT lpddpfInputFormat;
    LPDDPIXELFORMAT lpddpfVBIInputFormat;
    LPDDPIXELFORMAT lpddpfVBIOutputFormat;
    DWORD dwVBIHeight;
    ULONG_PTR dwReserved1;
    ULONG_PTR dwReserved2;
} DDVIDEOPORTINFO;
typedef struct _DDVIDEOPORTBANDWIDTH
{
    DWORD dwSize;
    DWORD dwCaps;
    DWORD dwOverlay;
    DWORD dwColorkey;
    DWORD dwYInterpolate;
    DWORD dwYInterpAndColorkey;
    ULONG_PTR dwReserved1;
    ULONG_PTR dwReserved2;
} DDVIDEOPORTBANDWIDTH;
typedef struct _DDVIDEOPORTSTATUS
{
    DWORD dwSize;
    BOOL bInUse;
    DWORD dwFlags;
    DWORD dwReserved1;
    DDVIDEOPORTCONNECT VideoPortType;
    ULONG_PTR dwReserved2;
    ULONG_PTR dwReserved3;
} DDVIDEOPORTSTATUS;
typedef struct _DDVIDEOPORTNOTIFY
{
    LARGE_INTEGER ApproximateTimeStamp;
    LONG lField;
    UINT dwSurfaceIndex;
    LONG lDone;
} DDVIDEOPORTNOTIFY;
};
#endif
#pragma endregion
