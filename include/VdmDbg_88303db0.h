#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
#include <pshpack4.h>
#pragma warning(disable:4214)
#pragma warning(disable:4121)
#include <vdmctxt.h>
typedef struct _SEGMENT_NOTE {
    WORD Selector1;
    WORD Selector2;
    WORD Segment;
    CHAR Module[MAX_MODULE_NAME+1];
    CHAR FileName[MAX_PATH16+1];
    WORD Type;
    DWORD Length;
} SEGMENT_NOTE;
typedef struct _IMAGE_NOTE {
    CHAR Module[MAX_MODULE_NAME+1];
    CHAR FileName[MAX_PATH16+1];
    WORD hModule;
    WORD hTask;
} IMAGE_NOTE;
typedef struct {
    DWORD dwSize;
    char szModule[MAX_MODULE_NAME+1];
    HANDLE hModule;
    WORD wcUsage;
    char szExePath[MAX_PATH16+1];
    WORD wNext;
} MODULEENTRY, *LPMODULEENTRY;
typedef struct _TEMP_BP_NOTE {
    WORD Seg;
    DWORD Offset;
    BOOL bPM;
} TEMP_BP_NOTE;
typedef struct _VDM_SEGINFO {
    WORD Selector;
    WORD SegNumber;
    DWORD Length;
    WORD Type;
    CHAR ModuleName[MAX_MODULE_NAME];
    CHAR FileName[MAX_PATH16];
} VDM_SEGINFO;
typedef struct {
    DWORD dwSize;
    DWORD dwAddress;
    DWORD dwBlockSize;
    HANDLE hBlock;
    WORD wcLock;
    WORD wcPageLock;
    WORD wFlags;
    BOOL wHeapPresent;
    HANDLE hOwner;
    WORD wType;
    WORD wData;
    DWORD dwNext;
    DWORD dwNextAlt;
} GLOBALENTRY, *LPGLOBALENTRY;
typedef DWORD (CALLBACK* DEBUGEVENTPROC)( LPDEBUG_EVENT, LPVOID );
#include <poppack.h>
BOOL
WINAPI
VDMProcessException(
    LPDEBUG_EVENT lpDebugEvent
    );
BOOL
WINAPI
VDMGetThreadSelectorEntry(
    HANDLE hProcess,
    HANDLE hThread,
    WORD wSelector,
    LPVDMLDT_ENTRY lpSelectorEntry
    );
ULONG
WINAPI
VDMGetPointer(
    HANDLE hProcess,
    HANDLE hThread,
    WORD wSelector,
    DWORD dwOffset,
    BOOL fProtMode
    );
BOOL
WINAPI
VDMGetContext(
    HANDLE hProcess,
    HANDLE hThread,
    LPVDMCONTEXT lpVDMContext
);
BOOL
WINAPI
VDMSetContext(
    HANDLE hProcess,
    HANDLE hThread,
    LPVDMCONTEXT lpVDMContext
);
BOOL
WINAPI
VDMGetSelectorModule(
    HANDLE hProcess,
    HANDLE hThread,
    WORD wSelector,
    PUINT lpSegmentNumber,
    _In_ LPSTR lpModuleName,
    UINT nNameSize,
    _In_ LPSTR lpModulePath,
    UINT nPathSize
);
BOOL
WINAPI
VDMGetModuleSelector(
    HANDLE hProcess,
    HANDLE hThread,
    UINT wSegmentNumber,
    _In_ LPSTR lpModuleName,
    LPWORD lpSelector
);
BOOL
WINAPI
VDMModuleFirst(
    HANDLE hProcess,
    HANDLE hThread,
    LPMODULEENTRY lpModuleEntry,
    DEBUGEVENTPROC lpEventProc,
    LPVOID lpData
);
BOOL
WINAPI
VDMModuleNext(
    HANDLE hProcess,
    HANDLE hThread,
    LPMODULEENTRY lpModuleEntry,
    DEBUGEVENTPROC lpEventProc,
    LPVOID lpData
);
BOOL
WINAPI
VDMGlobalFirst(
    HANDLE hProcess,
    HANDLE hThread,
    LPGLOBALENTRY lpGlobalEntry,
    WORD wFlags,
    DEBUGEVENTPROC lpEventProc,
    LPVOID lpData
);
BOOL
WINAPI
VDMGlobalNext(
    HANDLE hProcess,
    HANDLE hThread,
    LPGLOBALENTRY lpGlobalEntry,
    WORD wFlags,
    DEBUGEVENTPROC lpEventProc,
    LPVOID lpData
);
typedef BOOL (WINAPI *PROCESSENUMPROC)( DWORD dwProcessId, DWORD dwAttributes, LPARAM lpUserDefined );
typedef BOOL (WINAPI *TASKENUMPROC)( DWORD dwThreadId, WORD hMod16, WORD hTask16, LPARAM lpUserDefined );
typedef BOOL (WINAPI *TASKENUMPROCEX)( DWORD dwThreadId, WORD hMod16, WORD hTask16,
                                       PSZ pszModName, PSZ pszFileName, LPARAM lpUserDefined );
INT
WINAPI
VDMEnumProcessWOW(
    PROCESSENUMPROC fp,
    LPARAM lparam
);
INT
WINAPI
VDMEnumTaskWOW(
    DWORD dwProcessId,
    TASKENUMPROC fp,
    LPARAM lparam
);
INT
WINAPI
VDMEnumTaskWOWEx(
    DWORD dwProcessId,
    TASKENUMPROCEX fp,
    LPARAM lparam
);
BOOL
WINAPI
VDMTerminateTaskWOW(
    DWORD dwProcessId,
    WORD htask
);
BOOL
WINAPI
VDMStartTaskInWOW(
    DWORD dwProcessId,
    _In_ LPSTR lpCommandLine,
    WORD wShow
);
BOOL
WINAPI
VDMKillWOW(
    VOID
);
BOOL
WINAPI
VDMDetectWOW(
    VOID
);
BOOL
WINAPI
VDMBreakThread(
    HANDLE hProcess,
    HANDLE hThread
);
DWORD
WINAPI
VDMGetDbgFlags(
    HANDLE hProcess
    );
BOOL
WINAPI
VDMSetDbgFlags(
    HANDLE hProcess,
    DWORD dwFlags
    );
BOOL
WINAPI
VDMIsModuleLoaded(
    _In_ LPSTR szPath
    );
BOOL
WINAPI
VDMGetSegmentInfo(
    WORD Selector,
    ULONG Offset,
    BOOL bProtectMode,
    VDM_SEGINFO *pSegInfo
    );
_Success_(return != FALSE)
BOOL
WINAPI
VDMGetSymbol(
    _In_ LPSTR szModule,
    WORD SegNumber,
    DWORD Offset,
    BOOL bProtectMode,
    BOOL bNextSymbol,
    _Out_writes_(VDMDBG_MAX_SYMBOL_BUFFER) LPSTR szSymbolName,
    PDWORD pDisplacement
    );
BOOL
WINAPI
VDMGetAddrExpression(
    _In_ LPSTR szModule,
    _In_ LPSTR szSymbol,
    PWORD Selector,
    PDWORD Offset,
    PWORD Type
    );
typedef BOOL (WINAPI *VDMPROCESSEXCEPTIONPROC)(LPDEBUG_EVENT);
typedef BOOL (WINAPI *VDMGETTHREADSELECTORENTRYPROC)(HANDLE,HANDLE,DWORD,LPVDMLDT_ENTRY);
typedef ULONG (WINAPI *VDMGETPOINTERPROC)(HANDLE,HANDLE,WORD,DWORD,BOOL);
typedef BOOL (WINAPI *VDMGETCONTEXTPROC)(HANDLE,HANDLE,LPVDMCONTEXT);
typedef BOOL (WINAPI *VDMSETCONTEXTPROC)(HANDLE,HANDLE,LPVDMCONTEXT);
typedef BOOL (WINAPI *VDMKILLWOWPROC)(VOID);
typedef BOOL (WINAPI *VDMDETECTWOWPROC)(VOID);
typedef BOOL (WINAPI *VDMBREAKTHREADPROC)(HANDLE);
typedef BOOL (WINAPI *VDMGETSELECTORMODULEPROC)(HANDLE,HANDLE,WORD,PUINT,LPSTR, UINT,LPSTR, UINT);
typedef BOOL (WINAPI *VDMGETMODULESELECTORPROC)(HANDLE,HANDLE,UINT,LPSTR,LPWORD);
typedef BOOL (WINAPI *VDMMODULEFIRSTPROC)(HANDLE,HANDLE,LPMODULEENTRY,DEBUGEVENTPROC,LPVOID);
typedef BOOL (WINAPI *VDMMODULENEXTPROC)(HANDLE,HANDLE,LPMODULEENTRY,DEBUGEVENTPROC,LPVOID);
typedef BOOL (WINAPI *VDMGLOBALFIRSTPROC)(HANDLE,HANDLE,LPGLOBALENTRY,WORD,DEBUGEVENTPROC,LPVOID);
typedef BOOL (WINAPI *VDMGLOBALNEXTPROC)(HANDLE,HANDLE,LPGLOBALENTRY,WORD,DEBUGEVENTPROC,LPVOID);
typedef INT (WINAPI *VDMENUMPROCESSWOWPROC)(PROCESSENUMPROC,LPARAM);
typedef INT (WINAPI *VDMENUMTASKWOWPROC)(DWORD,TASKENUMPROC,LPARAM);
typedef INT (WINAPI *VDMENUMTASKWOWEXPROC)(DWORD,TASKENUMPROCEX,LPARAM);
typedef BOOL (WINAPI *VDMTERMINATETASKINWOWPROC)(DWORD,WORD);
typedef BOOL (WINAPI *VDMSTARTTASKINWOWPROC)(DWORD,LPSTR,WORD);
typedef DWORD (WINAPI *VDMGETDBGFLAGSPROC)(HANDLE);
typedef BOOL (WINAPI *VDMSETDBGFLAGSPROC)(HANDLE,DWORD);
typedef BOOL (WINAPI *VDMISMODULELOADEDPROC)(LPSTR);
typedef BOOL (WINAPI *VDMGETSEGMENTINFOPROC)(WORD,ULONG,BOOL,VDM_SEGINFO);
typedef BOOL (WINAPI *VDMGETSYMBOLPROC)(_In_ LPSTR, WORD, DWORD, BOOL, BOOL, _Out_writes_(VDMDBG_MAX_SYMBOL_BUFFER) LPSTR, PDWORD);
typedef BOOL (WINAPI *VDMGETADDREXPRESSIONPROC)(LPSTR, LPSTR, PWORD, PDWORD, PWORD);
}
#endif
#pragma endregion
