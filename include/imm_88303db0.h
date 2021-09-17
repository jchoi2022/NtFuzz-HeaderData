#include <winapifamily.h>
extern "C" {
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
DECLARE_HANDLE(HIMC);
DECLARE_HANDLE(HIMCC);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef HKL FAR *LPHKL;
typedef UINT FAR *LPUINT;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef struct tagCOMPOSITIONFORM {
    DWORD dwStyle;
    POINT ptCurrentPos;
    RECT rcArea;
} COMPOSITIONFORM, *PCOMPOSITIONFORM, NEAR *NPCOMPOSITIONFORM, FAR *LPCOMPOSITIONFORM;
typedef struct tagCANDIDATEFORM {
    DWORD dwIndex;
    DWORD dwStyle;
    POINT ptCurrentPos;
    RECT rcArea;
} CANDIDATEFORM, *PCANDIDATEFORM, NEAR *NPCANDIDATEFORM, FAR *LPCANDIDATEFORM;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagCANDIDATELIST {
    DWORD dwSize;
    DWORD dwStyle;
    DWORD dwCount;
    DWORD dwSelection;
    DWORD dwPageStart;
    DWORD dwPageSize;
    DWORD dwOffset[1];
} CANDIDATELIST, *PCANDIDATELIST, NEAR *NPCANDIDATELIST, FAR *LPCANDIDATELIST;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef struct tagREGISTERWORDA {
    LPSTR lpReading;
    LPSTR lpWord;
} REGISTERWORDA, *PREGISTERWORDA, NEAR *NPREGISTERWORDA, FAR *LPREGISTERWORDA;
typedef struct tagREGISTERWORDW {
    LPWSTR lpReading;
    LPWSTR lpWord;
} REGISTERWORDW, *PREGISTERWORDW, NEAR *NPREGISTERWORDW, FAR *LPREGISTERWORDW;
typedef REGISTERWORDW REGISTERWORD;
typedef PREGISTERWORDW PREGISTERWORD;
typedef NPREGISTERWORDW NPREGISTERWORD;
typedef LPREGISTERWORDW LPREGISTERWORD;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagRECONVERTSTRING {
    DWORD dwSize;
    DWORD dwVersion;
    DWORD dwStrLen;
    DWORD dwStrOffset;
    DWORD dwCompStrLen;
    DWORD dwCompStrOffset;
    DWORD dwTargetStrLen;
    DWORD dwTargetStrOffset;
} RECONVERTSTRING, *PRECONVERTSTRING, NEAR *NPRECONVERTSTRING, FAR *LPRECONVERTSTRING;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef struct tagSTYLEBUFA {
    DWORD dwStyle;
    CHAR szDescription[STYLE_DESCRIPTION_SIZE];
} STYLEBUFA, *PSTYLEBUFA, NEAR *NPSTYLEBUFA, FAR *LPSTYLEBUFA;
typedef struct tagSTYLEBUFW {
    DWORD dwStyle;
    WCHAR szDescription[STYLE_DESCRIPTION_SIZE];
} STYLEBUFW, *PSTYLEBUFW, NEAR *NPSTYLEBUFW, FAR *LPSTYLEBUFW;
typedef STYLEBUFW STYLEBUF;
typedef PSTYLEBUFW PSTYLEBUF;
typedef NPSTYLEBUFW NPSTYLEBUF;
typedef LPSTYLEBUFW LPSTYLEBUF;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagIMEMENUITEMINFOA {
    UINT cbSize;
    UINT fType;
    UINT fState;
    UINT wID;
    HBITMAP hbmpChecked;
    HBITMAP hbmpUnchecked;
    DWORD dwItemData;
    CHAR szString[IMEMENUITEM_STRING_SIZE];
    HBITMAP hbmpItem;
} IMEMENUITEMINFOA, *PIMEMENUITEMINFOA, NEAR *NPIMEMENUITEMINFOA, FAR *LPIMEMENUITEMINFOA;
typedef struct tagIMEMENUITEMINFOW {
    UINT cbSize;
    UINT fType;
    UINT fState;
    UINT wID;
    HBITMAP hbmpChecked;
    HBITMAP hbmpUnchecked;
    DWORD dwItemData;
    WCHAR szString[IMEMENUITEM_STRING_SIZE];
    HBITMAP hbmpItem;
} IMEMENUITEMINFOW, *PIMEMENUITEMINFOW, NEAR *NPIMEMENUITEMINFOW, FAR *LPIMEMENUITEMINFOW;
typedef IMEMENUITEMINFOW IMEMENUITEMINFO;
typedef PIMEMENUITEMINFOW PIMEMENUITEMINFO;
typedef NPIMEMENUITEMINFOW NPIMEMENUITEMINFO;
typedef LPIMEMENUITEMINFOW LPIMEMENUITEMINFO;
typedef struct tagIMECHARPOSITION {
    DWORD dwSize;
    DWORD dwCharPos;
    POINT pt;
    UINT cLineHeight;
    RECT rcDocument;
} IMECHARPOSITION, *PIMECHARPOSITION, NEAR *NPIMECHARPOSITION, FAR *LPIMECHARPOSITION;
typedef BOOL (CALLBACK* IMCENUMPROC)(HIMC, LPARAM);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
HKL WINAPI ImmInstallIMEA(_In_ LPCSTR lpszIMEFileName, _In_ LPCSTR lpszLayoutText);
HKL WINAPI ImmInstallIMEW(_In_ LPCWSTR lpszIMEFileName, _In_ LPCWSTR lpszLayoutText);
HWND WINAPI ImmGetDefaultIMEWnd(IN HWND);
UINT WINAPI ImmGetDescriptionA(IN HKL, _Out_writes_opt_(uBufLen) LPSTR lpszDescription, IN UINT uBufLen);
UINT WINAPI ImmGetDescriptionW(IN HKL, _Out_writes_opt_(uBufLen) LPWSTR lpszDescription, IN UINT uBufLen);
UINT WINAPI ImmGetIMEFileNameA(IN HKL, _Out_writes_opt_(uBufLen) LPSTR lpszFileName, IN UINT uBufLen);
UINT WINAPI ImmGetIMEFileNameW(IN HKL, _Out_writes_opt_(uBufLen) LPWSTR lpszFileName, IN UINT uBufLen);
DWORD WINAPI ImmGetProperty(IN HKL, IN DWORD);
BOOL WINAPI ImmIsIME(IN HKL);
BOOL WINAPI ImmSimulateHotKey(IN HWND, IN DWORD);
HIMC WINAPI ImmCreateContext(void);
BOOL WINAPI ImmDestroyContext(IN HIMC);
HIMC WINAPI ImmGetContext(IN HWND);
BOOL WINAPI ImmReleaseContext(IN HWND, IN HIMC);
HIMC WINAPI ImmAssociateContext(IN HWND, IN HIMC);
BOOL WINAPI ImmAssociateContextEx(_In_ HWND, _In_ HIMC, _In_ DWORD);
LONG WINAPI ImmGetCompositionStringA(IN HIMC, IN DWORD, _Out_writes_bytes_opt_(dwBufLen) LPVOID lpBuf, IN DWORD dwBufLen);
LONG WINAPI ImmGetCompositionStringW(IN HIMC, IN DWORD, _Out_writes_bytes_opt_(dwBufLen) LPVOID lpBuf, IN DWORD dwBufLen);
BOOL WINAPI ImmSetCompositionStringA(IN HIMC, IN DWORD dwIndex, _In_reads_bytes_opt_(dwCompLen) LPVOID lpComp, IN DWORD dwCompLen, _In_reads_bytes_opt_(dwReadLen) LPVOID lpRead, IN DWORD dwReadLen);
BOOL WINAPI ImmSetCompositionStringW(IN HIMC, IN DWORD dwIndex, _In_reads_bytes_opt_(dwCompLen) LPVOID lpComp, IN DWORD dwCompLen, _In_reads_bytes_opt_(dwReadLen) LPVOID lpRead, IN DWORD dwReadLen);
DWORD WINAPI ImmGetCandidateListCountA(IN HIMC, _Out_ LPDWORD lpdwListCount);
DWORD WINAPI ImmGetCandidateListCountW(IN HIMC, _Out_ LPDWORD lpdwListCount);
DWORD WINAPI ImmGetCandidateListA(IN HIMC, IN DWORD deIndex, _Out_writes_bytes_opt_(dwBufLen) LPCANDIDATELIST lpCandList, IN DWORD dwBufLen);
DWORD WINAPI ImmGetCandidateListW(IN HIMC, IN DWORD deIndex, _Out_writes_bytes_opt_(dwBufLen) LPCANDIDATELIST lpCandList, IN DWORD dwBufLen);
DWORD WINAPI ImmGetGuideLineA(_In_ HIMC, _In_ DWORD dwIndex, _Out_writes_bytes_opt_(dwBufLen) LPSTR lpBuf, _In_ DWORD dwBufLen);
DWORD WINAPI ImmGetGuideLineW(_In_ HIMC, _In_ DWORD dwIndex, _Out_writes_bytes_opt_(dwBufLen) LPWSTR lpBuf, _In_ DWORD dwBufLen);
BOOL WINAPI ImmGetConversionStatus(IN HIMC, _Out_opt_ LPDWORD lpfdwConversion, _Out_opt_ LPDWORD lpfdwSentence);
BOOL WINAPI ImmSetConversionStatus(IN HIMC, IN DWORD, IN DWORD);
BOOL WINAPI ImmGetOpenStatus(IN HIMC);
BOOL WINAPI ImmSetOpenStatus(IN HIMC, IN BOOL);
BOOL WINAPI ImmConfigureIMEA(IN HKL, IN HWND, IN DWORD, IN LPVOID);
BOOL WINAPI ImmConfigureIMEW(IN HKL, IN HWND, IN DWORD, IN LPVOID);
LRESULT WINAPI ImmEscapeA(IN HKL, IN HIMC, IN UINT, IN LPVOID);
LRESULT WINAPI ImmEscapeW(IN HKL, IN HIMC, IN UINT, IN LPVOID);
DWORD WINAPI ImmGetConversionListA(IN HKL, IN HIMC, _In_ LPCSTR lpSrc, _Out_writes_bytes_(dwBufLen) LPCANDIDATELIST lpDst, IN DWORD dwBufLen, IN UINT uFlag);
DWORD WINAPI ImmGetConversionListW(IN HKL, IN HIMC, _In_ LPCWSTR lpSrc, _Out_writes_bytes_(dwBufLen) LPCANDIDATELIST lpDst, IN DWORD dwBufLen, IN UINT uFlag);
BOOL WINAPI ImmNotifyIME(IN HIMC, IN DWORD dwAction, IN DWORD dwIndex, IN DWORD dwValue);
BOOL WINAPI ImmGetStatusWindowPos(IN HIMC, _Out_ LPPOINT lpptPos);
BOOL WINAPI ImmSetStatusWindowPos(IN HIMC, _In_ LPPOINT lpptPos);
BOOL WINAPI ImmGetCompositionWindow(IN HIMC, _Out_ LPCOMPOSITIONFORM lpCompForm);
BOOL WINAPI ImmSetCompositionWindow(IN HIMC, _In_ LPCOMPOSITIONFORM lpCompForm);
BOOL WINAPI ImmGetCandidateWindow(IN HIMC, IN DWORD, _Out_ LPCANDIDATEFORM lpCandidate);
BOOL WINAPI ImmSetCandidateWindow(IN HIMC, _In_ LPCANDIDATEFORM lpCandidate);
BOOL WINAPI ImmIsUIMessageA(IN HWND, IN UINT, IN WPARAM, IN LPARAM);
BOOL WINAPI ImmIsUIMessageW(IN HWND, IN UINT, IN WPARAM, IN LPARAM);
UINT WINAPI ImmGetVirtualKey(IN HWND);
typedef int (CALLBACK *REGISTERWORDENUMPROCA)(_In_ LPCSTR lpszReading, DWORD, _In_ LPCSTR lpszString, LPVOID);
typedef int (CALLBACK *REGISTERWORDENUMPROCW)(_In_ LPCWSTR lpszReading, DWORD, _In_ LPCWSTR lpszString, LPVOID);
BOOL WINAPI ImmRegisterWordA(IN HKL, _In_ LPCSTR lpszReading, IN DWORD, _In_ LPCSTR lpszRegister);
BOOL WINAPI ImmRegisterWordW(IN HKL, _In_ LPCWSTR lpszReading, IN DWORD, _In_ LPCWSTR lpszRegister);
BOOL WINAPI ImmUnregisterWordA(IN HKL, _In_ LPCSTR lpszReading, IN DWORD, _In_ LPCSTR lpszUnregister);
BOOL WINAPI ImmUnregisterWordW(IN HKL, _In_ LPCWSTR lpszReading, IN DWORD, _In_ LPCWSTR lpszUnregister);
UINT WINAPI ImmGetRegisterWordStyleA(IN HKL, IN UINT nItem, _Out_writes_(nItem) LPSTYLEBUFA lpStyleBuf);
UINT WINAPI ImmGetRegisterWordStyleW(IN HKL, IN UINT nItem, _Out_writes_(nItem) LPSTYLEBUFW lpStyleBuf);
UINT WINAPI ImmEnumRegisterWordA(IN HKL, IN REGISTERWORDENUMPROCA, _In_opt_ LPCSTR lpszReading, IN DWORD, _In_opt_ LPCSTR lpszRegister, IN LPVOID);
UINT WINAPI ImmEnumRegisterWordW(IN HKL, IN REGISTERWORDENUMPROCW, _In_opt_ LPCWSTR lpszReading, IN DWORD, _In_opt_ LPCWSTR lpszRegister, IN LPVOID);
BOOL WINAPI ImmDisableIME(IN DWORD);
BOOL WINAPI ImmEnumInputContext(DWORD idThread, IMCENUMPROC lpfn, LPARAM lParam);
DWORD WINAPI ImmGetImeMenuItemsA(IN HIMC, IN DWORD, IN DWORD, _Out_opt_ LPIMEMENUITEMINFOA lpImeParentMenu, _Out_writes_bytes_opt_(dwSize) LPIMEMENUITEMINFOA lpImeMenu, IN DWORD dwSize);
DWORD WINAPI ImmGetImeMenuItemsW(IN HIMC, IN DWORD, IN DWORD, _Out_opt_ LPIMEMENUITEMINFOW lpImeParentMenu, _Out_writes_bytes_opt_(dwSize) LPIMEMENUITEMINFOW lpImeMenu, IN DWORD dwSize);
BOOL WINAPI ImmDisableTextFrameService(DWORD idThread);
BOOL WINAPI ImmDisableLegacyIME(void);
#endif
#pragma endregion
#include <ime_cmodes.h>
}
