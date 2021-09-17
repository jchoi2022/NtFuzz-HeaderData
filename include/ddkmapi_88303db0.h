#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DWORD
FAR PASCAL
DxApi(
    DWORD dwFunctionNum,
    LPVOID lpvInBuffer,
    DWORD cbInBuffer,
    LPVOID lpvOutBuffer,
    DWORD cbOutBuffer
);
typedef
DWORD
(FAR PASCAL *LPDXAPI)(
    DWORD dwFunctionNum,
    LPVOID lpvInBuffer,
    DWORD cbInBuffer,
    LPVOID lpvOutBuffer,
    DWORD cbOutBuffer
);
typedef ULONG (FAR PASCAL *LPDD_NOTIFYCALLBACK)(DWORD dwFlags, PVOID pContext, DWORD dwParam1, DWORD dwParam2);
    typedef struct _DDGETVERSIONNUMBER
    {
        DWORD ddRVal;
        DWORD dwMajorVersion;
        DWORD dwMinorVersion;
    } DDGETVERSIONNUMBER, FAR *LPDDGETVERSIONNUMBER;
    typedef struct _DDCLOSEHANDLE
    {
        HANDLE hHandle;
    } DDCLOSEHANDLE, FAR *LPDDCLOSEHANDLE;
    typedef struct _DDOPENDIRECTDRAWIN
    {
        ULONG_PTR dwDirectDrawHandle;
        LPDD_NOTIFYCALLBACK pfnDirectDrawClose;
        PVOID pContext;
    } DDOPENDIRECTDRAWIN, FAR *LPDDOPENDIRECTDRAWIN;
    typedef struct _DDOPENDIRECTDRAWOUT
    {
        DWORD ddRVal;
        HANDLE hDirectDraw;
    } DDOPENDIRECTDRAWOUT, FAR *LPDDOPENDIRECTDRAWOUT;
    typedef struct _DDOPENSURFACEIN
    {
 HANDLE hDirectDraw;
        ULONG_PTR dwSurfaceHandle;
        LPDD_NOTIFYCALLBACK pfnSurfaceClose;
        PVOID pContext;
    } DDOPENSURFACEIN, FAR *LPDDOPENSURFACEIN;
    typedef struct _DDOPENSURFACEOUT
    {
        DWORD ddRVal;
        HANDLE hSurface;
    } DDOPENSURFACEOUT, FAR *LPDDOPENSURFACEOUT;
    typedef struct _DDOPENVIDEOPORTIN
    {
 HANDLE hDirectDraw;
        ULONG dwVideoPortHandle;
        LPDD_NOTIFYCALLBACK pfnVideoPortClose;
        PVOID pContext;
    } DDOPENVIDEOPORTIN, FAR *LPDDOPENVIDEOPORTIN;
    typedef struct _DDOPENVIDEOPORTOUT
    {
        DWORD ddRVal;
        HANDLE hVideoPort;
    } DDOPENVIDEOPORTOUT, FAR *LPDDOPENVIDEOPORTOUT;
    typedef struct _DDGETKERNELCAPSOUT
    {
 DWORD ddRVal;
        DWORD dwCaps;
 DWORD dwIRQCaps;
    } DDGETKERNELCAPSOUT, FAR *LPDDGETKERNELCAPSOUT;
    typedef struct _DDGETFIELDNUMIN
    {
 HANDLE hDirectDraw;
 HANDLE hVideoPort;
    } DDGETFIELDNUMIN, FAR *LPDDGETFIELDNUMIN;
    typedef struct _DDGETFIELDNUMOUT
    {
 DWORD ddRVal;
 DWORD dwFieldNum;
    } DDGETFIELDNUMOUT, FAR *LPDDGETFIELDNUMOUT;
    typedef struct _DDSETFIELDNUM
    {
 HANDLE hDirectDraw;
 HANDLE hVideoPort;
 DWORD dwFieldNum;
    } DDSETFIELDNUM, FAR *LPDDSETFIELDNUM;
    typedef struct _DDSETSKIPFIELD
    {
 HANDLE hDirectDraw;
 HANDLE hVideoPort;
 DWORD dwStartField;
    } DDSETSKIPFIELD, FAR *LPDDSETSKIPFIELD;
    typedef struct _DDGETSURFACESTATEIN
    {
 HANDLE hDirectDraw;
 HANDLE hSurface;
    } DDGETSURFACESTATEIN, FAR *LPDDGETSURFACESTATEIN;
    typedef struct _DDGETSURFACESTATEOUT
    {
 DWORD ddRVal;
 DWORD dwStateCaps;
 DWORD dwStateStatus;
    } DDGETSURFACESTATEOUT, FAR *LPDDGETSURFACESTATEOUT;
    typedef struct _DDSETSURFACETATE
    {
 HANDLE hDirectDraw;
 HANDLE hSurface;
 DWORD dwState;
 DWORD dwStartField;
    } DDSETSURFACESTATE, FAR *LPDDSETSURFACESTATE;
    typedef struct _DDLOCKIN
    {
 HANDLE hDirectDraw;
 HANDLE hSurface;
    } DDLOCKIN, FAR *LPDDLOCKIN;
    typedef struct _DDLOCKOUT
    {
 DWORD ddRVal;
 DWORD dwSurfHeight;
 DWORD dwSurfWidth;
 LONG lSurfPitch;
 PVOID lpSurface;
 DWORD SurfaceCaps;
 DWORD dwFormatFlags;
 DWORD dwFormatFourCC;
 DWORD dwFormatBitCount;
 union
 {
     DWORD dwRBitMask;
     DWORD dwYBitMask;
     };
     union
     {
     DWORD dwGBitMask;
     DWORD dwUBitMask;
 };
 union
 {
     DWORD dwBBitMask;
     DWORD dwVBitMask;
 };
    } DDLOCKOUT, FAR *LPDDLOCKOUT;
    typedef struct _DDFLIPOVERLAY
    {
 HANDLE hDirectDraw;
 HANDLE hCurrentSurface;
 HANDLE hTargetSurface;
 DWORD dwFlags;
    } DDFLIPOVERLAY, FAR *LPDDFLIPOVERLAY;
    typedef struct _DDFLIPVIDEOPORT
    {
 HANDLE hDirectDraw;
 HANDLE hVideoPort;
 HANDLE hCurrentSurface;
 HANDLE hTargetSurface;
 DWORD dwFlags;
    } DDFLIPVIDEOPORT, FAR *LPDDFLIPVIDEOPORT;
    typedef struct _DDGETAUTOFLIPIN
    {
 HANDLE hDirectDraw;
 HANDLE hVideoPort;
    } DDGETAUTOFLIPIN, FAR *LPDDGETAUTOFLIPIN;
    typedef struct _DDGETAUTOFLIPOUT
    {
 DWORD ddRVal;
 HANDLE hVideoSurface;
 HANDLE hVBISurface;
 BOOL bPolarity;
    } DDGETAUTOFLIPOUT, FAR *LPDDGETAUTOFLIPOUT;
    typedef struct _DDREGISTERCALLBACK
    {
 HANDLE hDirectDraw;
 ULONG dwEvents;
 LPDD_NOTIFYCALLBACK pfnCallback;
 ULONG_PTR dwParam1;
 ULONG_PTR dwParam2;
 PVOID pContext;
    } DDREGISTERCALLBACK, FAR *LPDDREGISTERCALLBACK;
    typedef struct _DDGETPOLARITYIN
    {
 HANDLE hDirectDraw;
 HANDLE hVideoPort;
    } DDGETPOLARITYIN, FAR *LPDDGETPOLARITYIN;
    typedef struct _DDGETPOLARITYOUT
    {
 DWORD ddRVal;
 BOOL bPolarity;
    } DDGETPOLARITYOUT, FAR *LPDDGETPOLARITYOUT;
    typedef struct _DDOPENVPCAPTUREDEVICEIN
    {
 HANDLE hDirectDraw;
 HANDLE hVideoPort;
 DWORD dwStartLine;
 DWORD dwEndLine;
 DWORD dwCaptureEveryNFields;
 LPDD_NOTIFYCALLBACK pfnCaptureClose;
 PVOID pContext;
 DWORD dwFlags;
    } DDOPENVPCAPTUREDEVICEIN, FAR * LPDDOPENVPCAPTUREDEVICEIN;
    typedef struct _DDOPENVPCAPTUREDEVICEOUT
    {
 DWORD ddRVal;
 HANDLE hCapture;
    } DDOPENVPCAPTUREDEVICEOUT, FAR * LPDDOPENVPCAPTUREDEVICEOUT;
    #define DDOPENCAPTURE_VIDEO 0x0001
    #define DDOPENCAPTURE_VBI 0x0002
    typedef struct _DDCAPBUFFINFO
    {
 DWORD dwFieldNumber;
 DWORD bPolarity;
 LARGE_INTEGER liTimeStamp;
 DWORD ddRVal;
    } DDCAPBUFFINFO, FAR * LPDDCAPBUFFINFO;
    typedef struct _DDADDVPCAPTUREBUFF
    {
 HANDLE hCapture;
 DWORD dwFlags;
 PMDL pMDL;
 PKEVENT pKEvent;
 LPDDCAPBUFFINFO lpBuffInfo;
    } DDADDVPCAPTUREBUFF, FAR * LPDDADDVPCAPTUREBUFF;
    #define DDADDBUFF_SYSTEMMEMORY 0x0001
    #define DDADDBUFF_NONLOCALVIDMEM 0x0002
    #define DDADDBUFF_INVERT 0x0004
#endif
#pragma endregion
