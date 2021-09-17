#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef LPVOID (WINAPI *PFNWOWGETVDMPOINTER)(DWORD vp, DWORD dwBytes, BOOL fProtectedMode);
LPVOID WINAPI WOWGetVDMPointer(DWORD vp, DWORD dwBytes, BOOL fProtectedMode);
LPVOID WINAPI WOWGetVDMPointerFix(DWORD vp, DWORD dwBytes,
                                  BOOL fProtectedMode);
VOID WINAPI WOWGetVDMPointerUnfix(DWORD vp);
typedef WORD (WINAPI *PFNWOWGLOBALFREE16)(WORD hMem);
typedef DWORD (WINAPI *PFNWOWGLOBALLOCK16)(WORD hMem);
typedef BOOL (WINAPI *PFNWOWGLOBALUNLOCK16)(WORD hMem);
WORD WINAPI WOWGlobalAlloc16(WORD wFlags, DWORD cb);
WORD WINAPI WOWGlobalFree16(WORD hMem);
DWORD WINAPI WOWGlobalLock16(WORD hMem);
BOOL WINAPI WOWGlobalUnlock16(WORD hMem);
typedef DWORD (WINAPI *PFNWOWGLOBALALLOCLOCK16)(WORD wFlag, DWORD cb, WORD *phMem);
typedef WORD (WINAPI *PFNWOWGLBALUNLOCKFREE16)(DWORD vpMem);
typedef DWORD (WINAPI *PFNWOWGLOBALLOCKSIZE16)(WORD hMem, PDWORD pcb);
DWORD WINAPI WOWGlobalAllocLock16(WORD wFlags, DWORD cb, WORD *phMem);
WORD WINAPI WOWGlobalUnlockFree16(DWORD vpMem);
DWORD WINAPI WOWGlobalLockSize16(WORD hMem, PDWORD pcb);
typedef VOID (WINAPI *PFNWOWYIELD16)(VOID);
typedef VOID (WINAPI *PFNWOWDIRECTEDYIELD16)(WORD htask16);
VOID WINAPI WOWYield16(VOID);
VOID WINAPI WOWDirectedYield16(WORD htask16);
typedef enum _WOW_HANDLE_TYPE {
    WOW_TYPE_HWND,
    WOW_TYPE_HMENU,
    WOW_TYPE_HDWP,
    WOW_TYPE_HDROP,
    WOW_TYPE_HDC,
    WOW_TYPE_HFONT,
    WOW_TYPE_HMETAFILE,
    WOW_TYPE_HRGN,
    WOW_TYPE_HBITMAP,
    WOW_TYPE_HBRUSH,
    WOW_TYPE_HPALETTE,
    WOW_TYPE_HPEN,
    WOW_TYPE_HACCEL,
    WOW_TYPE_HTASK,
    WOW_TYPE_FULLHWND
} WOW_HANDLE_TYPE;
typedef HANDLE (WINAPI *PFNWOWHANDLE32)(WORD, WOW_HANDLE_TYPE);
typedef WORD (WINAPI *PFNWOWHANDLE16)(HANDLE, WOW_HANDLE_TYPE);
HANDLE WINAPI WOWHandle32 (WORD, WOW_HANDLE_TYPE);
WORD WINAPI WOWHandle16 (HANDLE, WOW_HANDLE_TYPE);
typedef DWORD (WINAPI *PFNWOWCALLBACK16)(DWORD vpfn16, DWORD dwParam);
typedef BOOL (WINAPI *PFNWOWCALLBACK16EX)(DWORD vpfn16,
                                           DWORD dwFlags,
                                           DWORD cbArgs,
                                           PVOID pArgs,
                                           PDWORD pdwRetCode);
DWORD WINAPI WOWCallback16(DWORD vpfn16, DWORD dwParam);
BOOL WINAPI WOWCallback16Ex(
                DWORD vpfn16,
                DWORD dwFlags,
                DWORD cbArgs,
                PVOID pArgs,
                PDWORD pdwRetCode
                );
typedef BOOL (WINAPI *PFNWOWFREEMETAFILE)( HANDLE h32 );
BOOL WINAPI WOWFreeMetafile( HANDLE h32 );
#endif
#pragma endregion
