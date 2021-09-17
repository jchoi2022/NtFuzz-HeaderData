#include <winapifamily.h>
    #define __inline inline
    extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "dciddi.h"
DECLARE_HANDLE(HWINWATCH);
extern HDC WINAPI DCIOpenProvider(void);
extern void WINAPI DCICloseProvider(HDC hdc);
extern int WINAPI DCICreatePrimary(HDC hdc, LPDCISURFACEINFO FAR *lplpSurface);
extern int WINAPI DCICreateOffscreen(HDC hdc, DWORD dwCompression, DWORD dwRedMask,
    DWORD dwGreenMask, DWORD dwBlueMask, DWORD dwWidth, DWORD dwHeight,
    DWORD dwDCICaps, DWORD dwBitCount, LPDCIOFFSCREEN FAR *lplpSurface);
extern int WINAPI DCICreateOverlay(HDC hdc, LPVOID lpOffscreenSurf,
    LPDCIOVERLAY FAR *lplpSurface);
extern int WINAPI DCIEnum(HDC hdc, LPRECT lprDst, LPRECT lprSrc, LPVOID lpFnCallback,
    LPVOID lpContext);
extern DCIRVAL WINAPI DCISetSrcDestClip(LPDCIOFFSCREEN pdci, LPRECT srcrc,
   LPRECT destrc, LPRGNDATA prd );
extern HWINWATCH WINAPI WinWatchOpen(HWND hwnd);
extern void WINAPI WinWatchClose(HWINWATCH hWW);
extern UINT WINAPI WinWatchGetClipList(HWINWATCH hWW, LPRECT prc,
    UINT size, LPRGNDATA prd);
extern BOOL WINAPI WinWatchDidStatusChange(HWINWATCH hWW);
extern DWORD WINAPI GetWindowRegionData(HWND hwnd, DWORD size, LPRGNDATA prd);
extern DWORD WINAPI GetDCRegionData(HDC hdc, DWORD size, LPRGNDATA prd);
typedef void (CALLBACK *WINWATCHNOTIFYPROC)(HWINWATCH hww, HWND hwnd, DWORD code, LPARAM lParam);
extern BOOL WINAPI WinWatchNotify(HWINWATCH hWW, WINWATCHNOTIFYPROC NotifyCallback,
      LPARAM NotifyParam );
extern void WINAPI DCIEndAccess(LPDCISURFACEINFO pdci);
extern DCIRVAL WINAPI DCIBeginAccess(LPDCISURFACEINFO pdci, int x, int y, int dx, int dy);
extern void WINAPI DCIDestroy(LPDCISURFACEINFO pdci);
extern DCIRVAL WINAPI DCIDraw(LPDCIOFFSCREEN pdci);
extern DCIRVAL WINAPI DCISetClipList(LPDCIOFFSCREEN pdci, LPRGNDATA prd);
extern DCIRVAL WINAPI DCISetDestination(LPDCIOFFSCREEN pdci, LPRECT dst, LPRECT src);
#endif
#pragma endregion
    }
