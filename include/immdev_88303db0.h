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
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagCOMPOSITIONSTRING {
    DWORD dwSize;
    DWORD dwCompReadAttrLen;
    DWORD dwCompReadAttrOffset;
    DWORD dwCompReadClauseLen;
    DWORD dwCompReadClauseOffset;
    DWORD dwCompReadStrLen;
    DWORD dwCompReadStrOffset;
    DWORD dwCompAttrLen;
    DWORD dwCompAttrOffset;
    DWORD dwCompClauseLen;
    DWORD dwCompClauseOffset;
    DWORD dwCompStrLen;
    DWORD dwCompStrOffset;
    DWORD dwCursorPos;
    DWORD dwDeltaStart;
    DWORD dwResultReadClauseLen;
    DWORD dwResultReadClauseOffset;
    DWORD dwResultReadStrLen;
    DWORD dwResultReadStrOffset;
    DWORD dwResultClauseLen;
    DWORD dwResultClauseOffset;
    DWORD dwResultStrLen;
    DWORD dwResultStrOffset;
    DWORD dwPrivateSize;
    DWORD dwPrivateOffset;
} COMPOSITIONSTRING, *PCOMPOSITIONSTRING, NEAR *NPCOMPOSITIONSTRING, FAR *LPCOMPOSITIONSTRING;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagGUIDELINE {
    DWORD dwSize;
    DWORD dwLevel;
    DWORD dwIndex;
    DWORD dwStrLen;
    DWORD dwStrOffset;
    DWORD dwPrivateSize;
    DWORD dwPrivateOffset;
} GUIDELINE, *PGUIDELINE, NEAR *NPGUIDELINE, FAR *LPGUIDELINE;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagTRANSMSG {
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
} TRANSMSG, *PTRANSMSG, NEAR *NPTRANSMSG, FAR *LPTRANSMSG;
typedef struct tagTRANSMSGLIST {
    UINT uMsgCount;
    TRANSMSG TransMsg[1];
} TRANSMSGLIST, *PTRANSMSGLIST, NEAR *NPTRANSMSGLIST, FAR *LPTRANSMSGLIST;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagCANDIDATEINFO {
    DWORD dwSize;
    DWORD dwCount;
    DWORD dwOffset[32];
    DWORD dwPrivateSize;
    DWORD dwPrivateOffset;
} CANDIDATEINFO, *PCANDIDATEINFO, NEAR *NPCANDIDATEINFO, FAR *LPCANDIDATEINFO;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagINPUTCONTEXT {
    HWND hWnd;
    BOOL fOpen;
    POINT ptStatusWndPos;
    POINT ptSoftKbdPos;
    DWORD fdwConversion;
    DWORD fdwSentence;
    union {
        LOGFONTA A;
        LOGFONTW W;
    } lfFont;
    COMPOSITIONFORM cfCompForm;
    CANDIDATEFORM cfCandForm[4];
    HIMCC hCompStr;
    HIMCC hCandInfo;
    HIMCC hGuideLine;
    HIMCC hPrivate;
    DWORD dwNumMsgBuf;
    HIMCC hMsgBuf;
    DWORD fdwInit;
    DWORD dwReserve[3];
} INPUTCONTEXT, *PINPUTCONTEXT, NEAR *NPINPUTCONTEXT, FAR *LPINPUTCONTEXT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagIMEINFO {
    DWORD dwPrivateDataSize;
    DWORD fdwProperty;
    DWORD fdwConversionCaps;
    DWORD fdwSentenceCaps;
    DWORD fdwUICaps;
    DWORD fdwSCSCaps;
    DWORD fdwSelectCaps;
} IMEINFO, *PIMEINFO, NEAR *NPIMEINFO, FAR *LPIMEINFO;
typedef struct tagSOFTKBDDATA {
    UINT uCount;
    WORD wCode[1][256];
} SOFTKBDDATA, *PSOFTKBDDATA, NEAR *NPSOFTKBDDATA, FAR * LPSOFTKBDDATA;
BOOL WINAPI ImmGetHotKey(IN DWORD, _Out_ LPUINT lpuModifiers, _Out_ LPUINT lpuVKey, _Out_ LPHKL phKL);
BOOL WINAPI ImmSetHotKey(IN DWORD, IN UINT, IN UINT, IN HKL);
BOOL WINAPI ImmGenerateMessage(IN HIMC);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
LRESULT WINAPI ImmRequestMessageA(IN HIMC, IN WPARAM, IN LPARAM);
LRESULT WINAPI ImmRequestMessageW(IN HIMC, IN WPARAM, IN LPARAM);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
HWND WINAPI ImmCreateSoftKeyboard(IN UINT, IN HWND, IN int, IN int);
BOOL WINAPI ImmDestroySoftKeyboard(IN HWND);
BOOL WINAPI ImmShowSoftKeyboard(IN HWND, IN int);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
LPINPUTCONTEXT WINAPI ImmLockIMC(IN HIMC);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
BOOL WINAPI ImmUnlockIMC(IN HIMC);
DWORD WINAPI ImmGetIMCLockCount(IN HIMC);
 HIMCC WINAPI ImmCreateIMCC(IN DWORD);
HIMCC WINAPI ImmDestroyIMCC(IN HIMCC);
LPVOID WINAPI ImmLockIMCC(IN HIMCC);
BOOL WINAPI ImmUnlockIMCC(IN HIMCC);
DWORD WINAPI ImmGetIMCCLockCount(IN HIMCC);
 HIMCC WINAPI ImmReSizeIMCC(IN HIMCC, IN DWORD);
DWORD WINAPI ImmGetIMCCSize(IN HIMCC);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
BOOL WINAPI ImeInquire(_In_ LPIMEINFO lpIMEInfo, _Out_writes_(IME_UI_CLASS_NAME_SIZE) LPTSTR lpszUIClass, IN DWORD dwSystemInfoFlags);
BOOL WINAPI ImeConfigure(IN HKL, IN HWND, IN DWORD, IN LPVOID);
DWORD WINAPI ImeConversionList(HIMC, _In_ LPCTSTR lpSource, _Out_writes_bytes_(dwBufLen) LPCANDIDATELIST lpDest, DWORD dwBufLen, UINT uFlag);
BOOL WINAPI ImeDestroy(UINT);
LRESULT WINAPI ImeEscape(HIMC, UINT, LPVOID);
BOOL WINAPI ImeProcessKey(IN HIMC, IN UINT, IN LPARAM, _In_reads_bytes_(256) CONST LPBYTE lpbKeyState);
BOOL WINAPI ImeSelect(IN HIMC, IN BOOL);
BOOL WINAPI ImeSetActiveContext(IN HIMC, IN BOOL);
UINT WINAPI ImeToAsciiEx(IN UINT uVirtKey, IN UINT uScaCode, _In_reads_bytes_(256) CONST LPBYTE lpbKeyState, _Out_writes_bytes_(sizeof(TRANSMSGLIST) + (sizeof(TRANSMSG) * (lpTransBuf->uMsgCount ? lpTransBuf->uMsgCount - 1 : 0))) LPTRANSMSGLIST lpTransBuf, IN UINT fuState, IN HIMC);
BOOL WINAPI NotifyIME(IN HIMC, IN DWORD, IN DWORD, IN DWORD);
BOOL WINAPI ImeRegisterWord(_In_ LPCTSTR lpszReading, IN DWORD, _In_ LPCTSTR lpszString);
BOOL WINAPI ImeUnregisterWord(_In_ LPCTSTR lpszReading, IN DWORD, _In_ LPCTSTR lpszString);
UINT WINAPI ImeGetRegisterWordStyle(IN UINT nItem, _Out_writes_(nItem) LPSTYLEBUF lpStyleBuf);
UINT WINAPI ImeEnumRegisterWord(IN REGISTERWORDENUMPROC, _In_opt_ LPCTSTR lpszReading, IN DWORD, _In_opt_ LPCTSTR lpszString, IN LPVOID);
BOOL WINAPI ImeSetCompositionString(IN HIMC, IN DWORD dwIndex, _In_reads_bytes_(dwCompLen) LPVOID lpComp, IN DWORD dwCompLen, _In_reads_bytes_(dwReadLen) LPVOID lpRead, IN DWORD dwReadLen);
#endif
#pragma endregion
}
