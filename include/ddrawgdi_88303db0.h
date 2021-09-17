#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
BOOL
APIENTRY
DdCreateDirectDrawObject(
    LPDDRAWI_DIRECTDRAW_GBL pDirectDrawGlobal,
    HDC hdc
    );
typedef struct _D3DHAL_CALLBACKS FAR *LPD3DHAL_CALLBACKS;
typedef struct _D3DHAL_GLOBALDRIVERDATA FAR *LPD3DHAL_GLOBALDRIVERDATA;
BOOL
APIENTRY
DdQueryDirectDrawObject(
    LPDDRAWI_DIRECTDRAW_GBL pDirectDrawGlobal,
    LPDDHALINFO pHalInfo,
    LPDDHAL_DDCALLBACKS pDDCallbacks,
    LPDDHAL_DDSURFACECALLBACKS pDDSurfaceCallbacks,
    LPDDHAL_DDPALETTECALLBACKS pDDPaletteCallbacks,
    LPD3DHAL_CALLBACKS pD3dCallbacks,
    LPD3DHAL_GLOBALDRIVERDATA pD3dDriverData,
    LPDDHAL_DDEXEBUFCALLBACKS pD3dBufferCallbacks,
    LPDDSURFACEDESC pD3dTextureFormats,
    LPDWORD pdwFourCC,
    LPVIDMEM pvmList
    );
BOOL
APIENTRY
DdDeleteDirectDrawObject(
    LPDDRAWI_DIRECTDRAW_GBL pDirectDrawGlobal
    );
BOOL
APIENTRY
DdCreateSurfaceObject(
    LPDDRAWI_DDRAWSURFACE_LCL pSurfaceLocal,
    BOOL bPrimarySurface
    );
BOOL
APIENTRY
DdDeleteSurfaceObject(
    LPDDRAWI_DDRAWSURFACE_LCL pSurfaceLocal
    );
BOOL
APIENTRY
DdResetVisrgn(
    LPDDRAWI_DDRAWSURFACE_LCL pSurfaceLocal,
    HWND hWnd
    );
HDC
APIENTRY
DdGetDC(
    LPDDRAWI_DDRAWSURFACE_LCL pSurfaceLocal,
    LPPALETTEENTRY pColorTable
    );
BOOL
APIENTRY
DdReleaseDC(
    LPDDRAWI_DDRAWSURFACE_LCL pSurfaceLocal
    );
HBITMAP
APIENTRY
DdCreateDIBSection(
    HDC hdc,
    CONST BITMAPINFO* pbmi,
    UINT iUsage,
    VOID** ppvBits,
    HANDLE hSectionApp,
    DWORD dwOffset
    );
BOOL
APIENTRY
DdReenableDirectDrawObject(
    LPDDRAWI_DIRECTDRAW_GBL pDirectDrawGlobal,
    BOOL* pbNewMode
    );
BOOL
APIENTRY
DdAttachSurface(
    LPDDRAWI_DDRAWSURFACE_LCL pSurfaceFrom,
    LPDDRAWI_DDRAWSURFACE_LCL pSurfaceTo
    );
VOID
APIENTRY
DdUnattachSurface(
    LPDDRAWI_DDRAWSURFACE_LCL pSurface,
    LPDDRAWI_DDRAWSURFACE_LCL pSurfaceAttached
    );
ULONG
APIENTRY
DdQueryDisplaySettingsUniqueness(
    VOID
    );
HANDLE
APIENTRY
DdGetDxHandle(
    LPDDRAWI_DIRECTDRAW_LCL pDDraw,
    LPDDRAWI_DDRAWSURFACE_LCL pSurface,
    BOOL bRelease
    );
BOOL
APIENTRY
DdSetGammaRamp(
    LPDDRAWI_DIRECTDRAW_LCL pDDraw,
    HDC hdc,
    LPVOID lpGammaRamp
    );
DWORD
APIENTRY
DdSwapTextureHandles(
    LPDDRAWI_DIRECTDRAW_LCL pDDraw,
    LPDDRAWI_DDRAWSURFACE_LCL pDDSLcl1,
    LPDDRAWI_DDRAWSURFACE_LCL pDDSLcl2
    );
DWORD
APIENTRY
DdChangeSurfacePointer(
    LPDDRAWI_DDRAWSURFACE_LCL pSurfaceLocal,
    LPDDRAWI_DIRECTDRAW_GBL pDirectDrawGlobal,
    LPVOID pSurfacePointer
    );
#endif
#pragma endregion
